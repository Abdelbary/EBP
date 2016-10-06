/*
            project1 : the sum of these two integer variables and print the result
 */


#include <iostream>

using namespace std;

int main()
{
    int number1 ;                                      //declaration for first number his type is integer
    int number2 ;                                     //declaration for second number his type is integer
    int result  ;                                     //declaration for result his type is integer as well

    number1 = 10 ;                           //definition number1 equal to 10
    number2 = 20 ;                          //definition number2 equal to 20
    result  = number1 + number2 ;          //result equal to addition of number1 and number2

    cout <<result;
    return 0;
}

***********************************************************************************************************************************************************



/*
	project2 : Read 2 integer values and store them in variables, named number1 and number2 and make the product of these two variables, 
	assigning its result to the variable result and Print result 
*/

#include<iostream>
using namespace std;

int main()
{
    int number1 ;                                      //declaration for first number his type is integer
    int number2 ;                                     //declaration for second number his type is integer
    int result  ;                                    //declaration for result his type is integer as well
    
	cout<<"enter the value of number1,please ";     //print this message then enter any integer value
	cin>>number1;                                  
	
	cout<<"enter the value of number2,please ";    //print this message then enter any integer value
	cin>>number2;
	
    result  = number1 * number2 ;          //result equal to addition of number1 and number2
    cout<<"result = ";
    cout <<result;
    return 0;
}

**************************************************************************************************************************************************************

/*
	project3 : calculate area of a square
*/



#include<iostream>
using namespace std;

int main()
{
    float length ;                       //declaration for length of square his type is float
	float area ;                        //declaration for area of square his type is float
    cout<<"enter length of square ";   // print message to user 
    cin >> length ;                             

   
    area = length * 4 ;                 // equation to calculate value of area 
    
    cout<<"area = ";                    // print this message  
                        
    cout<<area;                        //  print value of area 
    return 0;
}


**************************************************************************************************************************************************************

/*
    project4 : calculate area of a circle
*/

#include<iostream>
using namespace std;

int main()
{
    float radius ;                                    //declaration for length of square his type is float
    float area ;                                     //declaration for area of square his type is float
    cout<<"enter radius of circle ";                // print message to user
    cin >> radius ;

    const float PI = 3.14;                         //definition constant name PI equal 3.14


    area = PI * radius * radius;                 // equation to calculate value of area

    cout<<"area = ";                            // print this message

    cout<<area;                               //  print value of area
    return 0;
}


**************************************************************************************************************************************************************

/*
   project5 : Convert temperature from degree centigrade to Fahrenheit
*/

#include <iostream>

using namespace std;

int main()
 {
     // declaration variables
	float celsius;
	float fahrenheit;

	cout<< "Enter temp in Celsius :      ";
	cin >> celsius;
    
	fahrenheit = (1.8 * celsius) + 32;  // equation to get fahrenheit
	cout<<"Temperature in Fahrenheit :  ";
    cout<< fahrenheit;

	return (0);
}

**************************************************************************************************************************************************************

/*
   project6 : calculate quotient and Modulus
                example
                        9 / 4
                        quotient = 2   -> 9 / 4
                        Modulus  = 1   -> 9 % 4
*/

#include<iostream>

 using namespace std;

int main()
 {
     // declaration all variables
        int number  ;
        int Divisor ;
        int Quotient;
        int Modulus ;
        cout << "enter Number  : ";
        cin >> number;

        cout << "enter divisor : ";
        cin >> Divisor;

        Quotient = number / Divisor ;
        Modulus  = number % Divisor ;

        cout << "Quotient = ";
        cout << Quotient<<endl;
        cout << "Modulus  = ";
        cout << Modulus;

   return (0);
}


**************************************************************************************************************************************************************


/*
   project7 : calculate sum of 5 subjects and find percentage
*/

#include<iostream>

 using namespace std;

int main()
 {
     // declaration all variables

   int subject1;
   int subject2;
   int subject3;
   int subject4;
   int subject5;
   int sum;
   int total = 500;
   float percentage;

   cout<< "Enter marks of subject1 : ";
   cin>>subject1;

   cout<< "Enter marks of subject2 : ";
   cin>>subject2;

   cout<< "Enter marks of subject3 : ";
   cin>>subject3;

   cout<< "Enter marks of subject4 : ";
   cin>>subject4;

   cout<< "Enter marks of subject5 : ";
   cin>>subject5;



   sum = subject1 + subject2 + subject3 + subject4 + subject5;

   cout<< "Sum = ";
   cout<< sum <<endl;

   percentage = (sum * 100) / total;
   cout <<"Percentage = ";
   cout<<percentage;
   cout<<"%";

   return (0);
}

**************************************************************************************************************************************************************

/*
    project8 :  obtain solution of second order quadratic equation
                 general format : ax^2 + bx + c
                 example
                        x^2 + 4*x + 4
                        you should enter 1 for a
                            , 4 for b and 4 for c
                    root1 = -2
                    root2 = -2
*/

#include<iostream>
#include<math.h>

using namespace std;
int main()
 {
     // declaration for all variables
   float a;
   float b;
   float c;
   float desc;
   float root1;
   float root2;

   cout << "Enter the Values of a : ";
   cin >> a;

   cout << "Enter the Values of b : ";
   cin >> b;

   cout << "Enter the Values of c : ";
   cin >> c;

   desc = sqrt(b * b - 4 * a * c);      // sqrt get the square root of this equation 

   root1 = (-b + desc) / (2.0 * a);
   root2 = (-b - desc) / (2.0 * a);

    cout<<"root1= ";
    cout<<root1<<endl;    // (endl) mean end line
    cout<<"root2= ";      // so this message will be started from new line
    cout<<root2;

   return 0;
}