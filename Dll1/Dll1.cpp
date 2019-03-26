// Dll1.cpp : Определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"

#include <iostream>

extern "C" __declspec (dllexport) void foo()

{

	std::cout << "Our DLL is loading from project...Great!";

}

extern "C" __declspec (dllexport) int foo2()

{

	int a;

	int b, c;

	std::cout << "\n" << "Vvedi a\n";

	std::cin >> a;

	std::cout << "Vvedi b\n";

	std::cin >> b;

	c = a + b;

	std::cout << "Otvet: " << c;

	return c;

}

