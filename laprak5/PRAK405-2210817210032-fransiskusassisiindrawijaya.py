an1,an2 = input().split()
an1 = int(an1) ; an2 = int(an2)
for i in range (1,an1+1):
    jar=i
    while jar >1:
        print("(%d * %d) + "%(jar,an2), end='');jar-=1
    o = 1 ; hasil=(i * an2)
    while o<i:
        hasil += ( o * an2) ; o+=1
    print("(%d * %d) = %d"%(jar,an2,hasil))
p=1 ; q=1 ;t = 0
while p<=an1:
    t += q * an2 ; q += p + 1 ; p +=1
print("%d"%(t)) 