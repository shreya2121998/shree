 #include<iostream>

 using namespace std;
 
 int quicksort(float[],int,int);
 int main()
 { 
   float x[20];
   int n,i;
   cout<<"\n enter n no of student";
   cin>>n;
   cout<<"\n Enter elements=";
   for(i=0;i<n;i++)
   {
    cin>>x[i];
   }
   quicksort(x,0,n-1);
   cout<<"\n sorted Element=";
   for(i=0;i<n;i++)
   {
    cout<<"\t"<<x[i];
   }
    cout<<"\nTOP FIVE SCORES ARE:\n";
    for(int i=n-1;i>=n-5;i--)
    cout<<x[i]<<"\n";
    return 0;
   

    
 }
 int quicksort(float x[20],int first,int last)
 {
  int pivot,j,temp,i;
  if(first<last)
  {
   pivot=first;
   i=first;
   j=last;
    while(i<j)
    {
      while(x[i]<=x[pivot]&&i<last)
	 i++;
       while(x[j]>x[pivot])
	  j--;
	 if(i<j)
	 {
	  temp=x[i];
	  x[i]=x[j];
	  x[j]=temp;
	 }
      }
      temp=x[pivot];
      x[pivot]=x[j];
      x[j]=temp;
      quicksort(x,first,j-1);
      quicksort(x,j+1,last);
    }
    return 0;
   }


 
