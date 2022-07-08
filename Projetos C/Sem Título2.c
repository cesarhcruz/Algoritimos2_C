#include <stdio.h>
int identificarDivisivelPor3( int matriz[5][5] );
int main(int argc, char const *argv[])
{
  int j , i;
  //Matriz com valores fixo para não fazer a leitura
  int matriz[5][5] = {{15,9,23,43,49},
                      {3,36,55,53,18},
                      {12,42,51,57,34},
                      {6,32,28,25,62},
                      {72,91,81,16,41}
                     };
  for(i=0; i<5; i++)for(j=0; j<5; j++)
    if( identificarDivisivelPor3( i , j , matriz ) == 1 )
      printf("o Numero %3d eh DivisiveL por 3\n",matriz[i][j]);
  return 0;
}
int identificarDivisivelPor3( int i, int j , int matriz[5][5] )
{
  if( matriz[i][j] % 3 == 0 )   
  {
    return 1;  /// marca como divisivel
  }
  else
  {
    return 0; /// marca como não divisIveL
  }
}
