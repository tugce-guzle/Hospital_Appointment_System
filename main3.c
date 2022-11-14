#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int randevuno(int sayi);
int randevuno(int sayi)
{
	return sayi;
}
int baslik();
int baslik()
{
	char giris[11]="HOÞGELDÝNÝZ";
	system ("COLOR D");
	printf("						%s						",giris);
	
}

int main() {
	setlocale(LC_ALL, "Turkish");
	char ad[10],soyad[10],sehir,ek,il,ilce,hastane,poli,hekim;
	int tc[11],gun,ay,yil,saat,dk,sifre,a,b,c,sira,sayi;
	baslik();
	printf("\n");
	printf("Üye misiniz?(evet ise 2, hayýr ise 1):");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("						ÜYE OLUNUZ						\n");
			printf("TC:");
			scanf("%d",&tc);
			printf("AD:");
			scanf("%s",ad);
			printf("SOYAD:");
			scanf("%s",soyad);
			printf("YAÞADIÐINIZ ÞEHÝR:");
			scanf("%s",&sehir);
			printf("DOÐUM TARÝHÝ(gg/aa/yy):");
			scanf("%d",&gun);
			scanf("%d",&ay);
			scanf("%d",&yil);
			printf("ÞÝFRE(RAKAMLARDAN OLUÞMALI VE 4 HANELÝ OLMALIDIR.):");
			scanf("%d",&sifre);
			printf("\n");
			printf("						GÝRÝÞ YAPINIZ						\n");
			break;
		case 2:
			printf("\n");
			printf("						GÝRÝÞ YAPINIZ						\n");
			break;
	}
	printf("AD:");
	scanf("%s",ad);
	printf("SOYAD:");
	scanf("%s",soyad);
	printf("TC:");
	scanf("%d",&tc);
	printf("ÞÝFRE:");
	scanf("%d",&sifre);
	printf("\n");
	printf("Randevu almak istiyorsaniz 'e' harfine basýnýz:");
	scanf("%s",&ek);
	while(ek=='e')
	{
		printf("Randevunuzu nereden almak istersiniz?(saglýk ocaðý ise 3/hastane ise 4):");
		scanf("%d",&b);
		switch(b)
		{		case 3:
				printf("Tarih giriniz(gg/aa/yy):");
				scanf("%d",&gun);
				scanf("%d",&ay);
				scanf("%d",&yil);
				printf("Saat giriniz(ss:dd):");
				scanf("%d",&saat);
				scanf("%d",&dk);
				printf("Kaçýncý randevunuzu aldýðýnýzý giriniz:");
				scanf("%d",&sira);
				sayi=sifre+gun+ay+sira;
				printf("SAYIN %s %s %d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.Lütfen randevunuzdan 15 dakika önce geliniz.\n",ad,soyad,randevuno(sayi),gun,ay,yil,saat,dk);
				FILE *filep = fopen("saglikocagirandevubilgileri.txt","w");
				if (filep==NULL)
				{
					printf("RANDEVU KAYDEDÝLEMEDÝ.TEKRAR RANDEVU OLUÞTURUNUZ!");
				}
				else
				{
					fprintf(filep,"SAYIN %s %s %d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.Lütfen randevunuzdan 15 dakika önce geliniz.\n",ad,soyad,randevuno(sayi),gun,ay,yil,saat,dk );
					fclose(filep);
				}
				break;
				case 4:
				printf("Randevunuzu neye göre almak istersiniz?(konuma göre ise 5/hastaneye göre ise 6/hekime göre ise 7):\n");
				scanf("%d",&c);
					switch(c)
					{case 5:
				    	printf("ÝL:");
						scanf("%s",&il);
						printf("ÝLÇE:");
						scanf("%s",&ilce);
						printf("HASTANE ADI:");
						scanf("%s",&hastane);
						printf("POLÝKLÝNÝK:");
						scanf("%s",&poli);
						printf("Tarih giriniz(gg/aa/yy):");
						scanf("%d",&gun);
						scanf("%d",&ay);
						scanf("%d",&yil);
						printf("Saat giriniz(ss:dd):");
						scanf("%d",&saat);
						scanf("%d",&dk);
						printf("Kaçýncý randevunuzu aldýðýnýzý giriniz:");
						scanf("%d",&sira);
						sayi=sifre+gun+ay+sira;
						printf("%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.Lütfen randevunuzdan 15 dakika önce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk);
						FILE *filep1 = fopen("konumagorerandevubilgileri.txt","w");
						if (filep1==NULL)
						{
							printf("RANDEVU KAYDEDÝLEMEDÝ.TEKRAR RANDEVU OLUÞTURUNUZ!");
						}
						else
						{
							fprintf(filep1,"%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.Lütfen randevunuzdan 15 dakika önce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk );
							fclose(filep1);
						}
						break;
					case 6:
						printf("HASTANE ADI:");
						scanf("%s",&hastane);
						printf("POLÝKLÝNÝK:");
						scanf("%s",&poli);
						printf("Tarih giriniz(gg/aa/yy):");
						scanf("%d",&gun);
						scanf("%d",&ay);
						scanf("%d",&yil);
						printf("Saat giriniz(ss:dd):");
						scanf("%d",&saat);
						scanf("%d",&dk);
						printf("Kaçýncý randevunuzu aldýðýnýzý giriniz:");
						scanf("%d",&sira);
						sayi=sifre+gun+ay+sira;
						printf("%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.Lütfen randevunuzdan 15 dakika önce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk);
						FILE *filep2 = fopen("hastaneyegorerandevubilgileri.txt","w");
						if (filep2==NULL)
						{
							printf("RANDEVU KAYDEDÝLEMEDÝ.TEKRAR RANDEVU OLUÞTURUNUZ!");
						}
						else
						{
							fprintf(filep2,"%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.Lütfen randevunuzdan 15 dakika önce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk );
							fclose(filep2);
						}
						break;
					case 7:
						printf("HEKÝM ADI SOYADI:");
						scanf("%s",&hekim);
						printf("Tarih giriniz(gg/aa/yy):");
						scanf("%d",&gun);
						scanf("%d",&ay);
						scanf("%d",&yil);
						printf("Saat giriniz(ss:dd):");
						scanf("%d",&saat);
						scanf("%d",&dk);
						printf("Kaçýncý randevunuzu aldýðýnýzý giriniz:");
						scanf("%d",&sira);
						sayi=sifre+gun+ay+sira;
						printf("%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.Lütfen randevunuzdan 15 dakika önce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk);
						FILE *filep3 = fopen("hekimegorerandevubilgileri.txt","w");
						if (filep3==NULL)
						{
							printf("RANDEVU KAYDEDÝLEMEDÝ.TEKRAR RANDEVU OLUÞTURUNUZ!");
						}
						else
						{
							fprintf(filep3,"%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.Lütfen randevunuzdan 15 dakika önce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk );
							fclose(filep3);
						}
						break;}
				break;}
			printf("\n");
			printf("Baþka randevu almak ister misiniz(e/h):");
			scanf("%s",&ek);
			printf("\n");
			if(ek=='e')
			 continue;
		 else
			 break;
	}
				
	return 0;
}
