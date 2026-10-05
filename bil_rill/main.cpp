#include <iostream>
#include <cmath>

int main(){
  int pilihan;
  float angka, hasil;
  char ulang;

  do{
    std::cout << "=== Kalkulator sederhana ===\n";
    std::cout << "1. Pangkat dua\n";
    std::cout << "2. Akar kuadrat\n";
    std::cout << "3. Nilai Mutlak\n";
    std::cout << "Pilih salah satu: " << std::ends;
    std::cin >> pilihan; 
   
    switch(pilihan) {
      case 1:
        std::cout << "Masukkan angka yang ingin dipangkatkan: " << std::ends;
        std::cin >> angka;
        
        hasil = pow(angka, 2);
        std::cout << hasil << " Adalah hasil dari perpangkatan\n\n" << std::ends;
        break;
    
      case 2:
        std::cout << "Masukkan Angka yang ingin diakar: :" << std::ends;
        std::cin >> angka;
       
        if(angka < 0) {
          std::cout << "EROR!. angka tidak boleh negatif";
        } else {
          hasil = sqrt(angka);
          std::cout << hasil << " Adalah hasil dari akar\n\n" << std::ends;
        
        }
       break;


      case 3:
        std::cout << "Masukkan Angka yang ingin dimutlakkan (Negatif / Positif): " <<std::ends;
        std::cin >> angka;

        hasil = fabs(angka);
          
          if(angka > 0) {
            std::cout << hasil << " Merupakan bilangan positif\n\n";
          } else {
            std::cout << "Hasil telah dikonversi menjadi bilangan positif " << hasil << "\n\n";
          }

        break;  
    
      default:
        std::cout << "Pilihan tidak ada di menu!\n";  
    }
    std::cout << "Apakah anda ingin mengulang?\n";
    std::cout << "Klik 'Y / 'y' kalau ingin melanjutkan\n";
    std::cin >> ulang;

  }while (ulang == 'Y' || ulang == 'y');
   return 0;
}

