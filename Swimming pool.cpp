#include<iostream>
using namespace std;

class SwimmingPool{
	private:
		double length,width,depth,rate1,rate2;
		
	public:
		SwimmingPool(double l, double w, double d, double r1, double r2){
			length = l;
			width =  w;
			depth = d;
			rate1 = r1;
			rate2 = r2;
		}		
		double fill(){
			return length*width*depth;
		}
		double timetoe(){
			return (length*width*depth)/rate1 - rate2;
			
		}
};

int main(){
	double ls;
	double ws;
	double ds;
	double r1s;
	double r2s;
	
	cout<<"input length of the pool"<<endl;
	cin>>ls;
	cout<<"input width of the pool"<<endl;
	cin>>ws;
	cout<<"input depth of the pool"<<endl;
	cin>>ds;
	cout<<"input first rate of the pool"<<endl;
	cin>>r1s;
	cout<<"input second rate of the pool"<<endl;
	cin>>r2s;
	SwimmingPool obj(ls, ws, ds, r1s, r2s);
	cout<<"The volume of the pool is"<<obj.fill()<<endl;
	cout<<"The rate at which water enters the pool is "<<obj.timetoe()<<endl;
}
