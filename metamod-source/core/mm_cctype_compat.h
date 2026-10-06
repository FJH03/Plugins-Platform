/**
 * Metamod:Source
 *
 * SDK compatibility shim: some Source 1 SDKs (the leaked CS:GO 2019 tree, for
 * one) poison the C ctype names with function-like macros in tier1/strtools.h
 * (e.g. isdigit -> use_V_isdigit_instead_of_isdigit) so that any regular call
 * fails to compile. Include this header after the SDK headers, before using
 * the standard names, to get the normal <cctype> functions back.
 */

#ifndef _INCLUDE_MM_CCTYPE_COMPAT_H_
#define _INCLUDE_MM_CCTYPE_COMPAT_H_

#undef isalnum
#undef isalpha
#undef iscntrl
#undef isdigit
#undef isgraph
#undef islower
#undef isprint
#undef ispunct
#undef isspace
#undef isupper
#undef isxdigit

#endif // _INCLUDE_MM_CCTYPE_COMPAT_H_
