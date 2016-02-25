#include<stdio.h>
#include<string.h>

#define VERPRT

int main(){

char a[1000];
int i,j,m,n,b[1000];

scanf("%s",a);
j = 0;
i = strlen(a)-1;
while(i+1)
{
	m = 1;
        b[j] = 0;
  for(;a[i] != '5' && i>=0;i--)
  {
    n = a[i]-48;
    b[j] = b[j] + (n*m);
    m = 10*m;
     
  }
  if(i != strlen(a)-1 && i>0)
   j++;
  if(a[i] == '5'&& i>=0)
   i--;
  
}



#ifdef VERPRT

for(i= 0;i<=j;i++){
  printf("%d\n",b[i]);
}
#endif



return 0;
}
