#include <iostream>
using namespace std;

/*Да се дефинира класа Number во која се чува целобројна променлива num.
 *За класата да се дефинираат:
  *set метода
  *decreaseNumber метода со којашто ќе се намалува вредноста на num за дадена целобројна
  *вредност.  Доколку разликата е помала од 0, вредноста на num да се постави на 0 и да
  *се испечати порака "Difference is less than 0"
  *print метода за печатење на вредноста на num.
  *Забранети се промени во main.

---------
Define a class Number that holds an integer variable num. Implement for the class:
   *setter
   *decreaseNumber method which will decrement the value of num by the given integer value.
   *If the difference is less than 0, set the value of num to 0 and print the message
   *"Difference is less than 0"
   *print method for printing the value of num.

   Do not change the main function. */
class Number {
private:
    int num;

public:
    // Constructor
    Number(int num = 0) {
        this->num = num;
    }

    // Setter Method
    void set(int number) {
        this->num = number;
    }

    // Method to decrease number
    int decreaseNumber(int broj) {
        int razlika = num - broj;
        if (razlika < 0) {
            num = 0;
            cout << "Difference is less than 0" << endl;
        } else {
            num = razlika;
        }
        return num;
    }

    // Method to print the number
    void print() {
        cout << num << endl;
    }
};

int main() {
    Number obj;
    int n;
    cin >> n;
    int cmd;
    int k;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        switch (cmd) {
            case 1: {
                cin >> k;
                obj.set(k);  // Use set method
                obj.print();
                break;
            }
            case 2: {
                cin >> k;
                obj.decreaseNumber(k);
                obj.print();
                break;
            }
            case 3: {
                int initial, decrease;
                cin >> initial;
                Number obj2(initial); // Initialize obj2 with proper value
                cin >> decrease;
                obj2.decreaseNumber(decrease);
                obj2.print();
                break;
            }
            default: {
                obj.print();
                break;
            }
        }
    }
}
