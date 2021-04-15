#filename=input("input the file name")
#f_extens=filename.split(".")
#print(repr(f_extens[-1]))

#color_list=["red","green","white","black"]
#print(color_list[0], color_list[-1])

#date="11,12,2014"
#x=date.replace(",","/")
#print(x)

#n=input()
#x=int(n)+(int(n)*10+int(n))+(int(n)*100+int(n)*10+int(n))
#print(x)

from datetime import date
date1=date(2014,7,2)
date2=date(2014,7,11)
diff=date1-date2
print(diff.days)
