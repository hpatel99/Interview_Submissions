#include "Solution.h"
#include <algorithm>

int Solution::FindMostPopulateYear(int birth[], int end[], int Size)
{
	//Sorting both list in ascending orders 
	std::sort(birth, birth + Size);
	std::sort(end, end + Size);

	//variables for the methods
	int currentPopulation = 0,
		maxPopulation = 0,
		resultYear = birth[0],
		conductorOfBirth = 0,
		conductorOfEnd = 0;

	//considering first birth 
	++conductorOfBirth;
	++currentPopulation;

	while (conductorOfBirth<Size && conductorOfEnd < Size)		// Loop till we run out of the array....
	{
		if (birth[conductorOfBirth] <= end[conductorOfEnd])
		{	//next birth is before the next death so increase the population and increment index
			currentPopulation++;

			if (currentPopulation > maxPopulation)	// check if we have hit the max population 
			{
				maxPopulation = currentPopulation;
				resultYear = birth[conductorOfBirth];	//squirell the index to point correct index.
			}



			conductorOfBirth++;

		}
		else
		{
			// Someone died before the next birth
			--currentPopulation;	// reduce the population
			conductorOfEnd++;		// jump to next death year
		}
	}

	return resultYear;
}
