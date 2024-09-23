
t = int(input())
for j in range(t) :
	n, k = map(int, input().split())
	lst = list(map(int, input().split()))
	r = 0
	res = 0
	for i in range(n) :
		if lst[i] >= k :
			r += lst[i]
		elif lst[i] == 0 and r > 0:
			res += 1
			r -= 1
	print (res)