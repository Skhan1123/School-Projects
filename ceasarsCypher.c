/*
 * AHPA #5: Caesar's Cipher
 *
 * Open the file "clearMessage.txt".
 * 
 * Read each character of text using fgetc.
 *
 * Convert each ASCII character to its numeric equivalent.
 *
 * Apply the Caesar Cipher and increment each character by 3.
 *
 * Only convert alphabetic characters – leave all other characters 
 * unchanged.
 *
 * Convert each character back to its ASCII value.
 *
 * Write the encoded message out to the file "secretMessage.txt".
 *
 * Student name:Saajid Khan
 *
 */



#include <stdio.h>


int main(void) {
    int i;
    
    FILE *fileopen;
    fileopen = fopen("clearMessage.txt", "r");
    
    FILE *filewrite;
    filewrite = fopen("secretMessage.txt", "w");

    while ((i = fgetc(fileopen)) !=EOF) {
        if (i>= 'A' && i <= 'Z'){
            i +=3;
            if (i > 'Z') {          
                i = i - 26;
            }

        }
        else if(i>= 'a' && i <= 'z'){
            i +=3;
            if (i > 'z') {          
                i = i - 26;
            }
        
        }
        
        fputc(i, filewrite);
    }

    fclose(fileopen);
    fclose(filewrite);


  printf("Hello World\n");
  return 0;
}