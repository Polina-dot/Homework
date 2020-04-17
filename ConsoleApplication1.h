#pragma once
#include <clocale>
#include <iostream>

int main()
{
	setlocale (LC_ALL,"Russian" );
	double y_i;
	double y_i_1 = 0;
	double x;
	std::cout << "¬ведите число";
    std::cin >> x;
	y_i = x;
	while (1)
	{
		y_i_1 = 0.5 * (y_i + 3 * x / (2 * pow(y_i, 2) + x / y_i));
		if (abs(y_i_1 - y_i) <= 10e-5)
		{
			break;
		}
		else
		{
			y_i = y_i_1;
		}
	}
	std::cout << " убический корень равен" << y_i_1 << std::endl;
	system("pause");
	return 0;

}
