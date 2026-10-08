#include <ios>
#include <iostream>
#include <iomanip>

int main() {
  //Operasi
  constexpr int durasiOperasi = 2;
  constexpr float hargaKamarOperasi = 300000.0f;
  constexpr float hargaOperasi = 100000.0f;

  float obat_operasi = 500.0 + 400.0 + 200.0;
  float durasi_obat_operasi = obat_operasi * 2;
  
  float total_biaya_operasi = (hargaKamarOperasi + hargaOperasi + durasi_obat_operasi) * durasiOperasi;

  //pemulihan
  constexpr int durasiPemulihan = 3;
  constexpr float hargaKamarPemulihan = 200000.0f;
  float obat_pemulihan = 100.0 + 150.0 + 175.0;
  float durasi_obat_pemulihan = obat_pemulihan * 3;

  float total_biaya_pemulihan = (hargaKamarPemulihan + durasi_obat_pemulihan) * durasiPemulihan;


  float subtotal = total_biaya_operasi + total_biaya_pemulihan;
  float total_keseluruhan = subtotal - (subtotal * 0.05);
 
  std::cout << std::fixed << std::setprecision(0);
  std::cout << "Total Biaya Keseluruhan Adalah: " << total_keseluruhan << std::endl;
  return 0;
}
