#include <iostream>
using namespace std;
main()
{
    string word1;
    string word2;
    int count=0;
    string test1;
    string test2;
    
    cout<<"enter first string:";
    cin >> word1;
    int size1=word1.length();

    cout <<"enter second string:";
    cin >> word2;
    int size2 = word2.length();

    // int i=0;
     //while( test1[i] != '\0' && test2[i] != '\0' )
    {
     test1=word1;
     test2=word2;

    for(int x=0;x<size1;x++)
    {
        for(int y=0;y<size2;y++)
        {
    if(test1[x] == test2[y])
    {
        count++;
        break;
    }
        }
    }
    //i++;
}
    cout << count;
}