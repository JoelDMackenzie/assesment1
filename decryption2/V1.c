#include <stdio.h>

int main()
{
    FILE *input;
    
    input = fopen("input.txt", "r");
    
    while(feof(input)==0){
        char c;
        //read character
        fscanf(input,"%c", &c);
        
        //do decryption(&c);
        // d(c) = (c-k)(mod26)
        
        //print that character to the console
        printf("%c\n", c);
    }
}