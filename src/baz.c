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

#include "bar/bar.h"
#include "foo/foo.h"

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
