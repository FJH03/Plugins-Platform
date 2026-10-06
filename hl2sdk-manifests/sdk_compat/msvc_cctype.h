// Force-included (/FI) before every translation unit for SDKs whose manifest
// sets "msvc_prelude" (see manifests/csgo.json). The 2019 CS:GO SDK's
// public/tier1/strtools.h defines the C ctype names to poison them
// (isdigit/isalpha/... -> use_V_*_instead_of_*), which breaks <cctype> when an
// STL header is included after a SDK header. Pulling <cctype> in first sets its
// include guard, so later includes become no-ops, without patching the SDK.
#pragma once
#if defined(__cplusplus)
#include <cctype>
#endif

// The 2019 CS:GO SDK's public/tier1/strtools.h poisons the C ctype names
// (isdigit -> use_V_isdigit_instead_of_isdigit, ...) to force callers onto its
// V_* wrappers. Map the poison targets back onto the standard functions so
// ordinary calls keep compiling; the V_* wrappers stay available for callers
// that want them.
#define use_V_isdigit_instead_of_isdigit isdigit
#define use_V_isalpha_instead_of_isalpha isalpha
#define use_V_isalnum_instead_of_isalnum isalnum
#define use_V_isprint_instead_of_isprint isprint
#define use_V_isxdigit_instead_of_isxdigit isxdigit
#define use_V_ispunct_instead_of_ispunct ispunct
#define use_V_isgraph_instead_of_isgraph isgraph
#define use_V_isupper_instead_of_isupper isupper
#define use_V_islower_instead_of_islower islower
#define use_V_iscntrl_instead_of_iscntrl iscntrl
#define use_V_isspace_instead_of_isspace isspace
