 #include <iostream>
 using namespace std;
 int main(){
 	int d, m, y;
 	cout<<"enter easter date:";
 	cin>> d >> m >> y;
 	
 	d += 49;
 	
 	if (d>30){
 		d -= 30;
 		m++;
	 }
	 cout<<"pentecost:"<< d << "/" << m << "/" << y;
	 }
 