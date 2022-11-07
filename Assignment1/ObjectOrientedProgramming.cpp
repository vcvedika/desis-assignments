#include <bits/stdc++.h>
using namespace std;
class organisers{
    public:
        string studentID;
        string username;
        string name;
        int age;
        string mobileNumber;
        void display_basic(){
            cout<<"The details are as follows: "<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Mobile Number: "<<mobileNumber<<endl;
        }
}
class organisers: public workforce{
    public:
        vector <string> coordinators_you_report_to;
        vector<string> activities;
    private:
        string password;
        void display(){
            display_basic();
            cout<<"Activities you are a part of: "<<endl;
            for(int i=0; i<activities.size(); i++){
            cout<<i+1<<") ";
            cout<<activities[i]<<endl;
            }
            cout<<"Coordinators you report to: "<<endl;
            for(int i=0; i<coordinators_you_report_to.size(); i++){
            cout<<i+1<<") ";
            cout<<coordinators_you_report_to[i]<<endl;
            }
        }
}

//Class of Core Members
class coreMembers
{
    //access specifier
    private:

    //data members
    string password;
    
    //access specifier
    public:

    //data members
    string coreMemberID;
    string username;
    string name;
    int age;
    string mobileNumber;
    string areaOfSpecialization;
    vector <string> coordinators;

    //member functions
    void displayDetails()
    {
        cout<<"The details are as follows: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Mobile Number: "<<mobileNumber<<endl;
        cout<<"Area of Specialization: "<<areaOfSpecialization<<endl;

        cout<<"The names of the coordinators under the Core Member are: "<<endl;
        
        for(int i=0; i<coordinators.size(); i++)
        {
            cout<<i+1<<") ";
            cout<<coordinators[i]<<endl;
        }
    }
};


int main()
{
    //Instantiating the classes
}

