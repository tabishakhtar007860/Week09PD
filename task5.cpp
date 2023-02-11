#include <iostream>
using namespace std;
main()
{
    int count = 0;
    string element[4];
    for (int x = 0; x < 4; x++)
    {
        cout << "enter array elements:";
        cin >> element[x];
    }

    
    for (int x = 0; x < 3; x++)
    {
        if (element[x+1] == element[x])
        {
            count++;
            
        }
    }
    if (count == 3)
    {
        cout << "True:";
    }
    else
    {
        cout << "false";
    }
}