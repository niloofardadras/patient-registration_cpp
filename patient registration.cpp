//============================================================================
// Name        : bme506_l3.cpp
// Author      : niloofar hosseinidadras
// Version     :
// Copyright   : Your copyright notice
// Description : Patient registration, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

	int main() {
	double patient[20], *ptr= &patient[0];//defining array patient of size 20 and pointer that refers to address 0 of teh array
	int i;

	for (i=0;i<20;i++) //for loop to take in data and assign it to an address of patient
	{
	cout <<"Enter Patient: ";
	cin >> *ptr;
	ptr++;
	}
	/*for (i=0;i<20;i++)
	{
	cout<<patient[i]<<"\n";
	}*/
	for (i=0;i<20;++i)//function to calculate the new patient array by a formula 
	{
	patient[i]=patient[i]+patient[i]/(i+1);
	cout<<"new patient is: "<<patient[i]<<"\n";
	}
	return 0;
	}
