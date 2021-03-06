/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arakhurs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:17:54 by arakhurs          #+#    #+#             */
/*   Updated: 2022/02/14 17:00:08 by arakhurs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

//Երկու ցուցիչով արժեքները փոխելու ֆունկցիա
void swap(char *x, char *y) 
{ 
    char c; 
    c = *x; 
    *x = *y; 
    *y = c; 
} 

/*  փոխակերպումներ տպեու ֆունկցիա
    Այս ֆունկցիան վերցնում է երեք պարամետր.
    1. տող
    2. տողի մեկնարկային ինդեքսը
    3. տողի վերջավորության ինդեքսը. */
void permute(char *a, int l, int r) 
{ 
    int i; 
    if (l == r)
	{
	write (1, a, 4);
	write (1, "\n", 1);
	}
    else
    { 
		i = l;
        while (i <= r)
		{
			swap((a + l), (a + i)); 
            permute(a, l + 1, r); 
			//հետքայլ
            swap((a + l), (a + i));
			i++;
        } 
    } 
}

int main() 
{ 
    char str[] = "1234"; 
    int n = strlen(str); 
    permute(str, 0, n-1); 
    return 0; 
}
