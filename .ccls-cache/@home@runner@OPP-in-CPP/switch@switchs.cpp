#include <iostream>
using namespace std;

int calculate(int num1, int num2, char op) {
  int result;

  switch (op) {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    result = num1 / num2;
    break;
  case '%':
    result = num1 % num2;
    break;
  default:
    cout << "Invalid operator" << endl;
    return 0;
  }

  return result;
}

int switches() {
  int num1, num2;
  char op;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter operator: ";
  cin >> op;
  cout << "Enter second number: ";
  cin >> num2;

  int result = calculate(num1, num2, op);

  cout << "Result: " << result << endl;
  cout << "Operation: " << calculate(num1, num2, op) << endl;

  return 0;
}
