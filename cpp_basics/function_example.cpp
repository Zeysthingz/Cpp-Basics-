//
// Created by zeys on 09.05.2022.
//
// CALCULATOR
#include "iostream"
using namespace std;

//TODO :function decleration
// enum kelimelere sayı değeri atar

enum OperationCodes {

  opSum = 1,
  opDivide = 2,
  opSubs = 3,
  opMulti = 4,
  exitOp = 5,

};

// Fonksyona parametre geçirmediğim için paremetrelri fonksiyon içinde alıcam.
int sum();
int multiple();
int divide();
int substract();
void display_operations();

int main() {

  int condition = 0;
  while (condition != exitOp) {
    cout << "Please choise the operation that you want to make\n\n" << endl;
    display_operations();

    cin >> condition;
    switch (condition) {
      case opSum:sum();
        break;
      case opDivide:divide();
        break;
      case opSubs:substract();
        break;
      case opMulti:multiple();
        break;
      case exitOp:
      default:cout << "Please select appropriate value and Try Again :)" << endl;

    }
  }

  return 0;
}
//FUNCTION DECLERATIONS


void display_operations() {
  cout << "1 for Summary\n" << endl;
  cout << "2 for Divide \n" << endl;
  cout << "3 for Substraction\n" << endl;
  cout << "4 for Multiplication\n" << endl;
  cout << "5 for Exit" << endl;
}

int sum() {
  int val1, val2, result;
  cout << "Please enter two value" << endl;

  cin >> val1>>val2;
//  cin >> val2;
  result = val1 + val2;
  cout << "Result is " << result << endl;
  return result;
}

int multiple() {
  int val1, val2, result;
  cout << "Please enter two value" << endl;
  cin >> val1;
  cin >> val2;
  result = val1 * val2;
  return result;
}
int divide() {
  int val1, val2, result;
  cout << "Please enter two value" << endl;
  cin >> val1;
  cin >> val2;
  result = val1 / val2;
  return result;
}

int substract() {
  int val1, val2, result;
  cout << "Please enter two value" << endl;
  cin >> val1;
  cin >> val2;
  result = val1 - val2;
  return result;
}

