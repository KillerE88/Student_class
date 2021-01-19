// Student_class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

string sName;
int sID;
int n;
float sum;

int main()
{
    char sClass[100] = { 0 };

	//read name
	cout << "Enter your classes: ";
	cin.getline(sClass, 100);

	//print name
	cout << "you entered: " << sClass << endl;

	cout << "Please enter in how many classes you entered: ";
	cin >> n;
	int SIZE = n;
	int* sGrade = (int*) malloc(sizeof(int)*SIZE);

	cout << "Great now type in your grade for each class (example: 92): ";
	//User inputs grades
	for (int i = 0; i < SIZE; i++)
	{
		cin >> sGrade[i];
	}
	//Displays grades
	for (int g = 0; g < n; g++)
	{
		cout << sGrade[g] << endl;
	}
	//Calculate GPA
	for (int g = 0; g < n; g++)
	{
		sum = sum + sGrade[g];
	}
	
	cout << "Your GPA is: " << sum/n << endl;


	cout << "Now please enter the Semester you took each class (example: 1 or 2): ";

	int TIME = n;
	int* sSemester = (int*)malloc(sizeof(int) * TIME);

	for (int l = 0; l < TIME; l++)
	{
		cin >> sSemester[l];
	}
	
	for (int g = 0; g < n; g++)
	{
		cout << sSemester[g] << endl;
	}

	cout << "Please enter your name (example: Bobby): ";
    cin >> sName; //collects students name aka sName
    cout << sName << endl; // temp

    cout << "Now please enter your student ID (example: 102038): ";
    cin >> sID; //collects student ID aka sID
    cout << sID << endl; // temp
	

	return 0;
}
  
