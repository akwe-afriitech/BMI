
#include<iostream>
using namespace std;

int main()
{

float bmi,w,h,x;
cout<<"Please Enter your weight in kilograms : ";
    cin>>w;
cout<<"Please Enter your Height in meters : ";
    cin>>h;
bmi=(w)/(h*h);
cout<<"Your BMI is : "<<bmi<<endl;

if(bmi<25 && bmi>20)
    cout<<"normal weight "<<endl;
else if(bmi<18.5)
    cout<<"Underweight "<<endl;
else
x=bmi-25 ;
    cout<<"you need to loose : "<<x<<"kgs"<<endl;

return 0;
}
