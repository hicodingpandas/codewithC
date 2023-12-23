#include<stdio.h>
int main(){
    int radius;
    printf("radius of circle is = ");
    scanf("%d",&radius);
    float pi = 3.14;
    float area;
    printf("\n");
    area = pi*radius*radius;
    printf("area of circle is =%f",area);
    return 0;
}