lst = []
n = int(input("Enter the Number of Element : "))
print('Enter the Elements :')
lst = list(map(int,input().split()))
maxi = lst[0]

for i in lst:
    if i>maxi:
        maxi = i
print(maxi)
