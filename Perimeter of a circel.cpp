#include<iostream>
using namespace std;

	class Circle{
	public:
		void circlePerimeter(int radius){
			float pi = 3.142;
			
			int perimeter = 2*pi*radius;
			cout<<"The perimeter is"<<perimeter<<endl;
		}	
	};

int main(){
	Circle myCircle;
	int rad;
	cout<<"Enter your Radius "<<endl;
	cin>>rad;
	myCircle.circlePerimeter(rad);
	system("PAUSE");
	return 0;
}
