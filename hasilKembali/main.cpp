#include <iostream>


int main(){
  float uangSaku;
  float barang[5];
  float uangKembalian;
  float totalBelanja = 0;

  std::cout << "Uangmu Sekarang: ";
  std::cin >> uangSaku;

  for(int i = 0; i < 5; i++) {
    std::cout << "Masukkan Harga Belanjaan " << (i + 1) << " :" << std::ends;
    std::cin >> barang[i];

    totalBelanja += barang[i];
  }
  uangKembalian = uangSaku - totalBelanja;

  std::cout << "====== Ringkasan Belanja ======\n";
  std::cout << "Total Belanja: " << totalBelanja << '\n';
  if(uangKembalian < 0){
    std::cout << "Dude, uangmu kurang " << uangKembalian << ". Get a job vro" << std::ends; 
  } else {
    std::cout << "Uang Kembalian: " << uangKembalian << std::ends;
  }
  return 0;
}
