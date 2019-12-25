 #include <stdio.h>
#include <stdlib.h>

void func(char str[]);
void main() {
	char str[100];
	printf("ilk stringi giriniz: ");
	gets(str);

	func(str);
}
void func(char str[]){
	int i;
	int space=0;
	int vowel=0;
	int consonant=0;
	int digit=0;
	for(i=0;i<100;i++){
		if(str[i]==32){
			space++;
		}	
		else if(str[i]=='a' || str[i]=='A' || str[i]=='e' || str[i]=='E'
			  ||str[i]=='u' || str[i]=='U' || str[i]=='i' || str[i]=='I'
			  ||str[i]=='o' || str[i]=='O')
		{
			vowel++;
		}
		else if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
			consonant++;
		}
		else if(str[i]<='9' && str[i]>='0'){
			digit++;
		}
		else if(str[i]=='\0'){
			break;
		}
	}	
	printf("space: %d, digit: %d, consonant: %d, vowel: %d",space,digit,consonant,vowel);
}
