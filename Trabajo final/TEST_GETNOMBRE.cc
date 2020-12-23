#include <gtest/gtest.h>
#include "ClaseCliente.h"
#include <iostream>

void test_getnombre()
{
	Cliente c;

	c.setNombre(Matias);


	//Comprobar resultado

	EXPECT_EQ("Matias", c.getNombre());


}