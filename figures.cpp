#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <memory>

using namespace std;

class Figure
{
public:
    virtual void Name(const string &name) const = 0;
    virtual void Perimeter(const double &perimeter) const = 0;
    virtual void Area(const double &area) const = 0;
};
class Triangle : public Figure
{
};
class Rect : public Figure
{
};
class Circle : public Figure
{
};
template <class Figure>
shared_ptr<Figure> CreateFigure()
{
}

int main()
{
    vector<shared_ptr<Figure>> figures;
    for (string line; getline(cin, line);)
    {
        istringstream is(line);

        string command;
        is >> command;
        if (command == "ADD")
        {
            // Пропускаем "лишние" ведущие пробелы.
            // Подробнее об std::ws можно узнать здесь:
            // https://en.cppreference.com/w/cpp/io/manip/ws
            is >> ws;
            figures.push_back(CreateFigure(is));
        }
        else if (command == "PRINT")
        {
            for (const auto &current_figure : figures)
            {
                cout << fixed << setprecision(3)
                     << current_figure->Name() << " "
                     << current_figure->Perimeter() << " "
                     << current_figure->Area() << endl;
            }
        }
    }
    return 0;
}