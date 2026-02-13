#include <iostream>
#include <vector>
#include <string>


class ExperimentalObject 
{
private:
    std::string label;
    int num;
public:
    ExperimentalObject(std::string _label = "", int _num = 0) : label(_label), num(_num) {}
    std::string getLabel() { return label; }
    int getNum() { return num; }
    void setLabel(std::string label);
    void setNum(int num);
};

void ExperimentalObject::setLabel(std::string label) 
    this -> label = label;

void ExperimentalObject::setNum(int num)
    this -> num = num;

int main() 
{
    std::string lab;
    int num;
    std::cin >> lab >> num;
    ExperimentalObject obj1(lab, num);

    auto show_obj = [](ExperimentalObject item) {
        if (std::to_string(item.getNum()).length() >= 3)
            std::cout << item.getLabel() << " " << item.getNum() << std::endl;
        else
            std::cout << item.getLabel() << " WRONG NUMBER" << std::endl;
    };

    show_obj(obj1);

    return 0;
}