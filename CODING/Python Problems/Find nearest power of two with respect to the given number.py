QUESTION:-
INPUT A NUMBER, THEN FIND THE NEAREST NUMBER IN POWER OF TWO WITH RESPECT TO THE INPUT NUMBER
INPUT:
1ST LINE :---TEST CASES
2ND LINE:---INTEGER NUMBER


EXAMPLE:
INPUT:
3
1
5
9
OUTPUT:
1
4
8


SOLUTION:--



def fun(x):
    y=x
    while(y%2==0 and y!=1):
        y=y/2
    if (y==1):
        return True
    
        
t=int(input())
for i in range(t):
    n=int(input())
    if (fun(n)==True):
        print(n)
    else:
        temp=n+1
        while True:
            if (fun(temp)==True):
                maxi=temp
                break
            temp=temp+1

        temp=n-1
        while True:
            if (fun(temp)==True):
                mini=temp
                break
            temp=temp-1

        if(maxi-n>n-mini):
            print(mini)
        else:
            print(maxi)
            
            
