#include <iostream>
using namespace std;

/*Да се дефинира класа Temperature во која се чува реална променлива temp.
  *set метода
  *changeTemp метода со којашто доколку вредноста на temp е негативна ќе се зголеми за еден,
  *доколку е позитивна ќе се намали за еден
  *print метода за печатење на вредноста на temp.
  *Забранети се промени во main.

---------
Define a class Temperature that holds an float variable temp. Implement for the class:
   *setter
   *changeTemp method which if the temp's value is positive will decrement it by one,
   *if negative it will be increment by one
   *print method for printing the value of temp.

   Do not change the main function. */
class Temperature{
private:
    float temp;
public:
    Temperature(float temp=0){
        this->temp = temp;
    }

    float changeTemp(){
        if(temp<0){
            temp++;
        }
        else{
            temp--;
        }
        return temp;
    }

    void print(){
        cout<<temp<<endl;
    }

    float set(float tmp){
        this->temp = tmp;
    }
};

int main() {
    Temperature obj;
    int n;
    cin >> n;
    int cmd;
    float k;
    for (int i = 0; i < n; i++) {
        cin >> cmd;
        switch (cmd) {
            case 1: {
                cin >> k;
                obj.set(k);
                obj.print();
                break;
            }
            case 2: {
                obj.changeTemp();
                obj.print();
                break;
            }
            case 3: {
                Temperature obj3;
                cin >> k;
                obj3.set(k);
                obj3.changeTemp();
                obj3.print();
                break;
            }
            default: {
                obj.print();
                break;
            }
        }
    }
}