lst = []
n = int(input("Enter the Number of Element : "))
print('Enter the Elements :')
lst = list(map(int,input().split()))
k=int(input("enter the element to be searched : "))
for i in lst :
    if i==k:
        print("element found at Position" , lst.index(k)+1)
        break
