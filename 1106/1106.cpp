#include<stdio.h>
#include<string.h>

int main(){
freopen("data.in","r",stdin);
freopen("data.out","w",stdout);
char a[1100];
int i,j,m,n,b[1000],c[1000],x,t;

while(scanf("%s",a)!=EOF){
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
  if(i != strlen(a)-1 && i>0 && a[i+1] != '5')
   j++;
  if(a[i] == '5'&& i>=0)
   i--;
  
}
if(a[0]=='5'&&a[1]=='5')
    j--;
   x = j+1;

for(j=0;j<x;j++)
  {
	  for(i=x-1;i>j;i--)
	  {           
             if(b[i-1] > b[i])
             {
	       t= b[i-1];   
               b[i-1] = b[i];
	       b[i] = t;
             }
	  }
  }



for(i= 0;i<=x-2;i++){
  printf("%d ",b[i]);
}
 printf("%d\n",b[i]);
}

return 0;
}
