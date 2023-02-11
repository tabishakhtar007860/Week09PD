#include <iostream>
using namespace std;
main()
{
  string movie[5]={"Gladiator","StarWars","Terminator","TalkingLives","TombRider"};
  string name;
  cout<<"enter movie name to search:";
  cin >> name;
  for(int x=0;x< 5;x++)
  {
    if(name == movie[x])
    {
       if(x%2 == 0)
       {
        cout << "10% discounted price :"<< 500-500*0.10;
      }
       if(x%2 != 0)
       {
        cout << "5% discounted price :"<< 500-500*0.05;
       }

    }


  }




}