#include <iostream>

template < typename T >
T const &	max( T const & x, T const & y ) {
	return x >= y ? x : y;
}

int	main() {
	int	a;
	int	b;

	a = 5;
	b = 7;
	std::cout << max<int>(a, b) << std::endl;
	return 0;
}

