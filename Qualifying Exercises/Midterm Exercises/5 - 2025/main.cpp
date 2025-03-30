#include <iostream>
using namespace std;

/*Да се дефинира класа Letter во која се чува еден знак ch. За класата да се дефинираат:
  *потребните конструктори (подразбирлива вредност за ch е буквата а)
  *upperLetter метода со којашто ќе се претвори буквата во голема. Доколку не е буква да испечати
  *порака за грешка "Character is not a letter" (методи за користење: isalpha и toupper).
  *get метода за ch.
  *Забранети се промени во main.

---------
Define a class Letter that holds a char variable ch. Implement for the class:
   *Necessary constructors (the default value for ch is the letter a)
   *upperLetter method, in which the letter will turn into an upper one. If it is not a letter
   *print an error message "Character is not a letter" (methods of use: isalpha and toupper).
   *getter for ch.

   Do not change the main function. */
class Letter{
private:
    char ch;
public:
    Letter(char ch = 'a'){
        this->ch = ch;
    }

    char get() const{
        return ch;
    }

    char upperLetter(){
        if(isalpha(ch)){
            ch = toupper(ch);
        }
        else{
            cout<<"Character is not a letter"<<endl;
        }
        return ch;
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
                obj = Letter(k);
                cout << obj.get() << endl;
                break;
            }
            case 2: {
                obj.upperLetter();
                cout << obj.get() << endl;
                break;
            }
            case 3: {
                cin >> k;
                Letter obj2(k);
                obj2.upperLetter();
                cout << obj2.get() << endl;
                break;
            }
            default: {
                cout << obj.get() << endl;
                break;
            }
        }
    }
}