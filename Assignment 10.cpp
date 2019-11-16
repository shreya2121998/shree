 #include <iostream>
 #define MAX 5
 using namespace std;
 class Circular_Queue
 {
     private:
    		int *cqueue_arr;
    		 int front, rear;

        public:

            Circular_Queue()
            {
              cqueue_arr = new int [MAX];
              rear = front = -1;
            }
            void insert(int item)
            {
                if ((front == 0 && rear == MAX-1) || (front == rear+1))
              {
                    cout<<"\norder list full please wait \n";
                    return;
                }
                if (front == -1)
                {
                    front = 0;
                    rear = 0;
                }
                else
                {
                    if (rear == MAX - 1)
                        rear = 0;
                    else
                        rear = rear + 1;
                }
                cqueue_arr[rear] = item ;
            }
            void del()
            {
                if (front == -1)
                {
                    cout<<"\nno orders\n";
                  return ;
                }
                cout<<cqueue_arr[front]<<"served order is : "<<endl;;
                if (front == rear)
                {
                    front = -1;
                    rear = -1;
                }
                else
                {
                    if (front == MAX - 1)
                        front = 0;
                    else
                        front = front + 1;
                }
            }
            void display()
            {
                int front_pos = front, rear_pos = rear;
                if (front == -1)
                {
                    cout<<"no orders\n";
                    return;
                }
                cout<<"order list :\n";
                if (front_pos <= rear_pos)
                {
                    while (front_pos <= rear_pos)
                    {
                        cout<<cqueue_arr[front_pos]<<"  ";
                        front_pos++;
                    }
                }
                else
                {
                    while (front_pos <= MAX - 1)
                    {
                        cout<<cqueue_arr[front_pos]<<"  ";
                        front_pos++;
                    }
                    front_pos = 0;
                    while (front_pos <= rear_pos)
                    {
                        cout<<cqueue_arr[front_pos]<<"  ";
                        front_pos++;
                    }
                }
                cout<<endl;
            }
    };
    int main()
    {
        int choice, item;
        Circular_Queue cq;
        do
        {
	cout<<"\n***************************************************\n";
            cout<<"1.give pizza order\n";
            cout<<"2.serve pizza order \n";
            cout<<"3.Display ordres \n";
            cout<<"4.Quit\n";
            cout<<"Enter your choice : ";
            cin>>choice;
	cout<<"\n***************************************************\n";
            switch(choice)
            {
            case 1:
                cout<<"Input the pizza order for insertion in queue : ";
                cin>>item;	
                cq.insert(item);
    	    break;
    	case 2:
                cq.del();
    	    break;
            case 3:
                cq.display();
    	    break;
    	case 4:
    	    break;
    	default:
    	    cout<<"Wrong choice\n";
	cout<<"\n***************************************************\n";
    	}
	cout<<"\n***************************************************\n";
        }

        while(choice != 4);
        return 0;
    }
