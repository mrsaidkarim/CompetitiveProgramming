
n = int(input(""))

groups = []
i = 0
while i < n :
	groups.append(int(input("")))
	i += 1

res = 1
for i in range(0, n - 1) :
	if groups[i] != groups[i + 1] :
		res += 1


print (res)