/*C program to print all upper case and lower case alphabets
followed by a new line
.*/
 
#include <stdio.h>
 
int main()
{
    char i;
 
    for(i='a'; i<='z'; i++){

        putchar(i);
        
    }
    
    for(i='A'; i<='Z'; i++){
        
        
        putchar(i);

    }
    putchar('\n');   
     
    return 0;
}