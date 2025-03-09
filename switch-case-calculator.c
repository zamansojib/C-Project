#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


float sum(float valueOne, float valueTwo); //sum operation 
float sub(float valueOne, float valueTwo); //sub operation 
float multi(float valueOne, float valueTwo); //multi operation 
float division(float valueOne, float valueTwo); //division operation 
float sqrt_root(float valueOne); //sqrt operation 
float power(float valueOne, float valueTwo); //pow operation 
void print_result(float valueOne, float valueTwo,char sign,float result); //print result operation
int main()
{
  
    float valueOne, valueTwo, result;
    char sign;
    printf("Enter calculation: \n");
    scanf("%f %c %f", &valueOne, &sign, &valueTwo); //user input

    switch(sign)
    {
        case '+':
        result = sum(valueOne, valueTwo);
        break;
        case '-':
        result = sub(valueOne, valueTwo);
        break;
        case '*':
        result = multi(valueOne , valueTwo);
        break;
        case '/':
        result = division(valueOne, valueTwo);
        break;
        case '^':
        result = power(valueOne, valueTwo);
        break;
        case ' ':
        result = sqrt_root(valueOne);
        break;
        default:
        printf("Invalid Result.");
    }

    //print result
    print_result(valueOne, valueTwo, sign, result);  //print result operation



  return 0;
}

float sum(float valueOne, float valueTwo)  //sum operation
{
    return valueOne + valueTwo;
}
float sub(float valueOne, float valueTwo)  //sub operation
{
    return valueOne - valueTwo;
}
float multi(float valueOne, float valueTwo)  //multi operation
{
    return valueOne * valueTwo;
}
float division(float valueOne, float valueTwo)  //division operation
{
    return valueOne + valueTwo;
}
float sqrt_root(float valueOne)  //sqrt operation
{
     float result = sqrt(valueOne);
    return result;
}
float power(float valueOne, float valueTwo)  //power operation
{
    float result = pow(valueOne, valueTwo);
    return result;
}

void print_result(float valueOne, float valueTwo,char sign,float result)
{
    printf("%.9g%c%.9g =  %.6g\n\n",valueOne,sign, valueTwo, result);
}
