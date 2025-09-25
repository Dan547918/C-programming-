//simple c program ("hello world")single line comment
/*
Name:Duncan
Reg no. 26547
Date: 12th sept
Description: Hello world program
*/
#include <stdio.h> // preprocessor directive

//main function
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You entered the age: %d\n", age);
    return 0;
}