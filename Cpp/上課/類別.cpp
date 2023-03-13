#include<iostream>

using namespace std;

//複數的類別定義
class Complex{
private:
    int real, img;
public:
    Complex(int r = 0, int i = 0){
            real = r;
            img = i;
    }
    Complex operator + (Complex const& obj){
        Complex result;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }

    Complex operator - (Complex const& obj){
        Complex result;
        result.real = real - obj.real;
        result.img = img - obj.img;
        return result;
    }

    Complex operator * (Complex const& obj){
        Complex result;
        result.real = (real * obj.real - img * obj.img);
        result.img = (real * obj.img + img * obj.real);
        return result;
    }
    void display(){
        cout << real << " " << img << endl;
    }
};

int main(){
    Complex c1(1, 2);
    Complex c2(2, -3);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;
    c3.display();
    c4.display();
    c5.display();
    return 0;
}