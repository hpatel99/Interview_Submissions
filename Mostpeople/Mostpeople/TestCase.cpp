#include "TestCase.h"

int TestCase::ValidateAll()
{
	int failedResults = 0;

	//test case1
	int Birth[] = { 1978, 1901, 1903, 1907, 1925, 1936, 1957, 1921, 1968,  1989 };		// Data for Testing purpose..
	int Death[] = { 1998, 1934, 1937, 1943, 1952, 1955, 1969, 1946, 1983,  1999 };

	int Result = Solution::FindMostPopulateYear(Birth, Death, 10);

	if (Result != 1925)
		failedResults++;

	//testcase2

	int Birth1[] = { 1901, 1901, 1901,  1901, 1901,1901, 1901, 1901, 1901, 1901 };		// Data for Testing purpose..
	int Death1[] = { 1903, 1987, 1991,  1923, 1907,1955, 1968, 1912, 1942, 1998 };		//(Same birth differnt death) unsorted

	int Result1 = Solution::FindMostPopulateYear(Birth1, Death1, 10);

	if (Result1 != 1901)
		failedResults++;

	//testcase3

	int Birth3[] = { 1945, 1953, 1901,  1911, 1919, 1919, 1936, 1969, 1975, 1989, 1999, 1968, 1901 };		// Data for Testing purpose..
	int Death3[] = { 1999, 1999, 1999,  1999, 1999, 1999, 1999, 1999, 1999, 1999, 1999, 1999, 1999 };		//(Same death differnt birth)unsorted

	int Result3 = Solution::FindMostPopulateYear(Birth3, Death3, 13);

	if (Result3 != 1999)
		failedResults++;

	//testcase4

	int Birth4[] = { 1901, 1911, 1988, 1999 ,1955, 1922, 1966, 1977,1933, 1944};		// Data for Testing purpose..
	int Death4[] = { 1911, 1922, 1999, 2000 ,1966, 1933, 1977, 1988,1944, 1955};		//(Same death differnt birth)unsorted

	int Result4 = Solution::FindMostPopulateYear(Birth3, Death3, 13);

	if (Result4 != 1999)
		failedResults++;

	return failedResults;
}

