#include <iostream>

int	a = 1;
int f(void)
{
	return 1;
}

namespace	A
{
	int	a = 2;
	int f(void)
	{
		return (2);
	}
}

namespace	B
{
	int	a = 3;
	int f(void)
	{
		return (3);
	}
}

namespace	C = A;

namespace	T
{
	namespace	A
	{
		int	a = 2;
		int f(void)
		{
			return (2);
		}
	}

	namespace	B
	{
		int	a = 3;
		int f(void)
		{
			return (3);
		}
	}
}

namespace	TA = T::A;
namespace	TB = T::B;

using std::cout;
using std::endl;
egwqrunxgy4Q
int	main()
{
	std::cout << a << std::endl;
	std::cout << f() << std::endl;
	std::cout << A::a << std::endl;
	std::cout << A::f() << std::endl;
	std::cout << B::a << std::endl;
	std::cout << B::f() << std::endl;
	std::cout << C::a << std::endl;
	std::cout << C::f() << std::endl;
	std::cout << TB::a << std::endl;
	std::cout << TB::f() << std::endl;
	std::cout << TA::a << std::endl;
	std::cout << TA::f() << std::endl;
	cout << "hey" << endl; 
	return (0);
}
