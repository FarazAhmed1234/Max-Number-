#include<iostream>
using namespace std;

class B;  // Forward declaration of class B
class C;  // Forward declaration of class C

class A {
private:
    int num1;

public:
    void getdata() {
        cout << "Enter the first number (for A): ";
        cin >> num1;
    }

    friend void find(A, B, C);  // Friend function declaration
        friend void find1(A, B, C);  // Friend function declaration

};

class B {
private:
    int num2;

public:
    void getdata() {
        cout << "Enter the second number (for B): ";
        cin >> num2;
    }

    friend void find(A, B, C);  // Friend function declaration
    friend void find1(A, B, C);  // Friend function declaration

};

class C {
private:
    int num3;

public:
    void getdata() {
        cout << "Enter the third number (for C): ";
        cin >> num3;
    }

    friend void find(A, B, C);  // Friend function declaration
    friend void find1(A, B, C);  // Friend function declaration
    
    };

void find(A obj_A, B obj_B, C obj_C) {
    if (obj_A.num1 > obj_B.num2 && obj_A.num1 > obj_C.num3) {
        cout << "Num1 (from A) is the greatest: " << obj_A.num1 << endl;
    } else if (obj_B.num2 > obj_A.num1 && obj_B.num2 > obj_C.num3) {
        cout << "Num2 (from B) is the greatest: " << obj_B.num2 << endl;
    } else {
        cout << "Num3 (from C) is the greatest: " << obj_C.num3 << endl;
    }
}





void find1(A obj_A, B obj_B, C obj_C) {
    if (obj_A.num1 < obj_B.num2 && obj_A.num1 < obj_C.num3) {
        cout << "Num1 (from A) is the Lowest: " << obj_A.num1 << endl;
    } else if (obj_B.num2 < obj_A.num1 && obj_B.num2 < obj_C.num3) {
        cout << "Num2 (from B) is the Lowest: " << obj_B.num2 << endl;
    } else {
        cout << "Num3 (from C) is the Lowest: " << obj_C.num3 << endl;
    }
}
int main() {
    A obj_A;
    B obj_B;
    C obj_C;

    obj_A.getdata();   // Input for num1 in class A
    obj_B.getdata();   // Input for num2 in class B
    obj_C.getdata();   // Input for num3 in class C

    find(obj_A, obj_B, obj_C);  // Find the greatest number
    find1(obj_A, obj_B, obj_C);  // Find the Lowest number


    return 0;
}
