#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


class ExperimentalObject 
{
private:
    std::string label;
    int num;
public:
    ExperimentalObject(std::string l="", int n = 0): label(l), num(n) {}
    std::string getLabel() { return label; }
    int getNum() { return num; }
    void setLabel(std::string label);
    void setNum(int num);
};


void ExperimentalObject::setLabel(std::string label)
    this->label = label;

void ExperimentalObject::setNum(int num)
    this->num = num;

int main() 
{
    int n;
    std::cin >> n;
    std::vector<ExperimentalObject> vec;

    for (int i = 0; i < n; ++i) 
    {
        std::string label;
        int num;
        std::cin >> label >> num;
        vec.emplace_back(label, num);
    }

    char l, r;
    std::cin >> l >> r;

    int count = count_if(vec.begin(), vec.end(), [l, r](ExperimentalObject& obj) 
        {
        char first = obj.getLabel()[0];
        return first >= l && first <= r;
        }
    );
    std::cout << count << std::endl;

    return 0;
}