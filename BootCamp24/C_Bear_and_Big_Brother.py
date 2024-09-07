
line1 = input("")

line1_list = line1.split()
l = int(line1_list[0])
b = int(line1_list[1])

res = 0
while l <= b :
	l *= 3
	b *= 2
	res += 1

print(res)