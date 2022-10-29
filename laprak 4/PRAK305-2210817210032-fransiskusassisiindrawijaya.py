sec = int(input())
d = sec/86400
h = ((sec/3600) %24)
m = ((sec/60)%60)
s = (sec%60)
hd = (h-24)
if h >=24:
    print("%02d hari %02d:%02d:%02d" %(d,hd,m,s))
elif h<=23:
    print("%02d:%02d:%02d" %(h,m,s))