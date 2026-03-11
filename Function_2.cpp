#include <iostream>
using namespace std;
// We will use cents for all monetary values. This will let us
// work with integer, rather than floating-point, variables.
const int TWINKIE_PRICE = 350;

// Prompt the user to insert coins until enough has been paid to buy
// a twinkie. The total amount inserted, in cents, is returned.
int accept_money();

// Returns the amount of change that should be returned to the user.
int compute_change(int total_paid);

int main()
{
  // Declare variables for the amount of money that the user enters,
  // along with the change that is to be returned to them.
  int money_entered = 0;
  int change = 0;

  // Make sure that monetary values we output are formatted with
  // two digits after the decimal point.
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  while (true)
  {
    // Collect money from the user
    
    money_entered += accept_money();
    // Figure out how much change to return
    if (money_entered >= 350)
    {
      change = compute_change(money_entered);
      // Dispense the twinkie
      cout << "\nEnjoy your deep-fried twinkie. Your change is $"
           << static_cast<double>(change) / 100.00 << endl;
      break;
    }
  }

  return 0;
}

int accept_money()
{
  int totalCoins;
  while (true)
  {
    int coin;
    cout << "Please enter your money (100 cents, 25 cents,10 cents, 5 cents): ";
    cin >> coin;
    cout << endl;
    bool checkCoin = false;
    if (!(coin == 100 || coin == 5 || coin == 10 || coin == 25))
    {
      cout << "Invalid amount, please retry!" << endl;
      continue;
    }
    return coin;
  }
  return 0;
}

int compute_change(int total_paid)
{
  return total_paid - 350;
}
