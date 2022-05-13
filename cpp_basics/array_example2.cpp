//
// Created by zeys on 11.05.2022.
//

#include "iostream"
using namespace std;
int main() {
//  int i = 0;
//  int myArray[10];
//  while (i < 10) {
//    myArray[i] = i;
//    cout << myArray[i] << endl;
//
//    i++;
//  }
//  int myArray[2][2];
//  for (int i = 0; i <2 ; ++i) {
//
//    for (int j = 0; j < 2; ++j) {
//      myArray[i][j];
//      cout<<myArray[i][j]<<endl;
//    }
//
//
//  }

  int my_array[3]={1,2,3};
  int *my_ptr=my_array;
//  cout<<my_ptr<<endl;
//  cout<<*my_ptr<<endl;
//  cout<<my_ptr[1]<<endl;
  for (int i = 0; i < 3; ++i) {

      cout<<my_array[i]<<endl;
      cout<<*(my_array+1)<<endl;
      cout<<&my_ptr[i]<<endl;


  }
  return 0;
}