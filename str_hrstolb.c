#include <stdio.h>
#include <stdlib.h>

int main(){
  int m,n,x,f=0,k=0,t=0;
  printf("Enter matrix size(m*n)\n");
  scanf("%d%d",&m,&n);
  int i,j,a[m*n];
  for (i=0;i<n;i++){
    for (j=0;j<m;j++){
      a[i*m+j]=t%m;
      t++;
    }
  }
  for (i=0;i<m;i++){
    for (j=0;j<n;j++){
  		printf("%4d",a[j*m+i]);
  	}
  	printf("\n");
  }
  printf("\n");
  if (m%2){ 
    m--;
    f=1;
  }
  for (i=0;i<n;i++){
    for (j=0;j<m/2;j++){
      x=a[j*2+i*m+k];
      a[j*2+i*m+k]=a[j*2+i*m+k+1];
      a[j*2+i*m+k+1]=x;
    } 
    k++;
  }
  if (f) m++;
  for (i=0;i<m;i++){
    for (j=0;j<n;j++){
      printf("%4d",a[j*m+i]);
    }
    printf("\n");
  }

  return 0;
}
