#read csv
import csv
import pandas as pd
import matplotlib.pyplot as plt
from predict import load_thetas

filename = "thetas.csv"
# Charger les thetas
theta0, theta1 = load_thetas(filename)
# Charger les données de dispersion
data_scatter = pd.read_csv("data.csv")
x = data_scatter.km
y = data_scatter.price

# plt.plot(mileage, price, markersize=4)
plt.title('Price of car based on mileage')
plt.xlabel('Mileage (in miles)')
plt.ylabel('Price (in $)')

# Tracer la dispersion
plt.scatter(x, y)

# Créer la ligne de régression
regression_line = theta0 + theta1 * x

# Tracer la ligne de régression
plt.plot(x, regression_line, color='red', linewidth=2)

# Afficher le graphique
plt.show()