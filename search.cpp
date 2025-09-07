/*
  CS1B – G1: Linear Search
  Partner A: Ahmer Yasin (ID) — role: driver
  Partner B: Thokozile Hambayi (1275485) — role: function (Advanced Search)
  Date: 2025‑09‑06
  Purpose: Case‑insensitive substring linear search over book titles.
  Build:   g++ -std=c++20 main.cpp CatalogTitleFormatVector.cpp EndOfProgramBanner.cpp OutputClassHeading.cpp 
  OutputStringOfCharacter.cpp search.cpp -o search
*/

#include "linear_search_header.h"


int linearSearch( const vector<string>& list,
					 	const string& key )
{
	bool foundMatch = false; //Checks to see if there is a partial match in the book list
	int index = 0; //Index of what title the program is currently on



	do //Checks the key again against the current title
	{
		if (list.at(index).find(key) != std::string::npos)
			foundMatch = true;
		else
			index++;
	}
	while(!foundMatch && index < list.size());

	if (!foundMatch) //checks to see if there was ever a match found
		index = -1;


	return index;
}

void advancedSearch(const vector<string>& list, const vector<string>& titles, const string& key)
{
	bool foundMatch = false;
	const int TITLE_WIDTH = 85;

	cout << "RESULTS:" << endl;
	for (int i = 0; i < list.size(); i++) //Goes through the function list and prints every applicable member
	{
		if (list.at(i).find(key) != std::string::npos)
		{
			foundMatch = true;
			cout << setw(TITLE_WIDTH) << titles.at(i) << "Index: " << i << endl;
		}
	}
	if (!foundMatch)
	{
		cout << "No results, sorry!" << endl;
	}
	return;
}
