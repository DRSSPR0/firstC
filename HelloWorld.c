#include <stdio.h>
#include <stdbool.h>

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

    int age = 21; //integer(whole number) %d
    float gpa = 2.05; //floating point number %f
    char grade = 'C'; //single character %c
    char name[] = "Bro"; //array of characters %s
    double d = 3.3987492878275; //more accuracy and capacity %lf

    bool e = false; //1 byte (true or false) %d

    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your average grade is %c\n",grade);
    printf("Your gpa is %f\n",gpa);
    printf("This is a random number %0.15lf\n",d);
    printf("%d",e);

    return 0;
}