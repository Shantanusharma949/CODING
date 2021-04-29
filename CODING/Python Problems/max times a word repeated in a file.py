import re
f=open("abc.txt","r")
strr=f.read()
words=re.findall(r'\w+',strr)
from collections import Counter
capwords=[word.upper() for word in words]
countwords=Counter(capwords)
print(countwords.most_common(1))
