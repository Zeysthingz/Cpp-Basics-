//
// Created by zeys on 09.05.2022.
//

#include "iostream"
#include "ctime"
#include "cstdlib"
using namespace std;

int rollDie() {
  int min = 1, max = 6, result;
  result = rand() % (max - min + 1) + min;
  return result;
}

int main() {
  //  seed
  //  seed burda tanımlanırsa 0 lanmaz kaldığı yerden devam eder ve hep random sayı oluşturabilir.
  //srand zaman parametresini değitırır işlemcinin zaman periyoduna göre.
  srand((unsigned) time(NULL));
  for (int i = 0; i < 3; i++) {
    cout << "Rolling Dice: " << rollDie() << " " << rollDie() << endl;
  }
  return 0;
}
