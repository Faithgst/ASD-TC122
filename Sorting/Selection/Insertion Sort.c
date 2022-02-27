#include <stdio.h>

//inisialisasi data
int angka[8]={23, 67, 89, 5, 45, 20, 15, 27};

void main(){
	//looping sebanyak jumlah data-1
	for(int i=1; i<8; i++){
		//looping selama angka ke-j (j sudah di set sebagai i di awal)
		//lebih kecil dari j-1
		for(int j=i; j>0 && angka[j]<angka[j-1]; j--){
			//lakukan swap value
			int temp=angka[j-1];
			angka[j-1]=angka[j];
			angka[j]=temp;
		}
	}

	//cetak data
	printf("Hasil Sorting: \n");
	for(int i=0; i<8; i++){
		printf("%d ", angka[i]);
	}
	getchar();
}
