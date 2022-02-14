#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

/* 
In this lab you will write a factorial function using recursion
For example:
if n = 5
5! = 5 *4 *3 *2 *1 = 120
1 ) Create num.txt with the following contents
    5
    2
    7
2 ) Read num.txt
3 ) Calculate the factorial of each number you read from num.txt
4 ) Print the factorial of each number to the user in the following format
  5! = 120
  2! = 2
  7! = 5040
*/


int factorial(int num) //factorial function
{
  if (num == 0) //base case so that the recursion knows when to stop
  {
    return 1;
  }
  else
  {
    return num*(factorial(num-1)); 
  }
}


int main()
{
  int number; //string variable to hold the numbers in the num.txt file
  ifstream reader; //ifstream variable
  reader.open("num.txt"); //opening the file
  int func_call; //calling function while converting the string number variable into an int.
  for(int i = 0; i < 3; i++)
  {
    reader >> number; //storing the numbers within a variable
    func_call = factorial(number);  
    cout << number << "! = " << func_call << endl; //formatting output  
  } 
  return 0;
}

