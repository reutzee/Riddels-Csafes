#include <stdio.h>
#include <limits.h>


char v[256];

void main() {
    int n;
    scanf("%d", &n);

    unsigned char x = 1;

    for(int i=0; i<2*n+1; i++) {
        v[x ^ 128]=1;
        
        if(!((x <<= 1) & 2)) x++;
        
        if(v[x ^ 128]) x ^= 1;
            
        if(x && v[x ^ 128]) break;
    }


    for(int i=0; i<sizeof(v); i++) {
        if(!v[i] && i != n) {
            printf("Nope\n");
            return;
        }
    }

    printf("Hooray\n");
}