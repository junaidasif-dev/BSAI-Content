# Read a csv file 
import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
df = pd.read_csv('sales_data.csv')
#print(df.head())
df['amount'].plot(kind='box')
plt.show()