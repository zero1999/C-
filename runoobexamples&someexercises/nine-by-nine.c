#include <stdio.h>
#include "../zylib/zylib.h"
int  main()
{
  int  i, j;
  //  打印表头
  printf( "   Nine-by-nine Multiplication Table\n" );
  printf( "---------------------------------------\n" );
  printf( "  " );			//  双空格，跳过最左列
  for( i = 1; i <= 9; ++i )		//  横排 1～9 标志
    printf( "%4d", i ); 
  printf( "\n" );
  printf( "---------------------------------------\n" );
for( i = 1; i <= 9; ++i )		//  逐行打印，共 9 行
  {
    printf( "%2d", i );		//  最左列的竖排标志
    for( j = 1; j <= 9; ++j )	//  打印 9 列，只打印上三角
    {					//  下三角填充空格
      if( j < i )
        printf( "    " );		//  打印四空格
      else
        printf( "%4d", i * j );
    }
    printf( "\n" );			//  结束一行打印，换行
  }
  printf( "---------------------------------------\n" );
  return 0;
}
