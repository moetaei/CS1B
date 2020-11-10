#include "header.h"
int main()
{

int n1; //IN. CALC - the first number the user enters
int n2; //IN. CALC - the second number the user enters
int index; //CALC & OUT - the value the determines for loop runs
string str; //OUT - outputs using the ostringstream variable
ofstream OFile; //OUT - out[uts to the output file

const int PROMPT_COL = 26;
const int TOTAL_RUNS = 4;

//open output file
OFile.open ("OFile.txt");

//prints output header to console
cout << PrintHeader();

//prints output print header to output file
OFile << PrintHeader();



for (index = 0; index < TOTAL_RUNS; index++)
{
cout << left;
cout << setw(PROMPT_COL) << "Enter first integer:";
cin >> n1;
cout << setw(PROMPT_COL) << "Enter the second integer: ";
cin >> n2;
cout << endl;

OFile << "The GCD for " << n1 << " & " << n2 << " = " << gcd(n1, n2)
<< endl;
cout << "The GCD for " << n1 << " & " << n2 << " = " << gcd(n1, n2)
<< endl;

cout << right;
}
cout << "Thanks for using my GCD calculator!" << endl;

OFile.close(); //close output file

return 0;
}
