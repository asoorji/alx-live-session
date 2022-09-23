#include <stdio.h>

/**
 * strLen - returns length of string
 * printLen - prints out the length
 * main - calls other functions
 */
 
 int strLen(char *str)
 {
     int i;
     for (i=0; str[i] != '\0'; i++){}
     return (i);
 }
 
 void printLen(char *str) 
 {
    printf("The length of the string is %d", strLen(str));
 }
 
 int main(){
     
     char str[] = "I am a string";
     
     printLen(str);
    
     return 0;
 }
