#include<iostream>
using namespace std;

void drawBoard(char *spaces);

int main(){
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer='Y';
    bool running = true;

    drawBoard(spaces);
    return  0;
}
void drawBoard(char *spaces){
    cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |   "<<spaces[2]<<"   "<<endl;
    cout<<"_____|_____|_____"<<endl;
     cout<<"     |     |     "<<endl;
    cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |   "<<spaces[5]<<"   "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
        cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |   "<<spaces[8]<<"   "<<endl;
        cout<<"     |     |     "<<endl;
}