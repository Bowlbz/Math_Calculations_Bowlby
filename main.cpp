//Input Process Output EC COSC 1436 57005
//Bowlby, Teacher: Dr_T 9-7-2019

/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
using namespace std;

// Declared Types & Variables for program

double ADD(double,double,double);//function prototype
double SUB(double,double);//function prototype
double MULTI(double,double,double);//function prototype
double DIVID(double,double,double);//function prototype
int MOD(int,int);//function prototype
void yourAnswers();


int main()
{
double Num1 = 0.0, Num2 = 0.0;//declared Variables
int Num3 = 0, Num4 = 0;//declared Variables
char Exit = '\0';

do
{


      cout << "\x1b[33;4mThis program will Add, Subtract, Multiply and Divide Num1 & Num2, and Modulus Num3 & Num4.\x1b[0m\n " << endl;
      cout << "\n\x1b[92;4mPlease Enter Num1:\x1b[0m " << endl;
      validateDouble (Num1);
      cout << "\n\x1b[92;4mPlease Enter Num2:\x1b[0m " << endl;
      validateDouble (Num2);
    do
    {  
      if(Num2 == 0)
      {
        cout << "\n\x1b[31;3mYou can not Divide by 0\x1b[0m " << endl;
        cout << "\x1b[31;3mPlease re-enter Num2 :\x1b[0m " << endl;
        validateDouble (Num2);
      }
    }while(Num2 == 0);//Loop until Num2 is not 0
      
      cout << "\n\x1b[92;4mPlease Enter Num3:\x1b[0m " << endl;
      validateInt (Num3);
      
      cout << "\n\x1b[92;4mPlease Enter Num4:\x1b[0m " << endl;
      validateInt (Num4);
    do
    {  
      if(Num4 == 0)
      {
        cout << "\n\x1b[31;3mYou can not Divide by 0\x1b[0m " << endl;
        cout << "\x1b[31;3mPlease re-enter Num4 :\x1b[0m " << endl;
        validateInt (Num4);
      }
    }while(Num4 == 0);//Loop until Num4 is not 0


  yourAnswers();

  //Output to user
  cout << "Addition :" <<Num1 << "+" << Num2 << "+"<< Num1 << " = " <<ADD(Num1,Num2,Num1) << endl;
  
  cout << "Subtraction : " <<Num1 << "-" << Num2 << " = " << SUB(Num1,Num2) << endl;
  
  cout << "Multiplication : " << Num1 << "*" << Num2 << "*" << Num2 << " = " << MULTI(Num1, Num2, Num2) << endl;
  
  cout << "Divison : (" <<Num1 << "/" <<Num2 <<")/ " << Num1 << " = " << DIVID(Num1,Num2,Num1) << endl;
  
  cout << "Modulus : "<< Num3 << "%" << Num4 << " = " << MOD(Num3, Num4) << endl;

  //Loop Exit Option
  cout << "\n\x1b[36;1mWould you like to run some new Numbers?\x1b[0m (y/n) " << endl;
  cin >> Exit;


}while (Exit == 'y' || Exit == 'Y'); 
cout << "\n\x1b[93;1mHave a Nice Day !!!\x1b[0m" << endl;

  return 0;
}

// FUNCTIONS AND DEFINITIONS
double ADD(double x, double y, double z)
{
  double answer = x + y + z;
  return answer;
}
double SUB(double x, double y)
{
  double answer = x - y;
  return answer;
}
double MULTI(double x,double y,double z)
{
  double answer = x * y * z;
  return answer;
}
double DIVID(double x, double y, double z)
{
  double answer = ((x / y) / z);
  return answer;
}
int MOD(int x, int y)
{
  int answer = x % y;
  return answer;
}

void yourAnswers()
  {
    for(int a = 0;a <= 5; a++)
    {
      cout << "\x1b[93;1m*\x1b[31;1m\n"; 
    }
    cout << endl;

  }


