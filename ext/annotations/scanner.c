/* Generated by re2c 0.13.5 on Mon Dec  2 00:50:50 2013 */
/* #line 1 "scanner.re" */

/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2014 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"

#include "scanner.h"

#define JJCTYPE unsigned char
#define JJCURSOR (s->start)
#define JJLIMIT (s->end)
#define JJMARKER q

int phannot_get_token(phannot_scanner_state *s, phannot_scanner_token *token) {

	char next, *q = JJCURSOR, *start = JJCURSOR;
	int status = PHANNOT_SCANNER_RETCODE_IMPOSSIBLE;

	while (PHANNOT_SCANNER_RETCODE_IMPOSSIBLE == status) {

		if (s->mode == PHANNOT_MODE_RAW) {

			if (*JJCURSOR == '\n') {
				s->active_line++;
			}

			next = *(JJCURSOR+1);

			if (*JJCURSOR == '\0' || *JJCURSOR == '@') {
				if ((next >= 'A' && next <= 'Z') || (next >= 'a' && next <= 'z')) {
					s->mode = PHANNOT_MODE_ANNOTATION;
					continue;
				}
			}

			++JJCURSOR;
			token->opcode = PHANNOT_T_IGNORE;
			return 0;

		} else {

		
/* #line 66 "scanner.c" */
		{
			JJCTYPE jjch;
			unsigned int jjaccept = 0;
			static const unsigned char jjbm[] = {
				  0,  96,  96,  96,  96,  96,  96,  96, 
				 96, 104,  96,  96,  96, 104,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				104,  96,  32,  96,  96,  96,  96,  64, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				240, 240, 240, 240, 240, 240, 240, 240, 
				240, 240,  96,  96,  96,  96,  96,  96, 
				 96, 112, 112, 112, 112, 112, 112, 112, 
				112, 112, 112, 112, 112, 112, 112, 112, 
				112, 112, 112, 112, 112, 112, 112, 112, 
				112, 112, 112,  96,   0,  96,  96, 112, 
				 96, 112, 112, 112, 112, 112, 112, 112, 
				112, 112, 112, 112, 112, 112, 112, 112, 
				112, 112, 112, 112, 112, 112, 112, 112, 
				112, 112, 112,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
				 96,  96,  96,  96,  96,  96,  96,  96, 
			};

			jjch = *JJCURSOR;
			switch (jjch) {
			case 0x00:	goto jj38;
			case '\t':
			case '\r':
			case ' ':	goto jj34;
			case '\n':	goto jj36;
			case '"':	goto jj10;
			case '\'':	goto jj11;
			case '(':	goto jj14;
			case ')':	goto jj16;
			case ',':	goto jj32;
			case '-':	goto jj2;
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':	goto jj4;
			case ':':	goto jj30;
			case '=':	goto jj28;
			case '@':	goto jj26;
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'G':
			case 'H':
			case 'I':
			case 'J':
			case 'K':
			case 'L':
			case 'M':
			case 'O':
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'U':
			case 'V':
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case '_':
			case 'a':
			case 'b':
			case 'c':
			case 'd':
			case 'e':
			case 'g':
			case 'h':
			case 'i':
			case 'j':
			case 'k':
			case 'l':
			case 'm':
			case 'o':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case 'u':
			case 'v':
			case 'w':
			case 'x':
			case 'y':
			case 'z':	goto jj13;
			case 'F':
			case 'f':	goto jj8;
			case 'N':
			case 'n':	goto jj6;
			case 'T':
			case 't':	goto jj9;
			case '[':	goto jj22;
			case '\\':	goto jj12;
			case ']':	goto jj24;
			case '{':	goto jj18;
			case '}':	goto jj20;
			default:	goto jj40;
			}
jj2:
			++JJCURSOR;
			if (jjbm[0+(jjch = *JJCURSOR)] & 128) {
				goto jj71;
			}
jj3:
/* #line 183 "scanner.re" */
			{
			status = PHANNOT_SCANNER_RETCODE_ERR;
			break;
		}
/* #line 202 "scanner.c" */
jj4:
			jjaccept = 0;
			jjch = *(JJMARKER = ++JJCURSOR);
			goto jj72;
jj5:
/* #line 67 "scanner.re" */
			{
			token->opcode = PHANNOT_T_INTEGER;
			token->value = estrndup(start, JJCURSOR - start);
			token->len = JJCURSOR - start;
			q = JJCURSOR;
			return 0;
		}
/* #line 216 "scanner.c" */
jj6:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch == 'U') goto jj66;
			if (jjch == 'u') goto jj66;
			goto jj44;
jj7:
/* #line 109 "scanner.re" */
			{
			token->opcode = PHANNOT_T_IDENTIFIER;
			token->value = estrndup(start, JJCURSOR - start);
			token->len = JJCURSOR - start;
			q = JJCURSOR;
			return 0;
		}
/* #line 232 "scanner.c" */
jj8:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch == 'A') goto jj61;
			if (jjch == 'a') goto jj61;
			goto jj44;
jj9:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch == 'R') goto jj57;
			if (jjch == 'r') goto jj57;
			goto jj44;
jj10:
			jjaccept = 2;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch <= 0x00) goto jj3;
			goto jj55;
jj11:
			jjaccept = 2;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch <= 0x00) goto jj3;
			goto jj50;
jj12:
			jjch = *++JJCURSOR;
			if (jjch <= '^') {
				if (jjch <= '@') goto jj3;
				if (jjch <= 'Z') goto jj43;
				goto jj3;
			} else {
				if (jjch == '`') goto jj3;
				if (jjch <= 'z') goto jj43;
				goto jj3;
			}
jj13:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			goto jj44;
jj14:
			++JJCURSOR;
/* #line 117 "scanner.re" */
			{
			token->opcode = PHANNOT_T_PARENTHESES_OPEN;
			return 0;
		}
/* #line 277 "scanner.c" */
jj16:
			++JJCURSOR;
/* #line 122 "scanner.re" */
			{
			token->opcode = PHANNOT_T_PARENTHESES_CLOSE;
			return 0;
		}
/* #line 285 "scanner.c" */
jj18:
			++JJCURSOR;
/* #line 127 "scanner.re" */
			{
			token->opcode = PHANNOT_T_BRACKET_OPEN;
			return 0;
		}
/* #line 293 "scanner.c" */
jj20:
			++JJCURSOR;
/* #line 132 "scanner.re" */
			{
			token->opcode = PHANNOT_T_BRACKET_CLOSE;
			return 0;
		}
/* #line 301 "scanner.c" */
jj22:
			++JJCURSOR;
/* #line 137 "scanner.re" */
			{
			token->opcode = PHANNOT_T_SBRACKET_OPEN;
			return 0;
		}
/* #line 309 "scanner.c" */
jj24:
			++JJCURSOR;
/* #line 142 "scanner.re" */
			{
			token->opcode = PHANNOT_T_SBRACKET_CLOSE;
			return 0;
		}
/* #line 317 "scanner.c" */
jj26:
			++JJCURSOR;
/* #line 147 "scanner.re" */
			{
			token->opcode = PHANNOT_T_AT;
			return 0;
		}
/* #line 325 "scanner.c" */
jj28:
			++JJCURSOR;
/* #line 152 "scanner.re" */
			{
			token->opcode = PHANNOT_T_EQUALS;
			return 0;
		}
/* #line 333 "scanner.c" */
jj30:
			++JJCURSOR;
/* #line 157 "scanner.re" */
			{
			token->opcode = PHANNOT_T_COLON;
			return 0;
		}
/* #line 341 "scanner.c" */
jj32:
			++JJCURSOR;
/* #line 162 "scanner.re" */
			{
			token->opcode = PHANNOT_T_COMMA;
			return 0;
		}
/* #line 349 "scanner.c" */
jj34:
			++JJCURSOR;
			jjch = *JJCURSOR;
			goto jj42;
jj35:
/* #line 167 "scanner.re" */
			{
			token->opcode = PHANNOT_T_IGNORE;
			return 0;
		}
/* #line 360 "scanner.c" */
jj36:
			++JJCURSOR;
/* #line 172 "scanner.re" */
			{
			s->active_line++;
			token->opcode = PHANNOT_T_IGNORE;
			return 0;
		}
/* #line 369 "scanner.c" */
jj38:
			++JJCURSOR;
/* #line 178 "scanner.re" */
			{
			status = PHANNOT_SCANNER_RETCODE_EOF;
			break;
		}
/* #line 377 "scanner.c" */
jj40:
			jjch = *++JJCURSOR;
			goto jj3;
jj41:
			++JJCURSOR;
			jjch = *JJCURSOR;
jj42:
			if (jjbm[0+jjch] & 8) {
				goto jj41;
			}
			goto jj35;
jj43:
			jjaccept = 1;
			JJMARKER = ++JJCURSOR;
			jjch = *JJCURSOR;
jj44:
			if (jjbm[0+jjch] & 16) {
				goto jj43;
			}
			if (jjch != '\\') goto jj7;
jj45:
			++JJCURSOR;
			jjch = *JJCURSOR;
			if (jjch <= '^') {
				if (jjch <= '@') goto jj46;
				if (jjch <= 'Z') goto jj47;
			} else {
				if (jjch == '`') goto jj46;
				if (jjch <= 'z') goto jj47;
			}
jj46:
			JJCURSOR = JJMARKER;
			if (jjaccept <= 2) {
				if (jjaccept <= 1) {
					if (jjaccept <= 0) {
						goto jj5;
					} else {
						goto jj7;
					}
				} else {
					goto jj3;
				}
			} else {
				if (jjaccept <= 4) {
					if (jjaccept <= 3) {
						goto jj60;
					} else {
						goto jj65;
					}
				} else {
					goto jj69;
				}
			}
jj47:
			jjaccept = 1;
			JJMARKER = ++JJCURSOR;
			jjch = *JJCURSOR;
			if (jjch <= '[') {
				if (jjch <= '9') {
					if (jjch <= '/') goto jj7;
					goto jj47;
				} else {
					if (jjch <= '@') goto jj7;
					if (jjch <= 'Z') goto jj47;
					goto jj7;
				}
			} else {
				if (jjch <= '_') {
					if (jjch <= '\\') goto jj45;
					if (jjch <= '^') goto jj7;
					goto jj47;
				} else {
					if (jjch <= '`') goto jj7;
					if (jjch <= 'z') goto jj47;
					goto jj7;
				}
			}
jj49:
			++JJCURSOR;
			jjch = *JJCURSOR;
jj50:
			if (jjbm[0+jjch] & 32) {
				goto jj49;
			}
			if (jjch <= 0x00) goto jj46;
			if (jjch <= '[') goto jj52;
			++JJCURSOR;
			jjch = *JJCURSOR;
			if (jjch == '\n') goto jj46;
			goto jj49;
jj52:
			++JJCURSOR;
/* #line 100 "scanner.re" */
			{
			token->opcode = PHANNOT_T_STRING;
			token->value = estrndup(q, JJCURSOR - q - 1);
			token->len = JJCURSOR - q - 1;
			q = JJCURSOR;
			return 0;
		}
/* #line 478 "scanner.c" */
jj54:
			++JJCURSOR;
			jjch = *JJCURSOR;
jj55:
			if (jjbm[0+jjch] & 64) {
				goto jj54;
			}
			if (jjch <= 0x00) goto jj46;
			if (jjch <= '[') goto jj52;
			++JJCURSOR;
			jjch = *JJCURSOR;
			if (jjch == '\n') goto jj46;
			goto jj54;
jj57:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch == 'U') goto jj58;
			if (jjch != 'u') goto jj44;
jj58:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch == 'E') goto jj59;
			if (jjch != 'e') goto jj44;
jj59:
			jjaccept = 3;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjbm[0+jjch] & 16) {
				goto jj43;
			}
			if (jjch == '\\') goto jj45;
jj60:
/* #line 94 "scanner.re" */
			{
			token->opcode = PHANNOT_T_TRUE;
			return 0;
		}
/* #line 515 "scanner.c" */
jj61:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch == 'L') goto jj62;
			if (jjch != 'l') goto jj44;
jj62:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch == 'S') goto jj63;
			if (jjch != 's') goto jj44;
jj63:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch == 'E') goto jj64;
			if (jjch != 'e') goto jj44;
jj64:
			jjaccept = 4;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjbm[0+jjch] & 16) {
				goto jj43;
			}
			if (jjch == '\\') goto jj45;
jj65:
/* #line 89 "scanner.re" */
			{
			token->opcode = PHANNOT_T_FALSE;
			return 0;
		}
/* #line 544 "scanner.c" */
jj66:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch == 'L') goto jj67;
			if (jjch != 'l') goto jj44;
jj67:
			jjaccept = 1;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjch == 'L') goto jj68;
			if (jjch != 'l') goto jj44;
jj68:
			jjaccept = 5;
			jjch = *(JJMARKER = ++JJCURSOR);
			if (jjbm[0+jjch] & 16) {
				goto jj43;
			}
			if (jjch == '\\') goto jj45;
jj69:
/* #line 84 "scanner.re" */
			{
			token->opcode = PHANNOT_T_NULL;
			return 0;
		}
/* #line 568 "scanner.c" */
jj70:
			jjch = *++JJCURSOR;
			if (jjch <= '/') goto jj46;
			if (jjch <= '9') goto jj73;
			goto jj46;
jj71:
			jjaccept = 0;
			JJMARKER = ++JJCURSOR;
			jjch = *JJCURSOR;
jj72:
			if (jjbm[0+jjch] & 128) {
				goto jj71;
			}
			if (jjch == '.') goto jj70;
			goto jj5;
jj73:
			++JJCURSOR;
			jjch = *JJCURSOR;
			if (jjch <= '/') goto jj75;
			if (jjch <= '9') goto jj73;
jj75:
/* #line 76 "scanner.re" */
			{
			token->opcode = PHANNOT_T_DOUBLE;
			token->value = estrndup(start, JJCURSOR - start);
			token->len = JJCURSOR - start;
			q = JJCURSOR;
			return 0;
		}
/* #line 598 "scanner.c" */
		}
/* #line 188 "scanner.re" */


		}
	}

	return status;
}
