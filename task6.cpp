#include <iostream>
using namespace std;
int evenodd(int num, int value);
main()
{
  int size1, size2;
  cout << "enter size of array to take:";
  cin >> size1;

  int number[size1];
  int ans[size1];

  for (int x = 0; x < size1; x++)
  {
    cout << "enter array " << x + 1 << "elements:";
    cin >> number[x];
  }
  cout << "enter number of times even odd transformation takes place:";
  cin >> size2;

  for (int x = 0; x < size1; x++)
  {
    ans[x] = evenodd(number[x], size2);
  }

  for (int x = 0; x < size1; x++)
  {
    cout << ans[x] << endl;
  }
}
int evenodd(int num, int value)
{
  int ans;
  if (num % 2 == 0)
  {
    ans = num - 2 * value;
  }
  else
  {
    ans = num + 2 * value;
  }
  return ans;
}