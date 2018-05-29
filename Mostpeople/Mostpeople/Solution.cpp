#include "Solution.h"
#include <algorithm>


// Return value -(int)It returns the year with most number of people alive.
// 
// Assumptions: -Number of birth and end year provided should be same.
//				-Data is realistic. that is birth year is always greater than end year.
// TimeComplexity -The solution is O(n log n). Maximum time is used by sorting if we are certain that 
//					data is presorted . better runtime can be achieved by eliminating sorting.

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



			conductorOfBirth++;		//increment the conductor

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
