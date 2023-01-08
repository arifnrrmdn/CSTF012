#include<stdio.h>
#include<conio.h>
//deklarasi struct
struct data_mhs
{
 char nim[10],nama[20];
 int nilai_ujian;
} mhs;

main()
{
 clrscr();
 printf("nomor induk mahasiswa  = ");
 scanf("%s",&mhs.nim); fflush(stdin);
 printf("nama mahasiswa	       = ");
 scanf("%s",&mhs.nama); fflush(stdin);
 printf("nilai ujian	       = ");
 scanf("%d",&mhs.nilai_ujian); fflush(stdin);

 if(mhs.nilai_ujian>=80){
   puts("ANDA DINYATAKAN LULUS");
 }else{
   puts("ANDA DINYATAKAN GAGAL");
 }

 getch();
 return 0;
}
