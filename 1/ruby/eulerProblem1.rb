sum = 0;

0.upto(999) {
  |i|
  if i%3 == 0 || i%5 == 0
    sum += i;
  end
}

puts sum;