#include <iostream>
#include <cstdlib>

int main()
{
	setlocale(0, "");
	int m1[10];
	for (int i = 0;i < 10;i++)
	{
		std::cin >> m1[i];
	}
	for (int f = 0; f < 10;f++)
	{
		int p = 0;
		for (int i = 0; i < 9; ++i)
		{
			if (m1[i] >(m1[i + 1] - 1))
			{
				int temp = m1[i];
				m1[i] = m1[i + 1];
				m1[i + 1] = temp;
				p++;
			}
		}
		if (p == 0)
		{
			break;
		}
	}
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << m1[i] << " ";
	}
	system("pause");
	return 0;
}