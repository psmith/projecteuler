lastI = 1
currentI = 1
i = 1
fib = [1]
print(i)
while i < 4000000
	currentI = i;
	i = i + lastI
	lastI = currentI
	fib.append(i)
	print(i)
	