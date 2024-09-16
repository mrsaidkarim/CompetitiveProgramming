
n, a = map(int, input("").split())

lst = input("").split()

a -= 1
i = a - 1
j = a + 1
res = int(lst[a])
while i >= 0 or j < len(lst) :
	if i < 0 and lst[j] == '1' :
		res += 1
	elif j >= len(lst) and lst[i] == '1':
		res += 1
	elif i >= 0 and j < len(lst) :
		if lst[i] == lst[j] and lst[i] == '1' :
			res += 2
	i -= 1
	j += 1

print (res)
