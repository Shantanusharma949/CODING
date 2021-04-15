import sys
n=len(sys.argv)

a=sys.argv

print(a)
print(n)

sum=0
for i in range(1,n):
    sum=sum+int(a[i])
print(sum)
