#ifndef _BIGINT_H
#define _BIGINT_H

#include"./utili.h"

class BigInt						//大数类
{
private:
	deque<char> de;				//底层为deque类

public:
	BigInt();						//无参构造函数
	BigInt(long value);				//带参构造函数
	BigInt(string& str);				//字符串构造函数
	BigInt& operator=(const BigInt& bt);	//赋值构造函数
	BigInt(const BigInt& bt);		//拷贝构造函数
	~BigInt();						//析构函数
public:
	void show();					//打印函数
public:
	static void Add(BigInt &bt,BigInt &bt1,BigInt &bt2);	//加法
	static void Sub(BigInt &bt,BigInt &bt1,BigInt &bt2);	//减法
	static void Mul(BigInt &bt,BigInt &bt1,BigInt &bt2);	//乘法
	static void Div(BigInt &bt,BigInt &bt1,BigInt &bt2);	//除法
private:
	static char AddItem(char a,char b,char& sign);			//每个位相加
	static char SubItem(char a,char b,char& sign);		//每个位相减
public:
	//重载函数
	char& operator[](int position);				//重载[]
	const char& operator[](int position)const;
	bool operator==(const BigInt &bt)const;		//重载==
	bool operator>(const BigInt &bt)const;		//重载>
	bool operator<(const BigInt &bt)const;		//重载<
	void push_back(char element);						//尾插函数
	void push_front(char element);					//头插函数
	size_t size()const;							//求个数
};

#endif
