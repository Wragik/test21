// Gift2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Cand;

class Candy{
private:

    string name;
    int ves;
    double price;
public:
    void Glav(string name, int ves, int price)
    {
        this->name = name;
        this->ves = ves;
        this->price = price;
    }
    string GetName()
    {
        return name;
    }
    
    void SetName(string name)
    {
        this->name = name;
    }
    int GetVes()
    {
        return ves;
    }

    void SetVes(int ves)
    {
        this->ves = ves;
    }
    double GetPrice()
    {
        return price;
    }

    void SetName(double price)
    {
        this->price = price;
    }
};
class Cand :public Candy {
public:
    string name = "Candy";
    int ves = 15;
    double price = 10;
    string barashik = "sweet";

};
class Chocolate{
private:
    char name[15] = { "Chocolate" };
    int ves = 50;
    double price = 10;
};

int main()
{
    setlocale(LC_ALL, "rus");
    Candy cab;
    Cand ap;
    cab.Glav(ap.name, ap.ves, ap.price);
    cout << cab.GetName() << "\n" << cab.GetVes() << "\n" << cab.GetPrice() << "\n" << ap.barashik;
}


//cout << name << "\n" << ves << "\n" << price << "\n";