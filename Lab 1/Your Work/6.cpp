
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

struct Address
{
    string city;
    int zipcode;
};

struct Student{
        int id;
        string name;
        Address studentAddress;

};

int main()
{
    Student s1;
    s1.id=101;
    s1.name="Rahim";
    s1.studentAddress.city="Sylhet";
    s1.studentAddress.zipcode= 3100;

    cout<<s1.name<<" lives in "<<s1.studentAddress.city<<endl;
    return 0;
}
