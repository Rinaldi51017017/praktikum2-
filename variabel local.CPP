#include <iostream.h>
#include <conio.h>
float z = 9.0;               // global variabel
int i = 10;

void tampilkan_lagi(void);
main()
{
float p = 2.0; //lokal terhadap main ()
cout << i << " " << p << " " << z << "\n";
tampilkan_lagi();
//returm 0;
getch();
}

void tampilkan_lagi(void)
{
int j = 5.0;     //lokal terhadap tampilkanjagiQ
cout << j << " " << z << "\n";
//error, tidak dapat menampilkan variabel p
//cout << p << "n";
return;
getch();
}
