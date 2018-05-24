#include <algorithm>

static int  FindMostPopulateYear(int birth[],int end[],int Size)
{
	//Sorting both list in ascending orders 
	std::sort(birth, birth +Size);
	std::sort(end, end + Size);
	
	//variables for the methods
	int currentPopulation = 0,
		maxPopulation = 0,
		resultYear = birth[0],
		conductorOfBirth = 0,
		conductorOfEnd =0;

	//considering first birth 
	++conductorOfBirth;
	++currentPopulation;

	while (conductorOfBirth<Size && conductorOfEnd < Size)		// Loop till we run out of the array....
	{
		if(birth[conductorOfBirth] <= end[conductorOfEnd])
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
			--currentPopulation;
			conductorOfEnd++;
		}
	}

	return resultYear;
}
int main()
{
	int Birth[] = { 1901, 1903, 1907, 1921, 1925, 1936, 1957, 1968, 1978, 1989 };		// Data for Testing purpose..
	int Death[] = { 1934, 1937, 1943, 1946, 1952, 1955, 1969, 1983, 1998, 1999 };

	int apple = FindMostPopulateYear(Birth, Death, 10);
    return 0;
}
