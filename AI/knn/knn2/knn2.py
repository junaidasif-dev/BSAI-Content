#QUESTION 1

import pandas as pd
import numpy as np
data = pd.read_csv(r'E:\Sem3-GH\Sem3Lab\AI\knn\iris.csv')
"""print("Shape of the data:", data.shape)
print("Type of the data:", type(data))
print("First 3 rows of the data:")
print(data.head(3))"""


#QUESTION 2

#from sklearn import datasets
#iris = datasets.load_iris()
"""print("Keys:", data.keys())
print("Shape of the data:", data.shape)
print("Feature names:", iris.feature_names)
print("Description:\n", iris.DESCR)"""


#QUESTION 3

#print(data.info())


#QUESTION 4

import pandas as pd
data = pd.read_csv(r'E:\Sem3-GH\Sem3Lab\AI\knn\iris.csv')
stats = data.describe()
print(stats)


#QUESTION 5

import pandas as pd
data = pd.read_csv(r'E:\Sem3-GH\Sem3Lab\AI\knn\iris.csv')
setosa = data[data['species'] == 'setosa']
versicolor = data[data['species'] == 'versicolor']
virginica = data[data['species'] == 'virginica']
print("Setosa Observations:")
print(setosa.head())
print("\nVersicolor Observations:")
print(versicolor.head())
print("\nVirginica Observations:")
print(virginica.head())


#QUESTION 6

import pandas as pd
data = pd.read_csv(r'E:\Sem3-GH\Sem3Lab\AI\knn\iris.csv')
print("Original DataFrame:")
print(data.head())
data.drop('Id', axis=1, inplace=True)
print("\nModified DataFrame:")
print(data.head())


#QUESTION 7

import pandas as pd
data = pd.read_csv(r'E:\Sem3-GH\Sem3Lab\AI\knn\iris.csv')
first_four_cells = data.iloc[:2, :2]
print(first_four_cells)


#QUESTION 8

import pandas as pd
import matplotlib.pyplot as plt
data = pd.read_csv(r'E:\Sem3-GH\Sem3Lab\AI\knn\iris.csv')
data.boxplot()
plt.title('General Statistics of Iris Dataset')
plt.ylabel('Measurement (cm)')
plt.xticks(rotation=45)
plt.grid(False)
plt.show()


#QUESTION 9

import seaborn as sns
import matplotlib.pyplot as plt
ax=plt.subplots(1,1,figsize=(10,8))
sns.countplot('species',data=iris)
plt.title("Iris Species Count")
plt.show()


#QUESTION 10

import pandas as pd
import matplotlib.pyplot as plt
data = pd.read_csv('iris.csv')
species_counts = data['species'].value_counts()
plt.figure(figsize=(6, 6))
plt.pie(species_counts, labels=species_counts.index, autopct='%1.1f%%', startangle=140)
plt.title('Frequency of Species in Iris Dataset')
plt.axis('equal')  # Equal aspect ratio ensures that pie is drawn as a circle.
plt.show()
