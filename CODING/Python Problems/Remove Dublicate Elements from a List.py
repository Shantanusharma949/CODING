l=list(map(int,input().split()))
for i in l:
    c=l.count(i)
    if c>1:
        l.remove(i)

print(l)
