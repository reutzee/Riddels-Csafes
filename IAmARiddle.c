#include <stdio.h>

void main() {
    int n;
    char *c="I'm a Riddle";
    int *p=(int*)c;

    scanf("%d", &n);

    if (p[0]+(p[1]+p[2]*n)*n)
        printf("Nope\n");
    else
        printf("Hooray\n");
}