#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	int count = 0;
	printf("enter string: ");
	scanf("%s", str);

	for (int i = 0; i < strlen (str); i++) {
		char c = str[i];
		if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E'  || c == 'I' || c == 'O' || c == 'U' )
			count++ ;

	}
	printf("Vowels = %d\n", count);
	return 0;
}

