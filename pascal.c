#include <stdio.h>

int main(){
  int n,k;
  int arr[31][31];
  scanf("%d %d",&n,&k);

  for(int i=0; i<31; i++){
    arr[i][0] = 1;
    arr[i][i] = 1;
  }
  for(int i=2; i<n; i++){
    for(int j=1; j<i; j++){
      arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
    }
  }
  printf("%d\n", arr[n-1][k-1]);
  printf("hello world!\n");
  return 0;
}
