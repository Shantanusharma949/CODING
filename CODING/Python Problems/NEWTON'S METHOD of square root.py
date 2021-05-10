def sqrtnewton(n):
    guess=n/2
    while True:
        newguess=(guess+n/guess)/2
        if abs(guess-newguess)<0.00001:
            return newguess
        guess=newguess
print(sqrtnewton(25))
