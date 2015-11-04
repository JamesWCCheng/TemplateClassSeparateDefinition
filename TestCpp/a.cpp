#include "a.h"
#include "b.h"
#include <iostream>
template<class T>
void A<T>::XD(T obj) 
{ 
  ptr = new B;
  std::cout << __FUNCSIG__ << std::endl; }

template class A<int>;