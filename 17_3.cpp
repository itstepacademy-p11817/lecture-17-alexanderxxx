#include <iostream>
#include <cstdlib>

int main()
{
	setlocale(0, "");
	int m = 0, f = -1;
	int m1[10], m2[10];
	std::cout << "m= ";
	std::cin >> m;
	std::cout << "massive: ";
	for (int i = 0; i < 10; i++)
	{
		std::cin >> m1[i];
	}

	for (int i = 0; i < 10; i++)
	{
		if (m1[i] % m == 0)
		{
			f++;
			m2[f] = m1[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (m2[i] > 0)
		{
			std::cout << '\n' << m2[i] << " ";
		}
	}
	system("pause");
	return 0;
}