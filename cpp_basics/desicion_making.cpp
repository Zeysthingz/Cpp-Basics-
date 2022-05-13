//
// Created by zeys on 26.04.2022.
//

#include "iostream"
// ıde kodu bastan asagı doğru okur o yüzden fonksıyonları vs yukarıdan asağıya dogru tanımlamalısın.
// Bütün veriableların türünü belirtmek zorundasın.
//declaration
int sum(int val1,int val2){
  int result=val1+val2;
  return result;
}
double sum(double val1,double val2=88){
  double result=val1+val2;
  return result;
}
int main(){
  int val1 ,val2 ,result;
  double result2,num1,num2;
  result=sum(4,5);
  result2=sum(4.0);
  std::cout<<"int result"<<std::endl;
  std::cout<<result<<std::endl;
  std::cout<<"result2"<<std::endl;
  std::cout<<result2<<std::endl;

  return 0 ;
}
