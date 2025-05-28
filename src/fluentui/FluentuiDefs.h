#if !defined(FLUENTUI_INCLUDE_GUARD_FLUENTUIDEFS_HPP)
#define FLUENTUI_INCLUDE_GUARD_FLUENTUIDEFS_HPP

#include <fluentui/fluentui_autoconf_config.h>

// ---------------------------------------------------------------------------
// Include the FluentUI-Qt version information. This file is kept separate to
// facilitate easy updates. Changes to the version header file are managed
// here.
// ---------------------------------------------------------------------------
#include <fluentui/fluentui_version.h>

// ---------------------------------------------------------------------------
// Set up import/export keywords for core projects. The PLATFORM_XXXX
// keywords are defined in the development environment's include files
// above.
// ---------------------------------------------------------------------------

// The DLL_EXPORT flag should be defined during DLL build configuration to
// ensure proper import/export handling.

#if defined(DLL_EXPORT)
#if defined(FLUENTUI_BUILDING_LIBRARY)
#define FLUENTUI_EXPORT FLUENTUI_PLATFORM_EXPORT
#else
#define FLUENTUI_EXPORT FLUENTUI_PLATFORM_IMPORT
#endif
#else
#define FLUENTUI_EXPORT
#endif

#endif