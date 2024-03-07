#include <iostream>
using namespace std;
class A {
public:
    
    void func(int val) {
        cout << "A's func called 1 times" << endl;
        val= val * 2;
    }
};

class B {
public:
    void func(int val) {
        cout << "B's func called 1 times" << endl;
        val= val * 3;
    }
};

class C {
public:
    void func(int val) {
        cout << "C's func called 1 times" <<endl;
        val= val * 5;
    }
};

class D : public A, public B, public C {
public:
    void update_val(int new_val) {
        while (new_val % 2 == 0) {
            new_val /= 2;
            A::func(1);
        }

        while (new_val % 3 == 0) {
            new_val /= 3;
            B::func(1);
        }

        while (new_val % 5 == 0) {
            new_val /= 5;
            C::func(1);
        }
    }
};

int main() {
    D d;
    d.update_val(120);
    return 0;
}
