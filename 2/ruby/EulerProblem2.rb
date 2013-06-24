firstNumber = 1;
previousSecond = 0;
secondNumber = 2;
sum = 0;

while secondNumber <= 4000000
  sum += secondNumber if secondNumber % 2 == 0;
  previousSecond = secondNumber;
  secondNumber = firstNumber + secondNumber;
  firstNumber = previousSecond;
end

puts sum;
