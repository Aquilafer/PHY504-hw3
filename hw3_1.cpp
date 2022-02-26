#include <iostream>
#include <vector>
#include <limits>

int main(){
	bool close_case1 = (std::numeric_limits<double>::epsilon() + 1.0 == 1.0);

	bool close_case2 = (std::numeric_limits<double>::epsilon()*2 + 1.0 == 1.0);

	bool close_case3 = (std::numeric_limits<double>::epsilon()/2 + 1.0 == 1.0);

	std::printf("1.0 + epsilon == 1.0: %s\n", close_case1 ? "true" : "false");
	std::printf("1.0 + (2 * epsilon) == 1.0: %s\n", close_case2 ? "true" : "false");
	std::printf("1.0 + (1/2 * epsilon) == 1.0: %s\n", close_case3 ? "true" : "false");

	//std::cout << close_case1 << "\n";
	//std::cout << close_case2 << "\n";
	//std::cout << close_case3 << "\n";

	return 0;
}
