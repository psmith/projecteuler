n = 600851475143
i = 2
while i * i < n
    while n % i == 0
        n = n / i
  end
    i += 1
end
puts n
