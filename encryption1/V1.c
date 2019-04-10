//#include<stdio.h>// fget(), stdin
//#include<string.h>//stringlen()
//#include<stdlib.h>
//
////Define my Caesar Cipher Function
//void caesarCipher(char* plainText, int key);
//
//int main(void){
//	
//	int key = 1;
//	char plainText[101];
//	
//	//Ask the user for the plain text to encrypt
//	printf("Please enter the plain text you want to encrypt: ");
//	
//	//Get the users text input and store it in plainText variable
//	fgets(plainText, sizeof(plainText), stdin);
//	
//	//Print the ciphered text
//	printf("The ciphered text is : ");
//	
//	//Print the ciphered text
//	caesarCipher(plainText, key);
//	
//	system("pause"); // Comment out if you are not using windows OS
//}
//
//
//	printf("\n");
//}

#include <stdio.h>

int main()
{
    FILE *input;
    
    input = fopen("input.txt", "r");
    int key = 1;
    char input.txt[101];
    
    while(feof(input)==0){
        char c;
        //read character
        fscanf(input,"%c", &c);
        
        //do encryption(&c);
        // e(x) = (m+k)(mod26)
        void rotationCipher(char* input.txt, int key){
            int i=0;
            int cypherValue;
            char cypher;
            while( plainText[i] != '\0' && strlen(plainText)-1 > i){
                cypherValue = ((int)plainText[i] -97 + key) % 26 + 97;
                cypher = (char)(cypherValue);
				printf("%c", cypher);
				i++;
				 }
        
        //print that character to the console
        printf("%c\n", c);
    }
}

