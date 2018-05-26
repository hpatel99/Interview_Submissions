#include "TestCase.h"

int TestCase::ValidateAll()
{
	int failedTest = 0;
	failedTest += TestCase::CheckEdgeCondition();
	failedTest += TestCase::CheckIrregulaData();
	failedTest += TestCase::CheckRegularData();

	return failedTest;
}

int TestCase::CheckEdgeCondition()
{
	int failedResults = 0;
	return failedResults;
}

int TestCase::CheckIrregulaData()
{
	int failedResults = 0;
	return failedResults;
}

int TestCase::CheckRegularData()
{
	int failedResults=0;
	int Birth[] = { 1978, 1901, 1903, 1907, 1925, 1936, 1957, 1921, 1968,  1989 };		// Data for Testing purpose..
	int Death[] = { 1998, 1934, 1937, 1943, 1952, 1955, 1969, 1946, 1983,  1999 };

	int apple = Solution::FindMostPopulateYear(Birth, Death, 10);
	
	
	
	
	
	
	
	return failedResults;
}
