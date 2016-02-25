#include <stdio.h>
#include <string.h>

int main(){

freopen("data.in","r",stdin);

int a,i,j,m;
char b[100][10000];

    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
    scanf ("%s",b[i]);
           m=1;
      for(j=0;j<strlen(b[i]);j++)
      {
        
	if(b[i][j+1] == b[i][j])
		m += 1;

	else {
		if(m == 1)
		printf("%c",b[i][j]);
		else printf("%d%c",m,b[i][j]);
		m = 1;
	     }
      }
      printf("\n");
    }
//    printf("%s",b[0]);
//    printf("%d",strlen(b[0]));
    
return 0;
}
