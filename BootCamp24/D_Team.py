
n = input("")

n = int(n)
res = 0
while n > 0 :
	pov = input("").split()
	if pov.count('1') > 1 :
		res += 1
	n -= 1

print(res)