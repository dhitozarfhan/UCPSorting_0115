

// 1. Algoritma Insertion sort ini bekerja dengan cara menyisipkan elemen baru ke dalam array yang sudah terurut. Perbandingan dan penukaran dilakukan pada saat penyisipan elemen baru.

// 2. Algoritma  Selection Sort berkerja dengan cara mencari elemen pertama. Perbandingan dan penukaran dilakukan pada saat iterasi untuk menemukan elemen minimum/maksimum dan saat penukaran.

// 3. Jumlah langkah dalam algoritma sortir dapat dihitung dengan berbagai cara, tergantung pada jenis algoritma, ukuran array, dan data array. dapat juga menggunakan analisis kompleksitas waktu, menghitung langkah secara manual, atau pustaka/framework untuk mengetahui jumlah langkah yang dilakukan.
     
// 4. 

    #include <iostream>
    using namespace std;
    int fs[15];
    int n;

    void input() {
        while (true) {
            cout << "erindhito nur fauzan zharfan:";
            cin >> n;
            if (n <= 20)
                break;
            else {
                cout << "\narray dapat mempunyai maksimal 20 elemen.\n";

            }

        }

        cout << endl;
        cout << "===============" << endl;
        cout << "masukan elemen array" << endl;
        cout << "===============" << endl;

        for (int i = 0; i < n; i++) {
            cout << "data ke-" << (i + 1) << ";";
            cin >> fs[i];

        }

        void insertionSort() {
            int i, temp, j;

            for (i = 1; i <= n - 1; i++)
            {
                temp = fs[i];
                j = i - 1;
                while (j >= 0 && fs[j];)
                    j = j - 1;
            }

        }
   

    void display() {
        cout << endl;
        cout << "===============" << endl;
        cout << "element array yang telah tersusun" << endl;
        cout << "===============" << endl;
        for (int j = 0; j < n; j++) {
            cout << fs[j] << endl;
        }
        cout << "jumlah pass = " << n - 1 << endl;
        cout << endl;
    }

    int main()
    {
        input();
        insertionSort();
        display();

    }



           


    
                
               
                   
               
            
       


