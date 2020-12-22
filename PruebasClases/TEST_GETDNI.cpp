#include <gtest/gtest.h>
#include <iostream>
#include <string>

void test_getsetdni(){

//Añadimos setdni
void set_dni(string a){
    string dni=a;
}

//parte del programa a probar
string getdni(){
    return dni;
}

//valores a probar

string a="76276246C";

//Comprobar resultado

EXPECT_EQ("76276246C", getdni());


}