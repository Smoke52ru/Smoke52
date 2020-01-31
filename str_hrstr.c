#include <stdio.h>
#include <stdlib.h>

int main(){
  int m,n,x,f=0,t=0;
  printf("Enter matrix size(m*n)\n");
  scanf("%d%d",&m,&n);
  int i,j,a[m*n];
  for (i=0;i<m;i++){
    for (j=0;j<n;j++){
      a[i*n+j]=t;
      printf("%4d",a[i*n+j]);
    }
    t++;
    printf("\n");
  }
  printf("\n");
  if (m%2){ 
    m--;
    f=1;
  }
  for (i=0;i<m/2;i++){
    for (j=0;j<n;j++){
      x=a[i*n*2+j];
      a[i*n*2+j]=a[i*n*2+n+j];
      a[i*n*2+n+j]=x;
    }
  }
  if (f) m++;
  for (i=0;i<m;i++){
    for (j=0;j<n;j++){
      printf("%4d",a[i*n+j]);
    }
    printf("\n");
  }

  return 0;
}
