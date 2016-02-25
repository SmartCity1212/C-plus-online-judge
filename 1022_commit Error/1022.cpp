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

int power(int x ,int N) // ��x��N�η�
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
     Node *newNode = (Node*)malloc(sizeof(Node));//�����Ӧ�Ŀռ�  
     newNode->data = b[i];//�ѷ���Ŀռ������������Ϊnewdata  
     newNode->next = link->top;//���½���ָ����ָ��ԭʼջ��ջ��  
     link->count++;  
     link->top = newNode;//����ջ��
     
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

