/*
  CS1B – G1: Linear Search
  Partner A: Ahmer Yasin — role: driver
  Partner B: Thokozile Hambayi — role: function (Advanced Search)
  Date: 2025‑09‑06
  Purpose: Case‑insensitive substring linear search over book titles.
  Build:   g++ -std=c++20 main.cpp CatalogTitleFormatVector.cpp EndOfProgramBanner.cpp OutputClassHeading.cpp 
  OutputStringOfCharacter.cpp search.cpp -o search
*/

#include "linear_search_header.h"

void CatalogTitleFormatVector(vector<string>& list)
{
	for(int index = 0; index < int(list.size()); index += 1)
	{
		if ( (list[index]).substr(0, (list[index]).find(' ')) == "The" )
		{
			(list[index]).erase(0, 4);

			(list[index]).insert(((list[index]).size()), ", The");
		}

		if ( (list[index]).substr(0, (list[index]).find(' ')) == "A" )
		{
			(list[index]).erase(0, 1);

			(list[index]).insert(((list[index]).size()), ", A");
		}

		if ( (list[index]).substr(0, (list[index]).find(' ')) == "An" )
		{
			(list[index]).erase(0, 3);

			(list[index]).insert(((list[index]).size()), ", An");
		}
	}
}
