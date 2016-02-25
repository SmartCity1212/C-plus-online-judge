#include <stdio.h>
#include <string.h>

int main(){

freopen("data.in","r",stdin);
freopen("data.out","w",stdout);
int a,i,j,k,m;
char b[1000];

scanf("%d",&a);

 for(i=0;i<=a;i++)
  {
    gets(b);  

   if(i != 0){
	   m=0;
    for (j=0;j<=strlen(b);j++)
    {
      if(b[j] != ' '&&b[j] != '\0') m++; 
      else {
       for(k=0;k<m;k++)
       printf("%c",b[j-k-1]);
       if(j != strlen(b))  printf(" ");
       m=0;
      }
    }
    
    printf("\n");
  }
  }
return 0;
}
