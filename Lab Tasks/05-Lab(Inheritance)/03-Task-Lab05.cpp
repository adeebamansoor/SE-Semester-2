#include <iostream>
using namespace std;

class Printer {
public:
    void print_document() {
        cout << "Printing document\n";
    }
};

class Scanner {
public:
    void scan_document() {
        cout << "Scanning document.\n";
    }
};

class Photocopier : public Printer, public Scanner {
public:
    void photocopy() {
        print_document();   // from Printer
        scan_document();    // from Scanner
        cout << "Photocopy completed!\n";
    }
};

int main() {
    Photocopier obj;


    obj.photocopy();        // call combined function

    return 0;
}
