#include<stdio.h>
int main(){
    int side;
    printf("Enter the value of side = ");
    scanf("%d",&side);

    int area;
    area = side * side;
    printf("The area of given square is : %d",area);
    return 0;
}

//you can also use float in this question so %d converts into %f