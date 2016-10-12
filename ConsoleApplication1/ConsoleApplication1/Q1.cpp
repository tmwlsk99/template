
#include <iostream>
#include <string>


template<class T_class> //template 함수의정의

void print(const T_class &i)
{
	std::cout << i << std::endl;
}
//void print(const int& i)
//{
//	std::cout << i << std::endl;
//}
//
//void print(const float& i)
//{
//	std::cout << i << std::endl;
//}
//
//void print(const std::string& i)
//{
//	std::cout << i << std::endl;
//}

int main()
{
	print(1);
	print(2.345f);
	print("Hello World");

	return 0;
}








