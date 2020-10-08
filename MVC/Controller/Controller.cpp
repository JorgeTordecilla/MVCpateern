/*Controller.cpp
Controller:
 Intermediario entre View y Model
*/

//includes files
#include "../Model/Model.cpp"
#include "../View/View.cpp"
#include "operation.cpp"


//global variable
float Un1, Un2, Result, UserNumber1, UserNumber2;

//controller function
void Controller()
{
  //object related to each operation
  Sum add;
  Subtraction subt;
  Multiplication multi ;
  Division Div;
  //call to View function in order to print and get information from the user
  View(&Un1, &Un2);
  Model(Un1, Un2, &UserNumber1, &UserNumber2);

  //object to do sum
  Result = add.DoOperation(UserNumber1,UserNumber2);
  //view function to print the result of Sum
  PrintResult(Result, "Suma");

  //object to do Subtraction
  Result = subt.DoOperation(UserNumber1,UserNumber2);
  //view function to print result of Subtraction
  PrintResult(Result, "Resta");

  //object to do multiplication
  Result = multi.DoOperation(UserNumber1,UserNumber2);
  //view function to print result of Multiplication
  PrintResult(Result, "Multiplicacion");

  //object to do Division
  Result = Div.DoOperation(UserNumber1,UserNumber2);
  //view function to print result of Division
  PrintResult(Result, "Division");
}
