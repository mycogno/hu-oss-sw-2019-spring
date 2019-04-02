#include <stdio.h>

long long dp[501501] = {0,};
int combination(int, int);

int main(){
  int n,k;
  scanf("%d %d",&n,&k);
  printf("%d\n", combination(n,k));
  return 0;
}

int combination(int n, int k){
  int num = n*(n+1)/2 + k;
  if(n==k || k==0) return 1;
  if(dp[num] != 0) return dp[num];

  return dp[num] = (combination(n-1,k-1) + combination(n-1,k));
}
