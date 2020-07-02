i=c=0
while i<10:
 print(bin(c).replace('b','')[:2**i])
 t=~c&2**2**i-1
 c<<=2**i
 c+=t
 i+=1
