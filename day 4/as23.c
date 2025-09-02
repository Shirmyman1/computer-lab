#include <stdio.h>
#include <ctype.h>

int main(){
	char a;
	printf("enter character: ");
	scanf("%c",&a);
	if(a=='a'||a=='i'||a=='e'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
	printf("vowel");
	else if(isalpha(a))
	printf("consonant");
	else
	printf("not an alphabet");
	
	return 0;
}

