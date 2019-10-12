#include<iostream>
#include<math.h>
#include<cmath>

using namespace std;

float calculateF(float x)
{
return(sin(x));
}


int main()
{
float x;
float x0, x1,eps;
int n;
double f;

//f = x*x - 4;

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

float f1 = calculateF(x0);
float f2 = calculateF(x1);

if(f1*f2 > 0)
{cout<<"interval invalid"<<endl;
return 0;
}

for(int i = 0; i<n; i++)
{
x = (x0 + x1)/2;
float f = calculateF(x);
float f0 = calculateF(x0);

if(abs(f)<eps)
{
cout<<"answer is "<<x<<endl;
return 0;
}

else if(f*f0<0)
{
x1 = x;
}

else 
x0 = x;

}
cout<<"answer not found "<<endl;
return 0;
}
