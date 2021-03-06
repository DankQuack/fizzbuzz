void main() {
  var fizz = 'fizz', buzz = 'buzz';

  for (var i = 1; i < 101; i++) {
    if (i % 15 == 0)
      print('$fizz$buzz');
    else if (i % 3 == 0)
      print('$fizz');
    else if (i % 5 == 0)
      print('$buzz');
    else
      print(i);
  }
}
