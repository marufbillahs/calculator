# include <iostream>
using namespace std;
int main()
{

    char optr;
    float num1, num2;
    cout<<"                           ******************** Calculator ******************\n";
    cout<<"                           --------------------------------------------------\n";
    cout << "Enter 1st number: ";
    cin >> num1 ;
    cout << "Enter operator: +, -, *, /: ";
    cin >> optr;
    cout << "Enter 2nd number: ";
    cin>> num2;
    switch(optr)
    {

    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;

    default:
        //when other oparator show
        cout << "Error!";
        break;
    }

    return 0;
}

