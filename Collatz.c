#include <stdio.h>

int Collatz(int n) { return n&1?3*n+1:n>>1; }

void main() {
    int i1,i2;
    int n;

    scanf("%u", &n);

    for (i2=Collatz(i1=n); i1^i2; i1=Collatz(i1)) 
        i2=Collatz(Collatz(i2));

    if (!n || i1)
        printf("Nope\n");
    else
        printf("Hooray\n");
}