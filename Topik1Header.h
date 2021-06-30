
/*
    Mini Proyek - Topik 1

    Case : 
    Antrian Penumpang Stasiun KA
    Asumsi anda berada di stasiun kereta yang sedang mengantri untuk masuk ke KA.
    Sebelum masuk ke gerbong, ada petugas yang akan memeriksa karcis dan identitas anda.
    Buatlah sebuah aplikasi sederhana dengan menggunakan linked list untuk menerapkan kasus ini.
    Fitur yang harus tersedia:
    * dimungkinkan untuk mencari seseorang berdasarkan ID KTP, kemudian cetaklah informasi berupa ID KTP, 
    nama, gerbong keberapa, dan nomor bangku berapa.
    * dimungkinkan untuk mencetak informasi penumpang hanya di dalam sebuah gerbong.
    * dimungkinkan untuk mencetak seluruh informasi penumpang.
*/

//membuat synonim struct
typedef struct Stasiun Sts;

struct Stasiun{
    char * nama;
    char * no_gerbong;
    char * bangku;
    char * karcis;
    char * ktp;
    Sts * Next;
};


void cetakKTP(Sts *Penumpang,char * ID);


void checktiket(Sts *Penumpang,char * karcis);


void addPenumpang(Sts **Penumpang,char * nama,char * ID,char * gerbong,char * bangku,char * karcis);


void showPenumpang(Sts *Penumpang);


void cetakGerbong(Sts *Penumpang,char * gerbong);
