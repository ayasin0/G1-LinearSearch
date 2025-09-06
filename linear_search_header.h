#ifndef LINEAR_SEARCH_HEADER_H_
#define LINEAR_SEARCH_HEADER_H_

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;

/******************************************************************************
* FUNCTION OutputClassHeading
* ------------------------------------------------------------------------------
* Receives the size to format titles programmer's name, the class for the
* assignment, the section day and time for the class, assignment type
* (assignment or lab) assignment name and assignment number.
*
* ==> returns nothing - This will output the class heading for the assignment.
*******************************************************************************/
string OutputClassHeading
 (const short  HEADING_COL    = 76,							                            // IN - asterisk string length
  const int    TITLE_COL      = 14,								                         // IN - setw for header titles
  const string PROGRAMMER     = "Ahmer Yasin & Seth Just & Thokozile Hambayi",                                    // IN - name of programmer
  const string CLASS          = "CS1B",                                           // IN - class title
  const string SECTION        = "TTh 1:30pm",              	                      // IN - day and time of class
  const string MODULE         = "1" ,                                             // IN - module number
  const string PURPOSE        = "The program performs a linear search over a list"
                                " of book titles",                                // IN - lab description
  const string DUE_DATE       = "09/04/2025",                                     // IN - due date
  const string AS_TYPE        = "GROUP PROJECT",                   	     	       // IN - assignment type
  const string AS_NAME        = "Linear Search",                                  // IN - assignment name
  const short  AS_NUM         = 1,                        		                   // IN - assignment number
  const char   BORDER_CHAR    = '*',                   			                   // IN - border character
  const short  BORDER_SPACING = 1,                 			                      // IN - border formatting
  const short  LINE_LENGTH    = 76);                  			                   // IN - border length


/******************************************************************************
* FUNCTION OutputStringOfCharacter
* ------------------------------------------------------------------------------
* Receives a character for setfill() and length for the setw().
*
* ==> returns nothing - This will output the string of a character
******************************************************************************/
string OutputStringOfCharacter
(const short CHAR_SIZE,        // IN - character string size
 const char  CHARACTER = '*'); // IN - character for string


string EndOfProgramBanner
(const short  HEADING_COL    = 76,   // IN - asterisk string length
 const char   BORDER_CHAR    = '*',  // IN - border character
 const short  BORDER_SPACING = 1,    // IN - border formatting
 const short  LINE_LENGTH    = 76);  // IN - border length

void CatalogTitleFormatVector
(vector<string>& list);

int linearSearch(const vector<string>& list,const string& key);


#endif /* LINEAR_SEARCH_HEADER_H_ */

