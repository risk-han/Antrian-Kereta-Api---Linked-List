#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Topik1Header.h"

void CetakKTP(Sts *Penumpang,char * ID){
    while (Penumpang!=NULL)
    {
        if (strcmp(Penumpang->ktp,ID)==0)
        {
            printf("=====");
            printf("=======");
            printf("Berikut Data Penumpang dengan ID KTP %s\n",ID);
            printf("=========================Nama\t\t:%s      =========================\n",Penumpang->nama);
            printf("=========================No.Gerbong\t:%s  =========================\n",Penumpang->no_gerbong);
            printf("=========================No.Bangku\t:%s   =========================\n",Penumpang->bangku);
        }
        Penumpang = Penumpang->Next;
    }
    
}

void addPenumpang(Sts **Penumpang,char * nama,char * ID,char * gerbong,char * bangku,char * karcis){
    Sts * penumpang_baru = (Sts*)malloc(sizeof(Sts));
    penumpang_baru->nama=nama;
    penumpang_baru->ktp=ID;
    penumpang_baru->no_gerbong=gerbong;
    penumpang_baru->bangku=bangku;
    penumpang_baru->karcis=karcis;
    penumpang_baru->Next=*Penumpang;
    *Penumpang = penumpang_baru;
    printf("\n==========================SELAMAT, PENUMPANG BERHASIL DITAMBAH======================\n");
    printf("==========================SILAHKAN CEK KEMBALI DAFTAR PENUMPANG======================\n");
}


void showPenumpang(Sts *Penumpang){
    int i=1;
    printf("###################################DAFTAR PENUMPANG STASIUN ALSRU################################################\n\n");
    printf("No.\t\tNama\t\tID KTP\t\tNo.Gerbong\t\tNo.Tiket\t\tNo.Bangku\n");
    while (Penumpang!=NULL){
        printf("***************************************************************************************************************\n");    
        printf("%d.\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n",i++,Penumpang->nama,Penumpang->ktp,Penumpang->no_gerbong,Penumpang->karcis,Penumpang->bangku);
        Penumpang = Penumpang->Next;
    }
    
}

void cetakGerbong(Sts *Penumpang,char * gerbong){
    int i=1;
    printf("\n#########################DAFTAR PENUMPANG STASIUN ALSRU##############################\n\n");
    printf("No.\t\tNama\t\t\tID KTP\t\t\tNo.Bangku\n");

    while (Penumpang!=NULL)
    {
        if (strcmp(Penumpang->no_gerbong,gerbong)==0)
        {
            printf("*****************************************************************************\n");
            printf("%d.\t\t%s\t\t\t%s\t\t\t%s\n",i++,Penumpang->nama,Penumpang->ktp,Penumpang->bangku);
        }
        Penumpang = Penumpang->Next;
    }
    
}


void checktiket(Sts *Penumpang,char * karcis){

    while (Penumpang!=NULL)
    {
        if (strcmp(Penumpang->karcis,karcis)==0)
        {
            printf("karcis %s Diizinkan masuk\n",karcis);
            break;
        }
            Penumpang = Penumpang->Next;
    }
    while (Penumpang == NULL)
    {
        printf("Maaf karcis %s Tidak diizinkan masuk\n",karcis);
    }
}

