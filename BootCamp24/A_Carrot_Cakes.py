import math

n, t, k, d = map(int, input().split())
one = math.ceil(n / k) * t
cakes_baked_during_d = (d // t) * k
cakes_for_both = n - cakes_baked_during_d

second = d + math.ceil(cakes_for_both / (2 * k)) * t

# print (f"one : {one}")
# print (f"second: {second}")


if second < one :
	print ("YES")
else :
	print ("NO")