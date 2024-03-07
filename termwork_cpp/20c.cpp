#include<iostream>
using namespace std;
class Employee
{
    private : 
        string name;
        int emp_id;
        int dept_id;
    public:
        void getDate()
        {
            cout<<"Enter the employee id : ";
            cin>>emp_id;
            cout<<"\n"<<"Enter the department id : ";
            cin>>dept_id;
            getchar();
            cout<<"\n"<<"Enter the employee name : ";
            getline(cin,name);
        }
        void print()
        {
            try
            {
                if(name[0]>=97 && name[0]<=122)
                {
                    throw(name);
                }
                else if(emp_id<2001 || emp_id>5001)
                {
                    throw(emp_id);
                }
                else if(dept_id<1 || dept_id>5)
                {
                    throw('a');
                }
                else{
                    cout<<"\n"<<"The name is : "<<name;
                    cout<<"\n"<<"The employee id is : "<<emp_id;
                    cout<<"\n"<<"The department id is : "<<dept_id;
                }
            }
            catch(string name)
            {
                cout<<"\n"<<"Exception Raised...\nFirst letter of the name should be in capital letter.";
            }
            catch(int emp_id)
            {
                cout<<"\n"<<"Exception Raised...\nEmployee id should be between 2001 to 5001.";
            }
            catch(...)
            {
                cout<<"\n"<<"Exception Raised...\nDepartment id should be between 1 to 5.";
            }
        }
};
int main()
{
    Employee emp;
    emp.getDate();
    emp.print();
    return 0;
}