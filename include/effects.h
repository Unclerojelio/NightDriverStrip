//+--------------------------------------------------------------------------
//
// File:        effects.h
//
// NightDriverStrip - (c) 2018 Plummer's Software LLC.  All Rights Reserved.
//
// This file is part of the NightDriver software project.
//
//    NightDriver is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    NightDriver is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with Nightdriver.  It is normally found in copying.txt
//    If not, see <https://www.gnu.org/licenses/>.
//
//
// Description:
//
//    Defines for effect (sub)types numbers and common JSON property names
//
// History:     Apr-05-2023         Rbergen      Created for NightDriverStrip
//
//---------------------------------------------------------------------------
#pragma once

// Strip effects
#define EFFECT_STRIP_BOUNCING_BALL                       1
#define EFFECT_STRIP_DOUBLE_PALETTE                      2
#define EFFECT_STRIP_PALETTE_SPIN                        3
#define EFFECT_STRIP_COLOR_CYCLE                         4
#define EFFECT_STRIP_FIRE_FAN                            5
#define EFFECT_STRIP_RING_TEST                           6
#define EFFECT_STRIP_LANTERN                             7
#define EFFECT_STRIP_FIRE                                8
#define EFFECT_STRIP_CLASSIC_FIRE                        9
#define EFFECT_STRIP_SMOOTH_FIRE                        10
#define EFFECT_STRIP_BASE_FIRE                          11
#define EFFECT_STRIP_LASER_LINE                         12
#define EFFECT_STRIP_METEOR                             13
#define EFFECT_STRIP_SIMPLE_RAINBOW_TEST                14
#define EFFECT_STRIP_RAINBOW_TWINKLE                    15
#define EFFECT_STRIP_RAINBOW_FILL                       16
#define EFFECT_STRIP_COLOR_FILL                         17
#define EFFECT_STRIP_STATUS                             18
#define EFFECT_STRIP_TWINKLE                            19
#define EFFECT_STRIP_SIMPLE_COLOR_BEAT                  20
#define EFFECT_STRIP_PALETTE                            21
#define EFFECT_STRIP_COLOR_BEAT_WITH_FLASH              22
#define EFFECT_STRIP_COLOR_BEAT_OVER_RED                23
#define EFFECT_STRIP_MOLTEN_GLASS_ON_VIOLET_BKGND       24
#define EFFECT_STRIP_NEW_MOLTEN_GLASS_ON_VIOLET_BKGND   25
#define EFFECT_STRIP_SPARKLY_SPINNING_MUSIC             26
#define EFFECT_STRIP_MUSICAL_HOT_WHITE_INSULATOR        27
#define EFFECT_STRIP_SNAKE                              28
#define EFFECT_STRIP_PALETTE_FLAME                      29
#define EFFECT_STRIP_MUSICAL_PALETTE_FIRE               30
#define EFFECT_STRIP_STARRY_NIGHT                       31
#define EFFECT_STRIP_TWINKLE_STAR                       32
#define EFFECT_STRIP_SIMPLE_INSULATOR_BEAT              33
#define EFFECT_STRIP_SIMPLE_INSULATOR_BEAT2             34
#define EFFECT_STRIP_PALETTE_REEL                       35
#define EFFECT_STRIP_TAPE_REEL                          36
#define EFFECT_STRIP_FAN_BEAT                           37
#define EFFECT_STRIP_SPLASH_LOGO                        38

// Matrix effects
#define EFFECT_MATRIX_ALIEN_TEXT                       101
#define EFFECT_MATRIX_BOUNCE                           102
#define EFFECT_MATRIX_CIRCUIT                          103
#define EFFECT_MATRIX_CLOCK                            104
#define EFFECT_MATRIX_CUBE                             105
#define EFFECT_MATRIX_FLOW_FIELD                       106
#define EFFECT_MATRIX_LIFE                             107
#define EFFECT_MATRIX_MANDALA                          108
#define EFFECT_MATRIX_SUNBURST                         109
#define EFFECT_MATRIX_ROSE                             110
#define EFFECT_MATRIX_PINWHEEL                         111
#define EFFECT_MATRIX_INFINITY                         112
#define EFFECT_MATRIX_MUNCH                            113
#define EFFECT_MATRIX_CURTAIN                          114
#define EFFECT_MATRIX_GRID_LIGHTS                      115
#define EFFECT_MATRIX_PALETTE_SMEAR                    116
#define EFFECT_MATRIX_RAINBOW_FLAG                     117
#define EFFECT_MATRIX_PONG_CLOCK                       118
#define EFFECT_MATRIX_PULSE                            119
#define EFFECT_MATRIX_PULSAR                           120
#define EFFECT_MATRIX_QR                               121
#define EFFECT_MATRIX_RADAR                            122
#define EFFECT_MATRIX_SERENDIPITY                      123
#define EFFECT_MATRIX_SPARK                            124
#define EFFECT_MATRIX_SPIN                             125
#define EFFECT_MATRIX_SPIRO                            126
#define EFFECT_MATRIX_SUBSCRIBERS                      127
#define EFFECT_MATRIX_SWIRL                            128
#define EFFECT_MATRIX_WAVE                             129
#define EFFECT_MATRIX_WEATHER                          130
#define EFFECT_MATRIX_INSULATOR_SPECTRUM               131
#define EFFECT_MATRIX_SPECTRUM_ANALYZER                132
#define EFFECT_MATRIX_WAVEFORM                         133
#define EFFECT_MATRIX_GHOST_WAVE                       134
#define EFFECT_MATRIX_MAZE                             135
#define EFFECT_MATRIX_BALLS                            136
#define EFFECT_MATRIX_SMSTROBE_DIFFUSION               137
#define EFFECT_MATRIX_SMONE_RING                       138
#define EFFECT_MATRIX_SMLUMENJER_PALETTE               139
#define EFFECT_MATRIX_SMSQUARES_AND_DOTS               140
#define EFFECT_MATRIX_SMTRAFFIC                        141
#define EFFECT_MATRIX_SM2DDPR                          142
#define EFFECT_MATRIX_SMSINUSOIDSIN16                  143
#define EFFECT_MATRIX_SMFIREWORKS                      144
#define EFFECT_MATRIX_SMSTARDEEP                       145
#define EFFECT_MATRIX_SMMAGMA                          146
#define EFFECT_MATRIX_SMAMBERRAIN                      147
#define EFFECT_MATRIX_SMFIRE2012                       148
#define EFFECT_MATRIX_SMFIRE2021                       149
#define EFFECT_MATRIX_SMWISP                           150
#define EFFECT_MATRIX_SMNOISE                          151
#define EFFECT_MATRIX_SMPICASSO3IN1                    152
#define EFFECT_MATRIX_SMSNAKES                         153
#define EFFECT_MATRIX_SMPARTICLES                      154
#define EFFECT_MATRIX_SMRAINBOW_SWIRL                  155
#define EFFECT_MATRIX_SMRAINBOW_FLOW                   156
#define EFFECT_MATRIX_SMPASTEL_FLUTTER                 157
#define EFFECT_MATRIX_SMSAND                           158
#define EFFECT_MATRIX_SMSMOKE                          159
#define EFFECT_MATRIX_SMSPIRO                          160
#define EFFECT_MATRIX_SMAURORA                         161
#define EFFECT_MATRIX_SMPRISMATA                       162
#define EFFECT_MATRIX_SMRADIALFIRE                     163
#define EFFECT_MATRIX_SMMAZE2                          164
#define EFFECT_MATRIX_SMMIRAGE                         165
#define EFFECT_MATRIX_SMRADIALWAVE                     166
#define EFFECT_MATRIX_SMRAINBOW_TUNNEL                 167
#define EFFECT_MATRIX_SMHYPNOSIS                       168
#define EFFECT_MATRIX_SMWALKING_MACHINE                169
#define EFFECT_MATRIX_SMXOR_CIRCLES                    170
#define EFFECT_MATRIX_SMTIXY_LAND                      171
#define EFFECT_MATRIX_SMBOID_EXPLOSION                 172
#define EFFECT_MATRIX_SMSUPERNOVA                      173
#define EFFECT_MATRIX_SMBLURRING_COLORS                174
#define EFFECT_MATRIX_SMFLOW_FIELDS                    175
#define EFFECT_MATRIX_SMGAMMA                          176
#define EFFECT_MATRIX_SMSTARSHIP_TROOPERS              177
#define EFFECT_MATRIX_SMHOLIDAY_LIGHTS                 178
#define EFFECT_MATRIX_SMGOOGLE_NEXUS                   179
#define EFFECT_MATRIX_SMGRAVITY_BALLS                  180
#define EFFECT_MATRIX_SMFLOCKING                       181
#define EFFECT_MATRIX_SMBUBBLES                        182
#define EFFECT_MATRIX_SMPATTERN_TRICK                  183
#define EFFECT_MATRIX_SMSUN_RADIATION                  184
#define EFFECT_MATRIX_SMSIN_DOTS                       185
#define EFFECT_MATRIX_SMFLYING                         186
#define EFFECT_MATRIX_SMMETA_BALLS                     187
#define EFFECT_MATRIX_SMTWISTER                        188
#define EFFECT_MATRIX_SMTWIST                          189
#define EFFECT_MATRIX_SMSPIRO_PULSE                    190
#define EFFECT_MATRIX_SMCOLOR_POPCORN                  191

// 999999rry Night star variations
#define EFFECT_STAR                                      1
#define EFFECT_STAR_RANDOM_PALETTE_COLOR                 2
#define EFFECT_STAR_LONG_LIFE_SPARKLE                    3
#define EFFECT_STAR_COLOR                                4
#define EFFECT_STAR_MUSIC                                5
#define EFFECT_STAR_MUSIC_PULSE                          6
#define EFFECT_STAR_QUIET                                7
#define EFFECT_STAR_BUBBLY                               8
#define EFFECT_STAR_FLASH                                9
#define EFFECT_STAR_COLOR_CYCLE                         10
#define EFFECT_STAR_MULTI_COLOR                         11
#define EFFECT_STAR_CHRISTMAS                           12
#define EFFECT_STAR_HOT_WHITE                           13

// Some common JSON properties to prevent typos
#define PTY_EFFECTNR        "en"
#define PTY_COREEFFECT      "ce"
#define PTY_REVERSED        "rvr"
#define PTY_MIRORRED        "mir"
#define PTY_ERASE           "ers"
#define PTY_SPARKS          "spc"
#define PTY_SPARKING        "spg"
#define PTY_SPARKHEIGHT     "sph"
#define PTY_COOLING         "clg"
#define PTY_PALETTE         "plt"
#define PTY_ORDER           "ord"
#define PTY_CELLSPERLED     "cpl"
#define PTY_LEDCOUNT        "ldc"
#define PTY_SIZE            "sze"
#define PTY_SPEED           "spd"
#define PTY_MINSPEED        "mns"
#define PTY_MAXSPEED        "mxs"
#define PTY_SPEEDDIVISOR    "sdd"
#define PTY_DELTAHUE        "dth"
#define PTY_EVERYNTH        "ent"
#define PTY_COLOR           "clr"
#define PTY_BLEND           "bld"
#define PTY_STARTYPENR      "stt"
#define PTY_BLUR            "blr"
#define PTY_FADE            "fde"
#define PTY_VERSION         "ver"

#define EFFECTS_CONFIG_FILE "/effects.cfg"
