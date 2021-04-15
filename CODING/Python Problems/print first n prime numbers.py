n = int(input('Enter the Number : '))
count=0 
for i in range(2,n**2):
    flag=1
    for j in range(2,i):
        if(i%j==0):
            flag=0
            break
    if flag==1 :
        count+=1
        print(i)
        if count == n :
            break
    else:
        flag=1
