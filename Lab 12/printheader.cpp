#include "header.h"
string PrintHeader ()
{
ostringstream str;

str << left;
str << "**************************************************\n";
str << "* PROGRAMMED BY : " << "Mohammed Taei & Braden Wurlitzer" << endl;
str << "* " << setw(14) << "STUDENT ID"
<< ": 1019392 & 1080774\n";
str << "* " << setw(14) << "CLASS" << ": CS1B - M/W 6:30-9:50PM\n";
str << "* ";

str << " LAB #3       : Function - GCD\n" << setw(9);
str << "**************************************************\n\n";
str << right;
return str.str();
}
