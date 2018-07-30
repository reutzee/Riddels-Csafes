#include <stdio.h>

void main() {
	int n;

	scanf("%x",&n);

	if (n<<8 || !(n<<7))
		printf("Nope\n");
	else
		printf("Hooray\n");

}
