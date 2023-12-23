#include<stdio.h>
#include<math.h>

int main(){
    int b,c;
    b=c=2;
    int a = b+c; //b+c=a is invalid as a value we can't put in b+c as whole
    int power = pow(b,c); //math.h is also added in power questions
    printf("%d",power); //b^c is not a power operator
    return 0;
}