#include<iostream>
#include<string>

using namespace std;

class Produk{
private:
    string nameProduk;
    double harga;
public:
    // name produk
    void setNameProduk(string x){
        nameProduk = x;
    }
    string getNameProduk(){
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
    cout<<"Aplikasi Kasir sederhana"<<endl;
    cout<<"1. Produk "<<endl;
    cout<<"2. kasir "<<endl;
    cout<<"0. Keluar " <<endl;
    cout<<"Pilih : ";
}

void menuProduk(){
    system("cls");

    cout<<"Tentang Produk "<<endl;
    cout<<"1. List Produk "<<endl;
    cout<<"2. Tambah Produk "<<endl;
    cout<<"Pilih : ";
}

void listproduk(int iteration,Produk produk[]){
    system("cls");
    if(iteration==0){
        cout<<"Produk belum ada"<<endl;
    }else{
        for(int i = 0;i<iteration;i++){
            cout<<i+1<<". "<<produk[i].getNameProduk()<<endl;
        }
    }
}

int addProduk(int iteration, Produk produk[]){
    int more = 1;
    double harga = 0;
    string nama;

    cin.ignore();

    while(more == 1){
        // input nama produk
        cout<<"Masukan nama produk : ";getline(cin, nama);
        produk[iteration].setNameProduk(nama);
        cout<<endl;
        // input harag produk
        cout<<"Masukan harga produk : ";cin>>harga;
        produk[iteration].setHarga(harga);
        cout<<endl<<endl;

        iteration +=1;

        cout<<"Apakah Mau Menambahkan produk lagi ? 1-> ya : 0-> Tidak";
        cin>>more;
        cin.ignore();
    }
    return iteration;

}

int main(){

    Produk produk[100];
    int pilih,iteration = 0, more=1;

    while(more!=0){
        tampil();
        cin>>pilih;

        if(pilih == 1){
            menuProduk();
            cin>>pilih;

            if(pilih == 1){
                listproduk(iteration,produk);
            }else if(pilih == 2){
                iteration = addProduk(iteration,produk);
            }
        }
        cout<<"apakah ingin melanjutkan kegiatan 1->yes;0->tidak "<<endl;
        cin>>more;
    }
}


/*
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
}
*/
