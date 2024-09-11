
s = input("")

u = 0
l = 0
for c in s :
	if c.islower() :
		l += 1
	else :
		u += 1

if l >= u :
	print(s.lower())
else :
	print(s.upper())