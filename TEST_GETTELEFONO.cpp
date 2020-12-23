#include <gtest/gtest.h>
#include <iostream>

void test_getsettelefono(){

//Añadimos setcorreo
void set_telefono(int a){
    int telefono=a;
}

//parte del programa a probar
int gettelefono(){
    return telefono;
}

//valores a probar

int a=673608469;

//Comprobar resultado

EXPECT_EQ(673608469, gettelefono());


}