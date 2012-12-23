#include <iostream>
#include "timeFuncs.hpp"

using namespace std;

int main()
{
  int hours1, mins1, secs1, hours2, mins2, secs2;
  char meridiem, meridiem2;

  //get details from the user
  cout << "At what hour are you leaving?" << endl;
  cin >> hours1;
  cout << "At what minute are you leaving?" << endl;
  cin >> mins1;
  cout << "At what second are you leaving?" << endl;
  cin >> secs1;
  cout << "Is it AM or PM? (a or p)" << endl;
  cin >> meridiem;
  if ((meridiem != 'a') && (meridiem != 'p'))
    {
      cerr << "Something went wrong with your am/pm departure input!" << endl;
    }
  cout << "At what hour are you arriving?" << endl;
  cin >> hours2;
  cout << "At what minute are you arriving?" << endl;
  cin >> mins2;
  cout << "At what second are you arriving?" << endl;
  cin >> secs2;
  cout << "Is it AM or PM? (a or p)" << endl;
  cin >> meridiem2;
  if ((meridiem2 != 'a') && (meridiem2 != 'p'))
    {
      cerr << "Something went wrong with your am/pm arrival input!" << endl;
    }

  timeDiff(hours1, mins1, secs1, hours2, mins2, secs2, meridiem, meridiem2);

  return 0;
}
