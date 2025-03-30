#include <iostream>
using namespace std;

/*Да се дефинира класа Temperature во која се чува реална променлива temp.
  *потребните конструктори
  *changeTemp метода со којашто доколку вредноста на temp  е позитивна
  *(сметајќи ја и 0та) ќе се зголеми за еден, доколку е негативна ќе се намали за еден
  *get метода за temp.
  *Забранети се промени во main.

---------
Define a class Temperature that holds an float variable temp. Implement for the class:
   *Necessary constructors
   *changeTemp method, which if the temp's value is positive (including 0 number) will increment it by one;
   *if negative it will be decrement by one
   *getter for temp.

   Do not change the main function. */
class Temperature{
private:
    float temp;

public:
    Temperature(float temp=0){
        this->temp = temp;
    }

    float get(){
        return temp;
    }

    float changeTemp(){
        if(temp>=0){
            temp++;
        }
        else{
            temp--;
        }
        return temp;
    }
};

int main() {
    Temperature obj1;
    int n;
    cin >> n;
    int cmd;
    float k;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        switch (cmd) {
            case 1: {
                cin >> k;
                Temperature obj2(k);
                cout << obj2.get() << endl;
                break;
            }
            case 2: {
                obj1.changeTemp();
                cout << obj1.get() << endl;
                break;
            }
            case 3: {
                cin >> k;
                Temperature obj3(k);
                obj3.changeTemp();
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
