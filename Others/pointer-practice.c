
#include <stdio.h>

/**
 * main - Returns age and its address
 * 
 * @age: stores age
 * @*pAge: stores address of age
 * Return: Address of character
 * Resouce link: https://www.youtube.com/watch?v=DplxIq0mc_Y
 */
 
 void printName(int name) {
     printf("I am %d years old\n", name);
 }

int main() {
    int name = 54;
    int age = 21;
    int *pAge = &age;
    
    printName(name);
    
    printf("Address of age: %p\n", &age);
    printf("The value of pAge: %p\n", pAge);
    
    printf("The value of age: %d\n", age);
    printf("The value stored in pAge: %d\n", *pAge);
    
    printf("The size of age: %d bytes\n", sizeof(age));
    printf("The size of pAge: %d bytes\n", sizeof(pAge));


    return (0);
}
