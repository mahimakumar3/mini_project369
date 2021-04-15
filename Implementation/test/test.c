#include "unity.h"
#include "calculator.h"
#define KEY "Enter the calculator Operation you want to do:"

#include<stdlib.h>
 void setUp(void)
 {
 }
 void tearDown(void)
 {
 }
 void test_subtraction_should_subtraction(void){
     TEST_ASSERT_EQUAL(0,subtraction(5,5));
     TEST_ASSERT_EQUAL(3,subtraction(7,4));
 }
 void test_addition_should_addition(void){
     TEST_ASSERT_EQUAL(0,addition(5,5));
     TEST_ASSERT_EQUAL(3,addition(7,4));
 }
 int main(void)
 {
	 int X=1;
    char Calc_oprn;
 
    // Function call 
    calculator_operations();
 
    while(X)
    {
		float res;		
        printf("\n");
        printf("%s : ", KEY);
 
        Calc_oprn=getchar();
 
        switch(Calc_oprn)
        {
            case '+': res=addition();
                      break;
 
            case '-': res=subtraction();
                      break;
 
            case '*': res=multiplication();
                      break;
 
            case '/': res=division();
                      break;
 
            case '!': res=factorial();
                      break;
 
            case '^': res=power();
                      break;
 
            case 'H':
            case 'h': calculator_operations();
                      break;
 
            case 'Q':
            case 'q': exit(0);
                      break;
            case 'c':
            case 'C': system("cls");
                      calculator_operations();
                      break;
 
            default : system("cls");
 
    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      calculator_operations();
        }
		printf("OUTPUT= %.2f",res);
    }
     UNITY_BEGIN();
     RUN_TEST(test_subtraction_should_subtraction);
	 RUN_TEST(test_addition_should_addition);
     return UNITY_END();
 }
