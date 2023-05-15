#include"Triangle.h"

Triangle::Triangle(int a, int b) : shape {a, b}
{
}

int Triangle::area()
{
    cout<<"衍生類別****的面積計算公式"<<(width*height)/2<<endl;
    return (width*height)/2;
}

/*help me!!!*/
