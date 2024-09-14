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

//#include<iostream>
//using namespace std;
//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
//// 两个Stack实现队列
//class MyQueue
//{
//public:
//	//编译器默认⽣成MyQueue的析构函数调⽤了Stack的析构，释放的Stack内部的资源
//	// 显⽰写析构，也会⾃动调⽤Stack的析构
//~MyQueue()
//{
//	std::cout << "~MyQueue" << '\n';
//}
//private:
//	Stack pushst;
//	Stack popst;
//};
//
//
//int main()
//{
//	Stack st;
//	MyQueue mq;
//	return 0;
//}


// 这里先假设Stack已经定义好了
//#include<iostream>
//using namespace std;
//// ⽤最新加了构造和析构的C++版本Stack实现
//bool isValid(const char* s) {
//	Stack st;
//	while (*s)
//	{
//		if (*s == '[' || *s == '(' || *s == '{')
//		{
//			st.Push(*s);
//		}
//		else
//		{
//			// 右括号⽐左括号多，数量匹配问题
//			if (st.Empty())
//			{
//				return false;
//			}
//			// 栈⾥⾯取左括号
//			char top = st.Top();
//			st.Pop();// 顺序不匹配
//			if ((*s == ']' && top != '[')
//				|| (*s == '}' && top != '{')
//				|| (*s == ')' && top != '('))
//			{
//				return false;
//			}
//		}
//		++s;
//	}
//	// 栈为空，返回真，说明数量都匹配 左括号多，右括号少匹配问题
//	return st.Empty();
//}

//#include<iostream>
//using namespace std;
//// ⽤最新加了构造和析构的C++版本Stack实现
//bool isValid(const char* s) {
//	Stack st;
//	while (*s)
//	{
//		if (*s == '[' || *s == '(' || *s == '{')
//		{
//			st.Push(*s);
//		}
//		else
//		{
//			// 右括号⽐左括号多，数量匹配问题
//			if (st.Empty())
//			{
//				return false;
//			}
//			// 栈⾥⾯取左括号
//			char top = st.Top();
//			st.Pop();
//
//// 顺序不匹配
//if ((*s == ']' && top != '[')
//	|| (*s == '}' && top != '{')
//	|| (*s == ')' && top != '('))
//{
//	return false;
//}
//}
//++s;
//}
//// 栈为空，返回真，说明数量都匹配 左括号多，右括号少匹配问题
//return st.Empty();
//}
//// ⽤之前C版本Stack实现
//bool isValid(const char* s) {
//	ST st;
//	STInit(&st);
//	while (*s)
//	{
//		// 左括号⼊栈
//		if (*s == '(' || *s == '[' || *s == '{')
//		{
//			STPush(&st, *s);
//		}
//		else // 右括号取栈顶左括号尝试匹配
//		{
//			if (STEmpty(&st))
//			{
//				STDestroy(&st);
//				return false;
//			}
//			char top = STTop(&st);
//			STPop(&st);
//			// 不匹配
//			if ((top == '(' && *s != ')')
//				|| (top == '{' && *s != '}')
//				|| (top == '[' && *s != ']'))
//			{
//				STDestroy(&st);
//				return false;
//			}
//
//}
//++s;
//}
//// 栈不为空，说明左括号⽐右括号多，数量不匹配
//bool ret = STEmpty(&st);
//STDestroy(&st);
//return ret;
//}
//int main()
//{
//	cout << isValid("[()][]") << endl;
//	cout << isValid("[(])[]") << endl;
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//class Date {
//public:
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//// 拷贝构造的第一个参数必须用引用，直接使用Date d的话会无穷递归
//	//Date(const Date& d)
//	//{
//	//	_year = d._year;
//	//	_month = d._month;
//	//	_day = d._day;
//	//}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2024, 9, 14);
//	// 拷贝构造的两种调用方式
//	Date d2(d1);
//	Date d3 = d1;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//typedef int STDataType;
//class Stack
//{
//public:
//	Stack(int n = 4)
//	{
//		_a = (STDataType*)malloc(sizeof(STDataType) * n);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败");
//			return;
//		}
//		_capacity = n;
//		_top = 0;
//	}
//	Stack(const Stack& st)
//	{
//		// 需要对_a指向资源创建同样⼤的资源再拷⻉值
//		_a = (STDataType*)malloc(sizeof(STDataType) * st._capacity);
//		if (nullptr == _a)
//		{
//			perror("malloc申请空间失败!!!");
//			return;
//		}
//		memcpy(_a, st._a, sizeof(STDataType) * st._top);
//		_top = st._top;
//		_capacity = st._capacity;
//	}
//	void Push(STDataType x)
//	{
//		if (_top == _capacity)
//		{
//			int newcapacity = _capacity * 2;
//			STDataType* tmp = (STDataType*)realloc(_a, newcapacity *
//				sizeof(STDataType));
//			if (tmp == NULL)
//			{
//				perror("realloc fail");
//				return;
//			}
//			_a = tmp;
//			_capacity = newcapacity;
//		}
//		_a[_top++] = x;
//	}
//	~Stack()
//	{
//		cout << "~Stack()" << endl;
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	STDataType* _a;
//	size_t _capacity;
//	size_t _top;
//};
//// 两个Stack实现队列
//class MyQueue
//{
//public:
//private:
//	Stack pushst;
//	Stack popst;
//};
//
//int main()
//{
//	Stack st1;
//	st1.Push(1);
//	st1.Push(2);
//	// Stack不显⽰实现拷⻉构造，⽤⾃动⽣成的拷⻉构造完成浅拷⻉
//	// 会导致st1和st2⾥⾯的_a指针指向同⼀块资源，析构时会析构两次，程序崩溃
//	Stack st2 = st1;
//	MyQueue mq1;
//	// MyQueue⾃动⽣成的拷⻉构造，会⾃动调⽤Stack拷⻉构造完成pushst/popst
//	// 的拷⻉，只要Stack拷⻉构造⾃⼰实现了深拷⻉，他就没问题
//	MyQueue mq2 = mq1;
//	return 0;
//}

#include <iostream>
#include <assert.h>


class Date {
public:
	Date(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//// 拷贝构造的第一个参数必须用引用，直接使用Date d的话会无穷递归
	//Date(const Date& d)
	//{
	//	_year = d._year;
	//	_month = d._month;
	//	_day = d._day;
	//}
	// 这是使用方法3

	//bool operator<(const Date& d2)
	//{
	//	if (_year == d2._year)
	//	{
	//		return true;
	//	}
	//	else if (_year == d2._year && _month < _month)
	//	{
	//		return true;
	//	}
	//	else if (_year == d2._year
	//		&& _month == d2._month
	//		&& _day < d2._day)
	//	{
	//		return true;
	//	}

	//	return false;
	//}

	//int operator-(const Date& d2)
	//{
	//	int day = 0;
	//	for (int i = _year; i < d2._year; i++)
	//	{
	//		day += is_leap(i) ? 366 : 365;
	//	}
	//	for (int i = 0; i < d2._month; i++)
	//	{
	//		day += GetMonthDay(_year, i);
	//	}
	//	day += day - 
	//	

	//}

	int GetMonthDay(const int& year, const int& month)
	{
		assert(month > 0 && month < 13);
		static int monthDayArray[13] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		if (month == 2 && is_leap(year))
		{
			return 29;
		}
		else
		{
			return monthDayArray[month];
		}
	}

	//Date operator+(const int& x)
	//{

	//}

	bool is_leap(const int& year)
	{
		if (year % 400 == 0)
		{
			return true;
		}
		else if (year % 4 == 0 && year % 100)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

private:
	int _year;
	int _month;
	int _day;
};

// 1.提供get函数
// 2.友元
// 3.重载为类的成员函数


// 这里需要先将元素设为公有
//bool operator<(const Date& d1, const Date& d2)
//{
//	if (d1._year == d2._year)
//	{
//		return true;
//	}
//	else if (d1._year == d2._year && d1._month < d2._month)
//	{
//		return true;
//	}
//	else if (d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day < d2._day)
//	{
//		return true;
//	}
//
//	return false;
//}



int main()
{
	Date d1(2024, 9, 14);
	Date d2(2024, 9, 15);

	// 需要运算符重载
	//std::cout << (d1 < d2);

	//std::cout << (d1 - d2);
	//std::cout << (d1 + 1);



	return 0;
}