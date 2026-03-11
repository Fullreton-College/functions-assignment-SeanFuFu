#include <iostream>
#include <cstdlib>
using namespace std;

/* Define your function here */ 
string coinFlip();

int main() {
   srand(2);  // Unique seed
   // Add more variables as needed
   int times;
   cout << "Enther how many times you want to try: ";
   cin >> times;
   cout << endl;
   /* Type your code here */
   for (int i = 1; i <= times; i++)
   {
      cout << coinFlip() << " ";
   }
   cout << endl;

   return 0;
}
string coinFlip(){
   int coin = rand() % 2; //random number from 0 to 1
   if (coin == 1)
   {
      return "Heads";
   }
   return "Tails";
}
