#include <iostream>
#include <array >

using namespace std;
int luas_persegi(int p,int l);
double luas_segitiga( double alas,double tinggi,double s = 0.5 );
double luas_persegi2(double sisi);

int main()
{
    array<int,11>nama_array;
    char hasil_terakhir;
    double pertama;
    string nama ;
    cout << "   ................................... \n";
    cout << "   :          selamat datang         : \n";
    cout << "   :.................................: \n\n";
    cout << "   silakan masukan nama anda di bawah ini \n";
    cout << "   ___________________________________\n";
    cout << "   ";
    cin >>nama;
    do{
    cout << "   ___________________________________\n\n";
    cout << "   hai " << nama << " selamat datang \n";
    cout << "   silakan pilih salah satu: \n";
    cout << "   ketik 1 untuk +,-,x,pembagian\n";
    cout << "   ketik 2 untuk menghitung luas persegi panjang.\n";
    cout << "   ketik 3 untuk menghitung luas segitiga. \n";
    cout << "   ketik 4 untuk menghitung luas persegi.\n";
    cout << "   ketik 5 untuk grafik.\n";
    cout << "   ";
    cin >> pertama;
    if (pertama == 1){
        double angka1,angka2,hasil;
        char aritmatika;
        cout << "   masukan angka pertama \n";
        cout << "   ";
        cin >> angka1;
        cout << "   angka yang anda masukan adalah " << angka1 << endl;
        cout <<"    masukan: \n";
        cout <<"    + untuk tambah(+) \n";
        cout <<"    - untuk kurang (-) \n";
        cout <<"    * untuk perkalian (x)\n";
        cout <<"    / untuk pembagian \n";
        cout <<"    ";
        cin >> aritmatika;
        cout << "   kode yang anda masukan adalah " << aritmatika << endl;
        cout << "   masukan angka kedua";
        cout <<"    ";
        cin >>angka2;
        cout << "   angka yang anda masukan adalah " << angka2 << endl;
        if (aritmatika == '+'){
                hasil = angka1 + angka2;
        cout <<"    hasil dari " << angka1 << " di tambah " << angka2 << " adalah " << hasil << endl;

        }else if (aritmatika == '-'){
                hasil = angka1 - angka2;
        cout <<"    hasil dari " << angka1 << " di kurangi " << angka2 << " adalah " << hasil << endl;

        }else if (aritmatika == '*'){
                hasil = angka1 * angka2;
        cout <<"    hasil dari " << angka1 << " dikali " << angka2 << " adalah " << hasil << endl;

        }else if (aritmatika == '/'){
                hasil = angka1 / angka2;
        cout <<"    hasil dari " << angka1 << " di bagi " << angka2 << " adalah " << hasil << endl;

        } cout << "     end\n\n\n\n\n" << endl;

    } else if (pertama == 2){
        int p,l,h;
        cout << "   masukan panjang persegi panjang";
        cout << "   ";
        cin >> p;
        cout << "   panjang persegi panjang adalah : " << p<< "\n";
        cout <<"    masukan lebar persegi panjang";
        cout << "   ";
        cin >> l;
        cout << "   lebar persegi panjang adalah \n"<<l;
        cout <<  "  luas persegi panjang adalah: "<< luas_persegi(p,l)<< endl;
        cout << "\n";
        cout << "end\n\n\n\n\n";

    }else if (pertama == 3){
        double alas,tinggi2;
        cout << "   masukan alas segitiga";
        cout << "   ";
        cin >> alas;
        cout << "   alas segitiga adalah : " << alas<< "\n";
        cout <<"    masukan tinggi segitiga";
        cout << "   ";
        cin >> tinggi2;
        cout << "   tinggi segitiga adalah \n"<<tinggi2;
        cout <<  "  luas persegi panjang adalah: "<< luas_segitiga(alas,tinggi2) << endl;
        cout << "\n";
        cout << "end\n\n\n\n\n" << endl;}

     else if (pertama == 4){
    double sisi;
    cout << "   masukan sisi persegi";
    cout << "   ";
    cin >> sisi;
     cout << "   sisi persegi adalah \n"<<sisi;
     cout << "  luas persegi adalah " << luas_persegi2(sisi);

        cout << "\n";
        cout << "end\n\n\n\n\n" << endl;
    }else if(pertama == 5){
        for (int a=0 ; a < nama_array.size();a++){
            cout << "   masukan jumlah murid yang mendapatkan nilai ";
            if(a==0){
                cout << " 0-9  : ";
            }else if (a==10){
                cout << " 100  : ";
                } else{
                    cout << a*10 << "-" << (a*10)+9 << " : ";
                    }
                    cin >> nama_array[a];

        }
        cout << "    grafik " << endl << endl;
        for (int a=0;a< nama_array.size();a++){
            if(a==0){
                cout << "   0-9   : ";
            }else if (a==10){
                cout << "   100   : ";
                } else{
                    cout <<"   "<< a*10 << "-" << (a*10)+9 << " : ";
                    }
                    for (int bintang=0 ;bintang<nama_array[a];bintang++){
                        cout << "*";
                    }cout << endl;
        }} cout << endl;
        char a;
        cout << "apakah ada mau memulai lagi ?" << endl;
        cout << "ketik n untuk berhenti";
        cin >> a;
        if (a=='n'){
                cout << "terima kasih telah mengunakan kalkulator";
                break;

        } cout << endl << endl;



    }while(true);




    return 0;

}
int luas_persegi(int p,int l){
return p*l;
}

double luas_segitiga(double alas,double tinggi,double s){
return s*alas*tinggi;
}

double luas_persegi2(double sisi){
return sisi*sisi;
}



