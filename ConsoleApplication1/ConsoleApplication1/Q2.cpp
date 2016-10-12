#include <iostream>
#include <string>


template<class T_class> //template 함수의정의
class Vector2D
{
public:
	T_class x_, y_;
	Vector2D(const T_class & x_input, const T_class & y_input)
		:x_(x_input), y_(y_input)

	{}
	void print()
	{
		std::cout << x_ << " " << y_ << std::endl;
	}
};

//class VectorInt2D
//{
//	int x_, y_;
//};
//
//class VectorFloat2D
//{
//	float x_, y_;
//};
//
//class VectorDouble2D
//{
//	double x_, y_;
//};



int main()
{
	Vector2D<int> int_vector(1, 1);
	int_vector.print();

	Vector2D<float> float_vector(1.3f, 1.5f);
	float_vector.print();

	Vector2D<double> double_vector(1.32, 1.12);
	double_vector.print();

	Vector2D<std::string> str_vector("Hello", "World");
	str_vector.print();

	return 0;
}
