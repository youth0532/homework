
// http://cxsjsxmooc.openjudge.cn/2018t3fallw3more/2/
// 
#include <iostream>
#include <string>
using namespace std;
class Base {
public:
	int k;
	Base(int n):k(n) { }
};
class Big
{
public:
	int v;
	Base b;
    /***********/
    Big(int n) : b(n) { // 
        v = n;
    }
    Big(const Big& a) : b(a.b.k) {
        v = a.v;
    }
    /************/
};
int main()
{
	int n;
	while(cin >> n) {
		Big a1(n);
		Big a2 = a1;
		cout << a1.v << "," << a1.b.k << endl;
		cout << a2.v << "," << a2.b.k << endl;
	}
}


/**
  * 这道题很不错，Big中Base b命令，只是声明了Base对象，但并没有初始化；
  * 似乎只能通过初始化列表进行初始化，因为Base已经不能改动，不能通过copy assignment进行添加  *   了。 
  */
