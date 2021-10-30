#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<string>
using namespace std;

void GradeOneTwo(int x)
{	
	int yourresult;
	string result;
 	srand((unsigned)time(NULL));
	char signal[4]={'+','-','*','/'};
	
	
	for(int i=0;i<x;i++)
	{
		int a;
		a=rand()%10+2;
		for(int j=0;j<a;j++)
		{
		double t=0;
		char temps[3];
			t=double(rand()%100)/3.0;
			cout<<t<<' ';
			itoa(t,temps,10);
			result[i]+=temps;
			if(j!=a-1)
			{
			int tmp = rand()%4;
			cout<<signal[tmp]<<' ';
			result+=signal[tmp];
			}
		}
		cout<<endl;
		cin>>n;
		if(S(result)!=yourresult)
		{
			cout<<"´íÎó"<<endl; 
		}

	}
}

