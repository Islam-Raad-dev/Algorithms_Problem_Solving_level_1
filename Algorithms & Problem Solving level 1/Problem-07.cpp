#include <iostream>   
#include <string>    

using namespace std;


int ReadNumber()
{
    int Num; 


    cout << "Please enter a Number: " << endl;

    cin >> Num;  

    return Num; 
}


float CalculateHalfNumber(int Num)
{
    return (float) Num / 2; 
}


void PrintResults(int Num)
{
   
    string Result = "Half Of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));
    cout << endl << Result << endl;
}


int main()
{
 
    PrintResults(ReadNumber());

    return 0;
}
