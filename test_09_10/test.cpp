//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//class student {
//public:
//	student(string name, int age, string telephone)
//	{
//		_name = name;
//		_age = age;
//		_telephone = telephone;
//	}
//	void print()
//	{
//		cout << _name << endl;
//		cout << _age << endl;
//		cout << _telephone << endl;
//	}
//private:
//	string _name;
//	int _age;
//	string _telephone;
//};
//
//int main()
//{
//	student fir_stu("wuyelei", 18, "1232131232");
//	fir_stu.print();
//
//	return 0;
//}

//class Stack {
//public:
//	void init()
//	{
//
//	}
//};
//
//class Queue {
//public:
//	void init()
//	{
//
//	}
//};
//#include <iostream>
//class datetime {
//public:
//	void Init(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void print()
//	{
//		std::cout << _year << "年" << _month << "月" << _day << "日" << std::endl;
//	}
//private:
//	// 注意这里是声明
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	datetime t1, t2;
//	t1.Init(2024, 9, 10);
//	t2.Init(2024, 10, 01);
//
//	t1.print();
//	t2.print();
//
//	std::cout << sizeof(t1) << std::endl;
//	std::cout << sizeof(t2) << std::endl;
//	std::cout << std::endl;
//	std::cout << std::endl;
//	 
//
//
//
//
//	return 0;
//}

//#include <iostream>
//class A {
//public:
//	void print()
//	{
//		std::cout << "A::print()" << std::endl;
//	}
//
//private:
//	int _a;
//};
//
//class B {
//public:
//	void print()
//	{
//		std::cout << "A::print()" << std::endl;
//		std::cout << _a << std::endl;
//	}
//	
//private:
//	int _a;
//};
//
//int main()
//{
//	/*A* p = nullptr;
//	p->print();*/
//	B* p = nullptr;
//	p->print();
//	return 0;
//}

#include<iostream>
using namespace std;
typedef int STDataType;
class Stack
{
public:
	Stack(int n = 4)
	{
		_a = (STDataType*)malloc(sizeof(STDataType) * n);
		if (nullptr == _a)
		{
			perror("malloc申请空间失败");
			return;
		}
		_capacity = n;
		_top = 0;
	}
	~Stack()
	{
		cout << "~Stack()" << endl;
		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}
private:
	STDataType* _a;
	size_t _capacity;
	size_t _top;
};
// 两个Stack实现队列
class MyQueue
{
public:
	//编译器默认⽣成MyQueue的析构函数调⽤了Stack的析构，释放的Stack内部的资源
	// 显⽰写析构，也会⾃动调⽤Stack的析构
~MyQueue()
{
	std::cout << "~MyQueue" << '\n';
}
private:
	Stack pushst;
	Stack popst;
};


int main()
{
	Stack st;
	MyQueue mq;
	return 0;
}
