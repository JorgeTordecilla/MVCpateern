/*operation.cpp
poliform based on interface declarated on operation.hpp
*/
#include "operation.hpp"
//class to do a sum Operation
class Sum : public Operation
{
public:
  float DoOperation(float Number1, float Number2){
    return (Number1 + Number2);
  }
};
//class to do a Subtraction Operation
class Subtraction : public Operation
{
public:
  float DoOperation(float Number1, float Number2){
    return (Number1 - Number2);
  }
};
//class to do a Multiplication Operation
class Multiplication : public Operation
{
public:
  float DoOperation(float Number1, float Number2){
    return (Number1 * Number2);
  }
};
//class to do a Division Operation
class Division : public Operation
{
public:
  float DoOperation(float Number1, float Number2){
    if (Number2!=0) return (Number1 / Number2);
    else return (Number2 / Number1);
  }
};
