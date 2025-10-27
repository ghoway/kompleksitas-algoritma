# Bagian 3: Pengurutan Data Kota Menggunakan Bubble Sort

## Data Kota Awal (Acak)
[K, B, M, F, A, P, D, H, C, N, L, E, O, G, J]

## Langkah-Langkah Bubble Sort
Bubble Sort bekerja dengan membandingkan elemen bersebelahan dan menukar posisi jika tidak dalam urutan yang benar (A-Z berdasarkan kode kota). Proses ini diulang hingga tidak ada lagi pertukaran.

### Iterasi 1:
- Bandingkan K dan B: K > B, swap → [B, K, M, F, A, P, D, H, C, N, L, E, O, G, J]
- B dan K: B < K, no swap
- K dan M: K < M, no swap
- M dan F: M > F, swap → [B, K, F, M, A, P, D, H, C, N, L, E, O, G, J]
- F dan M: F < M, no swap
- M dan A: M > A, swap → [B, K, F, A, M, P, D, H, C, N, L, E, O, G, J]
- A dan M: A < M, no swap
- M dan P: M < P, no swap
- P dan D: P > D, swap → [B, K, F, A, M, D, P, H, C, N, L, E, O, G, J]
- D dan P: D < P, no swap
- P dan H: P > H, swap → [B, K, F, A, M, D, H, P, C, N, L, E, O, G, J]
- H dan P: H < P, no swap
- P dan C: P > C, swap → [B, K, F, A, M, D, H, C, P, N, L, E, O, G, J]
- C dan P: C < P, no swap
- P dan N: P > N, swap → [B, K, F, A, M, D, H, C, N, P, L, E, O, G, J]
- N dan P: N < P, no swap
- P dan L: P > L, swap → [B, K, F, A, M, D, H, C, N, L, P, E, O, G, J]
- L dan P: L < P, no swap
- P dan E: P > E, swap → [B, K, F, A, M, D, H, C, N, L, E, P, O, G, J]
- E dan P: E < P, no swap
- P dan O: P > O, swap → [B, K, F, A, M, D, H, C, N, L, E, O, P, G, J]
- O dan P: O < P, no swap
- P dan G: P > G, swap → [B, K, F, A, M, D, H, C, N, L, E, O, G, P, J]
- G dan P: G < P, no swap
- P dan J: P > J, swap → [B, K, F, A, M, D, H, C, N, L, E, O, G, J, P]

### Iterasi 2:
- B dan K: B < K, no swap
- K dan F: K > F, swap → [B, F, K, A, M, D, H, C, N, L, E, O, G, J, P]
- F dan K: F < K, no swap
- K dan A: K > A, swap → [B, F, A, K, M, D, H, C, N, L, E, O, G, J, P]
- A dan K: A < K, no swap
- K dan M: K < M, no swap
- M dan D: M > D, swap → [B, F, A, K, D, M, H, C, N, L, E, O, G, J, P]
- D dan M: D < M, no swap
- M dan H: M > H, swap → [B, F, A, K, D, H, M, C, N, L, E, O, G, J, P]
- H dan M: H < M, no swap
- M dan C: M > C, swap → [B, F, A, K, D, H, C, M, N, L, E, O, G, J, P]
- C dan M: C < M, no swap
- M dan N: M < N, no swap
- N dan L: N > L, swap → [B, F, A, K, D, H, C, M, L, N, E, O, G, J, P]
- L dan N: L < N, no swap
- N dan E: N > E, swap → [B, F, A, K, D, H, C, M, L, E, N, O, G, J, P]
- E dan N: E < N, no swap
- N dan O: N < O, no swap
- O dan G: O > G, swap → [B, F, A, K, D, H, C, M, L, E, N, G, O, J, P]
- G dan O: G < O, no swap
- O dan J: O > J, swap → [B, F, A, K, D, H, C, M, L, E, N, G, J, O, P]
- J dan O: J < O, no swap
- O dan P: O < P, no swap

### Iterasi 3:
- B dan F: B < F, no swap
- F dan A: F > A, swap → [B, A, F, K, D, H, C, M, L, E, N, G, J, O, P]
- A dan F: A < F, no swap
- F dan K: F < K, no swap
- K dan D: K > D, swap → [B, A, F, D, K, H, C, M, L, E, N, G, J, O, P]
- D dan K: D < K, no swap
- K dan H: K > H, swap → [B, A, F, D, H, K, C, M, L, E, N, G, J, O, P]
- H dan K: H < K, no swap
- K dan C: K > C, swap → [B, A, F, D, H, C, K, M, L, E, N, G, J, O, P]
- C dan K: C < K, no swap
- K dan M: K < M, no swap
- M dan L: M > L, swap → [B, A, F, D, H, C, K, L, M, E, N, G, J, O, P]
- L dan M: L < M, no swap
- M dan E: M > E, swap → [B, A, F, D, H, C, K, L, E, M, N, G, J, O, P]
- E dan M: E < M, no swap
- M dan N: M < N, no swap
- N dan G: N > G, swap → [B, A, F, D, H, C, K, L, E, M, G, N, J, O, P]
- G dan N: G < N, no swap
- N dan J: N > J, swap → [B, A, F, D, H, C, K, L, E, M, G, J, N, O, P]
- J dan N: J < N, no swap
- N dan O: N < O, no swap
- O dan P: O < P, no swap

### Iterasi 4:
- B dan A: B > A, swap → [A, B, F, D, H, C, K, L, E, M, G, J, N, O, P]
- A dan B: A < B, no swap
- B dan F: B < F, no swap
- F dan D: F > D, swap → [A, B, D, F, H, C, K, L, E, M, G, J, N, O, P]
- D dan F: D < F, no swap
- F dan H: F < H, no swap
- H dan C: H > C, swap → [A, B, D, F, C, H, K, L, E, M, G, J, N, O, P]
- C dan H: C < H, no swap
- H dan K: H < K, no swap
- K dan L: K < L, no swap
- L dan E: L > E, swap → [A, B, D, F, C, H, K, E, L, M, G, J, N, O, P]
- E dan L: E < L, no swap
- L dan M: L < M, no swap
- M dan G: M > G, swap → [A, B, D, F, C, H, K, E, L, G, M, J, N, O, P]
- G dan M: G < M, no swap
- M dan J: M > J, swap → [A, B, D, F, C, H, K, E, L, G, J, M, N, O, P]
- J dan M: J < M, no swap
- M dan N: M < N, no swap
- N dan O: N < O, no swap
- O dan P: O < P, no swap

### Iterasi 5:
- A dan B: A < B, no swap
- B dan D: B < D, no swap
- D dan F: D < F, no swap
- F dan C: F > C, swap → [A, B, D, C, F, H, K, E, L, G, J, M, N, O, P]
- C dan F: C < F, no swap
- F dan H: F < H, no swap
- H dan K: H < K, no swap
- K dan E: K > E, swap → [A, B, D, C, F, H, E, K, L, G, J, M, N, O, P]
- E dan K: E < K, no swap
- K dan L: K < L, no swap
- L dan G: L > G, swap → [A, B, D, C, F, H, E, K, G, L, J, M, N, O, P]
- G dan L: G < L, no swap
- L dan J: L > J, swap → [A, B, D, C, F, H, E, K, G, J, L, M, N, O, P]
- J dan L: J < L, no swap
- L dan M: L < M, no swap
- M dan N: M < N, no swap
- N dan O: N < O, no swap
- O dan P: O < P, no swap

### Iterasi 6:
- A dan B: A < B, no swap
- B dan D: B < D, no swap
- D dan C: D > C, swap → [A, B, C, D, F, H, E, K, G, J, L, M, N, O, P]
- C dan D: C < D, no swap
- D dan F: D < F, no swap
- F dan H: F < H, no swap
- H dan E: H > E, swap → [A, B, C, D, F, E, H, K, G, J, L, M, N, O, P]
- E dan H: E < H, no swap
- H dan K: H < K, no swap
- K dan G: K > G, swap → [A, B, C, D, F, E, H, G, K, J, L, M, N, O, P]
- G dan K: G < K, no swap
- K dan J: K > J, swap → [A, B, C, D, F, E, H, G, J, K, L, M, N, O, P]
- J dan K: J < K, no swap
- K dan L: K < L, no swap
- L dan M: L < M, no swap
- M dan N: M < N, no swap
- N dan O: N < O, no swap
- O dan P: O < P, no swap

### Iterasi 7:
- A dan B: A < B, no swap
- B dan C: B < C, no swap
- C dan D: C < D, no swap
- D dan F: D < F, no swap
- F dan E: F > E, swap → [A, B, C, D, E, F, H, G, J, K, L, M, N, O, P]
- E dan F: E < F, no swap
- F dan H: F < H, no swap
- H dan G: H > G, swap → [A, B, C, D, E, F, G, H, J, K, L, M, N, O, P]
- G dan H: G < H, no swap
- H dan J: H < J, no swap
- J dan K: J < K, no swap
- K dan L: K < L, no swap
- L dan M: L < M, no swap
- M dan N: M < N, no swap
- N dan O: N < O, no swap
- O dan P: O < P, no swap

### Iterasi 8:
- A dan B: A < B, no swap
- B dan C: B < C, no swap
- C dan D: C < D, no swap
- D dan E: D < E, no swap
- E dan F: E < F, no swap
- F dan G: F < G, no swap
- G dan H: G < H, no swap
- H dan J: H < J, no swap
- J dan K: J < K, no swap
- K dan L: K < L, no swap
- L dan M: L < M, no swap
- M dan N: M < N, no swap
- N dan O: N < O, no swap
- O dan P: O < P, no swap

Data sudah terurut, tidak ada swap lagi.

## Hasil Akhir
[A, B, C, D, E, F, G, H, J, K, L, M, N, O, P]

## Jumlah Perbandingan dan Pertukaran
- Jumlah Perbandingan: 105 (15 elemen, n*(n-1)/2 = 15*14/2 = 105)
- Jumlah Pertukaran (Swap): 52

## Kompleksitas
- **Kompleksitas Waktu**: O(n²) - Karena ada dua loop bersarang, dengan n = 15, waktu proporsional dengan kuadrat jumlah elemen.
- **Kompleksitas Ruang**: O(1) - Bubble Sort hanya menggunakan variabel tambahan untuk swap, tidak memerlukan ruang tambahan yang bergantung pada ukuran input.

## Perbedaan Performa dengan Insertion Sort dan Quick Sort
- **Insertion Sort**: Kompleksitas waktu O(n²) dalam kasus terburuk, tetapi O(n) untuk data hampir terurut. Lebih efisien daripada Bubble Sort karena lebih sedikit operasi swap dan perbandingan dalam praktik. Cocok untuk data kecil atau hampir terurut.
- **Quick Sort**: Kompleksitas waktu rata-rata O(n log n), lebih cepat untuk data besar. Worst case O(n²) jika pivot buruk, tetapi dapat dioptimalkan. Lebih efisien daripada Bubble Sort untuk sebagian besar kasus, terutama dengan data acak.