
line1 = input("")
line2 = input("")

line1_list = line1.split()
n = int(line1_list[0])
h = int(line1_list[1])

lst = list(map(int, line2.split()))
res = 0
for x in lst:
	if x > h :
		res += 2
	else :
		res += 1

print(res)