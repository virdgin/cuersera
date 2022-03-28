#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string rul;
    int qualitty = 0;
    cin >> rul >> qualitty;
    string operation;
    string temp;
    stringstream result;
    result << rul;
    int bracket = 0;
    for (int i = 0; i < qualitty; i++)
    {
        string next_operation = operation;
        cin >> operation >> temp;
        if ((operation == "*" || operation == "/") && (next_operation == "-" || next_operation == "+"))
        {
            result << ")";
            bracket++;
        }
        result << " " << operation << " " << temp;
    }
    for (int i = bracket; i > 0; i--)
        cout << "(";
    cout << result.str();
    return 0;
}