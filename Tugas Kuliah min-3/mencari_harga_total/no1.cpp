#include <iostream>

int main(){
  constexpr float harga_per_drum = 100000.0f;
  constexpr float kapasitas_jerigen = 1.0f / 20.0f;

  float harga_per_jerigen = harga_per_drum * kapasitas_jerigen;

  float jumlah_jerigen;
  float total_barang;
  
  std::cout << "Harga per Jerigen saat ini: Rp" << harga_per_jerigen << std::endl;
  std::cout << "Masukkan Jumlah Jerigen Yang Ingin Dibeli: ";
  std::cin >> jumlah_jerigen;

  total_barang = jumlah_jerigen * harga_per_jerigen;

  std::cout << "Total: Rp" << total_barang << std::endl;

  return 0;

}
