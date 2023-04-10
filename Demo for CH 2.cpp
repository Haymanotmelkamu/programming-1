

#include<iostream>
using namespace std;
int main(){
int a,b,c,d;//variable declaration
float sum;
float z=5.5;//  constant declaration
double y=7.4;
float con=12.12;
cout<<"enter a"<<endl;
cin>>a;
cout<<"enter b"<<endl;
cin>>b;
cout<<"enter c"<<endl;
cin>>c;
sum=z+y+con;//arthimatic operators
cout<<"the sum is"<<sum<<endl;
if(a<b)//relational operators
{
cout<<"b is greater"<<endl;
}
else
cout<<" a is greater";
if(a==c)//logic operators
{
cout<<"true"<<endl;
}
else
cout<<"false"<<endl;
{
d=a--+b++-++c;/*increment and decrement 
operator*/
cout<<d<<endl;
}


return 0;


}
