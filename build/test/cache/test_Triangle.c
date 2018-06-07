#include "build/temp/_test_Triangle.c"
#include "Triangle.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}

void test_getTriangleName_given_2_2_minus5_Expect_is_not_a_triangle()

{

  UnityAssertEqualString((const char*)(("is not a triangle")), (const char*)((getTriangleName_NotTriangle(2,2,-5))), (

 ((void *)0)

 ), (UNITY_UINT)(22));

}





void test_getTriangleName_given_1_0_3_Expect_is_not_an_triangle()

{

    UnityAssertEqualString((const char*)(("is not a triangle")), (const char*)((getTriangleName_NotTriangle(1,0,3))), (

   ((void *)0)

   ), (UNITY_UINT)(28));

}





void test_getTriangleName_given_16_16_16_Expect_is_an_equilateral()

{

    UnityAssertEqualString((const char*)(("equilateral")), (const char*)((getTriangleName_Equilateral(16,16,16))), (

   ((void *)0)

   ), (UNITY_UINT)(34));

}



void test_getTriangleName_given_minus1_minus1_minus1_Expect_is_an_equilateral()

{

    UnityAssertEqualString((const char*)(("error")), (const char*)((getTriangleName_Equilateral(-1,-1,-1))), (

   ((void *)0)

   ), (UNITY_UINT)(39));

}





void test_getTriangleName_given_1_6_17_Expect_is_an_scalene()

{

    UnityAssertEqualString((const char*)(("scalene")), (const char*)((getTriangleName_Scalene(1,6,17))), (

   ((void *)0)

   ), (UNITY_UINT)(45));

}





void test_getTriangleName_given_15_60_100_Expect_is_an_scalene()

{

    UnityAssertEqualString((const char*)(("scalene")), (const char*)((getTriangleName_Scalene(15,60,100))), (

   ((void *)0)

   ), (UNITY_UINT)(51));

}



void test_add_2_with_5_expect_7()

{

  int result = add(2,5);







  UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(60), UNITY_DISPLAY_STYLE_INT);

}



void test_add_9_with_minus20_expect_minus11()

{

  int result = add(9,-20);







  UnityAssertEqualNumber((UNITY_INT)((-11)), (UNITY_INT)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(69), UNITY_DISPLAY_STYLE_INT);

}

void test_Triangle_NeedToImplement(void)

{

    UnityIgnore( (("Need to Implement Triangle")), (UNITY_UINT)(73));

}
