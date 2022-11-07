#include <bits/stdc++.h>
using namespace std;

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

