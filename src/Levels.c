// Copyright (c) Jon Thysell <http://jonthysell.com>
// Licensed under the MIT License.

#include "Common.h"
#include "Levels.h"

const uint32_t Levels_LightsA[] = {
    0x0005400UL, 0x15A82B5UL, 0x0ADEF6AUL, 0x1B88360UL, 0x1BC5EEFUL, 0x0EAD400UL, 0x0F8C62FUL, 0x0AAA880UL, 0x07D3BEAUL,
    0x00039CEUL, 0x0EAD6B5UL, 0x0A76D5FUL, 0x022AA88UL, 0x0210800UL, 0x0010040UL, 0x1F08421UL, 0x1F71000UL, 0x0455544UL,
    0x1505415UL, 0x0004400UL, 0x021385EUL, 0x0E8C62EUL, 0x0467000UL, 0x12FC400UL, 0x1E79C61UL, 0x118FE31UL, 0x04211C4UL,
    0x1CE7000UL, 0x0000040UL, 0x0001000UL, 0x11CD671UL, 0x1F1111FUL, 0x198D508UL, 0x1EB4634UL, 0x00AC558UL, 0x11FC544UL,
    0x00739C0UL, 0x1555555UL, 0x0A60C2AUL, 0x0002800UL, 0x0421151UL, 0x0749D27UL, 0x0E11D71UL, 0x0E27F60UL, 0x157F0AEUL,
    0x0477DC4UL, 0x10917E4UL, 0x0089220UL, 0x1151151UL, 0x1FFFFFFUL,
};

const uint32_t Levels_LightsB[] = {
    0x1B06C1BUL, 0x1F2009FUL, 0x1F5115FUL, 0x11D822AUL, 0x0466CC4UL, 0x0AFD7EAUL, 0x158EE35UL, 0x0013800UL, 0x0531110UL,
    0x11AC6A0UL, 0x1F739DFUL, 0x1150151UL, 0x0E4394EUL, 0x093BD2FUL, 0x0EAD6B5UL, 0x0E4384EUL, 0x1F8D63FUL, 0x1505415UL,
    0x0AABAAAUL, 0x1500015UL, 0x1FBEFBFUL, 0x118FC9FUL, 0x1B56D5BUL, 0x1F8FD44UL, 0x118D771UL, 0x1FAFEBFUL, 0x0E2108EUL,
    0x1B77D4EUL, 0x0001000UL, 0x1101011UL, 0x1BD837BUL, 0x047440AUL, 0x1576DD5UL, 0x11CD671UL, 0x15AEEB5UL, 0x15AB884UL,
    0x1FAD6B5UL, 0x00739C0UL, 0x11FC544UL, 0x1555555UL, 0x11729D1UL, 0x0454544UL, 0x1502815UL, 0x0AFABEAUL, 0x1FEFEBFUL,
    0x1151151UL, 0x1F27C9FUL, 0x1F711DFUL, 0x04AFEA4UL, 0x1FFFFFFUL,
};

uint32_t Levels_GetLightsForLevel(const int8_t level, const bool setB)
{
    if (level >= 0 && level < LevelCount)
    {
        return setB ? Levels_LightsB[level] : Levels_LightsA[level];
    }
    
    return 0;
}

uint16_t Levels_GetParForLevel(const int8_t level)
{
    if (level >= 0 && level < LevelCount)
    {
        return 6 + (level / 5);
    }
    
    return 0;
}
