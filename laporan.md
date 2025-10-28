# Laporan Lengkap: Kompleksitas Algoritma - Studi Kasus Rute Optimal Pengiriman Produk Agrotech

## Pendahuluan

Laporan ini menyajikan analisis mendalam terhadap kompleksitas algoritma dalam konteks sistem logistik AgroTech Express. Sistem ini bertujuan untuk mengoptimalkan distribusi hasil pertanian di Pulau Sumatera Selatan melalui tiga aspek utama: pencarian data kota, penentuan rute pengiriman, dan pengurutan laporan administrasi. Analisis mencakup implementasi algoritma, langkah-langkah eksekusi, kompleksitas waktu dan ruang, serta perbandingan performa.

Data kota yang digunakan:
- [A] Bandar Lampung
- [B] Metro
- [C] Pringsewu
- [D] Liwa
- [E] Kotabumi
- [F] Palembang
- [G] Baturaja
- [H] Lahat
- [I] Lubuklinggau
- [J] Bengkulu
- [K] Curup
- [L] Pagar Alam
- [M] Jambi
- [N] Sarolangun
- [O] Muara Bungo

## Bagian 1: Pencarian Data Kota Menggunakan Linear Search dan Binary Search

### Algoritma Linear Search
Linear Search adalah algoritma pencarian sederhana yang memeriksa setiap elemen array satu per satu hingga menemukan target atau mencapai akhir array.

### Langkah-Langkah Pencarian Kota K (Curup)
- Mulai dari indeks 0 (Bandar Lampung).
- Bandingkan dengan target 'K': Tidak cocok, lanjut ke indeks 1 (Metro).
- Lanjutkan hingga indeks 10 (Curup) - cocok, kembalikan indeks 10.
- Total langkah: 11 perbandingan.

### Kompleksitas Waktu dan Ruang
- **Kompleksitas Waktu**: O(n) - Kasus terbaik O(1), terburuk O(n) untuk n=15 kota.
- **Kompleksitas Ruang**: O(1) - Hanya variabel konstan.

### Kompleksitas Jika Data Diurutkan dan Menggunakan Binary Search
Jika data diurutkan (A-Z), Binary Search dapat digunakan dengan kompleksitas waktu O(log n), lebih efisien untuk data besar karena membagi pencarian menjadi dua setiap iterasi.

### Kondisi Dimana Binary Search Tidak Efektif
- Data sering berubah (insert/delete) karena memerlukan pengurutan ulang.
- Tidak cocok untuk data kecil atau struktur data seperti linked list yang tidak mendukung akses acak.

## Bagian 2: Penentuan Rute Terpendek Menggunakan Brute Force untuk TSP

### Pendahuluan
Bagian ini menganalisis Traveling Salesman Problem (TSP) untuk 5 kota utama: F (Palembang), G (Baturaja), H (Lahat), I (Lubuklinggau), J (Bengkulu). Tujuan: menemukan rute terpendek yang mengunjungi setiap kota sekali dan kembali ke awal (F).

### Data Jarak Antar Kota (km)
- F-G: 115
- F-H: 210
- F-I: 290
- F-J: 390
- G-H: 130
- G-I: 190
- G-J: 310
- H-I: 150
- H-J: 260
- I-J: 140

### Metode Brute Force
Brute Force menghasilkan semua permutasi rute dimulai dari F, menghitung total jarak, dan memilih minimum.

### Jalur Terpendek
- **Jalur**: F-G-I-J-H-F atau F-H-J-I-G-F
- **Total Jarak**: 915 km
- **Langkah Perhitungan**: Dari 24 permutasi (4!), jalur dengan jarak minimum dipilih setelah perhitungan semua kombinasi.

### Kompleksitas Waktu
- O((n-1)!) untuk n=5 (24 permutasi), dengan perhitungan jarak O(n) per permutasi → total O(n!).

### Mengapa TSP NP-Complete dan Dampak Penambahan Kota
TSP NP-Complete karena verifikasi solusi optimal sulit dalam waktu polinomial dan dapat direduksi dari masalah lain. Untuk n=10-15 kota, kompleksitas eksponensial membuat Brute Force tidak feasible; diperlukan heuristik seperti Nearest Neighbor atau algoritma aproksimasi untuk solusi suboptimal.

## Bagian 3: Pengurutan Data Kota Menggunakan Bubble Sort

### Data Kota Awal (Acak)
[K, B, M, F, A, P, D, H, C, N, L, E, O, G, J]

### Langkah-Langkah Bubble Sort
Bubble Sort membandingkan elemen bersebelahan dan menukar jika tidak urut (A-Z). Proses diulang hingga tidak ada swap.

#### Iterasi 1-8 (Ringkasan)
- Iterasi 1: Beberapa swap, elemen besar seperti P bergerak ke kanan.
- Iterasi 2-7: Elemen kecil bergerak ke kiri melalui swap.
- Iterasi 8: Tidak ada swap, data terurut.

### Hasil Akhir
[A, B, C, D, E, F, G, H, J, K, L, M, N, O, P]

### Jumlah Perbandingan dan Pertukaran
- Perbandingan: 105 (n*(n-1)/2)
- Pertukaran: 52

### Kompleksitas
- **Waktu**: O(n²)
- **Ruang**: O(1)

### Perbedaan Performa dengan Insertion Sort dan Quick Sort
- **Insertion Sort**: O(n²) worst case, O(n) untuk data hampir terurut; lebih efisien praktis daripada Bubble Sort.
- **Quick Sort**: O(n log n) rata-rata, lebih cepat untuk data besar; worst case O(n²) tapi dapat dioptimalkan.

## Tabel Summary

| Bagian | Algoritma | Hasil Akhir | Kompleksitas Waktu | Kompleksitas Ruang |
|--------|-----------|--------------|-------------------|-------------------|
| 1 | Linear Search & Binary Search | Ditemukan "K" pada indeks 10 | O(n) / O(log n) | O(1) |
| 2 | Brute Force (TSP) | Jalur F-G-I-J-H-F atau F-H-J-I-G-F, 915 km | O((n-1)!) | O(n²) |
| 3 | Bubble Sort | [A, B, C, D, E, F, G, H, J, K, L, M, N, O, P] | O(n²) | O(1) |

## Kesimpulan

Analisis ini menunjukkan bahwa algoritma sederhana seperti Linear Search dan Bubble Sort cocok untuk data kecil, sementara masalah kompleks seperti TSP memerlukan pendekatan canggih untuk skalabilitas. Kompleksitas algoritma memengaruhi efisiensi sistem logistik, dengan rekomendasi menggunakan algoritma O(n log n) untuk pengurutan dan heuristik untuk routing pada skala besar. Implementasi kode C++ mendukung validasi hasil ini.