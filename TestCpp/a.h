#pragma once

class B;
template<class T>
class A
{
public:
  B *ptr;
  void XD(T obj); //不能這邊定義是怕用到B* ptr的話需要include "b.h"
};