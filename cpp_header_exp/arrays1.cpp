//
// Created by zeys on 12.05.2022.
//
#include "iostream"
#include "arrays1.hpp"

//FUNCTION DECLERATION

void initilazeArray(int *array,int size)
{
  for (int i = 0; i < size; ++i)
  {
      array[i]=i;
  }
}



void displayArray(int *array,int size)
{
  for (int i = 0; i < size; ++i)
  {
    std::cout<<array[i]<<std::endl;
  }
}