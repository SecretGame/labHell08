#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double PrevBalance,interrest,total,payment,NewBalance,rate;
	int n=1;
	cout << "Enter initial loan: ";
	cin>>NewBalance;
	cout << "Enter interest rate per year (%): ";
	cin>>rate;
	cout << "Enter amount you can pay per year: ";
	cin>>payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(NewBalance > 0)
	{
	cout << fixed << setprecision(2);
	cout << setw(13) << left << n;
	PrevBalance = NewBalance;
	cout << setw(13) << left << PrevBalance ;
	interrest = NewBalance*(rate/100);
	cout << setw(13) << left << interrest;
	total = PrevBalance + interrest;
	cout << setw(13) << left << total;
	if(payment > total ){
		payment = total;
	}
	cout << setw(13) << left << payment;
	NewBalance = total - payment;
	cout << setw(13) << left << NewBalance;
	cout << "\n";
	n++;
	}
	return 0;
}
