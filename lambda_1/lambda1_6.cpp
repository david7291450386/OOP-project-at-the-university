#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

class ExperimentalObject 
{
private:
    string label;
    int num;
    string status;
public:
    ExperimentalObject(string l = "", int n = 0, string s = "useless") : label(l),
    num(n), status(s) {}
    string getLabel() { return label; }
    int getNum() { return num; }
    string getStatus() { return status; }
    void setLabel(string label);
    void setNum(int num);
    void setStatus(string status);
    friend ostream& operator<<(ostream& os, ExperimentalObject& obj);
};

void ExperimentalObject::setLabel(string label)
    this -> label = label;

void ExperimentalObject::setNum(int num)
     this -> num = num;

void ExperimentalObject::setStatus(string status)
    this -> status = status;


ostream& operator<<(ostream& os, ExperimentalObject& obj) 
{
    os << obj.getLabel() << " " << obj.getNum() << " " << obj.getStatus();
    return os;
}

int main() 
{
    int n;
    cin >> n;
    vector<ExperimentalObject> vec;

    for (int i = 0; i < n; ++i) 
    {
        string lab, status;
        int num;
        cin >> lab >> num >> status;
        vec.emplace_back(lab, num, status);
    }

    auto it = find_if(vec.begin(), vec.end(), [](ExperimentalObject& obj) 
    {
        return obj.getStatus() == "use";
    });
    if (it != vec.end())
        cout << *it << endl;
    else
        cout << "ALL OBJECTS ARE USELESS" << endl;

    return 0;
}