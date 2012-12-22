#ifndef WEIGHT_FUNCS_H
#define WEIGHT_FUNCS_H

//function that takes the weight of the person and outputs the calories required for them to exist
double basal_metabolic_rate(double weight);

//function that takes average intensity of exercise, the quantity of exercise and the weight of the person to output how many calories are burnt during that exercise
double physical_activity(double weight, double intensity, double minutes);

//function that takes the calories ingested and outputs the calories necessary to digesting them
double digestion(double calories);

#endif
