#include "unity.h"
#include "newAGEq.h"
#include <stdio.h>

void setUp(void)
{
}

void tearDown(void)
{
}

void test_newAGEq_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement newAGEq");
}

void test_square_given_2_expect_4(void)
{
	TEST_ASSERT_EQUAL_INT(4, square(2)); 
}

void test_square_given_nev2_expect_4(void)
{
	TEST_ASSERT_EQUAL_INT(4, square(-2)); 
}

void test_square_given_2dot25_expect_5_OR_near(void)
{
	printf("result is %f\n",square(2.25));
	TEST_ASSERT_EQUAL_DOUBLE(5.062500, square(2.25)); //hummmm....
	TEST_ASSERT_EQUAL_INT(5, square(2.25)); 
}

