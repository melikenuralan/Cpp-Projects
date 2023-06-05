#include<iostream>
using namespace std;
class fall{
	private:
		int time;
		int speed;
	public:
		//constructors
		fall();
		fall(int t,int vo);
		fall(fall &r);
		void setTime(int t){t>0?time=t:time=1;}
		void setSpeed(int vo){vo>0?speed=vo:speed=1;}
		int getTime(){return time;}
		int getSpeed(){return speed;}
		double freeFall(int t,int vo);
		void freeFallcall(int t,int vo);
		
};
fall::fall(){
	time=1;
	speed=1;
}
fall::fall(int t,int vo){
	time=t;
	speed=vo;
}
fall::fall(fall &r){
	time=r.time;
	speed=r.speed;
}
double fall::freeFall(int t,int vo)
{
	const float g=10.0;
	double result=0;
	result=0.5*(g*t*t);
	if(vo!=0)
	{
		result+=vo*t;
		return result;
	}else
	
		
		 return result;
}

void fall::freeFallcall(int t,int vo)
{
	double height = freeFall(t,vo);
	cout << height << endl;
}

int main()
{
	fall f;
	int t;
	int vo;
    cout << "Enter time: ";
    cin >> t;
    cout<<"Enter first speed : ";
    cin>>vo;
	f.freeFallcall(t,vo);
}
