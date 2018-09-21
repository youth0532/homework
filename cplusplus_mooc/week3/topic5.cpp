
// http://cxsjsxmooc.openjudge.cn/2018t3fallw3more/4/

#include <iostream>
using namespace std;

struct A
{
	int v;
	A(int vv):v(vv) { }

// 在此处补充你的代码
    A* getPointer() const {
        return (A*)this;
    }
};

int main()
{
	const A a(10);
	const A * p = a.getPointer();
	cout << p->v << endl;
	return 0;
}


/**
  * 这个题目花了点时间，主要是看不懂编译错误。
  * getPointer 需要是常量成员函数；并且返回值要类型转换。
  * 都不知道为啥？
  */
