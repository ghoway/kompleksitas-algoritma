# Bagian 2: Rute Terpendek Menggunakan Brute Force untuk TSP

## Pendahuluan
Bagian ini membahas penerapan algoritma Brute Force untuk menyelesaikan Traveling Salesman Problem (TSP) pada 5 kota utama di Sumatera Selatan: F (Palembang), G (Baturaja), H (Lahat), I (Lubuklinggau), dan J (Bengkulu). Tujuan adalah menemukan rute terpendek yang mengunjungi setiap kota sekali dan kembali ke kota awal (F).

## Data Jarak Antar Kota
Tabel jarak antar kota (dalam km):
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

## Metode Brute Force
Brute Force untuk TSP melibatkan pencarian semua kemungkinan permutasi rute yang dimulai dan berakhir di kota F, kemudian menghitung total jarak untuk setiap permutasi dan memilih yang minimum.

### Langkah-langkah:
1. Tetapkan kota awal sebagai F.
2. Generate semua permutasi dari 4 kota sisanya (G, H, I, J).
3. Untuk setiap permutasi, hitung total jarak: F → kota1 → kota2 → kota3 → kota4 → F.
4. Bandingkan total jarak dan pilih yang terkecil.

### Hasil Perhitungan
Ada 24 permutasi (4! = 24). Berikut adalah beberapa contoh perhitungan:

- F-G-H-I-J-F: 115 + 130 + 150 + 140 + 390 = 925 km
- F-G-I-J-H-F: 115 + 190 + 140 + 260 + 210 = 915 km
- F-H-J-I-G-F: 210 + 260 + 140 + 190 + 115 = 915 km
- F-I-J-H-G-F: 290 + 140 + 260 + 130 + 115 = 935 km

Setelah menghitung semua, rute terpendek adalah:
- **Jalur**: F-G-I-J-H-F atau F-H-J-I-G-F
- **Total jarak tempuh**: 915 km

## Kompleksitas Waktu
- **Kompleksitas waktu**: O((n-1)!) di mana n adalah jumlah kota. Untuk n=5, ini adalah O(24), yang feasible, tetapi untuk n lebih besar, eksponensial.
- Dalam implementasi, kita perlu menghitung jarak untuk setiap permutasi, sehingga total operasi adalah O((n-1)! * n) untuk menghitung jarak.

## Mengapa TSP Tergolong NP-Complete?
TSP adalah masalah NP-Complete karena:
- Sulit diverifikasi solusi optimal dalam waktu polinomial.
- Bisa direduksi dari masalah NP-Complete lainnya.
- Tidak ada algoritma polinomial yang diketahui untuk menyelesaikannya secara pasti.

### Dampak Jika Jumlah Kota Ditambah Menjadi 10-15
- Untuk n=10, (9!) ≈ 362.880 permutasi – masih mungkin dengan komputasi tinggi.
- Untuk n=15, (14!) ≈ 8.7 × 10^10 – tidak feasible secara praktis, bahkan dengan superkomputer.
- Dampak: Membutuhkan algoritma aproksimasi atau heuristik seperti Nearest Neighbor atau Genetic Algorithm untuk solusi suboptimal dalam waktu yang wajar.

## Kesimpulan
Brute Force memberikan solusi optimal untuk n kecil, tetapi tidak skalabel. Untuk aplikasi nyata, gunakan pendekatan heuristik.