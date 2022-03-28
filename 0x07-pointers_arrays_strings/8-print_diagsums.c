# inclure  " main.h "

/* *
* print_chessboard - imprime l'échiquier.
*
* @a : lignes.
* Retour : rien.
 */
void  print_chessboard ( char (*a)[8])
{
	int je, j ;

	pour (i = 0 ; i < 8 ; i++)
	{
		pour (j = 0 ; j < 8 ; j++)
		{
			_putchar (a[i][j]);
		}
		_putchar ( ' \n ' );
	}
}
