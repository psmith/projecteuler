lastI = 1
currentI = 1
i = 1
fib = []
while i < 4000000:
	currentI = i;
	i = i + lastI
	lastI = currentI
	if i % 2 == 0:
		fib.append(i)
print(sum(fib))
	