#include <iostream>
using namespace :: std;
struct A {
    double uts,uas,absen,tugas,total,nilai;
    string huruf;
};
A B;
double nilai (string text){
    cout<<"Masukan Nilai "<<text<<" : ";
    cin>>B.nilai;
    return B.nilai;
}
void total(){
    cout<<"total Nilai : "<<B.total;
    if (B.total>=81) B.huruf = "A";
    else if (B.total>=61) B.huruf = "B";
    else if (B.total>=41) B.huruf = "C";
    else if (B.total>=21) B.huruf = "D";
    else B.huruf = "E";
    cout<<"\nNilai Anda : "<<B.huruf;
}
main(){

    B.uts = nilai ("UTS  ");
    B.uas = nilai ("UAS  ");
    B.tugas = nilai ("Tugas");
    B.absen = nilai ("Absen");
    B.total =(B.uts*0.20)+(B.uas*0.30)+(B.tugas*0.35)+(B.absen*0.15);
    total();
}
