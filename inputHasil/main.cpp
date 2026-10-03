// INPUT HASIL UJIAN

#include <iostream>
#include <string>
int main() {
  std::string inputNilai[4] = {"mts", "uas", "t1", "t2"};
  float nilai[4];
  float total = 0;
  float bobot[4] = {0.4f, 0.3f, 0.2f, 0.1f};

  for(int i = 0; i < 4; i++) {
    std::cout << "Masukkan Nilai " << inputNilai[i] << ": " << std::ends;
    std::cin >> nilai[i];
  
    total += nilai[i] * bobot[i];
  }
  std::cout << "Hasil Total Keseluruhan: " << total << std::endl;
  return 0;
}
