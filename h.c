#include <stdio.h>

void main() {
	int t,h,i,n,k[8]={0,32,72,101,111,114,121,127};
	char s[8];

	scanf("%d",&n);

	for (t=1+(h=i=0); i<31; i++,t*=3)
		h+=((n>>i)&1)*t;
	printf("n=%d h=%d\n",n,h);
	if (h==561936774) {
		for (i=0; i<7; i++,n>>=3)
			s[i]=k[n&7];
		printf("%7s\n",s);
		}
	else
		printf("Nope\n");

}
