#include <stdio.h>
#include <string.h>
#include <math.h>
typedef struct Peserta
{
	int Nomor;
	char Nama[30];
	int NilaiPanah[3], NilaiTotal;
}PESERTA;
	const int N = 3;
	PESERTA PesertaLombaMemanah[N];
	PESERTA Peserta[N];
	bool Input = false;
	void InputPeserta(){
	int No;
	char Nama[30];
	int NilaiPanah[3], NilaiTotal;
	int i;
	for(int i = 0; i<N; i++)
	{
		printf("\n Input Peserta Ke : %d",i+1);
		printf("\n======================================================\n");
		printf("Masukkan Nama Peserta : ");
		fflush(stdin); gets(Nama);
		printf ("Masukkan Nomor Peserta : ");
		fflush(stdin); scanf("%d",&No);
		PesertaLombaMemanah[i].Nomor = No;
		strcpy(PesertaLombaMemanah[i].Nama, Nama);
		printf("\n");
		int Total = 0;
		for(int j = 0; j<3; j++)
	{
		int Bidang;
		printf("Kesempatan Panah ke-%d kena dibidang :",j+1);
		scanf("%d",&Bidang);
		PesertaLombaMemanah[i].NilaiPanah[j] = Bidang;
		if(Bidang == 1) Total += 100;
		else if(Bidang > 1 && Bidang<= 10) Total +=100 -
		((PesertaLombaMemanah[i].NilaiPanah[j]-1)*10);
		else Total += 0;
	}
		PesertaLombaMemanah[i].NilaiTotal = Total;
		Peserta[i] = PesertaLombaMemanah[i];
		printf("======================================================\n");
	}
		Input = true;
	}
		void HasilPertandingan(){
		if(Input)
	{
		printf("\n Hasil Pertandingan : \n");
		PESERTA Temp;
		for (int i=0; i < N; i++)
	{
		printf("\n======================================================");
		printf("\n Nama Peserta = %s",Peserta[i].Nama);
		printf("\n Nomor Peserta = %d\n",Peserta[i].Nomor);
		for(int j = 0; j<3; j++)
	{
		printf("\n Kesempatan Panah ke-%d kenadibidang : %d", j+1,Peserta[i].NilaiPanah[j]);
	}
		printf("\n");
		printf("\n Nilai Total Peserta =%d",Peserta[i].NilaiTotal);
		printf("\n======================================================")
		;
		printf("\n");
	}
	}
		else
		{
			printf("\n Anda Belum Memasukkan Data \n");
		}
		}
		void TentukanJuara(){
		if(Input){
		printf("\n Urutan Peserta Berdasarkan Nilai Total : \n");
		PESERTA Temp;
		for (int i=0; i<N; i++)
		{
			for (int j=i+1; j<N; j++){
			if (PesertaLombaMemanah[i].NilaiTotal <
			PesertaLombaMemanah[j].NilaiTotal)
		{
			Temp = PesertaLombaMemanah[i];
			PesertaLombaMemanah[i] =
			PesertaLombaMemanah[j];
			PesertaLombaMemanah[j] = Temp;
			}
			}
				printf("\n======================================================");
				printf("\n Nama Peserta :%s",PesertaLombaMemanah[i].Nama);
				printf("\n Peserta Nomor:%d\n",PesertaLombaMemanah[i].Nomor);
				for(int j=0; j<3; j++)
				{
					printf("\n Kesempatan Panah Ke=%d kena dibidang :%d",j+1,PesertaLombaMemanah[i].NilaiPanah[j]);
				}
					printf("\n");
					printf("\n Nilai Total Peserta =%d",PesertaLombaMemanah[i].NilaiTotal);
					printf("\n");
					printf("\n Peserta Mendapat Juara ke = %d",i+1);
					printf("\n======================================================");
					printf("\n");
					}
					}else{
						printf("\n Anda Belum Memasukkan Data \n");
					}
					}
						void CekHasilMemanah(){
						if(Input)
						{
							int Nomor;
							printf("\n Masukkan Nomor Peserta : ");
							scanf("%d",&Nomor);
							for(int i=0; i<N; i++)	
						{
							if(PesertaLombaMemanah[i].Nomor)
							{
								printf("\n======================================================");
								printf("\n Nama Peserta :%s",PesertaLombaMemanah[i].Nama);
								printf("\n Nomor Peserta :%d\n",PesertaLombaMemanah[i].Nomor);
								for(int j=0; j<3; j++)
							{
								printf("\n Kesempatan Panah ke = %dkena di bidang = %d",j+1,PesertaLombaMemanah[i].NilaiPanah[j]);
							}
								printf("\n======================================================");
								printf("\n");
								break;
					}
					}
					}
						else{
						printf("\n Anda Belum Memasukkan Data");
					}
					}
						void CariData()
					{
						if(Input)
					{
						int Juara;
						printf("\n Masukkan Juara : ");
						scanf("%d",&Juara);
						printf("\n======================================================");
						printf("\n Nama Peserta =%s",PesertaLombaMemanah[Juara-1].Nama);
						printf("\n Nomor Peserta =%d\n",PesertaLombaMemanah[Juara-1].Nomor);
						for(int j=0; j<3; j++)
							{
								printf("\n Kesempatan Panah ke = %d kena di bidang =%d",j+1,PesertaLombaMemanah[Juara-1].NilaiPanah[j]);
							}
								printf("\n");
								printf("\n Nilai Total Peserta =%d",PesertaLombaMemanah[Juara-1].NilaiTotal);
								printf("\n");
								printf("\n Peserta Mendapat JUARA = %d",Juara);
								printf("\n======================================================");
								printf("\n");
							}
								else{
								printf("\n Anda Belum Memasukkan Data \n");
						}
						}
							void Exit()
						{
							printf("\n Program Terhenti");
						}
							main()
							{
								printf("\n Pertandingan Memanah");
								printf("\n ===== >> Saif Adzzahabi << =====\n");
								start :
								printf("\n 1. Input Data");
								printf("\n 2. Hasil Pertandingan");
								printf("\n 3. Tampilkan Juara");
								printf("\n 4. Cek Hasil Memanah Peserta");
								printf("\n 5. Cek Data Berdasarkan Juara");
								printf("\n 0. Exit");
								printf("\n");
								pilih :
								int Pilihan;
								printf("\n Masukkan Pilihan : ");
								scanf("%d",&Pilihan);
								switch(Pilihan)
								{
									case 0 :
									Exit();
									break;
									case 1 :
									InputPeserta();
									goto start;
									break;
									case 2 :
									HasilPertandingan();
									goto start;
									break;
									case 3 :
									TentukanJuara();
									
									goto start;
									break;
									case 4 :
									CekHasilMemanah();
									goto start;
									break;
									case 5 :
									CariData();
									goto start;
									break;
									default :
									printf("\n Pilihan Tersebut Tidak Ada");
									goto start;
									break;
	}
		printf("\n");
}
