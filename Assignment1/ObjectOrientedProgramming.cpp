#include <bits/stdc++.h>
using namespace std;

class organisers
{
    public:
        string studentID;
        string username;
        string name;
        int age;
        string mobileNumber;

        void display_basic()
        {
            cout<<"The details are as follows: "<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Mobile Number: "<<mobileNumber<<endl;
        }
};


class coreMembers: public organisers
{
    private:
        string password;

    public:
        string areaOfSpecialization;
        vector <string> coordinators;
       
        void display()
        {
            display_basic();
            cout<<"Area of Specialization: "<<areaOfSpecialization<<endl;

            cout<<"The names of the coordinators under the Core Member are: "<<endl;

            for(int i=0; i<coordinators.size(); i++)
            {
                cout<<i+1<<") ";
                cout<<coordinators[i]<<endl;
            }
        }
};


class workforce: public organisers
{
    private:
        string password;
    
    public:
        vector <string> coordinators_you_report_to;
        vector <string> activities;

        void display()
        {
            display_basic();
            cout<<"Activities you are a part of: "<<endl;
            for(int i=0; i<activities.size(); i++)
            {
                cout<<i+1<<") ";
                cout<<activities[i]<<endl;
            }

            cout<<"Coordinators you report to: "<<endl;
            for(int i=0; i<coordinators_you_report_to.size(); i++)
            {
                cout<<i+1<<") ";
                cout<<coordinators_you_report_to[i]<<endl;
            }
        }
};


int main()
{
    //Instantiating the classes
}

