#include <stdio.h>
#include <stdlib.h>   //https://www.zhihu.com/question/20525419

//#define VERBOSE

struct ListNode {
    	int data;
    	struct ListNode *next;
        };

void printlist( struct ListNode *L )//´òÓ¡Á´±í
{
   	struct ListNode *p = L;
   	while (p)
       	{
		if(p->next == NULL)
     		printf("%d", p->data);
		else printf("%d ", p->data);
     		p = p->next;
   	}
   	printf("\n");
}

int main(){
// freopen("data.in","r",stdin);
// freopen("data.out","w",stdout);
        struct ListNode *p1,*p2,*head,*p3,*p4;
	int a,b,i,j,m,k1,k2;
	scanf("%d",&a);
	for (i=0;i<a;i++)
	{
	 j=1;
	 head=(struct ListNode*)malloc(sizeof(struct ListNode));
	 //head->next = NULL;
         p2=head;
	 scanf("%d",&b);
	 m = b;
	 while(b--)
	 {
	   p1=(struct ListNode*)malloc(sizeof(struct ListNode));
	   //p1->next = NULL;
	   p1->data = j;
	   j++;
	   p2->next=p1;
	   p2=p1;
	 }
	 p2->next=NULL;
   	// return head->next;
	
//	printlist(head->next);
//	head = deletem(head,1);

#ifdef VERBOSE	 
	printlist(head);
#else
	printf("hi\n");
#endif
	while(m>3)
	{
	  p3 = head->next;
	  for(k1=2;k1<=m;k1+=2)
	  {
	      
	    p3->next = p3->next->next;
	    p4 = p3->next;
	    p3 = p4;
	    
	    //p4->next = p4->next->next;
	    //p3 = p4->next;
	    
	    //printlist(head->next);   
	  }
	  m = m/2+m%2;
	  if(m>3)
	  {
            p3 = head->next;
	    for(k1=3;k1<=m;k1+=3)
	    {
	     p3->next->next = p3->next->next->next;
	     p4 = p3->next->next;
	     p3 = p4;
	     //p6->next->next = p6->next->next->next;
	     //p5 = p6->next->next;   

	   // printlist(head->next); 
	    }
	  m = 2*(m/3)+m%3;
	  }
	  //else printlist(head->next);
	}
	 printlist(head->next);
	}


return 0;
}
