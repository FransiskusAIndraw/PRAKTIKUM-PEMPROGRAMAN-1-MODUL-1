i1,i2=input().split()
i1=int(i1) ; i2=int(i2)
if i1>i2:
 i=i1 ; j=i2
 while i>= i2 and j <=i1:
    print("%d %d"%(i, j), end='')
    if i==i2 : break
    else : print(" - ", end='')
    i-=1;j+=1
else:
    i=i1 ; j=i2
    while i<=i2 and j >= i1:
        print("%d %d"%(i,j), end='')
        if i == i2 : break
        else : print (" - ", end='')
        i +=1 ; j -=1