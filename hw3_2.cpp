#include <iostream>
#include <vector>

int main(){
	std::vector<unsigned long> fib = {0, 1};
	int n = -1;
	
    // fetch input
	std::printf("How many values of the Fibonacci sequence should be returned?\n");
	std::cin >> n;
	while(n < 0){
		std::printf("Invalid value. Please input a positive integer.\n");
		std::cin >> n;
	}

    if(n > 93){
        std::printf("WARNING: Values greater than F_93 overflow datatype.\n");
    }

    // add new Fibonacci values to vector
	if(n > 2){
		for(int i=0; i < n-1; ++i){
			fib.push_back(fib[i] + fib[i+1]);
        }
    }
    
    // print out values 
    for(int i=0; i < n; ++i){
        std::printf("%lu\n", fib[i]);
    }
    
	return 0;
}
