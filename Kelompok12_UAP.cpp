#include <iostream>
#include <windows.h>
#include <unistd.h>

using namespace std;

int intro(){
	
	string jwb;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "			---------------------------------------------------------------" << endl;
	cout << "			|              Selamat Datang Di Game Tebak Kata              |" << endl;
	cout << "			|                           Main?                             |" << endl;
	cout << "			|                        ya     tidak                         |" << endl;
	cout << "			---------------------------------------------------------------" << endl;
	
	cin >> jwb;
	if(jwb == "ya"){
		system("CLS");
	}else{ exit(0);
	}
}


int level1() {
    int nyawa = 2;
    string tebakan, jwb, jwb2;
    
    
    for(int a = nyawa; a >= 0 ; a--){
    	cout << endl;
    	 
    	cout << "	Level 1" << endl;
    	cout << endl;
   		cout << endl;
    	cout << endl;
    	cout << endl;
    	
    	cout << "	---------------------------------------------------------------" << endl;
    	cout << "	Clue 0: Terdiri dari 2 kata" << endl;
    	cout << "	Clue 1: Alat untuk menunjukkan waktu" << endl;
		cout << "	Clue 2: Alat untuk menjepit dan menahan benda kerja"<< endl;
		cout << "	Clue 3: an" << endl;   
		cout << "	---------------------------------------------------------------" << endl;
    
    	cout << endl;
    	cout << endl;
    	cout << endl;
       
       
        cout << endl;
        cout << endl;
        cout << "	Jawaban: ";
        getline(cin, tebakan);
        cout << endl;
        if(tebakan=="jam tangan"){
        	cout << endl;
        	cout << "	----------------------------------------" << endl;
            cout << "	Benar!" << endl;  
			cout << "	Lanjut ke level selanjutnya? (ya/tidak)" << endl;
			cout << "	----------------------------------------" << endl;
			cin >> jwb;
			if(jwb == "ya"){
			system("CLS"); }
			else{ exit(0);
		   } break; }
		   
        else {
			system("CLS"); } 
		 
		if(a==1){
			cout << "Kalah!" << endl;
			cout << "Coba lagi? (ya/tidak)" << endl;
			cin >> jwb2;
			if(jwb2 == "ya") {
				system("CLS");
				break; }
			else if("tidak"){
				exit(0);
			}
			}}
		 	} 
			
int level2() {
    int nyawa = 2;
    string tebakan, jwb, jwb2;
    
    for(int a = nyawa; a >= 0 ; a--){
    	cout << endl;
    	 
    	cout << "	Level 2" << endl;
    	cout << endl;
   		cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << "	---------------------------------------------------------------" << endl;
    	cout << "	Clue 0: Terdiri dari 3 kata" << endl;
    	cout << "	Clue 1: Tempat untuk tinggal" << endl;
		cout << "	Clue 2: Tidak sehat"<< endl;
		cout << "	Clue 3: Psikolog" << endl;   
		cout << "	---------------------------------------------------------------" << endl;
    	cout << endl;
    	cout << endl;
    	cout << endl;
       
        
        
        cout << endl;
        cout << endl;
        cout << "	Jawaban: ";
        getline(cin, tebakan);
        
        if(tebakan=="rumah sakit jiwa"){
            cout << endl;
        	cout << "	----------------------------------------" << endl;
            cout << "	Benar!" << endl;  
			cout << "	Lanjut ke level selanjutnya? (ya/tidak)" << endl;
			cout << "	----------------------------------------" << endl;
			cin >> jwb;
			if(jwb == "ya"){
			system("CLS"); }
			else{ exit(0);
		   } break; }
		   
        else {
        	system("CLS");
		 }
		if(a==0){
			cout << "Kalah!" << endl;
			cout << "Coba lagi? (ya/tidak)" << endl;
			cin >> jwb2;
			if(jwb2 == "ya") {
				system("CLS");
				break; }
			else if("tidak"){
				exit(0);
			}
			}}
		 	} 
	
	
int level3() {
    int nyawa = 2;
    string tebakan, jwb, jwb2;
    
    for(int a = nyawa; a >= 0 ; a--){
    	cout << endl;
    	 
    	cout << "	Level 3" << endl;
    	cout << endl;
   		cout << endl;
    	cout << endl;
    	cout << endl;
    	
    	cout << "	---------------------------------------------------------------" << endl;
    	cout << "	Clue 0: Terdiri dari 1 kata" << endl;
    	cout << "	Clue 1: Berkuah" << endl;
		cout << "	Clue 2: Kebanyakan disukai oleh wanita"<< endl;
		cout << "	Clue 3: Lembek dan pedas" << endl;   
		cout << "	---------------------------------------------------------------" << endl;
    
    	cout << endl;
    	cout << endl;
    	cout << endl;
       
        
        
        cout << endl;
        cout << endl;
        cout << "	Jawaban: ";
        getline(cin, tebakan);
        
        if(tebakan=="seblak"){
            cout << endl;
        	cout << "	----------------------------------------" << endl;
            cout << "	Benar!" << endl;  
			cout << "	Lanjut ke level selanjutnya? (ya/tidak)" << endl;
			cout << "	----------------------------------------" << endl;
			cin >> jwb;
			if(jwb == "ya"){
			system("CLS"); }
			else{ exit(0);
		   } break; }
		   
        else if (tebakan!="seblak"){
        	cout << "Salah!" << endl;
        	system("CLS");
		 }
		if(a==0){
			cout << "Kalah!" << endl;
			cout << "Coba lagi? (ya/tidak)" << endl;
			cin >> jwb2;
			if(jwb2 == "ya") {
				system("CLS");
				break; }
			else if("tidak"){
				exit(0);
			}
			}}
		 	} 
	
	
int level4() {
    int nyawa = 2;
    string tebakan, jwb, jwb2;
    
    for(int a = nyawa; a >= 0 ; a--){
    	cout << endl;
    	 
    	cout << "	Level 4" << endl;
    	cout << endl;
   		cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << "	---------------------------------------------------------------" << endl;
    	cout << "	Clue 0: Terdiri dari 1 kata" << endl;
    	cout << "	Clue 1: Untuk keselamatan" << endl;
		cout << "	Clue 2: Berhubungan dengan pengendara"<< endl;
		cout << "	Clue 3: Ketertiban" << endl; 
		cout << "	---------------------------------------------------------------" << endl;  
    
    	cout << endl;
    	cout << endl;
    	cout << endl;
       
        
        
        cout << endl;
        cout << endl;
        cout << "	Jawaban: ";
        getline(cin, tebakan);
        
        if(tebakan=="helm"){
            cout << endl;
        	cout << "	----------------------------------------" << endl;
            cout << "	Benar!" << endl;  
			cout << "	Lanjut ke level selanjutnya? (ya/tidak)" << endl;
			cout << "	----------------------------------------" << endl;
			cin >> jwb;
			if(jwb == "ya"){
			system("CLS"); }
			else{ exit(0);
		   } break; }
		   
        else if (tebakan!="helm"){
        	cout << "Salah!" << endl;
        	system("CLS");
		 }
		if(a==0){
			cout << "Kalah!" << endl;
			cout << "Coba lagi? (ya/tidak)" << endl;
			cin >> jwb2;
			if(jwb2 == "ya") {
				system("CLS");
				break; }
			else if("tidak"){
				exit(0);
			}
			}}
		 	} 
		 	
		 	
int level5() {
    int nyawa = 2;
    string tebakan, jwb, jwb2;
    
    for(int a = nyawa; a >= 0 ; a--){
    	cout << endl;
    	 
    	cout << "	Level 5" << endl;
    	cout << endl;
   		cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << "	---------------------------------------------------------------" << endl;
    	cout << "	Clue 0: Terdiri dari 3 kata" << endl;
		cout << "	Clue 1: Makhluk hidup" << endl;
		cout << "	Clue 2: Dilindungi dan hampir punah"<< endl;
		cout << "	Clue 3: Hanya ada di daerah tertentu" << endl;   
		cout << "	---------------------------------------------------------------" << endl;
    
    	cout << endl;
    	cout << endl;
    	cout << endl;
       
        
        
        cout << endl;
        cout << endl;
        cout << "	Jawaban: ";
        getline(cin, tebakan);
        
        if(tebakan=="badak bercula satu"){
            cout << endl;
        	cout << "	----------------------------------------" << endl;
            cout << "	Benar!" << endl;  
			cout << "	Lanjut ke level selanjutnya? (ya/tidak)" << endl;
			cout << "	----------------------------------------" << endl;
			cin >> jwb;
			if(jwb == "ya"){
			system("CLS"); }
			else{ exit(0);
		   } break; }
		   
        else if (tebakan!="badak bercula satu"){
        	cout << "Salah!" << endl;
        	system("CLS");
		 }
		if(a==0){
			cout << "Kalah!" << endl;
			cout << "Coba lagi? (ya/tidak)" << endl;
			cin >> jwb2;
			if(jwb2 == "ya") {
				system("CLS");
				break; }
			else if("tidak"){
				exit(0);
			}
			}}
		 	} 

int level6() {
    int nyawa = 2;
    string tebakan, jwb, jwb2;
    
    for(int a = nyawa; a >= 0 ; a--){
    	cout << endl;
    	 
    	cout << "	Level 6" << endl;
    	cout << endl;
   		cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << "	---------------------------------------------------------------" << endl;
    	cout << "	Clue 0: Terdiri dari 1 kata" << endl;
		cout << "	Clue 1: Reptil" << endl;
		cout << "	Clue 2: Hanya ada pada suatu negara di Asia Tenggara"<< endl;
		cout << "	Clue 3: genus Varanus" << endl;   
		cout << "	---------------------------------------------------------------" << endl;
    
    	cout << endl;
    	cout << endl;
    	cout << endl;
       
        
        
        cout << endl;
        cout << endl;
        cout << "	Jawaban: ";
        getline(cin, tebakan);
        
        if(tebakan=="komodo"){
            cout << endl;
        	cout << "	----------------------------------------" << endl;
            cout << "	Benar!" << endl;  
			cout << "	Lanjut ke level selanjutnya? (ya/tidak)" << endl;
			cout << "	----------------------------------------" << endl;
			cin >> jwb;
			if(jwb == "ya"){
			system("CLS"); }
			else{ exit(0);
		   } break; }
		   
        else if (tebakan!="komodo"){
        	cout << "Salah!" << endl;
        	system("CLS");
		 }
		if(a==0){
			cout << "Kalah!" << endl;
			cout << "Coba lagi? (ya/tidak)" << endl;
			cin >> jwb2;
			if(jwb2 == "ya") {
				system("CLS");
				break; }
			else if("tidak"){
				exit(0);
			}
			}}
		 	} 
		 	
		 	
int level7() {
    int nyawa = 2;
    string tebakan, jwb, jwb2;
    
    for(int a = nyawa; a >= 0 ; a--){
    	cout << endl;
    	 
    	cout << "	Level 7" << endl;
    	cout << endl;
   		cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << "	---------------------------------------------------------------" << endl;
    	cout << "	Clue 0: Terdiri dari 2 kata" << endl;
		cout << "	Clue 1: Digunakan pada cuaca tertentu" << endl;
		cout << "	Clue 2: Alat pelindung badan dan pakaian"<< endl;
		cout << "	Clue 3: Berhubungan dengan air" << endl;   
		cout << "	---------------------------------------------------------------" << endl;
    
    	cout << endl;
    	cout << endl;
    	cout << endl;
       
        
        
        cout << endl;
        cout << endl;
        cout << "	Jawaban: ";
        getline(cin, tebakan);
        
        if(tebakan=="jas hujan"){
            cout << endl;
        	cout << "	----------------------------------------" << endl;
            cout << "	Benar!" << endl;  
			cout << "	Lanjut ke level selanjutnya? (ya/tidak)" << endl;
			cout << "	----------------------------------------" << endl;
			cin >> jwb;
			if(jwb == "ya"){
			system("CLS"); }
			else{ exit(0);
		   } break; }
		   
        else if (tebakan!="jas hujan"){
        	cout << "Salah!" << endl;
        	system("CLS");
		 }
		if(a==0){
			cout << "Kalah!" << endl;
			cout << "Coba lagi? (ya/tidak)" << endl;
			cin >> jwb2;
			if(jwb2 == "ya") {
				system("CLS");
				break; }
			else if("tidak"){
				exit(0);
			}
			}}
		 	} 
		 	
int level8() {
    int nyawa = 2;
    string tebakan, jwb, jwb2;
    
    for(int a = nyawa; a >= 0 ; a--){
    	cout << endl;
    	 
    	cout << "	Level 8" << endl;
    	cout << endl;
   		cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << "	---------------------------------------------------------------" << endl;
    	cout << "	Clue 0: Terdiri dari 2 kata" << endl;
		cout << "	Clue 1: Membantu memasak sesuatu" << endl;
		cout << "	Clue 2: Alat yang praktis"<< endl;
		cout << "	Clue 3: Alat rumah tangga" << endl;   
		cout << "	---------------------------------------------------------------" << endl;
    
    	cout << endl;
    	cout << endl;
    	cout << endl;
       
        
        
        cout << endl;
        cout << endl;
        cout << "	Jawaban: ";
        getline(cin, tebakan);
        
        if(tebakan=="magic com"){
            cout << endl;
        	cout << "	----------------------------------------" << endl;
            cout << "	Benar!" << endl;  
			cout << "	Lanjut ke level selanjutnya? (ya/tidak)" << endl;
			cout << "	----------------------------------------" << endl;
			cin >> jwb;
			if(jwb == "ya"){
			system("CLS"); }
			else{ exit(0);
		   } break; }
		   
        else if (tebakan!="magic com"){
        	cout << "Salah!" << endl;
        	system("CLS");
		 }
		if(a==0){
			cout << "Kalah!" << endl;
			cout << "Coba lagi? (ya/tidak)" << endl;
			cin >> jwb2;
			if(jwb2 == "ya") {
				system("CLS");
				break; }
			else if("tidak"){
				exit(0);
			}
			}}
		 	} 
		 	
int level9() {
    int nyawa = 2;
    string tebakan, jwb, jwb2;
    
    for(int a = nyawa; a >= 0 ; a--){
    	cout << endl;
    	 
    	cout << "	Level 9" << endl;
    	cout << endl;
   		cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << "	---------------------------------------------------------------" << endl;
    	cout << "	Clue 0: Terdiri dari 1 kata" << endl;
		cout << "	Clue 1: Serba bisa" << endl;
		cout << "	Clue 2: Portable"<< endl;
		cout << "	Clue 3: Kebutuhan mahasiswa" << endl;   
		cout << "	---------------------------------------------------------------" << endl;
    
    	cout << endl;
    	cout << endl;
    	cout << endl;
       
        
        
        cout << endl;
        cout << endl;
        cout << "	Jawaban: ";
        getline(cin, tebakan);
        
        if(tebakan=="laptop"){
            cout << endl;
        	cout << "	----------------------------------------" << endl;
            cout << "	Benar!" << endl;  
			cout << "	Lanjut ke level selanjutnya? (ya/tidak)" << endl;
			cout << "	----------------------------------------" << endl;
			cin >> jwb;
			if(jwb == "ya"){
			system("CLS"); }
			else{ exit(0);
		   } break; }
		   
        else if (tebakan!="laptop"){
        	cout << "Salah!" << endl;
        	system("CLS");
		 }
		if(a==0){
			cout << "Kalah!" << endl;
			cout << "Coba lagi? (ya/tidak)" << endl;
			cin >> jwb2;
			if(jwb2 == "ya") {
				system("CLS");
				break; }
			else if("tidak"){
				exit(0);
			}
			}}
		 	} 
		 	
int level10() {
    int nyawa = 2;
    string tebakan, jwb, jwb2;
    
    for(int a = nyawa; a >= 0 ; a--){
    	cout << endl;
    	 
    	cout << "	Level 10" << endl;
    	cout << endl;
   		cout << endl;
    	cout << endl;
    	cout << endl;
    	cout << "	---------------------------------------------------------------" << endl;
    	cout << "	Clue 0: Terdiri dari 1 kata" << endl;
		cout << "	Clue 1: Tempat sakral" << endl;
		cout << "	Clue 2: Sunyi dan sepi"<< endl;
		cout << "	Clue 3: Sedih" << endl;   
		cout << "	---------------------------------------------------------------" << endl;
    
    	cout << endl;
    	cout << endl;
    	cout << endl;
       
        
        
        cout << endl;
        cout << endl;
        cout << "	Jawaban: ";
        getline(cin, tebakan);
        
        if(tebakan=="kuburan"){
            cout << endl;
        	cout << "	----------------------------------------" << endl;
            cout << "	Benar!" << endl;  
			cout << "	Lanjut ke level selanjutnya? (ya/tidak)" << endl;
			cout << "	----------------------------------------" << endl;
			cin >> jwb;
			if(jwb == "ya"){
			system("CLS"); }
			else{ exit(0);
		   } break; }
		   
        else if (tebakan!="kuburan"){
        	cout << "Salah!" << endl;
        	system("CLS");
		 }
		if(a==0){
			cout << "Kalah!" << endl;
			cout << "Coba lagi? (ya/tidak)" << endl;
			cin >> jwb2;
			if(jwb2 == "ya") {
				system("CLS");
				break; }
			else if("tidak"){
				exit(0);
			}
			}}
		 	} 
	
	int peraturan(){
		string jwb;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "			-----------------------------------------------------------------" << endl;
		cout << "			|     Peraturan permainan: Anda hanya dapat menebak maksimal    |" << endl;
		cout << "			|               2 kali pada tiap pertanyaan. Jika lebih        	|" << endl;
		cout << "			|               dari 2 kali maka, anda dinyatakan kalah        	|" << endl;
		cout << "                        |                           (ketik ok)                          |" << endl;
		cout << "			-----------------------------------------------------------------" << endl;
		
		cin >> jwb;
		if(jwb == "ok"){
			system("CLS");
		}else{ exit(0);
		}
	}
	
int fin(){
	
	string jwb;
	
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "			---------------------------------------------------------------" << endl;
	cout << "			|       Yeeeeeeeeeeey kamu berhasil nyelesain game ini!       |" << endl;
	cout << "			|                           Main lagi?                        |" << endl;
	cout << "			|                          ya     tidak                       |" << endl;
	cout << "			---------------------------------------------------------------" << endl;
	
	cin >> jwb;
	if(jwb == "ya"){
		system("CLS");
	}else{ exit(0);
	}
}

	
	int main(){
		while(true){
		system("color 60");
		intro();
		peraturan();
		level1();
		level2();
		level3();
		level4();
		level5();
		level6();
		level7();
		level8();
		level9();
		level10(); 
		fin();	} }
