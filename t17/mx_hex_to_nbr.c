double mx_pow(double n, unsigned int pow) {
  double answer;
  if (pow == 0)
    return 1;
  answer = mx_pow(n, pow / 2);
  if (pow % 2 == 0)
    return answer * answer;
  else
    return n * answer * answer;
}

int mx_strlen(const char *s) {

  unsigned int counter = 0;
  while (*s != '\0') {
    counter++;
    s++;
  }
  return counter;
}

unsigned long mx_hex_to_nbr(const char *hex) {

  unsigned long dec = 0;

  int length = mx_strlen(hex);
  for (int i = 0; i < length; i++) {

    char digit = hex[length - 1 - i];

    if (digit >= '0' && digit <= '9')
      dec += (digit - '0') * mx_pow(16, i);
    else if (digit >= 'A' 
    		&& digit <= 'F')
      dec += (digit - 'A' + 10) * mx_pow(16, i);
    else if (digit >= 'a' 
    		&& digit <= 'f')
      dec += (digit - 'a' + 10) * mx_pow(16, i);
  }
  return dec;
}

