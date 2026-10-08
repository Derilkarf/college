#include <iostream>

int main() {
    constexpr float luasTanah = 115.0f;
    constexpr float hargaPerMeterAmir = 1850.0f; // Harga jual yang diinginkan Pak Amir
    constexpr float totalBayarAli = 207000.0f;   // Total uang yang dibayarkan Pak Ali

    float hargaPerMeterAli = totalBayarAli / luasTanah;
    
    // 3. Menjawab Pertanyaan 2: Kerugian Pak Amir
    float totalHargaAmir = luasTanah * hargaPerMeterAmir; 
    
    float kerugianAmir = totalHargaAmir - totalBayarAli;

    std::cout << "Harga per meter yang dibeli Pak Ali: Rp " << hargaPerMeterAli << std::endl;
    std::cout << "Kerugian yang dialami Pak Amir: Rp " << kerugianAmir << std::endl;

    return 0;
}
