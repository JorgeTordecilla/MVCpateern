/*View.cpp
Interfaz de usuario, que compone la información que se envía al cliente y los mecanismos de interacción con éste.
*/
#include "ViewData.cpp"
//function to request 2 numbers to the user
void View(float *N1, float *N2)
{
  ViewData view;//object to print
  GetNumber GetN;//object to get numbers
  view.PrintM("Operaciones Basicas con dos numeros\n");
  view.PrintM("Ingrese el Numero 1: ");
  GetN.GetNumber1();//get number 1
  view.PrintM("Ingrese el Numero 2: ");
  GetN.GetNumber2();//get number 2
  *N1 = GetN.UserNumber1;
  *N2 = GetN.UserNumber2;
}
//function to print the result of the operation
void PrintResult(float R, string oper)
{
  ViewData Result;
  Result.PrintM("\nEl resultado de la ");
  Result.PrintM(oper);
  Result.PrintM(" es: ");
  cout<<R<<endl;
}
