#include<iostream>
#include<stdlib.h>
using namespace std;
 class queue
{
              int queue1[8];
              int rear,front;
      public:
              queue()
                {
                     rear=-1;
                     front=-1;
                }
              void insert(int x)
               {
                   if(rear >  7)
                    {
                       cout <<"queue over flow";
                       front=rear=-1;
                       return;
                    }
                    queue1[++rear]=x;
                    cout <<"inserted" <<x;
               }

              void delet()
               {
                   if(front==rear)
                     {
                         cout <<"queue under flow";
                         return;
                     }
                     cout <<"deleted" <<queue1[++front];
                }
              void display()
               {
                   if(rear==front)
                     {
                          cout <<" queue empty";
                          return;
                     }
                   for(int i=front+1;i<=rear;i++)
                   cout <<queue1[i]<<" ";
               }
};
 
int main()
{
      int ch;
char y;
      queue qu;
    do
        {
cout<<"\n*************************************************\n";
              cout <<"\n1.Insert\n2.Delete\n3.Display\nEnter choice: ";
              cin >> ch;
cout<<"\n*************************************************\n";
              switch(ch)
                {
                  case 1:    cout <<"Enter job: ";
                           	 cin >> ch;
                             qu.insert(ch);
                             break;
                  case 2:  qu.delet(); 
		 break;
                  case 3:  qu.display();
		break;
                
                  }
cout<<"\n*************************************************\n";
cout<<"do you want to continue\n";
cin>>y;
cout<<"\n*************************************************\n";

          }
while(y=='y');
return 0;
}
