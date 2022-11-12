#include <vector>
#include <string>
#include <iostream>
using namespace std;

class participant
{
private:
    string password;

public:
    string name;
    string registrationID;
    // vector <string> events;
    const char *events[5] = {"Prayer Ceremony", "Orientation", "Dance", "Do's and Don't", "Conclusion"};
    string mobileNumber;
    int year;
    string mailID;

    participant(string registrationID, string name, string MobNo, int y, string email)
    {
        this->name = name;
        this->registrationID = registrationID;
        mobileNumber = MobNo;
        year = y;
        mailID = email;
    }

    void setPassword(string pswrd)
    {
        password = pswrd;
    }

    void displayInfo()
    {
        cout << "The participant details are as follows: " << endl;
        cout << "Name: " << name << endl;
        cout << "Registration ID: " << registrationID << endl;
        cout << "Year: " << year << endl;
        cout << "Mobile number: " << mobileNumber << endl;
        cout << "Mail ID: " << mailID << endl;
        cout << "Your password is " << password << endl;
        cout << "The names of the events registered for are: " << endl;

        for (int i = 0; i < 5; i++)
        {
            cout << events[i] << endl;
        }
    }
};

class organisers
{
protected:
    string studentID;
    string name;
    int age;
    string mobileNumber;
    string password;
    vector<string> activities;

public:
    organisers() {}

    void displayInfoOrg()
    {
        cout << "The details are as follows: " << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Mobile Number: " << mobileNumber << endl;
    }

    void setPassword(string pswrd)
    {
        password = pswrd;
    }
};

class coreMembers : public organisers
{
private:
    vector<string> coordinators; // try using class coordinator

public:
    coreMembers(string studID, string n, int a, string phno, string areaOfSpecialization, vector<string> &coords)
    {
        studentID = studID;
        name = n;
        age = a;
        mobileNumber = phno;
        activities[0] = areaOfSpecialization;
        coordinators = coords;
    }

    void displayInfo()
    {
        displayInfoOrg();
        cout << "Area of Specialization: " << activities[0] << endl;
        cout << "The names of the coordinators under the Core Member are: " << endl;
        for (int i = 0; i < coordinators.size(); i++)
        {
            cout << i + 1 << ") ";
            cout << coordinators[i] << endl;
        }
    }
};

class workforce : public organisers
{
private:
    vector<string> coordinators_you_report_to;

public:
    workforce(string studID, string n, int a, string phno, vector<string> &coords, vector<string> &activity)
    {
        studentID = studID;
        name = n;
        age = a;
        mobileNumber = phno;
        activities = activity;
        coordinators_you_report_to = coords;
    }

    void displayInfo()
    {
        displayInfoOrg();
        cout << "Activities you are a part of: " << endl;
        for (int i = 0; i < activities.size(); i++)
        {
            cout << i + 1 << ") ";
            cout << activities[i] << endl;
        }

        cout << "Coordinators you report to: " << endl;
        for (int i = 0; i < coordinators_you_report_to.size(); i++)
        {
            cout << i + 1 << ") ";
            cout << coordinators_you_report_to[i] << endl;
        }
    }
};

class coordinator : public organisers
{
private:
    vector<string> core_members_you_report_to;
    vector<string> workforce_under_you;

public:
    coordinator(string studID, string n, int a, string phno, vector<string> &cores, vector<string> &activity, vector<string> &workers)
    {
        studentID = studID;
        name = n;
        age = a;
        mobileNumber = phno;
        core_members_you_report_to = cores;
        workforce_under_you = workers;
        activities = activity;
    }

    void displayInfo()
    {
        displayInfoOrg();
        cout << "Activities you are a part of: " << endl;
        for (int i = 0; i < activities.size(); i++)
        {
            cout << i + 1 << ") ";
            cout << activities[i] << endl;
        }

        cout << "Core Members you report to: " << endl;
        for (int i = 0; i < core_members_you_report_to.size(); i++)
        {
            cout << i + 1 << ") ";
            cout << core_members_you_report_to[i] << endl;
        }

        cout << "Workforce working under you: " << endl;
        for (int i = 0; i < workforce_under_you.size(); i++)
        {
            cout << i + 1 << ") ";
            cout << workforce_under_you[i] << endl;
        }
    }
};

int main()
{
    cout << "Welcome to our event" << endl;
    cout << "D. E. Shaw & Co., L.P. is a multinational investment management firm founded in 1988 by David E. Shaw and based in New York City" << endl;
    cout << "The company is known for developing complicated mathematical models and sophisticated computer programs to exploit anomalies in the financial market." << endl;

    // participants
    participant participants("EHo0467", "imaname1", "9999999999", 2021, "imanemail@email.com");
    participants.setPassword("IAMPASSWORD1");
    participants.displayInfo();
    cout << endl;

    vector<string> activitieslist;
    activitieslist = {"Preconference WorkShop ", "Consortia General Sessions", "Esummit Orientation"};

    // workforces
    vector<string> coordinators_you_report_to;
    coordinators_you_report_to = {"Mr Vivek", "Miss Harshitha", "Miss Shalini", "Mr. Madhukiran"};
    workforce workforcemember("EHo0468", "imaname2", 20, "9999999999", coordinators_you_report_to, activitieslist);
    workforcemember.setPassword("IAMPASSWORD2");
    workforcemember.displayInfo();
    cout << endl;

    // coordinators
    vector<string> coreMembers_name = {"Mrs Shah", "Mr Rahul", "Miss John"};
    vector<string> workforce_under_you = {"Hardik", "Parth", "Palash"};
    coordinator coordinator1("EHo0469", "imaname3", 20, "9999999999", coreMembers_name, activitieslist, workforce_under_you);
    coordinator1.setPassword("IAMPASSWORD3");
    coordinator1.displayInfo();
    cout << endl;

    // coreMembers
    string arOfSpec = "Public Relations";
    vector<string> coordMember_name = {"Miss Vedika", "Miss Saoumi", "Miss Astha", "Miss Dakshitha"};
    coreMembers coreMembers1("EHo0470", "imaname4", 20, "9999999999", arOfSpec, coordMember_name);
    coreMembers1.setPassword("IAMPASSWORD3");
    coreMembers1.displayInfo();
    cout << endl;
}
