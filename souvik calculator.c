#include <stdio.h>
// To Make A Basic Calculator
int main() {

  char op;
  double num1,num2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &num1, &num2);

  switch (op) {
    case '+':
      printf("%.3lf + %.3lf = %.3lf", num1,num2,num1+num2);
      break;
    case '-':
      printf("%.3lf - %.3lf = %3lf",num1,num2,num1-num2);
      break;
    case '*':
      printf("%.3lf * %.3lf = %.3lf",num1,num2,num1*num2);
      break;
    case '/':
      printf("%.3lf / %.3lf = %.3lf",num1,num2,num1/num2);
      break;
    default:
      printf("operator is not valid");
  }

  return 0;
}
