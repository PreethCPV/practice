#include <iostream>
using namespace std;
//creating a class
class employee{
    public:
    int salary,num;
    void getinfo(){
        cout<<"enter the salary: ";
        cin>>salary;
        cout<<"enter the number of working hours: ";
        cin>>num;
    }
    void addsal(){
        if (salary<500){
            salary+=10;
        }
    }
    int addwork(){
        if (num>6){
            salary+=5;
            
        }
        return salary;
        
    }
};
int main(){
    employee salary1;
    salary1.getinfo();
    salary1.addsal();
    cout<<"the final salary of the employee is:"<<salary1.addwork();
    return 0;   
}
