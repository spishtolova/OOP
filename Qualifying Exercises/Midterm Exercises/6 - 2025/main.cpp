#include <iostream>
using namespace std;

/*Да се дефинира класа Letter во која се чува еден знак ch. За класата да се дефинираат:
  *set метода
  *lowerLetter метода со којашто ќе се претвори буквата во мала. Доколку не е буква да испечати
  *порака за грешка  "Character is not a letter" (методи за користење: isalpha и tolower).
  *print метода за печатење на вредноста на ch.
  *Забранети се промени во main.

---------
Define a class Letter that holds a char variable ch. Implement for the class:
   *setter
   *lowerLetter method which the letter will turn into a lower one. If it is not a letter print
   *an error message  "Character is not a letter" (methods of use: isalpha and tolower).
   *print method for printing the value of ch.

   Do not change the main function. */
class Letter{
private:
    char ch;
public:
    Letter(char ch = 'a'){
        this->ch = ch;
    }

    char set(char chaar){
        this->ch = chaar;
    }

    char lowerLetter(){
        if(isalpha(ch)){
            ch = tolower(ch);
        }
        else{
            cout<<"Character is not a letter"<<endl;
        }
        return ch;
    }

    void print(){
        cout<<ch<<endl;
    }
};

int main() {
    Letter obj;
    int n;
    cin >> n;
    int cmd;
    char k;
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
                obj.lowerLetter();
                obj.print();
                break;
            }
            case 3: {
                cin >> k;
                Letter obj2;
                obj2.set(k);
                obj2.lowerLetter();
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