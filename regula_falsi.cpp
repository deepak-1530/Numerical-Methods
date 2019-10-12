#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

float calcF(float x)
{
return(x*x - 4);
}

int main()
{
float x;
float x0, x1,eps;
int n;

cout<<"enter x0 ";
cin>>x0;
cout<<endl;

cout<<"enter x1 ";
cin>>x1;
cout<<""<<endl;

cout<<"enter eps ";
cin>>eps;
cout<<""<<endl;

cout<<"enter n"; //no. of iterations
cin>>n;
cout<<""<<endl;

float f0 = calcF(x0);
float f1 = calcF(x1);


if(f0*f1>0)
{
cout<<"invalid points"<<endl;
return 0;
}

for(int i = 0; i<n; i++)
{
 f0 = calcF(x0);
 f1 = calcF(x1);
x = (x0*f1 - x1*f0)/(f1 - f0) ;

float f = calcF(x);
if(abs(f)<eps)
{
cout<<"root is "<<x<<endl;
return 0;
}


if(f0*f<0)
x1 = x;

else
x0 = x;

}  
cout<<"solution not found"<<endl;
return 0;
}
