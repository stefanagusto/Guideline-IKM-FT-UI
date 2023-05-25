#include <stdio.h>

struct IKM {
		char *nama;
		char *desc;
		char *link;
    	char *bidang;
	} data[17];

void dataIKM (){
	char *bidangARR[7];
//Agar di rangkuman tidak tertulis [NULL]-----------------------------------------------------
  	data[0].nama	="-                ";
	data[0].link	="-                ";
	data[0].bidang  ="-                ";
//----------------------------------------------------------------------------------
  	bidangARR[1] ="Olahraga            ";
  	bidangARR[2] ="Sains Teknologi     ";
  	bidangARR[3] ="Kemahasiswaan       ";
  	bidangARR[4] ="Seni dan Sastra     ";
  	bidangARR[5] ="Sosial              ";
  	bidangARR[6] ="Agama               ";
//data-------------------------------------------------------------------------------	
	data[1].nama    = "Arjuna Olahraga      ";
	data[1].desc    = "Arjuna Olahraga  merupakan  kepanitiaan  tingkat fakultas\n" 
	  	 "             yang  bertujuan  untuk  mewadahi  dan juga  mengembangkan\n" 
	     "             minat dan bakat  warga FTUI dalam bidang olahraga. Arjuna\n" 
	 	 "             Olahraga  juga  berperan   dalam  mempersiapkan   seluruh\n"
	     "             kontingen  Teknik  untuk kompetisi,  baik  di  tingkat UI\n"
	     "             dan lomba eksternal.";
	data[1].link    = "@arjunateknik";
	data[1].bidang  = bidangARR[1];
	
	data[2].nama    = "Kamuka Parwata (KAPA)";
	data[2].desc    = "KAPA  merupakan  organisasi  pencinta   alam  di Fakultas\n" 
		 "             Teknik Universitas Indonesia yang berasaskan kekeluargaan\n"
		 "             KAPA FTUI memiliki bidang Operasional yang terdiri dari 5\n"
		 "             divisi, yaitu Gunung Hutan, Olah Raga Air, Rock Climbing,\n"
         "             Caving  dan  Diving, serta bidang Lingkungan Hidup.";
	data[2].link    = "@kapaftui";
	data[2].bidang  = bidangARR[1];
	
  	data[3].nama    = "AMV                   ";
  	data[3].desc    = "Autonomous  Marine  Vehicle   UI  (AMV  UI) adalah\n"
         "             salah  satu tim  bagian dari TRUI yang    bergerak\n"
         "             di bidang perairan terutama pada bidang perkapalan.";
  	data[3].link    = "@amv.ui";
	data[3].bidang  = bidangARR[2];
	  
  	data[4].nama    = "Nano Research Society";
  	data[4].desc    = "NACE (National Association of Corrosion Engineers)\n"
	     "             Student  Chapter  UI  merupakan  sebuah wadah bagi\n"
	     "             mahasiswa departemen teknik metalurgi dan material\n"
	     "             untuk  mendalami  ilmu korosi. NACE SC UI memiliki\n" 
	     "             banyak  sekali  proyek yang sangat mengedukasi dan\n"
	     "             mengembangkan  pengetahuan  terkait  korosi. Dalam\n"
	     "             NACE SC UI, mahasiswa  dibebaskan  untuk berkreasi\n"
	     "             mengikuti  conference  atau pun  lomba-lomba karya\n"
	     "             ilmiah yang berkaitan dengan korosi.";
  	data[4].link    = "@nano_ui";
  	data[4].bidang  = bidangARR[2];

  	data[5].nama    = "Chem-E-Car          ";
	data[5].desc    = "Chem-E-Car  atau  Chemical  Engineering Car adalah\n"
		 "             prototipe dari  mobil yang  berbahan  bakar sumber\n"
		 "             energi kimia,  seperti tekanan,  sel bahan  bakar,\n"
		 "             generator termoelektrik, dan sel Galvani."; 
  	data[5].link    = "@uichemecar";
  	data[5].bidang  = bidangARR[2];
  	

  	data[6].nama    = "EXERCISE             ";
  	data[6].desc    = "Experiment  of  Electro  Technical Engineering and\n"
	  	 "             Science  adalah  sebuah  lembaga atau  tempat bagi\n"
		 "             tempat bagi mahasiswa Universitas Indonesia terkhu\n"
		 "             susnya departemen teknik elektro untuk menyalurkan\n" 
	     "             antusiasme, hobi, dan pengetahuan yang  telah dida\n"
		 "             patkan dari kelas menjadi sebuah bentuk nyata dari\n"
	     "             apa yang telah dipelajari.";
  	data[6].link    = "@exerciseftui";
  	data[6].bidang  = bidangARR[2];
  
  	data[7].nama    = "BEM FTUI             ";
  	data[7].desc    = "BEM FTUI  adalah  lembaga  eksekutif terbesar di lingkup FTUI.\n"
         "             BEM FTUI  memiliki 5  koridor  dan  15  koridor  di  dalamnya,\n"
		 "             antara lain Internal,  Kresma, Kominfo,  Sospol, dan  Adkesma.";
  	data[7].link    = "@bemftui";
  	data[7].bidang  = bidangARR[3];
  	
  	data[8].nama    = "MPM FTUI              ";
  	data[8].desc    = "MPM merupakan  lembaga  tertinggi  dalam IKM FTUI dan pemegang\n"
	     "             kekuasaan legislatif dan yudikatif. Sebagai lembaga legislatif\n"
	     "             MPM memiliki  wewenang untuk melakukan  perancangan, penetapan\n" 
	     "             penetapan, dan pengawasan peraturan–peraturan yang  ada di IKM\n"
		 "             FTUI. Secara umum, fungsi  legislatif  MPM  dibagi menjadi  4,\n"
	     "             legislasi, pengawasan, anggaran, dan  representasi.  Sedangkan\n"
		 "             sebagai lembaga yudikatif, MPM memiliki  wewenang untuk melaku\n"
		 "             kan pelak sanaan sistem kehakiman di IKM FTUI.";
 	data[8].link    = "@mpmftui";
 	data[8].bidang  = bidangARR[3];
  
 	data[9].nama    = "IMD FTUI              ";
  	data[9].desc    = "Ikatan Mahasiswa  Departemen FTUI merupakan lembaga eksekutif\n"
	     "             yang bergerak pada bidang pada  tingkat departemen. Berfungsi\n"
	     "             berfungsi untuk membina dan melayani warga departemen masing-\n"
		 "             masing. Contoh dari IMD, yaitu IME, IMM, IMTI, IMMt, IMS, dll.";
  	data[9].link    = "@imeftui, @imm_ftui, @imtiftui, dsb.";
	data[9].bidang  = bidangARR[3];

  	data[10].nama   = "Arjuna Seni          ";
  	data[10].desc   = "Arjuna Seni merupakan kepanitiaan  tingkat  fakultas  yang  bertujuan untuk\n"
	     "             mewadahi  dan  mengembangkan minat dan bakat warga  FTUI dalam bidang seni.\n"
	     "             Arjuna Seni  juga berperan dalam mempersiapkan  seluruh kontingen Teknik UI\n" 
	     "             untuk kompetisi seni terbesar di UI, yaitu UI Art War.";
  	data[10].link   = "@arjunateknik";
  	data[10].bidang = bidangARR[4];
  
  	data[11].nama   = "BKST                 ";
  	data[11].desc   = "BKST (Bengkel  Kreasi  Seni Teknik)  merupakan  badan otonom  yang dibentuk\n"
		 "             dengan  tujuan mewadahi  bidang dan  bakat mahasiswa teknik di bidang seni.\n"
		 "             Organisasi yang dibentuk Januari 2005  ini terdiri   dari 4  divisi,  yaitu\n" 
		 "             Tari, Musbeng  (Musik Bengkel), Fotografi,  dan  Teater. BKST sering tampil\n"
		 "             di  acara tingkat  FT, UI, maupun tingkat umum. BKST  juga  sering  membawa\n"
		 "             nama teknik dalam berbagai jenis lomba seni baik tingkat UI hingga luar UI.";
  	data[11].link   = "@bkstftui";
	data[11].bidang = bidangARR[4];

  	data[12].nama   = "Teknika              ";
  	data[12].desc   = "Teknika adalah  lembaga  pers  mahasiswa yang  menjadi wadah bagi mahasiswa\n"
		 "             -mahasiswa  teknik  untuk  menuangkan ide  dan  bidang  mereka  pada bidang\n"
		 "             jurnalistik. Sebagai kanal informasi  utama, Teknika   bergerak mendekatkan\n" 
		 "             warga FTUI  untuk lebih  peka terhadap keadaan sekitar.";
  	data[12].link   = "@teknikaftui_";
  	data[12].bidang = bidangARR[4];

  	data[13].nama 	= "TIS FTUI             ";
  	data[13].desc 	= "Technique Informal  School (TIS) adalah  sebuah badan otonom di IKM\n"
	  	 "             FTUl yang  bergerak di ranah sosial dan pendidikan. Sejak 2005, TIS\n"
		 "             FTUI berupaya  untuk  mewujudkan kesetaraan pendidikan di indonesia\n"
		 "             dengan memberikan  akses pendidikan melalui upaya pengajaran kepada\n"
		 "             anak-anak yang  membutuhkan tanpa  dipungut biaya. Selain mengajar,\n"
		 "             TIS FTUI juga  melakukan  kegiatan yang  berorientasi  kepada warga\n"
		 "             daerah operasional seperti Ticket (TIS Cek Kesehatan), bakti sosial\n"
		 "             ketika  pandemi Covid-19  dan lainnya. TIS FTUl tidak lupa mengajak\n"
		 "             peserta didik melaksanakan karyawisata tahunan dalam agenda Sahabat\n"
		 "             TIS (Sehari Bersama TIS). Proker proker lain seperti UCil Fest (Uni\n"
		 "             versal Children's  Day  Festival), Pelatihan Pengajar, dan lainnya.";
  	data[13].link 	= "@tisftui";
	data[13].bidang = bidangARR[5];

  	data[14].nama   = "FUSI FTUI            ";
  	data[14].desc   = "FUSI FTUI atau Forum  Ukhuwah dan Studi Islam  adalah badan otonom\n"
	   	 "             keagamaan (BOK) di  FTUI. FUSI FTUI sebagai  wadah  dan rumah bagi\n"
	     "             seluruh  mahasiswa  muslim  FT dalam  mempelajari Islam dan dakwah\n" 
	     "             kampus. FUSI  FTUI  memiliki program kerja unggulan seperti : KIAS\n"
	     "             (Kajian Islam Awal Semester), QUTEK (Qurban Teknik), Gradasi (Gema\n"
	     "             Ramadhan Syiar Islam),  FTQO  (Fakultas  Teknik  Qur'an  Olympiad)\n"
	     "             Hijrah  Fest, ELQ (Engineer  Learns  Qur'an) Seminar Kemuslimahan.";
  	data[14].link   = "@fusiftui";
	data[14].bidang = bidangARR[6];

  	data[15].nama   = "KMK FTUI             ";
  	data[15].desc 	= "Keluarga   Mahasiswa   Katolik   Teknik   Universitas   Indonesia\n"
	     "             disingkat   sebagai  KMK  Teknik  UI  dahulu  bernama  KUKTEK  UI\n"
	     "             yang   berganti  nama   pada   tahun  2020  sebagai  salah   satu\n" 
	     "             BOK UI keagamaan  Katolik  dan  berperan sebagai wadah bagi semua\n"
	   	 "             mahasiswa  Katolik  di FTUI. Kegiatan yang  kami  lakukan seperti\n"
	   	 "             perayaan Natal, retret, KC, aksi sosial, dan  masih  banyak lagi.";
 	data[15].link   = "@kmkteknikui";
	data[15].bidang = bidangARR[6];
	
  	data[16].nama 	= "POFT                 ";
  	data[16].desc 	= "Persekutuan  Oikumene  Fakultas  Teknik  (POFT)  merupakan  Badan\n"
	   	 "             Otonom  Keagamaan  (BOK)  resmi  di  FTUI  yang mewadahi  seluruh\n"
	   	 "             mahasiswa   beragama  Kristen  Protestan  sebagai  jemaat   POFT.\n"
	   	 "             POFT   adalah   persekutuan  orang  percaya  dan  keluarga  dalam\n" 
	   	 "             Kristus yang berlandaskan  visi menghasilkan alumni  Kristen yang\n"
	   	 "             berakar kuat pada Firman  Tuhan,  mengandalkan  penuh pertolongan\n"
	   	 "             Roh Kudus, serta menjalankan fungsinya sebagai  garam  dan terang\n"
	   	 "             bagi lingkungan sekitar.";
  	data[16].link 	= "@poftui";
  	data[16].bidang = bidangARR[6];
}
