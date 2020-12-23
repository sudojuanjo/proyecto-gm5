#include <gtest/gtest.h>
#include "ClaseCliente.h"
#include <iostream>

void test_gettelefono()
{

	Cliente c;

	c.setTelefono(957382719);


	//Comprobar resultado

	EXPECT_EQ(957382719, c.getTelefono());


}