#include <stdio.h>
#include <string.h>
//#include <string>
//using namespace std;
//using std::string;

int main(){

freopen("data.in","r",stdin);

int a,i,j,k,m;
char b[1000];
//string b1;

scanf("%d",&a);

 for(i=0;i<=a;i++)
  {
    //scanf("%s",b);
    gets(b);  
   // b1 = string(&b[0]);
   if(i != 0){
	   m=0;
    for (j=0;j<=strlen(b);j++)
    {
      if(b[j] != ' '&&b[j] != '\0') m++; 
      else {
       for(k=0;k<m;k++)
       printf("%c",b[j-k-1]);
       printf(" ");
       m=0;
      }
    }
    
    printf("\n");
  }
  }
return 0;
}
