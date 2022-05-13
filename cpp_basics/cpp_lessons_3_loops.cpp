//
// Created by zeys on 26.04.2022.
//

#include "iostream"
int main() {

  int counter = 0;
//  TODO WHILE
//  if its true it continues
//  while (counter <= 10) {
//    std::cout<<counter<<std::endl;
//    counter+=1;
//
//  }

//TODO FOR
  for (int i = 0; i < 10; i++) {
//    std::cout<<i<<std::endl;
  }
  for (int i = 0; i < 10;) {
    std::cout << i << std::endl;
    i += 3;
  }

//  Koşul yanlıssa bile kodu bir kez kosturur
// TODO DO WHILE

  int veriable = 0;

  do {
    std::cout << "hello " << veriable << std::endl;
    veriable++;
  } while (veriable < -10);


//  TODO NESTED LOOPS
//TODO break keywordu bulunduğu döngüyü kırar.
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 5; ++j) {
      if (i >= 1) {
        break;
      }
      std::cout << "i and j " << i << " " << j << std::endl;

    }

  }

  return 0;
}