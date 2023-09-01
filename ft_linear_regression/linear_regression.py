# Program 2 - Training with Gradient Descent

import csv

def hypothesis(theta0, theta1, mileage):
    return theta0 + (theta1 * mileage)

def clean_data(mileage, price):
    del mileage[0]
    del price[0]
    return mileage, price

def load_data(filename):
    mileage = []
    price = []
    try:
        with open(filename, "r") as file:
            csv_reader = csv.reader(file)
            next(csv_reader)  # Skip header
            for row in csv_reader:
                try:
                    mileage.append(float(row[0]))
                    price.append(float(row[1]))
                except ValueError:
                    pass
    except FileNotFoundError:
        print(f"File '{filename}' not found.")
    return mileage, price

def train_model(mileage, price, learning_rate=0.1, iterations=1000):
    m = len(mileage)
    theta0, theta1 = 0.0, 0.0
    
    for _ in range(iterations):
        sum_diff_theta0 = sum(hypothesis(theta0, theta1, x) - y for x, y in zip(mileage, price))
        sum_diff_theta1 = sum((hypothesis(theta0, theta1, x) - y) * x for x, y in zip(mileage, price))
        
        new_theta0 = theta0 - (learning_rate * (1 / m) * sum_diff_theta0)
        new_theta1 = theta1 - (learning_rate * (1 / m) * sum_diff_theta1)
        
        theta0, theta1 = new_theta0, new_theta1
    
    return theta0, theta1
    save_thetas(theta0, theta1)

def save_thetas(theta0, theta1):
    with open("thetas.csv", "w", newline="") as file:
        writer = csv.writer(file)
        writer.writerow(["theta0", theta0])
        writer.writerow(["theta1", theta1])
    print("Theta values saved to 'thetas.csv'.")

if __name__ == "__main__":
    filename = "data.csv"
    mileage, price = load_data(filename)
    cleaned_mileage, cleaned_price = clean_data(mileage.copy(), price.copy())
    
    max_mileage = max(cleaned_mileage)
    max_price = max(cleaned_price)
    
    scaled_mileage = [x / max_mileage for x in cleaned_mileage]
    scaled_price = [y / max_price for y in cleaned_price]
    
    trained_theta0, trained_theta1 = train_model(scaled_mileage, scaled_price)
    final_theta0 = trained_theta0 * max_price
    final_theta1 = (trained_theta1 * max_price) / max_mileage
    
    save_thetas(final_theta0, final_theta1)
