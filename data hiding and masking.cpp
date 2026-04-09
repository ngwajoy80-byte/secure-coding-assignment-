#include <iostream>
using namespace std;
class data{
	string password; //hidden data
	
	public:
		void setPassword(string p){
			password = p;
		}
		void mask(){
			for(int i = 0; i <password.length();i++)
			cout << "*";
		}
};
int main(){
	data d;
	d.setPassword("mypassword");
	d.mask();
	return 0;
}