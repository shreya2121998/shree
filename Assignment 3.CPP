#include<iostream.h>
#include<conio.h>

class sparse
{
private:
int a[5][5],b[5][5],i,j,d[5][5],t[10][10]r,c;
public:
void matrix();
void add();
void transpose();
};
void sparse:: matrix()
{
cout<<"Enter The Row Size and Colunm Size";
cin>>r>>c;
cout<<"Enter Matrcs A";
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
cout<<"Enter Matrics B";
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
cin>>b[i][j];
}
cout<<"\nSparse Matrics A";
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
if(a[i][j]!=0)
{
cout<<"\t"<<(i+1)<<"\t"<<(j+1)<<"\t"<<a[i][j];
}
}
cout<<"\nSparse Matrics B";
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
if(b[i][j]!=0)
{
 cout<<"\n\t"<<(i+1)<<"\n\t"<<(j+1)<<"\n\t"<<b[i][j];
}
}
}
void sparse:: add()
{
cout<<"\nAddition Is";
for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
if(a[i][j]!=0||b[i][j]!=0)
{
d[i][j]=a[i][j]+b[i][j];
cout<<" \t"<<(i+1)<<"\t"<<(j+1)<<"\t"<<d[i][j];
}
}
}

void sparse:: transpose()
{

for(i=0;i<r;i++)
for(j=0;j<c;j++)
{
t[j][i]=d[i][j];
}
cout<<"\nTranspose Matrix is";
for(i=0;i<c;i++)
for(j=0;j<r;j++)
{
cout<<"\t"<<t[j][i];
}
void main()
{
sparse s;
clrscr();
s.matrix();
s.add();
getch();
}