#include <stdio.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

int main()
{
    int i,secim,mbakiye,cekilecek,yatirilacak,kacis,_5tl=0,_10tl=0,_20tl=0,_50tl=0,_100tl=0;
    
    printf("Hesabinizdaki Tutari Giriniz: ");scanf("%d",&mbakiye);
    while(mbakiye>0)
    {
        if(mbakiye>0)
        {
            if((mbakiye-100)>=0 && _100tl<10)
            {
                
                mbakiye-=100;
                _100tl++;
            }
            else if((mbakiye-50)>=0 && _50tl<20)
            {
                mbakiye-=50;
                _50tl++;
            }
            else if((mbakiye-20)>=0 && _20tl<50)
            {
                mbakiye-=20;
                _20tl++;
            }
            else if((mbakiye-10)>=0 && _10tl<50)
            {
                 mbakiye-=10;
                _10tl++;
            }
            else if((mbakiye-5)>=0 )
            {
                mbakiye-=5;
                _5tl++;
            }
        }
    }
    mbakiye=(_5tl*5)+(_10tl*10)+(_20tl*20)+(_50tl*50)+(_100tl*100);
    for(i=1;secim!=4;i++)
    {   
        printf("\n----------------------------MENU----------------------------\n\n1  Kasayi Goster\n2  Para Cekme\n3  Para Yatirma\n4  Cikis\nSeciminiz: ");scanf("%d",&secim);
        switch(secim)
        {
            case 1:
            {
                printf(" |\n V\nMevcut Bakiye:%d\n",mbakiye);
                printf("******Kasanin Durumu******\n");
                printf("5 TL lik Banknot Adeti:%d\n10 TL lik Banknot Adeti:%d\n20 TL lik Banknot Adeti:%d\n50 TL lik Banknot Adeti:%d\n100 TL lik Banknot Adeti:%d\n\n\n\n",_5tl,_10tl,_20tl,_50tl,_100tl);
                break;
            }

            case 2:
            {
                printf(" |\n V\n");
                printf("Cekilecek Miktar:");scanf("%d",&cekilecek);
                printf("(Isleminiz Devam Ediyor...)");sleep(4);printf("Tamamlandi\n");
               
                for(;cekilecek>mbakiye;)
                {
                    if(cekilecek>mbakiye && mbakiye>0)
                    {
                        printf("!!Hata!! %dTL kadar bakiyeniz yok.Tekrar deneyiniz\n",cekilecek);
                        printf("Cekilecek Miktar:");scanf("%d",&cekilecek);
                        if(cekilecek<=mbakiye && cekilecek%5==0)
                        {
                            printf("Isleminiz Devam Ediyor...");sleep(4);printf("Tamamlandi\n");
                        }
                        
                    }
                    else if(cekilecek>mbakiye && mbakiye<=0)
                    {
                        printf("\nBankamatikte banknot kalmadi isterseniz para yatirin(3) ya da cikis yapin(4)\n");scanf("%d",&kacis);
                        if(kacis==4)
                            {
                                exit(0);
                            }
                        else if(kacis==3)
                            {
                                goto k;
                            }
                    }
                }   
                for(;cekilecek%5!=0;)
                {
                     printf("!!Hata!! 5 in kati miktarda para cekebilirsiniz.Tekrar deneyiniz\n");
                     printf("Cekilecek Miktar:");scanf("%d",&cekilecek);
                }
                printf("\nMevcut Bakiye:%d",mbakiye);
                printf("\nCekilen Miktar:%d\n",cekilecek);
                while(cekilecek>0)
                {
                        if((cekilecek-100)>=0 && _100tl>0)
                        {
                            mbakiye-=100;
                            cekilecek-=100;
                            _100tl--;
                        }
                        else if((cekilecek-50)>=0 && _50tl>0)
                        {
                            mbakiye-=50;
                            cekilecek-=50;
                            _50tl--;
                        }
                        else if((cekilecek-20)>=0 && _20tl>0)
                        {
                            mbakiye-=20;
                            cekilecek-=20;
                            _20tl--;
                        }
                        else if((cekilecek-10)>=0 && _10tl>0)
                        {
                            mbakiye-=10;
                            cekilecek-=10;
                            _10tl--;
                        }
                        else if((cekilecek-5)>=0 && _5tl>0 )
                        {
                            mbakiye-=5;
                            cekilecek-=5;
                            _5tl--;
                        }
                }
                j:
                printf("Mevcut Yeni Bakiye:%d\n\n\n\n",mbakiye);
                break;
            }

            case 3:
            {
                k:
                printf(" |\n V\n");
                printf("Yatirilacak Miktar:");scanf("%d",&yatirilacak);
                printf("(Isleminiz Devam Ediyor...)");sleep(4);printf("Tamamlandi\n");
                if(yatirilacak<=0)
                {
                    printf("!!Hata!! yanlis miktar girdiniz .Tekrar deneyiniz\n");
                    for(;yatirilacak<=0;)
                    {
                    printf("Yatirilacak Miktar:");scanf("%d",&yatirilacak);
                    }
                }
                printf("\nMevcut Bakiye:%d",mbakiye);
                printf("\nYatirilan Miktar:%d\n",yatirilacak);
                while(yatirilacak>0)
                {
                    if(yatirilacak>0)
                    {
                        if((yatirilacak-100)>=0 && _100tl<10)
                        {
                            mbakiye+=100;
                            yatirilacak-=100;
                            _100tl++;
                        }
                        else if((yatirilacak-50)>=0 && _50tl<20)
                        {
                            mbakiye+=50;
                            yatirilacak-=50;
                            _50tl++;
                        }
                        else if((yatirilacak-20)>=0 && _20tl<50)
                        {
                            mbakiye+=20;
                            yatirilacak-=20;
                            _20tl++;
                        }
                        else if((yatirilacak-10)>=0 && _10tl<50)
                        {
                            mbakiye+=10;
                            yatirilacak-=10;
                            _10tl++;
                        }
                        else if((yatirilacak-5)>=0 )
                        {
                            mbakiye+=5;
                            yatirilacak-=5;
                            _5tl++;
                        }
                    }
                }
                printf("Mevcut Yeni Bakiye:%d\n\n\n\n",mbakiye);
                break;
            }
        }
        i=1;
    }
    return 0;
}



