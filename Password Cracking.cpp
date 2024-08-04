#define _XOPEN SOURCE
#include <unistd.h>
#include <stdio.h>

int main(int argc, char*argv[]){
	if(argc < 2){
		printf("Usage: %s <plaintext pasword> < salt value>\n", argv[0])
		eixt(1);
		
	}
	printf("password \"%s \" with salt \ "%s\" ",argv[1], argv[2]);
	printf("hashes to ==> %s\n", crypt(argv[1],argv[2]));
}
