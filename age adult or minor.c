//program to display where an adult or a minor
#include<stdio.h>
int main(){
    int age;
    printf("enter the age: ");
    scanf("%d",&age);

    //true if the age is less than 18
    if(age>18){
        printf("%d is an adult",age);
    }
    else{
        printf("%d is a minor",age);
    }
    return 0;
}
