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
	char giris[11]="HO�GELD�N�Z";
	system ("COLOR D");
	printf("						%s						",giris);
	
}

int main() {
	setlocale(LC_ALL, "Turkish");
	char ad[10],soyad[10],sehir,ek,il,ilce,hastane,poli,hekim;
	int tc[11],gun,ay,yil,saat,dk,sifre,a,b,c,sira,sayi;
	baslik();
	printf("\n");
	printf("�ye misiniz?(evet ise 2, hay�r ise 1):");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("						�YE OLUNUZ						\n");
			printf("TC:");
			scanf("%d",&tc);
			printf("AD:");
			scanf("%s",ad);
			printf("SOYAD:");
			scanf("%s",soyad);
			printf("YA�ADI�INIZ �EH�R:");
			scanf("%s",&sehir);
			printf("DO�UM TAR�H�(gg/aa/yy):");
			scanf("%d",&gun);
			scanf("%d",&ay);
			scanf("%d",&yil);
			printf("��FRE(RAKAMLARDAN OLU�MALI VE 4 HANEL� OLMALIDIR.):");
			scanf("%d",&sifre);
			printf("\n");
			printf("						G�R�� YAPINIZ						\n");
			break;
		case 2:
			printf("\n");
			printf("						G�R�� YAPINIZ						\n");
			break;
	}
	printf("AD:");
	scanf("%s",ad);
	printf("SOYAD:");
	scanf("%s",soyad);
	printf("TC:");
	scanf("%d",&tc);
	printf("��FRE:");
	scanf("%d",&sifre);
	printf("\n");
	printf("Randevu almak istiyorsaniz 'e' harfine bas�n�z:");
	scanf("%s",&ek);
	while(ek=='e')
	{
		printf("Randevunuzu nereden almak istersiniz?(sagl�k oca�� ise 3/hastane ise 4):");
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
				printf("Ka��nc� randevunuzu ald���n�z� giriniz:");
				scanf("%d",&sira);
				sayi=sifre+gun+ay+sira;
				printf("SAYIN %s %s %d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.L�tfen randevunuzdan 15 dakika �nce geliniz.\n",ad,soyad,randevuno(sayi),gun,ay,yil,saat,dk);
				FILE *filep = fopen("saglikocagirandevubilgileri.txt","w");
				if (filep==NULL)
				{
					printf("RANDEVU KAYDED�LEMED�.TEKRAR RANDEVU OLU�TURUNUZ!");
				}
				else
				{
					fprintf(filep,"SAYIN %s %s %d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.L�tfen randevunuzdan 15 dakika �nce geliniz.\n",ad,soyad,randevuno(sayi),gun,ay,yil,saat,dk );
					fclose(filep);
				}
				break;
				case 4:
				printf("Randevunuzu neye g�re almak istersiniz?(konuma g�re ise 5/hastaneye g�re ise 6/hekime g�re ise 7):\n");
				scanf("%d",&c);
					switch(c)
					{case 5:
				    	printf("�L:");
						scanf("%s",&il);
						printf("�L�E:");
						scanf("%s",&ilce);
						printf("HASTANE ADI:");
						scanf("%s",&hastane);
						printf("POL�KL�N�K:");
						scanf("%s",&poli);
						printf("Tarih giriniz(gg/aa/yy):");
						scanf("%d",&gun);
						scanf("%d",&ay);
						scanf("%d",&yil);
						printf("Saat giriniz(ss:dd):");
						scanf("%d",&saat);
						scanf("%d",&dk);
						printf("Ka��nc� randevunuzu ald���n�z� giriniz:");
						scanf("%d",&sira);
						sayi=sifre+gun+ay+sira;
						printf("%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.L�tfen randevunuzdan 15 dakika �nce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk);
						FILE *filep1 = fopen("konumagorerandevubilgileri.txt","w");
						if (filep1==NULL)
						{
							printf("RANDEVU KAYDED�LEMED�.TEKRAR RANDEVU OLU�TURUNUZ!");
						}
						else
						{
							fprintf(filep1,"%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.L�tfen randevunuzdan 15 dakika �nce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk );
							fclose(filep1);
						}
						break;
					case 6:
						printf("HASTANE ADI:");
						scanf("%s",&hastane);
						printf("POL�KL�N�K:");
						scanf("%s",&poli);
						printf("Tarih giriniz(gg/aa/yy):");
						scanf("%d",&gun);
						scanf("%d",&ay);
						scanf("%d",&yil);
						printf("Saat giriniz(ss:dd):");
						scanf("%d",&saat);
						scanf("%d",&dk);
						printf("Ka��nc� randevunuzu ald���n�z� giriniz:");
						scanf("%d",&sira);
						sayi=sifre+gun+ay+sira;
						printf("%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.L�tfen randevunuzdan 15 dakika �nce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk);
						FILE *filep2 = fopen("hastaneyegorerandevubilgileri.txt","w");
						if (filep2==NULL)
						{
							printf("RANDEVU KAYDED�LEMED�.TEKRAR RANDEVU OLU�TURUNUZ!");
						}
						else
						{
							fprintf(filep2,"%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.L�tfen randevunuzdan 15 dakika �nce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk );
							fclose(filep2);
						}
						break;
					case 7:
						printf("HEK�M ADI SOYADI:");
						scanf("%s",&hekim);
						printf("Tarih giriniz(gg/aa/yy):");
						scanf("%d",&gun);
						scanf("%d",&ay);
						scanf("%d",&yil);
						printf("Saat giriniz(ss:dd):");
						scanf("%d",&saat);
						scanf("%d",&dk);
						printf("Ka��nc� randevunuzu ald���n�z� giriniz:");
						scanf("%d",&sira);
						sayi=sifre+gun+ay+sira;
						printf("%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.L�tfen randevunuzdan 15 dakika �nce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk);
						FILE *filep3 = fopen("hekimegorerandevubilgileri.txt","w");
						if (filep3==NULL)
						{
							printf("RANDEVU KAYDED�LEMED�.TEKRAR RANDEVU OLU�TURUNUZ!");
						}
						else
						{
							fprintf(filep3,"%d nolu randevunuz %d/%d/%d tarihinde %d:%d saatindedir.L�tfen randevunuzdan 15 dakika �nce geliniz.\n",randevuno(sayi),gun,ay,yil,saat,dk );
							fclose(filep3);
						}
						break;}
				break;}
			printf("\n");
			printf("Ba�ka randevu almak ister misiniz(e/h):");
			scanf("%s",&ek);
			printf("\n");
			if(ek=='e')
			 continue;
		 else
			 break;
	}
				
	return 0;
}
