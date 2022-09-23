#include <stdio.h>

/**
 * size_one - gets the size of pointer one
 * size_two - gets the size of variable two
 * main: calls size_one and size_two functions
 * 
 * Return: size of pointer one and variable two
 */
 
 char size_one(char *one)
 {
     return sizeof(one);
 }
 
 char size_two(char two[])
 {
    return sizeof(two);
 }
 
 int main(){
     char *one = "asondubuisiorji1";
     char two[] = "asondubuisiorji1";
     
     printf("Size of One (Pointer): %d\n", sizeof(one));
     printf("Size of Two (Variable): %d", sizeof(two));
    
     return 0;
 }
