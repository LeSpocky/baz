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

/*	NOTE	include uses no special include path but the system wide
 *			with subfolder in the first case (bar). The second case uses
 *			the include dir variable of the cmake package script, while
 *			actually also having the header file in a subfolder. This is
 *			just to demonstrate both possibilities.	*/
#include "bar/bar.h"
#include "foo.h"

int main( int argc, char *argv[] ) {

	(void) puts( "baz: This is baz." );
	(void) puts( "baz: Next line is from bar library:" );
	bar_hello();
	(void) puts( "baz: Next line is bar calling foo:" );
	bar_call_foo();
	(void) puts( "baz: And now calling foo directly:" );
	foo_hello();

	return EXIT_SUCCESS;
}

/* vim: set noet sts=0 ts=4 sw=4 sr: */
