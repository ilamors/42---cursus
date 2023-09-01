import csv

# Program 1 - Linear Prediction

def hypothesis(theta0, theta1, mileage):
    return theta0 + (theta1 * mileage)

def load_thetas(filename):
    theta0, theta1 = 0.0, 0.0
    try:
        with open(filename, "r") as file:
            csv_reader = csv.reader(file)
            for row in csv_reader:
                if row[0] == "theta0":
                    theta0 = float(row[1])
                elif row[0] == "theta1":
                    theta1 = float(row[1])
    except FileNotFoundError:
        print(f"File '{filename}' not found.")
    return theta0, theta1

def main():
    filename = "thetas.csv"
    theta0, theta1 = load_thetas(filename)
    
    try:
        input_mileage = float(input("Enter car mileage: "))
        estimated_price = round(hypothesis(theta0, theta1, input_mileage))
        print(f"Estimated price of the car with mileage {input_mileage} is: {estimated_price} euros")
    except ValueError:
        print("Invalid input. Please enter a valid numeric mileage.")

if __name__ == "__main__":
    main()
