//
// Created by zeys on 12.05.2022.
//

#include "iostream"
using namespace std;

#define SIZE 3

// 1-Burda boyut kısıtlaması yoktur.
void initialize_array(int *array, int size);
void display_array(int *array, int size);   //ADRESS


// 1-Bu boyutta vermek zorundayız arrayi
//void initialize_array(int array[SIZE],int size); // ADRESS
//void display_array(int array[SIZE],int size);


// 1-Boyut kısıtlaması yoktur.
//void initialize_array(int array[],int size); // ADRESS
//void display_array(int array[],int size);


int main() {
  int my_array[SIZE];
  initialize_array(my_array, SIZE);
  display_array(my_array, SIZE);
  return 0;
}

void initialize_array(int *array, int size) {
  for (int i = 0; i < size; ++i) {
    array[i]=i;

  }
}
void display_array(int *array, int size) {
  for (int i = 0; i < size; ++i) {
    cout<<array[i]<<endl;

  }
}
