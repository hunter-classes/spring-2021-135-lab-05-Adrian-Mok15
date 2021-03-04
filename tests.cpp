#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here
TEST_CASE("isDivisibleBy"){
	CHECK(isDivisibleBy(0,1) == true);
	CHECK(isDivisibleBy(5,0) == false);
	CHECK(isDivisibleBy(7,5) == false);
	CHECK(isDivisibleBy(500000,2) == true);
}

TEST_CASE("isPrime"){
	CHECK(isPrime(6) == false);
	CHECK(isPrime(-7) == false);
	CHECK(isPrime(1) == false);
	CHECK(isPrime(31) == true);
}

TEST_CASE("nextPrime"){
	CHECK(nextPrime(17) == 19);
	CHECK(nextPrime(1) == 2);
	CHECK(nextPrime(0) == 2);
	CHECK(nextPrime(-1) == 2);

}

TEST_CASE("countPrimes"){
	CHECK(countPrimes(1,100) == 25);
	CHECK(countPrimes(5,8) == 2);
	CHECK(countPrimes(24,26) == 0);
	CHECK(countPrimes(-5,0) == 0);
}

TEST_CASE("isTwinPrime"){
	CHECK(isTwinPrime(-2) == false);
	CHECK(isTwinPrime(7) == true);
	CHECK(isTwinPrime(11) == true);
	CHECK(isTwinPrime(9) == false);

}

TEST_CASE("nextTwinPrime"){
	CHECK(nextTwinPrime(-2) == 3);
	CHECK(nextTwinPrime(7) == 11);
	CHECK(nextTwinPrime(13) == 17);
	CHECK(nextTwinPrime(4) == 5);

}

TEST_CASE("largestTwinPrime"){
	CHECK(largestTwinPrime(5,18) == 17);
	CHECK(largestTwinPrime(-5, 18) == 17);
	CHECK(largestTwinPrime(14, 16) == -1);
	CHECK(largestTwinPrime(1, 31) == 31);

}


