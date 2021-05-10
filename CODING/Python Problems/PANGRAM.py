import string

def pangram_fun(str):
    alph="abcdefghijklmnopqrstuvwxyz"
    for char in alph:
        if char not in str.lower():
            return False
        return True
strung="the quick brown foxjumps over the lazy dog"
if(pangram_fun(strung)==True):
    print("YES")
else:
    print("NO")
