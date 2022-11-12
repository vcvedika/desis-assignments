#include <bits/stdc++.h>
using namespace std;

class participant
{
private:
    string password;
    string name;
    string registrationID;
    vector<string> events;
    string mobileNumber;
    int year;
    string mailID;

public:
    participant(string name, string registrationID, vector<string> events, string MobNo, int y, string email)
    {
        this->name = name;
        this->registrationID = registrationID;
        events = events;
        mobileNumber = MobNo;
        year = y;
        mailID = email;
    }

    void displayInfo()
    {
        cout << "The participant details are as follows: " << endl;
        cout << "Name: " << name << endl;
        cout << "Registration ID: " << registrationID << endl;
        cout << "Year: " << year << endl;
        cout << "Mobile number: " << mobileNumber << endl;
        cout << "Mail ID: " << mailID << endl;
        cout << "The names of the events registered for are: " << endl;
        for (int i = 0; i < events.size(); i++)
        {
            cout << i + 1 << ") ";
            cout << events[i] << endl;
        }
    }

    void setPassword(string pswrd)
    {
        password = pswrd;
    }
};

class organisers
{
protected:
    string studentID;
    string username;
    string name;
    int age;
    string mobileNumber;
    string password;
    vector<string> activities;

    organisers() {}

    void displayInfoOrg()
    {
        cout << "The details are as follows: " << endl;
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
    coreMembers(string areaOfSpecialization, vector<string> &coords)
    {
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
    workforce(vector<string> &coords, vector<string> &activity)
    {
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

    coordinator(vector<string> &cores, vector<string> &activity, vector<string> &workers)
    {
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
    cout << "Welcome to our College Fest!!";
}
