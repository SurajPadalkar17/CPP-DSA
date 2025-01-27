#include <iostream>
using namespace std;

bool checkpali(string str, int i, int j)
{

    if (i > j)
    {
        return true;
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        return checkpali(str, i+1, j-1);
    }
}
int main()
{
    string name = "abedcba";
    bool ispallindrome = checkpali(name, 0, name.length() - 1);
    if (ispallindrome)
    {
        cout << "String is pallindrome";
    }
    else
    {
        cout << "string is not paindrome";
    }

    return 0;
}