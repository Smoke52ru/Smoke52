#include <stdio.h>
#include <stdlib.h>

int main(){
  int m,n,x,f=0,t=0;
  printf("Enter matrix size(m*n)\n");
  scanf("%d%d",&m,&n);
  int i,j,a[m*n];
  for (i=0;i<n;i++){
    for (j=0;j<m;j++){
      a[i*m+j]=t;
    }
    t++;
  }
  for (i=0;i<m;i++){
    for (j=0;j<n;j++){
  		printf("%4d",a[j*m+i]);
  	}
  	printf("\n");
  }
  printf("\n");
  if (n%2){ 
    n--;
    f=1;
  }
  for (i=0;i<n/2;i++){
    for (j=0;j<m;j++){
      x=a[j+i*m*2];
      a[j+i*m*2]=a[j+i*m*2+m];
      a[j+i*m*2+m]=x;
    } 
  }
  if (f) n++;
  for (i=0;i<m;i++){
    for (j=0;j<n;j++){
      printf("%4d",a[j*m+i]);
    }
    printf("\n");
  }

  return 0;
}
