﻿// 13.5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

// 17/20

using namespace std;


int main()
{
	size_t pos;
	string line;
	fstream baby;
	cout << "Enter the year ";
	string year;
	cin >> year;

	baby.open("Babynameranking" + year + ".txt");

	if (baby.fail()) {
		cout << "Cant open file" << endl;
		return 0;

	}

	cout << "Enter the gender: ";
	char gender;
	cin >> gender;
	cout << endl;

	cout << "Enter the name ";

	string name;

	cin >> name;
	cout << endl;

	int rank;
	int bnum;
	int gnum;
	string bname, gname;

	while (!baby.eof())
	{
		//PT: this would work, except your text files have commas in the numbers.
		//    1	Jacob	25,830	Emily	23,937
		//Remove the commas
		//    1	Jacob	25830	Emily	23937
		baby >> rank >> bname >> bnum >> gname >> gnum;
		if (name == bname && gender == 'M')

			cout << name << " is ranked " << rank << "in year " << year << endl;

		else if (name == gname && gender == 'F')
			cout << name << " is ranked " << rank << "in year " << year << endl;

		//PT -- don't close the file until you've gotten out of the loop.
		baby.close();

		/* Could not get this program to function properly. I also tried the following codes
		below and could not get those to work either.
		#include "stdafx.h"
		#include <iostream>
		#include <fstream>
		#include <string>


		using namespace std;


		int main()
		{
		size_t pos;
		string line;
		fstream baby;
		cout << "Enter the year ";
		string year;
		cin >> year;

		baby.open("Babynameranking" + year + ".txt");

		if (baby.fail()) {
		cout << "Cant open file" << endl;
		return 0;

		}

		cout << "Enter the gender: ";
		string gender;
		cin >> gender;
		cout << endl;

		cout << "Enter the name ";

		string name;

		cin >> name;
		cout << endl;

		int id;

		while (getline(baby,line))
		{
		if (line.find(name) != string::npos)
		baby >> id;
		}

		cout << id;


		return 0;
		}




		NEXT TRY:


		// 13.5.cpp : Defines the entry point for the console application.
		//

		#include "stdafx.h"
		#include <iostream>
		#include <fstream>
		#include <string>


		using namespace std;


		int main()
		{
		size_t pos;
		string line;
		fstream baby;
		cout << "Enter the year ";
		string year;
		cin >> year;

		baby.open("Babynameranking" + year + ".txt");

		if (baby.fail()) {
		cout << "Cant open file" << endl;
		return 0;

		}

		cout << "Enter the gender: ";
		string gender;
		cin >> gender;
		cout << endl;

		cout << "Enter the name ";

		string name;

		cin >> name;
		cout << endl;

		string id = "";

		while (getline(baby,line))
		{
		if (line.find(name) != string::npos)
		cout << line << endl;
		baby.seekp(-5, ios::cur);
		baby >> id;


		}

		cout << id;


		return 0;
		}




		Current: (Tried to count lines with counter variable, but it comes back with 1000 every time).


		// 13.5.cpp : Defines the entry point for the console application.
		//

		#include "stdafx.h"
		#include <iostream>
		#include <fstream>
		#include <string>


		using namespace std;


		int main()
		{
		size_t pos;
		string line;
		fstream baby;
		cout << "Enter the year ";
		string year;
		cin >> year;

		baby.open("Babynameranking" + year + ".txt");

		if (baby.fail()) {
		cout << "Cant open file" << endl;
		return 0;

		}

		cout << "Enter the gender: ";
		string gender;
		cin >> gender;
		cout << endl;

		cout << "Enter the name ";

		string name;

		cin >> name;
		cout << endl;

		int count = 0;

		while (getline(baby,line))
		{
		if (line.find(name) != string::npos)
		cout << line << endl;

		count++;




		}

		cout << count;


		return 0;
		}

		*/
	}

}
