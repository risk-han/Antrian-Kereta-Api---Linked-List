#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Topik1Header.h"

int main(){

    Sts* penumpang1 = (Sts*)malloc(sizeof(Sts)*1);
    Sts* penumpang2 = (Sts*)malloc(sizeof(Sts)*1);
    Sts* penumpang3 = (Sts*)malloc(sizeof(Sts)*1);


    //Insertion Manual linked list
    penumpang1->karcis="TIKET001";
    penumpang1->ktp="KTP001";
    penumpang1->nama="Risky";
    penumpang1->bangku="Bangku1";
    penumpang1->no_gerbong="Gerbong1";
    penumpang1->Next=penumpang2;

    penumpang2->karcis="TIKET002";
    penumpang2->ktp="KTP002";
    penumpang2->nama="Edrick";
    penumpang2->bangku="Bangku2";
    penumpang2->no_gerbong="Gerbong2";
    penumpang2->Next=penumpang3;


    penumpang3->karcis="TIKET003";
    penumpang3->ktp="KTP003";
    penumpang3->nama="Steven";
    penumpang3->bangku="Bangku3";
    penumpang3->no_gerbong="Gerbong3";
    penumpang3->Next=NULL;
    // Variabel Inputan

    int menu;
    char gerbong[5];
    char bangku[5];
    char ktp[9];
    char karcis[9];
    char nama[25];

    //  Pilihan Menu
    system("cls");
    printf("******************        Kelompok 32 - Topik 1            ******************\n");
    printf("****************** Risky Saputra Siahaan - D3TI - 11320030 ******************\n");
    printf("****************** Edrick Ernest Sinaga  - D3TK - 13320008 ******************\n");
    printf("****************** Steven Situmorang     - D3tK - 13320055 ******************\n");
    printf("\n----#####-----  SELAMAT DATANG DI STASIUN Alsrudat KELOMPOK 32    ----#####----");
    while (1 == 1)
    {
        
        printf("\n\n************    DAFTAR MENU STASIUN ALSRU     *****************\n\n");
        printf("---------------- 1. Tampilkan Penumpang\n---------------- 2. Cari Penumpang dalam Gerbong\n---------------- 3. Cari Penumpang melalui ID KTP \n---------------- 4. Periksa Nomor Tiket \n---------------- 5. Tambah Penumpang\n---------------- 6. Keluar dari Aplikasi\n\n");   
        printf("Pilih\n");
        scanf("%d",&menu);
        switch (menu)
        {
        case 1:
            system("cls");
            showPenumpang(penumpang1);
            break;
        case 2:
            system("cls");
            printf("Masukan No.Gerbong (contoh = Gerbong1)\n");
            scanf("%s",&gerbong);
            cetakGerbong(penumpang1,gerbong);
            break;

        case 3:
            system("cls");
            printf("Masukan ID KTP (contoh = KTP001)\n");
            scanf("%s",&ktp);
            CetakKTP(penumpang1,ktp);
            break;
        case 4:
            system("cls");
            printf("Masukan tiket (contoh = TIKET001)\n");
            scanf("%s",&karcis);
            checktiket(penumpang1,karcis);
            break;
        case 5:
            system("cls");
            printf("Masukan nama (Disarankan hanya nama depan)\n");
            scanf("%s",nama);
            printf("Masukan id ktp (Disarankan = KTPXXX dengan XXX adalah 3 digit angka)\n");
            scanf("%s",&ktp);
            printf("Masukan no gerbong (Disarankan = GerbongX dengan X adalah 1 digit angka)\n");
            scanf("%s",&gerbong);
            printf("Masukan no bangku (Disarankan BangkuX dengan X adalah 1 digit angka)\n");
            scanf("%s",&bangku);
            printf("Masukan karcis (Disarankan TIKETXXX dengan X adalah 3 digit angka)\n");
            scanf("%s",&karcis);
            addPenumpang(&penumpang1,nama,ktp,gerbong,bangku,karcis);
            break;
        case 6:
        printf("Terimakasih");
        return 0;
        default:
        printf("Maaf pilihan anda tidak ada");
            break;
        }
    }    
}
