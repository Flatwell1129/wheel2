#include<iostream>
using namespace std;
int main(){
        double velocity=100;// 単位 mm/s 
        double velocityR=0;
        double velocityL=0;
        double tgtheta=405;/*目標角 単位 度*/
        double radius=73.5;/*単位 mm*/
        int count=0;
        double omega=0;
        double time=0;
        double lR=0;
        double lL=0;
        double l=0;
        double theta=0;
	double intheta=0;
        cout<<"速度(mm/s)";
        cin>>velocity;
        cout<<"目標角( °)";
        cin>>intheta;
        cout<<"旋回半径(mm)";
        cin>>radius;
	tgtheta=intheta*2;
        if (tgtheta > 0){
                count = tgtheta/90;
                count = count+1;
                theta = tgtheta/count;
                l=radius*2*3.14159265358979323846264338327950288*(theta/360);
                time=l/velocity;
                lL=((radius+73.5)*2*3.14159265358979323846264338327950288)*(theta/360);
                lR=((radius-73.5)*2*3.14159265358979323846264338327950288)*(theta/360);
                velocityL=lL/time;
                velocityR=lR/time;
                time = time*count;
        }
	if (tgtheta < 0){
                tgtheta=-1*tgtheta;
                count = tgtheta/90;
                count = count+1;
                theta = tgtheta/count;
                l=radius*2*3.14159265358979323846264338327950288*(theta/360);
                time=l/velocity;
                lL=((radius-73.5)*2*3.14159265358979323846264338327950288)*(theta/360);
                lR=((radius+73.5)*2*3.14159265358979323846264338327950288)*(theta/360);
                velocityL=lL/time;
                velocityR=lR/time;
                time = time*count;
        }
	else if (tgtheta == 0){
                velocityL = velocity;
                velocityR = velocity;
	}
	cout<<"速度"<<velocity<<"角度"<<tgtheta<<"旋回半径"<<radius<<endl;
        cout<<"左輪"<<velocityL<<"右輪"<<velocityR<<endl;
        cout<<"継続時間"<<time<<endl;

}
