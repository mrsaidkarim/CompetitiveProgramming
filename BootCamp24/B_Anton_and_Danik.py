
n = input("")
games = input("")

n = int(n)

a = 0
d = 0
for x in games :
	if x == 'A':
		a += 1
	elif x == 'D':
		d += 1
if a > d:
	print ("Anton")
elif a < d:
	print ("Danik")
else :
	print("Friendship")
