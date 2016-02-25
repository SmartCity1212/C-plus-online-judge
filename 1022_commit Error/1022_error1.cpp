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
 freopen("data.in","r",stdin);
 freopen("data.out","w",stdout);
int a,m,i,j1,j2;
int b,c;

Linkstack linkedstack,*link;
link = &linkedstack;
link->count = 0;

Node *node = (Node *)malloc(sizeof(Node)); 
node->next = NULL;
link->top = node;      
link->count++;  

while(scanf("%d",&a) != EOF){
scanf("%d",&b);
scanf("%d",&c);

m = power(10,(a-1));
j1 = m;

for(i=0;i<a&&j1>0;i++)
{
 Node *newNode = (Node*)malloc(sizeof(Node));//�����Ӧ�Ŀռ�  
 newNode->data = b/j1;//�ѷ���Ŀռ������������Ϊnewdata  
 newNode->next = link->top;//���½���ָ����ָ��ԭʼջ��ջ��  
 link->count++;  
 link->top = newNode;//����ջ��
 b = b%j1;
 j1 = j1/10;
}

#ifdef VERPRT 
   print(link);
#endif

 Node *output = link->top;    
  j2 = m;
  for(i = 0 ;i < link->count-1&&j2>0;i++){ 
       if(output->data == c/j2){ 
       output = output->next; 
       c = c%j2;
       j2 = j2/10;	
       }
       else 
       {
         printf("No.\nFINISH\n");
         break;
       }
  }  
 if (i == a)
  {printf("Yes.\n");
      
   for(i=0;i<a;i++){
   printf("in\n");
   }
   for(i=0;i<a;i++){
   printf("out\n");
   }
   printf("FINISH\n");
}
}
return 0;
}




