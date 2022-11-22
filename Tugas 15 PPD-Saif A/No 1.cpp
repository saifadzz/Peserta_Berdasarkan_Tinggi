#include <stdio.h>
#include <string.h>
#include <math.h>
#define N 3
typedef struct Peserta
{
int Nomor;
char Nama [30];
float PanjangTali, Sudut;
float TinggiLayangan;
} PESERTA;
PESERTA PesertaLombaLayangan[N];
bool Input = false;
void InputPeserta(){
int No;
char Nama[30];
float Panjang, Sudut;
float Tinggi;
for (int i=0; i<N; i++){
printf("\n Input Peserta Ke : %d", i+1);
printf("\n==============================================\n");
printf("Masukkan Nama Peserta : ");
fflush(stdin); gets(Nama);
printf("Masukkan Nomor Lomba : ");
fflush(stdin); scanf("%d",&No);
printf("Masukkan Panjang Tali Layangan (meter) : ");
fflush(stdin); scanf("%f",&Panjang);
printf("Masukkan Sudut Elevasi Tali (Derajat) : ");
fflush(stdin); scanf("%f",&Sudut);
Tinggi = Panjang*sin((Sudut*3.14)/180);
printf("==============================================\n");
PesertaLombaLayangan[i].Nomor = No;
strcpy(PesertaLombaLayangan[i].Nama, Nama);
PesertaLombaLayangan[i].PanjangTali = Panjang;
PesertaLombaLayangan[i].Sudut = Sudut;
PesertaLombaLayangan[i].TinggiLayangan = Tinggi;
}
Input = true;
}
void TentukanJuara(){
if(Input)
{
printf("\n Urutan Peserta Berdasarkan Tinggi Layangan :\n");
PESERTA Temp;
for (int i = 0; i<N; i++)
{
for (int j=i + 1; j<N; j++)
{
if (PesertaLombaLayangan[i].TinggiLayangan <
PesertaLombaLayangan[j].TinggiLayangan)
{
Temp = PesertaLombaLayangan[i];
PesertaLombaLayangan[i] =
PesertaLombaLayangan[j];
PesertaLombaLayangan[j] = Temp;
}
}
printf("\n==============================================\n");
printf("\n Nama Peserta =%s",PesertaLombaLayangan[i].Nama);
printf("\n Nomor Peserta =%d",PesertaLombaLayangan[i].Nomor);
printf("\n Tinggi Layangan adalah %g Meter",PesertaLombaLayangan[i].TinggiLayangan);
printf("\n");
printf("\n Peserta Mendapat Juara = %d.",i+1);
printf("\n==============================================\n");
printf("\n");
}
}
else{
printf("\n Anda Belum Memasukkan Data \n");
}
}
void CariData(){
if(Input)
{
int Nomor;
printf("\n Masukkan Nomor : ");
scanf("%d",&Nomor);
for(int i = 0; i<N; i++)
{
if(PesertaLombaLayangan[i].Nomor == Nomor)
{
printf("\n==============================================\n");
printf("\n Nama Peserta = %s",PesertaLombaLayangan[i].Nama);
printf("\n Nomor Peserta = %d",PesertaLombaLayangan[i].Nomor);
printf("\n Tinggi Layangan adalah %g Meter",PesertaLombaLayangan[i].TinggiLayangan);
printf("\n");
printf("\n Peserta Mendapat Juara = %d.",i+1);
printf("\n==============================================\n");
printf("\n");
break;
}
}
}
}
void Exit()
{
printf("\n Program Terhenti.");
}
main(){
printf("\n Program Lomba Layangan \n");
printf("\n======== Saif Adzzahabi ========== \n");
start :
printf("\n 1. Input Data");
printf("\n 2. Tampilkan Juara");
printf("\n 3. Cari Data Peserta Tertentu");
printf("\n 4. Exiit");
printf("\n");
pilih :
int pilihan;
printf("\n Masukkan Pilihan : ");
scanf("%d", &pilihan);
switch(pilihan){
case 1 :
InputPeserta();
goto start;
break;
case 2 :
TentukanJuara();
goto start;
break;
case 3 :
CariData();
goto start;
break;
case 4 :
Exit();
break;
default :
printf("\n Pilihan Tersebut Tidak Ada \n");
goto pilih;
break;
}
printf("\n");
}
