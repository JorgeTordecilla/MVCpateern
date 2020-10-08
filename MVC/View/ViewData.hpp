/*ViewData_hpp
base classes to control input and output
*/
#ifndef ViewData_hpp
#define ViewData_hpp
//print data on screen
class ViewData
{
  public:
    float x, y;
  void PrintM(string Msg);

};
//Get number from input
class GetNumber
{
public:
  float UserNumber1, UserNumber2;
  void GetNumber1();
  void GetNumber2();
};
#endif //ViewData_hpp
