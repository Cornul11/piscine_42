int		ft_checkrow(int row, int num)
{//Verificam daca putem sa punem cifra data in rindul dat
	int column;

	column = 0;
	while (column < 9)
	{
		if (g_sudoku_arr[row][column] == num)
			return (0);//Daca cifra este gasita pe rindul dat, returnam zero, ca nu este disponibila pentru a fi folosita
		column++;
	}
	return (1);//Daca numarul nu este gasit, returnam 1, ca paote fi setata
}

int		ft_checkcolumn(int column, int num)
{////Verificam daca putem sa punem cifra data in coloana data
	int row;

	row = 0;
	while (row < 9)
	{
		if (g_sudoku_arr[row][column] == num)
			return (0);//Daca cifra este gasita pe coloana data, returnam zero, ca nu este disponibila pentru a fi folosita
		row++;
	}
	return (1);//Daca numarul nu este gasit, returnam 1, ca paote fi setata
}

int		ft_checkgrid(int row, int column, int num)
{//Functia data verifica data numarul dat este intilnit in patratul 3 * 3
	int l_row;
	int l_column;

	row = (row / 3) * 3;
	column = (column / 3) * 3;
	l_row = 0;
	while (l_row < 3)
	{
		l_column = 0;
		while (l_column < 3)
		{
			if (g_sudoku_arr[row + l_row][column + l_column] == num)
				return (0);//Daca cifra este gasita, returnam zero, ca nu este disponibila
			l_column++;
		}
		l_row++;
	}
	return (1);//Daca cifra nu este gasita, returnam unu, ca este disponibila
}

void	ft_next(int row, int column)
{//Trecem la urmatoarea celula din sudoku, procesam mai intii fiecare linie latitudinala, apoi trecem la urmatoarea linie
	if (column < 8)
		ft_solvesudoku(row, column + 1);
	else
		ft_solvesudoku(row + 1, 0);
}

void	ft_solvesudoku(int row, int column)
{
	int counter;//Variabila care verifica fiecare numar daca poate fi pus, pina il gaseste pe cel potrivit

	if (row > 8)//Daca rindul procesat e > 8, atunci sudoku este rezolvat
		ft_print_sudoku(g_sudoku_arr);
	if (g_sudoku_arr[row][column] != 0)
		ft_next(row, column);//Daca celula are cifre intre 1 si 9, trecem la urmatoarea
	else
	{
		counter = 1;
		while (counter <= 9)
		{//Verificam disponibilitatea cifrei per rind/coloana/patrat 3*3
			if ((ft_checkrow(row, counter) == 1) &&
					(ft_checkcolumn(column, counter) == 1) &&
					(ft_checkgrid(row, column, counter) == 1))
			{
				g_sudoku_arr[row][column] = counter;
				ft_next(row, column);
			}
			counter++;
		}
		g_sudoku_arr[row][column] = 0;//Nici un numar nu a fost gasit ca rezolvare.
		ft_putstr("Error\n");
	}
}
