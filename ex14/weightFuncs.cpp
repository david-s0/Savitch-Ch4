#include <cmath>

#include "weightFuncs.hpp"

//START OF FUNCTION DEFINITION FOR double basic_metabolic_rate(double)
double basal_metabolic_rate(double weight)
{
  return 70 * pow((weight / 2.2), 0.756);
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR double physical_activity(double, double, double)
double physical_activity(double weight, double intensity, double minutes)
{
  return 0.0385 * intensity * weight * minutes;
}
//END OF FUNCTION DEFINITION

//START OF FUNCTION DEFINITION FOR double digestion(double)
double digestion(double calories)
{
  return calories * 0.1;
}
//END OF FUNCTION DEFINITION
