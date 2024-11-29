#include <stdio.h>

int main(){

    //This is my first c program
    /*I like to practice 
    the things i learnt
    from the video on
    my own.*/
    printf("I like Pizza!\n");
    printf("It's really good!\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

    int x;       //decleration
    x = 123;     //initialization
    int y = 123; //decleration + initialization

    int age = 21; //integer(whole number)
    float gpa = 2.05; //floating point number
    char grade = 'C'; //single character
    char name[] = "Bro"; //array of characters

    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your average grade is %c\n",grade);
    printf("Your gpa is %f\n",gpa);

    return 0;
}