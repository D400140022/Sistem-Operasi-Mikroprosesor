void setup() //fungsi untuk inisialisasi program yang dibuat
{
Serial.begin(9600);  //Setting kecepatan data dalam bits per second (baud) untuk penyampaian data serial
}

void loop() //Fungsi yang programnya untuk dieksekusi berulang-ulang
{
  Serial.print("Tugas Operasi Mikroprosesor Minggu ke-1\n"); //Menampilkan string di serial monitor
delay(2000); //Memberi jeda waktu selama 2 detik
}
