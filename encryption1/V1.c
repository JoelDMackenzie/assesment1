#include <stdio.h>

int main()
{
    FILE *input;
    
    input = fopen("input.txt", "r");
    
    while(feof(input)==0){
        char c;
        //read character
        fscanf(input,"%c", &c);
        
        //do encryption(&c);
        //e(x) = (m+k)(mod26)//mod = modulis operator (%)
        
        //print that character to the console
        printf("%c\n", c);
    }
}