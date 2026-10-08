#include <iostream>

int main() {
 constexpr float luasTanah = 360.0f;
 float luasJagung = luasTanah * (3.0f / 8.0f);
 float luasSingkong = luasTanah * (1.0 / 3.0f);
 float luasIkan = luasTanah - (luasJagung + luasSingkong);

  std::cout << "Total Luas Tanah Jagung Adalah: " << luasJagung << std::endl;
  std::cout << "Total Luas Tanah Singkong Adalah: " << luasSingkong << std::endl;
  std::cout << "Total Luas Tanah Kolam Ikan Adalah: " << luasIkan << std::endl;

  return 0;
}
