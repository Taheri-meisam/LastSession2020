

#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> myValues{ 1,5,2,4,7,8 };

template <class T> //template <typename T> 

T addValue(T a, T b) {
	return a + b;
}


template <class T1, class T2, class T3>
void diffType(T1 a, T2 b, T3 c) {
	std::cout <<"a: " << a << " b: " << b <<" c: "<< c << std::endl;
}

//explicity works with only integer 
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
/// 

template <class Ts>
void Tswap(Ts &a, Ts &b) {
	Ts temp = a;
	a = b;
	b = temp;
}

// you will learn this next semseter 
//  class templates
template <class Tc>
class Person {
public:
	std::string name;
	Tc data;

	short age;
	Tc getData() {
		return data;
	}
};



int main()
{

	std::sort(myValues.begin(), myValues.end());
	for (auto i : myValues) {
		std::cout << i;
	}




	std::cout <<"\n" << addValue('c', 'v') << "\n";
	std::cout  << addValue<double>(2.5, 3.7) << "\n";



	diffType<int, int, int>(10, 20, 30);
	diffType(std::string{ "Astring" }, 20.5, 'c');

	int a2 = 10;
	int b2 = 40;
	char a = 'a';
	char b = 'b';
	std::cout << "a and b before calling Tswap :" << a2 << b2 << std::endl;
	Tswap(a2, b2);
	std::cout << "a and b after calling Tswap :" << a2 << b2 << std::endl;


	std::string M{ "Mike" };
	std::string J{ "John" };
	std::cout << "M and J before calling Tswap :" << M << " "<< J << std::endl;
	Tswap(M, J);
	std::cout << "M and J  after calling Tswap :" << M << " " << J << std::endl;
	std::cout << "Before cls";
	system("cls");
	std::cout << "after cls";
	/// Class templates
	Person<double> p1;
	p1.data = 22.22;
	std::cout << p1.getData();

	Person<std::string> p2;
	p2.data ="This a string";
	std::cout << p2.getData();

	

}
