#include<iostream.h>

class Searching_functions
{
  public:
   int Sentinal_search(int array[], int size, int key)
   {
     int i=0;
     while(array[i]!=key)
      {
	i++;
      }
     if(i<size)
       return i;
     else
       return -1;
   }

   int Linear_search(int array[], int size, int key)
    {
       for(int i=0; i<size; i++)
         if(array[i]==key)
           return i;
       
       return -1;
    }
   
    void Sort(int array[], int size)
    {
       int i, j, temp;
       for(i=0;i<size;i++)
         for(j=1;j<size-i;j++)
	   if(array[j-1]>array[j])
	     {
		temp = array[j-1];
		array[j-1] = array[j];
		array[j] = temp;
 	     }
	 
       
    }

    int Binary_search(int array[], int size, int key)
    {
        int high = size - 1;
	int low = 0;
        int mid;
        while(low<=high)
	{
	   mid = (high + low)/2;
	   if(array[mid] == key)
             return mid;
	   else if(array[mid] < key)
            {
              low = mid+1; 
            }
           else if(array[mid] > key)
            {
              high = mid-1;
            }
	}
	
        return -1;
    }

    int Fibonacci_search(int array[], int size, int key)
    {
      int F[size];
      int k=1, i=0, j=1;
      F[0] = i;
      F[1] = j;
       int offset = 0;
       while(F[k] < size)
       {
	 k++;
	 F[k] = i+j;
         i = j;
	 j = F[k]; 
       }
      
       int mid, p, q;
       p = k-2;
       q = k-1;
       
      while((p+q) > 1)
       {
          mid = (offset + F[p]) > (size-1) ? (size-1) : (offset + F[p]);
          if(array[mid] < key)
           {
             offset = mid; 
             p--;
	     q--;
	
	   }
          else if(array[mid] > key)
           {
 	     p -= 2;
	     q -= 2;
	   }
	  else
           {
             return mid;  
           }
       } 
     
       if( array[offset] == key)
          return offset;

     return -1;
    }
};

int main()
{
   Searching_functions Search;
   int array[10];
   cout<<"\n\t Enter the Roll numbers of 10 Students that were present: ";
   for(int i=0; i<10; i++)
    {
       cin>>array[i];
    }
    
   int Roll;
   int index;
   char choice;

do{
   cout<<"\n\t Enter the roll no. of student to check whether he was present or not :";
   cin>>Roll;
   cout<<"\n\t According to Sentinal Search ";
         index = Search.Sentinal_search(array, 10, Roll);
         if(index == -1)
          {
              cout<<"\n\t Strudent was absent";
          }
         else
          {
              cout<<"\n\t Student was present and found at index no. "<<index;
          }
   cout<<"\n\t According to Linear Search ";
         index = Search.Linear_search(array, 10, Roll);
         if(index == -1)
          {
              cout<<"\n\t Strudent was absent";
          }
         else
          {
              cout<<"\n\t Student was present and found at index no. "<<index;
          }
   cout<<"\n\t According to Binary Search ";
         index = Search.Binary_search(array, 10, Roll);
         if(index == -1)
          {
              cout<<"\n\t Strudent was absent";
          }
         else
          {
              cout<<"\n\t Student was present and found at index no. "<<index;
          }
   cout<<"\n\t According to Fibonacci Search ";
         index = Search.Fibonacci_search(array, 10, Roll);
         if(index == -1)
          {
              cout<<"\n\t Strudent was absent";
          }
         else
          {
              cout<<"\n\t Student was present and found at index no. "<<index;
          }
  cout<<"\n\t Do you want to search for another student? (y/n) :";
  cin>>choice;
 }while(choice=='y');
 return 0;  
}
