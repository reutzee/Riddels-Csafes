#include <stdio.h>
#include <string.h>

#define Matthew_18_15 "If your brother or sister sins, go and point out their fault, just between the two of you. If they listen to you, you have won them over."


void main() {
    char str1[] = Matthew_18_15; 
    char str2[] = Matthew_18_15;

    int n;

    scanf("%d", &n);

    if( n >- 0 && n < sizeof(str1) ) 
         str1[n]=str2[n]='*';

    if (strcmp(str1,str2) == 0)
        printf("Nope\n");
    else
        printf("Hooray\n");
}