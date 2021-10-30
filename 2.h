#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<string>
#include"compute.h"
using namespace std;

void GradeOneTwo(int x)
{	
	int n;
	int yourresult;
	string result;
 	srand((unsigned)time(NULL));
	char signal[4]={'+','-','*','/'};
	
	
	for(int i=0;i<x;i++)
	{
		int a;
		a=rand()%4+2;
		for(int j=0;j<a;j++)
		{
		double t=0;
		char temps[3];
			t=double(rand()%100);
			cout<<t<<' ';
			itoa(t,temps,10);
			result+=temps;
			if(j!=a-1)
			{
			int tmp = rand()%4;
			cout<<signal[tmp]<<' ';
			result+=signal[tmp];
			}
		}
		cout<<endl;
		cin>>n;
		int length =result.length();
		char tresult[length];

		strcpy(tresult,result.c_str());
		
		cout<<compute(tresult)<<endl;

		if(compute(tresult)!=n)
		{
			cout<<"´íÎó"<<endl; 
		}
		else {cout<<"¶Ô" <<endl;}

	}
}

