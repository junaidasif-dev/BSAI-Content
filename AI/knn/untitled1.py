import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
data=pd.read_csv(r'C:\Users\student\Desktop\knn\iris.csv')
print(data.head())
x=data.drop('species','columns')
y=data['species']
#Fig. 4: K-nearest neighbour
#Figure 1: K-NN example
#NUML-Islamabad Prepared by: Faiq Ahmad Khan AI-Lab Manual
x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.20)
#print(x_train)
scaler=StandardScaler()
scaler.fit(x_train)
#print(x_train)
x_train=scaler.transform(x_train)
x_test=scaler.transform(x_test)
print(x_train)
print(x_test)
from sklearn.neighbors import KNeighborsClassifier
classifier=KNeighborsClassifier(n_neighbors=3)
classifier.fit(x_train,y_train)
result=classifier.predict(x_test)
print(result)
from sklearn.metrics import confusion_matrix,classification_report
print(classification_report(y_test,result))
print(confusion_matrix(y_test,result))
