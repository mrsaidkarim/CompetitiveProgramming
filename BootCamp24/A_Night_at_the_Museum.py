
str = input("")

res = 0
last = 'a'
for c in str:
	res += min(abs(ord(c) - ord(last)), (26 - abs(ord(c) - ord(last))))
	last = c

print (res) 