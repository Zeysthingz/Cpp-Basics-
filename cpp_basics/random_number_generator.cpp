//
// Created by zeys on 09.05.2022.
//

#include "iostream"
#include "cmath"
#include "cstdlib"
#include "ctime"

using namespace std;
int main() {
  short num;
//  assignment
//  num=45;
  cout<< "Value ="<<cos(num)<<endl;
//  cout<< "Value ="<<pow(num,2)<<endl;
//  cout<< "Value ="<<sqrt(num)<<endl;

//Have to add seed value to generate random number for every loop
  srand((unsigned)time(NULL));

//Bu şekilde hep aynı random valuelerı verir.
  int i, j;
  for (i = 0; i < 5; i++) {
    j = rand();
    cout << "Random value is :" << j << endl;
  }
  return 0;

}