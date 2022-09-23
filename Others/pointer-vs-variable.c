#include <stdio.h>

/**
 * size_one - gets the size of pointer one
 * size_two - gets the size of variable two
 * main: calls size_one and size_two functions
 * 
 * Return: size of pointer one and variable two
 */
 
 int main(){
     char *one = "asoorji123";
     char two[] = "asoorji123";
     
     printf("Size of One (Pointer): %d\n", sizeof(one));
     printf("Size of Two (Variable): %d", sizeof(two));
    
     return 0;
 }
