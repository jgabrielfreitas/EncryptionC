/*
 ============================================================================
 Name        : EncryptionC.c
 Author      : JGabrielFreitas
 Version     : 0.0.1
 Copyright   : Your copyright notice
 Description : Encrypt and decrypt string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int PATH_MAX = 1024;
char *KEY = "1234567890JGAF";

void encrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] - key;
    }
}

void decrypt(char password[],int key)
{
    unsigned int i;
    for(i=0;i<strlen(password);++i)
    {
        password[i] = password[i] + key;
    }
}

int main(void) {

	printf("starting program...........\n");

	char password[20] ;
	    printf("Enter the password: \n ");
	    scanf("%s",password);
	    printf("Passwrod     = %s\n",password);
	    encrypt(password,0xFACA);
	    printf("Encrypted value = %s\n",password);
	    decrypt(password,0xFACA);
	    printf("Decrypted value = %s\n",password);

	printf("\nclosing program............");
	return EXIT_SUCCESS;
}
