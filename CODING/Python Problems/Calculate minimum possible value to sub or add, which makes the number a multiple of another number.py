def fun(n,k):
    j=1
    while True:
        
        if (n>k*j and n<(j+1)*k):
            if (n-k*j<(j+1)*k-n):
                print(n-k*j)
                break
            else:
                print((j+1)*k-n)
                break
        j=j+1
            



t=int(input())
for i in range(t):
    l=list(map(int,input().split()))
    if (l[0]<l[1]):
        print(l[1]-l[0])
    else:
        fun(l[0],l[1])
