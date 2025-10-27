# Bagian 1: Linear Search untuk Pencarian Kota K

## 1. Algoritma Linear Search
Algoritma Linear Search digunakan untuk mencari elemen target dalam array dengan cara memeriksa setiap elemen satu per satu dari awal hingga akhir.

## 2. Langkah-langkah Pencarian
- Mulai dari indeks 0.
- Bandingkan elemen pada indeks saat ini dengan target 'K'.
- Jika cocok, kembalikan indeks.
- Jika tidak, lanjut ke indeks berikutnya.
- Jika mencapai akhir array tanpa menemukan, kembalikan -1.
- Dalam kasus ini, 'K' ditemukan pada indeks 10.

## 3. Kompleksitas Waktu dan Ruang
- **Kompleksitas Waktu**: O(n), di mana n adalah jumlah elemen dalam array. Dalam kasus terbaik O(1), terburuk O(n).
- **Kompleksitas Ruang**: O(1), karena hanya menggunakan variabel tambahan konstan.

## 4. Kompleksitas jika Data Diurutkan dan Menggunakan Binary Search
Jika data diurutkan, Binary Search dapat digunakan dengan kompleksitas waktu O(log n), yang lebih efisien untuk data besar karena membagi array menjadi dua setiap iterasi.

## 5. Kondisi Dimana Binary Search Tidak Efektif
Binary Search tidak efektif jika data sering berubah (insert/delete), karena memerlukan data terurut. Juga tidak cocok untuk data kecil atau linked list, karena akses acak diperlukan.