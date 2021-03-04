#include <iostream>
#include <climits>
#include "funcs.h"



bool isDivisibleBy(int n, int d){//test small big and zero
	if(d == 0){
		return false;
	}
	if(n%d == 0){
		return true;
	}
	else{
		return false;
	}
	return false;
}

bool isPrime(int a){//test prime and not prime
	if(a <= 1){
		return false;
	}
	for(int i = 2; i < a; i++){
		if(a%i == 0){
			return false;
		}
	}
	return true;
}

int nextPrime(int b){//test a prime and big number
	for(int i = b+1; i < INT_MAX; i++){
		if(isPrime(i)){

			return i;
		}
	}
	return 0;
}

int countPrimes(int a, int b){
	int c = 0;
	for(int i = a; i<b+1;i++){
		if(isPrime(i)){
			c++;
		}
	}
	return c;
}

bool isTwinPrime(int n){
	if(isPrime(n)){
		if(isPrime(n+2)||isPrime(n-2))
			return true;
	}
	return false;
}

int nextTwinPrime(int n){
	for(int i = n+1; i < INT_MAX; i++){
		if(isTwinPrime(i)){

			return i;
		}
	}
	return 0;
}

int largestTwinPrime(int a, int b){
	for(int i = b; i>=a; i--){
		if(isTwinPrime(i)){
			return i;
		}

	}
	return -1;
}

