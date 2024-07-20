#include <iostream>
using namespace std;

class Figures{
    public:
        virtual double area(){
            return 0;
        }
        void menu(){
            system("cls");
            cout << "Enter wanted option:\n" <<
                    "1. Area of circle\n" <<
                    "2. Area of rectangle\n" <<
                    "3. Exit\n";
        }
};

class Circle : public Figures{
    public:
        Circle(double r) : radius(r){} 
    double area() override{
        return 3.14 * radius * radius;
    }

    private:
        double radius;
};

class Rectangle : public Figures{
    public:
        Rectangle(double w, double h) : width(w), height(h){}
    double area() override{
        return width * height;
    }
    private:
        double width;
        double height;
};

int main(){
    double n = 0, n1 = 0;
    string option;
    Figures p1;
    do{
        p1.menu();
        cin >> option;
        if(option.length() == 1 and (option == "1" or option == "2" or option == "3")){
            switch(option[0]){
                case '1':{
                    system("cls");
                    cout << "Enter wanted radius of circle: ";
                    cin >> n;
                    Circle c(n);
                    
                    Figures* figure = &c;
                    cout << "Radius = " << n << ", area = " << figure -> area() << endl;
                    system("pause");
                    }
                    break;
                case '2':{
                    system("cls");
                    cout << "Enter wanted width and height of rectangle: ";
                    cin >> n >> n1;
                    Rectangle f(n,n1);
                    Figures* figure = &f;
                    cout << "Width = " << n << ", height = " << n1 << ", area = " << figure -> area() << endl;
                    system("pause");
                    }
                    break;
            }
        }
        else{
            cout << "Incorrect input" << endl;
            system("pause");
        }
    }while(option != "3");
    return 0;
}