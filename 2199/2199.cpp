#include<stdio.h>
#include<math.h>

double f(double x){
	double m;
    m = 8*pow(x,4)+7*pow(x,3)+2*pow(x,2)+3*x+6;
    return m;
   }

int main(){

   int a,i,j,y1,y2;
   long long b;
   double n1,n2,n3,er;

   scanf("%d",&a);

   for(i=0;i<a;i++)
   {
    n1 = 0;
    n2 = 100;
    j = 1;

    scanf("%lld",&b);
    y1 = f(n1);
    y2 = f(n2);
    if(y1<b && b<y2)
    { 

      while(j) {
	n3 = (n2+n1)/2;
        if (f(n3)<b)
	{
	  er = fabs(b-f(n3));
	  n1 = n3;
	  if (er<=0.0001) 
	  {
            printf("%.4lf\n",n3);
	    j = 0;
	  }
	}
	else if (f(n3)>b)
	{
	 er = fabs(b-f(n3));
	 n2 = n3;
	 if (er<=0.0001) 
	  {
            printf("%.4lf\n",n3);
	    j = 0;
	  }
	}
	else printf("%.4lf\n",n3);
      } 
      
    }
    else if(y1 == b) printf("0\n");
    else if(y2 == b) printf("100\n");
    else printf("No solution!\n");
   }

   return 0;
}
