
n = int(input(""))

lst = map(int, input("").split())

my_dict = {i: 0 for i in range(1, n+1)}

for x in lst:
	my_dict[x] = 1
	while n > 0 and my_dict[n] == 1 :
		print (n, end=' ')
		n -= 1
	print()

