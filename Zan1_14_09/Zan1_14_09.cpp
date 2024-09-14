// Zan1_14_09.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
	setlocale(0, "rus");
	/*double a; double b; double c;
	std::cout << "Введите первое число! \n";
	std::cin >> a;
	std::cout << "Введите второе число! \n";
	std::cin >> b;
	c = (a - b);
	std::cout << "Разница числа равна:" << c;*/

	int a, b, c;
	std::cout << "Введите начальное число! \n";
	std::cin >> a;
	std::cout << "Введите шаг! \n";
	std::cin >> b;
	std::cout << "Введите количество шагов! \n";
	std::cin >> c;
	for (int i = 0; i < c; i++)
	{
		int d = a + i * b;
		std::cout << d << "";
	}
}
