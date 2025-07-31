#include <iostream>
#include <cctype>
#include <string>
using namespace std;

void write_help() {
    cout << "usage: q.exe [options] [text]" << endl;
    cout << "options:" << endl;
    cout << "  --help\t display this message" << endl;
}

void write_version() {
    cout << "(*3*)";
}
// перевести нижний регистр в верхний и наоброт
auto reg_trans(const string q) {
    string w;
//             *
    for( char s : q) {
        if (isupper(s)) w += tolower(s);
        else if (islower(s)) w += toupper(s);
        else{
            cout<<"err"<<endl;
            break;
        }
    }
    return w;
}
struct Config {
    string text;
    bool isInterupted;

};

//const?               *
Config parse_arguments(int argc, const char* argv[]) {
    Config cfg; //{ string, bool }
    for (int i = 1; i < argc; i++) {
        string arg = argv[i];
        if (arg.rfind("--", 0) == 0) {
            if (arg == "--help") write_help();
            else if (arg == "--version") write_version();
            else cout << "wrong argument: " << arg << endl;
            cfg.isInterupted = true; // *
        } else {
            cfg.text += reg_trans(arg);
        }
    }
    return cfg;
}




int main(int argc, const char* argv[]) {
    
    Config pars_res = parse_arguments(argc, argv);
    cout << pars_res.text;
    
}