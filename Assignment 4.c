#include<iostream>
 

main()
{
int a[10], b[10], c[10],m,n,k,k1,i,j,x;


cout<<"\n\tPolynomial Addition\n";
cout<<"\t===================\n";



cout<<"\n\tEnter the no. of terms of the polynomial:";
cin>>m;
cout<<"\n\tEnter the degrees and coefficients:";
for (i=0;i<2*m;i++)
cin>>a[i];

cout<<"\n\tFirst polynomial is:";

k1=0;
if(a[k1+1]==1)
cout<<"x^"<<a[k1];
else
cout<<"x^"<< a[k1+1]<<a[k1];
k1+=2;

while (k1<i)
{
cout<<"x^"<< a[k1+1]<<a[k1];
k1+=2;
}


cout<<"\n\n\n\tEnter the no. of terms of 2nd polynomial:";
cin>>n;


cout<<"Enter the degrees and co-efficients:\n";

for(j=0;j<2*n;j++)
cin>>b[j];
cout<<"Second polynomial is:\n";

k1=0;
if(b[k1+1]==1)
cout<<"x^"<<b[k1];
else
cout<<"x^"<<b[k1+1]<<b[k1]);
k1+=2;
while (k1<2*n)
{
cout("x^"<< b[k1+1]<<b[k1];
k1+=2;
}


i=0;
j=0;
k=0;

while (m>0 && n>0)
{
if (a[i]==b[j])
{
c[k+1]=a[i+1]+b[j+1];
c[k]=a[i];
m--;
n--;
i+=2;
j+=2;
}
else if (a[i]>b[j])
{
c[k+1]=a[i+1];
c[k]=a[i];
m--;
i+=2;
}
else
{
c[k+1]=b[j+1];
c[k]=b[j];
n--;
j+=2;
}
k+=2;
}

while (m>0)
{
c[k+1]=b[j+1];
c[k]=b[j];
k+=2;
j+=2;
n--;
}


cou<<"Sum of the two polynomials is:";
out<<"\n";
k1=0;
if (c[k1+1]==1)
cout<<"x^"<<c[k1];
else
cout<<"x^"<<c[k1+1]<<c[k1];
k1+=2;

while (k1<k)
{
if (c[k1+1]==1)
cout<<"x^"<<c[k1];
else
cout<<"x^"<< c[k1+1]<<c[k1];
k1+=2;
}



return 0;

}
