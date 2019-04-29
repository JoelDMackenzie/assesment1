/* Assesment 1 - c3330234
 NOTE: ASCII 'a'=97, 'b'= 98, 'c'=99, 'd'=100, 'e'=101 ...
 so to get a = 0, minus 97
 NOTE: that 26 equals the amount of letters in the alphabet 
 - also note this is not using read/write from file 
*/

#include <stdio.h>

int main()  {
    
    char m[420];//message 
    char l;//letter
    int x;
    int key;
    int a;
    //user input
    printf("Rotation Cipher\n");
    printf("enter a message: ");
    scanf("%s", &m);
    printf("Would you like to encrypt or decrypt? \n Encrypt = 1\n Decrypt = 2\n ");
    scanf("%d", &a);
    printf("(if key unknown try to run from 1-26) enter a key: ");
    scanf("%d", &key);
    //encryption 
   if(a==1)    {
       for(x = 0; m[x] != 0; x++)    {
        l = m[x];
        
         if(l >= 65 && l <= 90) {
            l = l + key;
            
            if(l > 90)    {
                l = l - 90 + 65 - 1; //-26
            }
            m[x] = l;
        }
        else if(l >= 97 && l <= 122)  {
            l = l + key;
            
            if(l > 122)    {
                l = l - 122 + 97 - 1;//-26
            }
            m[x] = l;
        }
    }
    printf("The encrypted message is: %s", m);
   }
   //decryption 
   if(a==2)   {
       for(x = 0; m[x] != 0; x++) {
           l = m[x];
           
           if(l >= 65 && l <= 90)   {
               l = l - key;
               
               if(l < 65) {
                   l = l + 90 - 65 + 1;//26
               }
               m[x] = l;
           }
           else if(l >= 97 && l <= 122)   {
               l = l - key;
               
               if(l < 97) {
                   l = l + 122 - 97 + 1;//26
               }
               m[x] = l;
               
           }
       }
       printf("The decrypted message is: %s", m);
   }
    return 0;
}