#include <iostream>
#include <cstdlib>

int main()
{
	setlocale(0, "");
	int m1[5]{ 4,1,0,5,-2 }, m2[5]{ 0,-3,-1,2,6 }, m3[10];
	int f = -1;
	for (int i = 0; i < 5; i++)
	{
		if (m1[i] > 0)
		{
			f++;
			m3[f] = m1[i];
		}
		if (m2[i] > 0)
		{
			f++;
			m3[f] = m2[i];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (m1[i] == 0)
		{
			f++;
			m3[f] = m1[i];
		}
		if (m2[i] == 0)
		{
			f++;
			m3[f] = m2[i];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (m1[i] < 0)
		{
			f++;
			m3[f] = m1[i];
		}
		if (m2[i] < 0)
		{
			f++;
			m3[f] = m2[i];
		}
	}

	for (int i = 0; i < 10; i++)
	{
		std::cout << m3[i] << " ";
	}

	system("pause");
	return 0;
}