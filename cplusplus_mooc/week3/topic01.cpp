

// http://cxsjsxmooc.openjudge.cn/2018t3fallw3more/1/

// 返回什么才好呢

#include <iostream>
using namespace std;

#if 0
    全局函数，放在外面
    void operator = (const A& a, int n) {
        ...
    }
#endif

class A {
public:
	int val;

	A(int n) {
        // cout << "construtor 1" << endl;
        val = n;
    }

    A() {
        // cout << "construtor 2" << endl;
        val = 123; 
    }
    
    A& GetObj() {
        // cout << "GetObj" << endl;
        return *this; // 如果返回另外一个对象，则这个对象的value将不会被assignment
    }

    void operator = (int n) { // 符号重载，可以使用成员变量/全局函数
        // cout << "operator = n" << endl;
        val = n;
    }

    void operator = (const A& a) {
        // cout << "operator = A" << endl;
        this->val = a.val;
    }

};
int main()
{
	int m,n;
	A a;
	cout << a.val << endl;
	while(cin >> m >> n) {
		a.GetObj() = m;
		cout << a.val << endl;
		a.GetObj() = A(n);
		cout << a.val<< endl;
	}
	return 0;
}
