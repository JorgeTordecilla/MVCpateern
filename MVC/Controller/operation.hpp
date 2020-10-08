/*
Operation_hpp
base class used to redifinied each class operation
*/
#ifndef Operation_hpp
#define Operation_hpp

class Operation
{
public:
  // abstract class 
  virtual float DoOperation(float Number1, float Number2) = 0;
};
#endif
