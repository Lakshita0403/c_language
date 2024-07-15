#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*head;
// Counting number of elements in the list
int length()
{
struct node *cur;
int count = 0;
cur = head;
while(cur=!NULL)
{
cur = cur->next;
count++; 
}
return(count);
}
 
// Deleting the node from the list depending upon the data in the node 
 
int delnodedata(int num)
{
struct node *prev,*cur;
cur = head;
while(cur!=NULL)
{
if(cur->data == num)
{
if(cur == head)
{
head = cur->next; 
free(cur);
return 0;
}

else
{
prev -> next = cur-> next;
free(cur);
return 0;
}
}
else
{
    prev = cur;
    cur = cur->next;
}
}

printf("Elements %d is not found in the list",num);
return 1;
}

// Deleting a node from list depending upon the location in the list

int delnodeloc(int loc)
{
struct node *prev,*cur;
int i;
cur = head;
if(loc>(length())||loc<=0)
{
printf("Deletion of node at given loction is not possible\n");
}
else
{
// if the location is starting of the list
if(loc == 1)
{
head = cur->next;
free(cur);
return 0;
}
else
{
for(i=0;i<loc;i++)
{
prev = cur;
cur = cur->next;
}
prev->next = cur->next;
free(cur);
}
}
return 1;
}
 //Adding a node at the end of the list

void addend(int num)
{
struct node *temp1,*temp2;
temp1=(struct node *)malloc(sizeof(struct node));
temp1->data = num;
 
//copying the head loction into another node

temp2 = head;
if(head == NULL)
{
// if list is empty we create first node 
head = temp1;
head->next = NULL;
}
else
{
// traverse down to end of the list
while(temp2->next=!NULL)
temp2 = temp2->next;

// append at the end of the list
temp1->next = NULL;
temp2->next = temp1;
}
}
// adding a node at the begining of the list

void addbeg(int num)
{
struct node *temp;
temp= (struct node*)malloc(sizeof(struct node));
temp->data = num;
if(head == NULL)
{
//list is empty
head = temp;
temp->next = NULL;
head = temp;
}
else
{
temp->next = head;
head = temp;
}
}


// Adding a new node at specified position 
void addat(int num, int loc)
{
int i;
struct node *temp,*prev,*cur;
cur = head;
if(loc>(length()+1)||loc<=0)
{
printf("\nInsertion at given location is not possible\n");
}
else
{
// If the location is starting of the list 
if(loc==1)
{
addbeg(num);
}
else 
{
for(i=1;i<loc;i++)
{
prev = cur;
cur = cur->next;
}
temp = (struct node *)malloc(sizeof(struct node));
temp->data = num;
prev->next = temp;
temp->next =cur;
}
}
}
 //Display list contents
void display()
{
struct node *cur;
cur = head;
if(cur == NULL)
{
printf("\n list is empty");
}
else
{
printf("Elements in the list;");
// traverse the entire linked list
while(cur!=NULL)
{
printf("-> %d",cur->data);
cur = cur->next;
}
printf("\n");
}
}

// Reversing a linked list
void reverse()
{
struct node *prev,*cur,*temp;
cur = head;
prev = NULL;
while(cur!=NULL)
{
temp = prev;
prev = cur;
cur = cur->next;
prev->next = temp;
}
head = prev;
}
int main(int argc,char*argv[])
{
    int i=0;
    // set head as NULL
    head = NULL;
    while(1)
    {
        printf("\n <---------------------------->\n");
        printf("Main Menu\n");
        printf("\n <---------------------------->\n");
        printf("\n Insert a number\n 1. At the begining");
        printf("\n2. At the end");
        pffrintf("\n2. At the particular location in the list");
        printf("\n4.Print the elements in the list");
        printf("\n5.Print the number of elements in the list");
        printf("\n6.Reverse the linked list");
        printf("\n7.Delete a node in the list by value");
        printf("\n8. Delete a node based on location");
        printf("\n9.Delete a last\n");
        printf("\n\n0. Exit\n");
        printf("\n Choose Option:");
        scanf("%d",&i);
        switch(i)
        {
            case 1:
            {
                int num;
                printf("\n Enter a number to insert in the list:");
                scanf("%d",&num);
                addbeg(num);
                display();
                break;
            }
            case 2:
            {
                int num;
                printf("\n Enter the number to insert:");
                scanf("%d",&num);
                addend(num);
                display();
                break;
            }
            case 3:
            {
                int num, loc;
                printf("Enter the number to insert:");
                scanf("%d",&num);
                printf("\n Enter the location in list at which the number is inserted:");
                scanf("%d",&loc);
                addat(num,loc);
                display();
                break;
            }
            case 4:
            {
                display();
            }
            case 5:
            {
                display();
                printf("\n Total number of nodes in the list:%d",length());
                break;
            }
            case 6:
            {
                reverse();
                display();
                break;
            }
            case 7:
            {
                int num;
                printf("\n Enter the number to be deleted from list:");
                scanf("%d",&num);
                delnodedata(num);
                display();
                break;
            }
            case 8:
            {
                int num;
                printf("\n Enter the location of the node to be deleted from the list:");
                scanf("%d",&num);
                delnodeloc(num);
                display();
                break;
            }
            case 9:
            {
                struct node *temp1,*temp2;
                if(head->next==NULL)
                {
                    head = NULL;
                }
                else{
                    temp1 = head;
                    temp2 = head->next;
                    
                    while(temp2->next!=NULL)
                    {
                        temp1 = temp2;
                        temp2 = temp2->next;
                    }
                    temp1->next = NULL;
                    free(temp2);
                }
                    display();
                }

                break;
                case 0:exit(0);
                default:
                {
                    printf("\n Wrong option choosen");
            
                }
                //end if switch
                // end of while
                // end of main
            }
        }