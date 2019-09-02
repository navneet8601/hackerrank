#define MAX_LEN 100
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    char ch,s[MAX_LEN],sen[MAX_LEN];
    scanf("%c ", &ch);
    scanf("%[^\n]%*c", s);
    scanf("%[^\n]%*c", sen);
    printf("%c", ch);
    printf("\n");
    printf("%s",s);
    printf("\n");
    printf("%s",sen);
    return 0;
}
