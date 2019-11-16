
#include<iostream>
using namespace std;
struct node


{
void add(int),display(),insert(),del(int),neg(),sort();
int num;
struct node *next=NULL,*start=NULL,*end=NULL;
};

node a,b;
 void node::add(int num1)
 {
 	struct node *ptr;
 	  ptr =new node;
 	  struct node *temp;
 	  temp=start;
 	  ptr->num=num1;
 	  ptr->next=NULL;
 	  if(start==NULL)
  {
    
     start=ptr;
     end=start;
  }
   
    else
    
      {
        while(temp->next!=NULL)
          {
             temp=temp->next;
          }
        temp->next=ptr;
        end=ptr;
        }
  }
  void node::insert()
  {
  struct node *ptr;
  ptr=new node;
  struct node *temp;
  temp=start;
 
   cout<<"enter the new number";
   cin>>ptr->num;
    
   int pos=1;
   int position;
   
   cout<<"enter the position to which you want to add number";
   cin>>position;
   if(position==1)
     {
     ptr->next=start;
      start=ptr;
     }
   else 
     while(pos!=position-1)
     {
     temp=temp->next;
     pos++;
     }
     
     ptr->next=temp->next;
     temp->next=ptr;
     }
     
 
 void node::del(int num2)
     {
     struct node*temp=new node;
     struct node*free=new node;
     temp=start;
     
        if(num2==start->num)
        {
        free=start;
        start=start->next;
        delete(free);
        }
    else
        while(temp->next->num!=num2)
         {
         temp=temp->next;
         }
         
        free=temp->next;
        temp->next=temp->next->next;
        delete(free);
         
  }
  void node::neg()
   {
        struct node*temp1=new node;
        temp1=start;
        struct node*temp2=new node;
        temp2=start;
        struct node*temp3=new node;
        temp3=start;
        
                
                
       while(temp1!=NULL)
       {
            if(temp1->num<0)
               {
                                                
                 if(temp1==start)
                    {
                     b.add(temp1->num);
                        temp3=temp1;
                       temp1=temp1->next;
                        delete(temp3);
                    start=temp1;
            }
                else
                   {
                       b.add(temp1->num);
                      temp3=temp1;
                    temp1=temp1->next;
                     temp2->next=temp1;
                        delete(temp3);
                 }
           }     
              else
                   {
                        temp2=temp1;
                         temp1=temp1->next;
                     }
              }
    cout<<"Deleted Element is";
    
    b.display();                             
                                                
   }                                                
  void node::display()
  {
    cout<<"----------------------------------------\n";
    struct node *ptr;
    ptr=new node;
    ptr=start;
    
    if(start==NULL)
    cout<<"list is empty";
    
      else
      
    {
      while(ptr!=NULL)
       {
         cout<<"number ::"<<ptr->num<<"\n";
         cout<<"-------------------------------------\n";
       ptr=ptr->next;
        }
        
    }
    }
    void node::sort()
    {
       struct node*temp=new node;
       struct node*temp2=new node;
       temp=temp2=start;
       int temp1;
       while(temp2->next!=NULL)
       {
        while(temp->next!=NULL)
          {
             if(temp->num=temp->next->num)
              {
                temp1=temp->num;
                temp->num=temp->next->num;
                temp->next->num=temp1;
              }
            temp=temp->next;
            temp2=temp2->next;
          }
        }
    }
  
    
 int main()
 {
 int ch,c,num,num2;
 while(1)
 {
 cout<<"1.add number list 2.display 3.insert 4.del 5.negative element are 6.positive sored number 7. negative sorted numbers";
 cin>>ch;
 switch(ch)
 {
    case 1:
    cout<<"------------------------------------------------\n";
   do
   {
   cout<<"add number";
   cin>>num;
   a.add(num);
   
   cout<<"add more? 1 or 0";
   cin>>c;
   }while(c==1);
   break;
   
   case 2:
   cout<<"list a is :";
   a.display();
   break;
   case 3:
   
    a.insert();
    break;
   case 4:
   
   cout<<"enter the position to be deleted:";
   cin>>num2;
   a.del(num2);
   
   case 5:
   cout<<"negative element are";
   a.neg();
   break;
   
  case 6:
    cout<<"positive sorted numbers:";
    a.sort();
    break;
   
  case 7:
  cout<<"negative sorted numbers:";
   b.sort();
   break;
  }
  }
  }
  
    
    
    
     
   
    
    
    

