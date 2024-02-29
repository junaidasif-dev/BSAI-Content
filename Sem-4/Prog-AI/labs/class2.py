"""if 'f' in 'foo': 
    print('1')
else:    
    print('2')"""

#if 'z' in 'foo': print('1'); print('2'); print('3')

'''x=2
if x==1: print('foo'); print('bar'); print('baz')
elif x==2: print('Qux')
else: print('corge'); print('grault')'''

'''raining = False
print("Let's go to the", 'beach' if not raining else 'library')'''

'''raining = True
print("Let's go to the", 'beach' if not raining else 'library')'''

"""age = 21
s= 'minor' if (age < 21) else 'adult'
print(s)"""

#print('yes' if ('qux' in ['foo', 'bar', 'baz']) else 'no')

#print('yes'); print('g') if 'f' in 'foo' else print('no'); print('nhi')

"""x=y=40
z= 1+x if x>y else y
print(z)

z= (1+x if x>y else (y+2))
print(z)

x=y=40
z=1+ (x if x>y else y) + 2
print(z)"""

"""n=5
while n>0:
    n= n-1
    print(n)"""
    
"""a = "Junaid" 
for i in a:
    print(i) """  
    
"""for i in range(0,5,1):
    print(i)"""
    
n = int(input("Enter number:"))
if n<0:
    print(f"{n} is negative number")
elif n>0:
    print(f"{n} is positive number")
else:
    print(f"{n} is  zero")