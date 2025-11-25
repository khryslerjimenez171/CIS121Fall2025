#pragma once
#include <string>
using namespace std;

class membership
{
public:
    void member_first_name(string fname);
    string member_first_name();

    void member_last_name(string lname);
    string member_last_name();

    void member_age(int age);
    int member_age();

    void member_type(string type);
    string member_type();

    float membership_cost();

    membership();
    ~membership();

private:
    string m_first_name;
    string m_last_name;
    int m_age;
    string m_type;
    float m_cost;
};
void membership::member_first_name(string fname)
{
    m_first_name = fname;
}
string membership::member_first_name()
{
    return m_first_name;
}
void membership::member_last_name(string lname)
{
    m_last_name = lname;
}
string membership::member_last_name()
{
    return m_last_name;
}
void membership::member_age(int age)
{
    m_age = age;
}
int membership::member_age()
{
    return m_age;
}
void membership::member_type(string type)
{
    m_type = type;
}
string membership::member_type()
{
    return m_type;
}
float membership::membership_cost()
{
    if (m_type == "Gold")
        m_cost = 1200.00f;
    else if (m_type == "Silver")
        m_cost = 1000.00f;
    else
        m_cost = 500.00f;
    if (m_age > 50)
        m_cost *= 0.90f;

    return m_cost;
}


membership::membership()
{
    m_first_name = "Not Entered";
    m_last_name = "Not Entered";
    m_age = 18;
    m_type = "Bronze";
    m_cost = 0.00f;
}

membership::~membership()
{

}
