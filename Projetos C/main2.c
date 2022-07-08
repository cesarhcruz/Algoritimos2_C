 #include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>
/// prototipo de funcoes
int divisivel3 ( int , int , int matriz[5][5] );

int main(int argc, char const *argv[])
{
  int j , i , cont = 0;
  HANDLE _h = GetStdHandle(STD_OUTPUT_HANDLE);
  SetConsoleTextAttribute( _h , 15 + ( 9 << 4 ) );
  //Matriz com valores fixo para não fazer a leitura
  int matriz[5][5] = {
      { 15 ,  9 , 23 , 43 , 49 },
      {  3 , 36 , 55 , 53 , 18 },
      { 12 , 42 , 51 , 57 , 34 },
      {  6 , 32 , 28 , 25 , 62 },
      { 72 , 91 , 81 , 16 , 41 }
  };
  printf("\n");
  for(i=0; i<5; i++)for(j=0; j<5; j++)
    if( divisivel ( i , j , matriz ) == 1 )
    {
      printf("  Numero divisivel por 3 Encontrado "
             "na linha %3d , coluna %3d , Numero %3d = %5.2f  \n",
      i+1,j+1,matriz [i][j],(float)matriz [i][j] / 3);
      cont++;
    }
  printf("\nTotal de DivisIveis por 3 => %d", cont );
  printf("\n\tTecle\n\n\n");
  getch();
  SetConsoleTextAttribute( _h , 7 + ( 0 << 4 ) );
  return 0;
}
int divisivel ( int i, int j , int matriz[5][5] )
{
  if( matriz[i][j] % 3 == 0 )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
