#include <stdio.h>

int memo[12];

int ott(int n)
{
    if(n == 1) return 1;
    if(n == 2) return 1;
    if(memo[n] != 0) return memo[n];
    return memo[n] = ott(n-1) + 1;
}

int main()
{
    int t,n;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%d", &n);
        printf("%d\n",ott(n));
    }

    return 0;
}
