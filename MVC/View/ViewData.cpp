/*ViewData_cpp
This file contains the method to input/output screen user
*/
#include "ViewData.hpp"
//method to print messages,implementation of base class
void ViewData :: PrintM(string Msg)
{
  cout<<Msg;
}
//method for get GetNumber1,implementation of base class
void GetNumber :: GetNumber1()
{
  cin>>UserNumber1;
}
//method for get GetNumber2,implementation of base class
void GetNumber :: GetNumber2()
{
  cin>>UserNumber2;
}
