/*
 * Verifica_primo.cpp
 *
 * Copyright 2014 Rafael Andrade <rafaelsandrade@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 */
//      08 de maio de 2011
//      Programa que verifica se um número inteiro é primo ou composto

#include<iostream>
#include<math.h>


//// Função retorna verdadeiro se 'p' for primo e falso se 'p' for composto
bool EhPrimo(long p)
{
    //// Deixa 'p' positivo
    if(p < 0) 
        p = -p;

    //// Se 'p' é 2 ou 3 então é primo
    if(p == 2 || p == 3)    
        return true;

    //// Se 'p' for 0, 1 ou par então não é primo
    if(p == 0 || p == 1 || p % 2 == 0)  
        return false;

    long raiz = (long) sqrt( (double)p );

    for(long i = 3; i <= raiz; i += 2)
        if(p % i == 0) 
            return false;
    
    return true;
}

int main()
{
    long p;

    std::cout << "\n\nDigite um número natural para verificar se é primo: ";

    std::cin >> p;

    if ( EhPrimo(p) )
        std::cout << "\nÉ primo.\n\n";
    else
        std::cout << "\nNão é primo.\n\n";
}
