#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void bul(int, int);
long sonuc = 0;
int matris [10][10];
int x,y;
int hareket = 0;
void matrisYazdir()
{
  int a,b;
  for(a = 0; a < x; a++)
  {
    for(b = 0; b < y; b++)
    {
      printf("%d\t", matris[a][b]);
    }
    printf("\n");
  }
}
int main()
{
  int a,b;
  printf("Matris bouytlarini giriniz\n");
  scanf("%d%d", &x,&y);

  for(a = 0; a < x; a++)
  {
    for(b = 0; b < y; b++)
    {
      matris[a][b] = 0;
      matris[0][0] = 1;
    }
  }
  bul(0,0);
  printf("\n\n sonuc = %d\n\n", sonuc);
  return 0;
}

void bul(int i, int j)
{
  if(i == x-1 && j == y-1)
  {
    sonuc++;
    //matrisYazdir();
    //printf("\n\n");
    return;
  }

  if(i+1 < x && matris[i+1][j] == 0)
  {
    matris[i+1][j] = 1;
    bul(i+1, j);
    matris[i+1][j] = 0;
  }

  if(i-1 >= 0 && matris[i-1][j] == 0)
  {
    matris[i-1][j] = 1;
    bul(i-1, j);
    matris[i-1][j] = 0;
  }
  if(j+1 < x && matris[i][j+1] == 0)
  {
    matris[i][j+1] = 1;
    bul(i, j+1);
    matris[i][j+1] = 0;
  }

  if(j-1 >= 0 && matris[i][j-1] == 0)
  {
    matris[i][j-1] = 1;
    bul(i, j-1);
    matris[i][j-1] = 0;
  }
}
