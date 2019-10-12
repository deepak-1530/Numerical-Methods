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

cout<<"enter x1 ";
cin>>x1;

cout<<"enter eps ";
cin>>eps;

cout<<"enter n"; //no. of iterations
cin>>n;

float f0 = calcF(x0);
float f1 = calcF(x1);


if(abs(f0 - f1)<eps)
{
cout<<abs(f0 - f1)<<endl;
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
x0 = x1;
x1 = x;

}  
cout<<"solution not found"<<endl;
return 0;
}
