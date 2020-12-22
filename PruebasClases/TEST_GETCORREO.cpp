#include <gtest/gtest.h>
#include <iostream>

void test_getsetcorreo(){

//Añadimos setcorreo
void set_correo(string a){
    string correo=a;
}

//parte del programa a probar
string if_getcorreo(){
    return correo;
}

//valores a probar

string a="juanma09@gmail.com";

//Comprobar resultado

EXPECT_EQ("juanma09@gmail.com", if_getcorreo());


}