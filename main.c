// Author: Jasmine Sandhu jps6818@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(int n) {
  if (n < 10) 
    return n; 
  else
    return (n % 10 + digit_sum(n / 10)); 
}

int main() { 
  char *n = readline("Enter an int: ");
  int ni = atoi(n);
  printf("sum of digits of %d is %d.\n", ni, digit_sum(ni));
}