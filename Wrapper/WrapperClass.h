#pragma once
#include <string>

class WrapperClass
{
public:
	_declspec(dllexport) static int WrapperFunction1();
	_declspec(dllexport) static std::wstring WrapperFunction2();
};

