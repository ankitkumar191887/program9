#include<iostream>
#include<math.h>
using namespace std;
class Power{
	private:
		double base;
		double power;
	public:
		// parmeterised constructor
        Power(double a,double b ){

			base=a;
			power=b;
			cout<<"store the value of a and b in base and power respectively"<<endl;
		}
		Power()     //overloading  constructor with no parameters
         {
         	cout<<"power = 0"<<endl;
		 }
		Power(double a)       // overloading  constructor with two parameters
				{
		double b=2;
			cout<<"power of "<<a<<" with deafult power "<<b<<" = "<<pow(a,b)<<endl;
		}
		Power(Power &obj)  //copy constructor
		{
			base=obj.base;
			power=obj.power;


			cout<<"power of "<<base<<" with power "<<power<<" = "<<pow(base,power)<<endl;

		}

};
int main(){

   double x,y;
   cout<<"enter base and power seprate with space"<<endl;
   cin>>x>>y;
   cout<<"when no argument pass"<<endl;
   Power p;
cout<<"-----------------"<<endl;
   cout<<"when one argument passed"<<endl;
   Power p1(x);
   cout<<"-----------------"<<endl<<"when two argument passed"<<endl;
   Power p3(x,y);
   cout<<"-----------------"<<endl;
   cout<<"copy constructoe call"<<endl;
   Power p4=p3;
}
