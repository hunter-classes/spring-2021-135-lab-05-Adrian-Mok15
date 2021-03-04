#include <iostream>


#include "funcs.h"

void func(bool h){
	if(h){
		std::cout << "True\n\n";
	}
	else{
		std::cout << "False\n\n";
	}
}


int main()
{

	std::cout << "Task A\n\n"; 
	func(isDivisibleBy(100,0)); 
	func(isDivisibleBy(0,1)); 
	func(isDivisibleBy(5,0)); 
	func(isDivisibleBy(7,5)); 
	std::cout << "Task B\n\n";
	func(isPrime(6));
	func(isPrime(-7));
	func(isPrime(1));
	func(isPrime(31));
  	std::cout << "Task C\n" << nextPrime(14) << "\n" <<nextPrime(17) << nextPrime(0) << "\n" << nextPrime(-1) << "\n\n";
  	std::cout << "Task D\n" << countPrimes(1, 100) << "\n" << countPrimes(5,8) << "\n" << countPrimes(24,26) << "\n"<< countPrimes(-5,0) << "\n\n";
  	std::cout << "Task E\n\n";
  	func(isTwinPrime(5));
  	func(isTwinPrime(37));
  	func(isTwinPrime(-2));
  	func(isTwinPrime(11));
  	std::cout << "Task F\n" << nextTwinPrime(-2) << "\n" << nextTwinPrime(25) << "\n" << nextTwinPrime(13) << "\n" << nextTwinPrime(4) << "\n\n";
  	std::cout << "Task G\n" << largestTwinPrime(5,18) << "\n" << largestTwinPrime(14,16) << "\n" << largestTwinPrime(-5, 18) << "\n" << largestTwinPrime(1, 31) << "\n\n";
	
}
