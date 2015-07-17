#include<iostream.h>																																																																//codedbyvasunegi
#include<conio.h>																																																		
#include<math.h>
#include<stdlib.h>
int a[10];			
int degree;
float fx(float x)
{
float sum=0.0;
int n=degree;
for(int j=0;j<=degree;j++)
	{sum=sum+pow(x,n)*a[j];
	n--;}
return sum;
}

float round( float g)												//you can set the precision of the root ,
{return floor(g*pow(10.0f,5)+0.5f)/pow(10.0f,5);}					//just change the value from 5 to any desired value	
void main()
{
clrscr();
float x1,x2,d,tempo;
cout<<"enter degree of the equation";
cin>>degree;
cout<<"enter the coefficients of the equation ";
for(int i=0;i<=degree;i++)
cin>>a[i];
cout<<"\n";
cout<<"enter the guesses \n";
cin>>x1>>x2;		//fx(x1) and fx(x2) are negative and positive respectively

if((fx(x1)*fx(x2))>0)			//when guesses are incorrect
exit(0);

while(round(x1)!=round(x2))
	{d=(x1+x2)/2;
	tempo=fx(d);
	if(tempo<0)
	x1=d;
	else
	x2=d;}
cout<<"approximated root is:"<<endl<<x1;
getch();
}																																																																																																																						//codedbyvasunegi


