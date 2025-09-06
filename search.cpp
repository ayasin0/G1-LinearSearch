#include "linear_search_header.h"

/******************************************************************************
* FUNCTION EndOfProgramBanner
*******************************************************************************/

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
	while(!foundMatch);

	if (!foundMatch) //checks to see if there was ever a match found
		index = -1;

	return index;
}

