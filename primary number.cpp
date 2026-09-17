#include<iostream>

using namespace std;

class  PrimeNumber
{
private:

    int number;

public:

    void setNumber(int n)
    {
        number = n;
    }

    bool isPrime()
    {
        if (number < 2 )
        {
            return false;
        }

        for(int i = 2; i < number; i++)
        {
            if(number % i ==  0)
            {
                return false;
            }
        }

        return true;
    }


    void displayResult()
    {

        if(isPrime())
        {
            cout << number <<  " is a prime number." << endl;
        }

        else
        {
            cout << number << " is not a prime number." <<  endl;
        }

    }

};

void ShowMenu()
{
    cout << "\n===== Prime Number Checker =====" << endl;
    cout << "1- Check Prime Number" <<endl;
    cout << "2- Show Prime Numbers" <<endl;
    cout << "3- Exit" <<endl;
}

int main()
{
    PrimeNumber prime;

    int choice;

    while(true)
    {
        ShowMenu();

        cin >> choice;

        if(choice == 3)
        {
            cout << "Good Bye! " << endl;

            system("pause");

            return 0;
        }

        if(choice == 1 )
        {
            int num;

            cout << "Enter A Number: ";
            
            cin >>  num;

            prime.setNumber(num);

            prime.displayResult();

            system("pause");

            system("cls");
        }

        if(choice == 2)
        {
            int limit;

            cout << "Enter a limit: ";

            cin >> limit;

            cout << "prime Numbers: ";

            for(int i = 2;i <= limit; i++)
            {
                prime.setNumber(i);

                if(prime.isPrime())
                {
                    cout << i << " ";
                }
            }

            cout << endl;

            system("pause");
            
            system("cls");
        }
    }

    return 0;
}