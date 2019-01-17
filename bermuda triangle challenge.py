#aim:bermuda triangle challenge
#developer : yash mathur
# language:python v3.1
x1=int(input("enter x1:"))
y1=int(input("enter y1:"))
x2=int(input("enter x2:"))
y2=int(input("enter y2:"))
x3=int(input("enter x3:"))
y3=int(input("enter y3:"))
xp=int(input("enter xp:"))
yp=int(input("enter yp:"))
s1=((x2-x1)**2+(y2-y1)**2)**0.5
s2=((x2-x3)**2+(y2-y3)**2)**0.5
s3=((x3-x1)**2+(y3-y1)**2)**0.5
if s1>s2 and s1>s3:
	large=s1
	sp=((xp-x1)**2+(yp-y1)**2)**0.5
elif s2>s3:
	large=s2
	sp=((x2-xp)**2+(y2-yp)**2)**0.5
else:
	large=s3
	sp=((xp-x3)**2+(yp-y3)**2)**0.5
if sp>large:
	print("it is still floating")
else:
	print("it has been drowned")