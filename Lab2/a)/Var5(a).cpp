#include <iostream>
#include "document.h"
#include <windows.h>

using namespace std;

int main()
{
    Document d1 = Document();
    d1.printDocument();
    cout << endl;
    Document d2 = "Document2";
    d2.printDocument();

    d2.setAutor("Al");
    d2.setTema("ABC");
    d2.setNrPagini(400);
    d2.setDataRedact(2003, 20, 37);
    d2.setTimpRedact(60, 12, 48);
    cout << endl;
    d2.printDocument();

    Document d3 = d2;
    cout << endl;
    d3.printDocument();
}
