
n, m, k = map(int, input("").split())


rows = [(0, 0)] * n
columns = [(0, 0)] * m
count = 0
for i in range (k):
	count += 1
	check, x, a = map(int, input("").split())
	if check == 1:
		rows[x - 1] = (a, count)
	else :
		columns[x - 1] = (a, count)

for i in range(n):
	for j in range(m):
		if rows[i][1] > columns[j][1] :
			print (rows[i][0], end=' ')
		else :
			print (columns[j][0], end=' ')
	print()
