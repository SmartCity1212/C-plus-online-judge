#include<stdio.h>
#include <stdlib.h>

//#define verprt

int main (){

freopen("data.in","r",stdin);
freopen("data.out","w",stdout);

int i,j,k,m=0,n,n1,t,a[110],b[110];

scanf("%d",&n);
while(n) {
  
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
 scanf("%d",&n1);
  for(j=0;j<n;j++)
  {
	  for(k=n-1;k>j;k--)
	  {
             #ifdef verprt
		printf("%d %d",a[k],a[k-1]);
	     #endif
              
             if(abs(a[k-1]) < abs(a[k]))
             {
	       t= a[k-1];   
               a[k-1] = a[k];
	       a[k] = t;
             }
	  }
  }
for (i = 0;i < n;i++)
{
  if(i==n-1) printf("%d",a[i]);
  else printf("%d ",a[i]);
}
//if(n1!=0)
printf("\n");
n=n1;
 }

return 0;
}
