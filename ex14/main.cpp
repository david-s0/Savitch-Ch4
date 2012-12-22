#include <iostream>
#include "weightFuncs.hpp"

using namespace std;

int main()
{
  double weight, intensity, minutes, calories, calories_needed, servings;
  cout << "How much do you weight (in pounds)?" << endl;
  cin >> weight;
  cout << "How intensely do you exercise on average?" << endl;
  cin >> intensity;
  cout << "For how many minutes?" << endl;
  cin >> minutes;
  cout << "How many calories do you consume per meal?" << endl;
  cin >> calories;

  calories_needed = basal_metabolic_rate(weight) + physical_activity(weight, intensity, minutes);
  servings = calories_needed / digestion(calories);

  cout << "To maintain your current weight you should consume about " << servings << " of that meal every day." << endl;
  return 0;
}
