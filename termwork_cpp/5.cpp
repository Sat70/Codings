#include<iostream>
using namespace std;
class student
{
    private:
        int scores[5];
        int AnnaMarks;
        string name;
    public:
        void input();
        int calculateTotalScore();
};
void student::input()
{
    AnnaMarks=450;
    cout<<"\n";
    cout<<"Enter the student scores : ";
    for(int i=0;i<5;i++)
    {
        cin>>scores[i];
    }
    cout<<"\n";
    getchar();
    cout<<"Enter the name of the students :";
    cin>>name;
}
int student::calculateTotalScore()
{
    int total=0;
    for(int i=0;i<5;i++)
    {
        total=total+scores[i];
    }
    if(total>AnnaMarks)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    cout<<"\n";
    int n;
    cout<<"Enter the number of student :";
    cin>>n;
    student obj[n];
    for(int i=0;i<n;i++)
    {
        obj[i].input();
    }
    int num_of_students_socred_more=0;
    for(int i=0;i<n;i++)
    {
        num_of_students_socred_more=num_of_students_socred_more+obj[i].calculateTotalScore();
    }
    cout<<"\n";
    cout<<"The number of students getting more than Anna is : "<<num_of_students_socred_more;
    return 0;
}