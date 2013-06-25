def isPrime(number)
  return false if number%2 == 0;
  i = 3;
  while i*i <= number
    return false if number%i == 0;
    i += 2;
  end
  return true;
end

def getHighestPrimeMultiple()
  numberToCheck = 600851475143;
  highestMultiple = numberToCheck;
  highestCandidate = 0;
  2.upto(highestMultiple - 1){
    |i|
    if numberToCheck % i == 0
      highestMultiple = numberToCheck / i;
      return highestMultiple if isPrime(highestMultiple);
      highestCandidate = i if isPrime(i) && i > highestCandidate;
    end
  }
  return highestCandidate;
end

puts getHighestPrimeMultiple();