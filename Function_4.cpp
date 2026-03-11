#include <iostream>
using namespace std;

// define necessary functions
void computeCoins(int coinValue, int &num, int &amountLeft);

int main()
{
  char repeat = 'Y';
  while ('y' == repeat || 'Y' == repeat)
  {
    /* code */

    int centAmounts, num;
    cout << "Enther how many cents (1-99): ";
    cin >> centAmounts;
    cout << endl;
    while (0 < centAmounts && centAmounts > 99)
    {
      cout << "Re-enther how many cents (1-99): ";
      cin >> centAmounts;
      cout << endl;
    }

    cout << centAmounts << " cents can be given as ";
    computeCoins(25, num, centAmounts);
    cout << num << " quarter(s) ";
    computeCoins(10, num, centAmounts);
    cout << num << " dime(s) and " << centAmounts << " penny(pennies)." << endl
         << endl;

    cout << "\n\nEnter Y or y to continue, any other halts\n\n";
    cin >> repeat;
  }
  return 0;
}

// implement functions
void computeCoins(int coinValue, int &num, int &amountLeft)
{
  num = amountLeft / coinValue;
  amountLeft -= num * coinValue;
}