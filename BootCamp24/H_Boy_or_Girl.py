
s = input("")

letters = {}
for c in s :
	if c in letters :
		letters[c] += 1
	else :
		letters[c] = 1

if len(letters) % 2 == 0 :
	print ("CHAT WITH HER!")
else :
	print ("IGNORE HIM!")