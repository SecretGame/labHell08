#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int line,int number)
{
	if(line > 0 && number > 0)
	{
		for (int n=0;n<line;n++){
			for(int i=0;i<number;i++)
			{
				cout<<"O";
			}
		cout<<"\n";
		}
	}
	else
	{
		cout<<"Invalid input";
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
