//Proyek Akhir Pemrograman Dasar
//IKM Guide Program for MABA
//Kelompok 8
//Bernanda Nautval R.I.W.  - 2106708463
//Lauren Christy Tanudjaja - 2106707870
//Prima Shalih             - 2106636962
//Stefan Agusto Hutapea    - 2106700744

#include <stdlib.h>
#include "function.h"

int main() {
  int pilihMenu;
  int noIKM;
  int noMinat;
  int noTertarik;
  int counter;
  int batas1, batas2, add; //digunakan khusus untuk menu 2 (saran).
  int *tertarikARR = (int*) calloc (5, sizeof(int));
  int notUSED = 0; //digunakan untuk menu 1 (List) 
  
  printf("===========================\n"
         "--GUIDELINE PEMILIHAN IKM--\n"
  		 "===========================");
  do { //do while untuk error handling
  	menu(&pilihMenu);
  	//PILIH MENU 1 menjalankan ini 
  	if (pilihMenu == 1) {
  		do {
  			listIKM	(&noIKM, &counter);
  			if (noIKM >= 1 && noIKM <= 16) { 
  				noTertarik = noIKM;        // Dari fungsi listIKM jika memenuhi range, maka akan lanjut ke sini
  				tertarik(1, &noTertarik, &counter, &notUSED, &notUSED, &notUSED, tertarikARR);  //parameter "1" di awal untuk menjalankan switch case = 1 di fungsi tertarik()
  				noIKM = noTertarik; //agar bisa kembali ke menu awal, karena do while menggunakan variabel noIKM bukan noTertarik 
				}
		  } while (noIKM != 0);//bila user memilih 0 maka akan kembali ke menu()
	  }
	//PILIH MENU 2 menjalankan ini  
  	if (pilihMenu == 2) {
  		do {
  			minat (&noMinat, &batas1, &batas2, &add);
  			if(noMinat != 0){           
  				noTertarik = noMinat;
  				tertarik(2, &noTertarik, &counter, &batas1, &batas2, &add, tertarikARR); //parameter "2" di awal untuk menjalankan switch case = 2 di fungsi tertarik()
  				noMinat = noTertarik; //agar bisa kembali ke menu awal, karena do while menggunakan variabel noMinat bukan noTertarik 
				}
		  } while (noMinat != 0); //bila user memilih 0 maka akan kembali ke menu()
	  }
	//PILIH MENU 3 menjalankan ini   
	if (pilihMenu == 3) rangkuman(&counter, tertarikARR);
	//PILIH MENU 4 menjalankan ini 
	if (pilihMenu == 4) printf("\n--Terima Kasih Telah Menggunakan Program--");
	//PILIH MENU -1 menjalankan ini 
	if (pilihMenu == -1) reset(&counter, tertarikARR);
	//Ini untuk error handling 
  	if (pilihMenu != -1 && pilihMenu < 1 || pilihMenu > 5) {
  		printf("-------------------------\n");
		printf("!Menu Tidak Tersedia!\n");
  		printf("-------------------------\n");
	  }
  } while (pilihMenu != 4); //User memilih 4 maka akan mengakhiri program.
  
  free(tertarikARR);
  
  return 0;
}
