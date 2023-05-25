#include "Database.h"

//Daftar fungsi 
void menu (int *ptr_pilihMenu);
void listIKM (int *ptr_noIKM, int *ptrCounter);
void minat (int *ptr_noMinat, int *ptrBatas1, int *ptrBatas2, int *ptrAdd);
void tampil_minat (int *ptrBatas1, int *ptrBatas2);
void tertarik (int jenisMenu, int *ptr_noTertarik, int *ptrCounter, int *ptrBatas1, int *ptrBatas2, int *ptrAdd, int *ptr_tertarikARR);
void rangkuman(int *ptrCounter, int *ptr_tertarikARR);
void reset (int *ptrCounter, int *ptr_tertarikARR);

////////////////////////////////////////////////////////////////////////////////////
void menu (int *ptr_pilihMenu){  //menampilkan menu utama
  printf("\n1. Informasi Umum IKM FTUI\n"
		   "2. Meminta Saran IKM kepada Program\n"
		   "3. Lihat Rangkuman User\n"
		   "4. Exit Program\n"
		   "*  [-1 Reset]\n");
  printf("\nPilih menu : ");
  scanf("%d", ptr_pilihMenu);   
}
////////////////////////////////////////////////////////////////////////////////////
void listIKM (int *ptr_noIKM, int *ptrCounter){
  printf("-------------------------\n");
  printf("List Semua IKM:\n");
  dataIKM();
  for (int i = 1; i <= 16; i++){
    printf("%d. %s\n", i, data[i].nama);
  }
  printf("0.  Kembali\n");
  printf("\nAnda Hanya dapat memilih 5 IKM\n"
         "---[Anda sudah memilih %d/5]---\n", *ptrCounter);
  do{
  	printf("\nPilih no IKM di atas untuk informasi lebih lanjut : "); 
  	scanf("%d", ptr_noIKM);
  	
  	switch (*ptr_noIKM){
  	case 1 ... 16 : 
  		dataIKM(); //untuk me-recall database 
		printf("\n==============================================================\n");
		printf(" Nama IKM  : %s\n"
		       " Deskripsi : %s\n"
			   " Medsos    : %s\n"
			   "===============================================================\n"
			 ,data[*ptr_noIKM].nama, data[*ptr_noIKM].desc, data[*ptr_noIKM].link );
  		break;
  		
  	case  0 : // 0 akan keluar do while, sehingga di main bisa kembali ke menu utama
  		printf("-------------------------\n"); 	
  		break;
  		
  	default : //error handling
		printf("IKM tidak tersedia\n");
 		break;
  	}
  	
  } while(*ptr_noIKM < 0 || *ptr_noIKM > 16);
  	
  }
////////////////////////////////////////////////////////////////////////////////////
void minat (int *ptr_noMinat, int *ptrBatas1, int *ptrBatas2, int *ptrAdd){
  printf("-------------------------\n");
  dataIKM();
  printf("Pilih bidang yang sesuai dengan minatmu:\n"
        "1. Olahraga\n2. Sains dan teknologi\n"
        "3. Kemahasiswaan\n4. Seni dan sastra\n"
        "5. Sosial\n6. Agama\n0. Kembali\n");
  do {
  printf("\nPilih menu : "); 
  scanf("%d", ptr_noMinat);
  switch (*ptr_noMinat){
  	case 0 	: printf("-------------------------\n"); break;
  	case 1	: printf("-------------------------\n"); 
	  		  printf("Minat Olahraga : \n"
					   "1. Arjuna OR\n"
					   "2. KAPA\n");
			  *ptrBatas1 = *ptr_noMinat; *ptrBatas2 = *ptr_noMinat + 1;
			  tampil_minat(ptrBatas1, ptrBatas2);
			  *ptrAdd = 0;	
			  break;
  	case 2	: printf("-------------------------\n"); 
	  		  printf("Minat Sains dan Teknologi : \n"
					   "1. AMV\n"
					   "2. Nano Research Society\n"
  					   "3. Chem E-Car\n"
					   "4. Exercise\n");
  			  *ptrBatas1  = *ptr_noMinat + 1; *ptrBatas2 = *ptr_noMinat +4;  //batas 1 dan 2 ditambahkan berbeda-beda tiap case 
			  tampil_minat(ptrBatas1, ptrBatas2);							 //karena urutan di daftar IKM tiap minat tidak sama dengan urutan di struct
			  *ptrAdd = 2;                                                   //Add adalah selesih nomor IKM di tiap minat dengan nomor di struct
			  break;
  	case 3 	: printf("-------------------------\n"); 
	  		  printf("Minat Kemahasiswaan : \n"
					   "1. BEM FTUI\n"
					   "2. MPM FTUI\n"
					   "3. IMD\n");
			  *ptrBatas1  = *ptr_noMinat + 4; *ptrBatas2 = *ptr_noMinat + 6;
			  tampil_minat(ptrBatas1, ptrBatas2);
			  *ptrAdd = 6;	 
			  break;
  	case 4 	: printf("-------------------------\n"); 
	  		  printf("Minat Seni dan Sastra : \n"
					   "1. Arjuna Seni\n"
					   "2. BKST\n"
                       "3. Teknika\n");
			  *ptrBatas1  = *ptr_noMinat + 6; *ptrBatas2 = *ptr_noMinat+8;
			  tampil_minat(ptrBatas1, ptrBatas2);
			  *ptrAdd = 9;
			  break;
  	case 5 	: printf("-------------------------\n"); 
	  		  printf("Minat Sosial : \n"
					   "1. TIS FTUI\n");
			  *ptrBatas1  = *ptr_noMinat + 8; *ptrBatas2 = *ptr_noMinat + 8;
			  tampil_minat(ptrBatas1, ptrBatas2);
			  *ptrAdd = 12;
			  break;
  	case 6	: printf("-------------------------\n"); 
	  		  printf("Minat Agama : \n"
					   "1. FUSI FTUI\n"
					   "2. KMK FTUI\n"
                       "3. POFT UI\n");
			  *ptrBatas1  = *ptr_noMinat + 8; *ptrBatas2 = *ptr_noMinat + 10;
			  tampil_minat(ptrBatas1, ptrBatas2);
			  *ptrAdd = 13;
			  break;	
	default : printf("Menu Tidak Tersedia\n"); break;   
  }
  } while (*ptr_noMinat < 0 || *ptr_noMinat > 6); //Tidak akan keluar loop bila memenuhi range di samping
  }
////////////////////////////////////////////////////////////////////////////////////
void tampil_minat (int *ptrBatas1, int *ptrBatas2){
	char yesno1;
	do{
		printf("Ingin menampilkan informasi? (Pilih n untuk langsung memilih) [y/n] ");
		scanf(" %c", &yesno1);
		if (yesno1 == 'y') {
			dataIKM();
			for (int j = *ptrBatas1; j <= *ptrBatas2 ; j++){ //menampilkann semua informasi IKM di daftar minat 
			printf("\n==============================================================\n");
			printf(  " Nama IKM  : %s\n"
		   			 " Deskripsi : %s\n"
		 			 " Medsos    : %s\n"
		 			 "==============================================================\n"
			 ,data[j].nama, data[j].desc, data[j].link );
		}
		}
		if (yesno1 == 'n') break;	//Jika memilih 'n', program keluar loop lalu kembali ke main (melanjutkan) untuk menjalankan tertarik().
		} while (yesno1 != 'y' && yesno1 != 'n');

}
////////////////////////////////////////////////////////////////////////////////////
void tertarik (int jenisMenu, int *ptr_noTertarik, int *ptrCounter, int *ptrBatas1, int *ptrBatas2, int *ptrAdd, int *ptr_tertarikARR){
	char yesno2;
	if(*ptrCounter >= 5){  //akan dicek terlebh dahulu, bila sudah lebih dari sama dengan 5 maka program akan melewatkan switch case dan langsung kembali
					      //ke menu utama agar user bisa langsung mengakses rangkuman
		printf("\nAnda sudah memilih 5 IKM! Lihat Rangkuman\n");
		*ptr_noTertarik = 0; //mengubah nilai variabel noTertarik lalu kembali ke main.c
	}				
	else{
		switch (jenisMenu){
		case 1 : //dijalankan untuk user memilih dari menu 1, tidak digunakan variabel batas dan add
			do{
				printf("Apakah anda tertarik? [y/n] ");
				scanf(" %c", &yesno2);
				if (yesno2 == 'y'){ //Bila user merasa tertarik maka akan dilakukan pengecekan terlebih dahulu
				//argumen di bawah digunakan untuk mengecek apakah ada nomor IKM sama yang telah dipilih program 	
					 if(*ptr_noTertarik==ptr_tertarikARR[0] || 
					    *ptr_noTertarik==ptr_tertarikARR[1] || 
					    *ptr_noTertarik==ptr_tertarikARR[2] || 
					    *ptr_noTertarik==ptr_tertarikARR[3] ||
					    *ptr_noTertarik==ptr_tertarikARR[4]){
						printf("--Anda Sudah memilih ini--\n");
						yesno2 = 'a'; //digunakan selain 'y' dan 'n' agar tidak keluar loop			
					}
					else {
				// bila tidak ada yang sama maka noTertarik yang pilih user akan dimasukkan ke array kumpulan nomorIKM yang user tertarik
						ptr_tertarikARR[*ptrCounter] = *ptr_noTertarik; 
						*ptrCounter += 1;	
					}
					}
				if (yesno2 == 'n'){ //kalau user tidak tertatrik maka array ke-(counter) akan diberi nilai 0.
					ptr_tertarikARR[*ptrCounter] = 0; //0 dipakai agar yang di-print sebagaimana pada database 
				}		
				} while (yesno2 != 'y' && yesno2 != 'n');
			break;	
			
		case 2 : //dijalankan untuk user memilih dari menu 2
			printf("\nAnda Hanya dapat memilih 5 IKM");
			for (int k = 0; k < *ptrBatas2 - *ptrBatas1 + 1; k++){ //dijalankan sebanyak ikm pada daftar (pilihan valid, bila tidak k di decrement)
         		printf("\n---[Anda sudah memilih %d/5]---\n", *ptrCounter);
				printf("Masukkan nomor yang bersesuaian bila Anda tertarik (0 untuk kembali) ");
				scanf("%d", ptr_noTertarik);
				if (*ptr_noTertarik == 0) {
					ptr_tertarikARR[*ptrCounter] = 0;
					*ptr_noTertarik = -1; // diisi nilai <0, salah satunya -1 agar kembali ke menu bidang bukan ke menu utama	
					break;
				}
				
				*ptr_noTertarik += *ptrAdd; //berguna saat user memilih nomor ikm di daftar, menjadi tepat memilih pada nomor ikm di database
				if (*ptr_noTertarik < *ptrBatas1 || *ptr_noTertarik > *ptrBatas2){
					printf("Pilihan tidak tersedia\n");	
					k--; //
				}
					else if (*ptr_noTertarik==ptr_tertarikARR[0] || 
					    	 *ptr_noTertarik==ptr_tertarikARR[1] || 
					    	 *ptr_noTertarik==ptr_tertarikARR[2] || 
					    	 *ptr_noTertarik==ptr_tertarikARR[3] ||
					    	 *ptr_noTertarik==ptr_tertarikARR[4] ){
							 printf("--Anda Sudah memilih ini--\n");
							 k--;		
							 }	
					else {
							 ptr_tertarikARR[*ptrCounter]= *ptr_noTertarik; 
							 *ptrCounter += 1;
						     if (*ptrCounter==5) break; //transisi dari counter 4 ke 5 maka langsung break dari for loop, bila tidak maka akan kembali looping	
				}
			}	
			break; //break dari case 2
			}
		///Setelah dari salah satu case di atas dipilih, program akan menjalankan pengecekan apakah counter sudah 5 atau belum,
		//kalau sudah 5, program otomatis mencetak rangkuman + kembali ke menu awal.
		if ( *ptrCounter == 5){
			printf("\nAnda sudah memilih 5 IKM! Lihat Rangkuman\n");
			rangkuman(ptrCounter, ptr_tertarikARR); //mencetak rangkuman
			*ptr_noTertarik = 0; //kembali ke menu awal
			}
		}		
	}	
////////////////////////////////////////////////////////////////////////////////////			  
void rangkuman(int *ptrCounter, int *ptr_tertarikARR){
		if (*ptrCounter==0) {//Jika counter masih 0 akan muncul informasi di bawah ini. 
			printf("=========================\n");	
			printf("   Belum Ada Rangkuman   \n");
			printf("=========================\n");	
		}
		else{//counter lebih dari 0 akan mencetak rangkuman 
			dataIKM();
			printf("=============================================================\n");
			printf("Rangkuman, silakan cari info lebih lanjut melalui medsos yaa!\n");
			printf("=============================================================\n");
			printf(" Nama IKM\t\tBidang\t\t\tAkun Medsos\n");
			printf("-------------------------------------------------------------\n");
			for(int l = 0; l < 5; l++){
				printf(" %s\t%s\t%s\n", data[ptr_tertarikARR[l]].nama, data[ptr_tertarikARR[l]].bidang, data[ptr_tertarikARR[l]].link);
		}
		    printf("=============================================================\n");		
	}
}
////////////////////////////////////////////////////////////////////////////////////
void reset (int *ptrCounter, int *ptr_tertarikARR){
	char yesno3;
	printf("Dengan ini anda akan menghapus semua rangkuman?\n");
	do{
		printf("[y/n] ");
		scanf(" %c", &yesno3);
		if(yesno3 == 'y') {
			*ptrCounter=0; //membersihkan (meng-0-kan counter)
			for (int m = 0; m < 5; m++){
				ptr_tertarikARR[m]=0;
			}
			printf("Reset Berhasil.\n");
		}
		//bila user memilih 'n' maka langsung kembali ke menu utama tanpa melakukan reset
} while (yesno3 != 'y' && yesno3 != 'n'); 
}
////////////////////////////////////////////////////////////////////////////////////
