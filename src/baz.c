/*******************************************************************//**
 *	@file	baz.c
 *
 *	baz test prog calling libbar which itself calls libfoo
 *
 *	@author	Alexander Dahl <post@lespocky.de>
 *	@date	Created: 2012-03-06
 **********************************************************************/

#include <stdio.h>
#include <stdlib.h>

#include "bar.h"

int main( int argc, char *argv[] ) {

	(void) puts( "This is baz." );
	(void) puts( "Next line is from bar library:" );
	bar_hello();
	(void) puts( "Next line is bar calling foo:" );
	bar_call_foo();

	return EXIT_SUCCESS;
}

/* vim: set noet sts=0 ts=4 sw=4 sr: */
