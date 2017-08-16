#include <iostream>
#include <cstdlib>

int main()
{
	setlocale(0, "");
	int m[999];
	int count = 0;
	for (int i = 1; i <= 999; i++)
	{
		m[i] = i;
	}
	for (int i = 0; i < 1000; i++)
	{
		if (m[i] < 10)
		{
			if (m[i] % 3 == 0)
			{
				count++;
			}
		}
		else if (m[i] < 100)
		{
			int i1 = m[i] / 10 % 10;
			int i2 = m[i] / 1 % 10;
			if ((i1 + i2) % 3 == 0);
			{
				count++;
			}
		}
		else if (m[i] < 1000)
		{
			int i1 = m[i] / 100 % 10;
			int i2 = m[i] / 10 % 10;
			int i3 = m[i] / 1 % 10;
			if ((i1 + i2 + i3) % 3 == 0)
			{
				count++;
			}
		}
	}
	std::cout << count;
	system("pause");
	return 0;
}