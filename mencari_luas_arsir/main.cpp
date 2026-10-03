#include <iostream>

const float phi = 3.14f;

int main(){
  float panjang, lebar;
  float jari_jari;

  std::cout<<"Masukkan p1: ";
  std::cin>> panjang;
 
  std::cout<<"Masukkan l1: ";
  std::cin>> lebar;

  std::cout<<"Masukkan Jari Jari: ";
  std::cin>> jari_jari;

  float luasLingkaran = phi * (jari_jari * jari_jari);
  float luasPersegi = panjang * lebar;

  float luasTotal = luasLingkaran - luasPersegi;
  if (luasTotal <= 0.0f){
    std::cout<<"Hasil Negatif" << std::endl;
    return -1;
  }

  std::cout<<"Hasil Perhitungan: " << luasTotal << std::endl;
  return 0;
} 
