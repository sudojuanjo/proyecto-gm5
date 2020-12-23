void test_if_case5(){

//Comprobación si grup distinto de -1
//parte del programa a probar
bool if_case5(){
if(grup==-1) {cout<<"ERROR"<<endl; return false; }

else{cout<<grup<<endl; return true;}

}

//valores a probar

int grup=2;

//Comprobar resultado

EXPECT_EQ(true, if_case5());


//Comprobación si grup_ igual a -1
//parte del programa a probar
bool if_case5(){
if(grup_==-1) {cout<<"ERROR"<<endl;
                return false; }

else{cout<<grup<<endl; return true;}

}

//valores a probar

int grup_=-1;

//Comprobar resultado

EXPECT_EQ(false, if_case5());
}

