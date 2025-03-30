#include <iostream>
using namespace std;

/*Да се дефинира класа Number во која се чува целобројна променлива num.
 *За класата да се дефинираат:
  *Потребните конструктори
  *increaseNumber метода со којашто ќе се зголеми вредноста на num за дадена целобројна вредност.
  Доколку збирот е поголем од 100, вредноста на num да се постави на 100 и да се испечати
  порака "Sum is greater than 100"
  *get метода за num.
  *Забранети се промени во main.

---------
Define a class Number that holds an integer variable num. Implement for the class:
   *Necessary constructors
   *increaseNumber method which will increment the num value by the given integer value.
   If the sum is greater than 100, set the value of num to 100 and print the message
   "Sum is greater than 100"
   *getter for num.

   Do not change the main function. */
class Number{
private:
    int num;
public:

    Number(int num = 0){
        this->num = num;
    }

    int increaseNumber(int broj) {
        int sum = num + broj; 
        if (sum > 100) {
            num = 100;
            cout << "Sum is greater than 100" << endl;
        } else {
            num = sum;
        }
        return num;
    }

    int get() {
        return num;
    }

};

int main() {
    Number obj1;
    int n;
    cin >> n;
    int cmd;
    int k;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        switch (cmd) {
            case 1: {
                cin >> k;
                Number obj2(k);
                cout << obj2.get() << endl;
                break;
            }
            case 2: {
                cin >> k;
                obj1.increaseNumber(k);
                cout << obj1.get() << endl;
                break;
            }
            case 3: {
                cin >> k;
                Number obj3(k);
                cin >> k;
                obj3.increaseNumber(k);
                cout << obj3.get() << endl;
                break;
            }
            default: {
                cout << obj1.get() << endl;
                break;
            }
        }
    }
}

