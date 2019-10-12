#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

float  calcDF(float x)
{
return float(2.0*x);
}

float calcF(float x)
{
return (x*x - 4);
}

int main()
{

float x0,eps;
int n;

cout<<"enter x0, eps, n"<<endl;
cin>>x0>>eps>>n;
cout<<endl;

float df0 = calcDF(x0);
float f0 = calcF(x0);

if(abs(df0)<eps)
cout<<"wrong interval"<<endl;

float x;

for(int i = 0; i<n; i++)
{
float f0 = calcF(x0);
float df0 = calcDF(x0); 
x = x0 -f0/df0;



if(abs(f0)<eps)
{
cout<<"root is "<<x<<endl;
return 0;
}
 x0 = x;
}
cout<<"solution not found"<<endl;
return 0;
}
