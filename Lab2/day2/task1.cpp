

#include<iostream>
using namespace std;
class information{
  char name[50],address[50];
  int roll,marks;
public:
  void getdetails(){
    cout<<"enter the name of Student:"<<endl;
    cin>>name;
    cout<<"enter the roll:"<<endl;
    cin>>roll;
    cout<<"enter the marks :"<<endl;
    cin>>marks;
    cout<<"enter the address:"<<endl;
    cin>>address;
  }
  void showdetails(){
cout<<"displaying information"<<endl;
      cout<<"name::"<<name<<endl;
           cout<<"roll::"<<roll<<endl;
                cout<<"marks::"<<marks<<endl;
                     cout<<"address::"<<address<<endl;

  }
};
int main(){
information p;
p.getdetails();
p.showdetails();
return 0;
}
