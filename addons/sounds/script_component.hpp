#define COMPONENT sounds
#include "\z\uvo_aet_aio\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_SOUNDS
	#define DEBUG_MODE_FULL
#endif
	#ifdef DEBUG_SETTINGS_SOUNDS
	#define DEBUG_SETTINGS DEBUG_SETTINGS_SOUNDS
#endif

#include "\z\uvo_aet_aio\addons\main\script_macros.hpp"

#define SOUND_CLASS(NAME,PATH) class NAME { \
	name = QUOTE(NAME); \
	sound[] = {QPATHTOF(PATH),2.9,1,100}; \
	titles[] = {}; \
}

#define SOUND_CLASS_COMMON(NAME,PATH) class NAME { \
	name = QUOTE(NAME); \
	sound[] = {QUOTE(MAINPREFIX\PREFIX\SUBPREFIX\COMPONENT\PATH),3.5,1,100}; \
	titles[] = {}; \
}
