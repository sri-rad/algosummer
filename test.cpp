#include<iostream>

using namespace std;

int main()
	{
		int** table=new int*[5];
		for(int i=0;i<5;i++)
			table[i]=new int[5];
		for(int i=0;i<5;i++)
			for(int j=0;j<5;j++)
				table[i][j]=i*j;
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++)
				cout<<table[i][j]<<" ";
			cout<<"\n";
			}
		return 0;
	}