#include "unity.h"
#include "Triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

/*void test_getTriangleName_given_2_2_5_Expect_is_isosceles()
{
  char *TriangleName = getTriangleName_isosceles(2,2,5); 
  
  TEST_ASSERT_EQUAL_STRING("isosceles",TriangleName);
}
*/

void test_getTriangleName_given_2_2_minus5_Expect_is_not_a_triangle()
{  
  TEST_ASSERT_EQUAL_STRING("is not a triangle", getTriangleName_NotTriangle(2,2,-5));
}


void test_getTriangleName_given_1_0_3_Expect_is_not_an_triangle()
{
    TEST_ASSERT_EQUAL_STRING("is not a triangle", getTriangleName_NotTriangle(1,0,3));
}


void test_getTriangleName_given_16_16_16_Expect_is_an_equilateral()
{
    TEST_ASSERT_EQUAL_STRING("equilateral", getTriangleName_Equilateral(16,16,16));
}

void test_getTriangleName_given_minus1_minus1_minus1_Expect_is_an_equilateral()
{
    TEST_ASSERT_EQUAL_STRING("error", getTriangleName_Equilateral(-1,-1,-1));
}


void test_getTriangleName_given_1_6_17_Expect_is_an_scalene()
{
    TEST_ASSERT_EQUAL_STRING("scalene", getTriangleName_Scalene(1,6,17));
}


void test_getTriangleName_given_15_60_100_Expect_is_an_scalene()
{
    TEST_ASSERT_EQUAL_STRING("scalene", getTriangleName_Scalene(15,60,100));
}

void test_add_2_with_5_expect_7()
{
  int result = add(2,5);
  
//  printf("result = %d", result);
  
  TEST_ASSERT_EQUAL(7,result);
}

void test_add_9_with_minus20_expect_minus11()
{
  int result = add(9,-20);
  
//  printf("result = %d", result);
  
  TEST_ASSERT_EQUAL(-11,result);
}
void test_Triangle_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement Triangle");
}
