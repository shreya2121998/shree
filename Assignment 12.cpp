 #include<iostream>
 
 using namespace std;
 class sort11
 {

      float a[20];
      int  i,j,temp,n;
 public:
      void accept()
      {
      cout<<"\n Enter N no of Student=";
      cin>>n;
      cout<<"\n enter Percentage of student=";
      for(i=0;i<n;i++)
      {
       cin>>a[i];
      }
    }
      void selection()
   {
     for(i=0;i<n;i++)
    {
       for(j=i+1;j<n;j++)
       {
	 if(a[i]>a[j])
	 {
	   temp=a[i];
	   a[i]=a[j];
	   a[j]=temp;
	 }
       }
      }
      cout<<"\n Sorted Percentage using selection sort=";
      for(i=0;i<n;i++)
      {
	 cout<<"\t"<<a[i];
      }
    }

       void bubble()
   {
     for(i=0;i<n-1;i++)
    {
       for(j=0;j<(n-1);j++)
       {
	 if(a[j]>a[j+1])
	 {
	   temp=a[j];
	   a[j]=a[j+1];
	   a[j+1]=temp;
	 }
       }
      }
      cout<<"\n Sorted Percentage using Bubble sort=";
      for(i=0;i<n;i++)
      {
	 cout<<"\t"<<a[i];
      }
    }
        void max()
        {
       for(i=0;i<n-1;i++)
      {
         for(j=0;j<(n-1);j++)
       {
	   if(a[j]<a[j+1])
	 {
	   temp=a[j+1];
	   a[j+1]=a[j];
	   a[j]=temp;
	 }
       }
      }
        for(i=0;i<5;i++)
        {
          cout<<"\t"<<a[i];
       }
      }
        
       
 };
      int main()
      {
       int ch;
       sort11 s1;
      while(1)
      {
      cout<<"\n enter yr choice=";
      cout<<"\n1:Selection sort""\t2:Bubble sort""\t 3:top 5 scorers";
      cin>>ch;
	switch(ch)
      {
	case 1:
      {
	s1.accept();
	s1.selection();
	break;
       }
       case 2:
       {
	s1.accept();
	s1.bubble();
	break;
       }
        case 3:
        {
         s1.max();
         break;
        }
      }
      }
       return 0;
  }
  


