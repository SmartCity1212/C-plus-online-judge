#include <stdio.h>
#include <string.h>

int main(){

freopen("data.in","r",stdin);

int a,i,j,m;
char b[100];

scanf("%d",&a);
for(i=0;i<a;i++)
{
  scanf("%s",b);
  m=0;
  for(j=0;j<strlen(b);j++)
  {
    if (48<=b[j]&&b[j]<=57)
	    m +=1;
  }
  printf("%d\n",m);
}

return 0;
}
