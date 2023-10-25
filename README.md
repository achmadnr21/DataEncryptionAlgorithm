# DataEncryptionAlgorithm
Implementing Data Encryption Standard Algorithm in C++
Achmad Nashruddin Riskynanda - 5025201021
<br>
- Menggunakan tipe data 64-bit uint64_t, bukan string atau char sehingga 64-bit yang digunakan benar 64-bit, bukan 64*8(char) bit.
- Melakukan bitwise operation left shift, right shift, and, or, xor, not
- Dapat memuat 18446744073709551615 block data selama masih terdapat memory yang dapat digunakan karena mengimplementasikan MALLOC, dimana tiap block berisikan 64-bit data (8 karakter ASCII).

## Howto
cara menggunakan.

1. compile program dengan `g++ cli-simple.cpp -o des`. Pada repository sudah terdapat program tercompile, dan pada waktu compile, saya menggunakan Linux Ubuntu, sehingga mungkin dapat di run pada Linux OS, sedangkan untnuk user windows harus mengcompile manual.
2. syntax penggunaan
        `./des -[e/d] [hexkey / 8char key] -[text/hex] [input untuk dilakukan Encrypt atau Decrypt]`
3. untuk Key dapat diisikan bebas HEX 16 digit atau string 8 karakter.
4. untuk menu input ada -hex dan -text sesuai dengan namanya. input dapat berupa hex atau text.
    @Untuk text yang ada spasinya, gunakan '...' untuk melakukannya. Contoh
    `./des -e FFAABBCC11223344 -text 'ACHMAD NASHRUDDIN RISKYNANDA'`

