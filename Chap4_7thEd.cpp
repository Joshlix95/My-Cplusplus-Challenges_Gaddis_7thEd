// Chap 4 (7th Ed)
// Challenge 1: MINIMUM/MAXIMUM
// By Josuel Musambaghani

#include <iostream>
using namespace std;

int main ()
{
   int num1;
   int num2;
   cout << "Enter a number: ";
   cin >> num1;

   cout << "Enter another number: ";
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

   if (month*day != year)
    cout << "The date " << month <<"/" << day << "/" << year << " is not magic";

   else
    cout << "The date " << month <<"/" << day << "/" << year << " is magic";

   return 0;
}
// ==================================================================================
// Chap 4 (7th Ed)
// Challenge 4: AREAS OF RECTANGLE
// By Josuel Musambaghani

#include <iostream>
using namespace std;

int main ()
{
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
   val = height * height; // I had lot of troubles multiplying height * 2 ... unary error
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
