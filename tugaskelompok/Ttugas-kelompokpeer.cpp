#include <iostream>
using namespace std;

    
    void playlistsedih(){ 
        cout << " playlist sedih" << endl;
        cout << "1. Molto" << endl;
        cout << "2. Can i be him" << endl;
        cout << "3. Ours to keep" << endl;
        cout << "4. Lalala lost you" << endl;
        cout << "5. usik" << endl;
    }
        void playlisttenang(){
        cout << " playlist tenang" << endl;
        cout << "1. Kau rumahku" << endl;
        cout << "2. Tapi dunia" << endl;
        cout << "3. Tuhan sebut sia sia" << endl;
        cout << "4. Remaja" << endl;
        cout << "5. Colourway" << endl;
    }
        void playlisthobah(){
        cout << " playlist hobah" << endl;
        cout << "1. Tante culik aku dong" << endl;
        cout << "2. Tabola bale" << endl;
        cout << "3. Jangan ganggu pacarku" << endl;
        cout << "4. Pica Pica" << endl;
        cout << "5. Cinta satu malam" << endl;
    }
        void playlistmelamun(){
        cout << " playlist melamun" << endl;
        cout << "1. No suprises" << endl;
        cout << "2. Habist" << endl;
        cout << "3. Past live" << endl;
        cout << "4. Ruang baru" << endl;
        cout << "5. Youre gonna live foreverr in me" << endl;
    }
        void playlistgamon(){
        cout << " playlist Gamon" << endl;
        cout << "1. Location unknow" << endl;
        cout << "2. merindumu lagi" << endl;
        cout << "3. About you" << endl;
        cout << "4. Where we are" << endl;
        cout << "5. A youre gonna" << endl;
    }
        void playlistbutterflyera(){
        cout << " playlist butterflyera" << endl;
        cout << "1. Cantik" << endl;
        cout << "2. Mata ke hati" << endl;
        cout << "3. Labirin" << endl;
        cout << "4. Bentuk cinta" << endl;
        cout << "5. Jadi kekasiku saja" << endl;
    }
    
    
int main(){
    string nama;
    int angka;
    char ulang;
    
    do {
        cout << "masukkan nama panggilan kamu: ";
        cin >> nama;
        
        cout << "masukan angka keberuntungan kamu (1-10): ";
        cin >> angka;
        
        int mood = (angka * nama.length() * 2) ;
        cout << endl;
        
        cout << "Hai, " << nama << "! Mood kamu hari ini sekitar " << mood << "%" << endl;
        
        if (mood >= 80 && mood <=100){
            cout << "Kamu lagi berbunga bunga, yuk dengerin playlist butterfly era (づ ◕‿◕ )づ " << endl;
            playlistbutterflyera();
        }
        else if (mood >=75 && mood <=79){
            cout << "kamu lagi penuh semangat nih yuk dengar playlist angkotnya " << endl;
            playlisthobah();
        }
        else if (mood >=55 && mood <=74){
            cout << "playlistnya cocok dengan mood kamu nih" << endl;
            playlisttenang();
        }
        else if (mood >=40 && mood <=54){
            cout << "kayaknya kamu lagi banyak pikiran coba dengerin lagu dari playlist ini deh" << endl;
            playlistmelamun();
        }
        else if(mood >=30 && mood <=39){
            cout << "cie belum moveon lagu ini kayaknya cocok untuk nemenin kamu" << endl;
            playlistgamon();
        }
        else if(mood >=0 && mood <= 29){
            cout << "mood kamu lagi jelek nih, kalau mau ditemenin nagins lagu ini cocok buat kamu" << endl;
            playlistsedih();
        }
        else {
            cout << "presentase kamu kelebihan nih ";
        }
    cout << "Mau coba lagi? (y/n): " << endl;
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih sudah main '-' " << endl;
   
    return 0;
    
}

