/*Model_cpp
Model:
Contiene una representación de los datos que maneja el sistema.
*/

//includes files
#include "SaveData.cpp"


//Model function
void Model(float Un1, float Un2, float *SNumber1, float *SNumber2){

  //object to save data on variables
  SaveData save;

  //saves data acquired from view
  save.UserData(Un1,Un2);
  //pointer to use the value in controller file.
  *SNumber1 = save.Num1;
  *SNumber2 = save.Num2;
}
