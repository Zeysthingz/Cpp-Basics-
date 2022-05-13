//
// Created by zeys on 25.04.2022.
//
//preprocessor
#include "iostream"

//prepocessorlar ıde okurken en basta A ve B valuesıne ne koyadcagını bılıyor
#define A 5
#define B 4
int area =8;
using namespace std;
int main()
{
//  veriables-->provides storages from memory
  int area =A*B;
  {
    std::cout<<area<<std::endl;
  }
  const int x=6;

//   std::cout<< "hello world"<<" "<<x<<std::endl;
//   std::cout<< "hello world2"<<" "<<area<<std::endl;


  return 0 ;
};