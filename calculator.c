#include<stdio.h>


float sum(float a, float b); //sum operation
float sub(float a, float b); //sub operation
float multi(float a, float b); //multi operation
float division(float a, float b); //division operation
void print_result(float a, float b, char sign,float result); //result operation

int main() {
    
    float a,b,result;
    char sign;

    printf("Enter your two digit number: ");
    scanf("%f %f",&a,&b);   //user input

    printf("Enter your operation(+,-,*,/): ");
    getchar();
    sign = getchar();

    if(sign == '+') {
       result = sum(a,b);
    }else if(sign == '-'){
        result = sub(a,b);
    }else if(sign == '*'){
        result = multi(a,b);
    }else if(sign == '/'){
        if(b != 0){
            result = division(a,b);
        }else{
            printf("sorry denominator is zero(i.e., b != 0).try again");
            return 1;
        }
    }else{
        printf("Invalid Result.");
        return 1;
    }

    //print result
     print_result(a,b,sign,result);

    return 0;
}

//sum operation
float sum(float a, float b){
  return a + b;
}
//sub operation
float sub(float a, float b){
  return a - b;
}
//milti operation
float multi(float a, float b){
  return a * b;
}
//division operation
float division(float a, float b){
  return a / b;
}

//print result
void print_result(float a, float b,char sign,float result)
{
    printf("%.2f ",a);
    printf("%c ",sign);
    printf("%.2f = ",b);
    printf("%.2f ",result);
}