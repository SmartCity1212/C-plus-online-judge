#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>

//#define VERPRT

typedef int elementtype;
typedef struct node
{  
    elementtype data;  
    struct node *next;
}Node; 

struct Linkstack
{
      node *top;
      int count;
};

void print(Linkstack *link){  
    Node *output = link->top;  
    int i;  
  
    for(i = 0 ;i < link->count-1;i++){  
        printf("%d\t",output->data);  
        output = output->next;  
    }  
    puts("");  
} 

int power(int x ,int N) // 求x的N次方
{
int i,xsum=1;

for(i=N;i>0;i--)
 {
  xsum=xsum*x;
 }
return xsum;
}

int main(){
// freopen("data.in","r",stdin);
// freopen("data.out","w",stdout);
 int a,i,i1,j;
 int x[50];
 char b[15],c[15];

 Linkstack linkedstack,*link;
 link = &linkedstack;
 link->count = 0;

 Node *node = (Node *)malloc(sizeof(Node)); 
 node->next = NULL;
 link->top = node;      
 link->count++;  

while(scanf("%d",&a) != EOF){
   scanf("%s",b);
   scanf("%s",c);
   i1 = 0;
   j = 0;
   
   for(i=0;i<a;i++)
   {
     Node *newNode = (Node*)malloc(sizeof(Node));//分配对应的空间  
     newNode->data = b[i];//把分配的空间的数据域设置为newdata  
     newNode->next = link->top;//把新结点的指针域指向原始栈的栈顶  
     link->count++;  
     link->top = newNode;//更新栈顶
     
     x[i1] = 1;
     i1++;
     

     #ifdef VERPRT 
       print(link);
     #endif
   
 
   while(link->top->data == c[j]){
      link->top = link->top->next;
      link->count--; 
      x[i1] = 0;
      i1++;
      j++;
     }
   }

if(i1 == 2*a)
{
  printf("Yes.\n");
  for(i = 0;i < 2*a;i++)
  {
    if(x[i]==1)
      printf("in\n");
    else  printf("out\n");
  }
 
  printf("FINISH\n");
 
}
else {
    printf("No.\nFINISH\n");  
    }
}

return 0;
}

