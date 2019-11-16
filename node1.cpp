#include <iostream>
#include <cstring>
using namespace std;

struct node
{
	void add(int),display(),insert(),del(int),negative(),sort();
	int num;
	struct node *next=NULL,*start=NULL,*end=NULL;
};
node a,b;

void node::add(int num1)
{
        struct node *ptr;
        ptr=new node;
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
        cout<<"\n\nEnter the new number:  ";
        cin>>ptr->num;

        int pos=1;
        int position;
        cout<<"\nEnter Postion to which u want to add new number\n";
        cin>>position;

        if(position==1)
        {
                ptr->next=start;
                start=ptr;
        }
        else
        {
                while(pos!=position-1)
                {
                  temp=temp->next;
                  pos++;
                }
                ptr->next=temp->next;
                temp->next=ptr;
        }
}

void node::del(int num1)
{

        struct node * temp=new node;
        struct node * free=new node;
        temp=start;

        if(num1==start->num)
        {
                free=start;
                start=start->next;
                delete(free);
        }
        else
        {
                while(temp->next->num!=num1)
                {

                        temp=temp->next;
                }
                free=temp->next;
                temp->next=temp->next->next;
                delete(free);
        }
}

void node::display()
{
        cout<<"------------------------------------------\n";
        struct node *ptr;
        ptr=new node;
        ptr=start;
        if(start==NULL)
        	cout<<"\nList is Empty\n";
        else
        {
                while(ptr!=NULL)
                {
                	cout<<"Number : "<<ptr->num<<"\t";
                	cout<<"\n-------------------------------------------\n";
	                ptr=ptr->next;
	        }
        }
	cout<<"\n-------------------------------------------\n";
}


void node:: negative()
{
        struct node * temp1=new node;
        temp1=start;
        struct node * temp2=new node;
        temp2=start;
        struct node * temp3=new node;
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
	                        delete(temp3);
	                }
	        }
	        else
	        {
	                temp1=temp1->next;
	        }
	}
	cout<<"\nSuccesfully deleted.. Deleted list is: \n";
	b.display();
}

void node:: sort()
{
        struct node * temp=new node;
        struct node * temp2=new node;
        temp=temp2=start;
        int temp1;
        while(temp2->next!=NULL)
	{
                while(temp->next!=NULL)
	        {
		        if(temp->num>temp->next->num)
			{
				temp1=temp->num;
				temp->num=temp->next->num;
				temp->next->num=temp1;
			}
			temp=temp->next;
	        }
	        temp=start;
                temp2=temp2->next;
        }
}

int main()
{
        char name[10];
        int choice,c,num;
        while(1)
        {
        cout<<"\n 1.Add numbers List for A  \n 2.Display\n 3.Insert New Number\n 4.Delete\n 5.Delete Negative numbers\n 6.Sort\n 7.Add numbers list for B\n 8.Concatenate\n 9.Exit\n";
        cin>>choice;
           switch(choice)
           {
	        case 1:
	          cout<<"\n------------------------------------------------\n";
	          do
	          {
		        cout<<"Add Number for list A: ";
		        cin>>num;
		        a.add(num);
		        cout<<"Do you wanna Add more(1->continue or 0->stop)\n";
		        cin>>c;
		  }while(c==1);
	          break;
	        case 2:
		        cout<<"\nList A is....\n";
		        a.display();
		        cout<<"\nList B is....\n";
		        b.display();
		        break;
	        case 3:
		        a.insert();
		        break;
	        case 4:
		        cout<<"\n\nEnter the number u want to delete : ";
		        cin>>num;
		        a.del(num);
		        break;
	        case 5:
		        a.negative();
		        break;
	        case 6: 
	                a.sort();
		       cout<<"\n Sorted list is:"<<endl;
		        a.display();
		        break;
	        case 7: 
	        cout<<"\n------------------------------------------------\n";
	          do
	          {
		        cout<<"Add Number for list B: ";
		        cin>>num;
		        b.add(num);
		        cout<<"Do you wanna Add more(1->continue or 0->stop)\n";
		        cin>>c;
		  }while(c==1);
	        	break;
	       
	        case 8:
	                a.end->next=b.start;
		        cout<<"\n The concatenated list is:"<<endl;
		        a.display();
		
		        break;
	        case 9: 
	                return 0;
	                 break;
	   }
         }

return 0;
}

