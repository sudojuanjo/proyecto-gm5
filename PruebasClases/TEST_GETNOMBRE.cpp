#include <gtest/gtest.h>
#include <iostream>

void test_getsetnombre(){

//Añadimos setnombre
void set_nombre(string a){
    string nombre=a;
}

//parte del programa a probar
string if_getnombre(){
    return nombre;
}

//valores a probar

string a="Martias";

//Comprobar resultado

EXPECT_EQ("Matias", if_getnombre());


}