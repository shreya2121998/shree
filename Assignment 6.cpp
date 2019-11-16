#include<iostream>

using namespace std;

typedef struct node
{
	int d;
	struct node *prev;
	struct node *next;
}NODE;

class DLL
{
		NODE *st,*lt;
	public:
		DLL(){st=lt=NULL;}
		NODE* createNode(int d);
		void insert(int d);
		void delAll();
		void del(int d);
		void display();
		void merge(DLL &,DLL&);
};
		

NODE* DLL::createNode(int d)
{
	NODE *temp=new(NODE);
	temp->d=d;
	temp->prev=NULL;
	temp->next=NULL;
	
	return temp;
}

	
void DLL::insert(int d)
{
	NODE *t=createNode(d);	
	if(st==NULL)
	{
		st=t;
		lt=t;
		return;
	}
	else
	{
		lt->next=t;
		t->prev=lt;
		lt=t;
	}
}

void DLL::del(int d)
{
	NODE *t,*tmp;
	if(st->d==d)
	{
		t=st;
		if(st==lt)
			lt=st=NULL;
		else
			st=st->next;
		
		delete(t);
		return;	
	}
	else if(lt->d==d)
	{
		t=lt;
		lt=lt->prev;
		lt->next=NULL;
		
		delete(t);
		return;	
	}
	
	tmp=st;
	while(tmp->next!=NULL)
	{
		if(tmp->d==d)
		{
			tmp->prev->next=tmp->next;
			tmp->next->prev=tmp->prev;
			delete(tmp);
			break;
		}
		tmp=tmp->next;
	}
	return;
}
	
		
void DLL::display()
{
	NODE *tmp=st;
	if(tmp==NULL)
	{
		cout<<"\nlist empty !";
		return;
	}
	cout<<"\nList data :";
	while(tmp!=NULL)
	{
		cout<<tmp->d<<" ";
		tmp=tmp->next;
	}	
}

void DLL::merge(DLL &x,DLL &y)
{
	 while(x.st!=NULL&&y.st!=NULL)
	 {
	 	if(x.st->d<=y.st->d)
	 	{
	 		insert(x.st->d);
			x.del(x.st->d);
		}
		else
	 	{
	 		insert(y.st->d);
			y.del(y.st->d);
		}
	 }
	 
	while(x.st!=NULL)
	{
		insert(x.st->d);
		x.del(x.st->d);
	}
	
	while(y.st!=NULL)
	{
		insert(y.st->d);
		y.del(y.st->d);
	}
}
		
		
int main()
{
	DLL x,y,z;
	int opt,d;
	while(true)
	{
		cout<<"\n\n1.insert at X\n2.insert at y\n3.display x\n4.display y\n5.merge into z\n6.display z\n7.exit\nchoose opt :";
		cin>>opt;
		
		if(opt==7)
			break;
		switch(opt)
		{
			case 1:
				cout<<"\nEnter data :";
				cin>>d;
				x.insert(d);
				break;
		
			case 2:
				cout<<"\nEnter data :";
				cin>>d;
				y.insert(d);
				break;
			case 3:
				cout<<"\nList x :";
				x.display();
				break;
			case 4:
				cout<<"\nList y :";
				y.display();
				break;
			case 5:
				z.merge(x,y);
				break;
			case 6:
				cout<<"\nList z :";
				z.display();
				break;
		}
	}
	return 0;
}
	
