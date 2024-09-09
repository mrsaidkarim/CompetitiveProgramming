
i = 0
mtrx = []
while i < 5 :
	lst = input("").split()
	mtrx.append(lst)
	i += 1

r = 1
c = 0
for row in mtrx :
	if '1' in row:
		c = row.index('1')
		break
	r += 1
c += 1
res = abs(c - 3) + abs(r - 3)
print (res)
		
