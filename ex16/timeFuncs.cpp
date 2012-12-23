#include <iostream>

#include "timeFuncs.hpp"

using namespace std;

//START OF FUNCTION DEFINITION FOR void timeDiff(int, int, int, bool)
void timeDiff(int hours1, int mins1, int secs1, int hours2, int mins2, int secs2, char meridiem1, char meridiem2)
{
  int hours = 0, minutes = 0, seconds = 0;

  //sort out AM / PM
  if ((meridiem1 == 'a') && (meridiem2 == 'p'))
    {
      cout << "meridiem difference" << endl;
      hours2 += 12;
    }
  if ((meridiem1 > meridiem2) || (hours1 > hours2) || (mins1 > mins2) || (secs1 > secs2))
    {
      cerr << "This machine can only travel in the future, not in the past!" << endl;
    }
  
  //sort out seconds overflow
  if (secs1 > secs2)
    {
      seconds = (secs1 + secs2) % 60;
      minutes++;
    }
  else
    {
      seconds = secs2 - secs1;
    }

  //sort out minutes overflow
  if (mins1 > mins2)
    {
      minutes += (mins1 + mins2) % 60;
      hours++;
    }
  else
    {
      minutes += mins2 - mins1;
    }

  hours += hours2 - hours1;
  
  cout << "You will reappear in " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << endl;
}
