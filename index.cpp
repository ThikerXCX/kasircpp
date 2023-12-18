#include<iostream>
#include<string>

using namespace std;

class Produk{
private:
    string nameProduk;
    double harga;
public:
    // name produk
    void setNameproduk(string x){
        nameProduk = x;
    }
    string getNameproduk(){
        return nameProduk;
    }
    // harga
    void setHarga(double x){
        harga = x;
    }
    double getHarga(){
        return harga;
    }
};

void tampil(){
    system("cls");
    cout<<"Aplikasi Kasir sederhana"<<endl;
    cout<<"1. Produk "<<endl;
    cout<<"2. kasir "<<endl;
    cout<<"Pilih : ";
}

void tampilProduk(){
    system("cls");
    cout<<"Tentang Produk "<<endl;
    cout<<"1. List Produk "<<endl;
    cout<<"2. Tambah Produk "<<endl;
    cout<<"Pilih : ";
}

void listproduk(int x,Produk produk[]){
    if(x==0){
        cout<<"Produk belum ada";
    }else{
        for(int i;i<x;i++){
            cout<<i+1<<". "<<produk[i].getNameproduk()<<endl;
        }
    }
}

void addProduk(int iteration, Produk produk[]){
    int more = 1;
    double harga = 0;
    string nama;

    cin.ignore();

    while(more == 1){
        // input nama produk
        cout<<"Masukan nama produk : ";getline(cin, nama);
        produk[iteration].setNameproduk(nama);
        cout<<endl;
        // input harag produk
        cout<<"Masukan harga produk : ";cin>>harga;
        produk[iteration].setHarga(harga);
        cout<<endl;

        iteration++;

        cout<<"Apakah Mau Menambahkan produk lagi ? 1-> ya : 0-> Tidak";
        cin>>more;
        cin.ignore();
    }

}

int main(){

    Produk produk[100];
    int pilih,iteration = 0;

    tampil();
    cin>>pilih;

    switch(pilih){
        case 1 :
            tampilProduk();
            cin>>pilih;

            switch(pilih){
            case 1 :
                listproduk(iteration,produk);
                break;
            case 2 :
                addProduk(iteration,produk);
                break;
        default :
            break;
    }
    return 0;
}
}
