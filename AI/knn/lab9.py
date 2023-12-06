 # a = 0
 #while a<10:
    #a = a+1
   # print (a)
# for i in range(10):
       # print(i)
       #question 1
# Input a number from the user
num = int(input("Enter a number: "))
factorial = 1
if num < 0:
    print("Factorial is not defined for negative numbers.")
elif num == 0:
    print("The factorial of 0 is 1")
else:
    for i in range(1, num + 1):
        factorial *=i
    print(f"The factorial of {num} is {factorial}")5