#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/*void birthday(){
  printf("\nHappy birthday to you!");
  printf("\nHappy birthday to you!");
  printf("\nHappy birthday dear...YOU!");
  printf("\nHappy birthday to you!");
}*/

/*void birthday(char name[], int age){
  printf("\nHappy bday dear %s!", name);
  printf("\nYou are %d years old!", age);
}*/

/*double square(double x){
  double result = x * x;
  
  return result;
}*/

/*int findMax(int x, int y){
  return (x > y) ? x : y;
}*/

void hello(char[], int); // function prototype

int main(){

//____________________________________________________________________

    //This is my first c program
    /*I like to practice 
    the things i learnt
    from the video on
    my own.*/
  /*  printf("I like Pizza!\n");
    printf("It's really good!\n");
    printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");
  */
//____________________________________________________________________

   /* int x;       // decleration
    x = 123;     // initialization
    int y = 123; // decleration + initialization
  */
//____________________________________________________________________

   /* int age = 21; // integer (whole number) %d
    float gpa = 2.05; // floating point number %f
    char grade = 'C'; // single character %c
    char name[] = "Bro"; // array of characters %s
    double d = 3.3987492878275; // more accuracy and capacity %lf
  */
//____________________________________________________________________

  /*  bool e = false; // 1 byte (true or false) %d

    char f = 100; // 1 byte (-128 to +127) %d or %c
    unsigned char g = 234; // 1 byte (0 to +255) %c or %d
    */
    /* "unsigned" disregards any negative numbers and instead
    turns them into positive ones */

   /* short int h = 32767; // 2 bytes (-32,768 to +32,767) "int" can be lef out %d
    unsigned short i = 56987; // 2 bytes (0 to +65,535) %d

    int j = 2147483647; // 4 bytes (-2,147,483,648 to 2,147,483,647) %d
    unsigned int k = 4294967294; // 4 bytes (0 to 4,294,967,295) %u

    long long int l = 9184791849816498164; // 8 bytes (-9 quint to +9 quint) %lld
    unsigned long long int m = 18184791849816498164U; // 8 bytes (0 to +18 quint) add "U" for no warning %llu
   */
//____________________________________________________________________

    //format specifier % = defines and formats a type of data to be displayed

    // %c = character
    // %s = string
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // %- = left align

  /*  float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%-8.2f\n", item1); // added a .number to spcify the amount of deciaml places
    printf("Item 2: $%-8.2f\n", item2); // added a number. to specify the amount of full number
    printf("Item 3: $%-8.2f\n", item3); // added a "-" to align the value left
  */
//____________________________________________________________________

    //constant = fixed value that cannot be altered by the program during its executtion

  /*const float PI = 3.14159;

    printf("%f\n", PI);
  */
//____________________________________________________________________

/*  printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your average grade is %c\n",grade);
    printf("Your gpa is %f\n",gpa);
    printf("This is a random number %0.15lf\n",d);
    printf("%d\n",e);
    printf("%d\n",g);
    printf("%d\n",h);
    printf("%d\n",i);
    printf("%d\n",j);
    printf("%u\n",k);
    printf("%lld\n",l);
    printf("%llu\n",m);
    */
//____________________________________________________________________

    //arithmetic operators

    // + (addition)
    // - (subtration)
    // * (mulitiplication)
    // / (division)
    // % (modulus)
    // ++ (increment)
    // -- (decrement)

    //int x = 5;
    //int y = 2;

    //float z = x / (float) y; // preceeding divisor with float / double
    //int z = x % y;

    //x++;
    //y--;

    //printf("%d\n", y);
//____________________________________________________________________

    //augmented assignment operators = used to replace a statemnet where an operator
    //                                 takes a variable as one of its argumrnts
    //                                 and then assigns the result back to the same variable
    //                                 x = x + 1
    //                                 x+=1

    //int x = 10;

    //x = x + 2;
    //x+=2;

    //x = x - 3;
    //x-=3;

    //x = x * 4;
    //x*=4;

    //x = x / 5;
    //x/=5;

    //x = x % 2;
    //x%=2;

    //printf("%d\n", x);
//____________________________________________________________________

  //This is a tutorial on User input
  
  //char name[25];
  //int age;

  //printf("What your name?");
  //scanf("%s", &name);
  //fgets(name, 25, stdin);
  //name[strlen(name)-1] = '\0';

  //printf("\nHow old are you?");
  //scanf("%d", &age);

  //printf("\nHello %s, how are you?", name);
  //printf("\nYou are %d years old", age);
//____________________________________________________________________

  //Useful math functions

  /*double A = sqrt(9);
  double B = pow(2, 4);
  int C = round(3.14);
  int D = ceil(3.14);
  int E = floor(3.99);
  double F = fabs(-100);
  double G = log(3);
  double H = sin(45);
  double I = cos(45);
  double J = tan(45);
  
  printf("\n%d", C);*/

//____________________________________________________________________

  //calculate circumference and area of a circle

  /*const double PI = 3.14159;
  double radius;
  double circumference;
  double area;

  printf("\nEnter the radius of a circle");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * radius * radius;
 
  printf("\ncircumference: %lf", circumference);
  printf("\narea: %lf", area);*/
//____________________________________________________________________

  //calculate hypotenuse of a triangle

  /*double A;
  double B;
  double C;

  printf("Enter side A: ");
  scanf("%lf", &A);

  printf("Enter side B: ");
  scanf("%lf", &B);

  C = sqrt(A*A + B*B);

  printf("Side C: %lf", C);*/
//____________________________________________________________________

  //Learning about if statements

 /* int age;

  printf("\nEnter your age: ");
  scanf("%d", &age);

  if(age >= 18){
    printf("You are now signed up.");
  }
  else if(age == 0){
    printf("You can't sign up! You were jsut born!");
  }
  else if(age < 0){
    printf("You haven't been born yet!");
  }
  else{
    printf("You are too young to sign up!");
  }*/
//____________________________________________________________________

  // switch = A more efficient alternative to using many "else if" statements
  //          allows a value to be tested for equality against many cases

    /*char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch (grade){
    case 'A':
      printf("perfect!\n");
      break;
    case 'B':
      printf("You did good!\n");
      break;
    case 'C':
      printf("You did okay!\n");
      break;
    case 'D':
      printf("At least its not an F!\n");
      break;
    case 'F':
      printf("YOU FAILED!\n");
      break;
    default:
      printf("Please enter only valid grades!\n");
    }*/
//____________________________________________________________________

  // A temeperature conversion program

    /*char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
      printf("\n Enter the temp in Celsius: ");
      scanf("%f", &temp);
      temp = (temp * 9 / 5) + 32;
      printf("\nThe temp in Farenheit is: %.1f", temp);
    }
    else if(unit == 'F'){
      printf("\n Enter the temp in Farenheit: ");
      scanf("%f", &temp);
      temp = ((temp - 32) * 5) / 9;
      printf("\nThe temp in Celsius is: %.1f", temp);
    }
      else{
      printf("\n %c is not a valid unit of measurement", unit);
    }*/
//____________________________________________________________________

  // Programming a simple calculator

    /*char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("Enter number 1: ");
    scanf("%lf", &num1);

    printf("Enter number 2: ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("\nresult: %.2lf", result);
      break;
    case '-':
        result = num1 - num2;
        printf("\nresult: %.2lf", result);
      break;
    case '*':
        result = num1 * num2;
        printf("\nresult: %.2lf", result);
      break;
    case '/':
        result = num1 / num2;
        printf("\nresult: %.2lf", result);
      break;
    
    default:
        printf("%c not valid", operator);
    }*/
//____________________________________________________________________

  // logical operators = && (AND) checks if two condiotions are true

    /*float temp = 10;
    bool sunny = true;

    if (temp >= 0 && temp <= 30 && sunny)
    {
      printf("The wheather is good!");
    }
    else{
      printf("The wheather is bad!");
    }*/
//____________________________________________________________________

  // logical operators = || (OR) checks is at least one condition is true

   /* float temp = 25;

    if (temp <= 0 || temp >= 30)
    {
      printf("\nThe wheather is bad!");
    }
    else{
      printf("\nThe wheather is good!");
    }*/
//____________________________________________________________________

  //logical operators = ! (NOT) reverses the state of a condition

    /*bool sunny = false;

    if(!sunny){
        printf("\nIt's cloudy outside!");
    }
    else{
        printf("\nIt's sunny outside!");
    }*/
//____________________________________________________________________

  //functions

    /*birthday();
    birthday();
    birthday();*/
//____________________________________________________________________

  //arguments
  
    /*char name[] = "Farhan";
    int age = 16;

    birthday(name, age);*/
//____________________________________________________________________

    //return statement = returns a statement to the calling function

      /*double x = square(3.14);
      printf("%lf", x);*/
//____________________________________________________________________

  // ternany operator = shortcut to if/else when assigning/returning a value
  // (condition) ? value if true : value if false

    /*int max = findMax(3, 4);

    printf("%d", max);*/
//____________________________________________________________________

  //function prototypes

    /*char name[] = "Bro";
    int age = 16;

    hello(name, age);*/
//____________________________________________________________________

  //string functions

    /*char string1[] = "Farhan";
    char string2[] = "Ffjfj";

    //strlwr(string1);                      //converts string to lowercase
    //strupr(string1);                      //converts string to uppercase
    //strcat(string1, string2);             //appends string2 to end of string1
    //strncat(string1, string2, 1);         //appends n characters from string2 to string1
    //strcpy(string1, string2);             //copy string2 to string1
    //strncpy(string1, string2, 2);         // copy n characters of string2 to string 1

    //strset(string1, '?');                 //sets all character sof a string to a given character
    //strnset(string1, 'x', 1);             //sets first n characters of a string to a given character
    //strrev(string1);                      //reverses a string

    //int result = strlen(string1);             //returns string lenght as int
    //int result = strcmp(string1, string2);    //string compare all characters
    //int result = strncmp(string1, string2, 1);   //string compare n characters
    //int result = strcmpi(string1, string2);   //string compare all (ignore cases)
    //int result = strnicmp(string1, string2);  //string comapre n characters (ignore cases)

    //printf("%d", result);

    if(result == 0){
      printf("These strings are the same");
    }
    else{
      printf("These strings are not the same");
    }*/
//____________________________________________________________________

  //for loop = repeats a section of Code a limited amount of times 

    /*for(int i = 10; i >= 1; i-=2){            //index = i
      printf("%d\n", i);
    }*/
//____________________________________________________________________

  //while loop = repeats a section of code possibly forever
  //WHILE some conditions are true
  //a while loops might not execute at all

    char name[25];

    printf("\nWhat's your name?");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name) == 0 ){
        printf("\nYou did not enter your name!");
        printf("\nWhat's your name?");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s", name);

    return 0;
}

/*void hello(char name[], int age){
  printf("\nHello %s", name);
  printf("\nYou are %d years old", age);
}*/