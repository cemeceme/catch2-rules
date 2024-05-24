
#include <iostream>

#include <catch2/catch_test_macros.hpp>

using namespace std;

// A valid and working function that just adds two numbers together.
int workingAdd(int value1, int value2)
{
	return(value1 + value2);
}

// A broken and wrong function that claims to add two numbers togehter, but substracts them instead.
int notWorkingAdd(int value1, int value2)
{
	return(value1 - value2);
}

// Catch 2 test cases to make sure it runs correctly.
TEST_CASE("Passing test")
{
	REQUIRE(workingAdd(1,1) == 2);
	REQUIRE(workingAdd(1,2) == 3);
	REQUIRE(workingAdd(2,1) == 3);
}

TEST_CASE("Failing test")
{
	REQUIRE(notWorkingAdd(1,1) == 2);
	REQUIRE(notWorkingAdd(1,2) == 3);
	REQUIRE(notWorkingAdd(2,1) == 3);
}