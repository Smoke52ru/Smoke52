#include <stdio.h>
#include <stdlib.h>

int main(){
  int m,n,x,f=0,k=0,t=0;
  printf("Enter matrix size(m*n)\n");
  scanf("%d%d",&m,&n);
  int i,j,a[m*n];
  for (i=0;i<m;i++){
    for (j=0;j<n;j++){
      a[i*n+j]=t%n;
      t++;
      printf("%4d",a[i*n+j]);
    }
    printf("\n");
  }
  printf("\n");
  if (n%2){ 
    n--;
    f=1;
  }
  for (i=0;i<m;i++){
    for (j=0;j<n/2;j++){
      x=a[i*n+j*2+k];
      a[i*n+j*2+k]=a[i*n+j*2+1+k];
      a[i*n+j*2+1+k]=x;
    }
    if (f) k++;
  }
  if (f) n++;
  for (i=0;i<m;i++){
    for (j=0;j<n;j++){
      printf("%4d",a[i*n+j]);
    }
    printf("\n");
  }

  return 0;
}
