/*SaveData_cpp
file to save acquired data from view, and use the definition from SaveData_hpp
*/
#include "SaveData.hpp"
#include "iostream"
using namespace std;
//Redefinition function to save data.
void SaveData :: UserData(float x, float y){
Num1 = x;
Num2 = y;
}
