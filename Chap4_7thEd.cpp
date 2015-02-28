// Chap 4 (7th Ed)
// Challenge 1: MINIMUM/MAXIMUM
// By Josuel Musambaghani

#include <iostream>
using namespace std;

int main ()
{
   int num1;
   int num2;
   cout << "Enter a number: "; // This prompts the user to enter the first number to be compared.
   cin >> num1;

   cout << "Enter another number: "; // The user enters the second number to be compared.
   cin >> num2;

   if (num1 > num2)
    cout << num1 << " is greater than " << num2;
   else if (num2 < num1)
    cout << num2 << " is greater than " << num1;
   else
    cout << "The two numbers are equal" << endl;

   return 0;
}
// ==================================================================================
// Chap 4 (7th Ed)
// Challenge 2: ROMAN NUMERAL CONVERTER
// By Josuel Musambaghani

#include <iostream>
using namespace std;

int main ()
{
   // local variable declaration:
   int number;
   cout << "Enter a Numerical number from 1 to 10 to be converted: ";
   cin >> number;

   switch(number)
   {
   case 1:
    cout << "The Roman number is I" <<endl;
    break;
   case 2:
    cout << "The Roman number is II" <<endl;
    break;
   case 3:
    cout << "The Roman number is III" <<endl;
    break;
   case 4:
    cout << "The Roman number is IV"<<endl;
    break;
   case 5:
    cout << "The Roman number is V" << endl;
    break;
   case 6:
    cout << "The Roman number is VI" <<endl;
    break;
   case 7:
    cout << "The Roman number is VII" << endl;
    break;
   case 8:
    cout << "The Roman number is VIII" << endl;
    break;
   case 9:
    cout << "The Roman number is IX" << endl;
    break;
   case 10:
    cout << "The Roman number is X" << endl;
    break;
   default:
    cout << "Number out of range" <<endl;
   }
   // cout << "The number is " << number << endl;

   return 0;
}
// ==================================================================================
// Chap 4 (7th Ed)
// Challenge 3: MAGIC DATES
// By Josuel Musambaghani

#include <iostream>
using namespace std;

int main ()
{
   int month; int day; int year;
   cout << "Enter a month: ";
   cin >> month;

   cout << "Enter a day: ";
   cin >> day;

   cout << "Enter a year in two digits: ";
   cin >> year;

   if (month*day != year) // magic dates means month*day = year, for instance 06/01/06 for July 1st, 2006 
    cout << "The date " << month <<"/" << day << "/" << year << " is not magic";

   else
    cout << "The date " << month <<"/" << day << "/" << year << " is magic";

   return 0;
}
// ==================================================================================
// Chap 4 (7th Ed)
// Challenge 4: AREAS OF RECTANGLE (This program compares two areas of two rectangles)
// By Josuel Musambaghani

#include <iostream>
using namespace std;

int main ()
{
   // declaration of variables for the two rectangles 
   double length1, length2, width1, width2, area1, area2;

   cout << "Enter the length and the width of the ";
   cout << "first rectangle separated by a space. \n";
   cin >> length1 >> width1;
   area1 = length1 * width1;

   cout << "Enter the length and the width of the ";
   cout << "second rectangle separated by a space. \n";
   cin >> length2 >> width2;
   area2 = length2 * width2;

   if (area1 > area2)
    cout << "The first rectangle is greater than the second.";
   else if (area2 > area1)
    cout << "The second rectangle is greater than the first.";
   else
    cout << "The two rectangle are equal.";

   return 0;
}
// ==================================================================================
// Chap 4 (7th Ed)
// Challenge 5: BODY MASS INDEX (BMI)
// By Josuel Musambaghani

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
   // Declaring local variables
   double weight, height, BMIndex, val;

   // Prompting the user to enter input values for the weight and height
   cout << "Enter, separated by a space,";
   cout << " your weight and your height: \n ";
   cin >> weight >> height;

   // Calculating and displaying BMI (Body Mass index) using
   // the formula BMI=(weight*703)/(height**2)

   BMIndex= weight * 703; 
   val = height * height; // I had lot of troubles multiplying height * 2 !!! unary error
   BMIndex= BMIndex / val;
   cout << "Your BMI is " << setprecision(2) << BMIndex;

   // Classifying the BMI
   if (18.5 <= BMIndex && BMIndex <= 25)
    cout << "Your BMI (" << BMIndex << ") is optimal.";
   else if (BMIndex < 18)
    cout << "You are underweight! \n ";
   else
    cout << "You are overweight! \n";

   return 0;
}

// ==================================================================================
// Chap 4 (7th Ed)
// Challenge 6: MASS AND WEIGHT
// By Josuel Musambaghani

#include <iostream>

using namespace std;

int main ()
{
   // Declaring local variables
   double mass, weight;

   // Prompt the user to enter a value for the mass and store it
   cout << "Enter the value of the mass: \n";
   cin >> mass;

   // Calculate and display the weight
   weight= mass * 9.8;
   cout << "The weight is \n" << weight << "newtons \n";

   // Judging the value of the weight using conditionals
   if (weight > 1000)
    cout << "Too heavy!";
   else if (weight < 10)
    cout << "Too light!";

   return 0;
}
// ==================================================================================
// Chap 4 (7th Ed)
// Challenge 7: TIME CALCULATOR
// By Josuel Musambaghani

#include <iostream>

using namespace std;

int main ()
{
   // declaring variables
   double seconds, minutes, hours, days;

   // Input by the user (prompts the user to enter a value in seconds)
   cout << "Enter a number of seconds to be converted: \n";
   cin >> seconds;

   // Some operations
   minutes=seconds/60.0;
   hours = seconds/3600.0;
   days= seconds/86400.0;

   // Conversion of the input
   if (seconds > 60)
    cout << "Minutes: " << minutes <<endl;
   if (seconds > 3600)
    cout << "Hours: " << hours << endl;
   if (seconds > 86400)
    cout << "Day(s): " << days << endl;

   return 0;
}
// ==================================================================================
// Chap 4 (7th Ed)
// Challenge 8: CHANGE FOR A DOLLAR GAME
// By Josuel Musambaghani

#include <iostream>

using namespace std;

int main ()
{
   // declaring variables
   double pennies, nickels, dimes, quarters, total;

   // Prompt users to enter the number of coins
   cout << "Enter the number of pennies: ";
   cin >> pennies;
   cout << "Enter the number of nickels: ";
   cin >> nickels;
   cout << "Enter the number of dimes: ";
   cin >> dimes;
   cout << "Enter the number of quarters: ";
   cin >> quarters;

   // Operations
   total = (dimes * 0.01) + (nickels * 0.05) + (dimes * 0.1) + (quarters * 0.25);

   // Display result of the game
   if (total > 1)
    cout << "Too high!";
   else if (total < 1)
    cout << "Too low!";
   else
    cout << "Wonderful, you won the game!!!";

   return 0;
}
// ==================================================================================
// Chap 4 (7th Ed)
// Challenge 9: MATH TUTOR
// By Josuel Musambaghani

#include <iostream>
#include <cstdlib> // for the use of rand()% variable
#include <iomanip> // for the use of setw() to format numbers

using namespace std;

int main ()
{
   // declaring variables
   int number1, number2, StudentAns, answer;

   // Display two random numbers
   number1 = 1+(rand()%1000);
   number2 = 1+(rand()%1000);
   cout << "Solve this problem: \n";
   cout << setw(6) << number1 << endl;
   cout << "+" << setw(5) << number2 << endl;
   cout << setw(6) << "---" << endl;
   cin >>  StudentAns;

   // Compare answer
   if (StudentAns == number1+number2)
    cout << "Congrats!";
   else
    {
        cout << "The correct answer is: \n";
        cout << setw(6) <<number1 << endl; // setw() run because of the header iomanip
        cout << "+" << setw(5) << number2 << endl; // it helps to format numbers on a same line
        cout << setw(6) << "---" << endl;
        cout << (number1+number2);
    }


   return 0;
}
// ==================================================================================
// Chap 4 (7th Ed)
// Challenge 10: SOFTWARE SALES
// By Josuel Musambaghani

#include <iostream>
#include <cstdlib> // for the use of rand()% variable
#include <iomanip> // for the use of setw() to format numbers

using namespace std;

int main ()
{
   // declaring variables
   int quantity;
   double discount1, discount2, discount3, discount4;

   // Prompt the user to enter the number of items purchased
   cout << "Enter the number of items purchased: \n";
   cin >> quantity;

   // More on variables
   discount1 = 99-(99 * 0.2); // discount1 correspond to the purchase from 10 to 19
   discount2 = 99-(99 * 0.3); // correspond to the purchase from 20 to 49
   discount3 = 99-(99 * 0.4); // correspond to the purchase from 50 to 99
   discount4 = 99-(99 * 0.5); // correspond to the purchase from 100 and above

   // Conditionals
   if (1 <= quantity && quantity < 10)
        cout << "The total cost of purchase is: $" << quantity * 99 << endl;
   else if (10 <= quantity && quantity <= 19)
    cout << "The total cost of purchase is: $" << quantity * discount1 << endl;
   else if (20 <= quantity && quantity <= 49)
    cout << "The total cost of purchase is: $" << quantity * discount2 << endl;
   else if (50 <= quantity && quantity <= 99)
    cout << "The total cost of purchase is: $" << quantity * discount3 << endl;
   else if (100 <= quantity)
    cout << "The total cost of purchase is: $" << quantity * discount4 << endl;

   return 0;
}
