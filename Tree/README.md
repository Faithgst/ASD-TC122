
# Tree
- Kumpulan node yang saling terhubung satu sama lain dalam suatu kesatuan yang membentuk layakya struktur sebuah pohon.

- Struktur pohon adalah suatu cara merepresentasikan suatu struktur hirarki (one-to-many) secara grafis yang mirip sebuah pohon, walaupun pohon tersebut hanya tampak sebagai kumpulan node-node dari atas ke bawah.

## Contoh Tree
![Contoh Tree](https://camo.githubusercontent.com/df4e70f8621e5cd42c29491882971c99478f3c1811ce675123e0f557e29f93c3/68747470733a2f2f696d616765332e736c69646573657276652e636f6d2f353734343839392f636f6e746f682d747265652d73696c73696c61682d6b656c75617267612d6c2e6a7067)

## Macam - Macam Tree
- Tree Statik: isi node-nodenya tetap karena bentuk pohonnya sudah ditentukan.

- Tree Dinamik: isi nodenya berubah-ubah karena proses penambahan (insert) dan penghapusan (delete)

## Node Root
- Node root dalam sebuah tree adalah suatu node yang memiliki hierarki tertinggi dan dapat juga memiliki node-node anak. Semua node dapat ditelusuri dari node root tersebut.
- Node root adalah node khusus yang tercipta pertama kalinya.
- Node-node lain di bawah node root saling terhubung satu sama lain dan disebut subtree.

## Terminologi
![Terminologi](https://camo.githubusercontent.com/0e630a405cdb67b775774f8d0596ba8be92ed4d3260d103d1359721e20481665/68747470733a2f2f342e62702e626c6f6773706f742e636f6d2f2d6b525268455f71335272732f576c6d477042724b6c4a492f41414141414141414252632f65765536676d35762d385543624a654e3845513854663231422d705f7559413267434c63424741732f73313630302f436170747572652e4a5047)

## Implementasi Program 
- Tree dapat dibuat dengan menggunakan linked list secara rekursif.
- Data yang pertama kali masuk akan menjadi node root.
- Data yang lebih kecil dari data node root akan masuk dan menempati node kiri dari node root, sedangkan jika lebih besar dari data node root, akan masuk dan menempati node di sebelah kanan node root.

## Operasi - operasi pada Tree
- Create: Membentuk sebuah tree baru yang kosong.
- Clear: Menghapus semua elemen tree.
- Empty: Mengetahui apakah tree kosong atau tidak.
- Insert: Menambah node ke dalam Tree secara rekursif.
- Find: Mencari node di dalam Tree secara rekursif sampai node tersebut ditemukan dengan menggunakan variable bantuan ketemu.
- Traverse: yaitu operasi kunjungan terhadap node-node dalam pohon dimana masing-masing node akan dikunjungi sekali.
- Count: Menghitung jumlah node dalam Tree.
- Height : Mengetahui kedalaman sebuah Tree.
- Find Min dan Find Max : Mencari nilai terkecil dan terbesar pada Tree.
- Child : Mengetahui anak dari sebuah node (jika punya).