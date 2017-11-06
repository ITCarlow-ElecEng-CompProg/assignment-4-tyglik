/** Electrical resistance of wire
 *
 * Martina Nunvarova
 * 25/9/2017
 */

//includes
#include <iostream>
#include <iomanip>

//define PI
#define PI 3.141592654

//default namespace
using namespace std;

//get a number function, to avoid 3 do-whiles in main()
double getNo(string prompt)
{
    double no=0;            //temporary number
    do {                    //cycle
        cout << prompt;     //prompt the user
        cin>>no;            //read in the answer
        if (no<=0)          //if it's less or = 0 politely refuse
            cout <<"This is an invalid input, please try again"<<endl;

    } while (no<=0);        //keep repeating until the number is positive
    return no;              //return the VALID answer
}

//main function
int main()
{
    double l,r,rho; //declare the variables

    cout<<"Wire resistivity calculator"<<endl<<endl;    //What's this?

    rho=getNo("Enter the resistivity [Ohm*m]:");    //request resistivity
    r=getNo("Enter the wire radius [m]:");          //request radius
    l=getNo("Enter the wire length [m]:");          //request length

    //set decimal point precision
    cout.precision(3);
    //answer, calculation in-line
    cout << "Resistance of "<<l<<"m of "<<r<<"m radius wire is "<<fixed<< l*rho/(PI*r*r)<<" Ohm"<< endl;
    //return to OS - no errors
    return 0;
}
