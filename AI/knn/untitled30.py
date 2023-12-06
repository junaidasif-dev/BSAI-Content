#QUESTION 1

import pandas as pd

data = pd.read_csv(r'C:\Users\student\Desktop\knn\iris.csv')
"""print("Shape of the data:", data.shape)
print("Type of the data:", type(data))
print("First 3 rows of the data:")
print(data.head(3))"""


#QUESTION 2

from sklearn import datasets
iris = datasets.load_iris()
"""print("Keys:", data.keys())
print("Shape of the data:", data.shape)
print("Feature names:", iris.feature_names)
print("Description:\n", iris.DESCR)"""


#QUESTION 3

#print(data.info())


#QUESTION 4

import seaborn as sns
import matplotlib.pyplot as plt
ax=plt.subplots(1,1,figsize=(10,8))
sns.countplot('species',data=iris)
plt.title("Iris Species Count")
plt.show()