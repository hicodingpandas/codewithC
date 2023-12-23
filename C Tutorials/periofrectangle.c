#include<stdio.h>
int main(){
    int a,b;
    printf("Length of rectangle = ");
    scanf("%d",&a);
    printf("Breadth of rectangle = ");
    scanf("%d",&b);
    float perimeter = 2*(a*b);
    printf("Perimeter of given rectangle is =%f",perimeter);
    return 0;
}