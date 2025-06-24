                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.6.8 #9946 (Linux)
                              4 ;--------------------------------------------------------
                              5 	.module main
                              6 	.optsdcc -mz80
                              7 	
                              8 ;--------------------------------------------------------
                              9 ; Public variables in this module
                             10 ;--------------------------------------------------------
                             11 	.globl _main
                             12 	.globl _InitValues
                             13 	.globl _StartMenu
                             14 	.globl _PrintObjInfo
                             15 	.globl _PrintStartMenu
                             16 	.globl _EnemyLoop
                             17 	.globl _CheckEnemyCollision
                             18 	.globl _SetEnemies
                             19 	.globl _SetEnemyParams
                             20 	.globl _MoveEnemy
                             21 	.globl _MakeWizardAnim
                             22 	.globl _WizardAnim
                             23 	.globl _PrintWizard
                             24 	.globl _MoveShot
                             25 	.globl _PrintShot
                             26 	.globl _DeleteShot
                             27 	.globl _MakeShot
                             28 	.globl _CheckDuel
                             29 	.globl _ExplodePlayerInDuel
                             30 	.globl _PlayerLoop
                             31 	.globl _RunStatus
                             32 	.globl _Walk
                             33 	.globl _WalkAnim
                             34 	.globl _Stop
                             35 	.globl _WalkIn
                             36 	.globl _MoveRight
                             37 	.globl _MoveLeft
                             38 	.globl _MoveDown
                             39 	.globl _MoveUp
                             40 	.globl _ExplodeSprite
                             41 	.globl _PrintExplosion
                             42 	.globl _SelectFrame
                             43 	.globl _AssignFrame
                             44 	.globl _DeleteSprite
                             45 	.globl _CheckActiveTile
                             46 	.globl _CompareKeys
                             47 	.globl _PrintKey
                             48 	.globl _AddObjectToScoreboard
                             49 	.globl _SetObject
                             50 	.globl _ReprintObject
                             51 	.globl _ObjectCollision
                             52 	.globl _CheckObject
                             53 	.globl _PrintObjectInStore
                             54 	.globl _DeleteObjectInStore
                             55 	.globl _PrintCoin
                             56 	.globl _PrintDust
                             57 	.globl _DeleteObject
                             58 	.globl _ResetObjData
                             59 	.globl _RefreshScoreboard
                             60 	.globl _InitScoreboard
                             61 	.globl _RefreshHighScore
                             62 	.globl _RedefineKey
                             63 	.globl _Wait4Key
                             64 	.globl _ReturnKeyPressed
                             65 	.globl _PrintEndGame
                             66 	.globl _PrintLevelInfo
                             67 	.globl _PrintSmallBlueBox
                             68 	.globl _PrintFrame
                             69 	.globl _PrintText
                             70 	.globl _PrintNumber
                             71 	.globl _PrintMap
                             72 	.globl _OnBackground
                             73 	.globl _GetTileNum
                             74 	.globl _ClearScreen
                             75 	.globl _Interrupt
                             76 	.globl _PlayMusic
                             77 	.globl _Pause
                             78 	.globl _Itoa
                             79 	.globl _Strlen
                             80 	.globl _Abs
                             81 	.globl _cpct_zx7b_decrunch_s
                             82 	.globl _cpct_etm_setTileset2x4
                             83 	.globl _cpct_etm_drawTileBox2x4
                             84 	.globl _cpct_setSeed_lcg_u8
                             85 	.globl _cpct_getRandom_lcg_u8
                             86 	.globl _cpct_akp_SFXPlay
                             87 	.globl _cpct_akp_SFXInit
                             88 	.globl _cpct_akp_musicInit
                             89 	.globl _cpct_getScreenPtr
                             90 	.globl _cpct_setPALColour
                             91 	.globl _cpct_setPalette
                             92 	.globl _cpct_waitVSYNC
                             93 	.globl _cpct_setVideoMode
                             94 	.globl _cpct_drawSpriteMaskedAlignedTable
                             95 	.globl _cpct_drawSprite
                             96 	.globl _cpct_drawSolidBox
                             97 	.globl _cpct_px2byteM0
                             98 	.globl _cpct_isAnyKeyPressed
                             99 	.globl _cpct_isKeyPressed
                            100 	.globl _cpct_scanKeyboard_if
                            101 	.globl _cpct_scanKeyboard_f
                            102 	.globl _cpct_scanKeyboard
                            103 	.globl _cpct_memset
                            104 	.globl _cpct_setInterruptHandler
                            105 	.globl _cpct_disableFirmware
                            106 	.globl _enum_mov
                            107 	.globl _enum_sta
                            108 	.globl _enum_dir
                            109 	.globl _nPObj
                            110 	.globl _objY
                            111 	.globl _objX
                            112 	.globl _nObj
                            113 	.globl _sht
                            114 	.globl _spr
                            115 	.globl _ctlPause
                            116 	.globl _ctlMusic
                            117 	.globl _ctlAbort
                            118 	.globl _ctlRight
                            119 	.globl _ctlLeft
                            120 	.globl _ctlDown
                            121 	.globl _ctlUp
                            122 	.globl _ctMainLoop
                            123 	.globl _ctWizardAnim
                            124 	.globl _nTip
                            125 	.globl _turboMode
                            126 	.globl _ctInactivity
                            127 	.globl _enemyTurn
                            128 	.globl _music
                            129 	.globl _storeY
                            130 	.globl _storeX
                            131 	.globl _playerKey
                            132 	.globl _doorKey
                            133 	.globl _coinScore
                            134 	.globl _potScore
                            135 	.globl _highScore
                            136 	.globl _score
                            137 	.globl _TwoPlayers
                            138 	.globl _lName
                            139 	.globl _lastNMap
                            140 	.globl _nMap
                            141 	.globl _animRight_Witch
                            142 	.globl _animLeft_Witch
                            143 	.globl _frmWitch
                            144 	.globl _anim_Bat
                            145 	.globl _frmBat
                            146 	.globl _animRight_Ghost
                            147 	.globl _animLeft_Ghost
                            148 	.globl _animDown_Ghost
                            149 	.globl _animUp_Ghost
                            150 	.globl _frmGhost
                            151 	.globl _animRight_Knight
                            152 	.globl _animLeft_Knight
                            153 	.globl _animDown_Knight
                            154 	.globl _animUp_Knight
                            155 	.globl _frmKnight
                            156 	.globl _animRight_Sentinel
                            157 	.globl _animLeft_Sentinel
                            158 	.globl _animDown_Sentinel
                            159 	.globl _animUp_Sentinel
                            160 	.globl _frmSentinel
                            161 	.globl _animRight_Sorcerer2
                            162 	.globl _animLeft_Sorcerer2
                            163 	.globl _animDown_Sorcerer2
                            164 	.globl _animUp_Sorcerer2
                            165 	.globl _frmSorcerer2
                            166 	.globl _animRight_Sorcerer1
                            167 	.globl _animLeft_Sorcerer1
                            168 	.globl _animDown_Sorcerer1
                            169 	.globl _animUp_Sorcerer1
                            170 	.globl _frmSorcerer1
                            171 	.globl _PrintObject
                            172 	.globl _PrintSprite
                            173 	.globl _SpriteCollision
                            174 	.globl _MakeDuel
                            175 	.globl _ResetData
                            176 	.globl _InitGame
                            177 	.globl _GameOver
                            178 ;--------------------------------------------------------
                            179 ; special function registers
                            180 ;--------------------------------------------------------
                            181 ;--------------------------------------------------------
                            182 ; ram data
                            183 ;--------------------------------------------------------
                            184 	.area _DATA
   5ED0                     185 _nMap::
   5ED0                     186 	.ds 1
   5ED1                     187 _lastNMap::
   5ED1                     188 	.ds 1
   5ED2                     189 _lName::
   5ED2                     190 	.ds 2
   5ED4                     191 _TwoPlayers::
   5ED4                     192 	.ds 1
   5ED5                     193 _score::
   5ED5                     194 	.ds 4
   5ED9                     195 _highScore::
   5ED9                     196 	.ds 2
   5EDB                     197 _potScore::
   5EDB                     198 	.ds 2
   5EDD                     199 _coinScore::
   5EDD                     200 	.ds 2
   5EDF                     201 _doorKey::
   5EDF                     202 	.ds 5
   5EE4                     203 _playerKey::
   5EE4                     204 	.ds 5
   5EE9                     205 _storeX::
   5EE9                     206 	.ds 1
   5EEA                     207 _storeY::
   5EEA                     208 	.ds 1
   5EEB                     209 _music::
   5EEB                     210 	.ds 1
   5EEC                     211 _enemyTurn::
   5EEC                     212 	.ds 1
   5EED                     213 _ctInactivity::
   5EED                     214 	.ds 2
   5EEF                     215 _turboMode::
   5EEF                     216 	.ds 1
   5EF0                     217 _nTip::
   5EF0                     218 	.ds 1
   5EF1                     219 _ctWizardAnim::
   5EF1                     220 	.ds 1
   5EF2                     221 _ctMainLoop::
   5EF2                     222 	.ds 2
   5EF4                     223 _ctlUp::
   5EF4                     224 	.ds 4
   5EF8                     225 _ctlDown::
   5EF8                     226 	.ds 4
   5EFC                     227 _ctlLeft::
   5EFC                     228 	.ds 4
   5F00                     229 _ctlRight::
   5F00                     230 	.ds 4
   5F04                     231 _ctlAbort::
   5F04                     232 	.ds 2
   5F06                     233 _ctlMusic::
   5F06                     234 	.ds 2
   5F08                     235 _ctlPause::
   5F08                     236 	.ds 2
   5F0A                     237 _spr::
   5F0A                     238 	.ds 105
   5F73                     239 _sht::
   5F73                     240 	.ds 5
   5F78                     241 _nObj::
   5F78                     242 	.ds 2
   5F7A                     243 _objX::
   5F7A                     244 	.ds 2
   5F7C                     245 _objY::
   5F7C                     246 	.ds 2
   5F7E                     247 _nPObj::
   5F7E                     248 	.ds 1
   5F7F                     249 _enum_dir::
   5F7F                     250 	.ds 1
   5F80                     251 _enum_sta::
   5F80                     252 	.ds 1
   5F81                     253 _enum_mov::
   5F81                     254 	.ds 1
   5F82                     255 _Interrupt_nInt_1_148:
   5F82                     256 	.ds 1
                            257 ;--------------------------------------------------------
                            258 ; ram data
                            259 ;--------------------------------------------------------
                            260 	.area _INITIALIZED
                            261 ;--------------------------------------------------------
                            262 ; absolute external ram data
                            263 ;--------------------------------------------------------
                            264 	.area _DABS (ABS)
                            265 ;--------------------------------------------------------
                            266 ; global & static initialisations
                            267 ;--------------------------------------------------------
                            268 	.area _HOME
                            269 	.area _GSINIT
                            270 	.area _GSFINAL
                            271 	.area _GSINIT
                            272 ;--------------------------------------------------------
                            273 ; Home
                            274 ;--------------------------------------------------------
                            275 	.area _HOME
                            276 	.area _HOME
                            277 ;--------------------------------------------------------
                            278 ; code
                            279 ;--------------------------------------------------------
                            280 	.area _CODE
                            281 ;src/main.c:336: cpctm_createTransparentMaskTable(g_maskTable, 0x100, M0, 0);
                            282 ;	---------------------------------
                            283 ; Function dummy_cpct_transparentMaskTable0M0_container
                            284 ; ---------------------------------
   4A49                     285 _dummy_cpct_transparentMaskTable0M0_container::
                            286 	.area _g_maskTable_ (ABS) 
   0100                     287 	.org 0x100 
   0100                     288 	 _g_maskTable::
   0100 FF AA 55 00 AA AA   289 	.db 0xFF, 0xAA, 0x55, 0x00, 0xAA, 0xAA, 0x00, 0x00 
        00 00
   0108 55 00 55 00 00 00   290 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0110 AA AA 00 00 AA AA   291 	.db 0xAA, 0xAA, 0x00, 0x00, 0xAA, 0xAA, 0x00, 0x00 
        00 00
   0118 00 00 00 00 00 00   292 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0120 55 00 55 00 00 00   293 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0128 55 00 55 00 00 00   294 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0130 00 00 00 00 00 00   295 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0138 00 00 00 00 00 00   296 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0140 AA AA 00 00 AA AA   297 	.db 0xAA, 0xAA, 0x00, 0x00, 0xAA, 0xAA, 0x00, 0x00 
        00 00
   0148 00 00 00 00 00 00   298 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0150 AA AA 00 00 AA AA   299 	.db 0xAA, 0xAA, 0x00, 0x00, 0xAA, 0xAA, 0x00, 0x00 
        00 00
   0158 00 00 00 00 00 00   300 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0160 00 00 00 00 00 00   301 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0168 00 00 00 00 00 00   302 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0170 00 00 00 00 00 00   303 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0178 00 00 00 00 00 00   304 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0180 55 00 55 00 00 00   305 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0188 55 00 55 00 00 00   306 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0190 00 00 00 00 00 00   307 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0198 00 00 00 00 00 00   308 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01A0 55 00 55 00 00 00   309 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01A8 55 00 55 00 00 00   310 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01B0 00 00 00 00 00 00   311 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01B8 00 00 00 00 00 00   312 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01C0 00 00 00 00 00 00   313 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01C8 00 00 00 00 00 00   314 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01D0 00 00 00 00 00 00   315 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01D8 00 00 00 00 00 00   316 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01E0 00 00 00 00 00 00   317 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01E8 00 00 00 00 00 00   318 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01F0 00 00 00 00 00 00   319 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01F8 00 00 00 00 00 00   320 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
                            321 	.area _CSEG (REL, CON) 
                            322 ;src/main.c:373: i16 Abs(i16 number) __z88dk_fastcall {
                            323 ;	---------------------------------
                            324 ; Function Abs
                            325 ; ---------------------------------
   5F83                     326 _Abs::
                            327 ;src/main.c:374: if (number < 0)
   5F83 CB 7C         [ 8]  328 	bit	7, h
   5F85 C8            [11]  329 	ret	Z
                            330 ;src/main.c:375: number *= -1;
   5F86 AF            [ 4]  331 	xor	a, a
   5F87 95            [ 4]  332 	sub	a, l
   5F88 6F            [ 4]  333 	ld	l, a
   5F89 3E 00         [ 7]  334 	ld	a, #0x00
   5F8B 9C            [ 4]  335 	sbc	a, h
   5F8C 67            [ 4]  336 	ld	h, a
                            337 ;src/main.c:376: return (number);
   5F8D C9            [10]  338 	ret
   5F8E                     339 _frmSorcerer1:
   5F8E 6F 2C               340 	.dw _g_sorcerer1_00
   5F90 AB 2C               341 	.dw _g_sorcerer1_01
   5F92 E7 2C               342 	.dw _g_sorcerer1_02
   5F94 23 2D               343 	.dw _g_sorcerer1_03
   5F96 5F 2D               344 	.dw _g_sorcerer1_04
   5F98 9B 2D               345 	.dw _g_sorcerer1_05
   5F9A D7 2D               346 	.dw _g_sorcerer1_06
   5F9C 13 2E               347 	.dw _g_sorcerer1_07
   5F9E                     348 _animUp_Sorcerer1:
   5F9E 8E 5F               349 	.dw (_frmSorcerer1 + 0)
   5FA0 90 5F               350 	.dw (_frmSorcerer1 + 2)
   5FA2                     351 _animDown_Sorcerer1:
   5FA2 92 5F               352 	.dw (_frmSorcerer1 + 4)
   5FA4 94 5F               353 	.dw (_frmSorcerer1 + 6)
   5FA6                     354 _animLeft_Sorcerer1:
   5FA6 96 5F               355 	.dw (_frmSorcerer1 + 8)
   5FA8 98 5F               356 	.dw (_frmSorcerer1 + 10)
   5FAA                     357 _animRight_Sorcerer1:
   5FAA 9A 5F               358 	.dw (_frmSorcerer1 + 12)
   5FAC 9C 5F               359 	.dw (_frmSorcerer1 + 14)
   5FAE                     360 _frmSorcerer2:
   5FAE 17 2A               361 	.dw _g_sorcerer2_00
   5FB0 53 2A               362 	.dw _g_sorcerer2_01
   5FB2 8F 2A               363 	.dw _g_sorcerer2_02
   5FB4 CB 2A               364 	.dw _g_sorcerer2_03
   5FB6 07 2B               365 	.dw _g_sorcerer2_04
   5FB8 43 2B               366 	.dw _g_sorcerer2_05
   5FBA 7F 2B               367 	.dw _g_sorcerer2_06
   5FBC BB 2B               368 	.dw _g_sorcerer2_07
   5FBE                     369 _animUp_Sorcerer2:
   5FBE AE 5F               370 	.dw (_frmSorcerer2 + 0)
   5FC0 B0 5F               371 	.dw (_frmSorcerer2 + 2)
   5FC2                     372 _animDown_Sorcerer2:
   5FC2 B2 5F               373 	.dw (_frmSorcerer2 + 4)
   5FC4 B4 5F               374 	.dw (_frmSorcerer2 + 6)
   5FC6                     375 _animLeft_Sorcerer2:
   5FC6 B6 5F               376 	.dw (_frmSorcerer2 + 8)
   5FC8 B8 5F               377 	.dw (_frmSorcerer2 + 10)
   5FCA                     378 _animRight_Sorcerer2:
   5FCA BA 5F               379 	.dw (_frmSorcerer2 + 12)
   5FCC BC 5F               380 	.dw (_frmSorcerer2 + 14)
   5FCE                     381 _frmSentinel:
   5FCE 37 28               382 	.dw _g_sentinel_0
   5FD0 73 28               383 	.dw _g_sentinel_1
   5FD2 AF 28               384 	.dw _g_sentinel_2
   5FD4 EB 28               385 	.dw _g_sentinel_3
   5FD6 27 29               386 	.dw _g_sentinel_4
   5FD8 63 29               387 	.dw _g_sentinel_5
   5FDA 9F 29               388 	.dw _g_sentinel_6
   5FDC DB 29               389 	.dw _g_sentinel_7
   5FDE                     390 _animUp_Sentinel:
   5FDE CE 5F               391 	.dw (_frmSentinel + 0)
   5FE0 D0 5F               392 	.dw (_frmSentinel + 2)
   5FE2                     393 _animDown_Sentinel:
   5FE2 D2 5F               394 	.dw (_frmSentinel + 4)
   5FE4 D4 5F               395 	.dw (_frmSentinel + 6)
   5FE6                     396 _animLeft_Sentinel:
   5FE6 D6 5F               397 	.dw (_frmSentinel + 8)
   5FE8 D8 5F               398 	.dw (_frmSentinel + 10)
   5FEA                     399 _animRight_Sentinel:
   5FEA DA 5F               400 	.dw (_frmSentinel + 12)
   5FEC DC 5F               401 	.dw (_frmSentinel + 14)
   5FEE                     402 _frmKnight:
   5FEE 57 26               403 	.dw _g_knight_0
   5FF0 93 26               404 	.dw _g_knight_1
   5FF2 CF 26               405 	.dw _g_knight_2
   5FF4 0B 27               406 	.dw _g_knight_3
   5FF6 47 27               407 	.dw _g_knight_4
   5FF8 83 27               408 	.dw _g_knight_5
   5FFA BF 27               409 	.dw _g_knight_6
   5FFC FB 27               410 	.dw _g_knight_7
   5FFE                     411 _animUp_Knight:
   5FFE EE 5F               412 	.dw (_frmKnight + 0)
   6000 F0 5F               413 	.dw (_frmKnight + 2)
   6002                     414 _animDown_Knight:
   6002 F2 5F               415 	.dw (_frmKnight + 4)
   6004 F4 5F               416 	.dw (_frmKnight + 6)
   6006                     417 _animLeft_Knight:
   6006 F6 5F               418 	.dw (_frmKnight + 8)
   6008 F8 5F               419 	.dw (_frmKnight + 10)
   600A                     420 _animRight_Knight:
   600A FA 5F               421 	.dw (_frmKnight + 12)
   600C FC 5F               422 	.dw (_frmKnight + 14)
   600E                     423 _frmGhost:
   600E 77 24               424 	.dw _g_ghost_0
   6010 B3 24               425 	.dw _g_ghost_1
   6012 EF 24               426 	.dw _g_ghost_2
   6014 2B 25               427 	.dw _g_ghost_3
   6016 67 25               428 	.dw _g_ghost_4
   6018 A3 25               429 	.dw _g_ghost_5
   601A DF 25               430 	.dw _g_ghost_6
   601C 1B 26               431 	.dw _g_ghost_7
   601E                     432 _animUp_Ghost:
   601E 0E 60               433 	.dw (_frmGhost + 0)
   6020 10 60               434 	.dw (_frmGhost + 2)
   6022                     435 _animDown_Ghost:
   6022 12 60               436 	.dw (_frmGhost + 4)
   6024 14 60               437 	.dw (_frmGhost + 6)
   6026                     438 _animLeft_Ghost:
   6026 16 60               439 	.dw (_frmGhost + 8)
   6028 18 60               440 	.dw (_frmGhost + 10)
   602A                     441 _animRight_Ghost:
   602A 1A 60               442 	.dw (_frmGhost + 12)
   602C 1C 60               443 	.dw (_frmGhost + 14)
   602E                     444 _frmBat:
   602E FF 23               445 	.dw _g_bat_0
   6030 3B 24               446 	.dw _g_bat_1
   6032                     447 _anim_Bat:
   6032 2E 60               448 	.dw (_frmBat + 0)
   6034 30 60               449 	.dw (_frmBat + 2)
   6036                     450 _frmWitch:
   6036 97 22               451 	.dw _g_witch_0
   6038 D3 22               452 	.dw _g_witch_1
   603A 0F 23               453 	.dw _g_witch_2
   603C 4B 23               454 	.dw _g_witch_3
   603E                     455 _animLeft_Witch:
   603E 36 60               456 	.dw (_frmWitch + 0)
   6040 38 60               457 	.dw (_frmWitch + 2)
   6042                     458 _animRight_Witch:
   6042 3A 60               459 	.dw (_frmWitch + 4)
   6044 3C 60               460 	.dw (_frmWitch + 6)
                            461 ;src/main.c:381: u8 Strlen(const unsigned char *str) __z88dk_fastcall {
                            462 ;	---------------------------------
                            463 ; Function Strlen
                            464 ; ---------------------------------
   6046                     465 _Strlen::
                            466 ;src/main.c:383: for (s = str; *s; ++s);
   6046 4D            [ 4]  467 	ld	c,l
   6047 44            [ 4]  468 	ld	b,h
   6048                     469 00103$:
   6048 7E            [ 7]  470 	ld	a, (hl)
   6049 B7            [ 4]  471 	or	a, a
   604A 28 03         [12]  472 	jr	Z,00101$
   604C 23            [ 6]  473 	inc	hl
   604D 18 F9         [12]  474 	jr	00103$
   604F                     475 00101$:
                            476 ;src/main.c:384: return (s - str);
   604F BF            [ 4]  477 	cp	a, a
   6050 ED 42         [15]  478 	sbc	hl, bc
   6052 C9            [10]  479 	ret
                            480 ;src/main.c:389: char* Itoa(u16 value, char* result, int base) {    
                            481 ;	---------------------------------
                            482 ; Function Itoa
                            483 ; ---------------------------------
   6053                     484 _Itoa::
   6053 DD E5         [15]  485 	push	ix
   6055 DD 21 00 00   [14]  486 	ld	ix,#0
   6059 DD 39         [15]  487 	add	ix,sp
   605B 21 F9 FF      [10]  488 	ld	hl, #-7
   605E 39            [11]  489 	add	hl, sp
   605F F9            [ 6]  490 	ld	sp, hl
                            491 ;src/main.c:391: char* ptr = result, *ptr1 = result, tmp_char;
   6060 DD 5E 06      [19]  492 	ld	e,6 (ix)
   6063 DD 56 07      [19]  493 	ld	d,7 (ix)
   6066 DD 73 FC      [19]  494 	ld	-4 (ix), e
   6069 DD 72 FD      [19]  495 	ld	-3 (ix), d
                            496 ;src/main.c:393: if (base < 2 || base > 36) { 
   606C DD 7E 08      [19]  497 	ld	a, 8 (ix)
   606F D6 02         [ 7]  498 	sub	a, #0x02
   6071 DD 7E 09      [19]  499 	ld	a, 9 (ix)
   6074 17            [ 4]  500 	rla
   6075 3F            [ 4]  501 	ccf
   6076 1F            [ 4]  502 	rra
   6077 DE 80         [ 7]  503 	sbc	a, #0x80
   6079 38 12         [12]  504 	jr	C,00101$
   607B 3E 24         [ 7]  505 	ld	a, #0x24
   607D DD BE 08      [19]  506 	cp	a, 8 (ix)
   6080 3E 00         [ 7]  507 	ld	a, #0x00
   6082 DD 9E 09      [19]  508 	sbc	a, 9 (ix)
   6085 E2 8A 60      [10]  509 	jp	PO, 00140$
   6088 EE 80         [ 7]  510 	xor	a, #0x80
   608A                     511 00140$:
   608A F2 93 60      [10]  512 	jp	P, 00115$
   608D                     513 00101$:
                            514 ;src/main.c:394: *result = '\0'; 
   608D AF            [ 4]  515 	xor	a, a
   608E 12            [ 7]  516 	ld	(de), a
                            517 ;src/main.c:395: return result; 
   608F EB            [ 4]  518 	ex	de,hl
   6090 C3 34 61      [10]  519 	jp	00112$
                            520 ;src/main.c:398: do {
   6093                     521 00115$:
   6093 DD 73 FE      [19]  522 	ld	-2 (ix), e
   6096 DD 72 FF      [19]  523 	ld	-1 (ix), d
   6099                     524 00104$:
                            525 ;src/main.c:399: tmp_value = value;
   6099 DD 7E 04      [19]  526 	ld	a, 4 (ix)
   609C DD 77 F9      [19]  527 	ld	-7 (ix), a
   609F DD 7E 05      [19]  528 	ld	a, 5 (ix)
   60A2 DD 77 FA      [19]  529 	ld	-6 (ix), a
                            530 ;src/main.c:400: value /= base;
   60A5 DD 4E 08      [19]  531 	ld	c,8 (ix)
   60A8 DD 46 09      [19]  532 	ld	b,9 (ix)
   60AB C5            [11]  533 	push	bc
   60AC DD 6E 04      [19]  534 	ld	l,4 (ix)
   60AF DD 66 05      [19]  535 	ld	h,5 (ix)
   60B2 E5            [11]  536 	push	hl
   60B3 CD 69 51      [17]  537 	call	__divuint
   60B6 F1            [10]  538 	pop	af
   60B7 F1            [10]  539 	pop	af
   60B8 DD 75 04      [19]  540 	ld	4 (ix), l
   60BB DD 74 05      [19]  541 	ld	5 (ix), h
                            542 ;src/main.c:401: *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
   60BE DD 4E F9      [19]  543 	ld	c, -7 (ix)
   60C1 DD 5E 04      [19]  544 	ld	e, 4 (ix)
   60C4 DD 66 08      [19]  545 	ld	h, 8 (ix)
   60C7 2E 00         [ 7]  546 	ld	l, #0x00
   60C9 55            [ 4]  547 	ld	d, l
   60CA 06 08         [ 7]  548 	ld	b, #0x08
   60CC                     549 00141$:
   60CC 29            [11]  550 	add	hl, hl
   60CD 30 01         [12]  551 	jr	NC,00142$
   60CF 19            [11]  552 	add	hl, de
   60D0                     553 00142$:
   60D0 10 FA         [13]  554 	djnz	00141$
   60D2 79            [ 4]  555 	ld	a, c
   60D3 95            [ 4]  556 	sub	a, l
   60D4 C6 23         [ 7]  557 	add	a, #0x23
   60D6 4F            [ 4]  558 	ld	c, a
   60D7 17            [ 4]  559 	rla
   60D8 9F            [ 4]  560 	sbc	a, a
   60D9 47            [ 4]  561 	ld	b, a
   60DA 21 39 61      [10]  562 	ld	hl, #___str_0
   60DD 09            [11]  563 	add	hl, bc
   60DE 4E            [ 7]  564 	ld	c, (hl)
   60DF DD 6E FE      [19]  565 	ld	l,-2 (ix)
   60E2 DD 66 FF      [19]  566 	ld	h,-1 (ix)
   60E5 71            [ 7]  567 	ld	(hl), c
   60E6 DD 34 FE      [23]  568 	inc	-2 (ix)
   60E9 20 03         [12]  569 	jr	NZ,00143$
   60EB DD 34 FF      [23]  570 	inc	-1 (ix)
   60EE                     571 00143$:
                            572 ;src/main.c:402: } while (value);
   60EE DD 7E 05      [19]  573 	ld	a, 5 (ix)
   60F1 DD B6 04      [19]  574 	or	a,4 (ix)
   60F4 20 A3         [12]  575 	jr	NZ,00104$
                            576 ;src/main.c:404: if (tmp_value < 0) 
   60F6 DD 4E FE      [19]  577 	ld	c,-2 (ix)
   60F9 DD 46 FF      [19]  578 	ld	b,-1 (ix)
   60FC DD CB FA 7E   [20]  579 	bit	7, -6 (ix)
   6100 28 0F         [12]  580 	jr	Z,00108$
                            581 ;src/main.c:405: *ptr++ = '-';
   6102 DD 6E FE      [19]  582 	ld	l,-2 (ix)
   6105 DD 66 FF      [19]  583 	ld	h,-1 (ix)
   6108 36 2D         [10]  584 	ld	(hl), #0x2d
   610A DD 4E FE      [19]  585 	ld	c,-2 (ix)
   610D DD 46 FF      [19]  586 	ld	b,-1 (ix)
   6110 03            [ 6]  587 	inc	bc
   6111                     588 00108$:
                            589 ;src/main.c:406: *ptr-- = '\0';
   6111 AF            [ 4]  590 	xor	a, a
   6112 02            [ 7]  591 	ld	(bc), a
   6113 0B            [ 6]  592 	dec	bc
                            593 ;src/main.c:408: while(ptr1 < ptr) {
   6114 DD 5E FC      [19]  594 	ld	e,-4 (ix)
   6117 DD 56 FD      [19]  595 	ld	d,-3 (ix)
   611A                     596 00109$:
   611A 7B            [ 4]  597 	ld	a, e
   611B 91            [ 4]  598 	sub	a, c
   611C 7A            [ 4]  599 	ld	a, d
   611D 98            [ 4]  600 	sbc	a, b
   611E 30 0E         [12]  601 	jr	NC,00111$
                            602 ;src/main.c:409: tmp_char = *ptr;
   6120 0A            [ 7]  603 	ld	a, (bc)
   6121 DD 77 FB      [19]  604 	ld	-5 (ix), a
                            605 ;src/main.c:410: *ptr--= *ptr1;
   6124 1A            [ 7]  606 	ld	a, (de)
   6125 02            [ 7]  607 	ld	(bc), a
   6126 0B            [ 6]  608 	dec	bc
                            609 ;src/main.c:411: *ptr1++ = tmp_char;
   6127 DD 7E FB      [19]  610 	ld	a, -5 (ix)
   612A 12            [ 7]  611 	ld	(de), a
   612B 13            [ 6]  612 	inc	de
   612C 18 EC         [12]  613 	jr	00109$
   612E                     614 00111$:
                            615 ;src/main.c:414: return result;
   612E DD 6E 06      [19]  616 	ld	l,6 (ix)
   6131 DD 66 07      [19]  617 	ld	h,7 (ix)
   6134                     618 00112$:
   6134 DD F9         [10]  619 	ld	sp, ix
   6136 DD E1         [14]  620 	pop	ix
   6138 C9            [10]  621 	ret
   6139                     622 ___str_0:
   6139 7A 79 78 77 76 75   623 	.ascii "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmno"
        74 73 72 71 70 6F
        6E 6D 6C 6B 6A 69
        68 67 66 65 64 63
        62 61 39 38 37 36
        35 34 33 32 31 30
        31 32 33 34 35 36
        37 38 39 61 62 63
        64 65 66 67 68 69
        6A 6B 6C 6D 6E 6F
   6175 70 71 72 73 74 75   624 	.ascii "pqrstuvwxyz"
        76 77 78 79 7A
   6180 00                  625 	.db 0x00
                            626 ;src/main.c:419: void Pause(u16 value) __z88dk_fastcall {
                            627 ;	---------------------------------
                            628 ; Function Pause
                            629 ; ---------------------------------
   6181                     630 _Pause::
                            631 ;src/main.c:421: for(i=0; i < value; i++) {
   6181 01 00 00      [10]  632 	ld	bc, #0x0000
   6184                     633 00103$:
   6184 79            [ 4]  634 	ld	a, c
   6185 95            [ 4]  635 	sub	a, l
   6186 78            [ 4]  636 	ld	a, b
   6187 9C            [ 4]  637 	sbc	a, h
   6188 D0            [11]  638 	ret	NC
                            639 ;src/main.c:424: __endasm;
   6189 76            [ 4]  640 	halt
                            641 ;src/main.c:421: for(i=0; i < value; i++) {
   618A 03            [ 6]  642 	inc	bc
   618B 18 F7         [12]  643 	jr	00103$
                            644 ;src/main.c:430: void PlayMusic() {
                            645 ;	---------------------------------
                            646 ; Function PlayMusic
                            647 ; ---------------------------------
   618D                     648 _PlayMusic::
                            649 ;src/main.c:445: __endasm;
   618D D9            [ 4]  650 	exx
   618E 08                  651 	.db	#0x08
   618F F5            [11]  652 	push	af
   6190 C5            [11]  653 	push	bc
   6191 D5            [11]  654 	push	de
   6192 E5            [11]  655 	push	hl
   6193 CD 45 52      [17]  656 	call	_cpct_akp_musicPlay
   6196 E1            [10]  657 	pop	hl
   6197 D1            [10]  658 	pop	de
   6198 C1            [10]  659 	pop	bc
   6199 F1            [10]  660 	pop	af
   619A 08                  661 	.db	#0x08
   619B D9            [ 4]  662 	exx
   619C C9            [10]  663 	ret
                            664 ;src/main.c:450: void Interrupt() {
                            665 ;	---------------------------------
                            666 ; Function Interrupt
                            667 ; ---------------------------------
   619D                     668 _Interrupt::
                            669 ;src/main.c:453: if (++nInt == 6) {
   619D FD 21 82 5F   [14]  670 	ld	iy, #_Interrupt_nInt_1_148
   61A1 FD 34 00      [23]  671 	inc	0 (iy)
   61A4 FD 7E 00      [19]  672 	ld	a, 0 (iy)
   61A7 D6 06         [ 7]  673 	sub	a, #0x06
   61A9 C0            [11]  674 	ret	NZ
                            675 ;src/main.c:454: PlayMusic();
   61AA CD 8D 61      [17]  676 	call	_PlayMusic
                            677 ;src/main.c:455: cpct_scanKeyboard_if();
   61AD CD F2 5B      [17]  678 	call	_cpct_scanKeyboard_if
                            679 ;src/main.c:456: nInt = 0;
   61B0 21 82 5F      [10]  680 	ld	hl,#_Interrupt_nInt_1_148 + 0
   61B3 36 00         [10]  681 	ld	(hl), #0x00
   61B5 C9            [10]  682 	ret
                            683 ;src/main.c:474: void ClearScreen() {
                            684 ;	---------------------------------
                            685 ; Function ClearScreen
                            686 ; ---------------------------------
   61B6                     687 _ClearScreen::
                            688 ;src/main.c:475: cpct_memset(CPCT_VMEM_START, cpct_px2byteM0(BG_COLOR, BG_COLOR), 16384);
   61B6 21 01 01      [10]  689 	ld	hl, #0x0101
   61B9 E5            [11]  690 	push	hl
   61BA CD B3 5C      [17]  691 	call	_cpct_px2byteM0
   61BD 45            [ 4]  692 	ld	b, l
   61BE 21 00 40      [10]  693 	ld	hl, #0x4000
   61C1 E5            [11]  694 	push	hl
   61C2 C5            [11]  695 	push	bc
   61C3 33            [ 6]  696 	inc	sp
   61C4 26 C0         [ 7]  697 	ld	h, #0xc0
   61C6 E5            [11]  698 	push	hl
   61C7 CD CF 5C      [17]  699 	call	_cpct_memset
   61CA C9            [10]  700 	ret
                            701 ;src/main.c:480: u8* GetTileNum(u8 x, u8 y) {
                            702 ;	---------------------------------
                            703 ; Function GetTileNum
                            704 ; ---------------------------------
   61CB                     705 _GetTileNum::
   61CB DD E5         [15]  706 	push	ix
   61CD DD 21 00 00   [14]  707 	ld	ix,#0
   61D1 DD 39         [15]  708 	add	ix,sp
                            709 ;src/main.c:481: return UNPACKED_MAP_INI + (y - ORIG_MAP_Y) / 4 * MAP_W + x / 2;	
   61D3 DD 4E 05      [19]  710 	ld	c, 5 (ix)
   61D6 06 00         [ 7]  711 	ld	b, #0x00
   61D8 79            [ 4]  712 	ld	a, c
   61D9 C6 E0         [ 7]  713 	add	a, #0xe0
   61DB 5F            [ 4]  714 	ld	e, a
   61DC 78            [ 4]  715 	ld	a, b
   61DD CE FF         [ 7]  716 	adc	a, #0xff
   61DF 57            [ 4]  717 	ld	d, a
   61E0 6B            [ 4]  718 	ld	l, e
   61E1 62            [ 4]  719 	ld	h, d
   61E2 CB 7A         [ 8]  720 	bit	7, d
   61E4 28 04         [12]  721 	jr	Z,00103$
   61E6 21 E3 FF      [10]  722 	ld	hl, #0xffe3
   61E9 09            [11]  723 	add	hl, bc
   61EA                     724 00103$:
   61EA CB 2C         [ 8]  725 	sra	h
   61EC CB 1D         [ 8]  726 	rr	l
   61EE CB 2C         [ 8]  727 	sra	h
   61F0 CB 1D         [ 8]  728 	rr	l
   61F2 4D            [ 4]  729 	ld	c, l
   61F3 44            [ 4]  730 	ld	b, h
   61F4 29            [11]  731 	add	hl, hl
   61F5 29            [11]  732 	add	hl, hl
   61F6 09            [11]  733 	add	hl, bc
   61F7 29            [11]  734 	add	hl, hl
   61F8 29            [11]  735 	add	hl, hl
   61F9 29            [11]  736 	add	hl, hl
   61FA 01 71 0F      [10]  737 	ld	bc, #0x0f71
   61FD 09            [11]  738 	add	hl, bc
   61FE DD 4E 04      [19]  739 	ld	c, 4 (ix)
   6201 CB 39         [ 8]  740 	srl	c
   6203 59            [ 4]  741 	ld	e,c
   6204 16 00         [ 7]  742 	ld	d,#0x00
   6206 19            [11]  743 	add	hl, de
   6207 DD E1         [14]  744 	pop	ix
   6209 C9            [10]  745 	ret
                            746 ;src/main.c:486: u8 OnBackground(u8 x, u8 y) {
                            747 ;	---------------------------------
                            748 ; Function OnBackground
                            749 ; ---------------------------------
   620A                     750 _OnBackground::
                            751 ;src/main.c:487: if (*GetTileNum(x+3, y+8) >= TILESET_BLOCKERS) 
   620A 21 03 00      [10]  752 	ld	hl, #3+0
   620D 39            [11]  753 	add	hl, sp
   620E 7E            [ 7]  754 	ld	a, (hl)
   620F C6 08         [ 7]  755 	add	a, #0x08
   6211 47            [ 4]  756 	ld	b, a
   6212 21 02 00      [10]  757 	ld	hl, #2+0
   6215 39            [11]  758 	add	hl, sp
   6216 56            [ 7]  759 	ld	d, (hl)
   6217 14            [ 4]  760 	inc	d
   6218 14            [ 4]  761 	inc	d
   6219 14            [ 4]  762 	inc	d
   621A 4A            [ 4]  763 	ld	c, d
   621B C5            [11]  764 	push	bc
   621C CD CB 61      [17]  765 	call	_GetTileNum
   621F F1            [10]  766 	pop	af
   6220 7E            [ 7]  767 	ld	a, (hl)
   6221 D6 2D         [ 7]  768 	sub	a, #0x2d
   6223 38 03         [12]  769 	jr	C,00102$
                            770 ;src/main.c:488: return FALSE;
   6225 2E 00         [ 7]  771 	ld	l, #0x00
   6227 C9            [10]  772 	ret
   6228                     773 00102$:
                            774 ;src/main.c:489: return TRUE;
   6228 2E 01         [ 7]  775 	ld	l, #0x01
   622A C9            [10]  776 	ret
                            777 ;src/main.c:494: void PrintMap() {
                            778 ;	---------------------------------
                            779 ; Function PrintMap
                            780 ; ---------------------------------
   622B                     781 _PrintMap::
                            782 ;src/main.c:495: cpct_etm_drawTilemap2x4(MAP_W, MAP_H, 
   622B 21 71 0F      [10]  783 	ld	hl, #0x0f71
   622E E5            [11]  784 	push	hl
   622F 21 40 C1      [10]  785 	ld	hl, #0xc140
   6232 E5            [11]  786 	push	hl
   6233 21 2A 28      [10]  787 	ld	hl, #0x282a
   6236 E5            [11]  788 	push	hl
   6237 2E 00         [ 7]  789 	ld	l, #0x00
   6239 E5            [11]  790 	push	hl
   623A AF            [ 4]  791 	xor	a, a
   623B F5            [11]  792 	push	af
   623C 33            [ 6]  793 	inc	sp
   623D CD 11 5B      [17]  794 	call	_cpct_etm_drawTileBox2x4
   6240 C9            [10]  795 	ret
                            796 ;src/main.c:502: void PrintNumber(u16 num, u8 len, u8 x, u8 y, u8 prevDel) { 
                            797 ;	---------------------------------
                            798 ; Function PrintNumber
                            799 ; ---------------------------------
   6241                     800 _PrintNumber::
   6241 DD E5         [15]  801 	push	ix
   6243 DD 21 00 00   [14]  802 	ld	ix,#0
   6247 DD 39         [15]  803 	add	ix,sp
   6249 21 F5 FF      [10]  804 	ld	hl, #-11
   624C 39            [11]  805 	add	hl, sp
   624D F9            [ 6]  806 	ld	sp, hl
                            807 ;src/main.c:508: Itoa(num, txt, 10);    
   624E 21 03 00      [10]  808 	ld	hl, #0x0003
   6251 39            [11]  809 	add	hl, sp
   6252 4D            [ 4]  810 	ld	c, l
   6253 44            [ 4]  811 	ld	b, h
   6254 59            [ 4]  812 	ld	e, c
   6255 50            [ 4]  813 	ld	d, b
   6256 C5            [11]  814 	push	bc
   6257 21 0A 00      [10]  815 	ld	hl, #0x000a
   625A E5            [11]  816 	push	hl
   625B D5            [11]  817 	push	de
   625C DD 6E 04      [19]  818 	ld	l,4 (ix)
   625F DD 66 05      [19]  819 	ld	h,5 (ix)
   6262 E5            [11]  820 	push	hl
   6263 CD 53 60      [17]  821 	call	_Itoa
   6266 21 06 00      [10]  822 	ld	hl, #6
   6269 39            [11]  823 	add	hl, sp
   626A F9            [ 6]  824 	ld	sp, hl
   626B C1            [10]  825 	pop	bc
                            826 ;src/main.c:509: zeros = len - Strlen(txt);
   626C 69            [ 4]  827 	ld	l, c
   626D 60            [ 4]  828 	ld	h, b
   626E C5            [11]  829 	push	bc
   626F CD 46 60      [17]  830 	call	_Strlen
   6272 C1            [10]  831 	pop	bc
   6273 DD 7E 06      [19]  832 	ld	a, 6 (ix)
   6276 95            [ 4]  833 	sub	a, l
   6277 DD 77 F7      [19]  834 	ld	-9 (ix), a
                            835 ;src/main.c:510: nAux = txt[pos];
   627A 0A            [ 7]  836 	ld	a, (bc)
   627B DD 77 F5      [19]  837 	ld	-11 (ix), a
                            838 ;src/main.c:512: while(nAux != '\0')	{	
   627E DD 36 F6 00   [19]  839 	ld	-10 (ix), #0x00
   6282                     840 00103$:
   6282 DD 7E F5      [19]  841 	ld	a, -11 (ix)
   6285 B7            [ 4]  842 	or	a, a
   6286 CA 0B 63      [10]  843 	jp	Z, 00106$
                            844 ;src/main.c:513: u8* ptr = cpct_getScreenPtr(CPCT_VMEM_START, (zeros + pos) * FNT_W + x, y);
   6289 DD 7E F7      [19]  845 	ld	a, -9 (ix)
   628C DD 86 F6      [19]  846 	add	a, -10 (ix)
   628F 5F            [ 4]  847 	ld	e, a
   6290 87            [ 4]  848 	add	a, a
   6291 83            [ 4]  849 	add	a, e
   6292 5F            [ 4]  850 	ld	e,a
   6293 DD 86 07      [19]  851 	add	a, 7 (ix)
   6296 57            [ 4]  852 	ld	d, a
   6297 C5            [11]  853 	push	bc
   6298 DD 7E 08      [19]  854 	ld	a, 8 (ix)
   629B F5            [11]  855 	push	af
   629C 33            [ 6]  856 	inc	sp
   629D D5            [11]  857 	push	de
   629E 33            [ 6]  858 	inc	sp
   629F 21 00 C0      [10]  859 	ld	hl, #0xc000
   62A2 E5            [11]  860 	push	hl
   62A3 CD CF 5D      [17]  861 	call	_cpct_getScreenPtr
   62A6 C1            [10]  862 	pop	bc
                            863 ;src/main.c:515: cpct_drawSolidBox(ptr, cpct_px2byteM0(BG_COLOR, BG_COLOR), FNT_W, FNT_H); // previous deletion
   62A7 DD 75 FE      [19]  864 	ld	-2 (ix), l
   62AA DD 74 FF      [19]  865 	ld	-1 (ix), h
                            866 ;src/main.c:514: if (prevDel) 
   62AD DD 7E 09      [19]  867 	ld	a, 9 (ix)
   62B0 B7            [ 4]  868 	or	a, a
   62B1 28 1C         [12]  869 	jr	Z,00102$
                            870 ;src/main.c:515: cpct_drawSolidBox(ptr, cpct_px2byteM0(BG_COLOR, BG_COLOR), FNT_W, FNT_H); // previous deletion
   62B3 C5            [11]  871 	push	bc
   62B4 21 01 01      [10]  872 	ld	hl, #0x0101
   62B7 E5            [11]  873 	push	hl
   62B8 CD B3 5C      [17]  874 	call	_cpct_px2byteM0
   62BB C1            [10]  875 	pop	bc
   62BC 26 00         [ 7]  876 	ld	h, #0x00
   62BE C5            [11]  877 	push	bc
   62BF 11 03 08      [10]  878 	ld	de, #0x0803
   62C2 D5            [11]  879 	push	de
   62C3 E5            [11]  880 	push	hl
   62C4 DD 6E FE      [19]  881 	ld	l,-2 (ix)
   62C7 DD 66 FF      [19]  882 	ld	h,-1 (ix)
   62CA E5            [11]  883 	push	hl
   62CB CD ED 5C      [17]  884 	call	_cpct_drawSolidBox
   62CE C1            [10]  885 	pop	bc
   62CF                     886 00102$:
                            887 ;src/main.c:516: cpct_drawSpriteMaskedAlignedTable(g_font[nAux - 48], ptr, FNT_W, FNT_H, g_maskTable);
   62CF DD 7E F5      [19]  888 	ld	a, -11 (ix)
   62D2 16 00         [ 7]  889 	ld	d, #0x00
   62D4 C6 D0         [ 7]  890 	add	a, #0xd0
   62D6 5F            [ 4]  891 	ld	e, a
   62D7 7A            [ 4]  892 	ld	a, d
   62D8 CE FF         [ 7]  893 	adc	a, #0xff
   62DA 57            [ 4]  894 	ld	d, a
   62DB 6B            [ 4]  895 	ld	l, e
   62DC 62            [ 4]  896 	ld	h, d
   62DD 29            [11]  897 	add	hl, hl
   62DE 19            [11]  898 	add	hl, de
   62DF 29            [11]  899 	add	hl, hl
   62E0 29            [11]  900 	add	hl, hl
   62E1 29            [11]  901 	add	hl, hl
   62E2 11 49 4B      [10]  902 	ld	de, #_g_font
   62E5 19            [11]  903 	add	hl, de
   62E6 C5            [11]  904 	push	bc
   62E7 11 00 01      [10]  905 	ld	de, #_g_maskTable
   62EA D5            [11]  906 	push	de
   62EB 11 03 08      [10]  907 	ld	de, #0x0803
   62EE D5            [11]  908 	push	de
   62EF DD 5E FE      [19]  909 	ld	e,-2 (ix)
   62F2 DD 56 FF      [19]  910 	ld	d,-1 (ix)
   62F5 D5            [11]  911 	push	de
   62F6 E5            [11]  912 	push	hl
   62F7 CD E5 5D      [17]  913 	call	_cpct_drawSpriteMaskedAlignedTable
   62FA C1            [10]  914 	pop	bc
                            915 ;src/main.c:517: nAux = txt[++pos];
   62FB DD 34 F6      [23]  916 	inc	-10 (ix)
   62FE DD 6E F6      [19]  917 	ld	l,-10 (ix)
   6301 26 00         [ 7]  918 	ld	h,#0x00
   6303 09            [11]  919 	add	hl, bc
   6304 7E            [ 7]  920 	ld	a, (hl)
   6305 DD 77 F5      [19]  921 	ld	-11 (ix), a
   6308 C3 82 62      [10]  922 	jp	00103$
   630B                     923 00106$:
   630B DD F9         [10]  924 	ld	sp, ix
   630D DD E1         [14]  925 	pop	ix
   630F C9            [10]  926 	ret
                            927 ;src/main.c:523: void PrintText(u8 txt[], u8 x, u8 y, u8 prevDel) {
                            928 ;	---------------------------------
                            929 ; Function PrintText
                            930 ; ---------------------------------
   6310                     931 _PrintText::
   6310 DD E5         [15]  932 	push	ix
   6312 DD 21 00 00   [14]  933 	ld	ix,#0
   6316 DD 39         [15]  934 	add	ix,sp
   6318 F5            [11]  935 	push	af
   6319 F5            [11]  936 	push	af
                            937 ;src/main.c:525: u8 car = txt[pos];
   631A DD 4E 04      [19]  938 	ld	c,4 (ix)
   631D DD 46 05      [19]  939 	ld	b,5 (ix)
   6320 0A            [ 7]  940 	ld	a, (bc)
   6321 DD 77 FC      [19]  941 	ld	-4 (ix), a
                            942 ;src/main.c:527: while(car != '\0') { // "@" = blank    ";" = -   ">" = !!   "[" = ,
   6324 DD 36 FD 00   [19]  943 	ld	-3 (ix), #0x00
   6328                     944 00103$:
   6328 DD 7E FC      [19]  945 	ld	a, -4 (ix)
   632B B7            [ 4]  946 	or	a, a
   632C CA AE 63      [10]  947 	jp	Z, 00106$
                            948 ;src/main.c:528: u8* ptr = cpct_getScreenPtr(CPCT_VMEM_START, (pos * FNT_W) + x, y);
   632F DD 6E FD      [19]  949 	ld	l, -3 (ix)
   6332 5D            [ 4]  950 	ld	e, l
   6333 29            [11]  951 	add	hl, hl
   6334 19            [11]  952 	add	hl, de
   6335 7D            [ 4]  953 	ld	a, l
   6336 DD 86 06      [19]  954 	add	a, 6 (ix)
   6339 57            [ 4]  955 	ld	d, a
   633A C5            [11]  956 	push	bc
   633B DD 7E 07      [19]  957 	ld	a, 7 (ix)
   633E F5            [11]  958 	push	af
   633F 33            [ 6]  959 	inc	sp
   6340 D5            [11]  960 	push	de
   6341 33            [ 6]  961 	inc	sp
   6342 21 00 C0      [10]  962 	ld	hl, #0xc000
   6345 E5            [11]  963 	push	hl
   6346 CD CF 5D      [17]  964 	call	_cpct_getScreenPtr
   6349 C1            [10]  965 	pop	bc
                            966 ;src/main.c:530: cpct_drawSolidBox(ptr, cpct_px2byteM0(BG_COLOR, BG_COLOR), FNT_W, FNT_H); // previous deletion
   634A DD 75 FE      [19]  967 	ld	-2 (ix), l
   634D DD 74 FF      [19]  968 	ld	-1 (ix), h
                            969 ;src/main.c:529: if (prevDel) 
   6350 DD 7E 08      [19]  970 	ld	a, 8 (ix)
   6353 B7            [ 4]  971 	or	a, a
   6354 28 1C         [12]  972 	jr	Z,00102$
                            973 ;src/main.c:530: cpct_drawSolidBox(ptr, cpct_px2byteM0(BG_COLOR, BG_COLOR), FNT_W, FNT_H); // previous deletion
   6356 C5            [11]  974 	push	bc
   6357 21 01 01      [10]  975 	ld	hl, #0x0101
   635A E5            [11]  976 	push	hl
   635B CD B3 5C      [17]  977 	call	_cpct_px2byteM0
   635E C1            [10]  978 	pop	bc
   635F 26 00         [ 7]  979 	ld	h, #0x00
   6361 C5            [11]  980 	push	bc
   6362 11 03 08      [10]  981 	ld	de, #0x0803
   6365 D5            [11]  982 	push	de
   6366 E5            [11]  983 	push	hl
   6367 DD 6E FE      [19]  984 	ld	l,-2 (ix)
   636A DD 66 FF      [19]  985 	ld	h,-1 (ix)
   636D E5            [11]  986 	push	hl
   636E CD ED 5C      [17]  987 	call	_cpct_drawSolidBox
   6371 C1            [10]  988 	pop	bc
   6372                     989 00102$:
                            990 ;src/main.c:531: cpct_drawSpriteMaskedAlignedTable(g_font[car - 48], ptr, FNT_W, FNT_H, g_maskTable);
   6372 DD 7E FC      [19]  991 	ld	a, -4 (ix)
   6375 16 00         [ 7]  992 	ld	d, #0x00
   6377 C6 D0         [ 7]  993 	add	a, #0xd0
   6379 5F            [ 4]  994 	ld	e, a
   637A 7A            [ 4]  995 	ld	a, d
   637B CE FF         [ 7]  996 	adc	a, #0xff
   637D 57            [ 4]  997 	ld	d, a
   637E 6B            [ 4]  998 	ld	l, e
   637F 62            [ 4]  999 	ld	h, d
   6380 29            [11] 1000 	add	hl, hl
   6381 19            [11] 1001 	add	hl, de
   6382 29            [11] 1002 	add	hl, hl
   6383 29            [11] 1003 	add	hl, hl
   6384 29            [11] 1004 	add	hl, hl
   6385 11 49 4B      [10] 1005 	ld	de, #_g_font
   6388 19            [11] 1006 	add	hl, de
   6389 C5            [11] 1007 	push	bc
   638A 11 00 01      [10] 1008 	ld	de, #_g_maskTable
   638D D5            [11] 1009 	push	de
   638E 11 03 08      [10] 1010 	ld	de, #0x0803
   6391 D5            [11] 1011 	push	de
   6392 DD 5E FE      [19] 1012 	ld	e,-2 (ix)
   6395 DD 56 FF      [19] 1013 	ld	d,-1 (ix)
   6398 D5            [11] 1014 	push	de
   6399 E5            [11] 1015 	push	hl
   639A CD E5 5D      [17] 1016 	call	_cpct_drawSpriteMaskedAlignedTable
   639D C1            [10] 1017 	pop	bc
                           1018 ;src/main.c:532: car = txt[++pos];
   639E DD 34 FD      [23] 1019 	inc	-3 (ix)
   63A1 DD 6E FD      [19] 1020 	ld	l,-3 (ix)
   63A4 26 00         [ 7] 1021 	ld	h,#0x00
   63A6 09            [11] 1022 	add	hl, bc
   63A7 7E            [ 7] 1023 	ld	a, (hl)
   63A8 DD 77 FC      [19] 1024 	ld	-4 (ix), a
   63AB C3 28 63      [10] 1025 	jp	00103$
   63AE                    1026 00106$:
   63AE DD F9         [10] 1027 	ld	sp, ix
   63B0 DD E1         [14] 1028 	pop	ix
   63B2 C9            [10] 1029 	ret
                           1030 ;src/main.c:538: void PrintFrame(u8 xIni, u8 yIni, u8 xEnd, u8 yEnd) {
                           1031 ;	---------------------------------
                           1032 ; Function PrintFrame
                           1033 ; ---------------------------------
   63B3                    1034 _PrintFrame::
   63B3 DD E5         [15] 1035 	push	ix
   63B5 DD 21 00 00   [14] 1036 	ld	ix,#0
   63B9 DD 39         [15] 1037 	add	ix,sp
   63BB 21 F4 FF      [10] 1038 	ld	hl, #-12
   63BE 39            [11] 1039 	add	hl, sp
   63BF F9            [ 6] 1040 	ld	sp, hl
                           1041 ;src/main.c:539: int i = xIni+3;	
   63C0 DD 4E 04      [19] 1042 	ld	c, 4 (ix)
   63C3 06 00         [ 7] 1043 	ld	b, #0x00
   63C5 03            [ 6] 1044 	inc	bc
   63C6 03            [ 6] 1045 	inc	bc
   63C7 03            [ 6] 1046 	inc	bc
   63C8 DD 71 F8      [19] 1047 	ld	-8 (ix), c
   63CB DD 70 F9      [19] 1048 	ld	-7 (ix), b
                           1049 ;src/main.c:541: while (i < xEnd) {		
   63CE DD 7E 05      [19] 1050 	ld	a, 5 (ix)
   63D1 0F            [ 4] 1051 	rrca
   63D2 0F            [ 4] 1052 	rrca
   63D3 0F            [ 4] 1053 	rrca
   63D4 E6 1F         [ 7] 1054 	and	a, #0x1f
   63D6 DD 77 FF      [19] 1055 	ld	-1 (ix), a
   63D9 DD 7E 05      [19] 1056 	ld	a, 5 (ix)
   63DC E6 07         [ 7] 1057 	and	a, #0x07
   63DE DD 77 FE      [19] 1058 	ld	-2 (ix), a
   63E1 DD 7E 07      [19] 1059 	ld	a, 7 (ix)
   63E4 0F            [ 4] 1060 	rrca
   63E5 0F            [ 4] 1061 	rrca
   63E6 0F            [ 4] 1062 	rrca
   63E7 E6 1F         [ 7] 1063 	and	a, #0x1f
   63E9 DD 77 FD      [19] 1064 	ld	-3 (ix), a
   63EC DD 7E 07      [19] 1065 	ld	a, 7 (ix)
   63EF E6 07         [ 7] 1066 	and	a, #0x07
   63F1 DD 77 FC      [19] 1067 	ld	-4 (ix), a
   63F4                    1068 00101$:
   63F4 DD 7E 06      [19] 1069 	ld	a, 6 (ix)
   63F7 DD 77 FA      [19] 1070 	ld	-6 (ix), a
   63FA DD 36 FB 00   [19] 1071 	ld	-5 (ix), #0x00
                           1072 ;src/main.c:542: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yIni), 3, 6, g_maskTable);	
   63FE DD 6E FF      [19] 1073 	ld	l, -1 (ix)
   6401 26 00         [ 7] 1074 	ld	h, #0x00
   6403 DD 5E FE      [19] 1075 	ld	e, -2 (ix)
   6406 16 00         [ 7] 1076 	ld	d, #0x00
                           1077 ;src/main.c:543: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yEnd), 3, 6, g_maskTable);	
   6408 DD 4E FD      [19] 1078 	ld	c, -3 (ix)
   640B 06 00         [ 7] 1079 	ld	b, #0x00
   640D DD 7E FC      [19] 1080 	ld	a, -4 (ix)
   6410 DD 77 F6      [19] 1081 	ld	-10 (ix), a
   6413 DD 36 F7 00   [19] 1082 	ld	-9 (ix), #0x00
                           1083 ;src/main.c:542: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yIni), 3, 6, g_maskTable);	
   6417 D5            [11] 1084 	push	de
   6418 5D            [ 4] 1085 	ld	e, l
   6419 54            [ 4] 1086 	ld	d, h
   641A 29            [11] 1087 	add	hl, hl
   641B 29            [11] 1088 	add	hl, hl
   641C 19            [11] 1089 	add	hl, de
   641D 29            [11] 1090 	add	hl, hl
   641E 29            [11] 1091 	add	hl, hl
   641F 29            [11] 1092 	add	hl, hl
   6420 29            [11] 1093 	add	hl, hl
   6421 D1            [10] 1094 	pop	de
   6422 E3            [19] 1095 	ex	(sp), hl
   6423 7B            [ 4] 1096 	ld	a, e
   6424 07            [ 4] 1097 	rlca
   6425 07            [ 4] 1098 	rlca
   6426 07            [ 4] 1099 	rlca
   6427 E6 F8         [ 7] 1100 	and	a, #0xf8
   6429 57            [ 4] 1101 	ld	d, a
   642A 1E 00         [ 7] 1102 	ld	e, #0x00
                           1103 ;src/main.c:543: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yEnd), 3, 6, g_maskTable);	
   642C 69            [ 4] 1104 	ld	l, c
   642D 60            [ 4] 1105 	ld	h, b
   642E 29            [11] 1106 	add	hl, hl
   642F 29            [11] 1107 	add	hl, hl
   6430 09            [11] 1108 	add	hl, bc
   6431 29            [11] 1109 	add	hl, hl
   6432 29            [11] 1110 	add	hl, hl
   6433 29            [11] 1111 	add	hl, hl
   6434 29            [11] 1112 	add	hl, hl
   6435 DD 7E F6      [19] 1113 	ld	a, -10 (ix)
   6438 07            [ 4] 1114 	rlca
   6439 07            [ 4] 1115 	rlca
   643A 07            [ 4] 1116 	rlca
   643B E6 F8         [ 7] 1117 	and	a, #0xf8
   643D 47            [ 4] 1118 	ld	b, a
   643E 0E 00         [ 7] 1119 	ld	c, #0x00
                           1120 ;src/main.c:542: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yIni), 3, 6, g_maskTable);	
   6440 DD 7E F4      [19] 1121 	ld	a, -12 (ix)
   6443 C6 00         [ 7] 1122 	add	a, #0x00
   6445 DD 77 F4      [19] 1123 	ld	-12 (ix), a
   6448 DD 7E F5      [19] 1124 	ld	a, -11 (ix)
   644B CE C0         [ 7] 1125 	adc	a, #0xc0
   644D DD 77 F5      [19] 1126 	ld	-11 (ix), a
                           1127 ;src/main.c:543: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yEnd), 3, 6, g_maskTable);	
   6450 D5            [11] 1128 	push	de
   6451 11 00 C0      [10] 1129 	ld	de, #0xc000
   6454 19            [11] 1130 	add	hl, de
   6455 D1            [10] 1131 	pop	de
                           1132 ;src/main.c:542: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yIni), 3, 6, g_maskTable);	
   6456 DD 7E F4      [19] 1133 	ld	a, -12 (ix)
   6459 83            [ 4] 1134 	add	a, e
   645A DD 77 F4      [19] 1135 	ld	-12 (ix), a
   645D DD 7E F5      [19] 1136 	ld	a, -11 (ix)
   6460 8A            [ 4] 1137 	adc	a, d
   6461 DD 77 F5      [19] 1138 	ld	-11 (ix), a
                           1139 ;src/main.c:543: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yEnd), 3, 6, g_maskTable);	
   6464 09            [11] 1140 	add	hl,bc
   6465 DD 75 F6      [19] 1141 	ld	-10 (ix), l
   6468 DD 74 F7      [19] 1142 	ld	-9 (ix), h
                           1143 ;src/main.c:541: while (i < xEnd) {		
   646B DD 7E F8      [19] 1144 	ld	a, -8 (ix)
   646E DD 96 FA      [19] 1145 	sub	a, -6 (ix)
   6471 DD 7E F9      [19] 1146 	ld	a, -7 (ix)
   6474 DD 9E FB      [19] 1147 	sbc	a, -5 (ix)
   6477 E2 7C 64      [10] 1148 	jp	PO, 00127$
   647A EE 80         [ 7] 1149 	xor	a, #0x80
   647C                    1150 00127$:
   647C F2 CE 64      [10] 1151 	jp	P, 00103$
                           1152 ;src/main.c:542: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yIni), 3, 6, g_maskTable);	
   647F 01 00 01      [10] 1153 	ld	bc, #_g_maskTable
   6482 DD 7E F4      [19] 1154 	ld	a, -12 (ix)
   6485 DD 86 F8      [19] 1155 	add	a, -8 (ix)
   6488 5F            [ 4] 1156 	ld	e, a
   6489 DD 7E F5      [19] 1157 	ld	a, -11 (ix)
   648C DD 8E F9      [19] 1158 	adc	a, -7 (ix)
   648F 57            [ 4] 1159 	ld	d, a
   6490 C5            [11] 1160 	push	bc
   6491 21 03 06      [10] 1161 	ld	hl, #0x0603
   6494 E5            [11] 1162 	push	hl
   6495 D5            [11] 1163 	push	de
   6496 21 A5 16      [10] 1164 	ld	hl, #_g_goldframe_2
   6499 E5            [11] 1165 	push	hl
   649A CD E5 5D      [17] 1166 	call	_cpct_drawSpriteMaskedAlignedTable
                           1167 ;src/main.c:543: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yEnd), 3, 6, g_maskTable);	
   649D DD 7E F6      [19] 1168 	ld	a, -10 (ix)
   64A0 DD 86 F8      [19] 1169 	add	a, -8 (ix)
   64A3 4F            [ 4] 1170 	ld	c, a
   64A4 DD 7E F7      [19] 1171 	ld	a, -9 (ix)
   64A7 DD 8E F9      [19] 1172 	adc	a, -7 (ix)
   64AA 47            [ 4] 1173 	ld	b, a
   64AB 21 00 01      [10] 1174 	ld	hl, #_g_maskTable
   64AE E5            [11] 1175 	push	hl
   64AF 21 03 06      [10] 1176 	ld	hl, #0x0603
   64B2 E5            [11] 1177 	push	hl
   64B3 C5            [11] 1178 	push	bc
   64B4 21 A5 16      [10] 1179 	ld	hl, #_g_goldframe_2
   64B7 E5            [11] 1180 	push	hl
   64B8 CD E5 5D      [17] 1181 	call	_cpct_drawSpriteMaskedAlignedTable
                           1182 ;src/main.c:544: i += 3;
   64BB DD 7E F8      [19] 1183 	ld	a, -8 (ix)
   64BE C6 03         [ 7] 1184 	add	a, #0x03
   64C0 DD 77 F8      [19] 1185 	ld	-8 (ix), a
   64C3 DD 7E F9      [19] 1186 	ld	a, -7 (ix)
   64C6 CE 00         [ 7] 1187 	adc	a, #0x00
   64C8 DD 77 F9      [19] 1188 	ld	-7 (ix), a
   64CB C3 F4 63      [10] 1189 	jp	00101$
   64CE                    1190 00103$:
                           1191 ;src/main.c:547: i = yIni+6;
   64CE DD 4E 05      [19] 1192 	ld	c, 5 (ix)
   64D1 06 00         [ 7] 1193 	ld	b, #0x00
   64D3 21 06 00      [10] 1194 	ld	hl, #0x0006
   64D6 09            [11] 1195 	add	hl,bc
   64D7 DD 75 FA      [19] 1196 	ld	-6 (ix), l
   64DA DD 74 FB      [19] 1197 	ld	-5 (ix), h
                           1198 ;src/main.c:548: while (i < yEnd) {		
   64DD                    1199 00104$:
   64DD DD 4E 07      [19] 1200 	ld	c, 7 (ix)
   64E0 06 00         [ 7] 1201 	ld	b, #0x00
   64E2 DD 7E FA      [19] 1202 	ld	a, -6 (ix)
   64E5 91            [ 4] 1203 	sub	a, c
   64E6 DD 7E FB      [19] 1204 	ld	a, -5 (ix)
   64E9 98            [ 4] 1205 	sbc	a, b
   64EA E2 EF 64      [10] 1206 	jp	PO, 00128$
   64ED EE 80         [ 7] 1207 	xor	a, #0x80
   64EF                    1208 00128$:
   64EF F2 79 65      [10] 1209 	jp	P, 00106$
                           1210 ;src/main.c:549: cpct_drawSpriteMaskedAlignedTable(g_goldframe_1, cpctm_screenPtr(CPCT_VMEM_START, xIni, i), 3, 6, g_maskTable);	
   64F2 DD 7E FA      [19] 1211 	ld	a, -6 (ix)
   64F5 DD 77 F8      [19] 1212 	ld	-8 (ix), a
   64F8 DD 7E FB      [19] 1213 	ld	a, -5 (ix)
   64FB DD 77 F9      [19] 1214 	ld	-7 (ix), a
   64FE DD CB F9 2E   [23] 1215 	sra	-7 (ix)
   6502 DD CB F8 1E   [23] 1216 	rr	-8 (ix)
   6506 DD CB F9 2E   [23] 1217 	sra	-7 (ix)
   650A DD CB F8 1E   [23] 1218 	rr	-8 (ix)
   650E DD CB F9 2E   [23] 1219 	sra	-7 (ix)
   6512 DD CB F8 1E   [23] 1220 	rr	-8 (ix)
   6516 DD 4E F8      [19] 1221 	ld	c,-8 (ix)
   6519 DD 46 F9      [19] 1222 	ld	b,-7 (ix)
   651C 69            [ 4] 1223 	ld	l, c
   651D 60            [ 4] 1224 	ld	h, b
   651E 29            [11] 1225 	add	hl, hl
   651F 29            [11] 1226 	add	hl, hl
   6520 09            [11] 1227 	add	hl, bc
   6521 29            [11] 1228 	add	hl, hl
   6522 29            [11] 1229 	add	hl, hl
   6523 29            [11] 1230 	add	hl, hl
   6524 29            [11] 1231 	add	hl, hl
   6525 01 00 C0      [10] 1232 	ld	bc, #0xc000
   6528 09            [11] 1233 	add	hl, bc
   6529 DD 7E FA      [19] 1234 	ld	a, -6 (ix)
   652C E6 07         [ 7] 1235 	and	a, #0x07
   652E 07            [ 4] 1236 	rlca
   652F 07            [ 4] 1237 	rlca
   6530 07            [ 4] 1238 	rlca
   6531 E6 F8         [ 7] 1239 	and	a, #0xf8
   6533 47            [ 4] 1240 	ld	b, a
   6534 0E 00         [ 7] 1241 	ld	c, #0x00
   6536 09            [11] 1242 	add	hl,bc
   6537 EB            [ 4] 1243 	ex	de,hl
   6538 DD 6E 04      [19] 1244 	ld	l,4 (ix)
   653B 26 00         [ 7] 1245 	ld	h,#0x00
   653D 19            [11] 1246 	add	hl, de
   653E D5            [11] 1247 	push	de
   653F 01 00 01      [10] 1248 	ld	bc, #_g_maskTable
   6542 C5            [11] 1249 	push	bc
   6543 01 03 06      [10] 1250 	ld	bc, #0x0603
   6546 C5            [11] 1251 	push	bc
   6547 E5            [11] 1252 	push	hl
   6548 21 93 16      [10] 1253 	ld	hl, #_g_goldframe_1
   654B E5            [11] 1254 	push	hl
   654C CD E5 5D      [17] 1255 	call	_cpct_drawSpriteMaskedAlignedTable
   654F D1            [10] 1256 	pop	de
                           1257 ;src/main.c:550: cpct_drawSpriteMaskedAlignedTable(g_goldframe_1, cpctm_screenPtr(CPCT_VMEM_START, xEnd, i), 3, 6, g_maskTable);	
   6550 01 00 01      [10] 1258 	ld	bc, #_g_maskTable
   6553 DD 6E 06      [19] 1259 	ld	l,6 (ix)
   6556 26 00         [ 7] 1260 	ld	h,#0x00
   6558 19            [11] 1261 	add	hl, de
   6559 C5            [11] 1262 	push	bc
   655A 01 03 06      [10] 1263 	ld	bc, #0x0603
   655D C5            [11] 1264 	push	bc
   655E E5            [11] 1265 	push	hl
   655F 21 93 16      [10] 1266 	ld	hl, #_g_goldframe_1
   6562 E5            [11] 1267 	push	hl
   6563 CD E5 5D      [17] 1268 	call	_cpct_drawSpriteMaskedAlignedTable
                           1269 ;src/main.c:551: i += 6;
   6566 DD 7E FA      [19] 1270 	ld	a, -6 (ix)
   6569 C6 06         [ 7] 1271 	add	a, #0x06
   656B DD 77 FA      [19] 1272 	ld	-6 (ix), a
   656E DD 7E FB      [19] 1273 	ld	a, -5 (ix)
   6571 CE 00         [ 7] 1274 	adc	a, #0x00
   6573 DD 77 FB      [19] 1275 	ld	-5 (ix), a
   6576 C3 DD 64      [10] 1276 	jp	00104$
   6579                    1277 00106$:
                           1278 ;src/main.c:555: cpct_drawSpriteMaskedAlignedTable(g_goldframe_0, cpctm_screenPtr(CPCT_VMEM_START, xIni, yIni), 3, 6, g_maskTable);
   6579 DD 7E F4      [19] 1279 	ld	a, -12 (ix)
   657C DD 86 04      [19] 1280 	add	a, 4 (ix)
   657F 4F            [ 4] 1281 	ld	c, a
   6580 DD 7E F5      [19] 1282 	ld	a, -11 (ix)
   6583 CE 00         [ 7] 1283 	adc	a, #0x00
   6585 47            [ 4] 1284 	ld	b, a
   6586 21 00 01      [10] 1285 	ld	hl, #_g_maskTable
   6589 E5            [11] 1286 	push	hl
   658A 21 03 06      [10] 1287 	ld	hl, #0x0603
   658D E5            [11] 1288 	push	hl
   658E C5            [11] 1289 	push	bc
   658F 21 81 16      [10] 1290 	ld	hl, #_g_goldframe_0
   6592 E5            [11] 1291 	push	hl
   6593 CD E5 5D      [17] 1292 	call	_cpct_drawSpriteMaskedAlignedTable
                           1293 ;src/main.c:557: cpct_drawSpriteMaskedAlignedTable(g_goldframe_0, cpctm_screenPtr(CPCT_VMEM_START, xEnd, yIni), 3, 6, g_maskTable);
   6596 DD 7E F4      [19] 1294 	ld	a, -12 (ix)
   6599 DD 86 06      [19] 1295 	add	a, 6 (ix)
   659C 4F            [ 4] 1296 	ld	c, a
   659D DD 7E F5      [19] 1297 	ld	a, -11 (ix)
   65A0 CE 00         [ 7] 1298 	adc	a, #0x00
   65A2 47            [ 4] 1299 	ld	b, a
   65A3 21 00 01      [10] 1300 	ld	hl, #_g_maskTable
   65A6 E5            [11] 1301 	push	hl
   65A7 21 03 06      [10] 1302 	ld	hl, #0x0603
   65AA E5            [11] 1303 	push	hl
   65AB C5            [11] 1304 	push	bc
   65AC 21 81 16      [10] 1305 	ld	hl, #_g_goldframe_0
   65AF E5            [11] 1306 	push	hl
   65B0 CD E5 5D      [17] 1307 	call	_cpct_drawSpriteMaskedAlignedTable
                           1308 ;src/main.c:559: cpct_drawSpriteMaskedAlignedTable(g_goldframe_0, cpctm_screenPtr(CPCT_VMEM_START, xIni, yEnd), 3, 6, g_maskTable);
   65B3 DD 7E F6      [19] 1309 	ld	a, -10 (ix)
   65B6 DD 86 04      [19] 1310 	add	a, 4 (ix)
   65B9 4F            [ 4] 1311 	ld	c, a
   65BA DD 7E F7      [19] 1312 	ld	a, -9 (ix)
   65BD CE 00         [ 7] 1313 	adc	a, #0x00
   65BF 47            [ 4] 1314 	ld	b, a
   65C0 21 00 01      [10] 1315 	ld	hl, #_g_maskTable
   65C3 E5            [11] 1316 	push	hl
   65C4 21 03 06      [10] 1317 	ld	hl, #0x0603
   65C7 E5            [11] 1318 	push	hl
   65C8 C5            [11] 1319 	push	bc
   65C9 21 81 16      [10] 1320 	ld	hl, #_g_goldframe_0
   65CC E5            [11] 1321 	push	hl
   65CD CD E5 5D      [17] 1322 	call	_cpct_drawSpriteMaskedAlignedTable
                           1323 ;src/main.c:561: cpct_drawSpriteMaskedAlignedTable(g_goldframe_0, cpctm_screenPtr(CPCT_VMEM_START, xEnd, yEnd), 3, 6, g_maskTable);									
   65D0 DD 7E F6      [19] 1324 	ld	a, -10 (ix)
   65D3 DD 86 06      [19] 1325 	add	a, 6 (ix)
   65D6 4F            [ 4] 1326 	ld	c, a
   65D7 DD 7E F7      [19] 1327 	ld	a, -9 (ix)
   65DA CE 00         [ 7] 1328 	adc	a, #0x00
   65DC 47            [ 4] 1329 	ld	b, a
   65DD 21 00 01      [10] 1330 	ld	hl, #_g_maskTable
   65E0 E5            [11] 1331 	push	hl
   65E1 21 03 06      [10] 1332 	ld	hl, #0x0603
   65E4 E5            [11] 1333 	push	hl
   65E5 C5            [11] 1334 	push	bc
   65E6 21 81 16      [10] 1335 	ld	hl, #_g_goldframe_0
   65E9 E5            [11] 1336 	push	hl
   65EA CD E5 5D      [17] 1337 	call	_cpct_drawSpriteMaskedAlignedTable
   65ED DD F9         [10] 1338 	ld	sp, ix
   65EF DD E1         [14] 1339 	pop	ix
   65F1 C9            [10] 1340 	ret
                           1341 ;src/main.c:577: void PrintSmallBlueBox() {
                           1342 ;	---------------------------------
                           1343 ; Function PrintSmallBlueBox
                           1344 ; ---------------------------------
   65F2                    1345 _PrintSmallBlueBox::
                           1346 ;src/main.c:578: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START,  6, 80), cpct_px2byteM0(4, 4), 34, 60);
   65F2 21 04 04      [10] 1347 	ld	hl, #0x0404
   65F5 E5            [11] 1348 	push	hl
   65F6 CD B3 5C      [17] 1349 	call	_cpct_px2byteM0
   65F9 26 00         [ 7] 1350 	ld	h, #0x00
   65FB 01 22 3C      [10] 1351 	ld	bc, #0x3c22
   65FE C5            [11] 1352 	push	bc
   65FF E5            [11] 1353 	push	hl
   6600 21 26 C3      [10] 1354 	ld	hl, #0xc326
   6603 E5            [11] 1355 	push	hl
   6604 CD ED 5C      [17] 1356 	call	_cpct_drawSolidBox
                           1357 ;src/main.c:579: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 40, 80), cpct_px2byteM0(4, 4), 34, 60);
   6607 21 04 04      [10] 1358 	ld	hl, #0x0404
   660A E5            [11] 1359 	push	hl
   660B CD B3 5C      [17] 1360 	call	_cpct_px2byteM0
   660E 26 00         [ 7] 1361 	ld	h, #0x00
   6610 01 22 3C      [10] 1362 	ld	bc, #0x3c22
   6613 C5            [11] 1363 	push	bc
   6614 E5            [11] 1364 	push	hl
   6615 21 48 C3      [10] 1365 	ld	hl, #0xc348
   6618 E5            [11] 1366 	push	hl
   6619 CD ED 5C      [17] 1367 	call	_cpct_drawSolidBox
                           1368 ;src/main.c:580: PrintFrame(6,80,71,134);
   661C 21 47 86      [10] 1369 	ld	hl, #0x8647
   661F E5            [11] 1370 	push	hl
   6620 21 06 50      [10] 1371 	ld	hl, #0x5006
   6623 E5            [11] 1372 	push	hl
   6624 CD B3 63      [17] 1373 	call	_PrintFrame
   6627 F1            [10] 1374 	pop	af
   6628 F1            [10] 1375 	pop	af
   6629 C9            [10] 1376 	ret
                           1377 ;src/main.c:585: void PrintLevelInfo() {
                           1378 ;	---------------------------------
                           1379 ; Function PrintLevelInfo
                           1380 ; ---------------------------------
   662A                    1381 _PrintLevelInfo::
                           1382 ;src/main.c:586: PrintSmallBlueBox();	
   662A CD F2 65      [17] 1383 	call	_PrintSmallBlueBox
                           1384 ;src/main.c:588: if (TwoPlayers) {
   662D 3A D4 5E      [13] 1385 	ld	a,(#_TwoPlayers + 0)
   6630 B7            [ 4] 1386 	or	a, a
   6631 28 49         [12] 1387 	jr	Z,00102$
                           1388 ;src/main.c:589: PrintText("LEVEL", 13, 95, 0);
   6633 21 5F 00      [10] 1389 	ld	hl, #0x005f
   6636 E5            [11] 1390 	push	hl
   6637 3E 0D         [ 7] 1391 	ld	a, #0x0d
   6639 F5            [11] 1392 	push	af
   663A 33            [ 6] 1393 	inc	sp
   663B 21 BB 66      [10] 1394 	ld	hl, #___str_1
   663E E5            [11] 1395 	push	hl
   663F CD 10 63      [17] 1396 	call	_PrintText
   6642 F1            [10] 1397 	pop	af
                           1398 ;src/main.c:590: PrintText(lName, 31, 95, 0);
   6643 33            [ 6] 1399 	inc	sp
   6644 21 5F 00      [10] 1400 	ld	hl,#0x005f
   6647 E3            [19] 1401 	ex	(sp),hl
   6648 3E 1F         [ 7] 1402 	ld	a, #0x1f
   664A F5            [11] 1403 	push	af
   664B 33            [ 6] 1404 	inc	sp
   664C 2A D2 5E      [16] 1405 	ld	hl, (_lName)
   664F E5            [11] 1406 	push	hl
   6650 CD 10 63      [17] 1407 	call	_PrintText
   6653 F1            [10] 1408 	pop	af
                           1409 ;src/main.c:591: PrintText("HIGH@SCORE:", 16, 118, 0);
   6654 33            [ 6] 1410 	inc	sp
   6655 21 76 00      [10] 1411 	ld	hl,#0x0076
   6658 E3            [19] 1412 	ex	(sp),hl
   6659 3E 10         [ 7] 1413 	ld	a, #0x10
   665B F5            [11] 1414 	push	af
   665C 33            [ 6] 1415 	inc	sp
   665D 21 C1 66      [10] 1416 	ld	hl, #___str_2
   6660 E5            [11] 1417 	push	hl
   6661 CD 10 63      [17] 1418 	call	_PrintText
   6664 F1            [10] 1419 	pop	af
                           1420 ;src/main.c:592: PrintNumber(highScore, 4, 52, 118, 0);
   6665 33            [ 6] 1421 	inc	sp
   6666 21 76 00      [10] 1422 	ld	hl,#0x0076
   6669 E3            [19] 1423 	ex	(sp),hl
   666A 21 04 34      [10] 1424 	ld	hl, #0x3404
   666D E5            [11] 1425 	push	hl
   666E 2A D9 5E      [16] 1426 	ld	hl, (_highScore)
   6671 E5            [11] 1427 	push	hl
   6672 CD 41 62      [17] 1428 	call	_PrintNumber
   6675 21 06 00      [10] 1429 	ld	hl, #6
   6678 39            [11] 1430 	add	hl, sp
   6679 F9            [ 6] 1431 	ld	sp, hl
   667A 18 23         [12] 1432 	jr	00103$
   667C                    1433 00102$:
                           1434 ;src/main.c:595: PrintText("LEVEL", 13, 107, 0);
   667C 21 6B 00      [10] 1435 	ld	hl, #0x006b
   667F E5            [11] 1436 	push	hl
   6680 3E 0D         [ 7] 1437 	ld	a, #0x0d
   6682 F5            [11] 1438 	push	af
   6683 33            [ 6] 1439 	inc	sp
   6684 21 BB 66      [10] 1440 	ld	hl, #___str_1
   6687 E5            [11] 1441 	push	hl
   6688 CD 10 63      [17] 1442 	call	_PrintText
   668B F1            [10] 1443 	pop	af
                           1444 ;src/main.c:596: PrintText(lName, 31, 107, 0);
   668C 33            [ 6] 1445 	inc	sp
   668D 21 6B 00      [10] 1446 	ld	hl,#0x006b
   6690 E3            [19] 1447 	ex	(sp),hl
   6691 3E 1F         [ 7] 1448 	ld	a, #0x1f
   6693 F5            [11] 1449 	push	af
   6694 33            [ 6] 1450 	inc	sp
   6695 2A D2 5E      [16] 1451 	ld	hl, (_lName)
   6698 E5            [11] 1452 	push	hl
   6699 CD 10 63      [17] 1453 	call	_PrintText
   669C F1            [10] 1454 	pop	af
   669D F1            [10] 1455 	pop	af
   669E 33            [ 6] 1456 	inc	sp
   669F                    1457 00103$:
                           1458 ;src/main.c:599: cpct_akp_musicInit(g_start); // start level music
   669F 21 00 02      [10] 1459 	ld	hl, #_g_start
   66A2 E5            [11] 1460 	push	hl
   66A3 CD 48 59      [17] 1461 	call	_cpct_akp_musicInit
   66A6 F1            [10] 1462 	pop	af
                           1463 ;src/main.c:600: Pause(1150);
   66A7 21 7E 04      [10] 1464 	ld	hl, #0x047e
   66AA CD 81 61      [17] 1465 	call	_Pause
                           1466 ;src/main.c:601: if (music)
   66AD 3A EB 5E      [13] 1467 	ld	a,(#_music + 0)
   66B0 B7            [ 4] 1468 	or	a, a
   66B1 C8            [11] 1469 	ret	Z
                           1470 ;src/main.c:602: cpct_akp_musicInit(g_ingame); // music ingame
   66B2 21 91 07      [10] 1471 	ld	hl, #_g_ingame
   66B5 E5            [11] 1472 	push	hl
   66B6 CD 48 59      [17] 1473 	call	_cpct_akp_musicInit
   66B9 F1            [10] 1474 	pop	af
   66BA C9            [10] 1475 	ret
   66BB                    1476 ___str_1:
   66BB 4C 45 56 45 4C     1477 	.ascii "LEVEL"
   66C0 00                 1478 	.db 0x00
   66C1                    1479 ___str_2:
   66C1 48 49 47 48 40 53  1480 	.ascii "HIGH@SCORE:"
        43 4F 52 45 3A
   66CC 00                 1481 	.db 0x00
                           1482 ;src/main.c:606: void PrintEndGame(u8 player) __z88dk_fastcall {
                           1483 ;	---------------------------------
                           1484 ; Function PrintEndGame
                           1485 ; ---------------------------------
   66CD                    1486 _PrintEndGame::
   66CD 3B            [ 6] 1487 	dec	sp
   66CE FD 21 00 00   [14] 1488 	ld	iy, #0
   66D2 FD 39         [15] 1489 	add	iy, sp
   66D4 FD 75 00      [19] 1490 	ld	0 (iy), l
                           1491 ;src/main.c:608: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 5, 40), cpct_px2byteM0(4, 4), 35, 144);
   66D7 21 04 04      [10] 1492 	ld	hl, #0x0404
   66DA E5            [11] 1493 	push	hl
   66DB CD B3 5C      [17] 1494 	call	_cpct_px2byteM0
   66DE 26 00         [ 7] 1495 	ld	h, #0x00
   66E0 01 23 90      [10] 1496 	ld	bc, #0x9023
   66E3 C5            [11] 1497 	push	bc
   66E4 E5            [11] 1498 	push	hl
   66E5 21 95 C1      [10] 1499 	ld	hl, #0xc195
   66E8 E5            [11] 1500 	push	hl
   66E9 CD ED 5C      [17] 1501 	call	_cpct_drawSolidBox
                           1502 ;src/main.c:609: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 40, 40), cpct_px2byteM0(4, 4), 35, 144);	
   66EC 21 04 04      [10] 1503 	ld	hl, #0x0404
   66EF E5            [11] 1504 	push	hl
   66F0 CD B3 5C      [17] 1505 	call	_cpct_px2byteM0
   66F3 26 00         [ 7] 1506 	ld	h, #0x00
   66F5 01 23 90      [10] 1507 	ld	bc, #0x9023
   66F8 C5            [11] 1508 	push	bc
   66F9 E5            [11] 1509 	push	hl
   66FA 21 B8 C1      [10] 1510 	ld	hl, #0xc1b8
   66FD E5            [11] 1511 	push	hl
   66FE CD ED 5C      [17] 1512 	call	_cpct_drawSolidBox
                           1513 ;src/main.c:610: PrintFrame(5,40,72,178);
   6701 21 48 B2      [10] 1514 	ld	hl, #0xb248
   6704 E5            [11] 1515 	push	hl
   6705 21 05 28      [10] 1516 	ld	hl, #0x2805
   6708 E5            [11] 1517 	push	hl
   6709 CD B3 63      [17] 1518 	call	_PrintFrame
   670C F1            [10] 1519 	pop	af
                           1520 ;src/main.c:612: PrintText("CONGRATULATIONS", 12, 60, 0);
   670D 21 3C 00      [10] 1521 	ld	hl, #0x003c
   6710 E3            [19] 1522 	ex	(sp),hl
   6711 3E 0C         [ 7] 1523 	ld	a, #0x0c
   6713 F5            [11] 1524 	push	af
   6714 33            [ 6] 1525 	inc	sp
   6715 21 B8 67      [10] 1526 	ld	hl, #___str_3
   6718 E5            [11] 1527 	push	hl
   6719 CD 10 63      [17] 1528 	call	_PrintText
   671C F1            [10] 1529 	pop	af
                           1530 ;src/main.c:613: PrintText("PLAYER@@>", 12, 70, 0);
   671D 33            [ 6] 1531 	inc	sp
   671E 21 46 00      [10] 1532 	ld	hl,#0x0046
   6721 E3            [19] 1533 	ex	(sp),hl
   6722 3E 0C         [ 7] 1534 	ld	a, #0x0c
   6724 F5            [11] 1535 	push	af
   6725 33            [ 6] 1536 	inc	sp
   6726 21 C8 67      [10] 1537 	ld	hl, #___str_4
   6729 E5            [11] 1538 	push	hl
   672A CD 10 63      [17] 1539 	call	_PrintText
   672D F1            [10] 1540 	pop	af
   672E F1            [10] 1541 	pop	af
   672F 33            [ 6] 1542 	inc	sp
                           1543 ;src/main.c:614: PrintNumber(++player, 1, 33, 70, 0);
   6730 21 00 00      [10] 1544 	ld	hl, #0+0
   6733 39            [11] 1545 	add	hl, sp
   6734 4E            [ 7] 1546 	ld	c, (hl)
   6735 0C            [ 4] 1547 	inc	c
   6736 06 00         [ 7] 1548 	ld	b, #0x00
   6738 21 46 00      [10] 1549 	ld	hl, #0x0046
   673B E5            [11] 1550 	push	hl
   673C 21 01 21      [10] 1551 	ld	hl, #0x2101
   673F E5            [11] 1552 	push	hl
   6740 C5            [11] 1553 	push	bc
   6741 CD 41 62      [17] 1554 	call	_PrintNumber
   6744 21 06 00      [10] 1555 	ld	hl, #6
   6747 39            [11] 1556 	add	hl, sp
   6748 F9            [ 6] 1557 	ld	sp, hl
                           1558 ;src/main.c:615: PrintText("YOU@FOUND@YOUR", 12, 90, 0);
   6749 21 5A 00      [10] 1559 	ld	hl, #0x005a
   674C E5            [11] 1560 	push	hl
   674D 3E 0C         [ 7] 1561 	ld	a, #0x0c
   674F F5            [11] 1562 	push	af
   6750 33            [ 6] 1563 	inc	sp
   6751 21 D2 67      [10] 1564 	ld	hl, #___str_5
   6754 E5            [11] 1565 	push	hl
   6755 CD 10 63      [17] 1566 	call	_PrintText
   6758 F1            [10] 1567 	pop	af
                           1568 ;src/main.c:616: PrintText("FATHERS@SPELL@BOOK", 12, 100, 0);
   6759 33            [ 6] 1569 	inc	sp
   675A 21 64 00      [10] 1570 	ld	hl,#0x0064
   675D E3            [19] 1571 	ex	(sp),hl
   675E 3E 0C         [ 7] 1572 	ld	a, #0x0c
   6760 F5            [11] 1573 	push	af
   6761 33            [ 6] 1574 	inc	sp
   6762 21 E1 67      [10] 1575 	ld	hl, #___str_6
   6765 E5            [11] 1576 	push	hl
   6766 CD 10 63      [17] 1577 	call	_PrintText
   6769 F1            [10] 1578 	pop	af
                           1579 ;src/main.c:617: PrintText("NOW@YOUR@POWER@WILL", 12, 120, 0);
   676A 33            [ 6] 1580 	inc	sp
   676B 21 78 00      [10] 1581 	ld	hl,#0x0078
   676E E3            [19] 1582 	ex	(sp),hl
   676F 3E 0C         [ 7] 1583 	ld	a, #0x0c
   6771 F5            [11] 1584 	push	af
   6772 33            [ 6] 1585 	inc	sp
   6773 21 F4 67      [10] 1586 	ld	hl, #___str_7
   6776 E5            [11] 1587 	push	hl
   6777 CD 10 63      [17] 1588 	call	_PrintText
   677A F1            [10] 1589 	pop	af
                           1590 ;src/main.c:618: PrintText("BE@UNSURPASSED", 12, 130, 0);
   677B 33            [ 6] 1591 	inc	sp
   677C 21 82 00      [10] 1592 	ld	hl,#0x0082
   677F E3            [19] 1593 	ex	(sp),hl
   6780 3E 0C         [ 7] 1594 	ld	a, #0x0c
   6782 F5            [11] 1595 	push	af
   6783 33            [ 6] 1596 	inc	sp
   6784 21 08 68      [10] 1597 	ld	hl, #___str_8
   6787 E5            [11] 1598 	push	hl
   6788 CD 10 63      [17] 1599 	call	_PrintText
   678B F1            [10] 1600 	pop	af
                           1601 ;src/main.c:619: PrintText(";THANKS@FOR@PLAYING;", 10, 160, 0);	
   678C 33            [ 6] 1602 	inc	sp
   678D 21 A0 00      [10] 1603 	ld	hl,#0x00a0
   6790 E3            [19] 1604 	ex	(sp),hl
   6791 3E 0A         [ 7] 1605 	ld	a, #0x0a
   6793 F5            [11] 1606 	push	af
   6794 33            [ 6] 1607 	inc	sp
   6795 21 17 68      [10] 1608 	ld	hl, #___str_9
   6798 E5            [11] 1609 	push	hl
   6799 CD 10 63      [17] 1610 	call	_PrintText
   679C F1            [10] 1611 	pop	af
                           1612 ;src/main.c:621: cpct_akp_musicInit(g_completed); // completed level theme
   679D 33            [ 6] 1613 	inc	sp
   679E 21 9E 04      [10] 1614 	ld	hl,#_g_completed
   67A1 E3            [19] 1615 	ex	(sp),hl
   67A2 CD 48 59      [17] 1616 	call	_cpct_akp_musicInit
   67A5 F1            [10] 1617 	pop	af
                           1618 ;src/main.c:622: Pause(1000);
   67A6 21 E8 03      [10] 1619 	ld	hl, #0x03e8
   67A9 CD 81 61      [17] 1620 	call	_Pause
                           1621 ;src/main.c:623: while (!cpct_isAnyKeyPressed()); // wait for a key press
   67AC                    1622 00101$:
   67AC CD E5 5B      [17] 1623 	call	_cpct_isAnyKeyPressed
   67AF 7D            [ 4] 1624 	ld	a, l
   67B0 B7            [ 4] 1625 	or	a, a
   67B1 28 F9         [12] 1626 	jr	Z,00101$
                           1627 ;src/main.c:624: InitGame();
   67B3 CD F9 9F      [17] 1628 	call	_InitGame
   67B6 33            [ 6] 1629 	inc	sp
   67B7 C9            [10] 1630 	ret
   67B8                    1631 ___str_3:
   67B8 43 4F 4E 47 52 41  1632 	.ascii "CONGRATULATIONS"
        54 55 4C 41 54 49
        4F 4E 53
   67C7 00                 1633 	.db 0x00
   67C8                    1634 ___str_4:
   67C8 50 4C 41 59 45 52  1635 	.ascii "PLAYER@@>"
        40 40 3E
   67D1 00                 1636 	.db 0x00
   67D2                    1637 ___str_5:
   67D2 59 4F 55 40 46 4F  1638 	.ascii "YOU@FOUND@YOUR"
        55 4E 44 40 59 4F
        55 52
   67E0 00                 1639 	.db 0x00
   67E1                    1640 ___str_6:
   67E1 46 41 54 48 45 52  1641 	.ascii "FATHERS@SPELL@BOOK"
        53 40 53 50 45 4C
        4C 40 42 4F 4F 4B
   67F3 00                 1642 	.db 0x00
   67F4                    1643 ___str_7:
   67F4 4E 4F 57 40 59 4F  1644 	.ascii "NOW@YOUR@POWER@WILL"
        55 52 40 50 4F 57
        45 52 40 57 49 4C
        4C
   6807 00                 1645 	.db 0x00
   6808                    1646 ___str_8:
   6808 42 45 40 55 4E 53  1647 	.ascii "BE@UNSURPASSED"
        55 52 50 41 53 53
        45 44
   6816 00                 1648 	.db 0x00
   6817                    1649 ___str_9:
   6817 3B 54 48 41 4E 4B  1650 	.ascii ";THANKS@FOR@PLAYING;"
        53 40 46 4F 52 40
        50 4C 41 59 49 4E
        47 3B
   682B 00                 1651 	.db 0x00
                           1652 ;src/main.c:633: cpct_keyID ReturnKeyPressed() {
                           1653 ;	---------------------------------
                           1654 ; Function ReturnKeyPressed
                           1655 ; ---------------------------------
   682C                    1656 _ReturnKeyPressed::
   682C DD E5         [15] 1657 	push	ix
   682E DD 21 00 00   [14] 1658 	ld	ix,#0
   6832 DD 39         [15] 1659 	add	ix,sp
   6834 F5            [11] 1660 	push	af
                           1661 ;src/main.c:634: u8 i = 10, *keys = cpct_keyboardStatusBuffer + 9;
   6835 0E 0A         [ 7] 1662 	ld	c, #0x0a
                           1663 ;src/main.c:637: do { cpct_scanKeyboard(); } while ( ! cpct_isAnyKeyPressed() );
   6837                    1664 00101$:
   6837 C5            [11] 1665 	push	bc
   6838 CD 20 5E      [17] 1666 	call	_cpct_scanKeyboard
   683B CD E5 5B      [17] 1667 	call	_cpct_isAnyKeyPressed
   683E C1            [10] 1668 	pop	bc
   683F 7D            [ 4] 1669 	ld	a, l
   6840 B7            [ 4] 1670 	or	a, a
   6841 28 F4         [12] 1671 	jr	Z,00101$
                           1672 ;src/main.c:639: do {
   6843 11 B2 5B      [10] 1673 	ld	de, #(_cpct_keyboardStatusBuffer + 0x0009)
   6846 06 0A         [ 7] 1674 	ld	b, #0x0a
   6848                    1675 00106$:
                           1676 ;src/main.c:640: keypressed = *keys ^ 0xFF;
   6848 1A            [ 7] 1677 	ld	a, (de)
   6849 EE FF         [ 7] 1678 	xor	a, #0xff
   684B 6F            [ 4] 1679 	ld	l, a
   684C 26 00         [ 7] 1680 	ld	h, #0x00
   684E 33            [ 6] 1681 	inc	sp
   684F 33            [ 6] 1682 	inc	sp
   6850 E5            [11] 1683 	push	hl
                           1684 ;src/main.c:641: if (keypressed)
   6851 7C            [ 4] 1685 	ld	a, h
   6852 B5            [ 4] 1686 	or	a,l
   6853 28 0B         [12] 1687 	jr	Z,00105$
                           1688 ;src/main.c:642: return (keypressed << 8) + (i - 1); 
   6855 DD 66 FE      [19] 1689 	ld	h, -2 (ix)
   6858 2E 00         [ 7] 1690 	ld	l, #0x00
   685A 06 00         [ 7] 1691 	ld	b, #0x00
   685C 0B            [ 6] 1692 	dec	bc
   685D 09            [11] 1693 	add	hl, bc
   685E 18 0A         [12] 1694 	jr	00109$
   6860                    1695 00105$:
                           1696 ;src/main.c:643: keys--;
   6860 1B            [ 6] 1697 	dec	de
                           1698 ;src/main.c:644: } while(--i);    
   6861 05            [ 4] 1699 	dec	b
   6862 78            [ 4] 1700 	ld	a,b
   6863 4F            [ 4] 1701 	ld	c,a
   6864 B7            [ 4] 1702 	or	a, a
   6865 20 E1         [12] 1703 	jr	NZ,00106$
                           1704 ;src/main.c:645: return 0;
   6867 21 00 00      [10] 1705 	ld	hl, #0x0000
   686A                    1706 00109$:
   686A DD F9         [10] 1707 	ld	sp, ix
   686C DD E1         [14] 1708 	pop	ix
   686E C9            [10] 1709 	ret
                           1710 ;src/main.c:651: void Wait4Key(cpct_keyID key) {
                           1711 ;	---------------------------------
                           1712 ; Function Wait4Key
                           1713 ; ---------------------------------
   686F                    1714 _Wait4Key::
                           1715 ;src/main.c:652: do cpct_scanKeyboard_f();
   686F                    1716 00101$:
   686F CD CD 51      [17] 1717 	call	_cpct_scanKeyboard_f
                           1718 ;src/main.c:653: while(!cpct_isKeyPressed(key));
   6872 C1            [10] 1719 	pop	bc
   6873 E1            [10] 1720 	pop	hl
   6874 E5            [11] 1721 	push	hl
   6875 C5            [11] 1722 	push	bc
   6876 CD C1 51      [17] 1723 	call	_cpct_isKeyPressed
   6879 7D            [ 4] 1724 	ld	a, l
   687A B7            [ 4] 1725 	or	a, a
   687B 28 F2         [12] 1726 	jr	Z,00101$
                           1727 ;src/main.c:654: do cpct_scanKeyboard_f();
   687D                    1728 00104$:
   687D CD CD 51      [17] 1729 	call	_cpct_scanKeyboard_f
                           1730 ;src/main.c:655: while(cpct_isKeyPressed(key));
   6880 C1            [10] 1731 	pop	bc
   6881 E1            [10] 1732 	pop	hl
   6882 E5            [11] 1733 	push	hl
   6883 C5            [11] 1734 	push	bc
   6884 CD C1 51      [17] 1735 	call	_cpct_isKeyPressed
   6887 7D            [ 4] 1736 	ld	a, l
   6888 B7            [ 4] 1737 	or	a, a
   6889 20 F2         [12] 1738 	jr	NZ,00104$
   688B C9            [10] 1739 	ret
                           1740 ;src/main.c:660: cpct_keyID RedefineKey(u8 *info) {
                           1741 ;	---------------------------------
                           1742 ; Function RedefineKey
                           1743 ; ---------------------------------
   688C                    1744 _RedefineKey::
                           1745 ;src/main.c:662: PrintText(info, 28, 120, 1);       
   688C 21 78 01      [10] 1746 	ld	hl, #0x0178
   688F E5            [11] 1747 	push	hl
   6890 3E 1C         [ 7] 1748 	ld	a, #0x1c
   6892 F5            [11] 1749 	push	af
   6893 33            [ 6] 1750 	inc	sp
   6894 21 05 00      [10] 1751 	ld	hl, #5
   6897 39            [11] 1752 	add	hl, sp
   6898 4E            [ 7] 1753 	ld	c, (hl)
   6899 23            [ 6] 1754 	inc	hl
   689A 46            [ 7] 1755 	ld	b, (hl)
   689B C5            [11] 1756 	push	bc
   689C CD 10 63      [17] 1757 	call	_PrintText
   689F F1            [10] 1758 	pop	af
   68A0 F1            [10] 1759 	pop	af
   68A1 33            [ 6] 1760 	inc	sp
                           1761 ;src/main.c:663: key = ReturnKeyPressed();
   68A2 CD 2C 68      [17] 1762 	call	_ReturnKeyPressed
                           1763 ;src/main.c:664: Wait4Key(key);
   68A5 E5            [11] 1764 	push	hl
   68A6 E5            [11] 1765 	push	hl
   68A7 CD 6F 68      [17] 1766 	call	_Wait4Key
   68AA 26 01         [ 7] 1767 	ld	h,#0x01
   68AC E3            [19] 1768 	ex	(sp),hl
   68AD 33            [ 6] 1769 	inc	sp
   68AE 01 00 00      [10] 1770 	ld	bc, #0x0000
   68B1 C5            [11] 1771 	push	bc
   68B2 01 3B 00      [10] 1772 	ld	bc, #0x003b
   68B5 C5            [11] 1773 	push	bc
   68B6 01 01 0C      [10] 1774 	ld	bc, #0x0c01
   68B9 C5            [11] 1775 	push	bc
   68BA CD EF 59      [17] 1776 	call	_cpct_akp_SFXPlay
   68BD 21 07 00      [10] 1777 	ld	hl, #7
   68C0 39            [11] 1778 	add	hl, sp
   68C1 F9            [ 6] 1779 	ld	sp, hl
   68C2 E1            [10] 1780 	pop	hl
                           1781 ;src/main.c:666: return key;    
   68C3 C9            [10] 1782 	ret
                           1783 ;src/main.c:683: void RefreshHighScore(u8 player) __z88dk_fastcall {
                           1784 ;	---------------------------------
                           1785 ; Function RefreshHighScore
                           1786 ; ---------------------------------
   68C4                    1787 _RefreshHighScore::
   68C4 5D            [ 4] 1788 	ld	e, l
                           1789 ;src/main.c:684: if (highScore < score[player])
   68C5 01 D5 5E      [10] 1790 	ld	bc, #_score+0
   68C8 6B            [ 4] 1791 	ld	l, e
   68C9 26 00         [ 7] 1792 	ld	h, #0x00
   68CB 29            [11] 1793 	add	hl, hl
   68CC 09            [11] 1794 	add	hl, bc
   68CD 4E            [ 7] 1795 	ld	c, (hl)
   68CE 23            [ 6] 1796 	inc	hl
   68CF 46            [ 7] 1797 	ld	b, (hl)
   68D0 FD 21 D9 5E   [14] 1798 	ld	iy, #_highScore
   68D4 FD 7E 00      [19] 1799 	ld	a, 0 (iy)
   68D7 91            [ 4] 1800 	sub	a, c
   68D8 FD 7E 01      [19] 1801 	ld	a, 1 (iy)
   68DB 98            [ 4] 1802 	sbc	a, b
   68DC D0            [11] 1803 	ret	NC
                           1804 ;src/main.c:685: highScore = score[player];
   68DD ED 43 D9 5E   [20] 1805 	ld	(_highScore), bc
   68E1 C9            [10] 1806 	ret
                           1807 ;src/main.c:690: void InitScoreboard() {
                           1808 ;	---------------------------------
                           1809 ; Function InitScoreboard
                           1810 ; ---------------------------------
   68E2                    1811 _InitScoreboard::
                           1812 ;src/main.c:691: nPObj = 0;
   68E2 21 7E 5F      [10] 1813 	ld	hl,#_nPObj + 0
   68E5 36 00         [10] 1814 	ld	(hl), #0x00
                           1815 ;src/main.c:692: PrintFrame(0,0,77,24);	
   68E7 21 4D 18      [10] 1816 	ld	hl, #0x184d
   68EA E5            [11] 1817 	push	hl
   68EB 21 00 00      [10] 1818 	ld	hl, #0x0000
   68EE E5            [11] 1819 	push	hl
   68EF CD B3 63      [17] 1820 	call	_PrintFrame
   68F2 F1            [10] 1821 	pop	af
                           1822 ;src/main.c:695: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06, cpct_getScreenPtr(CPCT_VMEM_START,  3, 4), SPR_W, SPR_H, g_maskTable);
   68F3 21 03 04      [10] 1823 	ld	hl, #0x0403
   68F6 E3            [19] 1824 	ex	(sp),hl
   68F7 21 00 C0      [10] 1825 	ld	hl, #0xc000
   68FA E5            [11] 1826 	push	hl
   68FB CD CF 5D      [17] 1827 	call	_cpct_getScreenPtr
   68FE 01 D7 2D      [10] 1828 	ld	bc, #_g_sorcerer1_06+0
   6901 11 00 01      [10] 1829 	ld	de, #_g_maskTable
   6904 D5            [11] 1830 	push	de
   6905 11 05 0C      [10] 1831 	ld	de, #0x0c05
   6908 D5            [11] 1832 	push	de
   6909 E5            [11] 1833 	push	hl
   690A C5            [11] 1834 	push	bc
   690B CD E5 5D      [17] 1835 	call	_cpct_drawSpriteMaskedAlignedTable
                           1836 ;src/main.c:696: PrintText("0000", 14, 6, 1); // player score
   690E 21 06 01      [10] 1837 	ld	hl, #0x0106
   6911 E5            [11] 1838 	push	hl
   6912 3E 0E         [ 7] 1839 	ld	a, #0x0e
   6914 F5            [11] 1840 	push	af
   6915 33            [ 6] 1841 	inc	sp
   6916 21 32 6A      [10] 1842 	ld	hl, #___str_10
   6919 E5            [11] 1843 	push	hl
   691A CD 10 63      [17] 1844 	call	_PrintText
   691D F1            [10] 1845 	pop	af
                           1846 ;src/main.c:697: PrintObject(nPObj, 28, 6); PrintText("00", 32, 6, 1);	// coins score	
   691E 33            [ 6] 1847 	inc	sp
   691F 21 1C 06      [10] 1848 	ld	hl,#0x061c
   6922 E3            [19] 1849 	ex	(sp),hl
   6923 3A 7E 5F      [13] 1850 	ld	a, (_nPObj)
   6926 F5            [11] 1851 	push	af
   6927 33            [ 6] 1852 	inc	sp
   6928 CD BD 6B      [17] 1853 	call	_PrintObject
   692B 33            [ 6] 1854 	inc	sp
   692C 21 06 01      [10] 1855 	ld	hl,#0x0106
   692F E3            [19] 1856 	ex	(sp),hl
   6930 3E 20         [ 7] 1857 	ld	a, #0x20
   6932 F5            [11] 1858 	push	af
   6933 33            [ 6] 1859 	inc	sp
   6934 21 37 6A      [10] 1860 	ld	hl, #___str_11
   6937 E5            [11] 1861 	push	hl
   6938 CD 10 63      [17] 1862 	call	_PrintText
   693B F1            [10] 1863 	pop	af
                           1864 ;src/main.c:698: PrintText("<", 28, 15, 1); PrintText("00", 32, 15, 1);	// potion score
   693C 33            [ 6] 1865 	inc	sp
   693D 21 0F 01      [10] 1866 	ld	hl,#0x010f
   6940 E3            [19] 1867 	ex	(sp),hl
   6941 3E 1C         [ 7] 1868 	ld	a, #0x1c
   6943 F5            [11] 1869 	push	af
   6944 33            [ 6] 1870 	inc	sp
   6945 21 3A 6A      [10] 1871 	ld	hl, #___str_12
   6948 E5            [11] 1872 	push	hl
   6949 CD 10 63      [17] 1873 	call	_PrintText
   694C F1            [10] 1874 	pop	af
   694D 33            [ 6] 1875 	inc	sp
   694E 21 0F 01      [10] 1876 	ld	hl,#0x010f
   6951 E3            [19] 1877 	ex	(sp),hl
   6952 3E 20         [ 7] 1878 	ld	a, #0x20
   6954 F5            [11] 1879 	push	af
   6955 33            [ 6] 1880 	inc	sp
   6956 21 37 6A      [10] 1881 	ld	hl, #___str_11
   6959 E5            [11] 1882 	push	hl
   695A CD 10 63      [17] 1883 	call	_PrintText
   695D F1            [10] 1884 	pop	af
   695E F1            [10] 1885 	pop	af
   695F 33            [ 6] 1886 	inc	sp
                           1887 ;src/main.c:701: if (TwoPlayers) {
   6960 3A D4 5E      [13] 1888 	ld	a,(#_TwoPlayers + 0)
   6963 B7            [ 4] 1889 	or	a, a
   6964 28 6E         [12] 1890 	jr	Z,00102$
                           1891 ;src/main.c:702: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_06, cpct_getScreenPtr(CPCT_VMEM_START, 42, 4), SPR_W, SPR_H, g_maskTable);
   6966 21 2A 04      [10] 1892 	ld	hl, #0x042a
   6969 E5            [11] 1893 	push	hl
   696A 21 00 C0      [10] 1894 	ld	hl, #0xc000
   696D E5            [11] 1895 	push	hl
   696E CD CF 5D      [17] 1896 	call	_cpct_getScreenPtr
   6971 01 7F 2B      [10] 1897 	ld	bc, #_g_sorcerer2_06+0
   6974 11 00 01      [10] 1898 	ld	de, #_g_maskTable
   6977 D5            [11] 1899 	push	de
   6978 11 05 0C      [10] 1900 	ld	de, #0x0c05
   697B D5            [11] 1901 	push	de
   697C E5            [11] 1902 	push	hl
   697D C5            [11] 1903 	push	bc
   697E CD E5 5D      [17] 1904 	call	_cpct_drawSpriteMaskedAlignedTable
                           1905 ;src/main.c:703: PrintText("0000", 53, 6, 1); // player score
   6981 21 06 01      [10] 1906 	ld	hl, #0x0106
   6984 E5            [11] 1907 	push	hl
   6985 3E 35         [ 7] 1908 	ld	a, #0x35
   6987 F5            [11] 1909 	push	af
   6988 33            [ 6] 1910 	inc	sp
   6989 21 32 6A      [10] 1911 	ld	hl, #___str_10
   698C E5            [11] 1912 	push	hl
   698D CD 10 63      [17] 1913 	call	_PrintText
   6990 F1            [10] 1914 	pop	af
                           1915 ;src/main.c:704: PrintObject(nPObj, 67, 6); PrintText("00", 71, 6, 1);	// coins score
   6991 33            [ 6] 1916 	inc	sp
   6992 21 43 06      [10] 1917 	ld	hl,#0x0643
   6995 E3            [19] 1918 	ex	(sp),hl
   6996 3A 7E 5F      [13] 1919 	ld	a, (_nPObj)
   6999 F5            [11] 1920 	push	af
   699A 33            [ 6] 1921 	inc	sp
   699B CD BD 6B      [17] 1922 	call	_PrintObject
   699E 33            [ 6] 1923 	inc	sp
   699F 21 06 01      [10] 1924 	ld	hl,#0x0106
   69A2 E3            [19] 1925 	ex	(sp),hl
   69A3 3E 47         [ 7] 1926 	ld	a, #0x47
   69A5 F5            [11] 1927 	push	af
   69A6 33            [ 6] 1928 	inc	sp
   69A7 21 37 6A      [10] 1929 	ld	hl, #___str_11
   69AA E5            [11] 1930 	push	hl
   69AB CD 10 63      [17] 1931 	call	_PrintText
   69AE F1            [10] 1932 	pop	af
                           1933 ;src/main.c:705: PrintText("<", 67, 15, 1); PrintText("00", 71, 15, 1);	// potion score
   69AF 33            [ 6] 1934 	inc	sp
   69B0 21 0F 01      [10] 1935 	ld	hl,#0x010f
   69B3 E3            [19] 1936 	ex	(sp),hl
   69B4 3E 43         [ 7] 1937 	ld	a, #0x43
   69B6 F5            [11] 1938 	push	af
   69B7 33            [ 6] 1939 	inc	sp
   69B8 21 3A 6A      [10] 1940 	ld	hl, #___str_12
   69BB E5            [11] 1941 	push	hl
   69BC CD 10 63      [17] 1942 	call	_PrintText
   69BF F1            [10] 1943 	pop	af
   69C0 33            [ 6] 1944 	inc	sp
   69C1 21 0F 01      [10] 1945 	ld	hl,#0x010f
   69C4 E3            [19] 1946 	ex	(sp),hl
   69C5 3E 47         [ 7] 1947 	ld	a, #0x47
   69C7 F5            [11] 1948 	push	af
   69C8 33            [ 6] 1949 	inc	sp
   69C9 21 37 6A      [10] 1950 	ld	hl, #___str_11
   69CC E5            [11] 1951 	push	hl
   69CD CD 10 63      [17] 1952 	call	_PrintText
   69D0 F1            [10] 1953 	pop	af
   69D1 F1            [10] 1954 	pop	af
   69D2 33            [ 6] 1955 	inc	sp
   69D3 C9            [10] 1956 	ret
   69D4                    1957 00102$:
                           1958 ;src/main.c:708: PrintText("HIGH:", 44, 6 , 1);
   69D4 21 06 01      [10] 1959 	ld	hl, #0x0106
   69D7 E5            [11] 1960 	push	hl
   69D8 3E 2C         [ 7] 1961 	ld	a, #0x2c
   69DA F5            [11] 1962 	push	af
   69DB 33            [ 6] 1963 	inc	sp
   69DC 21 3C 6A      [10] 1964 	ld	hl, #___str_13
   69DF E5            [11] 1965 	push	hl
   69E0 CD 10 63      [17] 1966 	call	_PrintText
   69E3 F1            [10] 1967 	pop	af
                           1968 ;src/main.c:709: PrintText("00000", 61, 6, 1); 
   69E4 33            [ 6] 1969 	inc	sp
   69E5 21 06 01      [10] 1970 	ld	hl,#0x0106
   69E8 E3            [19] 1971 	ex	(sp),hl
   69E9 3E 3D         [ 7] 1972 	ld	a, #0x3d
   69EB F5            [11] 1973 	push	af
   69EC 33            [ 6] 1974 	inc	sp
   69ED 21 42 6A      [10] 1975 	ld	hl, #___str_14
   69F0 E5            [11] 1976 	push	hl
   69F1 CD 10 63      [17] 1977 	call	_PrintText
   69F4 F1            [10] 1978 	pop	af
                           1979 ;src/main.c:710: PrintNumber(highScore, 5, 61, 6, 1); // high score
   69F5 33            [ 6] 1980 	inc	sp
   69F6 21 06 01      [10] 1981 	ld	hl,#0x0106
   69F9 E3            [19] 1982 	ex	(sp),hl
   69FA 21 05 3D      [10] 1983 	ld	hl, #0x3d05
   69FD E5            [11] 1984 	push	hl
   69FE 2A D9 5E      [16] 1985 	ld	hl, (_highScore)
   6A01 E5            [11] 1986 	push	hl
   6A02 CD 41 62      [17] 1987 	call	_PrintNumber
   6A05 21 06 00      [10] 1988 	ld	hl, #6
   6A08 39            [11] 1989 	add	hl, sp
   6A09 F9            [ 6] 1990 	ld	sp, hl
                           1991 ;src/main.c:711: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 60, 16), cpct_px2byteM0(BG_COLOR, BG_COLOR), 16, 8); // key
   6A0A 21 01 01      [10] 1992 	ld	hl, #0x0101
   6A0D E5            [11] 1993 	push	hl
   6A0E CD B3 5C      [17] 1994 	call	_cpct_px2byteM0
   6A11 26 00         [ 7] 1995 	ld	h, #0x00
   6A13 01 10 08      [10] 1996 	ld	bc, #0x0810
   6A16 C5            [11] 1997 	push	bc
   6A17 E5            [11] 1998 	push	hl
   6A18 21 DC C0      [10] 1999 	ld	hl, #0xc0dc
   6A1B E5            [11] 2000 	push	hl
   6A1C CD ED 5C      [17] 2001 	call	_cpct_drawSolidBox
                           2002 ;src/main.c:712: PrintText("KEY:", 47, 15, 1);
   6A1F 21 0F 01      [10] 2003 	ld	hl, #0x010f
   6A22 E5            [11] 2004 	push	hl
   6A23 3E 2F         [ 7] 2005 	ld	a, #0x2f
   6A25 F5            [11] 2006 	push	af
   6A26 33            [ 6] 2007 	inc	sp
   6A27 21 48 6A      [10] 2008 	ld	hl, #___str_15
   6A2A E5            [11] 2009 	push	hl
   6A2B CD 10 63      [17] 2010 	call	_PrintText
   6A2E F1            [10] 2011 	pop	af
   6A2F F1            [10] 2012 	pop	af
   6A30 33            [ 6] 2013 	inc	sp
   6A31 C9            [10] 2014 	ret
   6A32                    2015 ___str_10:
   6A32 30 30 30 30        2016 	.ascii "0000"
   6A36 00                 2017 	.db 0x00
   6A37                    2018 ___str_11:
   6A37 30 30              2019 	.ascii "00"
   6A39 00                 2020 	.db 0x00
   6A3A                    2021 ___str_12:
   6A3A 3C                 2022 	.ascii "<"
   6A3B 00                 2023 	.db 0x00
   6A3C                    2024 ___str_13:
   6A3C 48 49 47 48 3A     2025 	.ascii "HIGH:"
   6A41 00                 2026 	.db 0x00
   6A42                    2027 ___str_14:
   6A42 30 30 30 30 30     2028 	.ascii "00000"
   6A47 00                 2029 	.db 0x00
   6A48                    2030 ___str_15:
   6A48 4B 45 59 3A        2031 	.ascii "KEY:"
   6A4C 00                 2032 	.db 0x00
                           2033 ;src/main.c:718: void RefreshScoreboard() { 
                           2034 ;	---------------------------------
                           2035 ; Function RefreshScoreboard
                           2036 ; ---------------------------------
   6A4D                    2037 _RefreshScoreboard::
                           2038 ;src/main.c:720: PrintNumber(spr[0].lives_speed,  1,  8, 6, 1); 		// lives
   6A4D 21 15 5F      [10] 2039 	ld	hl, #_spr + 11
   6A50 4E            [ 7] 2040 	ld	c, (hl)
   6A51 06 00         [ 7] 2041 	ld	b, #0x00
   6A53 21 06 01      [10] 2042 	ld	hl, #0x0106
   6A56 E5            [11] 2043 	push	hl
   6A57 21 01 08      [10] 2044 	ld	hl, #0x0801
   6A5A E5            [11] 2045 	push	hl
   6A5B C5            [11] 2046 	push	bc
   6A5C CD 41 62      [17] 2047 	call	_PrintNumber
   6A5F 21 06 00      [10] 2048 	ld	hl, #6
   6A62 39            [11] 2049 	add	hl, sp
   6A63 F9            [ 6] 2050 	ld	sp, hl
                           2051 ;src/main.c:721: PrintNumber(score[0], 4, 14, 6, 1);		 			// current score
   6A64 2A D5 5E      [16] 2052 	ld	hl, (#_score + 0)
   6A67 01 06 01      [10] 2053 	ld	bc, #0x0106
   6A6A C5            [11] 2054 	push	bc
   6A6B 01 04 0E      [10] 2055 	ld	bc, #0x0e04
   6A6E C5            [11] 2056 	push	bc
   6A6F E5            [11] 2057 	push	hl
   6A70 CD 41 62      [17] 2058 	call	_PrintNumber
   6A73 21 06 00      [10] 2059 	ld	hl, #6
   6A76 39            [11] 2060 	add	hl, sp
   6A77 F9            [ 6] 2061 	ld	sp, hl
                           2062 ;src/main.c:722: PrintText("0", 32, 6, 1);
   6A78 21 06 01      [10] 2063 	ld	hl, #0x0106
   6A7B E5            [11] 2064 	push	hl
   6A7C 3E 20         [ 7] 2065 	ld	a, #0x20
   6A7E F5            [11] 2066 	push	af
   6A7F 33            [ 6] 2067 	inc	sp
   6A80 21 64 6B      [10] 2068 	ld	hl, #___str_16
   6A83 E5            [11] 2069 	push	hl
   6A84 CD 10 63      [17] 2070 	call	_PrintText
   6A87 F1            [10] 2071 	pop	af
   6A88 F1            [10] 2072 	pop	af
   6A89 33            [ 6] 2073 	inc	sp
                           2074 ;src/main.c:723: PrintNumber(coinScore[0], 2, 32, 6, 1); 			// coin score
   6A8A 21 DD 5E      [10] 2075 	ld	hl, #_coinScore + 0
   6A8D 4E            [ 7] 2076 	ld	c, (hl)
   6A8E 06 00         [ 7] 2077 	ld	b, #0x00
   6A90 21 06 01      [10] 2078 	ld	hl, #0x0106
   6A93 E5            [11] 2079 	push	hl
   6A94 21 02 20      [10] 2080 	ld	hl, #0x2002
   6A97 E5            [11] 2081 	push	hl
   6A98 C5            [11] 2082 	push	bc
   6A99 CD 41 62      [17] 2083 	call	_PrintNumber
   6A9C 21 06 00      [10] 2084 	ld	hl, #6
   6A9F 39            [11] 2085 	add	hl, sp
   6AA0 F9            [ 6] 2086 	ld	sp, hl
                           2087 ;src/main.c:724: PrintText("0", 32, 15, 1);
   6AA1 21 0F 01      [10] 2088 	ld	hl, #0x010f
   6AA4 E5            [11] 2089 	push	hl
   6AA5 3E 20         [ 7] 2090 	ld	a, #0x20
   6AA7 F5            [11] 2091 	push	af
   6AA8 33            [ 6] 2092 	inc	sp
   6AA9 21 64 6B      [10] 2093 	ld	hl, #___str_16
   6AAC E5            [11] 2094 	push	hl
   6AAD CD 10 63      [17] 2095 	call	_PrintText
   6AB0 F1            [10] 2096 	pop	af
   6AB1 F1            [10] 2097 	pop	af
   6AB2 33            [ 6] 2098 	inc	sp
                           2099 ;src/main.c:725: PrintNumber(potScore[0], 2, 32, 15, 1); 			// potion score
   6AB3 21 DB 5E      [10] 2100 	ld	hl, #_potScore + 0
   6AB6 4E            [ 7] 2101 	ld	c, (hl)
   6AB7 06 00         [ 7] 2102 	ld	b, #0x00
   6AB9 21 0F 01      [10] 2103 	ld	hl, #0x010f
   6ABC E5            [11] 2104 	push	hl
   6ABD 21 02 20      [10] 2105 	ld	hl, #0x2002
   6AC0 E5            [11] 2106 	push	hl
   6AC1 C5            [11] 2107 	push	bc
   6AC2 CD 41 62      [17] 2108 	call	_PrintNumber
   6AC5 21 06 00      [10] 2109 	ld	hl, #6
   6AC8 39            [11] 2110 	add	hl, sp
   6AC9 F9            [ 6] 2111 	ld	sp, hl
                           2112 ;src/main.c:727: if (TwoPlayers) {
   6ACA 3A D4 5E      [13] 2113 	ld	a,(#_TwoPlayers + 0)
   6ACD B7            [ 4] 2114 	or	a, a
   6ACE CA 4F 6B      [10] 2115 	jp	Z, 00102$
                           2116 ;src/main.c:728: PrintNumber(spr[1].lives_speed,  1, 47, 6, 1); 	// lives
   6AD1 21 24 5F      [10] 2117 	ld	hl, #_spr + 26
   6AD4 4E            [ 7] 2118 	ld	c, (hl)
   6AD5 06 00         [ 7] 2119 	ld	b, #0x00
   6AD7 21 06 01      [10] 2120 	ld	hl, #0x0106
   6ADA E5            [11] 2121 	push	hl
   6ADB 21 01 2F      [10] 2122 	ld	hl, #0x2f01
   6ADE E5            [11] 2123 	push	hl
   6ADF C5            [11] 2124 	push	bc
   6AE0 CD 41 62      [17] 2125 	call	_PrintNumber
   6AE3 21 06 00      [10] 2126 	ld	hl, #6
   6AE6 39            [11] 2127 	add	hl, sp
   6AE7 F9            [ 6] 2128 	ld	sp, hl
                           2129 ;src/main.c:729: PrintNumber(score[1], 4, 53, 6, 1);		 		// current score
   6AE8 2A D7 5E      [16] 2130 	ld	hl, (#_score + 2)
   6AEB 01 06 01      [10] 2131 	ld	bc, #0x0106
   6AEE C5            [11] 2132 	push	bc
   6AEF 01 04 35      [10] 2133 	ld	bc, #0x3504
   6AF2 C5            [11] 2134 	push	bc
   6AF3 E5            [11] 2135 	push	hl
   6AF4 CD 41 62      [17] 2136 	call	_PrintNumber
   6AF7 21 06 00      [10] 2137 	ld	hl, #6
   6AFA 39            [11] 2138 	add	hl, sp
   6AFB F9            [ 6] 2139 	ld	sp, hl
                           2140 ;src/main.c:730: PrintText("0", 71, 6, 1);
   6AFC 21 06 01      [10] 2141 	ld	hl, #0x0106
   6AFF E5            [11] 2142 	push	hl
   6B00 3E 47         [ 7] 2143 	ld	a, #0x47
   6B02 F5            [11] 2144 	push	af
   6B03 33            [ 6] 2145 	inc	sp
   6B04 21 64 6B      [10] 2146 	ld	hl, #___str_16
   6B07 E5            [11] 2147 	push	hl
   6B08 CD 10 63      [17] 2148 	call	_PrintText
   6B0B F1            [10] 2149 	pop	af
   6B0C F1            [10] 2150 	pop	af
   6B0D 33            [ 6] 2151 	inc	sp
                           2152 ;src/main.c:731: PrintNumber(coinScore[1], 2, 71, 6, 1); 		// coin score
   6B0E 21 DE 5E      [10] 2153 	ld	hl, #_coinScore + 1
   6B11 4E            [ 7] 2154 	ld	c, (hl)
   6B12 06 00         [ 7] 2155 	ld	b, #0x00
   6B14 21 06 01      [10] 2156 	ld	hl, #0x0106
   6B17 E5            [11] 2157 	push	hl
   6B18 21 02 47      [10] 2158 	ld	hl, #0x4702
   6B1B E5            [11] 2159 	push	hl
   6B1C C5            [11] 2160 	push	bc
   6B1D CD 41 62      [17] 2161 	call	_PrintNumber
   6B20 21 06 00      [10] 2162 	ld	hl, #6
   6B23 39            [11] 2163 	add	hl, sp
   6B24 F9            [ 6] 2164 	ld	sp, hl
                           2165 ;src/main.c:732: PrintText("0", 71, 15, 1);
   6B25 21 0F 01      [10] 2166 	ld	hl, #0x010f
   6B28 E5            [11] 2167 	push	hl
   6B29 3E 47         [ 7] 2168 	ld	a, #0x47
   6B2B F5            [11] 2169 	push	af
   6B2C 33            [ 6] 2170 	inc	sp
   6B2D 21 64 6B      [10] 2171 	ld	hl, #___str_16
   6B30 E5            [11] 2172 	push	hl
   6B31 CD 10 63      [17] 2173 	call	_PrintText
   6B34 F1            [10] 2174 	pop	af
   6B35 F1            [10] 2175 	pop	af
   6B36 33            [ 6] 2176 	inc	sp
                           2177 ;src/main.c:733: PrintNumber(potScore[1], 2, 71, 15, 1); 		// potion score
   6B37 21 DC 5E      [10] 2178 	ld	hl, #_potScore + 1
   6B3A 4E            [ 7] 2179 	ld	c, (hl)
   6B3B 06 00         [ 7] 2180 	ld	b, #0x00
   6B3D 21 0F 01      [10] 2181 	ld	hl, #0x010f
   6B40 E5            [11] 2182 	push	hl
   6B41 21 02 47      [10] 2183 	ld	hl, #0x4702
   6B44 E5            [11] 2184 	push	hl
   6B45 C5            [11] 2185 	push	bc
   6B46 CD 41 62      [17] 2186 	call	_PrintNumber
   6B49 21 06 00      [10] 2187 	ld	hl, #6
   6B4C 39            [11] 2188 	add	hl, sp
   6B4D F9            [ 6] 2189 	ld	sp, hl
   6B4E C9            [10] 2190 	ret
   6B4F                    2191 00102$:
                           2192 ;src/main.c:736: PrintNumber(highScore, 5, 61, 6, 1);
   6B4F 21 06 01      [10] 2193 	ld	hl, #0x0106
   6B52 E5            [11] 2194 	push	hl
   6B53 21 05 3D      [10] 2195 	ld	hl, #0x3d05
   6B56 E5            [11] 2196 	push	hl
   6B57 2A D9 5E      [16] 2197 	ld	hl, (_highScore)
   6B5A E5            [11] 2198 	push	hl
   6B5B CD 41 62      [17] 2199 	call	_PrintNumber
   6B5E 21 06 00      [10] 2200 	ld	hl, #6
   6B61 39            [11] 2201 	add	hl, sp
   6B62 F9            [ 6] 2202 	ld	sp, hl
   6B63 C9            [10] 2203 	ret
   6B64                    2204 ___str_16:
   6B64 30                 2205 	.ascii "0"
   6B65 00                 2206 	.db 0x00
                           2207 ;src/main.c:753: void ResetObjData(u8 player) __z88dk_fastcall {
                           2208 ;	---------------------------------
                           2209 ; Function ResetObjData
                           2210 ; ---------------------------------
   6B66                    2211 _ResetObjData::
   6B66 4D            [ 4] 2212 	ld	c, l
                           2213 ;src/main.c:754: spr[player].objNum_mov = 0; // number of objects
   6B67 11 0A 5F      [10] 2214 	ld	de, #_spr+0
   6B6A 06 00         [ 7] 2215 	ld	b,#0x00
   6B6C 69            [ 4] 2216 	ld	l, c
   6B6D 60            [ 4] 2217 	ld	h, b
   6B6E 29            [11] 2218 	add	hl, hl
   6B6F 09            [11] 2219 	add	hl, bc
   6B70 29            [11] 2220 	add	hl, hl
   6B71 09            [11] 2221 	add	hl, bc
   6B72 29            [11] 2222 	add	hl, hl
   6B73 09            [11] 2223 	add	hl, bc
   6B74 19            [11] 2224 	add	hl, de
   6B75 11 0C 00      [10] 2225 	ld	de, #0x000c
   6B78 19            [11] 2226 	add	hl, de
   6B79 36 00         [10] 2227 	ld	(hl), #0x00
                           2228 ;src/main.c:755: potScore[player] = 0; // potion value
   6B7B 11 DB 5E      [10] 2229 	ld	de, #_potScore+0
   6B7E 69            [ 4] 2230 	ld	l,c
   6B7F 26 00         [ 7] 2231 	ld	h,#0x00
   6B81 19            [11] 2232 	add	hl, de
   6B82 36 00         [10] 2233 	ld	(hl), #0x00
                           2234 ;src/main.c:756: coinScore[player] = 0; // money
   6B84 11 DD 5E      [10] 2235 	ld	de, #_coinScore+0
   6B87 69            [ 4] 2236 	ld	l,c
   6B88 26 00         [ 7] 2237 	ld	h,#0x00
   6B8A 19            [11] 2238 	add	hl, de
   6B8B 36 00         [10] 2239 	ld	(hl), #0x00
                           2240 ;src/main.c:758: if (player == 0)
   6B8D 79            [ 4] 2241 	ld	a, c
   6B8E B7            [ 4] 2242 	or	a, a
   6B8F 20 16         [12] 2243 	jr	NZ,00102$
                           2244 ;src/main.c:759: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 7, 16), cpct_px2byteM0(BG_COLOR, BG_COLOR), 20, 8);
   6B91 21 01 01      [10] 2245 	ld	hl, #0x0101
   6B94 E5            [11] 2246 	push	hl
   6B95 CD B3 5C      [17] 2247 	call	_cpct_px2byteM0
   6B98 26 00         [ 7] 2248 	ld	h, #0x00
   6B9A 01 14 08      [10] 2249 	ld	bc, #0x0814
   6B9D C5            [11] 2250 	push	bc
   6B9E E5            [11] 2251 	push	hl
   6B9F 21 A7 C0      [10] 2252 	ld	hl, #0xc0a7
   6BA2 E5            [11] 2253 	push	hl
   6BA3 CD ED 5C      [17] 2254 	call	_cpct_drawSolidBox
   6BA6 C9            [10] 2255 	ret
   6BA7                    2256 00102$:
                           2257 ;src/main.c:761: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 46, 16), cpct_px2byteM0(BG_COLOR, BG_COLOR), 20, 8);
   6BA7 21 01 01      [10] 2258 	ld	hl, #0x0101
   6BAA E5            [11] 2259 	push	hl
   6BAB CD B3 5C      [17] 2260 	call	_cpct_px2byteM0
   6BAE 26 00         [ 7] 2261 	ld	h, #0x00
   6BB0 01 14 08      [10] 2262 	ld	bc, #0x0814
   6BB3 C5            [11] 2263 	push	bc
   6BB4 E5            [11] 2264 	push	hl
   6BB5 21 CE C0      [10] 2265 	ld	hl, #0xc0ce
   6BB8 E5            [11] 2266 	push	hl
   6BB9 CD ED 5C      [17] 2267 	call	_cpct_drawSolidBox
   6BBC C9            [10] 2268 	ret
                           2269 ;src/main.c:766: void PrintObject(u8 nObj, u8 objX, u8 objY) {
                           2270 ;	---------------------------------
                           2271 ; Function PrintObject
                           2272 ; ---------------------------------
   6BBD                    2273 _PrintObject::
   6BBD DD E5         [15] 2274 	push	ix
   6BBF DD 21 00 00   [14] 2275 	ld	ix,#0
   6BC3 DD 39         [15] 2276 	add	ix,sp
                           2277 ;src/main.c:768: OBJ_W, OBJ_H, g_maskTable);
                           2278 ;src/main.c:767: cpct_drawSpriteMaskedAlignedTable(g_objects[nObj], cpct_getScreenPtr(CPCT_VMEM_START, objX, objY),
   6BC5 DD 66 06      [19] 2279 	ld	h, 6 (ix)
   6BC8 DD 6E 05      [19] 2280 	ld	l, 5 (ix)
   6BCB E5            [11] 2281 	push	hl
   6BCC 21 00 C0      [10] 2282 	ld	hl, #0xc000
   6BCF E5            [11] 2283 	push	hl
   6BD0 CD CF 5D      [17] 2284 	call	_cpct_getScreenPtr
   6BD3 4D            [ 4] 2285 	ld	c, l
   6BD4 44            [ 4] 2286 	ld	b, h
   6BD5 11 69 4F      [10] 2287 	ld	de, #_g_objects+0
   6BD8 DD 6E 04      [19] 2288 	ld	l, 4 (ix)
   6BDB 26 00         [ 7] 2289 	ld	h, #0x00
   6BDD 29            [11] 2290 	add	hl, hl
   6BDE 29            [11] 2291 	add	hl, hl
   6BDF 29            [11] 2292 	add	hl, hl
   6BE0 29            [11] 2293 	add	hl, hl
   6BE1 29            [11] 2294 	add	hl, hl
   6BE2 19            [11] 2295 	add	hl, de
   6BE3 11 00 01      [10] 2296 	ld	de, #_g_maskTable
   6BE6 D5            [11] 2297 	push	de
   6BE7 11 04 08      [10] 2298 	ld	de, #0x0804
   6BEA D5            [11] 2299 	push	de
   6BEB C5            [11] 2300 	push	bc
   6BEC E5            [11] 2301 	push	hl
   6BED CD E5 5D      [17] 2302 	call	_cpct_drawSpriteMaskedAlignedTable
   6BF0 DD E1         [14] 2303 	pop	ix
   6BF2 C9            [10] 2304 	ret
                           2305 ;src/main.c:773: void DeleteObject(u8 index) __z88dk_fastcall {
                           2306 ;	---------------------------------
                           2307 ; Function DeleteObject
                           2308 ; ---------------------------------
   6BF3                    2309 _DeleteObject::
   6BF3 DD E5         [15] 2310 	push	ix
   6BF5 DD 21 00 00   [14] 2311 	ld	ix,#0
   6BF9 DD 39         [15] 2312 	add	ix,sp
   6BFB F5            [11] 2313 	push	af
   6BFC 3B            [ 6] 2314 	dec	sp
   6BFD 4D            [ 4] 2315 	ld	c, l
                           2316 ;src/main.c:775: 2 + (objX[index] & 1), 2 + (objY[index] & 3 ? 1 : 0), MAP_W, 
   6BFE 11 7C 5F      [10] 2317 	ld	de, #_objY+0
   6C01 69            [ 4] 2318 	ld	l,c
   6C02 26 00         [ 7] 2319 	ld	h,#0x00
   6C04 19            [11] 2320 	add	hl, de
   6C05 46            [ 7] 2321 	ld	b, (hl)
   6C06 78            [ 4] 2322 	ld	a, b
   6C07 E6 03         [ 7] 2323 	and	a, #0x03
   6C09 28 04         [12] 2324 	jr	Z,00103$
   6C0B 3E 01         [ 7] 2325 	ld	a, #0x01
   6C0D 18 02         [12] 2326 	jr	00104$
   6C0F                    2327 00103$:
   6C0F 3E 00         [ 7] 2328 	ld	a, #0x00
   6C11                    2329 00104$:
   6C11 C6 02         [ 7] 2330 	add	a, #0x02
   6C13 DD 77 FF      [19] 2331 	ld	-1 (ix), a
   6C16 11 7A 5F      [10] 2332 	ld	de, #_objX+0
   6C19 69            [ 4] 2333 	ld	l,c
   6C1A 26 00         [ 7] 2334 	ld	h,#0x00
   6C1C 19            [11] 2335 	add	hl, de
   6C1D 5E            [ 7] 2336 	ld	e, (hl)
   6C1E 7B            [ 4] 2337 	ld	a, e
   6C1F E6 01         [ 7] 2338 	and	a, #0x01
   6C21 57            [ 4] 2339 	ld	d, a
   6C22 14            [ 4] 2340 	inc	d
   6C23 14            [ 4] 2341 	inc	d
                           2342 ;src/main.c:774: cpct_etm_drawTileBox2x4(objX[index] / 2, (objY[index] - ORIG_MAP_Y) / 4,
   6C24 48            [ 4] 2343 	ld	c, b
   6C25 06 00         [ 7] 2344 	ld	b, #0x00
   6C27 79            [ 4] 2345 	ld	a, c
   6C28 C6 E0         [ 7] 2346 	add	a, #0xe0
   6C2A DD 77 FD      [19] 2347 	ld	-3 (ix), a
   6C2D 78            [ 4] 2348 	ld	a, b
   6C2E CE FF         [ 7] 2349 	adc	a, #0xff
   6C30 DD 77 FE      [19] 2350 	ld	-2 (ix), a
   6C33 E1            [10] 2351 	pop	hl
   6C34 E5            [11] 2352 	push	hl
   6C35 DD CB FE 7E   [20] 2353 	bit	7, -2 (ix)
   6C39 28 04         [12] 2354 	jr	Z,00105$
   6C3B 21 E3 FF      [10] 2355 	ld	hl, #0xffe3
   6C3E 09            [11] 2356 	add	hl, bc
   6C3F                    2357 00105$:
   6C3F CB 2C         [ 8] 2358 	sra	h
   6C41 CB 1D         [ 8] 2359 	rr	l
   6C43 CB 2C         [ 8] 2360 	sra	h
   6C45 CB 1D         [ 8] 2361 	rr	l
   6C47 4D            [ 4] 2362 	ld	c, l
   6C48 CB 3B         [ 8] 2363 	srl	e
   6C4A 21 71 0F      [10] 2364 	ld	hl, #0x0f71
   6C4D E5            [11] 2365 	push	hl
   6C4E 21 40 C1      [10] 2366 	ld	hl, #0xc140
   6C51 E5            [11] 2367 	push	hl
   6C52 3E 28         [ 7] 2368 	ld	a, #0x28
   6C54 F5            [11] 2369 	push	af
   6C55 33            [ 6] 2370 	inc	sp
   6C56 DD 7E FF      [19] 2371 	ld	a, -1 (ix)
   6C59 F5            [11] 2372 	push	af
   6C5A 33            [ 6] 2373 	inc	sp
   6C5B D5            [11] 2374 	push	de
   6C5C 33            [ 6] 2375 	inc	sp
   6C5D 51            [ 4] 2376 	ld	d, c
   6C5E D5            [11] 2377 	push	de
   6C5F CD 11 5B      [17] 2378 	call	_cpct_etm_drawTileBox2x4
   6C62 DD F9         [10] 2379 	ld	sp, ix
   6C64 DD E1         [14] 2380 	pop	ix
   6C66 C9            [10] 2381 	ret
                           2382 ;src/main.c:781: void PrintDust(u8 nFrame, u8 index) {
                           2383 ;	---------------------------------
                           2384 ; Function PrintDust
                           2385 ; ---------------------------------
   6C67                    2386 _PrintDust::
   6C67 DD E5         [15] 2387 	push	ix
   6C69 DD 21 00 00   [14] 2388 	ld	ix,#0
   6C6D DD 39         [15] 2389 	add	ix,sp
                           2390 ;src/main.c:784: OBJ_W, OBJ_H, g_maskTable);
                           2391 ;src/main.c:783: cpct_getScreenPtr(CPCT_VMEM_START, objX[index], objY[index]), 
   6C6F 01 7C 5F      [10] 2392 	ld	bc, #_objY+0
   6C72 DD 6E 05      [19] 2393 	ld	l,5 (ix)
   6C75 26 00         [ 7] 2394 	ld	h,#0x00
   6C77 09            [11] 2395 	add	hl, bc
   6C78 56            [ 7] 2396 	ld	d, (hl)
   6C79 01 7A 5F      [10] 2397 	ld	bc, #_objX+0
   6C7C DD 6E 05      [19] 2398 	ld	l,5 (ix)
   6C7F 26 00         [ 7] 2399 	ld	h,#0x00
   6C81 09            [11] 2400 	add	hl, bc
   6C82 5E            [ 7] 2401 	ld	e, (hl)
   6C83 D5            [11] 2402 	push	de
   6C84 21 00 C0      [10] 2403 	ld	hl, #0xc000
   6C87 E5            [11] 2404 	push	hl
   6C88 CD CF 5D      [17] 2405 	call	_cpct_getScreenPtr
   6C8B 4D            [ 4] 2406 	ld	c, l
   6C8C 44            [ 4] 2407 	ld	b, h
                           2408 ;src/main.c:782: cpct_drawSpriteMaskedAlignedTable(g_dust[nFrame], 
   6C8D 11 91 4A      [10] 2409 	ld	de, #_g_dust+0
   6C90 DD 6E 04      [19] 2410 	ld	l, 4 (ix)
   6C93 26 00         [ 7] 2411 	ld	h, #0x00
   6C95 29            [11] 2412 	add	hl, hl
   6C96 29            [11] 2413 	add	hl, hl
   6C97 29            [11] 2414 	add	hl, hl
   6C98 29            [11] 2415 	add	hl, hl
   6C99 29            [11] 2416 	add	hl, hl
   6C9A 19            [11] 2417 	add	hl, de
   6C9B 11 00 01      [10] 2418 	ld	de, #_g_maskTable
   6C9E D5            [11] 2419 	push	de
   6C9F 11 04 08      [10] 2420 	ld	de, #0x0804
   6CA2 D5            [11] 2421 	push	de
   6CA3 C5            [11] 2422 	push	bc
   6CA4 E5            [11] 2423 	push	hl
   6CA5 CD E5 5D      [17] 2424 	call	_cpct_drawSpriteMaskedAlignedTable
   6CA8 DD E1         [14] 2425 	pop	ix
   6CAA C9            [10] 2426 	ret
                           2427 ;src/main.c:789: void PrintCoin(u8 nFrame, u8 index) {
                           2428 ;	---------------------------------
                           2429 ; Function PrintCoin
                           2430 ; ---------------------------------
   6CAB                    2431 _PrintCoin::
   6CAB DD E5         [15] 2432 	push	ix
   6CAD DD 21 00 00   [14] 2433 	ld	ix,#0
   6CB1 DD 39         [15] 2434 	add	ix,sp
                           2435 ;src/main.c:792: 3, OBJ_H, g_maskTable);
                           2436 ;src/main.c:791: cpct_getScreenPtr(CPCT_VMEM_START, objX[index], objY[index]), 
   6CB3 01 7C 5F      [10] 2437 	ld	bc, #_objY+0
   6CB6 DD 6E 05      [19] 2438 	ld	l,5 (ix)
   6CB9 26 00         [ 7] 2439 	ld	h,#0x00
   6CBB 09            [11] 2440 	add	hl, bc
   6CBC 56            [ 7] 2441 	ld	d, (hl)
   6CBD 01 7A 5F      [10] 2442 	ld	bc, #_objX+0
   6CC0 DD 6E 05      [19] 2443 	ld	l,5 (ix)
   6CC3 26 00         [ 7] 2444 	ld	h,#0x00
   6CC5 09            [11] 2445 	add	hl, bc
   6CC6 5E            [ 7] 2446 	ld	e, (hl)
   6CC7 D5            [11] 2447 	push	de
   6CC8 21 00 C0      [10] 2448 	ld	hl, #0xc000
   6CCB E5            [11] 2449 	push	hl
   6CCC CD CF 5D      [17] 2450 	call	_cpct_getScreenPtr
   6CCF 4D            [ 4] 2451 	ld	c, l
   6CD0 44            [ 4] 2452 	ld	b, h
                           2453 ;src/main.c:790: cpct_drawSpriteMaskedAlignedTable(g_coin[nFrame], 
   6CD1 DD 5E 04      [19] 2454 	ld	e,4 (ix)
   6CD4 16 00         [ 7] 2455 	ld	d,#0x00
   6CD6 6B            [ 4] 2456 	ld	l, e
   6CD7 62            [ 4] 2457 	ld	h, d
   6CD8 29            [11] 2458 	add	hl, hl
   6CD9 19            [11] 2459 	add	hl, de
   6CDA 29            [11] 2460 	add	hl, hl
   6CDB 29            [11] 2461 	add	hl, hl
   6CDC 29            [11] 2462 	add	hl, hl
   6CDD 11 49 4A      [10] 2463 	ld	de, #_g_coin
   6CE0 19            [11] 2464 	add	hl, de
   6CE1 11 00 01      [10] 2465 	ld	de, #_g_maskTable
   6CE4 D5            [11] 2466 	push	de
   6CE5 11 03 08      [10] 2467 	ld	de, #0x0803
   6CE8 D5            [11] 2468 	push	de
   6CE9 C5            [11] 2469 	push	bc
   6CEA E5            [11] 2470 	push	hl
   6CEB CD E5 5D      [17] 2471 	call	_cpct_drawSpriteMaskedAlignedTable
   6CEE DD E1         [14] 2472 	pop	ix
   6CF0 C9            [10] 2473 	ret
                           2474 ;src/main.c:797: void DeleteObjectInStore() {
                           2475 ;	---------------------------------
                           2476 ; Function DeleteObjectInStore
                           2477 ; ---------------------------------
   6CF1                    2478 _DeleteObjectInStore::
                           2479 ;src/main.c:798: if (TwoPlayers) return;
   6CF1 3A D4 5E      [13] 2480 	ld	a,(#_TwoPlayers + 0)
   6CF4 B7            [ 4] 2481 	or	a, a
   6CF5 C0            [11] 2482 	ret	NZ
                           2483 ;src/main.c:800: 2 + (storeX & 1), 2 + (storeY & 3 ? 1 : 0),	MAP_W, 
   6CF6 3A EA 5E      [13] 2484 	ld	a,(#_storeY + 0)
   6CF9 E6 03         [ 7] 2485 	and	a, #0x03
   6CFB 28 04         [12] 2486 	jr	Z,00105$
   6CFD 16 01         [ 7] 2487 	ld	d, #0x01
   6CFF 18 02         [12] 2488 	jr	00106$
   6D01                    2489 00105$:
   6D01 16 00         [ 7] 2490 	ld	d, #0x00
   6D03                    2491 00106$:
   6D03 14            [ 4] 2492 	inc	d
   6D04 14            [ 4] 2493 	inc	d
   6D05 3A E9 5E      [13] 2494 	ld	a,(#_storeX + 0)
   6D08 E6 01         [ 7] 2495 	and	a, #0x01
   6D0A 5F            [ 4] 2496 	ld	e, a
   6D0B 1C            [ 4] 2497 	inc	e
   6D0C 1C            [ 4] 2498 	inc	e
                           2499 ;src/main.c:799: cpct_etm_drawTileBox2x4(storeX / 2, storeY / 4,
   6D0D 21 EA 5E      [10] 2500 	ld	hl,#_storeY + 0
   6D10 46            [ 7] 2501 	ld	b, (hl)
   6D11 CB 38         [ 8] 2502 	srl	b
   6D13 CB 38         [ 8] 2503 	srl	b
   6D15 21 E9 5E      [10] 2504 	ld	hl,#_storeX + 0
   6D18 4E            [ 7] 2505 	ld	c, (hl)
   6D19 CB 39         [ 8] 2506 	srl	c
   6D1B 21 71 0F      [10] 2507 	ld	hl, #0x0f71
   6D1E E5            [11] 2508 	push	hl
   6D1F 21 40 C1      [10] 2509 	ld	hl, #0xc140
   6D22 E5            [11] 2510 	push	hl
   6D23 3E 28         [ 7] 2511 	ld	a, #0x28
   6D25 F5            [11] 2512 	push	af
   6D26 33            [ 6] 2513 	inc	sp
   6D27 D5            [11] 2514 	push	de
   6D28 C5            [11] 2515 	push	bc
   6D29 CD 11 5B      [17] 2516 	call	_cpct_etm_drawTileBox2x4
   6D2C C9            [10] 2517 	ret
                           2518 ;src/main.c:806: void PrintObjectInStore() {
                           2519 ;	---------------------------------
                           2520 ; Function PrintObjectInStore
                           2521 ; ---------------------------------
   6D2D                    2522 _PrintObjectInStore::
                           2523 ;src/main.c:807: if (TwoPlayers) return;
   6D2D 3A D4 5E      [13] 2524 	ld	a,(#_TwoPlayers + 0)
   6D30 B7            [ 4] 2525 	or	a, a
   6D31 C0            [11] 2526 	ret	NZ
                           2527 ;src/main.c:808: if (coinScore[0] == 0) return;
   6D32 3A DD 5E      [13] 2528 	ld	a, (#_coinScore + 0)
   6D35 B7            [ 4] 2529 	or	a, a
   6D36 C8            [11] 2530 	ret	Z
                           2531 ;src/main.c:810: if (coinScore[0] < 13)
   6D37 FE 0D         [ 7] 2532 	cp	a, #0x0d
   6D39 30 08         [12] 2533 	jr	NC,00106$
                           2534 ;src/main.c:811: nPObj = coinScore[0] + 3; // assign the corresponding object to the available money
   6D3B 21 7E 5F      [10] 2535 	ld	hl, #_nPObj
   6D3E C6 03         [ 7] 2536 	add	a, #0x03
   6D40 77            [ 7] 2537 	ld	(hl), a
   6D41 18 05         [12] 2538 	jr	00107$
   6D43                    2539 00106$:
                           2540 ;src/main.c:813: nPObj = 15; // assign the most expensive object
   6D43 21 7E 5F      [10] 2541 	ld	hl,#_nPObj + 0
   6D46 36 0F         [10] 2542 	ld	(hl), #0x0f
   6D48                    2543 00107$:
                           2544 ;src/main.c:815: PrintObject(nPObj, storeX, storeY + ORIG_MAP_Y);
   6D48 3A EA 5E      [13] 2545 	ld	a,(#_storeY + 0)
   6D4B C6 20         [ 7] 2546 	add	a, #0x20
   6D4D 47            [ 4] 2547 	ld	b, a
   6D4E C5            [11] 2548 	push	bc
   6D4F 33            [ 6] 2549 	inc	sp
   6D50 3A E9 5E      [13] 2550 	ld	a, (_storeX)
   6D53 F5            [11] 2551 	push	af
   6D54 33            [ 6] 2552 	inc	sp
   6D55 3A 7E 5F      [13] 2553 	ld	a, (_nPObj)
   6D58 F5            [11] 2554 	push	af
   6D59 33            [ 6] 2555 	inc	sp
   6D5A CD BD 6B      [17] 2556 	call	_PrintObject
   6D5D F1            [10] 2557 	pop	af
   6D5E 33            [ 6] 2558 	inc	sp
   6D5F C9            [10] 2559 	ret
                           2560 ;src/main.c:821: void CheckObject(u8 index) {	
                           2561 ;	---------------------------------
                           2562 ; Function CheckObject
                           2563 ; ---------------------------------
   6D60                    2564 _CheckObject::
   6D60 DD E5         [15] 2565 	push	ix
   6D62 DD 21 00 00   [14] 2566 	ld	ix,#0
   6D66 DD 39         [15] 2567 	add	ix,sp
   6D68 21 F9 FF      [10] 2568 	ld	hl, #-7
   6D6B 39            [11] 2569 	add	hl, sp
   6D6C F9            [ 6] 2570 	ld	sp, hl
                           2571 ;src/main.c:822: i8 player = -1;
   6D6D DD 36 F9 FF   [19] 2572 	ld	-7 (ix), #0xff
                           2573 ;src/main.c:824: if (nObj[index] != -1)	{
   6D71 DD 7E 04      [19] 2574 	ld	a, 4 (ix)
   6D74 C6 78         [ 7] 2575 	add	a, #<(_nObj)
   6D76 DD 77 FC      [19] 2576 	ld	-4 (ix), a
   6D79 3E 00         [ 7] 2577 	ld	a, #0x00
   6D7B CE 5F         [ 7] 2578 	adc	a, #>(_nObj)
   6D7D DD 77 FD      [19] 2579 	ld	-3 (ix), a
   6D80 DD 6E FC      [19] 2580 	ld	l,-4 (ix)
   6D83 DD 66 FD      [19] 2581 	ld	h,-3 (ix)
   6D86 4E            [ 7] 2582 	ld	c, (hl)
   6D87 0C            [ 4] 2583 	inc	c
   6D88 CA 45 6F      [10] 2584 	jp	Z,00120$
                           2585 ;src/main.c:825: if (SpriteCollision(objX[index], objY[index], &spr[0], 0)) player = 0; // player 1
   6D8B DD 7E 04      [19] 2586 	ld	a, 4 (ix)
   6D8E C6 7C         [ 7] 2587 	add	a, #<(_objY)
   6D90 DD 77 FA      [19] 2588 	ld	-6 (ix), a
   6D93 3E 00         [ 7] 2589 	ld	a, #0x00
   6D95 CE 5F         [ 7] 2590 	adc	a, #>(_objY)
   6D97 DD 77 FB      [19] 2591 	ld	-5 (ix), a
   6D9A DD 6E FA      [19] 2592 	ld	l,-6 (ix)
   6D9D DD 66 FB      [19] 2593 	ld	h,-5 (ix)
   6DA0 56            [ 7] 2594 	ld	d, (hl)
   6DA1 DD 7E 04      [19] 2595 	ld	a, 4 (ix)
   6DA4 C6 7A         [ 7] 2596 	add	a, #<(_objX)
   6DA6 DD 77 FE      [19] 2597 	ld	-2 (ix), a
   6DA9 3E 00         [ 7] 2598 	ld	a, #0x00
   6DAB CE 5F         [ 7] 2599 	adc	a, #>(_objX)
   6DAD DD 77 FF      [19] 2600 	ld	-1 (ix), a
   6DB0 DD 6E FE      [19] 2601 	ld	l,-2 (ix)
   6DB3 DD 66 FF      [19] 2602 	ld	h,-1 (ix)
   6DB6 46            [ 7] 2603 	ld	b, (hl)
   6DB7 AF            [ 4] 2604 	xor	a, a
   6DB8 F5            [11] 2605 	push	af
   6DB9 33            [ 6] 2606 	inc	sp
   6DBA 21 0A 5F      [10] 2607 	ld	hl, #_spr
   6DBD E5            [11] 2608 	push	hl
   6DBE 58            [ 4] 2609 	ld	e, b
   6DBF D5            [11] 2610 	push	de
   6DC0 CD 66 7B      [17] 2611 	call	_SpriteCollision
   6DC3 F1            [10] 2612 	pop	af
   6DC4 F1            [10] 2613 	pop	af
   6DC5 33            [ 6] 2614 	inc	sp
   6DC6 7D            [ 4] 2615 	ld	a, l
   6DC7 B7            [ 4] 2616 	or	a, a
   6DC8 28 06         [12] 2617 	jr	Z,00105$
   6DCA DD 36 F9 00   [19] 2618 	ld	-7 (ix), #0x00
   6DCE 18 2B         [12] 2619 	jr	00106$
   6DD0                    2620 00105$:
                           2621 ;src/main.c:826: else if (TwoPlayers && SpriteCollision(objX[index], objY[index], &spr[1], 0)) player = 1; // player 2
   6DD0 3A D4 5E      [13] 2622 	ld	a,(#_TwoPlayers + 0)
   6DD3 B7            [ 4] 2623 	or	a, a
   6DD4 28 25         [12] 2624 	jr	Z,00106$
   6DD6 DD 6E FA      [19] 2625 	ld	l,-6 (ix)
   6DD9 DD 66 FB      [19] 2626 	ld	h,-5 (ix)
   6DDC 56            [ 7] 2627 	ld	d, (hl)
   6DDD DD 6E FE      [19] 2628 	ld	l,-2 (ix)
   6DE0 DD 66 FF      [19] 2629 	ld	h,-1 (ix)
   6DE3 46            [ 7] 2630 	ld	b, (hl)
   6DE4 AF            [ 4] 2631 	xor	a, a
   6DE5 F5            [11] 2632 	push	af
   6DE6 33            [ 6] 2633 	inc	sp
   6DE7 21 19 5F      [10] 2634 	ld	hl, #(_spr + 0x000f)
   6DEA E5            [11] 2635 	push	hl
   6DEB 58            [ 4] 2636 	ld	e, b
   6DEC D5            [11] 2637 	push	de
   6DED CD 66 7B      [17] 2638 	call	_SpriteCollision
   6DF0 F1            [10] 2639 	pop	af
   6DF1 F1            [10] 2640 	pop	af
   6DF2 33            [ 6] 2641 	inc	sp
   6DF3 7D            [ 4] 2642 	ld	a, l
   6DF4 B7            [ 4] 2643 	or	a, a
   6DF5 28 04         [12] 2644 	jr	Z,00106$
   6DF7 DD 36 F9 01   [19] 2645 	ld	-7 (ix), #0x01
   6DFB                    2646 00106$:
                           2647 ;src/main.c:828: if (player >= 0)	{									
   6DFB DD CB F9 7E   [20] 2648 	bit	7, -7 (ix)
   6DFF C2 45 6F      [10] 2649 	jp	NZ, 00120$
                           2650 ;src/main.c:829: DeleteObject(index);
   6E02 DD 6E 04      [19] 2651 	ld	l, 4 (ix)
   6E05 CD F3 6B      [17] 2652 	call	_DeleteObject
                           2653 ;src/main.c:832: if (nObj[index] <= 1) {
   6E08 DD 6E FC      [19] 2654 	ld	l,-4 (ix)
   6E0B DD 66 FD      [19] 2655 	ld	h,-3 (ix)
   6E0E 4E            [ 7] 2656 	ld	c, (hl)
   6E0F 3E 01         [ 7] 2657 	ld	a, #0x01
   6E11 91            [ 4] 2658 	sub	a, c
   6E12 E2 17 6E      [10] 2659 	jp	PO, 00167$
   6E15 EE 80         [ 7] 2660 	xor	a, #0x80
   6E17                    2661 00167$:
   6E17 FA 31 6E      [10] 2662 	jp	M, 00108$
                           2663 ;src/main.c:833: cpct_akp_SFXPlay (2, 12, 79, 0, 0, AY_CHANNEL_C); // take an item
   6E1A 3E 04         [ 7] 2664 	ld	a, #0x04
   6E1C F5            [11] 2665 	push	af
   6E1D 33            [ 6] 2666 	inc	sp
   6E1E 21 00 00      [10] 2667 	ld	hl, #0x0000
   6E21 E5            [11] 2668 	push	hl
   6E22 2E 4F         [ 7] 2669 	ld	l, #0x4f
   6E24 E5            [11] 2670 	push	hl
   6E25 21 02 0C      [10] 2671 	ld	hl, #0x0c02
   6E28 E5            [11] 2672 	push	hl
   6E29 CD EF 59      [17] 2673 	call	_cpct_akp_SFXPlay
   6E2C 21 07 00      [10] 2674 	ld	hl, #7
   6E2F 39            [11] 2675 	add	hl, sp
   6E30 F9            [ 6] 2676 	ld	sp, hl
   6E31                    2677 00108$:
                           2678 ;src/main.c:836: switch (nObj[index])
   6E31 DD 6E FC      [19] 2679 	ld	l,-4 (ix)
   6E34 DD 66 FD      [19] 2680 	ld	h,-3 (ix)
   6E37 7E            [ 7] 2681 	ld	a, (hl)
   6E38 DD 77 FE      [19] 2682 	ld	-2 (ix), a
                           2683 ;src/main.c:839: coinScore[player]++;
   6E3B DD 5E F9      [19] 2684 	ld	e, -7 (ix)
   6E3E DD 7E F9      [19] 2685 	ld	a, -7 (ix)
   6E41 17            [ 4] 2686 	rla
   6E42 9F            [ 4] 2687 	sbc	a, a
   6E43 57            [ 4] 2688 	ld	d, a
                           2689 ;src/main.c:840: score[player] += 5;
   6E44 4B            [ 4] 2690 	ld	c, e
   6E45 42            [ 4] 2691 	ld	b, d
   6E46 CB 21         [ 8] 2692 	sla	c
   6E48 CB 10         [ 8] 2693 	rl	b
                           2694 ;src/main.c:836: switch (nObj[index])
   6E4A DD 7E FE      [19] 2695 	ld	a, -2 (ix)
   6E4D B7            [ 4] 2696 	or	a, a
   6E4E 28 2E         [12] 2697 	jr	Z,00109$
   6E50 DD 7E FE      [19] 2698 	ld	a, -2 (ix)
   6E53 3D            [ 4] 2699 	dec	a
   6E54 28 49         [12] 2700 	jr	Z,00110$
                           2701 ;src/main.c:854: if (spr[player].lives_speed < 9)
   6E56 DD 5E F9      [19] 2702 	ld	e, -7 (ix)
   6E59 7B            [ 4] 2703 	ld	a, e
   6E5A CB 07         [ 8] 2704 	rlc	a
   6E5C 9F            [ 4] 2705 	sbc	a, a
   6E5D 57            [ 4] 2706 	ld	d, a
   6E5E 6B            [ 4] 2707 	ld	l, e
   6E5F 62            [ 4] 2708 	ld	h, d
   6E60 29            [11] 2709 	add	hl, hl
   6E61 19            [11] 2710 	add	hl, de
   6E62 29            [11] 2711 	add	hl, hl
   6E63 19            [11] 2712 	add	hl, de
   6E64 29            [11] 2713 	add	hl, hl
   6E65 19            [11] 2714 	add	hl, de
   6E66 EB            [ 4] 2715 	ex	de,hl
   6E67 21 0A 5F      [10] 2716 	ld	hl, #_spr
   6E6A 19            [11] 2717 	add	hl,de
   6E6B EB            [ 4] 2718 	ex	de,hl
                           2719 ;src/main.c:836: switch (nObj[index])
   6E6C DD 7E FE      [19] 2720 	ld	a, -2 (ix)
   6E6F D6 02         [ 7] 2721 	sub	a, #0x02
   6E71 28 50         [12] 2722 	jr	Z,00111$
   6E73 DD 7E FE      [19] 2723 	ld	a, -2 (ix)
   6E76 D6 03         [ 7] 2724 	sub	a, #0x03
   6E78 CA FF 6E      [10] 2725 	jp	Z,00114$
   6E7B C3 34 6F      [10] 2726 	jp	00115$
                           2727 ;src/main.c:838: case 0:	{	// coin
   6E7E                    2728 00109$:
                           2729 ;src/main.c:839: coinScore[player]++;
   6E7E 21 DD 5E      [10] 2730 	ld	hl, #_coinScore+0
   6E81 19            [11] 2731 	add	hl, de
   6E82 5E            [ 7] 2732 	ld	e, (hl)
   6E83 1C            [ 4] 2733 	inc	e
   6E84 73            [ 7] 2734 	ld	(hl), e
                           2735 ;src/main.c:840: score[player] += 5;
   6E85 21 D5 5E      [10] 2736 	ld	hl, #_score+0
   6E88 09            [11] 2737 	add	hl, bc
   6E89 E5            [11] 2738 	push	hl
   6E8A 4E            [ 7] 2739 	ld	c, (hl)
   6E8B 23            [ 6] 2740 	inc	hl
   6E8C 46            [ 7] 2741 	ld	b, (hl)
   6E8D E1            [10] 2742 	pop	hl
   6E8E 03            [ 6] 2743 	inc	bc
   6E8F 03            [ 6] 2744 	inc	bc
   6E90 03            [ 6] 2745 	inc	bc
   6E91 03            [ 6] 2746 	inc	bc
   6E92 03            [ 6] 2747 	inc	bc
   6E93 71            [ 7] 2748 	ld	(hl), c
   6E94 23            [ 6] 2749 	inc	hl
   6E95 70            [ 7] 2750 	ld	(hl), b
                           2751 ;src/main.c:841: DeleteObjectInStore();
   6E96 CD F1 6C      [17] 2752 	call	_DeleteObjectInStore
                           2753 ;src/main.c:842: PrintObjectInStore();
   6E99 CD 2D 6D      [17] 2754 	call	_PrintObjectInStore
                           2755 ;src/main.c:843: break;
   6E9C C3 34 6F      [10] 2756 	jp	00115$
                           2757 ;src/main.c:845: case 1: {	// coin x5
   6E9F                    2758 00110$:
                           2759 ;src/main.c:846: coinScore[player] += 5;
   6E9F 21 DD 5E      [10] 2760 	ld	hl, #_coinScore
   6EA2 19            [11] 2761 	add	hl, de
   6EA3 7E            [ 7] 2762 	ld	a, (hl)
   6EA4 C6 05         [ 7] 2763 	add	a, #0x05
   6EA6 77            [ 7] 2764 	ld	(hl), a
                           2765 ;src/main.c:847: score[player] += 20;
   6EA7 21 D5 5E      [10] 2766 	ld	hl, #_score
   6EAA 09            [11] 2767 	add	hl, bc
   6EAB E5            [11] 2768 	push	hl
   6EAC 4E            [ 7] 2769 	ld	c, (hl)
   6EAD 23            [ 6] 2770 	inc	hl
   6EAE 46            [ 7] 2771 	ld	b, (hl)
   6EAF E1            [10] 2772 	pop	hl
   6EB0 79            [ 4] 2773 	ld	a, c
   6EB1 C6 14         [ 7] 2774 	add	a, #0x14
   6EB3 4F            [ 4] 2775 	ld	c, a
   6EB4 78            [ 4] 2776 	ld	a, b
   6EB5 CE 00         [ 7] 2777 	adc	a, #0x00
   6EB7 47            [ 4] 2778 	ld	b, a
   6EB8 71            [ 7] 2779 	ld	(hl), c
   6EB9 23            [ 6] 2780 	inc	hl
   6EBA 70            [ 7] 2781 	ld	(hl), b
                           2782 ;src/main.c:848: DeleteObjectInStore();
   6EBB CD F1 6C      [17] 2783 	call	_DeleteObjectInStore
                           2784 ;src/main.c:849: PrintObjectInStore();
   6EBE CD 2D 6D      [17] 2785 	call	_PrintObjectInStore
                           2786 ;src/main.c:850: break;
   6EC1 18 71         [12] 2787 	jr	00115$
                           2788 ;src/main.c:852: case 2: {	// extra life
   6EC3                    2789 00111$:
                           2790 ;src/main.c:853: cpct_akp_SFXPlay (8, 12, 60, 0, 0, AY_CHANNEL_C); // Prince of Persia tune
   6EC3 C5            [11] 2791 	push	bc
   6EC4 D5            [11] 2792 	push	de
   6EC5 3E 04         [ 7] 2793 	ld	a, #0x04
   6EC7 F5            [11] 2794 	push	af
   6EC8 33            [ 6] 2795 	inc	sp
   6EC9 21 00 00      [10] 2796 	ld	hl, #0x0000
   6ECC E5            [11] 2797 	push	hl
   6ECD 2E 3C         [ 7] 2798 	ld	l, #0x3c
   6ECF E5            [11] 2799 	push	hl
   6ED0 21 08 0C      [10] 2800 	ld	hl, #0x0c08
   6ED3 E5            [11] 2801 	push	hl
   6ED4 CD EF 59      [17] 2802 	call	_cpct_akp_SFXPlay
   6ED7 21 07 00      [10] 2803 	ld	hl, #7
   6EDA 39            [11] 2804 	add	hl, sp
   6EDB F9            [ 6] 2805 	ld	sp, hl
   6EDC D1            [10] 2806 	pop	de
   6EDD C1            [10] 2807 	pop	bc
                           2808 ;src/main.c:854: if (spr[player].lives_speed < 9)
   6EDE 21 0B 00      [10] 2809 	ld	hl, #0x000b
   6EE1 19            [11] 2810 	add	hl, de
   6EE2 7E            [ 7] 2811 	ld	a, (hl)
   6EE3 FE 09         [ 7] 2812 	cp	a, #0x09
   6EE5 30 02         [12] 2813 	jr	NC,00113$
                           2814 ;src/main.c:855: spr[player].lives_speed++;
   6EE7 3C            [ 4] 2815 	inc	a
   6EE8 77            [ 7] 2816 	ld	(hl), a
   6EE9                    2817 00113$:
                           2818 ;src/main.c:856: score[player] += 30;
   6EE9 21 D5 5E      [10] 2819 	ld	hl, #_score
   6EEC 09            [11] 2820 	add	hl, bc
   6EED E5            [11] 2821 	push	hl
   6EEE 4E            [ 7] 2822 	ld	c, (hl)
   6EEF 23            [ 6] 2823 	inc	hl
   6EF0 46            [ 7] 2824 	ld	b, (hl)
   6EF1 E1            [10] 2825 	pop	hl
   6EF2 79            [ 4] 2826 	ld	a, c
   6EF3 C6 1E         [ 7] 2827 	add	a, #0x1e
   6EF5 4F            [ 4] 2828 	ld	c, a
   6EF6 78            [ 4] 2829 	ld	a, b
   6EF7 CE 00         [ 7] 2830 	adc	a, #0x00
   6EF9 47            [ 4] 2831 	ld	b, a
   6EFA 71            [ 7] 2832 	ld	(hl), c
   6EFB 23            [ 6] 2833 	inc	hl
   6EFC 70            [ 7] 2834 	ld	(hl), b
                           2835 ;src/main.c:857: break;
   6EFD 18 35         [12] 2836 	jr	00115$
                           2837 ;src/main.c:859: case 3: {	// power up speed*2
   6EFF                    2838 00114$:
                           2839 ;src/main.c:860: cpct_akp_SFXPlay (9, 12, 60, 0, 0, AY_CHANNEL_A); // powerUp
   6EFF C5            [11] 2840 	push	bc
   6F00 D5            [11] 2841 	push	de
   6F01 3E 01         [ 7] 2842 	ld	a, #0x01
   6F03 F5            [11] 2843 	push	af
   6F04 33            [ 6] 2844 	inc	sp
   6F05 21 00 00      [10] 2845 	ld	hl, #0x0000
   6F08 E5            [11] 2846 	push	hl
   6F09 2E 3C         [ 7] 2847 	ld	l, #0x3c
   6F0B E5            [11] 2848 	push	hl
   6F0C 21 09 0C      [10] 2849 	ld	hl, #0x0c09
   6F0F E5            [11] 2850 	push	hl
   6F10 CD EF 59      [17] 2851 	call	_cpct_akp_SFXPlay
   6F13 21 07 00      [10] 2852 	ld	hl, #7
   6F16 39            [11] 2853 	add	hl, sp
   6F17 F9            [ 6] 2854 	ld	sp, hl
   6F18 D1            [10] 2855 	pop	de
   6F19 C1            [10] 2856 	pop	bc
                           2857 ;src/main.c:861: spr[player].power_maxV = 255;
   6F1A 21 0E 00      [10] 2858 	ld	hl, #0x000e
   6F1D 19            [11] 2859 	add	hl, de
   6F1E 36 FF         [10] 2860 	ld	(hl), #0xff
                           2861 ;src/main.c:862: score[player] += 25;
   6F20 21 D5 5E      [10] 2862 	ld	hl, #_score
   6F23 09            [11] 2863 	add	hl, bc
   6F24 E5            [11] 2864 	push	hl
   6F25 4E            [ 7] 2865 	ld	c, (hl)
   6F26 23            [ 6] 2866 	inc	hl
   6F27 46            [ 7] 2867 	ld	b, (hl)
   6F28 E1            [10] 2868 	pop	hl
   6F29 79            [ 4] 2869 	ld	a, c
   6F2A C6 19         [ 7] 2870 	add	a, #0x19
   6F2C 4F            [ 4] 2871 	ld	c, a
   6F2D 78            [ 4] 2872 	ld	a, b
   6F2E CE 00         [ 7] 2873 	adc	a, #0x00
   6F30 47            [ 4] 2874 	ld	b, a
   6F31 71            [ 7] 2875 	ld	(hl), c
   6F32 23            [ 6] 2876 	inc	hl
   6F33 70            [ 7] 2877 	ld	(hl), b
                           2878 ;src/main.c:864: }
   6F34                    2879 00115$:
                           2880 ;src/main.c:865: RefreshHighScore(player);
   6F34 DD 6E F9      [19] 2881 	ld	l, -7 (ix)
   6F37 CD C4 68      [17] 2882 	call	_RefreshHighScore
                           2883 ;src/main.c:866: RefreshScoreboard();
   6F3A CD 4D 6A      [17] 2884 	call	_RefreshScoreboard
                           2885 ;src/main.c:867: nObj[index] = -1; // object not assigned
   6F3D DD 6E FC      [19] 2886 	ld	l,-4 (ix)
   6F40 DD 66 FD      [19] 2887 	ld	h,-3 (ix)
   6F43 36 FF         [10] 2888 	ld	(hl), #0xff
   6F45                    2889 00120$:
   6F45 DD F9         [10] 2890 	ld	sp, ix
   6F47 DD E1         [14] 2891 	pop	ix
   6F49 C9            [10] 2892 	ret
                           2893 ;src/main.c:874: u8 ObjectCollision(u8 numObj) __z88dk_fastcall {	
                           2894 ;	---------------------------------
                           2895 ; Function ObjectCollision
                           2896 ; ---------------------------------
   6F4A                    2897 _ObjectCollision::
   6F4A DD E5         [15] 2898 	push	ix
   6F4C DD 21 00 00   [14] 2899 	ld	ix,#0
   6F50 DD 39         [15] 2900 	add	ix,sp
   6F52 F5            [11] 2901 	push	af
   6F53 3B            [ 6] 2902 	dec	sp
   6F54 4D            [ 4] 2903 	ld	c, l
                           2904 ;src/main.c:876: while(i<=5) {
   6F55 11 7C 5F      [10] 2905 	ld	de, #_objY+0
   6F58 69            [ 4] 2906 	ld	l,c
   6F59 26 00         [ 7] 2907 	ld	h,#0x00
   6F5B 19            [11] 2908 	add	hl, de
   6F5C 7E            [ 7] 2909 	ld	a, (hl)
   6F5D DD 77 FF      [19] 2910 	ld	-1 (ix), a
   6F60 11 7A 5F      [10] 2911 	ld	de, #_objX+0
   6F63 69            [ 4] 2912 	ld	l,c
   6F64 26 00         [ 7] 2913 	ld	h,#0x00
   6F66 19            [11] 2914 	add	hl, de
   6F67 7E            [ 7] 2915 	ld	a, (hl)
   6F68 DD 77 FE      [19] 2916 	ld	-2 (ix), a
   6F6B DD 36 FD 02   [19] 2917 	ld	-3 (ix), #0x02
   6F6F                    2918 00106$:
   6F6F 3E 05         [ 7] 2919 	ld	a, #0x05
   6F71 DD 96 FD      [19] 2920 	sub	a, -3 (ix)
   6F74 38 7A         [12] 2921 	jr	C,00108$
                           2922 ;src/main.c:877: if ((spr[i].x + SPR_W >= objX[numObj] && spr[i].x <= objX[numObj] + OBJ_W) && 
   6F76 DD 4E FD      [19] 2923 	ld	c,-3 (ix)
   6F79 06 00         [ 7] 2924 	ld	b,#0x00
   6F7B 69            [ 4] 2925 	ld	l, c
   6F7C 60            [ 4] 2926 	ld	h, b
   6F7D 29            [11] 2927 	add	hl, hl
   6F7E 09            [11] 2928 	add	hl, bc
   6F7F 29            [11] 2929 	add	hl, hl
   6F80 09            [11] 2930 	add	hl, bc
   6F81 29            [11] 2931 	add	hl, hl
   6F82 09            [11] 2932 	add	hl, bc
   6F83 4D            [ 4] 2933 	ld	c, l
   6F84 44            [ 4] 2934 	ld	b, h
   6F85 FD 21 0A 5F   [14] 2935 	ld	iy, #_spr
   6F89 FD 09         [15] 2936 	add	iy, bc
   6F8B FD E5         [15] 2937 	push	iy
   6F8D E1            [10] 2938 	pop	hl
   6F8E 23            [ 6] 2939 	inc	hl
   6F8F 23            [ 6] 2940 	inc	hl
   6F90 4E            [ 7] 2941 	ld	c, (hl)
   6F91 06 00         [ 7] 2942 	ld	b, #0x00
   6F93 21 05 00      [10] 2943 	ld	hl, #0x0005
   6F96 09            [11] 2944 	add	hl, bc
   6F97 DD 5E FE      [19] 2945 	ld	e, -2 (ix)
   6F9A 16 00         [ 7] 2946 	ld	d, #0x00
   6F9C 7D            [ 4] 2947 	ld	a, l
   6F9D 93            [ 4] 2948 	sub	a, e
   6F9E 7C            [ 4] 2949 	ld	a, h
   6F9F 9A            [ 4] 2950 	sbc	a, d
   6FA0 E2 A5 6F      [10] 2951 	jp	PO, 00135$
   6FA3 EE 80         [ 7] 2952 	xor	a, #0x80
   6FA5                    2953 00135$:
   6FA5 FA EA 6F      [10] 2954 	jp	M, 00102$
   6FA8 13            [ 6] 2955 	inc	de
   6FA9 13            [ 6] 2956 	inc	de
   6FAA 13            [ 6] 2957 	inc	de
   6FAB 13            [ 6] 2958 	inc	de
   6FAC 7B            [ 4] 2959 	ld	a, e
   6FAD 91            [ 4] 2960 	sub	a, c
   6FAE 7A            [ 4] 2961 	ld	a, d
   6FAF 98            [ 4] 2962 	sbc	a, b
   6FB0 E2 B5 6F      [10] 2963 	jp	PO, 00136$
   6FB3 EE 80         [ 7] 2964 	xor	a, #0x80
   6FB5                    2965 00136$:
   6FB5 FA EA 6F      [10] 2966 	jp	M, 00102$
                           2967 ;src/main.c:878: (spr[i].y + SPR_H >= objY[numObj] && spr[i].y <= objY[numObj] + OBJ_H)) {
   6FB8 FD E5         [15] 2968 	push	iy
   6FBA E1            [10] 2969 	pop	hl
   6FBB 23            [ 6] 2970 	inc	hl
   6FBC 23            [ 6] 2971 	inc	hl
   6FBD 23            [ 6] 2972 	inc	hl
   6FBE 4E            [ 7] 2973 	ld	c, (hl)
   6FBF 06 00         [ 7] 2974 	ld	b, #0x00
   6FC1 21 0C 00      [10] 2975 	ld	hl, #0x000c
   6FC4 09            [11] 2976 	add	hl, bc
   6FC5 DD 5E FF      [19] 2977 	ld	e, -1 (ix)
   6FC8 16 00         [ 7] 2978 	ld	d, #0x00
   6FCA 7D            [ 4] 2979 	ld	a, l
   6FCB 93            [ 4] 2980 	sub	a, e
   6FCC 7C            [ 4] 2981 	ld	a, h
   6FCD 9A            [ 4] 2982 	sbc	a, d
   6FCE E2 D3 6F      [10] 2983 	jp	PO, 00137$
   6FD1 EE 80         [ 7] 2984 	xor	a, #0x80
   6FD3                    2985 00137$:
   6FD3 FA EA 6F      [10] 2986 	jp	M, 00102$
   6FD6 21 08 00      [10] 2987 	ld	hl, #0x0008
   6FD9 19            [11] 2988 	add	hl, de
   6FDA 7D            [ 4] 2989 	ld	a, l
   6FDB 91            [ 4] 2990 	sub	a, c
   6FDC 7C            [ 4] 2991 	ld	a, h
   6FDD 98            [ 4] 2992 	sbc	a, b
   6FDE E2 E3 6F      [10] 2993 	jp	PO, 00138$
   6FE1 EE 80         [ 7] 2994 	xor	a, #0x80
   6FE3                    2995 00138$:
   6FE3 FA EA 6F      [10] 2996 	jp	M, 00102$
                           2997 ;src/main.c:879: return 1;
   6FE6 2E 01         [ 7] 2998 	ld	l, #0x01
   6FE8 18 08         [12] 2999 	jr	00109$
   6FEA                    3000 00102$:
                           3001 ;src/main.c:881: i++;
   6FEA DD 34 FD      [23] 3002 	inc	-3 (ix)
   6FED C3 6F 6F      [10] 3003 	jp	00106$
   6FF0                    3004 00108$:
                           3005 ;src/main.c:883: return 0;
   6FF0 2E 00         [ 7] 3006 	ld	l, #0x00
   6FF2                    3007 00109$:
   6FF2 DD F9         [10] 3008 	ld	sp, ix
   6FF4 DD E1         [14] 3009 	pop	ix
   6FF6 C9            [10] 3010 	ret
                           3011 ;src/main.c:890: void ReprintObject() {
                           3012 ;	---------------------------------
                           3013 ; Function ReprintObject
                           3014 ; ---------------------------------
   6FF7                    3015 _ReprintObject::
                           3016 ;src/main.c:892: if (nObj[0] >= 0 && !ObjectCollision(0)) {  // does not print if hidden by enemies
   6FF7 21 78 5F      [10] 3017 	ld	hl, #_nObj + 0
   6FFA CB 7E         [12] 3018 	bit	7, (hl)
   6FFC C2 49 71      [10] 3019 	jp	NZ, 00125$
   6FFF 2E 00         [ 7] 3020 	ld	l, #0x00
   7001 CD 4A 6F      [17] 3021 	call	_ObjectCollision
   7004 7D            [ 4] 3022 	ld	a, l
   7005 B7            [ 4] 3023 	or	a, a
   7006 C2 49 71      [10] 3024 	jp	NZ, 00125$
                           3025 ;src/main.c:893: switch(ctMainLoop) {
   7009 FD 21 F2 5E   [14] 3026 	ld	iy, #_ctMainLoop
   700D FD 7E 00      [19] 3027 	ld	a, 0 (iy)
   7010 B7            [ 4] 3028 	or	a, a
   7011 FD B6 01      [19] 3029 	or	a, 1 (iy)
   7014 CA BA 70      [10] 3030 	jp	Z,00102$
   7017 FD 7E 00      [19] 3031 	ld	a, 0 (iy)
   701A D6 08         [ 7] 3032 	sub	a, #0x08
   701C FD B6 01      [19] 3033 	or	a, 1 (iy)
   701F CA CA 70      [10] 3034 	jp	Z,00104$
   7022 FD 7E 00      [19] 3035 	ld	a, 0 (iy)
   7025 D6 10         [ 7] 3036 	sub	a, #0x10
   7027 FD B6 01      [19] 3037 	or	a, 1 (iy)
   702A CA D9 70      [10] 3038 	jp	Z,00105$
   702D FD 7E 00      [19] 3039 	ld	a, 0 (iy)
   7030 D6 18         [ 7] 3040 	sub	a, #0x18
   7032 FD B6 01      [19] 3041 	or	a, 1 (iy)
   7035 CA F4 70      [10] 3042 	jp	Z,00108$
   7038 FD 7E 00      [19] 3043 	ld	a, 0 (iy)
   703B D6 20         [ 7] 3044 	sub	a, #0x20
   703D FD B6 01      [19] 3045 	or	a, 1 (iy)
   7040 CA 08 71      [10] 3046 	jp	Z,00113$
   7043 FD 7E 00      [19] 3047 	ld	a, 0 (iy)
   7046 D6 28         [ 7] 3048 	sub	a, #0x28
   7048 FD B6 01      [19] 3049 	or	a, 1 (iy)
   704B CA 1C 71      [10] 3050 	jp	Z,00118$
   704E FD 7E 00      [19] 3051 	ld	a, 0 (iy)
   7051 D6 38         [ 7] 3052 	sub	a, #0x38
   7053 FD B6 01      [19] 3053 	or	a, 1 (iy)
   7056 CA F4 70      [10] 3054 	jp	Z,00108$
   7059 FD 7E 00      [19] 3055 	ld	a, 0 (iy)
   705C D6 40         [ 7] 3056 	sub	a, #0x40
   705E FD B6 01      [19] 3057 	or	a, 1 (iy)
   7061 CA 08 71      [10] 3058 	jp	Z,00113$
   7064 FD 7E 00      [19] 3059 	ld	a, 0 (iy)
   7067 D6 48         [ 7] 3060 	sub	a, #0x48
   7069 FD B6 01      [19] 3061 	or	a, 1 (iy)
   706C CA 1C 71      [10] 3062 	jp	Z,00118$
   706F FD 7E 00      [19] 3063 	ld	a, 0 (iy)
   7072 D6 58         [ 7] 3064 	sub	a, #0x58
   7074 FD B6 01      [19] 3065 	or	a, 1 (iy)
   7077 CA F4 70      [10] 3066 	jp	Z,00108$
   707A FD 7E 00      [19] 3067 	ld	a, 0 (iy)
   707D D6 60         [ 7] 3068 	sub	a, #0x60
   707F FD B6 01      [19] 3069 	or	a, 1 (iy)
   7082 CA 08 71      [10] 3070 	jp	Z,00113$
   7085 FD 7E 00      [19] 3071 	ld	a, 0 (iy)
   7088 D6 68         [ 7] 3072 	sub	a, #0x68
   708A FD B6 01      [19] 3073 	or	a, 1 (iy)
   708D CA 1C 71      [10] 3074 	jp	Z,00118$
   7090 FD 7E 00      [19] 3075 	ld	a, 0 (iy)
   7093 D6 48         [ 7] 3076 	sub	a, #0x48
   7095 20 07         [12] 3077 	jr	NZ,00323$
   7097 FD 7E 01      [19] 3078 	ld	a, 1 (iy)
   709A 3D            [ 4] 3079 	dec	a
   709B CA 30 71      [10] 3080 	jp	Z,00121$
   709E                    3081 00323$:
   709E FD 7E 00      [19] 3082 	ld	a, 0 (iy)
   70A1 D6 50         [ 7] 3083 	sub	a, #0x50
   70A3 20 06         [12] 3084 	jr	NZ,00324$
   70A5 FD 7E 01      [19] 3085 	ld	a, 1 (iy)
   70A8 3D            [ 4] 3086 	dec	a
   70A9 28 1F         [12] 3087 	jr	Z,00104$
   70AB                    3088 00324$:
   70AB FD 7E 00      [19] 3089 	ld	a, 0 (iy)
   70AE D6 58         [ 7] 3090 	sub	a, #0x58
   70B0 C2 35 71      [10] 3091 	jp	NZ,00122$
   70B3 FD 7E 01      [19] 3092 	ld	a, 1 (iy)
   70B6 3D            [ 4] 3093 	dec	a
   70B7 C2 35 71      [10] 3094 	jp	NZ,00122$
                           3095 ;src/main.c:896: case 344:	{ DeleteObject(0); PrintDust(0,0); break; }
   70BA                    3096 00102$:
   70BA 2E 00         [ 7] 3097 	ld	l, #0x00
   70BC CD F3 6B      [17] 3098 	call	_DeleteObject
   70BF 21 00 00      [10] 3099 	ld	hl, #0x0000
   70C2 E5            [11] 3100 	push	hl
   70C3 CD 67 6C      [17] 3101 	call	_PrintDust
   70C6 F1            [10] 3102 	pop	af
   70C7 C3 49 71      [10] 3103 	jp	00125$
                           3104 ;src/main.c:899: case 336:	{ DeleteObject(0); PrintDust(1,0); break; }
   70CA                    3105 00104$:
   70CA 2E 00         [ 7] 3106 	ld	l, #0x00
   70CC CD F3 6B      [17] 3107 	call	_DeleteObject
   70CF 21 01 00      [10] 3108 	ld	hl, #0x0001
   70D2 E5            [11] 3109 	push	hl
   70D3 CD 67 6C      [17] 3110 	call	_PrintDust
   70D6 F1            [10] 3111 	pop	af
   70D7 18 70         [12] 3112 	jr	00125$
                           3113 ;src/main.c:902: case 16:	{ DeleteObject(0); PrintObject(nObj[0], objX[0], objY[0]); break; }
   70D9                    3114 00105$:
   70D9 2E 00         [ 7] 3115 	ld	l, #0x00
   70DB CD F3 6B      [17] 3116 	call	_DeleteObject
   70DE 21 7C 5F      [10] 3117 	ld	hl, #_objY+0
   70E1 56            [ 7] 3118 	ld	d, (hl)
   70E2 3A 7A 5F      [13] 3119 	ld	a, (#_objX + 0)
   70E5 21 78 5F      [10] 3120 	ld	hl, #_nObj + 0
   70E8 46            [ 7] 3121 	ld	b, (hl)
   70E9 5F            [ 4] 3122 	ld	e, a
   70EA D5            [11] 3123 	push	de
   70EB C5            [11] 3124 	push	bc
   70EC 33            [ 6] 3125 	inc	sp
   70ED CD BD 6B      [17] 3126 	call	_PrintObject
   70F0 F1            [10] 3127 	pop	af
   70F1 33            [ 6] 3128 	inc	sp
   70F2 18 55         [12] 3129 	jr	00125$
                           3130 ;src/main.c:907: case 88: { if (nObj[0] == 0) {DeleteObject(0); PrintCoin(0,0); break; }}
   70F4                    3131 00108$:
   70F4 3A 78 5F      [13] 3132 	ld	a, (#_nObj + 0)
   70F7 B7            [ 4] 3133 	or	a,a
   70F8 20 0E         [12] 3134 	jr	NZ,00113$
   70FA 6F            [ 4] 3135 	ld	l,a
   70FB CD F3 6B      [17] 3136 	call	_DeleteObject
   70FE 21 00 00      [10] 3137 	ld	hl, #0x0000
   7101 E5            [11] 3138 	push	hl
   7102 CD AB 6C      [17] 3139 	call	_PrintCoin
   7105 F1            [10] 3140 	pop	af
   7106 18 41         [12] 3141 	jr	00125$
                           3142 ;src/main.c:910: case 96: { if (nObj[0] == 0) {DeleteObject(0); PrintCoin(1,0); break; }}
   7108                    3143 00113$:
   7108 3A 78 5F      [13] 3144 	ld	a, (#_nObj + 0)
   710B B7            [ 4] 3145 	or	a,a
   710C 20 0E         [12] 3146 	jr	NZ,00118$
   710E 6F            [ 4] 3147 	ld	l,a
   710F CD F3 6B      [17] 3148 	call	_DeleteObject
   7112 21 01 00      [10] 3149 	ld	hl, #0x0001
   7115 E5            [11] 3150 	push	hl
   7116 CD AB 6C      [17] 3151 	call	_PrintCoin
   7119 F1            [10] 3152 	pop	af
   711A 18 2D         [12] 3153 	jr	00125$
                           3154 ;src/main.c:913: case 104: { if (nObj[0] == 0) {DeleteObject(0); PrintCoin(2,0); break; }}
   711C                    3155 00118$:
   711C 3A 78 5F      [13] 3156 	ld	a, (#_nObj + 0)
   711F B7            [ 4] 3157 	or	a,a
   7120 20 0E         [12] 3158 	jr	NZ,00121$
   7122 6F            [ 4] 3159 	ld	l,a
   7123 CD F3 6B      [17] 3160 	call	_DeleteObject
   7126 21 02 00      [10] 3161 	ld	hl, #0x0002
   7129 E5            [11] 3162 	push	hl
   712A CD AB 6C      [17] 3163 	call	_PrintCoin
   712D F1            [10] 3164 	pop	af
   712E 18 19         [12] 3165 	jr	00125$
                           3166 ;src/main.c:916: case 328:	{ DeleteObject(0); }
   7130                    3167 00121$:
   7130 2E 00         [ 7] 3168 	ld	l, #0x00
   7132 CD F3 6B      [17] 3169 	call	_DeleteObject
                           3170 ;src/main.c:918: default:	{ PrintObject(nObj[0], objX[0], objY[0]); }			
   7135                    3171 00122$:
   7135 21 7C 5F      [10] 3172 	ld	hl, #_objY+0
   7138 56            [ 7] 3173 	ld	d, (hl)
   7139 3A 7A 5F      [13] 3174 	ld	a, (#_objX + 0)
   713C 21 78 5F      [10] 3175 	ld	hl, #_nObj + 0
   713F 46            [ 7] 3176 	ld	b, (hl)
   7140 5F            [ 4] 3177 	ld	e, a
   7141 D5            [11] 3178 	push	de
   7142 C5            [11] 3179 	push	bc
   7143 33            [ 6] 3180 	inc	sp
   7144 CD BD 6B      [17] 3181 	call	_PrintObject
   7147 F1            [10] 3182 	pop	af
   7148 33            [ 6] 3183 	inc	sp
                           3184 ;src/main.c:919: }
   7149                    3185 00125$:
                           3186 ;src/main.c:922: if (nObj[1] >= 0 && !ObjectCollision(1)) {
   7149 21 79 5F      [10] 3187 	ld	hl, #(_nObj + 0x0001) + 0
   714C CB 7E         [12] 3188 	bit	7, (hl)
   714E C0            [11] 3189 	ret	NZ
   714F 2E 01         [ 7] 3190 	ld	l, #0x01
   7151 CD 4A 6F      [17] 3191 	call	_ObjectCollision
   7154 7D            [ 4] 3192 	ld	a, l
   7155 B7            [ 4] 3193 	or	a, a
   7156 C0            [11] 3194 	ret	NZ
                           3195 ;src/main.c:923: switch(ctMainLoop) {
   7157 FD 21 F2 5E   [14] 3196 	ld	iy, #_ctMainLoop
   715B FD 7E 00      [19] 3197 	ld	a, 0 (iy)
   715E D6 9A         [ 7] 3198 	sub	a, #0x9a
   7160 FD B6 01      [19] 3199 	or	a, 1 (iy)
   7163 CA 77 72      [10] 3200 	jp	Z,00147$
   7166 FD 7E 00      [19] 3201 	ld	a, 0 (iy)
   7169 D6 A0         [ 7] 3202 	sub	a, #0xa0
   716B FD B6 01      [19] 3203 	or	a, 1 (iy)
   716E CA 19 72      [10] 3204 	jp	Z,00130$
   7171 FD 7E 00      [19] 3205 	ld	a, 0 (iy)
   7174 D6 A8         [ 7] 3206 	sub	a, #0xa8
   7176 FD B6 01      [19] 3207 	or	a, 1 (iy)
   7179 CA 0B 72      [10] 3208 	jp	Z,00128$
   717C FD 7E 00      [19] 3209 	ld	a, 0 (iy)
   717F D6 B0         [ 7] 3210 	sub	a, #0xb0
   7181 FD B6 01      [19] 3211 	or	a, 1 (iy)
   7184 CA 0B 72      [10] 3212 	jp	Z,00128$
   7187 FD 7E 00      [19] 3213 	ld	a, 0 (iy)
   718A D6 B8         [ 7] 3214 	sub	a, #0xb8
   718C FD B6 01      [19] 3215 	or	a, 1 (iy)
   718F CA 19 72      [10] 3216 	jp	Z,00130$
   7192 FD 7E 00      [19] 3217 	ld	a, 0 (iy)
   7195 D6 C0         [ 7] 3218 	sub	a, #0xc0
   7197 FD B6 01      [19] 3219 	or	a, 1 (iy)
   719A CA 27 72      [10] 3220 	jp	Z,00131$
                           3221 ;src/main.c:922: if (nObj[1] >= 0 && !ObjectCollision(1)) {
   719D 21 79 5F      [10] 3222 	ld	hl, #(_nObj + 0x0001) + 0
   71A0 4E            [ 7] 3223 	ld	c, (hl)
                           3224 ;src/main.c:923: switch(ctMainLoop) {
   71A1 FD 7E 00      [19] 3225 	ld	a, 0 (iy)
   71A4 D6 C8         [ 7] 3226 	sub	a, #0xc8
   71A6 FD B6 01      [19] 3227 	or	a, 1 (iy)
   71A9 CA 41 72      [10] 3228 	jp	Z,00134$
   71AC FD 7E 00      [19] 3229 	ld	a, 0 (iy)
   71AF D6 D0         [ 7] 3230 	sub	a, #0xd0
   71B1 FD B6 01      [19] 3231 	or	a, 1 (iy)
   71B4 CA 53 72      [10] 3232 	jp	Z,00139$
   71B7 FD 7E 00      [19] 3233 	ld	a, 0 (iy)
   71BA D6 D8         [ 7] 3234 	sub	a, #0xd8
   71BC FD B6 01      [19] 3235 	or	a, 1 (iy)
   71BF CA 65 72      [10] 3236 	jp	Z,00144$
   71C2 FD 7E 00      [19] 3237 	ld	a, 0 (iy)
   71C5 D6 E8         [ 7] 3238 	sub	a, #0xe8
   71C7 FD B6 01      [19] 3239 	or	a, 1 (iy)
   71CA 28 75         [12] 3240 	jr	Z,00134$
   71CC FD 7E 00      [19] 3241 	ld	a, 0 (iy)
   71CF D6 F0         [ 7] 3242 	sub	a, #0xf0
   71D1 FD B6 01      [19] 3243 	or	a, 1 (iy)
   71D4 CA 53 72      [10] 3244 	jp	Z,00139$
   71D7 FD 7E 00      [19] 3245 	ld	a, 0 (iy)
   71DA D6 F8         [ 7] 3246 	sub	a, #0xf8
   71DC FD B6 01      [19] 3247 	or	a, 1 (iy)
   71DF CA 65 72      [10] 3248 	jp	Z,00144$
   71E2 FD 7E 00      [19] 3249 	ld	a, 0 (iy)
   71E5 D6 08         [ 7] 3250 	sub	a, #0x08
   71E7 20 06         [12] 3251 	jr	NZ,00339$
   71E9 FD 7E 01      [19] 3252 	ld	a, 1 (iy)
   71EC 3D            [ 4] 3253 	dec	a
   71ED 28 52         [12] 3254 	jr	Z,00134$
   71EF                    3255 00339$:
   71EF FD 7E 00      [19] 3256 	ld	a, 0 (iy)
   71F2 D6 10         [ 7] 3257 	sub	a, #0x10
   71F4 20 06         [12] 3258 	jr	NZ,00340$
   71F6 FD 7E 01      [19] 3259 	ld	a, 1 (iy)
   71F9 3D            [ 4] 3260 	dec	a
   71FA 28 57         [12] 3261 	jr	Z,00139$
   71FC                    3262 00340$:
   71FC FD 7E 00      [19] 3263 	ld	a, 0 (iy)
   71FF D6 18         [ 7] 3264 	sub	a, #0x18
   7201 20 79         [12] 3265 	jr	NZ,00148$
   7203 FD 7E 01      [19] 3266 	ld	a, 1 (iy)
   7206 3D            [ 4] 3267 	dec	a
   7207 28 5C         [12] 3268 	jr	Z,00144$
   7209 18 71         [12] 3269 	jr	00148$
                           3270 ;src/main.c:926: case 168:	{ DeleteObject(1); PrintDust(0,1); break; }
   720B                    3271 00128$:
   720B 2E 01         [ 7] 3272 	ld	l, #0x01
   720D CD F3 6B      [17] 3273 	call	_DeleteObject
   7210 21 00 01      [10] 3274 	ld	hl, #0x0100
   7213 E5            [11] 3275 	push	hl
   7214 CD 67 6C      [17] 3276 	call	_PrintDust
   7217 F1            [10] 3277 	pop	af
   7218 C9            [10] 3278 	ret
                           3279 ;src/main.c:929: case 160:	{ DeleteObject(1); PrintDust(1,1); break; }
   7219                    3280 00130$:
   7219 2E 01         [ 7] 3281 	ld	l, #0x01
   721B CD F3 6B      [17] 3282 	call	_DeleteObject
   721E 21 01 01      [10] 3283 	ld	hl, #0x0101
   7221 E5            [11] 3284 	push	hl
   7222 CD 67 6C      [17] 3285 	call	_PrintDust
   7225 F1            [10] 3286 	pop	af
   7226 C9            [10] 3287 	ret
                           3288 ;src/main.c:931: case 192:	{ DeleteObject(1); PrintObject(nObj[1], objX[1], objY[1]); break; }
   7227                    3289 00131$:
   7227 2E 01         [ 7] 3290 	ld	l, #0x01
   7229 CD F3 6B      [17] 3291 	call	_DeleteObject
   722C 21 7D 5F      [10] 3292 	ld	hl, #_objY+1
   722F 56            [ 7] 3293 	ld	d, (hl)
   7230 3A 7B 5F      [13] 3294 	ld	a, (#(_objX + 0x0001) + 0)
   7233 21 79 5F      [10] 3295 	ld	hl, #(_nObj + 0x0001) + 0
   7236 46            [ 7] 3296 	ld	b, (hl)
   7237 5F            [ 4] 3297 	ld	e, a
   7238 D5            [11] 3298 	push	de
   7239 C5            [11] 3299 	push	bc
   723A 33            [ 6] 3300 	inc	sp
   723B CD BD 6B      [17] 3301 	call	_PrintObject
   723E F1            [10] 3302 	pop	af
   723F 33            [ 6] 3303 	inc	sp
   7240 C9            [10] 3304 	ret
                           3305 ;src/main.c:936: case 264: { if (nObj[1] == 0) {DeleteObject(1); PrintCoin(0,1); break; }}
   7241                    3306 00134$:
   7241 79            [ 4] 3307 	ld	a, c
   7242 B7            [ 4] 3308 	or	a, a
   7243 20 0E         [12] 3309 	jr	NZ,00139$
   7245 2E 01         [ 7] 3310 	ld	l, #0x01
   7247 CD F3 6B      [17] 3311 	call	_DeleteObject
   724A 21 00 01      [10] 3312 	ld	hl, #0x0100
   724D E5            [11] 3313 	push	hl
   724E CD AB 6C      [17] 3314 	call	_PrintCoin
   7251 F1            [10] 3315 	pop	af
   7252 C9            [10] 3316 	ret
                           3317 ;src/main.c:939: case 272: { if (nObj[1] == 0) {DeleteObject(1); PrintCoin(1,1); break; }}
   7253                    3318 00139$:
   7253 79            [ 4] 3319 	ld	a, c
   7254 B7            [ 4] 3320 	or	a, a
   7255 20 0E         [12] 3321 	jr	NZ,00144$
   7257 2E 01         [ 7] 3322 	ld	l, #0x01
   7259 CD F3 6B      [17] 3323 	call	_DeleteObject
   725C 21 01 01      [10] 3324 	ld	hl, #0x0101
   725F E5            [11] 3325 	push	hl
   7260 CD AB 6C      [17] 3326 	call	_PrintCoin
   7263 F1            [10] 3327 	pop	af
   7264 C9            [10] 3328 	ret
                           3329 ;src/main.c:942: case 280: { if (nObj[1] == 0) {DeleteObject(1); PrintCoin(2,1); break; }}
   7265                    3330 00144$:
   7265 79            [ 4] 3331 	ld	a, c
   7266 B7            [ 4] 3332 	or	a, a
   7267 20 0E         [12] 3333 	jr	NZ,00147$
   7269 2E 01         [ 7] 3334 	ld	l, #0x01
   726B CD F3 6B      [17] 3335 	call	_DeleteObject
   726E 21 02 01      [10] 3336 	ld	hl, #0x0102
   7271 E5            [11] 3337 	push	hl
   7272 CD AB 6C      [17] 3338 	call	_PrintCoin
   7275 F1            [10] 3339 	pop	af
   7276 C9            [10] 3340 	ret
                           3341 ;src/main.c:945: case 154:	{ DeleteObject(1); }
   7277                    3342 00147$:
   7277 2E 01         [ 7] 3343 	ld	l, #0x01
   7279 CD F3 6B      [17] 3344 	call	_DeleteObject
                           3345 ;src/main.c:947: default:	{ PrintObject(nObj[1], objX[1], objY[1]); }			
   727C                    3346 00148$:
   727C 21 7D 5F      [10] 3347 	ld	hl, #_objY+1
   727F 56            [ 7] 3348 	ld	d, (hl)
   7280 3A 7B 5F      [13] 3349 	ld	a, (#(_objX + 0x0001) + 0)
   7283 21 79 5F      [10] 3350 	ld	hl, #(_nObj + 0x0001) + 0
   7286 46            [ 7] 3351 	ld	b, (hl)
   7287 5F            [ 4] 3352 	ld	e, a
   7288 D5            [11] 3353 	push	de
   7289 C5            [11] 3354 	push	bc
   728A 33            [ 6] 3355 	inc	sp
   728B CD BD 6B      [17] 3356 	call	_PrintObject
   728E F1            [10] 3357 	pop	af
   728F 33            [ 6] 3358 	inc	sp
                           3359 ;src/main.c:948: }
   7290 C9            [10] 3360 	ret
                           3361 ;src/main.c:953: void SetObject(u8 index) __z88dk_fastcall {
                           3362 ;	---------------------------------
                           3363 ; Function SetObject
                           3364 ; ---------------------------------
   7291                    3365 _SetObject::
   7291 DD E5         [15] 3366 	push	ix
   7293 DD 21 00 00   [14] 3367 	ld	ix,#0
   7297 DD 39         [15] 3368 	add	ix,sp
   7299 F5            [11] 3369 	push	af
   729A F5            [11] 3370 	push	af
   729B 3B            [ 6] 3371 	dec	sp
                           3372 ;src/main.c:956: if (nObj[index] >= 0) DeleteObject(index); 
   729C DD 75 FF      [19] 3373 	ld	-1 (ix), l
   729F 7D            [ 4] 3374 	ld	a, l
   72A0 C6 78         [ 7] 3375 	add	a, #<(_nObj)
   72A2 4F            [ 4] 3376 	ld	c, a
   72A3 3E 00         [ 7] 3377 	ld	a, #0x00
   72A5 CE 5F         [ 7] 3378 	adc	a, #>(_nObj)
   72A7 47            [ 4] 3379 	ld	b, a
   72A8 0A            [ 7] 3380 	ld	a, (bc)
   72A9 CB 7F         [ 8] 3381 	bit	7,a
   72AB 20 08         [12] 3382 	jr	NZ,00102$
   72AD C5            [11] 3383 	push	bc
   72AE DD 6E FF      [19] 3384 	ld	l, -1 (ix)
   72B1 CD F3 6B      [17] 3385 	call	_DeleteObject
   72B4 C1            [10] 3386 	pop	bc
   72B5                    3387 00102$:
                           3388 ;src/main.c:958: nObj[index] = cpct_getRandom_lcg_u8(0) / 11;	// obj = 0 a 22
   72B5 C5            [11] 3389 	push	bc
   72B6 2E 00         [ 7] 3390 	ld	l, #0x00
   72B8 CD D4 5B      [17] 3391 	call	_cpct_getRandom_lcg_u8
   72BB 55            [ 4] 3392 	ld	d, l
   72BC 3E 0B         [ 7] 3393 	ld	a, #0x0b
   72BE F5            [11] 3394 	push	af
   72BF 33            [ 6] 3395 	inc	sp
   72C0 D5            [11] 3396 	push	de
   72C1 33            [ 6] 3397 	inc	sp
   72C2 CD 71 51      [17] 3398 	call	__divuchar
   72C5 F1            [10] 3399 	pop	af
   72C6 7D            [ 4] 3400 	ld	a, l
   72C7 C1            [10] 3401 	pop	bc
   72C8 02            [ 7] 3402 	ld	(bc), a
                           3403 ;src/main.c:960: do {
   72C9                    3404 00107$:
                           3405 ;src/main.c:961: objX[index] = 4 + (cpct_getRandom_lcg_u8(0)*10/36); 	// x = 4 a 74
   72C9 3E 7A         [ 7] 3406 	ld	a, #<(_objX)
   72CB DD 86 FF      [19] 3407 	add	a, -1 (ix)
   72CE DD 77 FD      [19] 3408 	ld	-3 (ix), a
   72D1 3E 5F         [ 7] 3409 	ld	a, #>(_objX)
   72D3 CE 00         [ 7] 3410 	adc	a, #0x00
   72D5 DD 77 FE      [19] 3411 	ld	-2 (ix), a
   72D8 C5            [11] 3412 	push	bc
   72D9 2E 00         [ 7] 3413 	ld	l, #0x00
   72DB CD D4 5B      [17] 3414 	call	_cpct_getRandom_lcg_u8
   72DE C1            [10] 3415 	pop	bc
   72DF 5D            [ 4] 3416 	ld	e,l
   72E0 16 00         [ 7] 3417 	ld	d,#0x00
   72E2 6B            [ 4] 3418 	ld	l, e
   72E3 62            [ 4] 3419 	ld	h, d
   72E4 29            [11] 3420 	add	hl, hl
   72E5 29            [11] 3421 	add	hl, hl
   72E6 19            [11] 3422 	add	hl, de
   72E7 29            [11] 3423 	add	hl, hl
   72E8 C5            [11] 3424 	push	bc
   72E9 11 24 00      [10] 3425 	ld	de, #0x0024
   72EC D5            [11] 3426 	push	de
   72ED E5            [11] 3427 	push	hl
   72EE CD 78 5E      [17] 3428 	call	__divsint
   72F1 F1            [10] 3429 	pop	af
   72F2 F1            [10] 3430 	pop	af
   72F3 C1            [10] 3431 	pop	bc
   72F4 7D            [ 4] 3432 	ld	a, l
   72F5 C6 04         [ 7] 3433 	add	a, #0x04
   72F7 DD 6E FD      [19] 3434 	ld	l,-3 (ix)
   72FA DD 66 FE      [19] 3435 	ld	h,-2 (ix)
   72FD 77            [ 7] 3436 	ld	(hl), a
                           3437 ;src/main.c:962: objY[index] = 40 + (cpct_getRandom_lcg_u8(0)*10/17);	// y = 40 a 190	
   72FE 3E 7C         [ 7] 3438 	ld	a, #<(_objY)
   7300 DD 86 FF      [19] 3439 	add	a, -1 (ix)
   7303 DD 77 FB      [19] 3440 	ld	-5 (ix), a
   7306 3E 5F         [ 7] 3441 	ld	a, #>(_objY)
   7308 CE 00         [ 7] 3442 	adc	a, #0x00
   730A DD 77 FC      [19] 3443 	ld	-4 (ix), a
   730D C5            [11] 3444 	push	bc
   730E 2E 00         [ 7] 3445 	ld	l, #0x00
   7310 CD D4 5B      [17] 3446 	call	_cpct_getRandom_lcg_u8
   7313 C1            [10] 3447 	pop	bc
   7314 5D            [ 4] 3448 	ld	e,l
   7315 16 00         [ 7] 3449 	ld	d,#0x00
   7317 6B            [ 4] 3450 	ld	l, e
   7318 62            [ 4] 3451 	ld	h, d
   7319 29            [11] 3452 	add	hl, hl
   731A 29            [11] 3453 	add	hl, hl
   731B 19            [11] 3454 	add	hl, de
   731C 29            [11] 3455 	add	hl, hl
   731D C5            [11] 3456 	push	bc
   731E 11 11 00      [10] 3457 	ld	de, #0x0011
   7321 D5            [11] 3458 	push	de
   7322 E5            [11] 3459 	push	hl
   7323 CD 78 5E      [17] 3460 	call	__divsint
   7326 F1            [10] 3461 	pop	af
   7327 F1            [10] 3462 	pop	af
   7328 C1            [10] 3463 	pop	bc
   7329 7D            [ 4] 3464 	ld	a, l
   732A C6 28         [ 7] 3465 	add	a, #0x28
   732C E1            [10] 3466 	pop	hl
   732D E5            [11] 3467 	push	hl
   732E 77            [ 7] 3468 	ld	(hl), a
                           3469 ;src/main.c:963: tile = *GetTileNum(objX[index]+2, objY[index]+8);	
   732F E1            [10] 3470 	pop	hl
   7330 E5            [11] 3471 	push	hl
   7331 7E            [ 7] 3472 	ld	a, (hl)
   7332 C6 08         [ 7] 3473 	add	a, #0x08
   7334 57            [ 4] 3474 	ld	d, a
   7335 DD 6E FD      [19] 3475 	ld	l,-3 (ix)
   7338 DD 66 FE      [19] 3476 	ld	h,-2 (ix)
   733B 7E            [ 7] 3477 	ld	a, (hl)
   733C C6 02         [ 7] 3478 	add	a, #0x02
   733E C5            [11] 3479 	push	bc
   733F 5F            [ 4] 3480 	ld	e, a
   7340 D5            [11] 3481 	push	de
   7341 CD CB 61      [17] 3482 	call	_GetTileNum
   7344 F1            [10] 3483 	pop	af
   7345 C1            [10] 3484 	pop	bc
   7346 5E            [ 7] 3485 	ld	e, (hl)
                           3486 ;src/main.c:966: while (tile > 34 || tile == TILESET_DOOR || // tile is a blocker
   7347 3E 22         [ 7] 3487 	ld	a, #0x22
   7349 93            [ 4] 3488 	sub	a, e
   734A DA C9 72      [10] 3489 	jp	C, 00107$
   734D 7B            [ 4] 3490 	ld	a, e
   734E D6 0E         [ 7] 3491 	sub	a, #0x0e
   7350 CA C9 72      [10] 3492 	jp	Z,00107$
                           3493 ;src/main.c:967: Abs(objX[0] - objX[1]) < 12 || // near the other object
   7353 21 7A 5F      [10] 3494 	ld	hl, #_objX + 0
   7356 5E            [ 7] 3495 	ld	e, (hl)
   7357 16 00         [ 7] 3496 	ld	d, #0x00
   7359 21 7B 5F      [10] 3497 	ld	hl, #_objX + 1
   735C 6E            [ 7] 3498 	ld	l, (hl)
   735D 26 00         [ 7] 3499 	ld	h, #0x00
   735F 7B            [ 4] 3500 	ld	a, e
   7360 95            [ 4] 3501 	sub	a, l
   7361 6F            [ 4] 3502 	ld	l, a
   7362 7A            [ 4] 3503 	ld	a, d
   7363 9C            [ 4] 3504 	sbc	a, h
   7364 67            [ 4] 3505 	ld	h, a
   7365 C5            [11] 3506 	push	bc
   7366 CD 83 5F      [17] 3507 	call	_Abs
   7369 C1            [10] 3508 	pop	bc
   736A 11 0C 80      [10] 3509 	ld	de, #0x800c
   736D 29            [11] 3510 	add	hl, hl
   736E 3F            [ 4] 3511 	ccf
   736F CB 1C         [ 8] 3512 	rr	h
   7371 CB 1D         [ 8] 3513 	rr	l
   7373 ED 52         [15] 3514 	sbc	hl, de
   7375 DA C9 72      [10] 3515 	jp	C, 00107$
                           3516 ;src/main.c:968: SpriteCollision(objX[index], objY[index], &spr[0], 12) || // near player 1
   7378 E1            [10] 3517 	pop	hl
   7379 E5            [11] 3518 	push	hl
   737A 56            [ 7] 3519 	ld	d, (hl)
   737B DD 6E FD      [19] 3520 	ld	l,-3 (ix)
   737E DD 66 FE      [19] 3521 	ld	h,-2 (ix)
   7381 5E            [ 7] 3522 	ld	e, (hl)
   7382 C5            [11] 3523 	push	bc
   7383 3E 0C         [ 7] 3524 	ld	a, #0x0c
   7385 F5            [11] 3525 	push	af
   7386 33            [ 6] 3526 	inc	sp
   7387 21 0A 5F      [10] 3527 	ld	hl, #_spr
   738A E5            [11] 3528 	push	hl
   738B D5            [11] 3529 	push	de
   738C CD 66 7B      [17] 3530 	call	_SpriteCollision
   738F F1            [10] 3531 	pop	af
   7390 F1            [10] 3532 	pop	af
   7391 33            [ 6] 3533 	inc	sp
   7392 C1            [10] 3534 	pop	bc
   7393 7D            [ 4] 3535 	ld	a, l
   7394 B7            [ 4] 3536 	or	a, a
   7395 C2 C9 72      [10] 3537 	jp	NZ, 00107$
                           3538 ;src/main.c:969: SpriteCollision(objX[index], objY[index], &spr[1], 12)); // near player 2
   7398 E1            [10] 3539 	pop	hl
   7399 E5            [11] 3540 	push	hl
   739A 56            [ 7] 3541 	ld	d, (hl)
   739B DD 6E FD      [19] 3542 	ld	l,-3 (ix)
   739E DD 66 FE      [19] 3543 	ld	h,-2 (ix)
   73A1 5E            [ 7] 3544 	ld	e, (hl)
   73A2 C5            [11] 3545 	push	bc
   73A3 3E 0C         [ 7] 3546 	ld	a, #0x0c
   73A5 F5            [11] 3547 	push	af
   73A6 33            [ 6] 3548 	inc	sp
   73A7 21 19 5F      [10] 3549 	ld	hl, #(_spr + 0x000f)
   73AA E5            [11] 3550 	push	hl
   73AB D5            [11] 3551 	push	de
   73AC CD 66 7B      [17] 3552 	call	_SpriteCollision
   73AF F1            [10] 3553 	pop	af
   73B0 F1            [10] 3554 	pop	af
   73B1 33            [ 6] 3555 	inc	sp
   73B2 C1            [10] 3556 	pop	bc
   73B3 7D            [ 4] 3557 	ld	a, l
   73B4 B7            [ 4] 3558 	or	a, a
   73B5 C2 C9 72      [10] 3559 	jp	NZ, 00107$
                           3560 ;src/main.c:956: if (nObj[index] >= 0) DeleteObject(index); 
   73B8 0A            [ 7] 3561 	ld	a, (bc)
                           3562 ;src/main.c:971: if (nObj[index] == 22) nObj[index] = 1; // slightly more chance of showing 5 coins
   73B9 5F            [ 4] 3563 	ld	e,a
   73BA D6 16         [ 7] 3564 	sub	a, #0x16
   73BC 20 05         [12] 3565 	jr	NZ,00116$
   73BE 3E 01         [ 7] 3566 	ld	a, #0x01
   73C0 02            [ 7] 3567 	ld	(bc), a
   73C1 18 17         [12] 3568 	jr	00117$
   73C3                    3569 00116$:
                           3570 ;src/main.c:972: else if (nObj[index] == 21) nObj[index] = 3; // slightly more chance of powerUps showing up
   73C3 7B            [ 4] 3571 	ld	a, e
   73C4 D6 15         [ 7] 3572 	sub	a, #0x15
   73C6 20 05         [12] 3573 	jr	NZ,00113$
   73C8 3E 03         [ 7] 3574 	ld	a, #0x03
   73CA 02            [ 7] 3575 	ld	(bc), a
   73CB 18 0D         [12] 3576 	jr	00117$
   73CD                    3577 00113$:
                           3578 ;src/main.c:973: else if (nObj[index] > 3) nObj[index] = 0; // only PowerUps and coins, others are purchased
   73CD 3E 03         [ 7] 3579 	ld	a, #0x03
   73CF 93            [ 4] 3580 	sub	a, e
   73D0 E2 D5 73      [10] 3581 	jp	PO, 00165$
   73D3 EE 80         [ 7] 3582 	xor	a, #0x80
   73D5                    3583 00165$:
   73D5 F2 DA 73      [10] 3584 	jp	P, 00117$
   73D8 AF            [ 4] 3585 	xor	a, a
   73D9 02            [ 7] 3586 	ld	(bc), a
   73DA                    3587 00117$:
                           3588 ;src/main.c:975: cpct_akp_SFXPlay(1, 12, 65, 0, 0, AY_CHANNEL_A); // new item
   73DA 3E 01         [ 7] 3589 	ld	a, #0x01
   73DC F5            [11] 3590 	push	af
   73DD 33            [ 6] 3591 	inc	sp
   73DE 21 00 00      [10] 3592 	ld	hl, #0x0000
   73E1 E5            [11] 3593 	push	hl
   73E2 2E 41         [ 7] 3594 	ld	l, #0x41
   73E4 E5            [11] 3595 	push	hl
   73E5 21 01 0C      [10] 3596 	ld	hl, #0x0c01
   73E8 E5            [11] 3597 	push	hl
   73E9 CD EF 59      [17] 3598 	call	_cpct_akp_SFXPlay
   73EC 21 07 00      [10] 3599 	ld	hl, #7
   73EF 39            [11] 3600 	add	hl, sp
   73F0 F9            [ 6] 3601 	ld	sp, hl
   73F1 DD F9         [10] 3602 	ld	sp, ix
   73F3 DD E1         [14] 3603 	pop	ix
   73F5 C9            [10] 3604 	ret
                           3605 ;src/main.c:981: void AddObjectToScoreboard(u8 player) __z88dk_fastcall {
                           3606 ;	---------------------------------
                           3607 ; Function AddObjectToScoreboard
                           3608 ; ---------------------------------
   73F6                    3609 _AddObjectToScoreboard::
   73F6 4D            [ 4] 3610 	ld	c, l
                           3611 ;src/main.c:982: u8 x = spr[player].objNum_mov * 3 + 7;
   73F7 11 0A 5F      [10] 3612 	ld	de, #_spr+0
   73FA 06 00         [ 7] 3613 	ld	b,#0x00
   73FC 69            [ 4] 3614 	ld	l, c
   73FD 60            [ 4] 3615 	ld	h, b
   73FE 29            [11] 3616 	add	hl, hl
   73FF 09            [11] 3617 	add	hl, bc
   7400 29            [11] 3618 	add	hl, hl
   7401 09            [11] 3619 	add	hl, bc
   7402 29            [11] 3620 	add	hl, hl
   7403 09            [11] 3621 	add	hl, bc
   7404 19            [11] 3622 	add	hl, de
   7405 11 0C 00      [10] 3623 	ld	de, #0x000c
   7408 19            [11] 3624 	add	hl, de
   7409 5E            [ 7] 3625 	ld	e, (hl)
   740A 7B            [ 4] 3626 	ld	a, e
   740B 87            [ 4] 3627 	add	a, a
   740C 83            [ 4] 3628 	add	a, e
   740D C6 07         [ 7] 3629 	add	a, #0x07
   740F 47            [ 4] 3630 	ld	b, a
                           3631 ;src/main.c:983: if (player == 1) x += 39;		
   7410 0D            [ 4] 3632 	dec	c
   7411 20 04         [12] 3633 	jr	NZ,00102$
   7413 78            [ 4] 3634 	ld	a, b
   7414 C6 27         [ 7] 3635 	add	a, #0x27
   7416 47            [ 4] 3636 	ld	b, a
   7417                    3637 00102$:
                           3638 ;src/main.c:984: PrintObject(nPObj, x, 16);
   7417 3E 10         [ 7] 3639 	ld	a, #0x10
   7419 F5            [11] 3640 	push	af
   741A 33            [ 6] 3641 	inc	sp
   741B C5            [11] 3642 	push	bc
   741C 33            [ 6] 3643 	inc	sp
   741D 3A 7E 5F      [13] 3644 	ld	a, (_nPObj)
   7420 F5            [11] 3645 	push	af
   7421 33            [ 6] 3646 	inc	sp
   7422 CD BD 6B      [17] 3647 	call	_PrintObject
   7425 F1            [10] 3648 	pop	af
   7426 33            [ 6] 3649 	inc	sp
   7427 C9            [10] 3650 	ret
                           3651 ;src/main.c:989: void PrintKey() {
                           3652 ;	---------------------------------
                           3653 ; Function PrintKey
                           3654 ; ---------------------------------
   7428                    3655 _PrintKey::
                           3656 ;src/main.c:992: while (i<=4) {
   7428 0E 00         [ 7] 3657 	ld	c, #0x00
   742A 16 3C         [ 7] 3658 	ld	d, #0x3c
   742C                    3659 00101$:
   742C 3E 04         [ 7] 3660 	ld	a, #0x04
   742E 91            [ 4] 3661 	sub	a, c
   742F D8            [11] 3662 	ret	C
                           3663 ;src/main.c:993: PrintObject(doorKey[i], x, 16);
   7430 21 DF 5E      [10] 3664 	ld	hl, #_doorKey
   7433 06 00         [ 7] 3665 	ld	b, #0x00
   7435 09            [11] 3666 	add	hl, bc
   7436 46            [ 7] 3667 	ld	b, (hl)
   7437 C5            [11] 3668 	push	bc
   7438 D5            [11] 3669 	push	de
   7439 3E 10         [ 7] 3670 	ld	a, #0x10
   743B F5            [11] 3671 	push	af
   743C 33            [ 6] 3672 	inc	sp
   743D 58            [ 4] 3673 	ld	e, b
   743E D5            [11] 3674 	push	de
   743F CD BD 6B      [17] 3675 	call	_PrintObject
   7442 F1            [10] 3676 	pop	af
   7443 33            [ 6] 3677 	inc	sp
   7444 D1            [10] 3678 	pop	de
   7445 C1            [10] 3679 	pop	bc
                           3680 ;src/main.c:994: i++;
   7446 0C            [ 4] 3681 	inc	c
                           3682 ;src/main.c:995: x+=3;
   7447 14            [ 4] 3683 	inc	d
   7448 14            [ 4] 3684 	inc	d
   7449 14            [ 4] 3685 	inc	d
   744A 18 E0         [12] 3686 	jr	00101$
                           3687 ;src/main.c:1001: u8 CompareKeys() {
                           3688 ;	---------------------------------
                           3689 ; Function CompareKeys
                           3690 ; ---------------------------------
   744C                    3691 _CompareKeys::
                           3692 ;src/main.c:1002: if (doorKey[0] == playerKey[0] && 
   744C 21 DF 5E      [10] 3693 	ld	hl, #_doorKey + 0
   744F 4E            [ 7] 3694 	ld	c, (hl)
   7450 3A E4 5E      [13] 3695 	ld	a, (#_playerKey + 0)
   7453 91            [ 4] 3696 	sub	a, c
   7454 20 2B         [12] 3697 	jr	NZ,00102$
                           3698 ;src/main.c:1003: doorKey[1] == playerKey[1] &&
   7456 21 E0 5E      [10] 3699 	ld	hl, #_doorKey + 1
   7459 4E            [ 7] 3700 	ld	c, (hl)
   745A 3A E5 5E      [13] 3701 	ld	a, (#_playerKey + 1)
   745D 91            [ 4] 3702 	sub	a, c
   745E 20 21         [12] 3703 	jr	NZ,00102$
                           3704 ;src/main.c:1004: doorKey[2] == playerKey[2] && 
   7460 21 E1 5E      [10] 3705 	ld	hl, #_doorKey + 2
   7463 4E            [ 7] 3706 	ld	c, (hl)
   7464 3A E6 5E      [13] 3707 	ld	a, (#_playerKey + 2)
   7467 91            [ 4] 3708 	sub	a, c
   7468 20 17         [12] 3709 	jr	NZ,00102$
                           3710 ;src/main.c:1005: doorKey[3] == playerKey[3] &&
   746A 21 E2 5E      [10] 3711 	ld	hl, #_doorKey + 3
   746D 4E            [ 7] 3712 	ld	c, (hl)
   746E 3A E7 5E      [13] 3713 	ld	a, (#_playerKey + 3)
   7471 91            [ 4] 3714 	sub	a, c
   7472 20 0D         [12] 3715 	jr	NZ,00102$
                           3716 ;src/main.c:1006: doorKey[4] == playerKey[4]) 
   7474 21 E3 5E      [10] 3717 	ld	hl, #_doorKey + 4
   7477 4E            [ 7] 3718 	ld	c, (hl)
   7478 3A E8 5E      [13] 3719 	ld	a, (#_playerKey + 4)
   747B 91            [ 4] 3720 	sub	a, c
   747C 20 03         [12] 3721 	jr	NZ,00102$
                           3722 ;src/main.c:1007: return 1;
   747E 2E 01         [ 7] 3723 	ld	l, #0x01
   7480 C9            [10] 3724 	ret
   7481                    3725 00102$:
                           3726 ;src/main.c:1009: return 0;
   7481 2E 00         [ 7] 3727 	ld	l, #0x00
   7483 C9            [10] 3728 	ret
                           3729 ;src/main.c:1014: void CheckActiveTile(u8 player) {	
                           3730 ;	---------------------------------
                           3731 ; Function CheckActiveTile
                           3732 ; ---------------------------------
   7484                    3733 _CheckActiveTile::
   7484 DD E5         [15] 3734 	push	ix
   7486 DD 21 00 00   [14] 3735 	ld	ix,#0
   748A DD 39         [15] 3736 	add	ix,sp
   748C 21 FA FF      [10] 3737 	ld	hl, #-6
   748F 39            [11] 3738 	add	hl, sp
   7490 F9            [ 6] 3739 	ld	sp, hl
                           3740 ;src/main.c:1015: u8 currentTile = *GetTileNum(spr[player].x+3, spr[player].y+8);	
   7491 DD 4E 04      [19] 3741 	ld	c,4 (ix)
   7494 06 00         [ 7] 3742 	ld	b,#0x00
   7496 69            [ 4] 3743 	ld	l, c
   7497 60            [ 4] 3744 	ld	h, b
   7498 29            [11] 3745 	add	hl, hl
   7499 09            [11] 3746 	add	hl, bc
   749A 29            [11] 3747 	add	hl, hl
   749B 09            [11] 3748 	add	hl, bc
   749C 29            [11] 3749 	add	hl, hl
   749D 09            [11] 3750 	add	hl, bc
   749E 01 0A 5F      [10] 3751 	ld	bc,#_spr
   74A1 09            [11] 3752 	add	hl,bc
   74A2 4D            [ 4] 3753 	ld	c,l
   74A3 44            [ 4] 3754 	ld	b,h
   74A4 23            [ 6] 3755 	inc	hl
   74A5 23            [ 6] 3756 	inc	hl
   74A6 23            [ 6] 3757 	inc	hl
   74A7 7E            [ 7] 3758 	ld	a, (hl)
   74A8 C6 08         [ 7] 3759 	add	a, #0x08
   74AA 57            [ 4] 3760 	ld	d, a
   74AB 69            [ 4] 3761 	ld	l, c
   74AC 60            [ 4] 3762 	ld	h, b
   74AD 23            [ 6] 3763 	inc	hl
   74AE 23            [ 6] 3764 	inc	hl
   74AF 7E            [ 7] 3765 	ld	a, (hl)
   74B0 C6 03         [ 7] 3766 	add	a, #0x03
   74B2 C5            [11] 3767 	push	bc
   74B3 5F            [ 4] 3768 	ld	e, a
   74B4 D5            [11] 3769 	push	de
   74B5 CD CB 61      [17] 3770 	call	_GetTileNum
   74B8 F1            [10] 3771 	pop	af
   74B9 C1            [10] 3772 	pop	bc
   74BA 7E            [ 7] 3773 	ld	a, (hl)
   74BB DD 77 FB      [19] 3774 	ld	-5 (ix), a
                           3775 ;src/main.c:1016: u8 i = 0;
   74BE DD 36 FA 00   [19] 3776 	ld	-6 (ix), #0x00
                           3777 ;src/main.c:1021: while (coinScore[player] > 0 && spr[player].objNum_mov < 5) {
   74C2 21 0C 00      [10] 3778 	ld	hl, #0x000c
   74C5 09            [11] 3779 	add	hl,bc
   74C6 DD 75 FC      [19] 3780 	ld	-4 (ix), l
   74C9 DD 74 FD      [19] 3781 	ld	-3 (ix), h
                           3782 ;src/main.c:1019: if (currentTile >= TILESET_STORE && currentTile <= TILESET_STORE + 5) {
   74CC DD 7E FB      [19] 3783 	ld	a, -5 (ix)
   74CF D6 27         [ 7] 3784 	sub	a, #0x27
   74D1 DA BA 75      [10] 3785 	jp	C, 00135$
   74D4 3E 2C         [ 7] 3786 	ld	a, #0x2c
   74D6 DD 96 FB      [19] 3787 	sub	a, -5 (ix)
   74D9 DA BA 75      [10] 3788 	jp	C, 00135$
                           3789 ;src/main.c:1021: while (coinScore[player] > 0 && spr[player].objNum_mov < 5) {
   74DC                    3790 00107$:
   74DC 3E DD         [ 7] 3791 	ld	a, #<(_coinScore)
   74DE DD 86 04      [19] 3792 	add	a, 4 (ix)
   74E1 DD 77 FE      [19] 3793 	ld	-2 (ix), a
   74E4 3E 5E         [ 7] 3794 	ld	a, #>(_coinScore)
   74E6 CE 00         [ 7] 3795 	adc	a, #0x00
   74E8 DD 77 FF      [19] 3796 	ld	-1 (ix), a
   74EB DD 6E FE      [19] 3797 	ld	l,-2 (ix)
   74EE DD 66 FF      [19] 3798 	ld	h,-1 (ix)
   74F1 7E            [ 7] 3799 	ld	a, (hl)
   74F2 B7            [ 4] 3800 	or	a, a
   74F3 CA E5 76      [10] 3801 	jp	Z, 00138$
   74F6 DD 6E FC      [19] 3802 	ld	l,-4 (ix)
   74F9 DD 66 FD      [19] 3803 	ld	h,-3 (ix)
   74FC 7E            [ 7] 3804 	ld	a, (hl)
   74FD D6 05         [ 7] 3805 	sub	a, #0x05
   74FF D2 E5 76      [10] 3806 	jp	NC, 00138$
                           3807 ;src/main.c:1022: cpct_akp_SFXPlay (7, 12, 65, 0, 0, AY_CHANNEL_A);
   7502 3E 01         [ 7] 3808 	ld	a, #0x01
   7504 F5            [11] 3809 	push	af
   7505 33            [ 6] 3810 	inc	sp
   7506 21 00 00      [10] 3811 	ld	hl, #0x0000
   7509 E5            [11] 3812 	push	hl
   750A 2E 41         [ 7] 3813 	ld	l, #0x41
   750C E5            [11] 3814 	push	hl
   750D 21 07 0C      [10] 3815 	ld	hl, #0x0c07
   7510 E5            [11] 3816 	push	hl
   7511 CD EF 59      [17] 3817 	call	_cpct_akp_SFXPlay
   7514 21 07 00      [10] 3818 	ld	hl, #7
   7517 39            [11] 3819 	add	hl, sp
   7518 F9            [ 6] 3820 	ld	sp, hl
                           3821 ;src/main.c:1023: if (coinScore[player] < 13) // no money left
   7519 DD 6E FE      [19] 3822 	ld	l,-2 (ix)
   751C DD 66 FF      [19] 3823 	ld	h,-1 (ix)
   751F 7E            [ 7] 3824 	ld	a, (hl)
   7520 FE 0D         [ 7] 3825 	cp	a, #0x0d
   7522 30 08         [12] 3826 	jr	NC,00102$
                           3827 ;src/main.c:1024: nPObj = coinScore[player] + 3; // assign the corresponding object to the available money
   7524 21 7E 5F      [10] 3828 	ld	hl, #_nPObj
   7527 C6 03         [ 7] 3829 	add	a, #0x03
   7529 77            [ 7] 3830 	ld	(hl), a
   752A 18 05         [12] 3831 	jr	00103$
   752C                    3832 00102$:
                           3833 ;src/main.c:1026: nPObj = 15; // assign the most expensive object
   752C 21 7E 5F      [10] 3834 	ld	hl,#_nPObj + 0
   752F 36 0F         [10] 3835 	ld	(hl), #0x0f
   7531                    3836 00103$:
                           3837 ;src/main.c:1027: spr[player].objNum_mov++; // increases the number of objects the player carries
   7531 DD 6E FC      [19] 3838 	ld	l,-4 (ix)
   7534 DD 66 FD      [19] 3839 	ld	h,-3 (ix)
   7537 4E            [ 7] 3840 	ld	c, (hl)
   7538 0C            [ 4] 3841 	inc	c
   7539 DD 6E FC      [19] 3842 	ld	l,-4 (ix)
   753C DD 66 FD      [19] 3843 	ld	h,-3 (ix)
   753F 71            [ 7] 3844 	ld	(hl), c
                           3845 ;src/main.c:1028: potScore[player] += coinScore[player]; // increase the potion score
   7540 3E DB         [ 7] 3846 	ld	a, #<(_potScore)
   7542 DD 86 04      [19] 3847 	add	a, 4 (ix)
   7545 4F            [ 4] 3848 	ld	c, a
   7546 3E 5E         [ 7] 3849 	ld	a, #>(_potScore)
   7548 CE 00         [ 7] 3850 	adc	a, #0x00
   754A 47            [ 4] 3851 	ld	b, a
   754B 0A            [ 7] 3852 	ld	a, (bc)
   754C 5F            [ 4] 3853 	ld	e, a
   754D DD 6E FE      [19] 3854 	ld	l,-2 (ix)
   7550 DD 66 FF      [19] 3855 	ld	h,-1 (ix)
   7553 56            [ 7] 3856 	ld	d, (hl)
   7554 7B            [ 4] 3857 	ld	a, e
   7555 82            [ 4] 3858 	add	a, d
   7556 02            [ 7] 3859 	ld	(bc), a
                           3860 ;src/main.c:1029: score[player] += coinScore[player] * 2; // increase the player score
   7557 DD 6E 04      [19] 3861 	ld	l, 4 (ix)
   755A 26 00         [ 7] 3862 	ld	h, #0x00
   755C 29            [11] 3863 	add	hl, hl
   755D 01 D5 5E      [10] 3864 	ld	bc,#_score
   7560 09            [11] 3865 	add	hl,bc
   7561 4D            [ 4] 3866 	ld	c,l
   7562 44            [ 4] 3867 	ld	b,h
   7563 5E            [ 7] 3868 	ld	e, (hl)
   7564 23            [ 6] 3869 	inc	hl
   7565 56            [ 7] 3870 	ld	d, (hl)
   7566 DD 6E FE      [19] 3871 	ld	l,-2 (ix)
   7569 DD 66 FF      [19] 3872 	ld	h,-1 (ix)
   756C 6E            [ 7] 3873 	ld	l, (hl)
   756D 26 00         [ 7] 3874 	ld	h, #0x00
   756F 29            [11] 3875 	add	hl, hl
   7570 19            [11] 3876 	add	hl,de
   7571 EB            [ 4] 3877 	ex	de,hl
   7572 7B            [ 4] 3878 	ld	a, e
   7573 02            [ 7] 3879 	ld	(bc), a
   7574 03            [ 6] 3880 	inc	bc
   7575 7A            [ 4] 3881 	ld	a, d
   7576 02            [ 7] 3882 	ld	(bc), a
                           3883 ;src/main.c:1030: RefreshHighScore(player);
   7577 DD 6E 04      [19] 3884 	ld	l, 4 (ix)
   757A CD C4 68      [17] 3885 	call	_RefreshHighScore
                           3886 ;src/main.c:1031: coinScore[player] -= nPObj - 3; // decrease the coin score
   757D DD 6E FE      [19] 3887 	ld	l,-2 (ix)
   7580 DD 66 FF      [19] 3888 	ld	h,-1 (ix)
   7583 46            [ 7] 3889 	ld	b, (hl)
   7584 3A 7E 5F      [13] 3890 	ld	a,(#_nPObj + 0)
   7587 C6 FD         [ 7] 3891 	add	a, #0xfd
   7589 4F            [ 4] 3892 	ld	c, a
   758A 78            [ 4] 3893 	ld	a, b
   758B 91            [ 4] 3894 	sub	a, c
   758C DD 6E FE      [19] 3895 	ld	l,-2 (ix)
   758F DD 66 FF      [19] 3896 	ld	h,-1 (ix)
   7592 77            [ 7] 3897 	ld	(hl), a
                           3898 ;src/main.c:1032: if (!TwoPlayers) {
   7593 3A D4 5E      [13] 3899 	ld	a,(#_TwoPlayers + 0)
   7596 B7            [ 4] 3900 	or	a, a
   7597 20 12         [12] 3901 	jr	NZ,00105$
                           3902 ;src/main.c:1033: playerKey[spr[player].objNum_mov-1] = nPObj; // add object to key
   7599 DD 6E FC      [19] 3903 	ld	l,-4 (ix)
   759C DD 66 FD      [19] 3904 	ld	h,-3 (ix)
   759F 4E            [ 7] 3905 	ld	c, (hl)
   75A0 0D            [ 4] 3906 	dec	c
   75A1 21 E4 5E      [10] 3907 	ld	hl, #_playerKey
   75A4 06 00         [ 7] 3908 	ld	b, #0x00
   75A6 09            [11] 3909 	add	hl, bc
   75A7 3A 7E 5F      [13] 3910 	ld	a,(#_nPObj + 0)
   75AA 77            [ 7] 3911 	ld	(hl), a
   75AB                    3912 00105$:
                           3913 ;src/main.c:1035: DeleteObjectInStore();
   75AB CD F1 6C      [17] 3914 	call	_DeleteObjectInStore
                           3915 ;src/main.c:1036: AddObjectToScoreboard(player); 
   75AE DD 6E 04      [19] 3916 	ld	l, 4 (ix)
   75B1 CD F6 73      [17] 3917 	call	_AddObjectToScoreboard
                           3918 ;src/main.c:1037: RefreshScoreboard();
   75B4 CD 4D 6A      [17] 3919 	call	_RefreshScoreboard
   75B7 C3 DC 74      [10] 3920 	jp	00107$
   75BA                    3921 00135$:
                           3922 ;src/main.c:1061: spr[0].objNum_mov++; // increases the number of objects		
                           3923 ;src/main.c:1042: else if (currentTile == TILESET_WELL && (potScore[player] > 0 || coinScore[player] > 0)) {	
   75BA DD 7E FB      [19] 3924 	ld	a, -5 (ix)
   75BD D6 26         [ 7] 3925 	sub	a, #0x26
   75BF C2 C6 76      [10] 3926 	jp	NZ,00130$
   75C2 DD 7E 04      [19] 3927 	ld	a, 4 (ix)
   75C5 C6 DB         [ 7] 3928 	add	a, #<(_potScore)
   75C7 DD 77 FE      [19] 3929 	ld	-2 (ix), a
   75CA 3E 00         [ 7] 3930 	ld	a, #0x00
   75CC CE 5E         [ 7] 3931 	adc	a, #>(_potScore)
   75CE DD 77 FF      [19] 3932 	ld	-1 (ix), a
   75D1 DD 6E FE      [19] 3933 	ld	l,-2 (ix)
   75D4 DD 66 FF      [19] 3934 	ld	h,-1 (ix)
   75D7 7E            [ 7] 3935 	ld	a, (hl)
   75D8 B7            [ 4] 3936 	or	a, a
   75D9 20 0E         [12] 3937 	jr	NZ,00129$
   75DB 01 DD 5E      [10] 3938 	ld	bc, #_coinScore+0
   75DE DD 6E 04      [19] 3939 	ld	l,4 (ix)
   75E1 26 00         [ 7] 3940 	ld	h,#0x00
   75E3 09            [11] 3941 	add	hl, bc
   75E4 7E            [ 7] 3942 	ld	a, (hl)
   75E5 B7            [ 4] 3943 	or	a, a
   75E6 CA C6 76      [10] 3944 	jp	Z, 00130$
   75E9                    3945 00129$:
                           3946 ;src/main.c:1044: cpct_akp_SFXPlay (3, 12, 57, 0, 0, AY_CHANNEL_C);
   75E9 3E 04         [ 7] 3947 	ld	a, #0x04
   75EB F5            [11] 3948 	push	af
   75EC 33            [ 6] 3949 	inc	sp
   75ED 21 00 00      [10] 3950 	ld	hl, #0x0000
   75F0 E5            [11] 3951 	push	hl
   75F1 2E 39         [ 7] 3952 	ld	l, #0x39
   75F3 E5            [11] 3953 	push	hl
   75F4 21 03 0C      [10] 3954 	ld	hl, #0x0c03
   75F7 E5            [11] 3955 	push	hl
   75F8 CD EF 59      [17] 3956 	call	_cpct_akp_SFXPlay
   75FB 21 07 00      [10] 3957 	ld	hl, #7
   75FE 39            [11] 3958 	add	hl, sp
   75FF F9            [ 6] 3959 	ld	sp, hl
                           3960 ;src/main.c:1046: if (player == 0)
   7600 DD 7E 04      [19] 3961 	ld	a, 4 (ix)
   7603 B7            [ 4] 3962 	or	a, a
   7604 20 17         [12] 3963 	jr	NZ,00111$
                           3964 ;src/main.c:1048: cpct_px2byteM0(BG_COLOR, BG_COLOR), 20, 8);
   7606 21 01 01      [10] 3965 	ld	hl, #0x0101
   7609 E5            [11] 3966 	push	hl
   760A CD B3 5C      [17] 3967 	call	_cpct_px2byteM0
   760D 26 00         [ 7] 3968 	ld	h, #0x00
                           3969 ;src/main.c:1047: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 7, 16), 
   760F 01 14 08      [10] 3970 	ld	bc, #0x0814
   7612 C5            [11] 3971 	push	bc
   7613 E5            [11] 3972 	push	hl
   7614 21 A7 C0      [10] 3973 	ld	hl, #0xc0a7
   7617 E5            [11] 3974 	push	hl
   7618 CD ED 5C      [17] 3975 	call	_cpct_drawSolidBox
   761B 18 15         [12] 3976 	jr	00112$
   761D                    3977 00111$:
                           3978 ;src/main.c:1051: cpct_px2byteM0(BG_COLOR, BG_COLOR), 20, 8);
   761D 21 01 01      [10] 3979 	ld	hl, #0x0101
   7620 E5            [11] 3980 	push	hl
   7621 CD B3 5C      [17] 3981 	call	_cpct_px2byteM0
   7624 26 00         [ 7] 3982 	ld	h, #0x00
                           3983 ;src/main.c:1050: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 46, 16), 
   7626 01 14 08      [10] 3984 	ld	bc, #0x0814
   7629 C5            [11] 3985 	push	bc
   762A E5            [11] 3986 	push	hl
   762B 21 CE C0      [10] 3987 	ld	hl, #0xc0ce
   762E E5            [11] 3988 	push	hl
   762F CD ED 5C      [17] 3989 	call	_cpct_drawSolidBox
   7632                    3990 00112$:
                           3991 ;src/main.c:1053: coinScore[player] = 0; 		// throwing money
   7632 01 DD 5E      [10] 3992 	ld	bc, #_coinScore+0
   7635 DD 6E 04      [19] 3993 	ld	l,4 (ix)
   7638 26 00         [ 7] 3994 	ld	h,#0x00
   763A 09            [11] 3995 	add	hl, bc
   763B 36 00         [10] 3996 	ld	(hl), #0x00
                           3997 ;src/main.c:1054: spr[player].objNum_mov = 0;	// throwing objects
   763D DD 6E FC      [19] 3998 	ld	l,-4 (ix)
   7640 DD 66 FD      [19] 3999 	ld	h,-3 (ix)
   7643 36 00         [10] 4000 	ld	(hl), #0x00
                           4001 ;src/main.c:1055: potScore[player] = 0;		// potion value to zero
   7645 DD 6E FE      [19] 4002 	ld	l,-2 (ix)
   7648 DD 66 FF      [19] 4003 	ld	h,-1 (ix)
   764B 36 00         [10] 4004 	ld	(hl), #0x00
                           4005 ;src/main.c:1057: if (!TwoPlayers) { // search for valid objects to retrieve them (only 1 player game)			
   764D 3A D4 5E      [13] 4006 	ld	a,(#_TwoPlayers + 0)
   7650 B7            [ 4] 4007 	or	a, a
   7651 20 6E         [12] 4008 	jr	NZ,00123$
                           4009 ;src/main.c:1058: while (i<5) {
   7653                    4010 00119$:
   7653 DD 7E FA      [19] 4011 	ld	a, -6 (ix)
   7656 D6 05         [ 7] 4012 	sub	a, #0x05
   7658 30 64         [12] 4013 	jr	NC,00121$
                           4014 ;src/main.c:1059: if (playerKey[i] == doorKey[i] ) {
   765A 3E E4         [ 7] 4015 	ld	a, #<(_playerKey)
   765C DD 86 FA      [19] 4016 	add	a, -6 (ix)
   765F 6F            [ 4] 4017 	ld	l, a
   7660 3E 5E         [ 7] 4018 	ld	a, #>(_playerKey)
   7662 CE 00         [ 7] 4019 	adc	a, #0x00
   7664 67            [ 4] 4020 	ld	h, a
   7665 4E            [ 7] 4021 	ld	c, (hl)
   7666 3E DF         [ 7] 4022 	ld	a, #<(_doorKey)
   7668 DD 86 FA      [19] 4023 	add	a, -6 (ix)
   766B 5F            [ 4] 4024 	ld	e, a
   766C 3E 5E         [ 7] 4025 	ld	a, #>(_doorKey)
   766E CE 00         [ 7] 4026 	adc	a, #0x00
   7670 57            [ 4] 4027 	ld	d, a
   7671 1A            [ 7] 4028 	ld	a, (de)
   7672 91            [ 4] 4029 	sub	a, c
   7673 20 32         [12] 4030 	jr	NZ,00153$
                           4031 ;src/main.c:1060: potScore[0] += playerKey[i] - 3; // increases potion value
   7675 21 DB 5E      [10] 4032 	ld	hl, #_potScore + 0
   7678 46            [ 7] 4033 	ld	b, (hl)
   7679 79            [ 4] 4034 	ld	a, c
   767A C6 FD         [ 7] 4035 	add	a, #0xfd
   767C 80            [ 4] 4036 	add	a,b
   767D 32 DB 5E      [13] 4037 	ld	(#_potScore),a
                           4038 ;src/main.c:1061: spr[0].objNum_mov++; // increases the number of objects		
   7680 3A 16 5F      [13] 4039 	ld	a, (#(_spr + 0x000c) + 0)
   7683 3C            [ 4] 4040 	inc	a
   7684 32 16 5F      [13] 4041 	ld	(#(_spr + 0x000c)),a
                           4042 ;src/main.c:1063: PrintObject(playerKey[i++], spr[0].objNum_mov * 3 + 7, 16);					
   7687 4F            [ 4] 4043 	ld	c, a
   7688 87            [ 4] 4044 	add	a, a
   7689 81            [ 4] 4045 	add	a, c
   768A C6 07         [ 7] 4046 	add	a, #0x07
   768C 47            [ 4] 4047 	ld	b, a
   768D DD 5E FA      [19] 4048 	ld	e, -6 (ix)
   7690 DD 34 FA      [23] 4049 	inc	-6 (ix)
   7693 21 E4 5E      [10] 4050 	ld	hl, #_playerKey
   7696 16 00         [ 7] 4051 	ld	d, #0x00
   7698 19            [11] 4052 	add	hl, de
   7699 56            [ 7] 4053 	ld	d, (hl)
   769A 3E 10         [ 7] 4054 	ld	a, #0x10
   769C F5            [11] 4055 	push	af
   769D 33            [ 6] 4056 	inc	sp
   769E 4A            [ 4] 4057 	ld	c, d
   769F C5            [11] 4058 	push	bc
   76A0 CD BD 6B      [17] 4059 	call	_PrintObject
   76A3 F1            [10] 4060 	pop	af
   76A4 33            [ 6] 4061 	inc	sp
   76A5 18 AC         [12] 4062 	jr	00119$
                           4063 ;src/main.c:1066: while (i<5)	
   76A7                    4064 00153$:
   76A7 DD 4E FA      [19] 4065 	ld	c, -6 (ix)
   76AA                    4066 00113$:
   76AA 79            [ 4] 4067 	ld	a, c
   76AB D6 05         [ 7] 4068 	sub	a, #0x05
   76AD 30 A4         [12] 4069 	jr	NC,00119$
                           4070 ;src/main.c:1067: playerKey[i++] = 0;					
   76AF 59            [ 4] 4071 	ld	e, c
   76B0 0C            [ 4] 4072 	inc	c
   76B1 DD 71 FA      [19] 4073 	ld	-6 (ix), c
   76B4 21 E4 5E      [10] 4074 	ld	hl, #_playerKey
   76B7 16 00         [ 7] 4075 	ld	d, #0x00
   76B9 19            [11] 4076 	add	hl, de
   76BA 36 00         [10] 4077 	ld	(hl), #0x00
   76BC 18 EC         [12] 4078 	jr	00113$
   76BE                    4079 00121$:
                           4080 ;src/main.c:1069: DeleteObjectInStore();
   76BE CD F1 6C      [17] 4081 	call	_DeleteObjectInStore
   76C1                    4082 00123$:
                           4083 ;src/main.c:1071: RefreshScoreboard();
   76C1 CD 4D 6A      [17] 4084 	call	_RefreshScoreboard
   76C4 18 1F         [12] 4085 	jr	00138$
   76C6                    4086 00130$:
                           4087 ;src/main.c:1075: else if ((currentTile == TILESET_DOOR || currentTile == 30) && 
   76C6 DD 7E FB      [19] 4088 	ld	a, -5 (ix)
   76C9 D6 0E         [ 7] 4089 	sub	a, #0x0e
   76CB 28 07         [12] 4090 	jr	Z,00127$
   76CD DD 7E FB      [19] 4091 	ld	a, -5 (ix)
   76D0 D6 1E         [ 7] 4092 	sub	a, #0x1e
   76D2 20 11         [12] 4093 	jr	NZ,00138$
   76D4                    4094 00127$:
                           4095 ;src/main.c:1076: spr[0].objNum_mov == 5 && CompareKeys()) {
   76D4 3A 16 5F      [13] 4096 	ld	a, (#(_spr + 0x000c) + 0)
   76D7 D6 05         [ 7] 4097 	sub	a, #0x05
   76D9 20 0A         [12] 4098 	jr	NZ,00138$
   76DB CD 4C 74      [17] 4099 	call	_CompareKeys
   76DE 7D            [ 4] 4100 	ld	a, l
   76DF B7            [ 4] 4101 	or	a, a
   76E0 28 03         [12] 4102 	jr	Z,00138$
                           4103 ;src/main.c:1077: MakeDuel();	
   76E2 CD 92 82      [17] 4104 	call	_MakeDuel
   76E5                    4105 00138$:
   76E5 DD F9         [10] 4106 	ld	sp, ix
   76E7 DD E1         [14] 4107 	pop	ix
   76E9 C9            [10] 4108 	ret
                           4109 ;src/main.c:1095: void PrintSprite(TSpr *pSpr) __z88dk_fastcall {
                           4110 ;	---------------------------------
                           4111 ; Function PrintSprite
                           4112 ; ---------------------------------
   76EA                    4113 _PrintSprite::
                           4114 ;src/main.c:1098: SPR_W, SPR_H, g_maskTable);
                           4115 ;src/main.c:1097: cpct_getScreenPtr(CPCT_VMEM_START, pSpr->x, pSpr->y), 
   76EA 4D            [ 4] 4116 	ld	c,l
   76EB 44            [ 4] 4117 	ld	b,h
   76EC 23            [ 6] 4118 	inc	hl
   76ED 23            [ 6] 4119 	inc	hl
   76EE 23            [ 6] 4120 	inc	hl
   76EF 56            [ 7] 4121 	ld	d, (hl)
   76F0 69            [ 4] 4122 	ld	l, c
   76F1 60            [ 4] 4123 	ld	h, b
   76F2 23            [ 6] 4124 	inc	hl
   76F3 23            [ 6] 4125 	inc	hl
   76F4 7E            [ 7] 4126 	ld	a, (hl)
   76F5 C5            [11] 4127 	push	bc
   76F6 5F            [ 4] 4128 	ld	e, a
   76F7 D5            [11] 4129 	push	de
   76F8 21 00 C0      [10] 4130 	ld	hl, #0xc000
   76FB E5            [11] 4131 	push	hl
   76FC CD CF 5D      [17] 4132 	call	_cpct_getScreenPtr
   76FF EB            [ 4] 4133 	ex	de,hl
   7700 FD E1         [14] 4134 	pop	iy
   7702 FD 6E 08      [19] 4135 	ld	l, 8 (iy)
   7705 FD 66 09      [19] 4136 	ld	h, 9 (iy)
   7708 4E            [ 7] 4137 	ld	c, (hl)
   7709 23            [ 6] 4138 	inc	hl
   770A 46            [ 7] 4139 	ld	b, (hl)
   770B 21 00 01      [10] 4140 	ld	hl, #_g_maskTable
   770E E5            [11] 4141 	push	hl
   770F 21 05 0C      [10] 4142 	ld	hl, #0x0c05
   7712 E5            [11] 4143 	push	hl
   7713 D5            [11] 4144 	push	de
   7714 C5            [11] 4145 	push	bc
   7715 CD E5 5D      [17] 4146 	call	_cpct_drawSpriteMaskedAlignedTable
   7718 C9            [10] 4147 	ret
                           4148 ;src/main.c:1103: void DeleteSprite(TSpr *pSpr) __z88dk_fastcall {	
                           4149 ;	---------------------------------
                           4150 ; Function DeleteSprite
                           4151 ; ---------------------------------
   7719                    4152 _DeleteSprite::
   7719 DD E5         [15] 4153 	push	ix
   771B DD 21 00 00   [14] 4154 	ld	ix,#0
   771F DD 39         [15] 4155 	add	ix,sp
   7721 F5            [11] 4156 	push	af
   7722 3B            [ 6] 4157 	dec	sp
   7723 4D            [ 4] 4158 	ld	c, l
   7724 44            [ 4] 4159 	ld	b, h
                           4160 ;src/main.c:1105: 3 + (pSpr->px & 1), 3 + (pSpr->py & 3 ? 1 : 0),	
   7725 C5            [11] 4161 	push	bc
   7726 FD E1         [14] 4162 	pop	iy
   7728 FD 5E 05      [19] 4163 	ld	e, 5 (iy)
   772B 7B            [ 4] 4164 	ld	a, e
   772C E6 03         [ 7] 4165 	and	a, #0x03
   772E 28 04         [12] 4166 	jr	Z,00103$
   7730 3E 01         [ 7] 4167 	ld	a, #0x01
   7732 18 02         [12] 4168 	jr	00104$
   7734                    4169 00103$:
   7734 3E 00         [ 7] 4170 	ld	a, #0x00
   7736                    4171 00104$:
   7736 C6 03         [ 7] 4172 	add	a, #0x03
   7738 DD 77 FF      [19] 4173 	ld	-1 (ix), a
   773B C5            [11] 4174 	push	bc
   773C FD E1         [14] 4175 	pop	iy
   773E FD 4E 04      [19] 4176 	ld	c, 4 (iy)
   7741 79            [ 4] 4177 	ld	a, c
   7742 E6 01         [ 7] 4178 	and	a, #0x01
   7744 47            [ 4] 4179 	ld	b, a
   7745 04            [ 4] 4180 	inc	b
   7746 04            [ 4] 4181 	inc	b
   7747 04            [ 4] 4182 	inc	b
                           4183 ;src/main.c:1104: cpct_etm_drawTileBox2x4(pSpr->px / 2, (pSpr->py - ORIG_MAP_Y) / 4, 
   7748 16 00         [ 7] 4184 	ld	d, #0x00
   774A 7B            [ 4] 4185 	ld	a, e
   774B C6 E0         [ 7] 4186 	add	a, #0xe0
   774D DD 77 FD      [19] 4187 	ld	-3 (ix), a
   7750 7A            [ 4] 4188 	ld	a, d
   7751 CE FF         [ 7] 4189 	adc	a, #0xff
   7753 DD 77 FE      [19] 4190 	ld	-2 (ix), a
   7756 E1            [10] 4191 	pop	hl
   7757 E5            [11] 4192 	push	hl
   7758 DD CB FE 7E   [20] 4193 	bit	7, -2 (ix)
   775C 28 04         [12] 4194 	jr	Z,00105$
   775E 21 E3 FF      [10] 4195 	ld	hl, #0xffe3
   7761 19            [11] 4196 	add	hl, de
   7762                    4197 00105$:
   7762 CB 2C         [ 8] 4198 	sra	h
   7764 CB 1D         [ 8] 4199 	rr	l
   7766 CB 2C         [ 8] 4200 	sra	h
   7768 CB 1D         [ 8] 4201 	rr	l
   776A 5D            [ 4] 4202 	ld	e, l
   776B CB 39         [ 8] 4203 	srl	c
   776D 21 71 0F      [10] 4204 	ld	hl, #0x0f71
   7770 E5            [11] 4205 	push	hl
   7771 21 40 C1      [10] 4206 	ld	hl, #0xc140
   7774 E5            [11] 4207 	push	hl
   7775 3E 28         [ 7] 4208 	ld	a, #0x28
   7777 F5            [11] 4209 	push	af
   7778 33            [ 6] 4210 	inc	sp
   7779 DD 7E FF      [19] 4211 	ld	a, -1 (ix)
   777C F5            [11] 4212 	push	af
   777D 33            [ 6] 4213 	inc	sp
   777E C5            [11] 4214 	push	bc
   777F 33            [ 6] 4215 	inc	sp
   7780 43            [ 4] 4216 	ld	b, e
   7781 C5            [11] 4217 	push	bc
   7782 CD 11 5B      [17] 4218 	call	_cpct_etm_drawTileBox2x4
   7785 DD F9         [10] 4219 	ld	sp, ix
   7787 DD E1         [14] 4220 	pop	ix
   7789 C9            [10] 4221 	ret
                           4222 ;src/main.c:1111: void AssignFrame(TSpr *pSpr, TFrm **anim) {
                           4223 ;	---------------------------------
                           4224 ; Function AssignFrame
                           4225 ; ---------------------------------
   778A                    4226 _AssignFrame::
   778A DD E5         [15] 4227 	push	ix
   778C DD 21 00 00   [14] 4228 	ld	ix,#0
   7790 DD 39         [15] 4229 	add	ix,sp
                           4230 ;src/main.c:1112: u8 animPause = 2;
   7792 16 02         [ 7] 4231 	ld	d, #0x02
                           4232 ;src/main.c:1113: if (pSpr->num > 3) animPause = 1; // slow enemies (4 and 5) have no pause in animation
   7794 DD 6E 04      [19] 4233 	ld	l,4 (ix)
   7797 DD 66 05      [19] 4234 	ld	h,5 (ix)
   779A 4E            [ 7] 4235 	ld	c, (hl)
   779B 3E 03         [ 7] 4236 	ld	a, #0x03
   779D 91            [ 4] 4237 	sub	a, c
   779E 30 02         [12] 4238 	jr	NC,00102$
   77A0 16 01         [ 7] 4239 	ld	d, #0x01
   77A2                    4240 00102$:
                           4241 ;src/main.c:1114: pSpr->frm = anim[pSpr->nFrm / animPause];	
   77A2 7D            [ 4] 4242 	ld	a, l
   77A3 C6 08         [ 7] 4243 	add	a, #0x08
   77A5 4F            [ 4] 4244 	ld	c, a
   77A6 7C            [ 4] 4245 	ld	a, h
   77A7 CE 00         [ 7] 4246 	adc	a, #0x00
   77A9 47            [ 4] 4247 	ld	b, a
   77AA E5            [11] 4248 	push	hl
   77AB FD E1         [14] 4249 	pop	iy
   77AD FD 7E 0A      [19] 4250 	ld	a, 10 (iy)
   77B0 C5            [11] 4251 	push	bc
   77B1 5F            [ 4] 4252 	ld	e, a
   77B2 D5            [11] 4253 	push	de
   77B3 CD 71 51      [17] 4254 	call	__divuchar
   77B6 F1            [10] 4255 	pop	af
   77B7 C1            [10] 4256 	pop	bc
   77B8 26 00         [ 7] 4257 	ld	h, #0x00
   77BA 29            [11] 4258 	add	hl, hl
   77BB EB            [ 4] 4259 	ex	de,hl
   77BC DD 6E 06      [19] 4260 	ld	l,6 (ix)
   77BF DD 66 07      [19] 4261 	ld	h,7 (ix)
   77C2 19            [11] 4262 	add	hl, de
   77C3 5E            [ 7] 4263 	ld	e, (hl)
   77C4 23            [ 6] 4264 	inc	hl
   77C5 56            [ 7] 4265 	ld	d, (hl)
   77C6 7B            [ 4] 4266 	ld	a, e
   77C7 02            [ 7] 4267 	ld	(bc), a
   77C8 03            [ 6] 4268 	inc	bc
   77C9 7A            [ 4] 4269 	ld	a, d
   77CA 02            [ 7] 4270 	ld	(bc), a
   77CB DD E1         [14] 4271 	pop	ix
   77CD C9            [10] 4272 	ret
                           4273 ;src/main.c:1119: void SelectFrame(TSpr *pSpr) __z88dk_fastcall {
                           4274 ;	---------------------------------
                           4275 ; Function SelectFrame
                           4276 ; ---------------------------------
   77CE                    4277 _SelectFrame::
   77CE DD E5         [15] 4278 	push	ix
   77D0 DD 21 00 00   [14] 4279 	ld	ix,#0
   77D4 DD 39         [15] 4280 	add	ix,sp
   77D6 F5            [11] 4281 	push	af
   77D7 DD 75 FE      [19] 4282 	ld	-2 (ix), l
   77DA DD 74 FF      [19] 4283 	ld	-1 (ix), h
                           4284 ;src/main.c:1121: if(pSpr->ident == SORCERER1) {
   77DD E1            [10] 4285 	pop	hl
   77DE E5            [11] 4286 	push	hl
   77DF 23            [ 6] 4287 	inc	hl
   77E0 4E            [ 7] 4288 	ld	c, (hl)
                           4289 ;src/main.c:1122: switch(pSpr->status) {
   77E1 DD 7E FE      [19] 4290 	ld	a, -2 (ix)
   77E4 C6 06         [ 7] 4291 	add	a, #0x06
   77E6 5F            [ 4] 4292 	ld	e, a
   77E7 DD 7E FF      [19] 4293 	ld	a, -1 (ix)
   77EA CE 00         [ 7] 4294 	adc	a, #0x00
   77EC 57            [ 4] 4295 	ld	d, a
                           4296 ;src/main.c:1121: if(pSpr->ident == SORCERER1) {
   77ED 79            [ 4] 4297 	ld	a, c
   77EE B7            [ 4] 4298 	or	a, a
   77EF 20 75         [12] 4299 	jr	NZ,00149$
                           4300 ;src/main.c:1122: switch(pSpr->status) {
   77F1 1A            [ 7] 4301 	ld	a, (de)
   77F2 4F            [ 4] 4302 	ld	c, a
   77F3 3E 04         [ 7] 4303 	ld	a, #0x04
   77F5 91            [ 4] 4304 	sub	a, c
   77F6 DA 3F 7A      [10] 4305 	jp	C, 00151$
   77F9 06 00         [ 7] 4306 	ld	b, #0x00
   77FB 21 02 78      [10] 4307 	ld	hl, #00245$
   77FE 09            [11] 4308 	add	hl, bc
   77FF 09            [11] 4309 	add	hl, bc
   7800 09            [11] 4310 	add	hl, bc
   7801 E9            [ 4] 4311 	jp	(hl)
   7802                    4312 00245$:
   7802 C3 11 78      [10] 4313 	jp	00101$
   7805 C3 21 78      [10] 4314 	jp	00102$
   7808 C3 31 78      [10] 4315 	jp	00103$
   780B C3 41 78      [10] 4316 	jp	00104$
   780E C3 51 78      [10] 4317 	jp	00105$
                           4318 ;src/main.c:1123: case S_walkingUp: 		{AssignFrame(&spr[0], animUp_Sorcerer1); break;}
   7811                    4319 00101$:
   7811 21 9E 5F      [10] 4320 	ld	hl, #_animUp_Sorcerer1
   7814 E5            [11] 4321 	push	hl
   7815 21 0A 5F      [10] 4322 	ld	hl, #_spr
   7818 E5            [11] 4323 	push	hl
   7819 CD 8A 77      [17] 4324 	call	_AssignFrame
   781C F1            [10] 4325 	pop	af
   781D F1            [10] 4326 	pop	af
   781E C3 3F 7A      [10] 4327 	jp	00151$
                           4328 ;src/main.c:1124: case S_walkingDown:		{AssignFrame(&spr[0], animDown_Sorcerer1); break;}
   7821                    4329 00102$:
   7821 21 A2 5F      [10] 4330 	ld	hl, #_animDown_Sorcerer1
   7824 E5            [11] 4331 	push	hl
   7825 21 0A 5F      [10] 4332 	ld	hl, #_spr
   7828 E5            [11] 4333 	push	hl
   7829 CD 8A 77      [17] 4334 	call	_AssignFrame
   782C F1            [10] 4335 	pop	af
   782D F1            [10] 4336 	pop	af
   782E C3 3F 7A      [10] 4337 	jp	00151$
                           4338 ;src/main.c:1125: case S_walkingLeft:		{AssignFrame(&spr[0], animLeft_Sorcerer1); break;}
   7831                    4339 00103$:
   7831 21 A6 5F      [10] 4340 	ld	hl, #_animLeft_Sorcerer1
   7834 E5            [11] 4341 	push	hl
   7835 21 0A 5F      [10] 4342 	ld	hl, #_spr
   7838 E5            [11] 4343 	push	hl
   7839 CD 8A 77      [17] 4344 	call	_AssignFrame
   783C F1            [10] 4345 	pop	af
   783D F1            [10] 4346 	pop	af
   783E C3 3F 7A      [10] 4347 	jp	00151$
                           4348 ;src/main.c:1126: case S_walkingRight:	{AssignFrame(&spr[0], animRight_Sorcerer1); break;}
   7841                    4349 00104$:
   7841 21 AA 5F      [10] 4350 	ld	hl, #_animRight_Sorcerer1
   7844 E5            [11] 4351 	push	hl
   7845 21 0A 5F      [10] 4352 	ld	hl, #_spr
   7848 E5            [11] 4353 	push	hl
   7849 CD 8A 77      [17] 4354 	call	_AssignFrame
   784C F1            [10] 4355 	pop	af
   784D F1            [10] 4356 	pop	af
   784E C3 3F 7A      [10] 4357 	jp	00151$
                           4358 ;src/main.c:1127: case S_stopped:			{spr[0].frm = &frmSorcerer1[spr[0].dir*2];}		
   7851                    4359 00105$:
   7851 01 8E 5F      [10] 4360 	ld	bc, #_frmSorcerer1+0
   7854 3A 11 5F      [13] 4361 	ld	a, (#_spr + 7)
   7857 87            [ 4] 4362 	add	a, a
   7858 6F            [ 4] 4363 	ld	l, a
   7859 26 00         [ 7] 4364 	ld	h, #0x00
   785B 29            [11] 4365 	add	hl, hl
   785C 09            [11] 4366 	add	hl,bc
   785D 4D            [ 4] 4367 	ld	c, l
   785E 44            [ 4] 4368 	ld	b, h
   785F ED 43 12 5F   [20] 4369 	ld	((_spr + 0x0008)), bc
                           4370 ;src/main.c:1128: }
   7863 C3 3F 7A      [10] 4371 	jp	00151$
   7866                    4372 00149$:
                           4373 ;src/main.c:1131: else if(pSpr->ident == SORCERER2) {
   7866 79            [ 4] 4374 	ld	a, c
   7867 3D            [ 4] 4375 	dec	a
   7868 20 75         [12] 4376 	jr	NZ,00146$
                           4377 ;src/main.c:1132: switch(pSpr->status) {
   786A 1A            [ 7] 4378 	ld	a, (de)
   786B 4F            [ 4] 4379 	ld	c, a
   786C 3E 04         [ 7] 4380 	ld	a, #0x04
   786E 91            [ 4] 4381 	sub	a, c
   786F DA 3F 7A      [10] 4382 	jp	C, 00151$
   7872 06 00         [ 7] 4383 	ld	b, #0x00
   7874 21 7B 78      [10] 4384 	ld	hl, #00248$
   7877 09            [11] 4385 	add	hl, bc
   7878 09            [11] 4386 	add	hl, bc
   7879 09            [11] 4387 	add	hl, bc
   787A E9            [ 4] 4388 	jp	(hl)
   787B                    4389 00248$:
   787B C3 8A 78      [10] 4390 	jp	00107$
   787E C3 9A 78      [10] 4391 	jp	00108$
   7881 C3 AA 78      [10] 4392 	jp	00109$
   7884 C3 BA 78      [10] 4393 	jp	00110$
   7887 C3 CA 78      [10] 4394 	jp	00111$
                           4395 ;src/main.c:1133: case S_walkingUp: 		{AssignFrame(&spr[1], animUp_Sorcerer2); break;}
   788A                    4396 00107$:
   788A 21 BE 5F      [10] 4397 	ld	hl, #_animUp_Sorcerer2
   788D E5            [11] 4398 	push	hl
   788E 21 19 5F      [10] 4399 	ld	hl, #(_spr + 0x000f)
   7891 E5            [11] 4400 	push	hl
   7892 CD 8A 77      [17] 4401 	call	_AssignFrame
   7895 F1            [10] 4402 	pop	af
   7896 F1            [10] 4403 	pop	af
   7897 C3 3F 7A      [10] 4404 	jp	00151$
                           4405 ;src/main.c:1134: case S_walkingDown:		{AssignFrame(&spr[1], animDown_Sorcerer2); break;}
   789A                    4406 00108$:
   789A 21 C2 5F      [10] 4407 	ld	hl, #_animDown_Sorcerer2
   789D E5            [11] 4408 	push	hl
   789E 21 19 5F      [10] 4409 	ld	hl, #(_spr + 0x000f)
   78A1 E5            [11] 4410 	push	hl
   78A2 CD 8A 77      [17] 4411 	call	_AssignFrame
   78A5 F1            [10] 4412 	pop	af
   78A6 F1            [10] 4413 	pop	af
   78A7 C3 3F 7A      [10] 4414 	jp	00151$
                           4415 ;src/main.c:1135: case S_walkingLeft:		{AssignFrame(&spr[1], animLeft_Sorcerer2); break;}
   78AA                    4416 00109$:
   78AA 21 C6 5F      [10] 4417 	ld	hl, #_animLeft_Sorcerer2
   78AD E5            [11] 4418 	push	hl
   78AE 21 19 5F      [10] 4419 	ld	hl, #(_spr + 0x000f)
   78B1 E5            [11] 4420 	push	hl
   78B2 CD 8A 77      [17] 4421 	call	_AssignFrame
   78B5 F1            [10] 4422 	pop	af
   78B6 F1            [10] 4423 	pop	af
   78B7 C3 3F 7A      [10] 4424 	jp	00151$
                           4425 ;src/main.c:1136: case S_walkingRight:	{AssignFrame(&spr[1], animRight_Sorcerer2); break;}
   78BA                    4426 00110$:
   78BA 21 CA 5F      [10] 4427 	ld	hl, #_animRight_Sorcerer2
   78BD E5            [11] 4428 	push	hl
   78BE 21 19 5F      [10] 4429 	ld	hl, #(_spr + 0x000f)
   78C1 E5            [11] 4430 	push	hl
   78C2 CD 8A 77      [17] 4431 	call	_AssignFrame
   78C5 F1            [10] 4432 	pop	af
   78C6 F1            [10] 4433 	pop	af
   78C7 C3 3F 7A      [10] 4434 	jp	00151$
                           4435 ;src/main.c:1137: case S_stopped:			{spr[1].frm = &frmSorcerer2[spr[1].dir*2];}	
   78CA                    4436 00111$:
   78CA 01 AE 5F      [10] 4437 	ld	bc, #_frmSorcerer2+0
   78CD 3A 20 5F      [13] 4438 	ld	a, (#_spr + 22)
   78D0 87            [ 4] 4439 	add	a, a
   78D1 6F            [ 4] 4440 	ld	l, a
   78D2 26 00         [ 7] 4441 	ld	h, #0x00
   78D4 29            [11] 4442 	add	hl, hl
   78D5 09            [11] 4443 	add	hl,bc
   78D6 4D            [ 4] 4444 	ld	c, l
   78D7 44            [ 4] 4445 	ld	b, h
   78D8 ED 43 21 5F   [20] 4446 	ld	((_spr + 0x0017)), bc
                           4447 ;src/main.c:1138: }
   78DC C3 3F 7A      [10] 4448 	jp	00151$
   78DF                    4449 00146$:
                           4450 ;src/main.c:1142: switch(pSpr->dir) {
   78DF DD 7E FE      [19] 4451 	ld	a, -2 (ix)
   78E2 C6 07         [ 7] 4452 	add	a, #0x07
   78E4 5F            [ 4] 4453 	ld	e, a
   78E5 DD 7E FF      [19] 4454 	ld	a, -1 (ix)
   78E8 CE 00         [ 7] 4455 	adc	a, #0x00
   78EA 57            [ 4] 4456 	ld	d, a
                           4457 ;src/main.c:1141: else if(pSpr->ident == SENTINEL) {
   78EB 79            [ 4] 4458 	ld	a, c
   78EC D6 02         [ 7] 4459 	sub	a, #0x02
   78EE 20 57         [12] 4460 	jr	NZ,00143$
                           4461 ;src/main.c:1142: switch(pSpr->dir) {
   78F0 1A            [ 7] 4462 	ld	a, (de)
   78F1 B7            [ 4] 4463 	or	a, a
   78F2 28 0F         [12] 4464 	jr	Z,00113$
   78F4 FE 01         [ 7] 4465 	cp	a, #0x01
   78F6 28 1C         [12] 4466 	jr	Z,00114$
   78F8 FE 02         [ 7] 4467 	cp	a, #0x02
   78FA 28 29         [12] 4468 	jr	Z,00115$
   78FC D6 03         [ 7] 4469 	sub	a, #0x03
   78FE 28 36         [12] 4470 	jr	Z,00116$
   7900 C3 3F 7A      [10] 4471 	jp	00151$
                           4472 ;src/main.c:1143: case D_up:				{AssignFrame(pSpr, animUp_Sentinel); break;}
   7903                    4473 00113$:
   7903 21 DE 5F      [10] 4474 	ld	hl, #_animUp_Sentinel
   7906 4D            [ 4] 4475 	ld	c, l
   7907 44            [ 4] 4476 	ld	b, h
   7908 E1            [10] 4477 	pop	hl
   7909 E5            [11] 4478 	push	hl
   790A C5            [11] 4479 	push	bc
   790B E5            [11] 4480 	push	hl
   790C CD 8A 77      [17] 4481 	call	_AssignFrame
   790F F1            [10] 4482 	pop	af
   7910 F1            [10] 4483 	pop	af
   7911 C3 3F 7A      [10] 4484 	jp	00151$
                           4485 ;src/main.c:1144: case D_down:			{AssignFrame(pSpr, animDown_Sentinel); break;}
   7914                    4486 00114$:
   7914 21 E2 5F      [10] 4487 	ld	hl, #_animDown_Sentinel
   7917 4D            [ 4] 4488 	ld	c, l
   7918 44            [ 4] 4489 	ld	b, h
   7919 E1            [10] 4490 	pop	hl
   791A E5            [11] 4491 	push	hl
   791B C5            [11] 4492 	push	bc
   791C E5            [11] 4493 	push	hl
   791D CD 8A 77      [17] 4494 	call	_AssignFrame
   7920 F1            [10] 4495 	pop	af
   7921 F1            [10] 4496 	pop	af
   7922 C3 3F 7A      [10] 4497 	jp	00151$
                           4498 ;src/main.c:1145: case D_left:			{AssignFrame(pSpr, animLeft_Sentinel); break;}
   7925                    4499 00115$:
   7925 21 E6 5F      [10] 4500 	ld	hl, #_animLeft_Sentinel
   7928 4D            [ 4] 4501 	ld	c, l
   7929 44            [ 4] 4502 	ld	b, h
   792A E1            [10] 4503 	pop	hl
   792B E5            [11] 4504 	push	hl
   792C C5            [11] 4505 	push	bc
   792D E5            [11] 4506 	push	hl
   792E CD 8A 77      [17] 4507 	call	_AssignFrame
   7931 F1            [10] 4508 	pop	af
   7932 F1            [10] 4509 	pop	af
   7933 C3 3F 7A      [10] 4510 	jp	00151$
                           4511 ;src/main.c:1146: case D_right:			{AssignFrame(pSpr, animRight_Sentinel);}
   7936                    4512 00116$:
   7936 21 EA 5F      [10] 4513 	ld	hl, #_animRight_Sentinel
   7939 4D            [ 4] 4514 	ld	c, l
   793A 44            [ 4] 4515 	ld	b, h
   793B E1            [10] 4516 	pop	hl
   793C E5            [11] 4517 	push	hl
   793D C5            [11] 4518 	push	bc
   793E E5            [11] 4519 	push	hl
   793F CD 8A 77      [17] 4520 	call	_AssignFrame
   7942 F1            [10] 4521 	pop	af
   7943 F1            [10] 4522 	pop	af
                           4523 ;src/main.c:1147: }
   7944 C3 3F 7A      [10] 4524 	jp	00151$
   7947                    4525 00143$:
                           4526 ;src/main.c:1150: else if(pSpr->ident == KNIGHT) {
   7947 79            [ 4] 4527 	ld	a, c
   7948 D6 03         [ 7] 4528 	sub	a, #0x03
   794A 20 57         [12] 4529 	jr	NZ,00140$
                           4530 ;src/main.c:1151: switch(pSpr->dir) {
   794C 1A            [ 7] 4531 	ld	a, (de)
   794D B7            [ 4] 4532 	or	a, a
   794E 28 0F         [12] 4533 	jr	Z,00118$
   7950 FE 01         [ 7] 4534 	cp	a, #0x01
   7952 28 1C         [12] 4535 	jr	Z,00119$
   7954 FE 02         [ 7] 4536 	cp	a, #0x02
   7956 28 29         [12] 4537 	jr	Z,00120$
   7958 D6 03         [ 7] 4538 	sub	a, #0x03
   795A 28 36         [12] 4539 	jr	Z,00121$
   795C C3 3F 7A      [10] 4540 	jp	00151$
                           4541 ;src/main.c:1152: case D_up:				{AssignFrame(pSpr, animUp_Knight); break;}
   795F                    4542 00118$:
   795F 21 FE 5F      [10] 4543 	ld	hl, #_animUp_Knight
   7962 4D            [ 4] 4544 	ld	c, l
   7963 44            [ 4] 4545 	ld	b, h
   7964 E1            [10] 4546 	pop	hl
   7965 E5            [11] 4547 	push	hl
   7966 C5            [11] 4548 	push	bc
   7967 E5            [11] 4549 	push	hl
   7968 CD 8A 77      [17] 4550 	call	_AssignFrame
   796B F1            [10] 4551 	pop	af
   796C F1            [10] 4552 	pop	af
   796D C3 3F 7A      [10] 4553 	jp	00151$
                           4554 ;src/main.c:1153: case D_down:			{AssignFrame(pSpr, animDown_Knight); break;}
   7970                    4555 00119$:
   7970 21 02 60      [10] 4556 	ld	hl, #_animDown_Knight
   7973 4D            [ 4] 4557 	ld	c, l
   7974 44            [ 4] 4558 	ld	b, h
   7975 E1            [10] 4559 	pop	hl
   7976 E5            [11] 4560 	push	hl
   7977 C5            [11] 4561 	push	bc
   7978 E5            [11] 4562 	push	hl
   7979 CD 8A 77      [17] 4563 	call	_AssignFrame
   797C F1            [10] 4564 	pop	af
   797D F1            [10] 4565 	pop	af
   797E C3 3F 7A      [10] 4566 	jp	00151$
                           4567 ;src/main.c:1154: case D_left:			{AssignFrame(pSpr, animLeft_Knight); break;}
   7981                    4568 00120$:
   7981 21 06 60      [10] 4569 	ld	hl, #_animLeft_Knight
   7984 4D            [ 4] 4570 	ld	c, l
   7985 44            [ 4] 4571 	ld	b, h
   7986 E1            [10] 4572 	pop	hl
   7987 E5            [11] 4573 	push	hl
   7988 C5            [11] 4574 	push	bc
   7989 E5            [11] 4575 	push	hl
   798A CD 8A 77      [17] 4576 	call	_AssignFrame
   798D F1            [10] 4577 	pop	af
   798E F1            [10] 4578 	pop	af
   798F C3 3F 7A      [10] 4579 	jp	00151$
                           4580 ;src/main.c:1155: case D_right:			{AssignFrame(pSpr, animRight_Knight);}
   7992                    4581 00121$:
   7992 21 0A 60      [10] 4582 	ld	hl, #_animRight_Knight
   7995 4D            [ 4] 4583 	ld	c, l
   7996 44            [ 4] 4584 	ld	b, h
   7997 E1            [10] 4585 	pop	hl
   7998 E5            [11] 4586 	push	hl
   7999 C5            [11] 4587 	push	bc
   799A E5            [11] 4588 	push	hl
   799B CD 8A 77      [17] 4589 	call	_AssignFrame
   799E F1            [10] 4590 	pop	af
   799F F1            [10] 4591 	pop	af
                           4592 ;src/main.c:1156: }
   79A0 C3 3F 7A      [10] 4593 	jp	00151$
   79A3                    4594 00140$:
                           4595 ;src/main.c:1159: else if(pSpr->ident == GHOST) {
   79A3 79            [ 4] 4596 	ld	a, c
   79A4 D6 04         [ 7] 4597 	sub	a, #0x04
   79A6 20 54         [12] 4598 	jr	NZ,00137$
                           4599 ;src/main.c:1160: switch(pSpr->dir) {
   79A8 1A            [ 7] 4600 	ld	a, (de)
   79A9 B7            [ 4] 4601 	or	a, a
   79AA 28 0F         [12] 4602 	jr	Z,00123$
   79AC FE 01         [ 7] 4603 	cp	a, #0x01
   79AE 28 1C         [12] 4604 	jr	Z,00124$
   79B0 FE 02         [ 7] 4605 	cp	a, #0x02
   79B2 28 28         [12] 4606 	jr	Z,00125$
   79B4 D6 03         [ 7] 4607 	sub	a, #0x03
   79B6 28 34         [12] 4608 	jr	Z,00126$
   79B8 C3 3F 7A      [10] 4609 	jp	00151$
                           4610 ;src/main.c:1161: case D_up:				{AssignFrame(pSpr, animUp_Ghost); break;}
   79BB                    4611 00123$:
   79BB 21 1E 60      [10] 4612 	ld	hl, #_animUp_Ghost
   79BE 4D            [ 4] 4613 	ld	c, l
   79BF 44            [ 4] 4614 	ld	b, h
   79C0 E1            [10] 4615 	pop	hl
   79C1 E5            [11] 4616 	push	hl
   79C2 C5            [11] 4617 	push	bc
   79C3 E5            [11] 4618 	push	hl
   79C4 CD 8A 77      [17] 4619 	call	_AssignFrame
   79C7 F1            [10] 4620 	pop	af
   79C8 F1            [10] 4621 	pop	af
   79C9 C3 3F 7A      [10] 4622 	jp	00151$
                           4623 ;src/main.c:1162: case D_down:			{AssignFrame(pSpr, animDown_Ghost); break;}
   79CC                    4624 00124$:
   79CC 21 22 60      [10] 4625 	ld	hl, #_animDown_Ghost
   79CF 4D            [ 4] 4626 	ld	c, l
   79D0 44            [ 4] 4627 	ld	b, h
   79D1 E1            [10] 4628 	pop	hl
   79D2 E5            [11] 4629 	push	hl
   79D3 C5            [11] 4630 	push	bc
   79D4 E5            [11] 4631 	push	hl
   79D5 CD 8A 77      [17] 4632 	call	_AssignFrame
   79D8 F1            [10] 4633 	pop	af
   79D9 F1            [10] 4634 	pop	af
   79DA 18 63         [12] 4635 	jr	00151$
                           4636 ;src/main.c:1163: case D_left:			{AssignFrame(pSpr, animLeft_Ghost); break;}
   79DC                    4637 00125$:
   79DC 21 26 60      [10] 4638 	ld	hl, #_animLeft_Ghost
   79DF 4D            [ 4] 4639 	ld	c, l
   79E0 44            [ 4] 4640 	ld	b, h
   79E1 E1            [10] 4641 	pop	hl
   79E2 E5            [11] 4642 	push	hl
   79E3 C5            [11] 4643 	push	bc
   79E4 E5            [11] 4644 	push	hl
   79E5 CD 8A 77      [17] 4645 	call	_AssignFrame
   79E8 F1            [10] 4646 	pop	af
   79E9 F1            [10] 4647 	pop	af
   79EA 18 53         [12] 4648 	jr	00151$
                           4649 ;src/main.c:1164: case D_right:			{AssignFrame(pSpr, animRight_Ghost);}
   79EC                    4650 00126$:
   79EC 21 2A 60      [10] 4651 	ld	hl, #_animRight_Ghost
   79EF 4D            [ 4] 4652 	ld	c, l
   79F0 44            [ 4] 4653 	ld	b, h
   79F1 E1            [10] 4654 	pop	hl
   79F2 E5            [11] 4655 	push	hl
   79F3 C5            [11] 4656 	push	bc
   79F4 E5            [11] 4657 	push	hl
   79F5 CD 8A 77      [17] 4658 	call	_AssignFrame
   79F8 F1            [10] 4659 	pop	af
   79F9 F1            [10] 4660 	pop	af
                           4661 ;src/main.c:1165: }
   79FA 18 43         [12] 4662 	jr	00151$
   79FC                    4663 00137$:
                           4664 ;src/main.c:1168: else if(pSpr->ident == WITCH) {
   79FC 79            [ 4] 4665 	ld	a, c
   79FD D6 06         [ 7] 4666 	sub	a, #0x06
   79FF 20 2B         [12] 4667 	jr	NZ,00134$
                           4668 ;src/main.c:1169: switch(pSpr->dir) {
   7A01 1A            [ 7] 4669 	ld	a, (de)
   7A02 FE 02         [ 7] 4670 	cp	a, #0x02
   7A04 28 06         [12] 4671 	jr	Z,00128$
   7A06 D6 03         [ 7] 4672 	sub	a, #0x03
   7A08 28 12         [12] 4673 	jr	Z,00129$
   7A0A 18 33         [12] 4674 	jr	00151$
                           4675 ;src/main.c:1170: case D_left:			{AssignFrame(pSpr, animLeft_Witch); break;}
   7A0C                    4676 00128$:
   7A0C 21 3E 60      [10] 4677 	ld	hl, #_animLeft_Witch
   7A0F 4D            [ 4] 4678 	ld	c, l
   7A10 44            [ 4] 4679 	ld	b, h
   7A11 E1            [10] 4680 	pop	hl
   7A12 E5            [11] 4681 	push	hl
   7A13 C5            [11] 4682 	push	bc
   7A14 E5            [11] 4683 	push	hl
   7A15 CD 8A 77      [17] 4684 	call	_AssignFrame
   7A18 F1            [10] 4685 	pop	af
   7A19 F1            [10] 4686 	pop	af
   7A1A 18 23         [12] 4687 	jr	00151$
                           4688 ;src/main.c:1171: case D_right:			{AssignFrame(pSpr, animRight_Witch);}
   7A1C                    4689 00129$:
   7A1C 21 42 60      [10] 4690 	ld	hl, #_animRight_Witch
   7A1F 4D            [ 4] 4691 	ld	c, l
   7A20 44            [ 4] 4692 	ld	b, h
   7A21 E1            [10] 4693 	pop	hl
   7A22 E5            [11] 4694 	push	hl
   7A23 C5            [11] 4695 	push	bc
   7A24 E5            [11] 4696 	push	hl
   7A25 CD 8A 77      [17] 4697 	call	_AssignFrame
   7A28 F1            [10] 4698 	pop	af
   7A29 F1            [10] 4699 	pop	af
                           4700 ;src/main.c:1172: }
   7A2A 18 13         [12] 4701 	jr	00151$
   7A2C                    4702 00134$:
                           4703 ;src/main.c:1175: else if(pSpr->ident == BAT)	AssignFrame(pSpr, anim_Bat);
   7A2C 79            [ 4] 4704 	ld	a, c
   7A2D D6 05         [ 7] 4705 	sub	a, #0x05
   7A2F 20 0E         [12] 4706 	jr	NZ,00151$
   7A31 21 32 60      [10] 4707 	ld	hl, #_anim_Bat
   7A34 4D            [ 4] 4708 	ld	c, l
   7A35 44            [ 4] 4709 	ld	b, h
   7A36 E1            [10] 4710 	pop	hl
   7A37 E5            [11] 4711 	push	hl
   7A38 C5            [11] 4712 	push	bc
   7A39 E5            [11] 4713 	push	hl
   7A3A CD 8A 77      [17] 4714 	call	_AssignFrame
   7A3D F1            [10] 4715 	pop	af
   7A3E F1            [10] 4716 	pop	af
   7A3F                    4717 00151$:
   7A3F DD F9         [10] 4718 	ld	sp, ix
   7A41 DD E1         [14] 4719 	pop	ix
   7A43 C9            [10] 4720 	ret
                           4721 ;src/main.c:1180: void PrintExplosion(TSpr *pSpr, u8 nFrame)
                           4722 ;	---------------------------------
                           4723 ; Function PrintExplosion
                           4724 ; ---------------------------------
   7A44                    4725 _PrintExplosion::
   7A44 DD E5         [15] 4726 	push	ix
   7A46 DD 21 00 00   [14] 4727 	ld	ix,#0
   7A4A DD 39         [15] 4728 	add	ix,sp
                           4729 ;src/main.c:1184: SPR_W, SPR_H, g_maskTable);
                           4730 ;src/main.c:1183: cpct_getScreenPtr(CPCT_VMEM_START, pSpr->x, pSpr->y), 
   7A4C DD 4E 04      [19] 4731 	ld	c,4 (ix)
   7A4F DD 46 05      [19] 4732 	ld	b,5 (ix)
   7A52 69            [ 4] 4733 	ld	l, c
   7A53 60            [ 4] 4734 	ld	h, b
   7A54 23            [ 6] 4735 	inc	hl
   7A55 23            [ 6] 4736 	inc	hl
   7A56 23            [ 6] 4737 	inc	hl
   7A57 56            [ 7] 4738 	ld	d, (hl)
   7A58 69            [ 4] 4739 	ld	l, c
   7A59 60            [ 4] 4740 	ld	h, b
   7A5A 23            [ 6] 4741 	inc	hl
   7A5B 23            [ 6] 4742 	inc	hl
   7A5C 5E            [ 7] 4743 	ld	e, (hl)
   7A5D D5            [11] 4744 	push	de
   7A5E 21 00 C0      [10] 4745 	ld	hl, #0xc000
   7A61 E5            [11] 4746 	push	hl
   7A62 CD CF 5D      [17] 4747 	call	_cpct_getScreenPtr
   7A65 4D            [ 4] 4748 	ld	c, l
   7A66 44            [ 4] 4749 	ld	b, h
                           4750 ;src/main.c:1182: cpct_drawSpriteMaskedAlignedTable(g_explosion[nFrame], 
   7A67 DD 5E 06      [19] 4751 	ld	e,6 (ix)
   7A6A 16 00         [ 7] 4752 	ld	d,#0x00
   7A6C 6B            [ 4] 4753 	ld	l, e
   7A6D 62            [ 4] 4754 	ld	h, d
   7A6E 29            [11] 4755 	add	hl, hl
   7A6F 19            [11] 4756 	add	hl, de
   7A70 29            [11] 4757 	add	hl, hl
   7A71 19            [11] 4758 	add	hl, de
   7A72 29            [11] 4759 	add	hl, hl
   7A73 19            [11] 4760 	add	hl, de
   7A74 29            [11] 4761 	add	hl, hl
   7A75 29            [11] 4762 	add	hl, hl
   7A76 11 D1 4A      [10] 4763 	ld	de, #_g_explosion
   7A79 19            [11] 4764 	add	hl, de
   7A7A 11 00 01      [10] 4765 	ld	de, #_g_maskTable
   7A7D D5            [11] 4766 	push	de
   7A7E 11 05 0C      [10] 4767 	ld	de, #0x0c05
   7A81 D5            [11] 4768 	push	de
   7A82 C5            [11] 4769 	push	bc
   7A83 E5            [11] 4770 	push	hl
   7A84 CD E5 5D      [17] 4771 	call	_cpct_drawSpriteMaskedAlignedTable
   7A87 DD E1         [14] 4772 	pop	ix
   7A89 C9            [10] 4773 	ret
                           4774 ;src/main.c:1189: void ExplodeSprite(u8 player, u8 deleteSpr)
                           4775 ;	---------------------------------
                           4776 ; Function ExplodeSprite
                           4777 ; ---------------------------------
   7A8A                    4778 _ExplodeSprite::
   7A8A DD E5         [15] 4779 	push	ix
   7A8C DD 21 00 00   [14] 4780 	ld	ix,#0
   7A90 DD 39         [15] 4781 	add	ix,sp
   7A92 21 F9 FF      [10] 4782 	ld	hl, #-7
   7A95 39            [11] 4783 	add	hl, sp
   7A96 F9            [ 6] 4784 	ld	sp, hl
                           4785 ;src/main.c:1193: cpct_akp_SFXPlay (4, 12, 48, 0, 0, AY_CHANNEL_B); // explosion
   7A97 3E 02         [ 7] 4786 	ld	a, #0x02
   7A99 F5            [11] 4787 	push	af
   7A9A 33            [ 6] 4788 	inc	sp
   7A9B 21 00 00      [10] 4789 	ld	hl, #0x0000
   7A9E E5            [11] 4790 	push	hl
   7A9F 2E 30         [ 7] 4791 	ld	l, #0x30
   7AA1 E5            [11] 4792 	push	hl
   7AA2 21 04 0C      [10] 4793 	ld	hl, #0x0c04
   7AA5 E5            [11] 4794 	push	hl
   7AA6 CD EF 59      [17] 4795 	call	_cpct_akp_SFXPlay
   7AA9 21 07 00      [10] 4796 	ld	hl, #7
   7AAC 39            [11] 4797 	add	hl, sp
   7AAD F9            [ 6] 4798 	ld	sp, hl
                           4799 ;src/main.c:1194: while (ct++ < 2) {	
   7AAE 11 0A 5F      [10] 4800 	ld	de, #_spr+0
   7AB1 DD 4E 04      [19] 4801 	ld	c,4 (ix)
   7AB4 06 00         [ 7] 4802 	ld	b,#0x00
   7AB6 69            [ 4] 4803 	ld	l, c
   7AB7 60            [ 4] 4804 	ld	h, b
   7AB8 29            [11] 4805 	add	hl, hl
   7AB9 09            [11] 4806 	add	hl, bc
   7ABA 29            [11] 4807 	add	hl, hl
   7ABB 09            [11] 4808 	add	hl, bc
   7ABC 29            [11] 4809 	add	hl, hl
   7ABD 09            [11] 4810 	add	hl, bc
   7ABE 19            [11] 4811 	add	hl,de
   7ABF 4D            [ 4] 4812 	ld	c, l
   7AC0 44            [ 4] 4813 	ld	b, h
   7AC1 DD 71 FA      [19] 4814 	ld	-6 (ix), c
   7AC4 DD 70 FB      [19] 4815 	ld	-5 (ix), b
   7AC7 DD 71 FE      [19] 4816 	ld	-2 (ix), c
   7ACA DD 70 FF      [19] 4817 	ld	-1 (ix), b
   7ACD D5            [11] 4818 	push	de
   7ACE DD 5E 05      [19] 4819 	ld	e,5 (ix)
   7AD1 16 00         [ 7] 4820 	ld	d,#0x00
   7AD3 6B            [ 4] 4821 	ld	l, e
   7AD4 62            [ 4] 4822 	ld	h, d
   7AD5 29            [11] 4823 	add	hl, hl
   7AD6 19            [11] 4824 	add	hl, de
   7AD7 29            [11] 4825 	add	hl, hl
   7AD8 19            [11] 4826 	add	hl, de
   7AD9 29            [11] 4827 	add	hl, hl
   7ADA 19            [11] 4828 	add	hl, de
   7ADB D1            [10] 4829 	pop	de
   7ADC 19            [11] 4830 	add	hl,de
   7ADD DD 75 FC      [19] 4831 	ld	-4 (ix), l
   7AE0 DD 74 FD      [19] 4832 	ld	-3 (ix), h
   7AE3 DD 36 F9 00   [19] 4833 	ld	-7 (ix), #0x00
   7AE7                    4834 00103$:
   7AE7 DD 7E F9      [19] 4835 	ld	a, -7 (ix)
   7AEA DD 34 F9      [23] 4836 	inc	-7 (ix)
   7AED D6 02         [ 7] 4837 	sub	a, #0x02
   7AEF 30 49         [12] 4838 	jr	NC,00105$
                           4839 ;src/main.c:1195: PrintExplosion(&spr[player], 0); Pause(40);
   7AF1 59            [ 4] 4840 	ld	e, c
   7AF2 50            [ 4] 4841 	ld	d, b
   7AF3 C5            [11] 4842 	push	bc
   7AF4 AF            [ 4] 4843 	xor	a, a
   7AF5 F5            [11] 4844 	push	af
   7AF6 33            [ 6] 4845 	inc	sp
   7AF7 D5            [11] 4846 	push	de
   7AF8 CD 44 7A      [17] 4847 	call	_PrintExplosion
   7AFB F1            [10] 4848 	pop	af
   7AFC 33            [ 6] 4849 	inc	sp
   7AFD 21 28 00      [10] 4850 	ld	hl, #0x0028
   7B00 CD 81 61      [17] 4851 	call	_Pause
   7B03 C1            [10] 4852 	pop	bc
                           4853 ;src/main.c:1196: PrintExplosion(&spr[player], 1); Pause(40);
   7B04 DD 5E FA      [19] 4854 	ld	e,-6 (ix)
   7B07 DD 56 FB      [19] 4855 	ld	d,-5 (ix)
   7B0A C5            [11] 4856 	push	bc
   7B0B 3E 01         [ 7] 4857 	ld	a, #0x01
   7B0D F5            [11] 4858 	push	af
   7B0E 33            [ 6] 4859 	inc	sp
   7B0F D5            [11] 4860 	push	de
   7B10 CD 44 7A      [17] 4861 	call	_PrintExplosion
   7B13 F1            [10] 4862 	pop	af
   7B14 33            [ 6] 4863 	inc	sp
   7B15 21 28 00      [10] 4864 	ld	hl, #0x0028
   7B18 CD 81 61      [17] 4865 	call	_Pause
   7B1B C1            [10] 4866 	pop	bc
                           4867 ;src/main.c:1197: if (deleteSpr > FALSE) {
   7B1C DD 7E 05      [19] 4868 	ld	a, 5 (ix)
   7B1F B7            [ 4] 4869 	or	a, a
   7B20 28 C5         [12] 4870 	jr	Z,00103$
                           4871 ;src/main.c:1198: DeleteSprite(&spr[player]); // delete player
   7B22 DD 6E FE      [19] 4872 	ld	l,-2 (ix)
   7B25 DD 66 FF      [19] 4873 	ld	h,-1 (ix)
   7B28 C5            [11] 4874 	push	bc
   7B29 CD 19 77      [17] 4875 	call	_DeleteSprite
   7B2C C1            [10] 4876 	pop	bc
                           4877 ;src/main.c:1199: PrintSprite(&spr[deleteSpr]); // reprint enemy, which may have been partially erased
   7B2D DD 6E FC      [19] 4878 	ld	l,-4 (ix)
   7B30 DD 66 FD      [19] 4879 	ld	h,-3 (ix)
   7B33 C5            [11] 4880 	push	bc
   7B34 CD EA 76      [17] 4881 	call	_PrintSprite
   7B37 C1            [10] 4882 	pop	bc
   7B38 18 AD         [12] 4883 	jr	00103$
   7B3A                    4884 00105$:
                           4885 ;src/main.c:1202: PrintExplosion(&spr[player], 0); Pause(40);
   7B3A 59            [ 4] 4886 	ld	e, c
   7B3B 50            [ 4] 4887 	ld	d, b
   7B3C C5            [11] 4888 	push	bc
   7B3D AF            [ 4] 4889 	xor	a, a
   7B3E F5            [11] 4890 	push	af
   7B3F 33            [ 6] 4891 	inc	sp
   7B40 D5            [11] 4892 	push	de
   7B41 CD 44 7A      [17] 4893 	call	_PrintExplosion
   7B44 F1            [10] 4894 	pop	af
   7B45 33            [ 6] 4895 	inc	sp
   7B46 21 28 00      [10] 4896 	ld	hl, #0x0028
   7B49 CD 81 61      [17] 4897 	call	_Pause
   7B4C C1            [10] 4898 	pop	bc
                           4899 ;src/main.c:1203: if (deleteSpr > FALSE) {
   7B4D DD 7E 05      [19] 4900 	ld	a, 5 (ix)
   7B50 B7            [ 4] 4901 	or	a, a
   7B51 28 0E         [12] 4902 	jr	Z,00108$
                           4903 ;src/main.c:1204: DeleteSprite(&spr[player]);
   7B53 69            [ 4] 4904 	ld	l, c
   7B54 60            [ 4] 4905 	ld	h, b
   7B55 CD 19 77      [17] 4906 	call	_DeleteSprite
                           4907 ;src/main.c:1205: PrintSprite(&spr[deleteSpr]);
   7B58 DD 6E FC      [19] 4908 	ld	l,-4 (ix)
   7B5B DD 66 FD      [19] 4909 	ld	h,-3 (ix)
   7B5E CD EA 76      [17] 4910 	call	_PrintSprite
   7B61                    4911 00108$:
   7B61 DD F9         [10] 4912 	ld	sp, ix
   7B63 DD E1         [14] 4913 	pop	ix
   7B65 C9            [10] 4914 	ret
                           4915 ;src/main.c:1211: u8 SpriteCollision(u8 x, u8 y, TSpr *pSpr, u8 marginX) {
                           4916 ;	---------------------------------
                           4917 ; Function SpriteCollision
                           4918 ; ---------------------------------
   7B66                    4919 _SpriteCollision::
   7B66 DD E5         [15] 4920 	push	ix
   7B68 DD 21 00 00   [14] 4921 	ld	ix,#0
   7B6C DD 39         [15] 4922 	add	ix,sp
   7B6E 21 F9 FF      [10] 4923 	ld	hl, #-7
   7B71 39            [11] 4924 	add	hl, sp
   7B72 F9            [ 6] 4925 	ld	sp, hl
                           4926 ;src/main.c:1212: u8 marginY = marginX+marginX;	
   7B73 DD 7E 08      [19] 4927 	ld	a, 8 (ix)
   7B76 87            [ 4] 4928 	add	a, a
   7B77 DD 77 F9      [19] 4929 	ld	-7 (ix), a
                           4930 ;src/main.c:1213: if (x+OBJ_W > pSpr->x-marginX && x-marginX < pSpr->x+SPR_W) // check the X coordinate with the sprite		
   7B7A DD 4E 04      [19] 4931 	ld	c, 4 (ix)
   7B7D 06 00         [ 7] 4932 	ld	b, #0x00
   7B7F 21 04 00      [10] 4933 	ld	hl, #0x0004
   7B82 09            [11] 4934 	add	hl,bc
   7B83 DD 75 FA      [19] 4935 	ld	-6 (ix), l
   7B86 DD 74 FB      [19] 4936 	ld	-5 (ix), h
   7B89 DD 5E 06      [19] 4937 	ld	e,6 (ix)
   7B8C DD 56 07      [19] 4938 	ld	d,7 (ix)
   7B8F 6B            [ 4] 4939 	ld	l, e
   7B90 62            [ 4] 4940 	ld	h, d
   7B91 23            [ 6] 4941 	inc	hl
   7B92 23            [ 6] 4942 	inc	hl
   7B93 6E            [ 7] 4943 	ld	l, (hl)
   7B94 26 00         [ 7] 4944 	ld	h, #0x00
   7B96 DD 7E 08      [19] 4945 	ld	a, 8 (ix)
   7B99 DD 77 FC      [19] 4946 	ld	-4 (ix), a
   7B9C DD 36 FD 00   [19] 4947 	ld	-3 (ix), #0x00
   7BA0 7D            [ 4] 4948 	ld	a, l
   7BA1 DD 96 FC      [19] 4949 	sub	a, -4 (ix)
   7BA4 DD 77 FE      [19] 4950 	ld	-2 (ix), a
   7BA7 7C            [ 4] 4951 	ld	a, h
   7BA8 DD 9E FD      [19] 4952 	sbc	a, -3 (ix)
   7BAB DD 77 FF      [19] 4953 	ld	-1 (ix), a
   7BAE DD 7E FE      [19] 4954 	ld	a, -2 (ix)
   7BB1 DD 96 FA      [19] 4955 	sub	a, -6 (ix)
   7BB4 DD 7E FF      [19] 4956 	ld	a, -1 (ix)
   7BB7 DD 9E FB      [19] 4957 	sbc	a, -5 (ix)
   7BBA E2 BF 7B      [10] 4958 	jp	PO, 00125$
   7BBD EE 80         [ 7] 4959 	xor	a, #0x80
   7BBF                    4960 00125$:
   7BBF F2 30 7C      [10] 4961 	jp	P, 00105$
   7BC2 79            [ 4] 4962 	ld	a, c
   7BC3 DD 96 FC      [19] 4963 	sub	a, -4 (ix)
   7BC6 4F            [ 4] 4964 	ld	c, a
   7BC7 78            [ 4] 4965 	ld	a, b
   7BC8 DD 9E FD      [19] 4966 	sbc	a, -3 (ix)
   7BCB 47            [ 4] 4967 	ld	b, a
   7BCC 23            [ 6] 4968 	inc	hl
   7BCD 23            [ 6] 4969 	inc	hl
   7BCE 23            [ 6] 4970 	inc	hl
   7BCF 23            [ 6] 4971 	inc	hl
   7BD0 23            [ 6] 4972 	inc	hl
   7BD1 79            [ 4] 4973 	ld	a, c
   7BD2 95            [ 4] 4974 	sub	a, l
   7BD3 78            [ 4] 4975 	ld	a, b
   7BD4 9C            [ 4] 4976 	sbc	a, h
   7BD5 E2 DA 7B      [10] 4977 	jp	PO, 00126$
   7BD8 EE 80         [ 7] 4978 	xor	a, #0x80
   7BDA                    4979 00126$:
   7BDA F2 30 7C      [10] 4980 	jp	P, 00105$
                           4981 ;src/main.c:1214: if (y+OBJ_H > pSpr->y-marginY && y-marginY < pSpr->y+SPR_H) // check the Y coordinate with the sprite
   7BDD DD 4E 05      [19] 4982 	ld	c, 5 (ix)
   7BE0 06 00         [ 7] 4983 	ld	b, #0x00
   7BE2 21 08 00      [10] 4984 	ld	hl, #0x0008
   7BE5 09            [11] 4985 	add	hl,bc
   7BE6 DD 75 FE      [19] 4986 	ld	-2 (ix), l
   7BE9 DD 74 FF      [19] 4987 	ld	-1 (ix), h
   7BEC EB            [ 4] 4988 	ex	de,hl
   7BED 23            [ 6] 4989 	inc	hl
   7BEE 23            [ 6] 4990 	inc	hl
   7BEF 23            [ 6] 4991 	inc	hl
   7BF0 5E            [ 7] 4992 	ld	e, (hl)
   7BF1 16 00         [ 7] 4993 	ld	d, #0x00
   7BF3 DD 6E F9      [19] 4994 	ld	l, -7 (ix)
   7BF6 26 00         [ 7] 4995 	ld	h, #0x00
   7BF8 7B            [ 4] 4996 	ld	a, e
   7BF9 95            [ 4] 4997 	sub	a, l
   7BFA DD 77 FC      [19] 4998 	ld	-4 (ix), a
   7BFD 7A            [ 4] 4999 	ld	a, d
   7BFE 9C            [ 4] 5000 	sbc	a, h
   7BFF DD 77 FD      [19] 5001 	ld	-3 (ix), a
   7C02 DD 7E FC      [19] 5002 	ld	a, -4 (ix)
   7C05 DD 96 FE      [19] 5003 	sub	a, -2 (ix)
   7C08 DD 7E FD      [19] 5004 	ld	a, -3 (ix)
   7C0B DD 9E FF      [19] 5005 	sbc	a, -1 (ix)
   7C0E E2 13 7C      [10] 5006 	jp	PO, 00127$
   7C11 EE 80         [ 7] 5007 	xor	a, #0x80
   7C13                    5008 00127$:
   7C13 F2 30 7C      [10] 5009 	jp	P, 00105$
   7C16 79            [ 4] 5010 	ld	a, c
   7C17 95            [ 4] 5011 	sub	a, l
   7C18 4F            [ 4] 5012 	ld	c, a
   7C19 78            [ 4] 5013 	ld	a, b
   7C1A 9C            [ 4] 5014 	sbc	a, h
   7C1B 47            [ 4] 5015 	ld	b, a
   7C1C 21 0C 00      [10] 5016 	ld	hl, #0x000c
   7C1F 19            [11] 5017 	add	hl, de
   7C20 79            [ 4] 5018 	ld	a, c
   7C21 95            [ 4] 5019 	sub	a, l
   7C22 78            [ 4] 5020 	ld	a, b
   7C23 9C            [ 4] 5021 	sbc	a, h
   7C24 E2 29 7C      [10] 5022 	jp	PO, 00128$
   7C27 EE 80         [ 7] 5023 	xor	a, #0x80
   7C29                    5024 00128$:
   7C29 F2 30 7C      [10] 5025 	jp	P, 00105$
                           5026 ;src/main.c:1215: return TRUE;	
   7C2C 2E 01         [ 7] 5027 	ld	l, #0x01
   7C2E 18 02         [12] 5028 	jr	00107$
   7C30                    5029 00105$:
                           5030 ;src/main.c:1216: return FALSE;
   7C30 2E 00         [ 7] 5031 	ld	l, #0x00
   7C32                    5032 00107$:
   7C32 DD F9         [10] 5033 	ld	sp, ix
   7C34 DD E1         [14] 5034 	pop	ix
   7C36 C9            [10] 5035 	ret
                           5036 ;src/main.c:1232: void MoveUp(TSpr *pSpr) __z88dk_fastcall { 
                           5037 ;	---------------------------------
                           5038 ; Function MoveUp
                           5039 ; ---------------------------------
   7C37                    5040 _MoveUp::
   7C37 DD E5         [15] 5041 	push	ix
   7C39 DD 21 00 00   [14] 5042 	ld	ix,#0
   7C3D DD 39         [15] 5043 	add	ix,sp
   7C3F F5            [11] 5044 	push	af
   7C40 F5            [11] 5045 	push	af
                           5046 ;src/main.c:1234: if (pSpr->y > ORIG_MAP_Y && OnBackground(pSpr->x-1, pSpr->y-2)) {
   7C41 DD 75 FE      [19] 5047 	ld	-2 (ix), l
   7C44 DD 74 FF      [19] 5048 	ld	-1 (ix), h
   7C47 23            [ 6] 5049 	inc	hl
   7C48 23            [ 6] 5050 	inc	hl
   7C49 23            [ 6] 5051 	inc	hl
   7C4A 4D            [ 4] 5052 	ld	c,l
   7C4B 44            [ 4] 5053 	ld	b,h
   7C4C 0A            [ 7] 5054 	ld	a, (bc)
   7C4D 5F            [ 4] 5055 	ld	e, a
   7C4E 3E 20         [ 7] 5056 	ld	a, #0x20
   7C50 93            [ 4] 5057 	sub	a, e
   7C51 30 6C         [12] 5058 	jr	NC,00107$
   7C53 1D            [ 4] 5059 	dec	e
   7C54 1D            [ 4] 5060 	dec	e
   7C55 DD 7E FE      [19] 5061 	ld	a, -2 (ix)
   7C58 C6 02         [ 7] 5062 	add	a, #0x02
   7C5A DD 77 FC      [19] 5063 	ld	-4 (ix), a
   7C5D DD 7E FF      [19] 5064 	ld	a, -1 (ix)
   7C60 CE 00         [ 7] 5065 	adc	a, #0x00
   7C62 DD 77 FD      [19] 5066 	ld	-3 (ix), a
   7C65 E1            [10] 5067 	pop	hl
   7C66 E5            [11] 5068 	push	hl
   7C67 56            [ 7] 5069 	ld	d, (hl)
   7C68 15            [ 4] 5070 	dec	d
   7C69 C5            [11] 5071 	push	bc
   7C6A 7B            [ 4] 5072 	ld	a, e
   7C6B F5            [11] 5073 	push	af
   7C6C 33            [ 6] 5074 	inc	sp
   7C6D D5            [11] 5075 	push	de
   7C6E 33            [ 6] 5076 	inc	sp
   7C6F CD 0A 62      [17] 5077 	call	_OnBackground
   7C72 F1            [10] 5078 	pop	af
   7C73 C1            [10] 5079 	pop	bc
   7C74 7D            [ 4] 5080 	ld	a, l
   7C75 B7            [ 4] 5081 	or	a, a
   7C76 28 47         [12] 5082 	jr	Z,00107$
                           5083 ;src/main.c:1235: pSpr->y -= 2;
   7C78 0A            [ 7] 5084 	ld	a, (bc)
   7C79 C6 FE         [ 7] 5085 	add	a, #0xfe
   7C7B 02            [ 7] 5086 	ld	(bc), a
                           5087 ;src/main.c:1236: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x-1, pSpr->y-2))
   7C7C D1            [10] 5088 	pop	de
   7C7D E1            [10] 5089 	pop	hl
   7C7E E5            [11] 5090 	push	hl
   7C7F D5            [11] 5091 	push	de
   7C80 11 0E 00      [10] 5092 	ld	de, #0x000e
   7C83 19            [11] 5093 	add	hl, de
   7C84 7E            [ 7] 5094 	ld	a, (hl)
   7C85 B7            [ 4] 5095 	or	a, a
   7C86 28 1B         [12] 5096 	jr	Z,00102$
   7C88 0A            [ 7] 5097 	ld	a, (bc)
   7C89 5F            [ 4] 5098 	ld	e, a
   7C8A 1D            [ 4] 5099 	dec	e
   7C8B 1D            [ 4] 5100 	dec	e
   7C8C E1            [10] 5101 	pop	hl
   7C8D E5            [11] 5102 	push	hl
   7C8E 56            [ 7] 5103 	ld	d, (hl)
   7C8F 15            [ 4] 5104 	dec	d
   7C90 C5            [11] 5105 	push	bc
   7C91 7B            [ 4] 5106 	ld	a, e
   7C92 F5            [11] 5107 	push	af
   7C93 33            [ 6] 5108 	inc	sp
   7C94 D5            [11] 5109 	push	de
   7C95 33            [ 6] 5110 	inc	sp
   7C96 CD 0A 62      [17] 5111 	call	_OnBackground
   7C99 F1            [10] 5112 	pop	af
   7C9A C1            [10] 5113 	pop	bc
   7C9B 7D            [ 4] 5114 	ld	a, l
   7C9C B7            [ 4] 5115 	or	a, a
   7C9D 28 04         [12] 5116 	jr	Z,00102$
                           5117 ;src/main.c:1237: pSpr->y -= 2; // powerUp speed*2
   7C9F 0A            [ 7] 5118 	ld	a, (bc)
   7CA0 C6 FE         [ 7] 5119 	add	a, #0xfe
   7CA2 02            [ 7] 5120 	ld	(bc), a
   7CA3                    5121 00102$:
                           5122 ;src/main.c:1239: pSpr->dir = D_up;
   7CA3 DD 7E FE      [19] 5123 	ld	a, -2 (ix)
   7CA6 C6 07         [ 7] 5124 	add	a, #0x07
   7CA8 4F            [ 4] 5125 	ld	c, a
   7CA9 DD 7E FF      [19] 5126 	ld	a, -1 (ix)
   7CAC CE 00         [ 7] 5127 	adc	a, #0x00
   7CAE 47            [ 4] 5128 	ld	b, a
   7CAF AF            [ 4] 5129 	xor	a, a
   7CB0 02            [ 7] 5130 	ld	(bc), a
                           5131 ;src/main.c:1240: pSpr->status = S_walkingUp;
   7CB1 DD 7E FE      [19] 5132 	ld	a, -2 (ix)
   7CB4 C6 06         [ 7] 5133 	add	a, #0x06
   7CB6 4F            [ 4] 5134 	ld	c, a
   7CB7 DD 7E FF      [19] 5135 	ld	a, -1 (ix)
   7CBA CE 00         [ 7] 5136 	adc	a, #0x00
   7CBC 47            [ 4] 5137 	ld	b, a
   7CBD AF            [ 4] 5138 	xor	a, a
   7CBE 02            [ 7] 5139 	ld	(bc), a
   7CBF                    5140 00107$:
   7CBF DD F9         [10] 5141 	ld	sp, ix
   7CC1 DD E1         [14] 5142 	pop	ix
   7CC3 C9            [10] 5143 	ret
                           5144 ;src/main.c:1245: void MoveDown(TSpr *pSpr) __z88dk_fastcall {
                           5145 ;	---------------------------------
                           5146 ; Function MoveDown
                           5147 ; ---------------------------------
   7CC4                    5148 _MoveDown::
   7CC4 DD E5         [15] 5149 	push	ix
   7CC6 DD 21 00 00   [14] 5150 	ld	ix,#0
   7CCA DD 39         [15] 5151 	add	ix,sp
   7CCC F5            [11] 5152 	push	af
   7CCD F5            [11] 5153 	push	af
                           5154 ;src/main.c:1247: if (pSpr->y + SPR_H < GLOBAL_MAX_Y && OnBackground(pSpr->x-1, pSpr->y+4)) {
   7CCE DD 75 FE      [19] 5155 	ld	-2 (ix), l
   7CD1 DD 74 FF      [19] 5156 	ld	-1 (ix), h
   7CD4 23            [ 6] 5157 	inc	hl
   7CD5 23            [ 6] 5158 	inc	hl
   7CD6 23            [ 6] 5159 	inc	hl
   7CD7 4D            [ 4] 5160 	ld	c,l
   7CD8 44            [ 4] 5161 	ld	b,h
   7CD9 0A            [ 7] 5162 	ld	a, (bc)
   7CDA 5F            [ 4] 5163 	ld	e, a
   7CDB 6B            [ 4] 5164 	ld	l, e
   7CDC 26 00         [ 7] 5165 	ld	h, #0x00
   7CDE D5            [11] 5166 	push	de
   7CDF 11 0C 00      [10] 5167 	ld	de, #0x000c
   7CE2 19            [11] 5168 	add	hl, de
   7CE3 D1            [10] 5169 	pop	de
   7CE4 7D            [ 4] 5170 	ld	a, l
   7CE5 D6 C8         [ 7] 5171 	sub	a, #0xc8
   7CE7 7C            [ 4] 5172 	ld	a, h
   7CE8 17            [ 4] 5173 	rla
   7CE9 3F            [ 4] 5174 	ccf
   7CEA 1F            [ 4] 5175 	rra
   7CEB DE 80         [ 7] 5176 	sbc	a, #0x80
   7CED 30 70         [12] 5177 	jr	NC,00107$
   7CEF 1C            [ 4] 5178 	inc	e
   7CF0 1C            [ 4] 5179 	inc	e
   7CF1 1C            [ 4] 5180 	inc	e
   7CF2 1C            [ 4] 5181 	inc	e
   7CF3 DD 7E FE      [19] 5182 	ld	a, -2 (ix)
   7CF6 C6 02         [ 7] 5183 	add	a, #0x02
   7CF8 DD 77 FC      [19] 5184 	ld	-4 (ix), a
   7CFB DD 7E FF      [19] 5185 	ld	a, -1 (ix)
   7CFE CE 00         [ 7] 5186 	adc	a, #0x00
   7D00 DD 77 FD      [19] 5187 	ld	-3 (ix), a
   7D03 E1            [10] 5188 	pop	hl
   7D04 E5            [11] 5189 	push	hl
   7D05 56            [ 7] 5190 	ld	d, (hl)
   7D06 15            [ 4] 5191 	dec	d
   7D07 C5            [11] 5192 	push	bc
   7D08 7B            [ 4] 5193 	ld	a, e
   7D09 F5            [11] 5194 	push	af
   7D0A 33            [ 6] 5195 	inc	sp
   7D0B D5            [11] 5196 	push	de
   7D0C 33            [ 6] 5197 	inc	sp
   7D0D CD 0A 62      [17] 5198 	call	_OnBackground
   7D10 F1            [10] 5199 	pop	af
   7D11 C1            [10] 5200 	pop	bc
   7D12 7D            [ 4] 5201 	ld	a, l
   7D13 B7            [ 4] 5202 	or	a, a
   7D14 28 49         [12] 5203 	jr	Z,00107$
                           5204 ;src/main.c:1248: pSpr->y += 2;
   7D16 0A            [ 7] 5205 	ld	a, (bc)
   7D17 C6 02         [ 7] 5206 	add	a, #0x02
   7D19 02            [ 7] 5207 	ld	(bc), a
                           5208 ;src/main.c:1249: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x-1, pSpr->y+4))
   7D1A D1            [10] 5209 	pop	de
   7D1B E1            [10] 5210 	pop	hl
   7D1C E5            [11] 5211 	push	hl
   7D1D D5            [11] 5212 	push	de
   7D1E 11 0E 00      [10] 5213 	ld	de, #0x000e
   7D21 19            [11] 5214 	add	hl, de
   7D22 7E            [ 7] 5215 	ld	a, (hl)
   7D23 B7            [ 4] 5216 	or	a, a
   7D24 28 1D         [12] 5217 	jr	Z,00102$
   7D26 0A            [ 7] 5218 	ld	a, (bc)
   7D27 5F            [ 4] 5219 	ld	e, a
   7D28 1C            [ 4] 5220 	inc	e
   7D29 1C            [ 4] 5221 	inc	e
   7D2A 1C            [ 4] 5222 	inc	e
   7D2B 1C            [ 4] 5223 	inc	e
   7D2C E1            [10] 5224 	pop	hl
   7D2D E5            [11] 5225 	push	hl
   7D2E 56            [ 7] 5226 	ld	d, (hl)
   7D2F 15            [ 4] 5227 	dec	d
   7D30 C5            [11] 5228 	push	bc
   7D31 7B            [ 4] 5229 	ld	a, e
   7D32 F5            [11] 5230 	push	af
   7D33 33            [ 6] 5231 	inc	sp
   7D34 D5            [11] 5232 	push	de
   7D35 33            [ 6] 5233 	inc	sp
   7D36 CD 0A 62      [17] 5234 	call	_OnBackground
   7D39 F1            [10] 5235 	pop	af
   7D3A C1            [10] 5236 	pop	bc
   7D3B 7D            [ 4] 5237 	ld	a, l
   7D3C B7            [ 4] 5238 	or	a, a
   7D3D 28 04         [12] 5239 	jr	Z,00102$
                           5240 ;src/main.c:1250: pSpr->y += 2; // powerUp speed*2
   7D3F 0A            [ 7] 5241 	ld	a, (bc)
   7D40 C6 02         [ 7] 5242 	add	a, #0x02
   7D42 02            [ 7] 5243 	ld	(bc), a
   7D43                    5244 00102$:
                           5245 ;src/main.c:1252: pSpr->dir = D_down;
   7D43 DD 7E FE      [19] 5246 	ld	a, -2 (ix)
   7D46 C6 07         [ 7] 5247 	add	a, #0x07
   7D48 6F            [ 4] 5248 	ld	l, a
   7D49 DD 7E FF      [19] 5249 	ld	a, -1 (ix)
   7D4C CE 00         [ 7] 5250 	adc	a, #0x00
   7D4E 67            [ 4] 5251 	ld	h, a
   7D4F 36 01         [10] 5252 	ld	(hl), #0x01
                           5253 ;src/main.c:1253: pSpr->status = S_walkingDown;
   7D51 DD 7E FE      [19] 5254 	ld	a, -2 (ix)
   7D54 C6 06         [ 7] 5255 	add	a, #0x06
   7D56 6F            [ 4] 5256 	ld	l, a
   7D57 DD 7E FF      [19] 5257 	ld	a, -1 (ix)
   7D5A CE 00         [ 7] 5258 	adc	a, #0x00
   7D5C 67            [ 4] 5259 	ld	h, a
   7D5D 36 01         [10] 5260 	ld	(hl), #0x01
   7D5F                    5261 00107$:
   7D5F DD F9         [10] 5262 	ld	sp, ix
   7D61 DD E1         [14] 5263 	pop	ix
   7D63 C9            [10] 5264 	ret
                           5265 ;src/main.c:1258: void MoveLeft(TSpr *pSpr) __z88dk_fastcall {
                           5266 ;	---------------------------------
                           5267 ; Function MoveLeft
                           5268 ; ---------------------------------
   7D64                    5269 _MoveLeft::
   7D64 DD E5         [15] 5270 	push	ix
   7D66 DD 21 00 00   [14] 5271 	ld	ix,#0
   7D6A DD 39         [15] 5272 	add	ix,sp
   7D6C F5            [11] 5273 	push	af
   7D6D F5            [11] 5274 	push	af
                           5275 ;src/main.c:1260: if (OnBackground(pSpr->x-3, pSpr->y+1)) {
   7D6E DD 75 FE      [19] 5276 	ld	-2 (ix), l
   7D71 DD 74 FF      [19] 5277 	ld	-1 (ix), h
   7D74 23            [ 6] 5278 	inc	hl
   7D75 23            [ 6] 5279 	inc	hl
   7D76 23            [ 6] 5280 	inc	hl
   7D77 4D            [ 4] 5281 	ld	c,l
   7D78 44            [ 4] 5282 	ld	b,h
   7D79 0A            [ 7] 5283 	ld	a, (bc)
   7D7A 57            [ 4] 5284 	ld	d, a
   7D7B 14            [ 4] 5285 	inc	d
   7D7C DD 7E FE      [19] 5286 	ld	a, -2 (ix)
   7D7F C6 02         [ 7] 5287 	add	a, #0x02
   7D81 DD 77 FC      [19] 5288 	ld	-4 (ix), a
   7D84 DD 7E FF      [19] 5289 	ld	a, -1 (ix)
   7D87 CE 00         [ 7] 5290 	adc	a, #0x00
   7D89 DD 77 FD      [19] 5291 	ld	-3 (ix), a
   7D8C E1            [10] 5292 	pop	hl
   7D8D E5            [11] 5293 	push	hl
   7D8E 7E            [ 7] 5294 	ld	a, (hl)
   7D8F C6 FD         [ 7] 5295 	add	a, #0xfd
   7D91 C5            [11] 5296 	push	bc
   7D92 5F            [ 4] 5297 	ld	e, a
   7D93 D5            [11] 5298 	push	de
   7D94 CD 0A 62      [17] 5299 	call	_OnBackground
   7D97 F1            [10] 5300 	pop	af
   7D98 C1            [10] 5301 	pop	bc
   7D99 7D            [ 4] 5302 	ld	a, l
   7D9A B7            [ 4] 5303 	or	a, a
   7D9B 28 4C         [12] 5304 	jr	Z,00106$
                           5305 ;src/main.c:1261: pSpr->x--;
   7D9D E1            [10] 5306 	pop	hl
   7D9E E5            [11] 5307 	push	hl
   7D9F 5E            [ 7] 5308 	ld	e, (hl)
   7DA0 1D            [ 4] 5309 	dec	e
   7DA1 E1            [10] 5310 	pop	hl
   7DA2 E5            [11] 5311 	push	hl
   7DA3 73            [ 7] 5312 	ld	(hl), e
                           5313 ;src/main.c:1262: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x-3, pSpr->y+1))
   7DA4 D1            [10] 5314 	pop	de
   7DA5 E1            [10] 5315 	pop	hl
   7DA6 E5            [11] 5316 	push	hl
   7DA7 D5            [11] 5317 	push	de
   7DA8 11 0E 00      [10] 5318 	ld	de, #0x000e
   7DAB 19            [11] 5319 	add	hl, de
   7DAC 7E            [ 7] 5320 	ld	a, (hl)
   7DAD B7            [ 4] 5321 	or	a, a
   7DAE 28 1D         [12] 5322 	jr	Z,00102$
   7DB0 0A            [ 7] 5323 	ld	a, (bc)
   7DB1 4F            [ 4] 5324 	ld	c, a
   7DB2 0C            [ 4] 5325 	inc	c
   7DB3 E1            [10] 5326 	pop	hl
   7DB4 E5            [11] 5327 	push	hl
   7DB5 7E            [ 7] 5328 	ld	a, (hl)
   7DB6 C6 FD         [ 7] 5329 	add	a, #0xfd
   7DB8 47            [ 4] 5330 	ld	b, a
   7DB9 79            [ 4] 5331 	ld	a, c
   7DBA F5            [11] 5332 	push	af
   7DBB 33            [ 6] 5333 	inc	sp
   7DBC C5            [11] 5334 	push	bc
   7DBD 33            [ 6] 5335 	inc	sp
   7DBE CD 0A 62      [17] 5336 	call	_OnBackground
   7DC1 F1            [10] 5337 	pop	af
   7DC2 7D            [ 4] 5338 	ld	a, l
   7DC3 B7            [ 4] 5339 	or	a, a
   7DC4 28 07         [12] 5340 	jr	Z,00102$
                           5341 ;src/main.c:1263: pSpr->x--; // powerUp speed*2
   7DC6 E1            [10] 5342 	pop	hl
   7DC7 E5            [11] 5343 	push	hl
   7DC8 4E            [ 7] 5344 	ld	c, (hl)
   7DC9 0D            [ 4] 5345 	dec	c
   7DCA E1            [10] 5346 	pop	hl
   7DCB E5            [11] 5347 	push	hl
   7DCC 71            [ 7] 5348 	ld	(hl), c
   7DCD                    5349 00102$:
                           5350 ;src/main.c:1265: pSpr->dir = D_left;
   7DCD DD 7E FE      [19] 5351 	ld	a, -2 (ix)
   7DD0 C6 07         [ 7] 5352 	add	a, #0x07
   7DD2 6F            [ 4] 5353 	ld	l, a
   7DD3 DD 7E FF      [19] 5354 	ld	a, -1 (ix)
   7DD6 CE 00         [ 7] 5355 	adc	a, #0x00
   7DD8 67            [ 4] 5356 	ld	h, a
   7DD9 36 02         [10] 5357 	ld	(hl), #0x02
                           5358 ;src/main.c:1266: pSpr->status = S_walkingLeft;
   7DDB DD 7E FE      [19] 5359 	ld	a, -2 (ix)
   7DDE C6 06         [ 7] 5360 	add	a, #0x06
   7DE0 6F            [ 4] 5361 	ld	l, a
   7DE1 DD 7E FF      [19] 5362 	ld	a, -1 (ix)
   7DE4 CE 00         [ 7] 5363 	adc	a, #0x00
   7DE6 67            [ 4] 5364 	ld	h, a
   7DE7 36 02         [10] 5365 	ld	(hl), #0x02
   7DE9                    5366 00106$:
   7DE9 DD F9         [10] 5367 	ld	sp, ix
   7DEB DD E1         [14] 5368 	pop	ix
   7DED C9            [10] 5369 	ret
                           5370 ;src/main.c:1271: void MoveRight(TSpr *pSpr) __z88dk_fastcall { 
                           5371 ;	---------------------------------
                           5372 ; Function MoveRight
                           5373 ; ---------------------------------
   7DEE                    5374 _MoveRight::
   7DEE DD E5         [15] 5375 	push	ix
   7DF0 DD 21 00 00   [14] 5376 	ld	ix,#0
   7DF4 DD 39         [15] 5377 	add	ix,sp
   7DF6 F5            [11] 5378 	push	af
   7DF7 F5            [11] 5379 	push	af
                           5380 ;src/main.c:1273: if (OnBackground(pSpr->x+1, pSpr->y+1)) {
   7DF8 DD 75 FE      [19] 5381 	ld	-2 (ix), l
   7DFB DD 74 FF      [19] 5382 	ld	-1 (ix), h
   7DFE 23            [ 6] 5383 	inc	hl
   7DFF 23            [ 6] 5384 	inc	hl
   7E00 23            [ 6] 5385 	inc	hl
   7E01 4D            [ 4] 5386 	ld	c,l
   7E02 44            [ 4] 5387 	ld	b,h
   7E03 0A            [ 7] 5388 	ld	a, (bc)
   7E04 57            [ 4] 5389 	ld	d, a
   7E05 14            [ 4] 5390 	inc	d
   7E06 DD 7E FE      [19] 5391 	ld	a, -2 (ix)
   7E09 C6 02         [ 7] 5392 	add	a, #0x02
   7E0B DD 77 FC      [19] 5393 	ld	-4 (ix), a
   7E0E DD 7E FF      [19] 5394 	ld	a, -1 (ix)
   7E11 CE 00         [ 7] 5395 	adc	a, #0x00
   7E13 DD 77 FD      [19] 5396 	ld	-3 (ix), a
   7E16 E1            [10] 5397 	pop	hl
   7E17 E5            [11] 5398 	push	hl
   7E18 7E            [ 7] 5399 	ld	a, (hl)
   7E19 3C            [ 4] 5400 	inc	a
   7E1A C5            [11] 5401 	push	bc
   7E1B 5F            [ 4] 5402 	ld	e, a
   7E1C D5            [11] 5403 	push	de
   7E1D CD 0A 62      [17] 5404 	call	_OnBackground
   7E20 F1            [10] 5405 	pop	af
   7E21 C1            [10] 5406 	pop	bc
   7E22 7D            [ 4] 5407 	ld	a, l
   7E23 B7            [ 4] 5408 	or	a, a
   7E24 28 4A         [12] 5409 	jr	Z,00106$
                           5410 ;src/main.c:1274: pSpr->x++;
   7E26 E1            [10] 5411 	pop	hl
   7E27 E5            [11] 5412 	push	hl
   7E28 5E            [ 7] 5413 	ld	e, (hl)
   7E29 1C            [ 4] 5414 	inc	e
   7E2A E1            [10] 5415 	pop	hl
   7E2B E5            [11] 5416 	push	hl
   7E2C 73            [ 7] 5417 	ld	(hl), e
                           5418 ;src/main.c:1275: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x+1, pSpr->y+1)) 
   7E2D D1            [10] 5419 	pop	de
   7E2E E1            [10] 5420 	pop	hl
   7E2F E5            [11] 5421 	push	hl
   7E30 D5            [11] 5422 	push	de
   7E31 11 0E 00      [10] 5423 	ld	de, #0x000e
   7E34 19            [11] 5424 	add	hl, de
   7E35 7E            [ 7] 5425 	ld	a, (hl)
   7E36 B7            [ 4] 5426 	or	a, a
   7E37 28 1B         [12] 5427 	jr	Z,00102$
   7E39 0A            [ 7] 5428 	ld	a, (bc)
   7E3A 4F            [ 4] 5429 	ld	c, a
   7E3B 0C            [ 4] 5430 	inc	c
   7E3C E1            [10] 5431 	pop	hl
   7E3D E5            [11] 5432 	push	hl
   7E3E 46            [ 7] 5433 	ld	b, (hl)
   7E3F 04            [ 4] 5434 	inc	b
   7E40 79            [ 4] 5435 	ld	a, c
   7E41 F5            [11] 5436 	push	af
   7E42 33            [ 6] 5437 	inc	sp
   7E43 C5            [11] 5438 	push	bc
   7E44 33            [ 6] 5439 	inc	sp
   7E45 CD 0A 62      [17] 5440 	call	_OnBackground
   7E48 F1            [10] 5441 	pop	af
   7E49 7D            [ 4] 5442 	ld	a, l
   7E4A B7            [ 4] 5443 	or	a, a
   7E4B 28 07         [12] 5444 	jr	Z,00102$
                           5445 ;src/main.c:1276: pSpr->x++; // powerUp speed*2
   7E4D E1            [10] 5446 	pop	hl
   7E4E E5            [11] 5447 	push	hl
   7E4F 4E            [ 7] 5448 	ld	c, (hl)
   7E50 0C            [ 4] 5449 	inc	c
   7E51 E1            [10] 5450 	pop	hl
   7E52 E5            [11] 5451 	push	hl
   7E53 71            [ 7] 5452 	ld	(hl), c
   7E54                    5453 00102$:
                           5454 ;src/main.c:1278: pSpr->dir = D_right;
   7E54 DD 7E FE      [19] 5455 	ld	a, -2 (ix)
   7E57 C6 07         [ 7] 5456 	add	a, #0x07
   7E59 6F            [ 4] 5457 	ld	l, a
   7E5A DD 7E FF      [19] 5458 	ld	a, -1 (ix)
   7E5D CE 00         [ 7] 5459 	adc	a, #0x00
   7E5F 67            [ 4] 5460 	ld	h, a
   7E60 36 03         [10] 5461 	ld	(hl), #0x03
                           5462 ;src/main.c:1279: pSpr->status = S_walkingRight;
   7E62 DD 7E FE      [19] 5463 	ld	a, -2 (ix)
   7E65 C6 06         [ 7] 5464 	add	a, #0x06
   7E67 6F            [ 4] 5465 	ld	l, a
   7E68 DD 7E FF      [19] 5466 	ld	a, -1 (ix)
   7E6B CE 00         [ 7] 5467 	adc	a, #0x00
   7E6D 67            [ 4] 5468 	ld	h, a
   7E6E 36 03         [10] 5469 	ld	(hl), #0x03
   7E70                    5470 00106$:
   7E70 DD F9         [10] 5471 	ld	sp, ix
   7E72 DD E1         [14] 5472 	pop	ix
   7E74 C9            [10] 5473 	ret
                           5474 ;src/main.c:1285: void WalkIn(TSpr *pSpr, u8 dir) {
                           5475 ;	---------------------------------
                           5476 ; Function WalkIn
                           5477 ; ---------------------------------
   7E75                    5478 _WalkIn::
                           5479 ;src/main.c:1286: pSpr->nFrm = 0;
   7E75 D1            [10] 5480 	pop	de
   7E76 C1            [10] 5481 	pop	bc
   7E77 C5            [11] 5482 	push	bc
   7E78 D5            [11] 5483 	push	de
   7E79 21 0A 00      [10] 5484 	ld	hl, #0x000a
   7E7C 09            [11] 5485 	add	hl, bc
   7E7D 36 00         [10] 5486 	ld	(hl), #0x00
                           5487 ;src/main.c:1287: pSpr->dir = dir;
   7E7F 21 07 00      [10] 5488 	ld	hl, #0x0007
   7E82 09            [11] 5489 	add	hl, bc
   7E83 FD 21 04 00   [14] 5490 	ld	iy, #4
   7E87 FD 39         [15] 5491 	add	iy, sp
   7E89 FD 7E 00      [19] 5492 	ld	a, 0 (iy)
   7E8C 77            [ 7] 5493 	ld	(hl), a
                           5494 ;src/main.c:1288: pSpr->status = dir;
   7E8D 21 06 00      [10] 5495 	ld	hl, #0x0006
   7E90 09            [11] 5496 	add	hl, bc
   7E91 FD 7E 00      [19] 5497 	ld	a, 0 (iy)
   7E94 77            [ 7] 5498 	ld	(hl), a
                           5499 ;src/main.c:1289: pSpr->print_minV = TRUE; // the sprite must be printed, it will move
   7E95 21 0D 00      [10] 5500 	ld	hl, #0x000d
   7E98 09            [11] 5501 	add	hl, bc
   7E99 36 01         [10] 5502 	ld	(hl), #0x01
   7E9B C9            [10] 5503 	ret
                           5504 ;src/main.c:1294: void Stop(TSpr *pSpr) __z88dk_fastcall {
                           5505 ;	---------------------------------
                           5506 ; Function Stop
                           5507 ; ---------------------------------
   7E9C                    5508 _Stop::
   7E9C DD E5         [15] 5509 	push	ix
   7E9E DD 21 00 00   [14] 5510 	ld	ix,#0
   7EA2 DD 39         [15] 5511 	add	ix,sp
   7EA4 F5            [11] 5512 	push	af
   7EA5 F5            [11] 5513 	push	af
   7EA6 DD 75 FE      [19] 5514 	ld	-2 (ix), l
   7EA9 DD 74 FF      [19] 5515 	ld	-1 (ix), h
                           5516 ;src/main.c:1295: cpct_scanKeyboard_f(); // check the pressed keys
   7EAC CD CD 51      [17] 5517 	call	_cpct_scanKeyboard_f
                           5518 ;src/main.c:1296: if(cpct_isKeyPressed(ctlUp[pSpr->ident]))			WalkIn(pSpr, D_up);
   7EAF 01 F4 5E      [10] 5519 	ld	bc, #_ctlUp+0
   7EB2 DD 7E FE      [19] 5520 	ld	a, -2 (ix)
   7EB5 C6 01         [ 7] 5521 	add	a, #0x01
   7EB7 DD 77 FC      [19] 5522 	ld	-4 (ix), a
   7EBA DD 7E FF      [19] 5523 	ld	a, -1 (ix)
   7EBD CE 00         [ 7] 5524 	adc	a, #0x00
   7EBF DD 77 FD      [19] 5525 	ld	-3 (ix), a
   7EC2 E1            [10] 5526 	pop	hl
   7EC3 E5            [11] 5527 	push	hl
   7EC4 6E            [ 7] 5528 	ld	l, (hl)
   7EC5 26 00         [ 7] 5529 	ld	h, #0x00
   7EC7 29            [11] 5530 	add	hl, hl
   7EC8 09            [11] 5531 	add	hl, bc
   7EC9 4E            [ 7] 5532 	ld	c, (hl)
   7ECA 23            [ 6] 5533 	inc	hl
   7ECB 66            [ 7] 5534 	ld	h, (hl)
   7ECC 69            [ 4] 5535 	ld	l, c
   7ECD CD C1 51      [17] 5536 	call	_cpct_isKeyPressed
   7ED0 7D            [ 4] 5537 	ld	a, l
   7ED1 B7            [ 4] 5538 	or	a, a
   7ED2 28 12         [12] 5539 	jr	Z,00127$
   7ED4 AF            [ 4] 5540 	xor	a, a
   7ED5 F5            [11] 5541 	push	af
   7ED6 33            [ 6] 5542 	inc	sp
   7ED7 DD 6E FE      [19] 5543 	ld	l,-2 (ix)
   7EDA DD 66 FF      [19] 5544 	ld	h,-1 (ix)
   7EDD E5            [11] 5545 	push	hl
   7EDE CD 75 7E      [17] 5546 	call	_WalkIn
   7EE1 F1            [10] 5547 	pop	af
   7EE2 33            [ 6] 5548 	inc	sp
   7EE3 C3 EB 7F      [10] 5549 	jp	00129$
   7EE6                    5550 00127$:
                           5551 ;src/main.c:1297: else if(cpct_isKeyPressed(ctlDown[pSpr->ident]))	WalkIn(pSpr, D_down);
   7EE6 E1            [10] 5552 	pop	hl
   7EE7 E5            [11] 5553 	push	hl
   7EE8 6E            [ 7] 5554 	ld	l, (hl)
   7EE9 26 00         [ 7] 5555 	ld	h, #0x00
   7EEB 29            [11] 5556 	add	hl, hl
   7EEC 11 F8 5E      [10] 5557 	ld	de, #_ctlDown
   7EEF 19            [11] 5558 	add	hl, de
   7EF0 7E            [ 7] 5559 	ld	a, (hl)
   7EF1 23            [ 6] 5560 	inc	hl
   7EF2 66            [ 7] 5561 	ld	h, (hl)
   7EF3 6F            [ 4] 5562 	ld	l, a
   7EF4 CD C1 51      [17] 5563 	call	_cpct_isKeyPressed
   7EF7 7D            [ 4] 5564 	ld	a, l
   7EF8 B7            [ 4] 5565 	or	a, a
   7EF9 28 13         [12] 5566 	jr	Z,00124$
   7EFB 3E 01         [ 7] 5567 	ld	a, #0x01
   7EFD F5            [11] 5568 	push	af
   7EFE 33            [ 6] 5569 	inc	sp
   7EFF DD 6E FE      [19] 5570 	ld	l,-2 (ix)
   7F02 DD 66 FF      [19] 5571 	ld	h,-1 (ix)
   7F05 E5            [11] 5572 	push	hl
   7F06 CD 75 7E      [17] 5573 	call	_WalkIn
   7F09 F1            [10] 5574 	pop	af
   7F0A 33            [ 6] 5575 	inc	sp
   7F0B C3 EB 7F      [10] 5576 	jp	00129$
   7F0E                    5577 00124$:
                           5578 ;src/main.c:1298: else if(cpct_isKeyPressed(ctlLeft[pSpr->ident]))	WalkIn(pSpr, D_left);
   7F0E E1            [10] 5579 	pop	hl
   7F0F E5            [11] 5580 	push	hl
   7F10 6E            [ 7] 5581 	ld	l, (hl)
   7F11 26 00         [ 7] 5582 	ld	h, #0x00
   7F13 29            [11] 5583 	add	hl, hl
   7F14 11 FC 5E      [10] 5584 	ld	de, #_ctlLeft
   7F17 19            [11] 5585 	add	hl, de
   7F18 7E            [ 7] 5586 	ld	a, (hl)
   7F19 23            [ 6] 5587 	inc	hl
   7F1A 66            [ 7] 5588 	ld	h, (hl)
   7F1B 6F            [ 4] 5589 	ld	l, a
   7F1C CD C1 51      [17] 5590 	call	_cpct_isKeyPressed
   7F1F 7D            [ 4] 5591 	ld	a, l
   7F20 B7            [ 4] 5592 	or	a, a
   7F21 28 13         [12] 5593 	jr	Z,00121$
   7F23 3E 02         [ 7] 5594 	ld	a, #0x02
   7F25 F5            [11] 5595 	push	af
   7F26 33            [ 6] 5596 	inc	sp
   7F27 DD 6E FE      [19] 5597 	ld	l,-2 (ix)
   7F2A DD 66 FF      [19] 5598 	ld	h,-1 (ix)
   7F2D E5            [11] 5599 	push	hl
   7F2E CD 75 7E      [17] 5600 	call	_WalkIn
   7F31 F1            [10] 5601 	pop	af
   7F32 33            [ 6] 5602 	inc	sp
   7F33 C3 EB 7F      [10] 5603 	jp	00129$
   7F36                    5604 00121$:
                           5605 ;src/main.c:1299: else if(cpct_isKeyPressed(ctlRight[pSpr->ident]))	WalkIn(pSpr, D_right);	
   7F36 E1            [10] 5606 	pop	hl
   7F37 E5            [11] 5607 	push	hl
   7F38 6E            [ 7] 5608 	ld	l, (hl)
   7F39 26 00         [ 7] 5609 	ld	h, #0x00
   7F3B 29            [11] 5610 	add	hl, hl
   7F3C 11 00 5F      [10] 5611 	ld	de, #_ctlRight
   7F3F 19            [11] 5612 	add	hl, de
   7F40 7E            [ 7] 5613 	ld	a, (hl)
   7F41 23            [ 6] 5614 	inc	hl
   7F42 66            [ 7] 5615 	ld	h, (hl)
   7F43 6F            [ 4] 5616 	ld	l, a
   7F44 CD C1 51      [17] 5617 	call	_cpct_isKeyPressed
   7F47 7D            [ 4] 5618 	ld	a, l
   7F48 B7            [ 4] 5619 	or	a, a
   7F49 28 13         [12] 5620 	jr	Z,00118$
   7F4B 3E 03         [ 7] 5621 	ld	a, #0x03
   7F4D F5            [11] 5622 	push	af
   7F4E 33            [ 6] 5623 	inc	sp
   7F4F DD 6E FE      [19] 5624 	ld	l,-2 (ix)
   7F52 DD 66 FF      [19] 5625 	ld	h,-1 (ix)
   7F55 E5            [11] 5626 	push	hl
   7F56 CD 75 7E      [17] 5627 	call	_WalkIn
   7F59 F1            [10] 5628 	pop	af
   7F5A 33            [ 6] 5629 	inc	sp
   7F5B C3 EB 7F      [10] 5630 	jp	00129$
   7F5E                    5631 00118$:
                           5632 ;src/main.c:1301: else if(cpct_isKeyPressed(ctlAbort)) {
   7F5E 2A 04 5F      [16] 5633 	ld	hl, (_ctlAbort)
   7F61 CD C1 51      [17] 5634 	call	_cpct_isKeyPressed
   7F64 7D            [ 4] 5635 	ld	a, l
   7F65 B7            [ 4] 5636 	or	a, a
   7F66 28 14         [12] 5637 	jr	Z,00115$
                           5638 ;src/main.c:1302: spr[0].lives_speed = 0;
   7F68 21 15 5F      [10] 5639 	ld	hl, #(_spr + 0x000b)
   7F6B 36 00         [10] 5640 	ld	(hl), #0x00
                           5641 ;src/main.c:1303: spr[1].lives_speed = 0;
   7F6D 21 24 5F      [10] 5642 	ld	hl, #(_spr + 0x001a)
   7F70 36 00         [10] 5643 	ld	(hl), #0x00
                           5644 ;src/main.c:1304: GameOver(2);
   7F72 3E 02         [ 7] 5645 	ld	a, #0x02
   7F74 F5            [11] 5646 	push	af
   7F75 33            [ 6] 5647 	inc	sp
   7F76 CD 4F A0      [17] 5648 	call	_GameOver
   7F79 33            [ 6] 5649 	inc	sp
   7F7A 18 6F         [12] 5650 	jr	00129$
   7F7C                    5651 00115$:
                           5652 ;src/main.c:1307: else if(cpct_isKeyPressed(ctlMusic)) {
   7F7C 2A 06 5F      [16] 5653 	ld	hl, (_ctlMusic)
   7F7F CD C1 51      [17] 5654 	call	_cpct_isKeyPressed
   7F82 7D            [ 4] 5655 	ld	a, l
   7F83 B7            [ 4] 5656 	or	a, a
   7F84 28 2F         [12] 5657 	jr	Z,00112$
                           5658 ;src/main.c:1308: Wait4Key(ctlMusic);
   7F86 2A 06 5F      [16] 5659 	ld	hl, (_ctlMusic)
   7F89 E5            [11] 5660 	push	hl
   7F8A CD 6F 68      [17] 5661 	call	_Wait4Key
   7F8D F1            [10] 5662 	pop	af
                           5663 ;src/main.c:1309: if (music == TRUE) { // if the music is playing ...
   7F8E FD 21 EB 5E   [14] 5664 	ld	iy, #_music
   7F92 FD 7E 00      [19] 5665 	ld	a, 0 (iy)
   7F95 3D            [ 4] 5666 	dec	a
   7F96 20 0E         [12] 5667 	jr	NZ,00102$
                           5668 ;src/main.c:1310: music = FALSE;
   7F98 FD 36 00 00   [19] 5669 	ld	0 (iy), #0x00
                           5670 ;src/main.c:1311: cpct_akp_musicInit(g_fx);
   7F9C 21 C4 05      [10] 5671 	ld	hl, #_g_fx
   7F9F E5            [11] 5672 	push	hl
   7FA0 CD 48 59      [17] 5673 	call	_cpct_akp_musicInit
   7FA3 F1            [10] 5674 	pop	af
   7FA4 18 45         [12] 5675 	jr	00129$
   7FA6                    5676 00102$:
                           5677 ;src/main.c:1314: music = TRUE;			
   7FA6 21 EB 5E      [10] 5678 	ld	hl,#_music + 0
   7FA9 36 01         [10] 5679 	ld	(hl), #0x01
                           5680 ;src/main.c:1315: cpct_akp_musicInit(g_ingame); // music ingame
   7FAB 21 91 07      [10] 5681 	ld	hl, #_g_ingame
   7FAE E5            [11] 5682 	push	hl
   7FAF CD 48 59      [17] 5683 	call	_cpct_akp_musicInit
   7FB2 F1            [10] 5684 	pop	af
   7FB3 18 36         [12] 5685 	jr	00129$
   7FB5                    5686 00112$:
                           5687 ;src/main.c:1319: else if(cpct_isKeyPressed(ctlPause)) {
   7FB5 2A 08 5F      [16] 5688 	ld	hl, (_ctlPause)
   7FB8 CD C1 51      [17] 5689 	call	_cpct_isKeyPressed
   7FBB 7D            [ 4] 5690 	ld	a, l
   7FBC B7            [ 4] 5691 	or	a, a
   7FBD 28 2C         [12] 5692 	jr	Z,00129$
                           5693 ;src/main.c:1320: Wait4Key(ctlPause);
   7FBF 2A 08 5F      [16] 5694 	ld	hl, (_ctlPause)
   7FC2 E5            [11] 5695 	push	hl
   7FC3 CD 6F 68      [17] 5696 	call	_Wait4Key
                           5697 ;src/main.c:1321: cpct_akp_musicInit(g_fx);
   7FC6 21 C4 05      [10] 5698 	ld	hl, #_g_fx
   7FC9 E3            [19] 5699 	ex	(sp),hl
   7FCA CD 48 59      [17] 5700 	call	_cpct_akp_musicInit
   7FCD F1            [10] 5701 	pop	af
                           5702 ;src/main.c:1322: while (!cpct_isAnyKeyPressed());
   7FCE                    5703 00104$:
   7FCE CD E5 5B      [17] 5704 	call	_cpct_isAnyKeyPressed
   7FD1 7D            [ 4] 5705 	ld	a, l
   7FD2 B7            [ 4] 5706 	or	a, a
   7FD3 28 F9         [12] 5707 	jr	Z,00104$
                           5708 ;src/main.c:1323: Wait4Key(ctlPause);
   7FD5 2A 08 5F      [16] 5709 	ld	hl, (_ctlPause)
   7FD8 E5            [11] 5710 	push	hl
   7FD9 CD 6F 68      [17] 5711 	call	_Wait4Key
   7FDC F1            [10] 5712 	pop	af
                           5713 ;src/main.c:1324: if (music)
   7FDD 3A EB 5E      [13] 5714 	ld	a,(#_music + 0)
   7FE0 B7            [ 4] 5715 	or	a, a
   7FE1 28 08         [12] 5716 	jr	Z,00129$
                           5717 ;src/main.c:1325: cpct_akp_musicInit(g_ingame); // music ingame
   7FE3 01 91 07      [10] 5718 	ld	bc, #_g_ingame
   7FE6 C5            [11] 5719 	push	bc
   7FE7 CD 48 59      [17] 5720 	call	_cpct_akp_musicInit
   7FEA F1            [10] 5721 	pop	af
   7FEB                    5722 00129$:
   7FEB DD F9         [10] 5723 	ld	sp, ix
   7FED DD E1         [14] 5724 	pop	ix
   7FEF C9            [10] 5725 	ret
                           5726 ;src/main.c:1349: void WalkAnim(TSpr *pSpr, u8 dir) {
                           5727 ;	---------------------------------
                           5728 ; Function WalkAnim
                           5729 ; ---------------------------------
   7FF0                    5730 _WalkAnim::
   7FF0 DD E5         [15] 5731 	push	ix
   7FF2 DD 21 00 00   [14] 5732 	ld	ix,#0
   7FF6 DD 39         [15] 5733 	add	ix,sp
                           5734 ;src/main.c:1350: u8 animPause = 2;
   7FF8 0E 02         [ 7] 5735 	ld	c, #0x02
                           5736 ;src/main.c:1351: if (pSpr->num > 3) animPause = 1; // slow enemies (4 and 5) have no pause in animation
   7FFA DD 5E 04      [19] 5737 	ld	e,4 (ix)
   7FFD DD 56 05      [19] 5738 	ld	d,5 (ix)
   8000 1A            [ 7] 5739 	ld	a, (de)
   8001 47            [ 4] 5740 	ld	b, a
   8002 3E 03         [ 7] 5741 	ld	a, #0x03
   8004 90            [ 4] 5742 	sub	a, b
   8005 30 02         [12] 5743 	jr	NC,00102$
   8007 0E 01         [ 7] 5744 	ld	c, #0x01
   8009                    5745 00102$:
                           5746 ;src/main.c:1352: pSpr->dir = dir;
   8009 21 07 00      [10] 5747 	ld	hl, #0x0007
   800C 19            [11] 5748 	add	hl, de
   800D DD 7E 06      [19] 5749 	ld	a, 6 (ix)
   8010 77            [ 7] 5750 	ld	(hl), a
                           5751 ;src/main.c:1353: if(++pSpr->nFrm == animPause*2) pSpr->nFrm = 0;
   8011 FD 21 0A 00   [14] 5752 	ld	iy, #0x000a
   8015 FD 19         [15] 5753 	add	iy, de
   8017 FD 34 00      [23] 5754 	inc	0 (iy)
   801A FD 5E 00      [19] 5755 	ld	e, 0 (iy)
   801D 06 00         [ 7] 5756 	ld	b, #0x00
   801F CB 21         [ 8] 5757 	sla	c
   8021 CB 10         [ 8] 5758 	rl	b
   8023 16 00         [ 7] 5759 	ld	d, #0x00
   8025 79            [ 4] 5760 	ld	a, c
   8026 93            [ 4] 5761 	sub	a, e
   8027 20 08         [12] 5762 	jr	NZ,00105$
   8029 78            [ 4] 5763 	ld	a, b
   802A 92            [ 4] 5764 	sub	a, d
   802B 20 04         [12] 5765 	jr	NZ,00105$
   802D FD 36 00 00   [19] 5766 	ld	0 (iy), #0x00
   8031                    5767 00105$:
   8031 DD E1         [14] 5768 	pop	ix
   8033 C9            [10] 5769 	ret
                           5770 ;src/main.c:1358: void Walk(TSpr *pSpr) __z88dk_fastcall {
                           5771 ;	---------------------------------
                           5772 ; Function Walk
                           5773 ; ---------------------------------
   8034                    5774 _Walk::
   8034 DD E5         [15] 5775 	push	ix
   8036 DD 21 00 00   [14] 5776 	ld	ix,#0
   803A DD 39         [15] 5777 	add	ix,sp
   803C F5            [11] 5778 	push	af
   803D F5            [11] 5779 	push	af
   803E DD 75 FE      [19] 5780 	ld	-2 (ix), l
   8041 DD 74 FF      [19] 5781 	ld	-1 (ix), h
                           5782 ;src/main.c:1359: cpct_scanKeyboard_f(); // check the pressed keys
   8044 CD CD 51      [17] 5783 	call	_cpct_scanKeyboard_f
                           5784 ;src/main.c:1361: if(cpct_isKeyPressed(ctlRight[pSpr->ident])) {	
   8047 11 00 5F      [10] 5785 	ld	de, #_ctlRight+0
   804A DD 4E FE      [19] 5786 	ld	c,-2 (ix)
   804D DD 46 FF      [19] 5787 	ld	b,-1 (ix)
   8050 03            [ 6] 5788 	inc	bc
   8051 0A            [ 7] 5789 	ld	a, (bc)
   8052 6F            [ 4] 5790 	ld	l, a
   8053 26 00         [ 7] 5791 	ld	h, #0x00
   8055 29            [11] 5792 	add	hl, hl
   8056 19            [11] 5793 	add	hl, de
   8057 5E            [ 7] 5794 	ld	e, (hl)
   8058 23            [ 6] 5795 	inc	hl
   8059 66            [ 7] 5796 	ld	h, (hl)
   805A C5            [11] 5797 	push	bc
   805B 6B            [ 4] 5798 	ld	l, e
   805C CD C1 51      [17] 5799 	call	_cpct_isKeyPressed
   805F 5D            [ 4] 5800 	ld	e, l
   8060 C1            [10] 5801 	pop	bc
   8061 0A            [ 7] 5802 	ld	a, (bc)
   8062 6F            [ 4] 5803 	ld	l, a
                           5804 ;src/main.c:1362: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr);  // diagonal derecha-arriba
   8063 26 00         [ 7] 5805 	ld	h, #0x00
   8065 29            [11] 5806 	add	hl, hl
   8066 E3            [19] 5807 	ex	(sp), hl
                           5808 ;src/main.c:1361: if(cpct_isKeyPressed(ctlRight[pSpr->ident])) {	
   8067 7B            [ 4] 5809 	ld	a, e
   8068 B7            [ 4] 5810 	or	a, a
   8069 28 51         [12] 5811 	jr	Z,00121$
                           5812 ;src/main.c:1362: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr);  // diagonal derecha-arriba
   806B 11 F4 5E      [10] 5813 	ld	de, #_ctlUp+0
   806E E1            [10] 5814 	pop	hl
   806F E5            [11] 5815 	push	hl
   8070 19            [11] 5816 	add	hl, de
   8071 5E            [ 7] 5817 	ld	e, (hl)
   8072 23            [ 6] 5818 	inc	hl
   8073 66            [ 7] 5819 	ld	h, (hl)
   8074 C5            [11] 5820 	push	bc
   8075 6B            [ 4] 5821 	ld	l, e
   8076 CD C1 51      [17] 5822 	call	_cpct_isKeyPressed
   8079 C1            [10] 5823 	pop	bc
   807A 7D            [ 4] 5824 	ld	a, l
   807B B7            [ 4] 5825 	or	a, a
   807C 28 09         [12] 5826 	jr	Z,00104$
   807E C1            [10] 5827 	pop	bc
   807F E1            [10] 5828 	pop	hl
   8080 E5            [11] 5829 	push	hl
   8081 C5            [11] 5830 	push	bc
   8082 CD 37 7C      [17] 5831 	call	_MoveUp
   8085 18 1B         [12] 5832 	jr	00105$
   8087                    5833 00104$:
                           5834 ;src/main.c:1363: else if(cpct_isKeyPressed(ctlDown[pSpr->ident]))	MoveDown(pSpr); // diagonal derecha-abajo
   8087 11 F8 5E      [10] 5835 	ld	de, #_ctlDown+0
   808A 0A            [ 7] 5836 	ld	a, (bc)
   808B 6F            [ 4] 5837 	ld	l, a
   808C 26 00         [ 7] 5838 	ld	h, #0x00
   808E 29            [11] 5839 	add	hl, hl
   808F 19            [11] 5840 	add	hl, de
   8090 4E            [ 7] 5841 	ld	c, (hl)
   8091 23            [ 6] 5842 	inc	hl
   8092 66            [ 7] 5843 	ld	h, (hl)
   8093 69            [ 4] 5844 	ld	l, c
   8094 CD C1 51      [17] 5845 	call	_cpct_isKeyPressed
   8097 7D            [ 4] 5846 	ld	a, l
   8098 B7            [ 4] 5847 	or	a, a
   8099 28 07         [12] 5848 	jr	Z,00105$
   809B C1            [10] 5849 	pop	bc
   809C E1            [10] 5850 	pop	hl
   809D E5            [11] 5851 	push	hl
   809E C5            [11] 5852 	push	bc
   809F CD C4 7C      [17] 5853 	call	_MoveDown
   80A2                    5854 00105$:
                           5855 ;src/main.c:1364: MoveRight(pSpr);
   80A2 C1            [10] 5856 	pop	bc
   80A3 E1            [10] 5857 	pop	hl
   80A4 E5            [11] 5858 	push	hl
   80A5 C5            [11] 5859 	push	bc
   80A6 CD EE 7D      [17] 5860 	call	_MoveRight
                           5861 ;src/main.c:1365: WalkAnim(pSpr, D_right);
   80A9 3E 03         [ 7] 5862 	ld	a, #0x03
   80AB F5            [11] 5863 	push	af
   80AC 33            [ 6] 5864 	inc	sp
   80AD DD 6E FE      [19] 5865 	ld	l,-2 (ix)
   80B0 DD 66 FF      [19] 5866 	ld	h,-1 (ix)
   80B3 E5            [11] 5867 	push	hl
   80B4 CD F0 7F      [17] 5868 	call	_WalkAnim
   80B7 F1            [10] 5869 	pop	af
   80B8 33            [ 6] 5870 	inc	sp
   80B9 C3 8C 81      [10] 5871 	jp	00123$
   80BC                    5872 00121$:
                           5873 ;src/main.c:1368: else if(cpct_isKeyPressed(ctlLeft[pSpr->ident])) {	
   80BC 11 FC 5E      [10] 5874 	ld	de, #_ctlLeft+0
   80BF E1            [10] 5875 	pop	hl
   80C0 E5            [11] 5876 	push	hl
   80C1 19            [11] 5877 	add	hl, de
   80C2 5E            [ 7] 5878 	ld	e, (hl)
   80C3 23            [ 6] 5879 	inc	hl
   80C4 66            [ 7] 5880 	ld	h, (hl)
   80C5 C5            [11] 5881 	push	bc
   80C6 6B            [ 4] 5882 	ld	l, e
   80C7 CD C1 51      [17] 5883 	call	_cpct_isKeyPressed
   80CA 5D            [ 4] 5884 	ld	e, l
   80CB C1            [10] 5885 	pop	bc
                           5886 ;src/main.c:1361: if(cpct_isKeyPressed(ctlRight[pSpr->ident])) {	
   80CC 0A            [ 7] 5887 	ld	a, (bc)
   80CD 6F            [ 4] 5888 	ld	l, a
                           5889 ;src/main.c:1362: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr);  // diagonal derecha-arriba
   80CE 26 00         [ 7] 5890 	ld	h, #0x00
   80D0 29            [11] 5891 	add	hl, hl
   80D1 E3            [19] 5892 	ex	(sp), hl
                           5893 ;src/main.c:1368: else if(cpct_isKeyPressed(ctlLeft[pSpr->ident])) {	
   80D2 7B            [ 4] 5894 	ld	a, e
   80D3 B7            [ 4] 5895 	or	a, a
   80D4 28 50         [12] 5896 	jr	Z,00118$
                           5897 ;src/main.c:1369: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr); // diagonal izda-arriba
   80D6 11 F4 5E      [10] 5898 	ld	de, #_ctlUp+0
   80D9 E1            [10] 5899 	pop	hl
   80DA E5            [11] 5900 	push	hl
   80DB 19            [11] 5901 	add	hl, de
   80DC 5E            [ 7] 5902 	ld	e, (hl)
   80DD 23            [ 6] 5903 	inc	hl
   80DE 66            [ 7] 5904 	ld	h, (hl)
   80DF C5            [11] 5905 	push	bc
   80E0 6B            [ 4] 5906 	ld	l, e
   80E1 CD C1 51      [17] 5907 	call	_cpct_isKeyPressed
   80E4 C1            [10] 5908 	pop	bc
   80E5 7D            [ 4] 5909 	ld	a, l
   80E6 B7            [ 4] 5910 	or	a, a
   80E7 28 09         [12] 5911 	jr	Z,00109$
   80E9 C1            [10] 5912 	pop	bc
   80EA E1            [10] 5913 	pop	hl
   80EB E5            [11] 5914 	push	hl
   80EC C5            [11] 5915 	push	bc
   80ED CD 37 7C      [17] 5916 	call	_MoveUp
   80F0 18 1B         [12] 5917 	jr	00110$
   80F2                    5918 00109$:
                           5919 ;src/main.c:1370: else if(cpct_isKeyPressed(ctlDown[pSpr->ident]))	MoveDown(pSpr); // diagonal izda-abajo
   80F2 0A            [ 7] 5920 	ld	a, (bc)
   80F3 6F            [ 4] 5921 	ld	l, a
   80F4 26 00         [ 7] 5922 	ld	h, #0x00
   80F6 29            [11] 5923 	add	hl, hl
   80F7 11 F8 5E      [10] 5924 	ld	de, #_ctlDown
   80FA 19            [11] 5925 	add	hl, de
   80FB 4E            [ 7] 5926 	ld	c, (hl)
   80FC 23            [ 6] 5927 	inc	hl
   80FD 66            [ 7] 5928 	ld	h, (hl)
   80FE 69            [ 4] 5929 	ld	l, c
   80FF CD C1 51      [17] 5930 	call	_cpct_isKeyPressed
   8102 7D            [ 4] 5931 	ld	a, l
   8103 B7            [ 4] 5932 	or	a, a
   8104 28 07         [12] 5933 	jr	Z,00110$
   8106 C1            [10] 5934 	pop	bc
   8107 E1            [10] 5935 	pop	hl
   8108 E5            [11] 5936 	push	hl
   8109 C5            [11] 5937 	push	bc
   810A CD C4 7C      [17] 5938 	call	_MoveDown
   810D                    5939 00110$:
                           5940 ;src/main.c:1371: MoveLeft(pSpr); 
   810D C1            [10] 5941 	pop	bc
   810E E1            [10] 5942 	pop	hl
   810F E5            [11] 5943 	push	hl
   8110 C5            [11] 5944 	push	bc
   8111 CD 64 7D      [17] 5945 	call	_MoveLeft
                           5946 ;src/main.c:1372: WalkAnim(pSpr, D_left);
   8114 3E 02         [ 7] 5947 	ld	a, #0x02
   8116 F5            [11] 5948 	push	af
   8117 33            [ 6] 5949 	inc	sp
   8118 DD 6E FE      [19] 5950 	ld	l,-2 (ix)
   811B DD 66 FF      [19] 5951 	ld	h,-1 (ix)
   811E E5            [11] 5952 	push	hl
   811F CD F0 7F      [17] 5953 	call	_WalkAnim
   8122 F1            [10] 5954 	pop	af
   8123 33            [ 6] 5955 	inc	sp
   8124 18 66         [12] 5956 	jr	00123$
   8126                    5957 00118$:
                           5958 ;src/main.c:1375: else if(cpct_isKeyPressed(ctlUp[pSpr->ident])) {
   8126 11 F4 5E      [10] 5959 	ld	de, #_ctlUp+0
   8129 E1            [10] 5960 	pop	hl
   812A E5            [11] 5961 	push	hl
   812B 19            [11] 5962 	add	hl, de
   812C 5E            [ 7] 5963 	ld	e, (hl)
   812D 23            [ 6] 5964 	inc	hl
   812E 66            [ 7] 5965 	ld	h, (hl)
   812F C5            [11] 5966 	push	bc
   8130 6B            [ 4] 5967 	ld	l, e
   8131 CD C1 51      [17] 5968 	call	_cpct_isKeyPressed
   8134 C1            [10] 5969 	pop	bc
   8135 7D            [ 4] 5970 	ld	a, l
   8136 B7            [ 4] 5971 	or	a, a
   8137 28 18         [12] 5972 	jr	Z,00115$
                           5973 ;src/main.c:1376: MoveUp(pSpr); 
   8139 C1            [10] 5974 	pop	bc
   813A E1            [10] 5975 	pop	hl
   813B E5            [11] 5976 	push	hl
   813C C5            [11] 5977 	push	bc
   813D CD 37 7C      [17] 5978 	call	_MoveUp
                           5979 ;src/main.c:1377: WalkAnim(pSpr, D_up);
   8140 AF            [ 4] 5980 	xor	a, a
   8141 F5            [11] 5981 	push	af
   8142 33            [ 6] 5982 	inc	sp
   8143 DD 6E FE      [19] 5983 	ld	l,-2 (ix)
   8146 DD 66 FF      [19] 5984 	ld	h,-1 (ix)
   8149 E5            [11] 5985 	push	hl
   814A CD F0 7F      [17] 5986 	call	_WalkAnim
   814D F1            [10] 5987 	pop	af
   814E 33            [ 6] 5988 	inc	sp
   814F 18 3B         [12] 5989 	jr	00123$
   8151                    5990 00115$:
                           5991 ;src/main.c:1380: else if(cpct_isKeyPressed(ctlDown[pSpr->ident])) {
   8151 0A            [ 7] 5992 	ld	a, (bc)
   8152 6F            [ 4] 5993 	ld	l, a
   8153 26 00         [ 7] 5994 	ld	h, #0x00
   8155 29            [11] 5995 	add	hl, hl
   8156 11 F8 5E      [10] 5996 	ld	de, #_ctlDown
   8159 19            [11] 5997 	add	hl, de
   815A 7E            [ 7] 5998 	ld	a, (hl)
   815B 23            [ 6] 5999 	inc	hl
   815C 66            [ 7] 6000 	ld	h, (hl)
   815D 6F            [ 4] 6001 	ld	l, a
   815E CD C1 51      [17] 6002 	call	_cpct_isKeyPressed
   8161 7D            [ 4] 6003 	ld	a, l
   8162 B7            [ 4] 6004 	or	a, a
   8163 28 19         [12] 6005 	jr	Z,00112$
                           6006 ;src/main.c:1381: MoveDown(pSpr); 
   8165 C1            [10] 6007 	pop	bc
   8166 E1            [10] 6008 	pop	hl
   8167 E5            [11] 6009 	push	hl
   8168 C5            [11] 6010 	push	bc
   8169 CD C4 7C      [17] 6011 	call	_MoveDown
                           6012 ;src/main.c:1382: WalkAnim(pSpr, D_down);
   816C 3E 01         [ 7] 6013 	ld	a, #0x01
   816E F5            [11] 6014 	push	af
   816F 33            [ 6] 6015 	inc	sp
   8170 DD 6E FE      [19] 6016 	ld	l,-2 (ix)
   8173 DD 66 FF      [19] 6017 	ld	h,-1 (ix)
   8176 E5            [11] 6018 	push	hl
   8177 CD F0 7F      [17] 6019 	call	_WalkAnim
   817A F1            [10] 6020 	pop	af
   817B 33            [ 6] 6021 	inc	sp
   817C 18 0E         [12] 6022 	jr	00123$
   817E                    6023 00112$:
                           6024 ;src/main.c:1385: pSpr->status = S_stopped;
   817E DD 7E FE      [19] 6025 	ld	a, -2 (ix)
   8181 C6 06         [ 7] 6026 	add	a, #0x06
   8183 6F            [ 4] 6027 	ld	l, a
   8184 DD 7E FF      [19] 6028 	ld	a, -1 (ix)
   8187 CE 00         [ 7] 6029 	adc	a, #0x00
   8189 67            [ 4] 6030 	ld	h, a
   818A 36 04         [10] 6031 	ld	(hl), #0x04
   818C                    6032 00123$:
   818C DD F9         [10] 6033 	ld	sp, ix
   818E DD E1         [14] 6034 	pop	ix
   8190 C9            [10] 6035 	ret
                           6036 ;src/main.c:1390: void RunStatus(TSpr *pSpr) __z88dk_fastcall {
                           6037 ;	---------------------------------
                           6038 ; Function RunStatus
                           6039 ; ---------------------------------
   8191                    6040 _RunStatus::
   8191 4D            [ 4] 6041 	ld	c, l
   8192 44            [ 4] 6042 	ld	b, h
                           6043 ;src/main.c:1391: if (pSpr->status == S_stopped)
   8193 C5            [11] 6044 	push	bc
   8194 FD E1         [14] 6045 	pop	iy
   8196 FD 7E 06      [19] 6046 	ld	a, 6 (iy)
   8199 D6 04         [ 7] 6047 	sub	a, #0x04
   819B 20 05         [12] 6048 	jr	NZ,00102$
                           6049 ;src/main.c:1392: Stop(pSpr);
   819D 69            [ 4] 6050 	ld	l, c
   819E 60            [ 4] 6051 	ld	h, b
   819F C3 9C 7E      [10] 6052 	jp  _Stop
   81A2                    6053 00102$:
                           6054 ;src/main.c:1394: Walk(pSpr);	
   81A2 69            [ 4] 6055 	ld	l, c
   81A3 60            [ 4] 6056 	ld	h, b
   81A4 C3 34 80      [10] 6057 	jp  _Walk
                           6058 ;src/main.c:1399: void PlayerLoop(TSpr *pSpr) __z88dk_fastcall {
                           6059 ;	---------------------------------
                           6060 ; Function PlayerLoop
                           6061 ; ---------------------------------
   81A7                    6062 _PlayerLoop::
   81A7 DD E5         [15] 6063 	push	ix
   81A9 DD 21 00 00   [14] 6064 	ld	ix,#0
   81AD DD 39         [15] 6065 	add	ix,sp
   81AF F5            [11] 6066 	push	af
   81B0 4D            [ 4] 6067 	ld	c, l
   81B1 44            [ 4] 6068 	ld	b, h
                           6069 ;src/main.c:1400: RunStatus(pSpr); // calls the appropriate function based on the status of the main sprites
   81B2 C5            [11] 6070 	push	bc
   81B3 69            [ 4] 6071 	ld	l, c
   81B4 60            [ 4] 6072 	ld	h, b
   81B5 CD 91 81      [17] 6073 	call	_RunStatus
   81B8 C1            [10] 6074 	pop	bc
                           6075 ;src/main.c:1401: if (pSpr->print_minV) { // does the sprite have to be reprinted?
   81B9 21 0D 00      [10] 6076 	ld	hl, #0x000d
   81BC 09            [11] 6077 	add	hl,bc
   81BD E3            [19] 6078 	ex	(sp), hl
   81BE E1            [10] 6079 	pop	hl
   81BF E5            [11] 6080 	push	hl
   81C0 7E            [ 7] 6081 	ld	a, (hl)
   81C1 B7            [ 4] 6082 	or	a, a
   81C2 28 46         [12] 6083 	jr	Z,00106$
                           6084 ;src/main.c:1402: SelectFrame(pSpr); // we assign the next frame of the animation to the sprite
   81C4 C5            [11] 6085 	push	bc
   81C5 69            [ 4] 6086 	ld	l, c
   81C6 60            [ 4] 6087 	ld	h, b
   81C7 CD CE 77      [17] 6088 	call	_SelectFrame
   81CA C1            [10] 6089 	pop	bc
                           6090 ;src/main.c:1403: DeleteSprite(pSpr); // delete the sprite
   81CB C5            [11] 6091 	push	bc
   81CC 69            [ 4] 6092 	ld	l, c
   81CD 60            [ 4] 6093 	ld	h, b
   81CE CD 19 77      [17] 6094 	call	_DeleteSprite
   81D1 C1            [10] 6095 	pop	bc
                           6096 ;src/main.c:1404: pSpr->px = pSpr->x; // save the current X coordinate
   81D2 21 04 00      [10] 6097 	ld	hl, #0x0004
   81D5 09            [11] 6098 	add	hl,bc
   81D6 EB            [ 4] 6099 	ex	de,hl
   81D7 69            [ 4] 6100 	ld	l, c
   81D8 60            [ 4] 6101 	ld	h, b
   81D9 23            [ 6] 6102 	inc	hl
   81DA 23            [ 6] 6103 	inc	hl
   81DB 7E            [ 7] 6104 	ld	a, (hl)
   81DC 12            [ 7] 6105 	ld	(de), a
                           6106 ;src/main.c:1405: pSpr->py = pSpr->y; // save the current Y coordinate
   81DD 21 05 00      [10] 6107 	ld	hl, #0x0005
   81E0 09            [11] 6108 	add	hl,bc
   81E1 EB            [ 4] 6109 	ex	de,hl
   81E2 69            [ 4] 6110 	ld	l, c
   81E3 60            [ 4] 6111 	ld	h, b
   81E4 23            [ 6] 6112 	inc	hl
   81E5 23            [ 6] 6113 	inc	hl
   81E6 23            [ 6] 6114 	inc	hl
   81E7 7E            [ 7] 6115 	ld	a, (hl)
   81E8 12            [ 7] 6116 	ld	(de), a
                           6117 ;src/main.c:1406: PrintSprite(pSpr); // paint the sprite in the new XY position
   81E9 C5            [11] 6118 	push	bc
   81EA 69            [ 4] 6119 	ld	l, c
   81EB 60            [ 4] 6120 	ld	h, b
   81EC CD EA 76      [17] 6121 	call	_PrintSprite
   81EF C1            [10] 6122 	pop	bc
                           6123 ;src/main.c:1407: ctInactivity[pSpr->num] = 0; // on the move
   81F0 11 ED 5E      [10] 6124 	ld	de, #_ctInactivity+0
   81F3 0A            [ 7] 6125 	ld	a, (bc)
   81F4 6F            [ 4] 6126 	ld	l, a
   81F5 26 00         [ 7] 6127 	ld	h,#0x00
   81F7 19            [11] 6128 	add	hl, de
   81F8 36 00         [10] 6129 	ld	(hl), #0x00
                           6130 ;src/main.c:1408: if (pSpr->status == S_stopped) 
   81FA C5            [11] 6131 	push	bc
   81FB FD E1         [14] 6132 	pop	iy
   81FD FD 7E 06      [19] 6133 	ld	a, 6 (iy)
   8200 D6 04         [ 7] 6134 	sub	a, #0x04
   8202 20 1E         [12] 6135 	jr	NZ,00108$
                           6136 ;src/main.c:1409: pSpr->print_minV = FALSE; // if it is stopped it is no longer necessary to continue printing the sprite
   8204 E1            [10] 6137 	pop	hl
   8205 E5            [11] 6138 	push	hl
   8206 36 00         [10] 6139 	ld	(hl), #0x00
   8208 18 18         [12] 6140 	jr	00108$
   820A                    6141 00106$:
                           6142 ;src/main.c:1412: else if (ctMainLoop % 5 == 0)
   820A C5            [11] 6143 	push	bc
   820B 21 05 00      [10] 6144 	ld	hl, #0x0005
   820E E5            [11] 6145 	push	hl
   820F 2A F2 5E      [16] 6146 	ld	hl, (_ctMainLoop)
   8212 E5            [11] 6147 	push	hl
   8213 CD C2 5D      [17] 6148 	call	__modsint
   8216 F1            [10] 6149 	pop	af
   8217 F1            [10] 6150 	pop	af
   8218 C1            [10] 6151 	pop	bc
   8219 7C            [ 4] 6152 	ld	a, h
   821A B5            [ 4] 6153 	or	a,l
   821B 20 05         [12] 6154 	jr	NZ,00108$
                           6155 ;src/main.c:1413: PrintSprite(pSpr);
   821D 69            [ 4] 6156 	ld	l, c
   821E 60            [ 4] 6157 	ld	h, b
   821F CD EA 76      [17] 6158 	call	_PrintSprite
   8222                    6159 00108$:
   8222 DD F9         [10] 6160 	ld	sp, ix
   8224 DD E1         [14] 6161 	pop	ix
   8226 C9            [10] 6162 	ret
                           6163 ;src/main.c:1430: void ExplodePlayerInDuel(u8 player) __z88dk_fastcall {
                           6164 ;	---------------------------------
                           6165 ; Function ExplodePlayerInDuel
                           6166 ; ---------------------------------
   8227                    6167 _ExplodePlayerInDuel::
   8227 DD E5         [15] 6168 	push	ix
   8229 DD 21 00 00   [14] 6169 	ld	ix,#0
   822D DD 39         [15] 6170 	add	ix,sp
   822F 3B            [ 6] 6171 	dec	sp
   8230 DD 75 FF      [19] 6172 	ld	-1 (ix), l
                           6173 ;src/main.c:1431: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, spr[player].x, 122), cpct_px2byteM0(4, 4), SPR_W, SPR_H);
   8233 21 04 04      [10] 6174 	ld	hl, #0x0404
   8236 E5            [11] 6175 	push	hl
   8237 CD B3 5C      [17] 6176 	call	_cpct_px2byteM0
   823A 4D            [ 4] 6177 	ld	c, l
   823B 06 00         [ 7] 6178 	ld	b, #0x00
   823D DD 5E FF      [19] 6179 	ld	e,-1 (ix)
   8240 16 00         [ 7] 6180 	ld	d,#0x00
   8242 6B            [ 4] 6181 	ld	l, e
   8243 62            [ 4] 6182 	ld	h, d
   8244 29            [11] 6183 	add	hl, hl
   8245 19            [11] 6184 	add	hl, de
   8246 29            [11] 6185 	add	hl, hl
   8247 19            [11] 6186 	add	hl, de
   8248 29            [11] 6187 	add	hl, hl
   8249 19            [11] 6188 	add	hl, de
   824A 11 0A 5F      [10] 6189 	ld	de, #_spr
   824D 19            [11] 6190 	add	hl, de
   824E 23            [ 6] 6191 	inc	hl
   824F 23            [ 6] 6192 	inc	hl
   8250 7E            [ 7] 6193 	ld	a, (hl)
   8251 C6 B0         [ 7] 6194 	add	a, #0xb0
   8253 5F            [ 4] 6195 	ld	e, a
   8254 3E 00         [ 7] 6196 	ld	a, #0x00
   8256 CE D4         [ 7] 6197 	adc	a, #0xd4
   8258 57            [ 4] 6198 	ld	d, a
   8259 D5            [11] 6199 	push	de
   825A FD E1         [14] 6200 	pop	iy
   825C E5            [11] 6201 	push	hl
   825D 11 05 0C      [10] 6202 	ld	de, #0x0c05
   8260 D5            [11] 6203 	push	de
   8261 C5            [11] 6204 	push	bc
   8262 FD E5         [15] 6205 	push	iy
   8264 CD ED 5C      [17] 6206 	call	_cpct_drawSolidBox
   8267 AF            [ 4] 6207 	xor	a, a
   8268 F5            [11] 6208 	push	af
   8269 33            [ 6] 6209 	inc	sp
   826A DD 7E FF      [19] 6210 	ld	a, -1 (ix)
   826D F5            [11] 6211 	push	af
   826E 33            [ 6] 6212 	inc	sp
   826F CD 8A 7A      [17] 6213 	call	_ExplodeSprite
   8272 F1            [10] 6214 	pop	af
   8273 01 04 04      [10] 6215 	ld	bc, #0x0404
   8276 C5            [11] 6216 	push	bc
   8277 CD B3 5C      [17] 6217 	call	_cpct_px2byteM0
   827A 4D            [ 4] 6218 	ld	c, l
   827B E1            [10] 6219 	pop	hl
   827C 06 00         [ 7] 6220 	ld	b, #0x00
   827E 5E            [ 7] 6221 	ld	e, (hl)
   827F 21 B0 D4      [10] 6222 	ld	hl, #0xd4b0
   8282 16 00         [ 7] 6223 	ld	d, #0x00
   8284 19            [11] 6224 	add	hl, de
   8285 11 05 0C      [10] 6225 	ld	de, #0x0c05
   8288 D5            [11] 6226 	push	de
   8289 C5            [11] 6227 	push	bc
   828A E5            [11] 6228 	push	hl
   828B CD ED 5C      [17] 6229 	call	_cpct_drawSolidBox
   828E 33            [ 6] 6230 	inc	sp
   828F DD E1         [14] 6231 	pop	ix
   8291 C9            [10] 6232 	ret
                           6233 ;src/main.c:1438: void MakeDuel() {
                           6234 ;	---------------------------------
                           6235 ; Function MakeDuel
                           6236 ; ---------------------------------
   8292                    6237 _MakeDuel::
   8292 DD E5         [15] 6238 	push	ix
   8294 DD 21 00 00   [14] 6239 	ld	ix,#0
   8298 DD 39         [15] 6240 	add	ix,sp
   829A F5            [11] 6241 	push	af
   829B 3B            [ 6] 6242 	dec	sp
                           6243 ;src/main.c:1441: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 18, 80), cpct_px2byteM0(4, 4), 45, 60);
   829C 21 04 04      [10] 6244 	ld	hl, #0x0404
   829F E5            [11] 6245 	push	hl
   82A0 CD B3 5C      [17] 6246 	call	_cpct_px2byteM0
   82A3 26 00         [ 7] 6247 	ld	h, #0x00
   82A5 01 2D 3C      [10] 6248 	ld	bc, #0x3c2d
   82A8 C5            [11] 6249 	push	bc
   82A9 E5            [11] 6250 	push	hl
   82AA 21 32 C3      [10] 6251 	ld	hl, #0xc332
   82AD E5            [11] 6252 	push	hl
   82AE CD ED 5C      [17] 6253 	call	_cpct_drawSolidBox
                           6254 ;src/main.c:1442: PrintFrame(18,80,60,134);
   82B1 21 3C 86      [10] 6255 	ld	hl, #0x863c
   82B4 E5            [11] 6256 	push	hl
   82B5 21 12 50      [10] 6257 	ld	hl, #0x5012
   82B8 E5            [11] 6258 	push	hl
   82B9 CD B3 63      [17] 6259 	call	_PrintFrame
   82BC F1            [10] 6260 	pop	af
   82BD F1            [10] 6261 	pop	af
                           6262 ;src/main.c:1444: spr[0].x = 23; spr[0].y = 122;
   82BE 21 0C 5F      [10] 6263 	ld	hl, #(_spr + 0x0002)
   82C1 36 17         [10] 6264 	ld	(hl), #0x17
   82C3 21 0D 5F      [10] 6265 	ld	hl, #(_spr + 0x0003)
   82C6 36 7A         [10] 6266 	ld	(hl), #0x7a
                           6267 ;src/main.c:1446: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   82C8 21 0D 5F      [10] 6268 	ld	hl, #(_spr + 0x0003) + 0
   82CB 56            [ 7] 6269 	ld	d, (hl)
   82CC 21 0C 5F      [10] 6270 	ld	hl, #(_spr + 0x0002) + 0
   82CF 5E            [ 7] 6271 	ld	e, (hl)
   82D0 D5            [11] 6272 	push	de
   82D1 21 00 C0      [10] 6273 	ld	hl, #0xc000
   82D4 E5            [11] 6274 	push	hl
   82D5 CD CF 5D      [17] 6275 	call	_cpct_getScreenPtr
   82D8 4D            [ 4] 6276 	ld	c, l
   82D9 44            [ 4] 6277 	ld	b, h
                           6278 ;src/main.c:1445: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06,
   82DA 21 00 01      [10] 6279 	ld	hl, #_g_maskTable
   82DD E5            [11] 6280 	push	hl
   82DE 21 05 0C      [10] 6281 	ld	hl, #0x0c05
   82E1 E5            [11] 6282 	push	hl
   82E2 C5            [11] 6283 	push	bc
   82E3 21 D7 2D      [10] 6284 	ld	hl, #_g_sorcerer1_06
   82E6 E5            [11] 6285 	push	hl
   82E7 CD E5 5D      [17] 6286 	call	_cpct_drawSpriteMaskedAlignedTable
                           6287 ;src/main.c:1448: spr[1].x = 53; spr[1].y = 122;
   82EA 21 1B 5F      [10] 6288 	ld	hl, #(_spr + 0x0011)
   82ED 36 35         [10] 6289 	ld	(hl), #0x35
   82EF 21 1C 5F      [10] 6290 	ld	hl, #(_spr + 0x0012)
   82F2 36 7A         [10] 6291 	ld	(hl), #0x7a
                           6292 ;src/main.c:1451: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   82F4 3A 1C 5F      [13] 6293 	ld	a,(#(_spr + 0x0012) + 0)
   82F7 DD 77 FF      [19] 6294 	ld	-1 (ix), a
   82FA 3A 1B 5F      [13] 6295 	ld	a,(#(_spr + 0x0011) + 0)
   82FD DD 77 FE      [19] 6296 	ld	-2 (ix), a
                           6297 ;src/main.c:1449: if (TwoPlayers) {
   8300 3A D4 5E      [13] 6298 	ld	a,(#_TwoPlayers + 0)
   8303 B7            [ 4] 6299 	or	a, a
   8304 28 20         [12] 6300 	jr	Z,00102$
                           6301 ;src/main.c:1451: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   8306 DD 66 FF      [19] 6302 	ld	h, -1 (ix)
   8309 DD 6E FE      [19] 6303 	ld	l, -2 (ix)
   830C E5            [11] 6304 	push	hl
   830D 21 00 C0      [10] 6305 	ld	hl, #0xc000
   8310 E5            [11] 6306 	push	hl
   8311 CD CF 5D      [17] 6307 	call	_cpct_getScreenPtr
                           6308 ;src/main.c:1450: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_04, 
   8314 01 07 2B      [10] 6309 	ld	bc, #_g_sorcerer2_04+0
   8317 11 00 01      [10] 6310 	ld	de, #_g_maskTable
   831A D5            [11] 6311 	push	de
   831B 11 05 0C      [10] 6312 	ld	de, #0x0c05
   831E D5            [11] 6313 	push	de
   831F E5            [11] 6314 	push	hl
   8320 C5            [11] 6315 	push	bc
   8321 CD E5 5D      [17] 6316 	call	_cpct_drawSpriteMaskedAlignedTable
   8324 18 1E         [12] 6317 	jr	00103$
   8326                    6318 00102$:
                           6319 ;src/main.c:1456: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   8326 DD 66 FF      [19] 6320 	ld	h, -1 (ix)
   8329 DD 6E FE      [19] 6321 	ld	l, -2 (ix)
   832C E5            [11] 6322 	push	hl
   832D 21 00 C0      [10] 6323 	ld	hl, #0xc000
   8330 E5            [11] 6324 	push	hl
   8331 CD CF 5D      [17] 6325 	call	_cpct_getScreenPtr
                           6326 ;src/main.c:1455: cpct_drawSpriteMaskedAlignedTable(g_door_0, 
   8334 01 87 23      [10] 6327 	ld	bc, #_g_door_0+0
   8337 11 00 01      [10] 6328 	ld	de, #_g_maskTable
   833A D5            [11] 6329 	push	de
   833B 11 05 0C      [10] 6330 	ld	de, #0x0c05
   833E D5            [11] 6331 	push	de
   833F E5            [11] 6332 	push	hl
   8340 C5            [11] 6333 	push	bc
   8341 CD E5 5D      [17] 6334 	call	_cpct_drawSpriteMaskedAlignedTable
   8344                    6335 00103$:
                           6336 ;src/main.c:1458: Pause(400);
   8344 21 90 01      [10] 6337 	ld	hl, #0x0190
   8347 CD 81 61      [17] 6338 	call	_Pause
                           6339 ;src/main.c:1462: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   834A 21 0D 5F      [10] 6340 	ld	hl, #(_spr + 0x0003) + 0
   834D 56            [ 7] 6341 	ld	d, (hl)
   834E 21 0C 5F      [10] 6342 	ld	hl, #(_spr + 0x0002) + 0
   8351 5E            [ 7] 6343 	ld	e, (hl)
   8352 D5            [11] 6344 	push	de
   8353 21 00 C0      [10] 6345 	ld	hl, #0xc000
   8356 E5            [11] 6346 	push	hl
   8357 CD CF 5D      [17] 6347 	call	_cpct_getScreenPtr
                           6348 ;src/main.c:1461: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_08, 
   835A 01 4F 2E      [10] 6349 	ld	bc, #_g_sorcerer1_08+0
   835D 11 00 01      [10] 6350 	ld	de, #_g_maskTable
   8360 D5            [11] 6351 	push	de
   8361 11 05 0C      [10] 6352 	ld	de, #0x0c05
   8364 D5            [11] 6353 	push	de
   8365 E5            [11] 6354 	push	hl
   8366 C5            [11] 6355 	push	bc
   8367 CD E5 5D      [17] 6356 	call	_cpct_drawSpriteMaskedAlignedTable
                           6357 ;src/main.c:1463: spr[0].x += OBJ_W;
   836A 3A 0C 5F      [13] 6358 	ld	a, (#(_spr + 0x0002) + 0)
   836D C6 04         [ 7] 6359 	add	a, #0x04
   836F 32 0C 5F      [13] 6360 	ld	(#(_spr + 0x0002)),a
                           6361 ;src/main.c:1464: if (TwoPlayers) {
   8372 3A D4 5E      [13] 6362 	ld	a,(#_TwoPlayers + 0)
   8375 B7            [ 4] 6363 	or	a, a
   8376 28 28         [12] 6364 	jr	Z,00105$
                           6365 ;src/main.c:1466: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   8378 21 1C 5F      [10] 6366 	ld	hl, #(_spr + 0x0012) + 0
   837B 56            [ 7] 6367 	ld	d, (hl)
   837C 21 1B 5F      [10] 6368 	ld	hl, #(_spr + 0x0011) + 0
   837F 5E            [ 7] 6369 	ld	e, (hl)
   8380 D5            [11] 6370 	push	de
   8381 21 00 C0      [10] 6371 	ld	hl, #0xc000
   8384 E5            [11] 6372 	push	hl
   8385 CD CF 5D      [17] 6373 	call	_cpct_getScreenPtr
                           6374 ;src/main.c:1465: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_08, 
   8388 01 F7 2B      [10] 6375 	ld	bc, #_g_sorcerer2_08+0
   838B 11 00 01      [10] 6376 	ld	de, #_g_maskTable
   838E D5            [11] 6377 	push	de
   838F 11 05 0C      [10] 6378 	ld	de, #0x0c05
   8392 D5            [11] 6379 	push	de
   8393 E5            [11] 6380 	push	hl
   8394 C5            [11] 6381 	push	bc
   8395 CD E5 5D      [17] 6382 	call	_cpct_drawSpriteMaskedAlignedTable
                           6383 ;src/main.c:1467: spr[1].x -= OBJ_W;
   8398 3A 1B 5F      [13] 6384 	ld	a, (#(_spr + 0x0011) + 0)
   839B C6 FC         [ 7] 6385 	add	a, #0xfc
   839D 32 1B 5F      [13] 6386 	ld	(#(_spr + 0x0011)),a
   83A0                    6387 00105$:
                           6388 ;src/main.c:1469: cpct_akp_SFXPlay (5, 12, 60, 0, 0, AY_CHANNEL_B); // shot sound
   83A0 3E 02         [ 7] 6389 	ld	a, #0x02
   83A2 F5            [11] 6390 	push	af
   83A3 33            [ 6] 6391 	inc	sp
   83A4 21 00 00      [10] 6392 	ld	hl, #0x0000
   83A7 E5            [11] 6393 	push	hl
   83A8 2E 3C         [ 7] 6394 	ld	l, #0x3c
   83AA E5            [11] 6395 	push	hl
   83AB 21 05 0C      [10] 6396 	ld	hl, #0x0c05
   83AE E5            [11] 6397 	push	hl
   83AF CD EF 59      [17] 6398 	call	_cpct_akp_SFXPlay
   83B2 21 07 00      [10] 6399 	ld	hl, #7
   83B5 39            [11] 6400 	add	hl, sp
   83B6 F9            [ 6] 6401 	ld	sp, hl
                           6402 ;src/main.c:1472: while (spr[0].x < 50)
   83B7                    6403 00110$:
                           6404 ;src/main.c:1446: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   83B7 21 0C 5F      [10] 6405 	ld	hl, #(_spr + 0x0002) + 0
   83BA 4E            [ 7] 6406 	ld	c, (hl)
                           6407 ;src/main.c:1472: while (spr[0].x < 50)
   83BB 79            [ 4] 6408 	ld	a, c
   83BC D6 32         [ 7] 6409 	sub	a, #0x32
   83BE D2 5A 84      [10] 6410 	jp	NC, 00112$
                           6411 ;src/main.c:1475: spr[0].x ++;
   83C1 41            [ 4] 6412 	ld	b, c
   83C2 04            [ 4] 6413 	inc	b
   83C3 21 0C 5F      [10] 6414 	ld	hl, #(_spr + 0x0002)
   83C6 70            [ 7] 6415 	ld	(hl), b
                           6416 ;src/main.c:1477: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, 125), SHT_W, SHT_H, g_maskTable);
   83C7 3E 7D         [ 7] 6417 	ld	a, #0x7d
   83C9 F5            [11] 6418 	push	af
   83CA 33            [ 6] 6419 	inc	sp
   83CB C5            [11] 6420 	push	bc
   83CC 33            [ 6] 6421 	inc	sp
   83CD 21 00 C0      [10] 6422 	ld	hl, #0xc000
   83D0 E5            [11] 6423 	push	hl
   83D1 CD CF 5D      [17] 6424 	call	_cpct_getScreenPtr
                           6425 ;src/main.c:1476: cpct_drawSpriteMaskedAlignedTable(g_magic_0, 
   83D4 01 00 01      [10] 6426 	ld	bc, #_g_maskTable
   83D7 C5            [11] 6427 	push	bc
   83D8 01 04 08      [10] 6428 	ld	bc, #0x0804
   83DB C5            [11] 6429 	push	bc
   83DC E5            [11] 6430 	push	hl
   83DD 21 01 16      [10] 6431 	ld	hl, #_g_magic_0
   83E0 E5            [11] 6432 	push	hl
   83E1 CD E5 5D      [17] 6433 	call	_cpct_drawSpriteMaskedAlignedTable
                           6434 ;src/main.c:1478: if (TwoPlayers) {
   83E4 3A D4 5E      [13] 6435 	ld	a,(#_TwoPlayers + 0)
   83E7 B7            [ 4] 6436 	or	a, a
   83E8 28 26         [12] 6437 	jr	Z,00107$
                           6438 ;src/main.c:1479: spr[1].x --;
   83EA 21 1B 5F      [10] 6439 	ld	hl, #(_spr + 0x0011) + 0
   83ED 46            [ 7] 6440 	ld	b, (hl)
   83EE 05            [ 4] 6441 	dec	b
   83EF 21 1B 5F      [10] 6442 	ld	hl, #(_spr + 0x0011)
   83F2 70            [ 7] 6443 	ld	(hl), b
                           6444 ;src/main.c:1481: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, 125), SHT_W, SHT_H, g_maskTable);
   83F3 3E 7D         [ 7] 6445 	ld	a, #0x7d
   83F5 F5            [11] 6446 	push	af
   83F6 33            [ 6] 6447 	inc	sp
   83F7 C5            [11] 6448 	push	bc
   83F8 33            [ 6] 6449 	inc	sp
   83F9 21 00 C0      [10] 6450 	ld	hl, #0xc000
   83FC E5            [11] 6451 	push	hl
   83FD CD CF 5D      [17] 6452 	call	_cpct_getScreenPtr
                           6453 ;src/main.c:1480: cpct_drawSpriteMaskedAlignedTable(g_magic_1, 
   8400 01 00 01      [10] 6454 	ld	bc, #_g_maskTable
   8403 C5            [11] 6455 	push	bc
   8404 01 04 08      [10] 6456 	ld	bc, #0x0804
   8407 C5            [11] 6457 	push	bc
   8408 E5            [11] 6458 	push	hl
   8409 21 21 16      [10] 6459 	ld	hl, #_g_magic_1
   840C E5            [11] 6460 	push	hl
   840D CD E5 5D      [17] 6461 	call	_cpct_drawSpriteMaskedAlignedTable
   8410                    6462 00107$:
                           6463 ;src/main.c:1483: Pause(12);
   8410 21 0C 00      [10] 6464 	ld	hl, #0x000c
   8413 CD 81 61      [17] 6465 	call	_Pause
                           6466 ;src/main.c:1486: cpct_px2byteM0(4, 4), OBJ_W, OBJ_H);
   8416 21 04 04      [10] 6467 	ld	hl, #0x0404
   8419 E5            [11] 6468 	push	hl
   841A CD B3 5C      [17] 6469 	call	_cpct_px2byteM0
   841D 4D            [ 4] 6470 	ld	c, l
   841E 06 00         [ 7] 6471 	ld	b, #0x00
                           6472 ;src/main.c:1485: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, spr[0].x, 125), 
   8420 21 0C 5F      [10] 6473 	ld	hl, #(_spr + 0x0002) + 0
   8423 5E            [ 7] 6474 	ld	e, (hl)
   8424 21 B0 EC      [10] 6475 	ld	hl, #0xecb0
   8427 16 00         [ 7] 6476 	ld	d, #0x00
   8429 19            [11] 6477 	add	hl, de
   842A 11 04 08      [10] 6478 	ld	de, #0x0804
   842D D5            [11] 6479 	push	de
   842E C5            [11] 6480 	push	bc
   842F E5            [11] 6481 	push	hl
   8430 CD ED 5C      [17] 6482 	call	_cpct_drawSolidBox
                           6483 ;src/main.c:1487: if (TwoPlayers)
   8433 3A D4 5E      [13] 6484 	ld	a,(#_TwoPlayers + 0)
   8436 B7            [ 4] 6485 	or	a, a
   8437 CA B7 83      [10] 6486 	jp	Z, 00110$
                           6487 ;src/main.c:1489: cpct_px2byteM0(4, 4), OBJ_W, OBJ_H);
   843A 21 04 04      [10] 6488 	ld	hl, #0x0404
   843D E5            [11] 6489 	push	hl
   843E CD B3 5C      [17] 6490 	call	_cpct_px2byteM0
   8441 4D            [ 4] 6491 	ld	c, l
   8442 06 00         [ 7] 6492 	ld	b, #0x00
                           6493 ;src/main.c:1488: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, spr[1].x, 125), 
   8444 21 1B 5F      [10] 6494 	ld	hl, #(_spr + 0x0011) + 0
   8447 5E            [ 7] 6495 	ld	e, (hl)
   8448 21 B0 EC      [10] 6496 	ld	hl, #0xecb0
   844B 16 00         [ 7] 6497 	ld	d, #0x00
   844D 19            [11] 6498 	add	hl, de
   844E 11 04 08      [10] 6499 	ld	de, #0x0804
   8451 D5            [11] 6500 	push	de
   8452 C5            [11] 6501 	push	bc
   8453 E5            [11] 6502 	push	hl
   8454 CD ED 5C      [17] 6503 	call	_cpct_drawSolidBox
   8457 C3 B7 83      [10] 6504 	jp	00110$
   845A                    6505 00112$:
                           6506 ;src/main.c:1493: spr[0].x = 23;
   845A 21 0C 5F      [10] 6507 	ld	hl, #(_spr + 0x0002)
   845D 36 17         [10] 6508 	ld	(hl), #0x17
                           6509 ;src/main.c:1495: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   845F 21 0D 5F      [10] 6510 	ld	hl, #(_spr + 0x0003) + 0
   8462 46            [ 7] 6511 	ld	b, (hl)
   8463 21 0C 5F      [10] 6512 	ld	hl, #(_spr + 0x0002) + 0
   8466 4E            [ 7] 6513 	ld	c, (hl)
   8467 C5            [11] 6514 	push	bc
   8468 21 00 C0      [10] 6515 	ld	hl, #0xc000
   846B E5            [11] 6516 	push	hl
   846C CD CF 5D      [17] 6517 	call	_cpct_getScreenPtr
                           6518 ;src/main.c:1494: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06, 
   846F 01 00 01      [10] 6519 	ld	bc, #_g_maskTable
   8472 C5            [11] 6520 	push	bc
   8473 01 05 0C      [10] 6521 	ld	bc, #0x0c05
   8476 C5            [11] 6522 	push	bc
   8477 E5            [11] 6523 	push	hl
   8478 21 D7 2D      [10] 6524 	ld	hl, #_g_sorcerer1_06
   847B E5            [11] 6525 	push	hl
   847C CD E5 5D      [17] 6526 	call	_cpct_drawSpriteMaskedAlignedTable
                           6527 ;src/main.c:1496: spr[1].x = 53;
   847F 21 1B 5F      [10] 6528 	ld	hl, #(_spr + 0x0011)
   8482 36 35         [10] 6529 	ld	(hl), #0x35
                           6530 ;src/main.c:1498: if (TwoPlayers) {
   8484 3A D4 5E      [13] 6531 	ld	a,(#_TwoPlayers + 0)
   8487 B7            [ 4] 6532 	or	a, a
   8488 28 20         [12] 6533 	jr	Z,00114$
                           6534 ;src/main.c:1500: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   848A 21 1C 5F      [10] 6535 	ld	hl, #(_spr + 0x0012) + 0
   848D 46            [ 7] 6536 	ld	b, (hl)
   848E 21 1B 5F      [10] 6537 	ld	hl, #(_spr + 0x0011) + 0
   8491 4E            [ 7] 6538 	ld	c, (hl)
   8492 C5            [11] 6539 	push	bc
   8493 21 00 C0      [10] 6540 	ld	hl, #0xc000
   8496 E5            [11] 6541 	push	hl
   8497 CD CF 5D      [17] 6542 	call	_cpct_getScreenPtr
                           6543 ;src/main.c:1499: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_04, 
   849A 01 07 2B      [10] 6544 	ld	bc, #_g_sorcerer2_04+0
   849D 11 00 01      [10] 6545 	ld	de, #_g_maskTable
   84A0 D5            [11] 6546 	push	de
   84A1 11 05 0C      [10] 6547 	ld	de, #0x0c05
   84A4 D5            [11] 6548 	push	de
   84A5 E5            [11] 6549 	push	hl
   84A6 C5            [11] 6550 	push	bc
   84A7 CD E5 5D      [17] 6551 	call	_cpct_drawSpriteMaskedAlignedTable
   84AA                    6552 00114$:
                           6553 ;src/main.c:1504: if (potScore[0] > potScore[1]) {
   84AA 21 DB 5E      [10] 6554 	ld	hl, #_potScore+0
   84AD 4E            [ 7] 6555 	ld	c, (hl)
   84AE 23            [ 6] 6556 	inc	hl
   84AF 5E            [ 7] 6557 	ld	e, (hl)
   84B0 7B            [ 4] 6558 	ld	a, e
   84B1 91            [ 4] 6559 	sub	a, c
   84B2 D2 32 85      [10] 6560 	jp	NC, 00126$
                           6561 ;src/main.c:1505: loser = 1;
   84B5 DD 36 FD 01   [19] 6562 	ld	-3 (ix), #0x01
                           6563 ;src/main.c:1506: ExplodePlayerInDuel(loser);
   84B9 2E 01         [ 7] 6564 	ld	l, #0x01
   84BB CD 27 82      [17] 6565 	call	_ExplodePlayerInDuel
                           6566 ;src/main.c:1451: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   84BE 21 1C 5F      [10] 6567 	ld	hl, #(_spr + 0x0012) + 0
   84C1 4E            [ 7] 6568 	ld	c, (hl)
   84C2 21 1B 5F      [10] 6569 	ld	hl, #(_spr + 0x0011) + 0
   84C5 5E            [ 7] 6570 	ld	e, (hl)
                           6571 ;src/main.c:1507: if (TwoPlayers) {
   84C6 3A D4 5E      [13] 6572 	ld	a,(#_TwoPlayers + 0)
   84C9 B7            [ 4] 6573 	or	a, a
   84CA 28 39         [12] 6574 	jr	Z,00118$
                           6575 ;src/main.c:1510: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   84CC 51            [ 4] 6576 	ld	d, c
   84CD D5            [11] 6577 	push	de
   84CE 21 00 C0      [10] 6578 	ld	hl, #0xc000
   84D1 E5            [11] 6579 	push	hl
   84D2 CD CF 5D      [17] 6580 	call	_cpct_getScreenPtr
                           6581 ;src/main.c:1509: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_09, 
   84D5 01 33 2C      [10] 6582 	ld	bc, #_g_sorcerer2_09+0
   84D8 11 00 01      [10] 6583 	ld	de, #_g_maskTable
   84DB D5            [11] 6584 	push	de
   84DC 11 05 0C      [10] 6585 	ld	de, #0x0c05
   84DF D5            [11] 6586 	push	de
   84E0 E5            [11] 6587 	push	hl
   84E1 C5            [11] 6588 	push	bc
   84E2 CD E5 5D      [17] 6589 	call	_cpct_drawSpriteMaskedAlignedTable
                           6590 ;src/main.c:1511: PrintText("PLAYER1", 30, 90, 0);
   84E5 21 5A 00      [10] 6591 	ld	hl, #0x005a
   84E8 E5            [11] 6592 	push	hl
   84E9 3E 1E         [ 7] 6593 	ld	a, #0x1e
   84EB F5            [11] 6594 	push	af
   84EC 33            [ 6] 6595 	inc	sp
   84ED 21 24 86      [10] 6596 	ld	hl, #___str_17
   84F0 E5            [11] 6597 	push	hl
   84F1 CD 10 63      [17] 6598 	call	_PrintText
   84F4 F1            [10] 6599 	pop	af
   84F5 F1            [10] 6600 	pop	af
   84F6 33            [ 6] 6601 	inc	sp
                           6602 ;src/main.c:1514: if (spr[0].lives_speed < 9) spr[0].lives_speed++;
   84F7 01 15 5F      [10] 6603 	ld	bc, #_spr + 11
   84FA 0A            [ 7] 6604 	ld	a, (bc)
   84FB FE 09         [ 7] 6605 	cp	a, #0x09
   84FD D2 93 85      [10] 6606 	jp	NC, 00127$
   8500 3C            [ 4] 6607 	inc	a
   8501 02            [ 7] 6608 	ld	(bc), a
   8502 C3 93 85      [10] 6609 	jp	00127$
   8505                    6610 00118$:
                           6611 ;src/main.c:1519: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   8505 51            [ 4] 6612 	ld	d, c
   8506 D5            [11] 6613 	push	de
   8507 21 00 C0      [10] 6614 	ld	hl, #0xc000
   850A E5            [11] 6615 	push	hl
   850B CD CF 5D      [17] 6616 	call	_cpct_getScreenPtr
                           6617 ;src/main.c:1518: cpct_drawSpriteMaskedAlignedTable(g_door_1, 
   850E 01 C3 23      [10] 6618 	ld	bc, #_g_door_1+0
   8511 11 00 01      [10] 6619 	ld	de, #_g_maskTable
   8514 D5            [11] 6620 	push	de
   8515 11 05 0C      [10] 6621 	ld	de, #0x0c05
   8518 D5            [11] 6622 	push	de
   8519 E5            [11] 6623 	push	hl
   851A C5            [11] 6624 	push	bc
   851B CD E5 5D      [17] 6625 	call	_cpct_drawSpriteMaskedAlignedTable
                           6626 ;src/main.c:1520: PrintText("LEVEL", 33, 90, 0);
   851E 21 5A 00      [10] 6627 	ld	hl, #0x005a
   8521 E5            [11] 6628 	push	hl
   8522 3E 21         [ 7] 6629 	ld	a, #0x21
   8524 F5            [11] 6630 	push	af
   8525 33            [ 6] 6631 	inc	sp
   8526 21 2C 86      [10] 6632 	ld	hl, #___str_18
   8529 E5            [11] 6633 	push	hl
   852A CD 10 63      [17] 6634 	call	_PrintText
   852D F1            [10] 6635 	pop	af
   852E F1            [10] 6636 	pop	af
   852F 33            [ 6] 6637 	inc	sp
   8530 18 61         [12] 6638 	jr	00127$
   8532                    6639 00126$:
                           6640 ;src/main.c:1524: else if (potScore[0] < potScore[1]) {
   8532 79            [ 4] 6641 	ld	a, c
   8533 93            [ 4] 6642 	sub	a, e
   8534 30 47         [12] 6643 	jr	NC,00123$
                           6644 ;src/main.c:1525: loser = 0;
   8536 DD 36 FD 00   [19] 6645 	ld	-3 (ix), #0x00
                           6646 ;src/main.c:1526: ExplodePlayerInDuel(loser);
   853A 2E 00         [ 7] 6647 	ld	l, #0x00
   853C CD 27 82      [17] 6648 	call	_ExplodePlayerInDuel
                           6649 ;src/main.c:1529: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   853F 21 0D 5F      [10] 6650 	ld	hl, #(_spr + 0x0003) + 0
   8542 56            [ 7] 6651 	ld	d, (hl)
   8543 21 0C 5F      [10] 6652 	ld	hl, #(_spr + 0x0002) + 0
   8546 5E            [ 7] 6653 	ld	e, (hl)
   8547 D5            [11] 6654 	push	de
   8548 21 00 C0      [10] 6655 	ld	hl, #0xc000
   854B E5            [11] 6656 	push	hl
   854C CD CF 5D      [17] 6657 	call	_cpct_getScreenPtr
                           6658 ;src/main.c:1528: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_09, 
   854F 01 8B 2E      [10] 6659 	ld	bc, #_g_sorcerer1_09+0
   8552 11 00 01      [10] 6660 	ld	de, #_g_maskTable
   8555 D5            [11] 6661 	push	de
   8556 11 05 0C      [10] 6662 	ld	de, #0x0c05
   8559 D5            [11] 6663 	push	de
   855A E5            [11] 6664 	push	hl
   855B C5            [11] 6665 	push	bc
   855C CD E5 5D      [17] 6666 	call	_cpct_drawSpriteMaskedAlignedTable
                           6667 ;src/main.c:1530: PrintText("PLAYER2", 30, 90, 0);
   855F 21 5A 00      [10] 6668 	ld	hl, #0x005a
   8562 E5            [11] 6669 	push	hl
   8563 3E 1E         [ 7] 6670 	ld	a, #0x1e
   8565 F5            [11] 6671 	push	af
   8566 33            [ 6] 6672 	inc	sp
   8567 21 32 86      [10] 6673 	ld	hl, #___str_19
   856A E5            [11] 6674 	push	hl
   856B CD 10 63      [17] 6675 	call	_PrintText
   856E F1            [10] 6676 	pop	af
   856F F1            [10] 6677 	pop	af
   8570 33            [ 6] 6678 	inc	sp
                           6679 ;src/main.c:1533: if (spr[1].lives_speed < 9) spr[1].lives_speed++;
   8571 01 24 5F      [10] 6680 	ld	bc, #_spr + 26
   8574 0A            [ 7] 6681 	ld	a, (bc)
   8575 FE 09         [ 7] 6682 	cp	a, #0x09
   8577 30 1A         [12] 6683 	jr	NC,00127$
   8579 3C            [ 4] 6684 	inc	a
   857A 02            [ 7] 6685 	ld	(bc), a
   857B 18 16         [12] 6686 	jr	00127$
   857D                    6687 00123$:
                           6688 ;src/main.c:1537: PrintText("NOBODY", 32, 90, 0);
   857D 01 3A 86      [10] 6689 	ld	bc, #___str_20
   8580 21 5A 00      [10] 6690 	ld	hl, #0x005a
   8583 E5            [11] 6691 	push	hl
   8584 3E 20         [ 7] 6692 	ld	a, #0x20
   8586 F5            [11] 6693 	push	af
   8587 33            [ 6] 6694 	inc	sp
   8588 C5            [11] 6695 	push	bc
   8589 CD 10 63      [17] 6696 	call	_PrintText
   858C F1            [10] 6697 	pop	af
   858D F1            [10] 6698 	pop	af
   858E 33            [ 6] 6699 	inc	sp
                           6700 ;src/main.c:1538: loser = 2;
   858F DD 36 FD 02   [19] 6701 	ld	-3 (ix), #0x02
   8593                    6702 00127$:
                           6703 ;src/main.c:1540: if (TwoPlayers)
   8593 3A D4 5E      [13] 6704 	ld	a,(#_TwoPlayers + 0)
   8596 B7            [ 4] 6705 	or	a, a
   8597 28 14         [12] 6706 	jr	Z,00129$
                           6707 ;src/main.c:1541: PrintText("WINS>", 33, 101, 0);
   8599 21 65 00      [10] 6708 	ld	hl, #0x0065
   859C E5            [11] 6709 	push	hl
   859D 3E 21         [ 7] 6710 	ld	a, #0x21
   859F F5            [11] 6711 	push	af
   85A0 33            [ 6] 6712 	inc	sp
   85A1 21 41 86      [10] 6713 	ld	hl, #___str_21
   85A4 E5            [11] 6714 	push	hl
   85A5 CD 10 63      [17] 6715 	call	_PrintText
   85A8 F1            [10] 6716 	pop	af
   85A9 F1            [10] 6717 	pop	af
   85AA 33            [ 6] 6718 	inc	sp
   85AB 18 12         [12] 6719 	jr	00130$
   85AD                    6720 00129$:
                           6721 ;src/main.c:1543: PrintText("COMPLETED", 27, 101, 0);	
   85AD 21 65 00      [10] 6722 	ld	hl, #0x0065
   85B0 E5            [11] 6723 	push	hl
   85B1 3E 1B         [ 7] 6724 	ld	a, #0x1b
   85B3 F5            [11] 6725 	push	af
   85B4 33            [ 6] 6726 	inc	sp
   85B5 21 47 86      [10] 6727 	ld	hl, #___str_22
   85B8 E5            [11] 6728 	push	hl
   85B9 CD 10 63      [17] 6729 	call	_PrintText
   85BC F1            [10] 6730 	pop	af
   85BD F1            [10] 6731 	pop	af
   85BE 33            [ 6] 6732 	inc	sp
   85BF                    6733 00130$:
                           6734 ;src/main.c:1545: cpct_akp_musicInit(g_completed); // level completed music
   85BF 21 9E 04      [10] 6735 	ld	hl, #_g_completed
   85C2 E5            [11] 6736 	push	hl
   85C3 CD 48 59      [17] 6737 	call	_cpct_akp_musicInit
   85C6 F1            [10] 6738 	pop	af
                           6739 ;src/main.c:1546: Pause(1000);
   85C7 21 E8 03      [10] 6740 	ld	hl, #0x03e8
   85CA CD 81 61      [17] 6741 	call	_Pause
                           6742 ;src/main.c:1548: if (loser < 2) // if there is no tie
   85CD DD 7E FD      [19] 6743 	ld	a, -3 (ix)
   85D0 D6 02         [ 7] 6744 	sub	a, #0x02
   85D2 3E 00         [ 7] 6745 	ld	a, #0x00
   85D4 17            [ 4] 6746 	rla
   85D5 DD 77 FE      [19] 6747 	ld	-2 (ix), a
   85D8 B7            [ 4] 6748 	or	a, a
   85D9 28 04         [12] 6749 	jr	Z,00132$
                           6750 ;src/main.c:1549: nMap++; // go to the next screen on the map
   85DB 21 D0 5E      [10] 6751 	ld	hl, #_nMap+0
   85DE 34            [11] 6752 	inc	(hl)
   85DF                    6753 00132$:
                           6754 ;src/main.c:1551: if (nMap == 12) { // screens are over. End of the game
   85DF 3A D0 5E      [13] 6755 	ld	a,(#_nMap + 0)
   85E2 D6 0C         [ 7] 6756 	sub	a, #0x0c
   85E4 20 12         [12] 6757 	jr	NZ,00137$
                           6758 ;src/main.c:1552: if (loser == 0)		
   85E6 DD 7E FD      [19] 6759 	ld	a, -3 (ix)
   85E9 B7            [ 4] 6760 	or	a, a
   85EA 20 07         [12] 6761 	jr	NZ,00134$
                           6762 ;src/main.c:1553: PrintEndGame(1); // player 2 wins
   85EC 2E 01         [ 7] 6763 	ld	l, #0x01
   85EE CD CD 66      [17] 6764 	call	_PrintEndGame
   85F1 18 05         [12] 6765 	jr	00137$
   85F3                    6766 00134$:
                           6767 ;src/main.c:1555: PrintEndGame(0); // player 1 wins
   85F3 2E 00         [ 7] 6768 	ld	l, #0x00
   85F5 CD CD 66      [17] 6769 	call	_PrintEndGame
   85F8                    6770 00137$:
                           6771 ;src/main.c:1559: ResetObjData(0);
   85F8 2E 00         [ 7] 6772 	ld	l, #0x00
   85FA CD 66 6B      [17] 6773 	call	_ResetObjData
                           6774 ;src/main.c:1560: ResetObjData(1);
   85FD 2E 01         [ 7] 6775 	ld	l, #0x01
   85FF CD 66 6B      [17] 6776 	call	_ResetObjData
                           6777 ;src/main.c:1561: InitScoreboard();
   8602 CD E2 68      [17] 6778 	call	_InitScoreboard
                           6779 ;src/main.c:1563: if (loser < 2 && TwoPlayers)
   8605 DD 7E FE      [19] 6780 	ld	a, -2 (ix)
   8608 B7            [ 4] 6781 	or	a, a
   8609 28 11         [12] 6782 	jr	Z,00139$
   860B 3A D4 5E      [13] 6783 	ld	a,(#_TwoPlayers + 0)
   860E B7            [ 4] 6784 	or	a, a
   860F 28 0B         [12] 6785 	jr	Z,00139$
                           6786 ;src/main.c:1564: GameOver(loser); // the player who loses a duel loses a life
   8611 DD 7E FD      [19] 6787 	ld	a, -3 (ix)
   8614 F5            [11] 6788 	push	af
   8615 33            [ 6] 6789 	inc	sp
   8616 CD 4F A0      [17] 6790 	call	_GameOver
   8619 33            [ 6] 6791 	inc	sp
   861A 18 03         [12] 6792 	jr	00142$
   861C                    6793 00139$:
                           6794 ;src/main.c:1566: ResetData();
   861C CD 6B 9F      [17] 6795 	call	_ResetData
   861F                    6796 00142$:
   861F DD F9         [10] 6797 	ld	sp, ix
   8621 DD E1         [14] 6798 	pop	ix
   8623 C9            [10] 6799 	ret
   8624                    6800 ___str_17:
   8624 50 4C 41 59 45 52  6801 	.ascii "PLAYER1"
        31
   862B 00                 6802 	.db 0x00
   862C                    6803 ___str_18:
   862C 4C 45 56 45 4C     6804 	.ascii "LEVEL"
   8631 00                 6805 	.db 0x00
   8632                    6806 ___str_19:
   8632 50 4C 41 59 45 52  6807 	.ascii "PLAYER2"
        32
   8639 00                 6808 	.db 0x00
   863A                    6809 ___str_20:
   863A 4E 4F 42 4F 44 59  6810 	.ascii "NOBODY"
   8640 00                 6811 	.db 0x00
   8641                    6812 ___str_21:
   8641 57 49 4E 53 3E     6813 	.ascii "WINS>"
   8646 00                 6814 	.db 0x00
   8647                    6815 ___str_22:
   8647 43 4F 4D 50 4C 45  6816 	.ascii "COMPLETED"
        54 45 44
   8650 00                 6817 	.db 0x00
                           6818 ;src/main.c:1571: void CheckDuel() {
                           6819 ;	---------------------------------
                           6820 ; Function CheckDuel
                           6821 ; ---------------------------------
   8651                    6822 _CheckDuel::
                           6823 ;src/main.c:1572: if ((spr[0].objNum_mov == 5 || spr[1].objNum_mov == 5) && 
   8651 3A 16 5F      [13] 6824 	ld	a, (#_spr + 12)
   8654 D6 05         [ 7] 6825 	sub	a, #0x05
   8656 28 06         [12] 6826 	jr	Z,00105$
   8658 3A 25 5F      [13] 6827 	ld	a, (#_spr + 27)
   865B D6 05         [ 7] 6828 	sub	a, #0x05
   865D C0            [11] 6829 	ret	NZ
   865E                    6830 00105$:
                           6831 ;src/main.c:1573: SpriteCollision(spr[0].x, spr[0].y, &spr[1], 0)) {				
   865E 21 0D 5F      [10] 6832 	ld	hl, #_spr + 3
   8661 56            [ 7] 6833 	ld	d, (hl)
   8662 21 0C 5F      [10] 6834 	ld	hl, #_spr + 2
   8665 46            [ 7] 6835 	ld	b, (hl)
   8666 AF            [ 4] 6836 	xor	a, a
   8667 F5            [11] 6837 	push	af
   8668 33            [ 6] 6838 	inc	sp
   8669 21 19 5F      [10] 6839 	ld	hl, #(_spr + 0x000f)
   866C E5            [11] 6840 	push	hl
   866D 58            [ 4] 6841 	ld	e, b
   866E D5            [11] 6842 	push	de
   866F CD 66 7B      [17] 6843 	call	_SpriteCollision
   8672 F1            [10] 6844 	pop	af
   8673 F1            [10] 6845 	pop	af
   8674 33            [ 6] 6846 	inc	sp
   8675 7D            [ 4] 6847 	ld	a, l
   8676 B7            [ 4] 6848 	or	a, a
   8677 C8            [11] 6849 	ret	Z
                           6850 ;src/main.c:1575: for(u8 i=0;i<6;i++)
   8678 0E 00         [ 7] 6851 	ld	c, #0x00
   867A                    6852 00107$:
   867A 79            [ 4] 6853 	ld	a, c
   867B D6 06         [ 7] 6854 	sub	a, #0x06
   867D 30 16         [12] 6855 	jr	NC,00101$
                           6856 ;src/main.c:1576: DeleteSprite(&spr[i]);
   867F 06 00         [ 7] 6857 	ld	b,#0x00
   8681 69            [ 4] 6858 	ld	l, c
   8682 60            [ 4] 6859 	ld	h, b
   8683 29            [11] 6860 	add	hl, hl
   8684 09            [11] 6861 	add	hl, bc
   8685 29            [11] 6862 	add	hl, hl
   8686 09            [11] 6863 	add	hl, bc
   8687 29            [11] 6864 	add	hl, hl
   8688 09            [11] 6865 	add	hl, bc
   8689 11 0A 5F      [10] 6866 	ld	de, #_spr
   868C 19            [11] 6867 	add	hl, de
   868D C5            [11] 6868 	push	bc
   868E CD 19 77      [17] 6869 	call	_DeleteSprite
   8691 C1            [10] 6870 	pop	bc
                           6871 ;src/main.c:1575: for(u8 i=0;i<6;i++)
   8692 0C            [ 4] 6872 	inc	c
   8693 18 E5         [12] 6873 	jr	00107$
   8695                    6874 00101$:
                           6875 ;src/main.c:1577: DeleteObject(0);
   8695 2E 00         [ 7] 6876 	ld	l, #0x00
   8697 CD F3 6B      [17] 6877 	call	_DeleteObject
                           6878 ;src/main.c:1578: DeleteObject(1);
   869A 2E 01         [ 7] 6879 	ld	l, #0x01
   869C CD F3 6B      [17] 6880 	call	_DeleteObject
                           6881 ;src/main.c:1580: MakeDuel();
   869F C3 92 82      [10] 6882 	jp  _MakeDuel
                           6883 ;src/main.c:1598: void MakeShot(u8 x, u8 y, u8 dir) {	
                           6884 ;	---------------------------------
                           6885 ; Function MakeShot
                           6886 ; ---------------------------------
   86A2                    6887 _MakeShot::
                           6888 ;src/main.c:1599: if (sht.active == FALSE) { // if there is no active shot...
   86A2 01 73 5F      [10] 6889 	ld	bc, #_sht+0
   86A5 3A 77 5F      [13] 6890 	ld	a, (#(_sht + 0x0004) + 0)
   86A8 B7            [ 4] 6891 	or	a, a
   86A9 C0            [11] 6892 	ret	NZ
                           6893 ;src/main.c:1600: sht.active = TRUE; // activate it
   86AA 21 77 5F      [10] 6894 	ld	hl, #(_sht + 0x0004)
   86AD 36 01         [10] 6895 	ld	(hl), #0x01
                           6896 ;src/main.c:1601: sht.dir = dir; // the direction of the shot is that of the sprite that shoots
   86AF 21 76 5F      [10] 6897 	ld	hl, #(_sht + 0x0003)
   86B2 FD 21 04 00   [14] 6898 	ld	iy, #4
   86B6 FD 39         [15] 6899 	add	iy, sp
   86B8 FD 7E 00      [19] 6900 	ld	a, 0 (iy)
   86BB 77            [ 7] 6901 	ld	(hl), a
                           6902 ;src/main.c:1602: sht.y = y + 5; // adjusts to the height of the gun (hand)
   86BC 59            [ 4] 6903 	ld	e, c
   86BD 50            [ 4] 6904 	ld	d, b
   86BE 13            [ 6] 6905 	inc	de
   86BF 21 03 00      [10] 6906 	ld	hl, #3+0
   86C2 39            [11] 6907 	add	hl, sp
   86C3 7E            [ 7] 6908 	ld	a, (hl)
   86C4 C6 05         [ 7] 6909 	add	a, #0x05
   86C6 12            [ 7] 6910 	ld	(de), a
                           6911 ;src/main.c:1604: if (sht.dir == D_right) sht.x = x + SPR_W;
   86C7 21 04 00      [10] 6912 	ld	hl, #4+0
   86CA 39            [11] 6913 	add	hl, sp
   86CB 7E            [ 7] 6914 	ld	a, (hl)
   86CC D6 03         [ 7] 6915 	sub	a, #0x03
   86CE 20 0A         [12] 6916 	jr	NZ,00102$
   86D0 21 02 00      [10] 6917 	ld	hl, #2+0
   86D3 39            [11] 6918 	add	hl, sp
   86D4 7E            [ 7] 6919 	ld	a, (hl)
   86D5 C6 05         [ 7] 6920 	add	a, #0x05
   86D7 02            [ 7] 6921 	ld	(bc), a
   86D8 18 08         [12] 6922 	jr	00103$
   86DA                    6923 00102$:
                           6924 ;src/main.c:1605: else sht.x = x - SHT_W;
   86DA 21 02 00      [10] 6925 	ld	hl, #2+0
   86DD 39            [11] 6926 	add	hl, sp
   86DE 7E            [ 7] 6927 	ld	a, (hl)
   86DF C6 FC         [ 7] 6928 	add	a, #0xfc
   86E1 02            [ 7] 6929 	ld	(bc), a
   86E2                    6930 00103$:
                           6931 ;src/main.c:1606: cpct_akp_SFXPlay (6, 12, 65, 0, 0, AY_CHANNEL_B); // shot sound
   86E2 3E 02         [ 7] 6932 	ld	a, #0x02
   86E4 F5            [11] 6933 	push	af
   86E5 33            [ 6] 6934 	inc	sp
   86E6 21 00 00      [10] 6935 	ld	hl, #0x0000
   86E9 E5            [11] 6936 	push	hl
   86EA 2E 41         [ 7] 6937 	ld	l, #0x41
   86EC E5            [11] 6938 	push	hl
   86ED 21 06 0C      [10] 6939 	ld	hl, #0x0c06
   86F0 E5            [11] 6940 	push	hl
   86F1 CD EF 59      [17] 6941 	call	_cpct_akp_SFXPlay
   86F4 21 07 00      [10] 6942 	ld	hl, #7
   86F7 39            [11] 6943 	add	hl, sp
   86F8 F9            [ 6] 6944 	ld	sp, hl
   86F9 C9            [10] 6945 	ret
                           6946 ;src/main.c:1612: void DeleteShot() {
                           6947 ;	---------------------------------
                           6948 ; Function DeleteShot
                           6949 ; ---------------------------------
   86FA                    6950 _DeleteShot::
   86FA DD E5         [15] 6951 	push	ix
   86FC DD 21 00 00   [14] 6952 	ld	ix,#0
   8700 DD 39         [15] 6953 	add	ix,sp
   8702 F5            [11] 6954 	push	af
   8703 3B            [ 6] 6955 	dec	sp
                           6956 ;src/main.c:1614: 2 + (sht.px & 1), 2 + (sht.y & 3 ? 1 : 0), 
   8704 21 74 5F      [10] 6957 	ld	hl, #_sht + 1
   8707 4E            [ 7] 6958 	ld	c, (hl)
   8708 79            [ 4] 6959 	ld	a, c
   8709 E6 03         [ 7] 6960 	and	a, #0x03
   870B 28 04         [12] 6961 	jr	Z,00103$
   870D 16 01         [ 7] 6962 	ld	d, #0x01
   870F 18 02         [12] 6963 	jr	00104$
   8711                    6964 00103$:
   8711 16 00         [ 7] 6965 	ld	d, #0x00
   8713                    6966 00104$:
   8713 14            [ 4] 6967 	inc	d
   8714 14            [ 4] 6968 	inc	d
   8715 21 75 5F      [10] 6969 	ld	hl, #_sht + 2
   8718 5E            [ 7] 6970 	ld	e, (hl)
   8719 7B            [ 4] 6971 	ld	a, e
   871A E6 01         [ 7] 6972 	and	a, #0x01
   871C C6 02         [ 7] 6973 	add	a, #0x02
   871E DD 77 FF      [19] 6974 	ld	-1 (ix), a
                           6975 ;src/main.c:1613: cpct_etm_drawTileBox2x4(sht.px / 2, (sht.y - ORIG_MAP_Y) / 4, 
   8721 06 00         [ 7] 6976 	ld	b, #0x00
   8723 79            [ 4] 6977 	ld	a, c
   8724 C6 E0         [ 7] 6978 	add	a, #0xe0
   8726 DD 77 FD      [19] 6979 	ld	-3 (ix), a
   8729 78            [ 4] 6980 	ld	a, b
   872A CE FF         [ 7] 6981 	adc	a, #0xff
   872C DD 77 FE      [19] 6982 	ld	-2 (ix), a
   872F E1            [10] 6983 	pop	hl
   8730 E5            [11] 6984 	push	hl
   8731 DD CB FE 7E   [20] 6985 	bit	7, -2 (ix)
   8735 28 04         [12] 6986 	jr	Z,00105$
   8737 21 E3 FF      [10] 6987 	ld	hl, #0xffe3
   873A 09            [11] 6988 	add	hl, bc
   873B                    6989 00105$:
   873B CB 2C         [ 8] 6990 	sra	h
   873D CB 1D         [ 8] 6991 	rr	l
   873F CB 2C         [ 8] 6992 	sra	h
   8741 CB 1D         [ 8] 6993 	rr	l
   8743 4D            [ 4] 6994 	ld	c, l
   8744 CB 3B         [ 8] 6995 	srl	e
   8746 21 71 0F      [10] 6996 	ld	hl, #0x0f71
   8749 E5            [11] 6997 	push	hl
   874A 21 40 C1      [10] 6998 	ld	hl, #0xc140
   874D E5            [11] 6999 	push	hl
   874E 3E 28         [ 7] 7000 	ld	a, #0x28
   8750 F5            [11] 7001 	push	af
   8751 33            [ 6] 7002 	inc	sp
   8752 D5            [11] 7003 	push	de
   8753 33            [ 6] 7004 	inc	sp
   8754 DD 7E FF      [19] 7005 	ld	a, -1 (ix)
   8757 F5            [11] 7006 	push	af
   8758 33            [ 6] 7007 	inc	sp
   8759 51            [ 4] 7008 	ld	d, c
   875A D5            [11] 7009 	push	de
   875B CD 11 5B      [17] 7010 	call	_cpct_etm_drawTileBox2x4
   875E DD F9         [10] 7011 	ld	sp, ix
   8760 DD E1         [14] 7012 	pop	ix
   8762 C9            [10] 7013 	ret
                           7014 ;src/main.c:1619: void PrintShot(u8* magic) __z88dk_fastcall {
                           7015 ;	---------------------------------
                           7016 ; Function PrintShot
                           7017 ; ---------------------------------
   8763                    7018 _PrintShot::
                           7019 ;src/main.c:1620: DeleteShot(); // delete the previous shot
   8763 E5            [11] 7020 	push	hl
   8764 CD FA 86      [17] 7021 	call	_DeleteShot
   8767 C1            [10] 7022 	pop	bc
                           7023 ;src/main.c:1621: if (!sht.active) return; // outside the margins. no need to print
   8768 3A 77 5F      [13] 7024 	ld	a, (#_sht + 4)
   876B B7            [ 4] 7025 	or	a, a
   876C C8            [11] 7026 	ret	Z
                           7027 ;src/main.c:1623: SHT_W, SHT_H, g_maskTable);
                           7028 ;src/main.c:1622: cpct_drawSpriteMaskedAlignedTable(magic, cpct_getScreenPtr(CPCT_VMEM_START, sht.x, sht.y), 
   876D 21 74 5F      [10] 7029 	ld	hl, #_sht + 1
   8770 56            [ 7] 7030 	ld	d, (hl)
   8771 3A 73 5F      [13] 7031 	ld	a, (#_sht + 0)
   8774 C5            [11] 7032 	push	bc
   8775 5F            [ 4] 7033 	ld	e, a
   8776 D5            [11] 7034 	push	de
   8777 21 00 C0      [10] 7035 	ld	hl, #0xc000
   877A E5            [11] 7036 	push	hl
   877B CD CF 5D      [17] 7037 	call	_cpct_getScreenPtr
   877E C1            [10] 7038 	pop	bc
   877F 11 00 01      [10] 7039 	ld	de, #_g_maskTable
   8782 D5            [11] 7040 	push	de
   8783 11 04 08      [10] 7041 	ld	de, #0x0804
   8786 D5            [11] 7042 	push	de
   8787 E5            [11] 7043 	push	hl
   8788 C5            [11] 7044 	push	bc
   8789 CD E5 5D      [17] 7045 	call	_cpct_drawSpriteMaskedAlignedTable
   878C C9            [10] 7046 	ret
                           7047 ;src/main.c:1628: void MoveShot() {
                           7048 ;	---------------------------------
                           7049 ; Function MoveShot
                           7050 ; ---------------------------------
   878D                    7051 _MoveShot::
                           7052 ;src/main.c:1629: sht.px = sht.x; // save the current X coordinate
   878D 01 73 5F      [10] 7053 	ld	bc, #_sht+0
   8790 0A            [ 7] 7054 	ld	a, (bc)
   8791 32 75 5F      [13] 7055 	ld	(#(_sht + 0x0002)),a
                           7056 ;src/main.c:1631: if (sht.dir == D_right)	sht.x++; else sht.x--;
   8794 21 76 5F      [10] 7057 	ld	hl, #_sht + 3
   8797 56            [ 7] 7058 	ld	d, (hl)
                           7059 ;src/main.c:1629: sht.px = sht.x; // save the current X coordinate
   8798 0A            [ 7] 7060 	ld	a, (bc)
   8799 5F            [ 4] 7061 	ld	e, a
                           7062 ;src/main.c:1631: if (sht.dir == D_right)	sht.x++; else sht.x--;
   879A 7A            [ 4] 7063 	ld	a, d
   879B D6 03         [ 7] 7064 	sub	a, #0x03
   879D 20 05         [12] 7065 	jr	NZ,00102$
   879F 1C            [ 4] 7066 	inc	e
   87A0 7B            [ 4] 7067 	ld	a, e
   87A1 02            [ 7] 7068 	ld	(bc), a
   87A2 18 03         [12] 7069 	jr	00103$
   87A4                    7070 00102$:
   87A4 1D            [ 4] 7071 	dec	e
   87A5 7B            [ 4] 7072 	ld	a, e
   87A6 02            [ 7] 7073 	ld	(bc), a
   87A7                    7074 00103$:
                           7075 ;src/main.c:1629: sht.px = sht.x; // save the current X coordinate
   87A7 0A            [ 7] 7076 	ld	a, (bc)
   87A8 5F            [ 4] 7077 	ld	e, a
                           7078 ;src/main.c:1633: if (sht.x + SHT_W >= GLOBAL_MAX_X || sht.x <= 0) {
   87A9 6B            [ 4] 7079 	ld	l, e
   87AA 26 00         [ 7] 7080 	ld	h, #0x00
   87AC 23            [ 6] 7081 	inc	hl
   87AD 23            [ 6] 7082 	inc	hl
   87AE 23            [ 6] 7083 	inc	hl
   87AF 23            [ 6] 7084 	inc	hl
   87B0 7D            [ 4] 7085 	ld	a, l
   87B1 D6 50         [ 7] 7086 	sub	a, #0x50
   87B3 7C            [ 4] 7087 	ld	a, h
   87B4 17            [ 4] 7088 	rla
   87B5 3F            [ 4] 7089 	ccf
   87B6 1F            [ 4] 7090 	rra
   87B7 DE 80         [ 7] 7091 	sbc	a, #0x80
   87B9 30 03         [12] 7092 	jr	NC,00104$
   87BB 7B            [ 4] 7093 	ld	a, e
   87BC B7            [ 4] 7094 	or	a, a
   87BD C0            [11] 7095 	ret	NZ
   87BE                    7096 00104$:
                           7097 ;src/main.c:1634: sht.active = FALSE;
   87BE 21 77 5F      [10] 7098 	ld	hl, #(_sht + 0x0004)
   87C1 36 00         [10] 7099 	ld	(hl), #0x00
                           7100 ;src/main.c:1635: DeleteShot();
   87C3 C3 FA 86      [10] 7101 	jp  _DeleteShot
                           7102 ;src/main.c:1652: void PrintWizard(u8 shooting) __z88dk_fastcall {
                           7103 ;	---------------------------------
                           7104 ; Function PrintWizard
                           7105 ; ---------------------------------
   87C6                    7106 _PrintWizard::
   87C6 4D            [ 4] 7107 	ld	c, l
                           7108 ;src/main.c:1654: u8 x = 0;
   87C7 1E 00         [ 7] 7109 	ld	e, #0x00
                           7110 ;src/main.c:1656: if (spr[6].dir == D_left) { // on the right bank facing left
   87C9 3A 6B 5F      [13] 7111 	ld	a, (#_spr + 97)
                           7112 ;src/main.c:1657: if (shooting) wizard = g_wizard_1;
   87CC D6 02         [ 7] 7113 	sub	a,#0x02
   87CE 20 0F         [12] 7114 	jr	NZ,00108$
   87D0 B1            [ 4] 7115 	or	a,c
   87D1 28 05         [12] 7116 	jr	Z,00102$
   87D3 01 E3 21      [10] 7117 	ld	bc, #_g_wizard_1+0
   87D6 18 03         [12] 7118 	jr	00103$
   87D8                    7119 00102$:
                           7120 ;src/main.c:1658: else wizard = g_wizard_0;
   87D8 01 A7 21      [10] 7121 	ld	bc, #_g_wizard_0
   87DB                    7122 00103$:
                           7123 ;src/main.c:1659: x = 75;
   87DB 1E 4B         [ 7] 7124 	ld	e, #0x4b
   87DD 18 0C         [12] 7125 	jr	00109$
   87DF                    7126 00108$:
                           7127 ;src/main.c:1662: if (shooting) wizard = g_wizard_3; 
   87DF 79            [ 4] 7128 	ld	a, c
   87E0 B7            [ 4] 7129 	or	a, a
   87E1 28 05         [12] 7130 	jr	Z,00105$
   87E3 01 5B 22      [10] 7131 	ld	bc, #_g_wizard_3
   87E6 18 03         [12] 7132 	jr	00109$
   87E8                    7133 00105$:
                           7134 ;src/main.c:1663: else wizard = g_wizard_2;
   87E8 01 1F 22      [10] 7135 	ld	bc, #_g_wizard_2
   87EB                    7136 00109$:
                           7137 ;src/main.c:1667: SPR_W, SPR_H, g_maskTable); 							
                           7138 ;src/main.c:1666: cpct_drawSpriteMaskedAlignedTable(wizard, cpct_getScreenPtr(CPCT_VMEM_START, x, spr[6].y), 
   87EB 21 67 5F      [10] 7139 	ld	hl, #_spr + 93
   87EE 56            [ 7] 7140 	ld	d, (hl)
   87EF C5            [11] 7141 	push	bc
   87F0 D5            [11] 7142 	push	de
   87F1 21 00 C0      [10] 7143 	ld	hl, #0xc000
   87F4 E5            [11] 7144 	push	hl
   87F5 CD CF 5D      [17] 7145 	call	_cpct_getScreenPtr
   87F8 C1            [10] 7146 	pop	bc
   87F9 11 00 01      [10] 7147 	ld	de, #_g_maskTable
   87FC D5            [11] 7148 	push	de
   87FD 11 05 0C      [10] 7149 	ld	de, #0x0c05
   8800 D5            [11] 7150 	push	de
   8801 E5            [11] 7151 	push	hl
   8802 C5            [11] 7152 	push	bc
   8803 CD E5 5D      [17] 7153 	call	_cpct_drawSpriteMaskedAlignedTable
   8806 C9            [10] 7154 	ret
                           7155 ;src/main.c:1672: void WizardAnim() {
                           7156 ;	---------------------------------
                           7157 ; Function WizardAnim
                           7158 ; ---------------------------------
   8807                    7159 _WizardAnim::
                           7160 ;src/main.c:1673: if (ctWizardAnim > 0) {
   8807 FD 21 F1 5E   [14] 7161 	ld	iy, #_ctWizardAnim
   880B FD 7E 00      [19] 7162 	ld	a, 0 (iy)
   880E B7            [ 4] 7163 	or	a, a
   880F C8            [11] 7164 	ret	Z
                           7165 ;src/main.c:1674: switch(ctWizardAnim++) {			
   8810 FD 4E 00      [19] 7166 	ld	c, 0 (iy)
   8813 FD 34 00      [23] 7167 	inc	0 (iy)
   8816 79            [ 4] 7168 	ld	a, c
   8817 3D            [ 4] 7169 	dec	a
   8818 28 39         [12] 7170 	jr	Z,00102$
   881A 79            [ 4] 7171 	ld	a,c
   881B FE 02         [ 7] 7172 	cp	a,#0x02
   881D 28 41         [12] 7173 	jr	Z,00104$
   881F FE 03         [ 7] 7174 	cp	a,#0x03
   8821 28 4B         [12] 7175 	jr	Z,00106$
   8823 FE 04         [ 7] 7176 	cp	a,#0x04
   8825 28 5A         [12] 7177 	jr	Z,00107$
   8827 FE 05         [ 7] 7178 	cp	a,#0x05
   8829 28 61         [12] 7179 	jr	Z,00108$
   882B FE 06         [ 7] 7180 	cp	a,#0x06
   882D C8            [11] 7181 	ret	Z
   882E FE 07         [ 7] 7182 	cp	a,#0x07
   8830 C8            [11] 7183 	ret	Z
   8831 FE 08         [ 7] 7184 	cp	a,#0x08
   8833 C8            [11] 7185 	ret	Z
   8834 FE 09         [ 7] 7186 	cp	a,#0x09
   8836 C8            [11] 7187 	ret	Z
   8837 FE 0A         [ 7] 7188 	cp	a,#0x0a
   8839 C8            [11] 7189 	ret	Z
   883A FE 0B         [ 7] 7190 	cp	a,#0x0b
   883C C8            [11] 7191 	ret	Z
   883D FE 0C         [ 7] 7192 	cp	a,#0x0c
   883F 28 63         [12] 7193 	jr	Z,00115$
   8841 FE 1D         [ 7] 7194 	cp	a,#0x1d
   8843 28 0E         [12] 7195 	jr	Z,00102$
   8845 FE 1E         [ 7] 7196 	cp	a,#0x1e
   8847 28 17         [12] 7197 	jr	Z,00104$
   8849 FE 1F         [ 7] 7198 	cp	a,#0x1f
   884B 28 21         [12] 7199 	jr	Z,00106$
   884D D6 20         [ 7] 7200 	sub	a, #0x20
   884F 28 5E         [12] 7201 	jr	Z,00116$
   8851 18 68         [12] 7202 	jr	00117$
                           7203 ;src/main.c:1677: case 29:	{ PrintExplosion(&spr[6], 0); break; }
   8853                    7204 00102$:
   8853 AF            [ 4] 7205 	xor	a, a
   8854 F5            [11] 7206 	push	af
   8855 33            [ 6] 7207 	inc	sp
   8856 21 64 5F      [10] 7208 	ld	hl, #(_spr + 0x005a)
   8859 E5            [11] 7209 	push	hl
   885A CD 44 7A      [17] 7210 	call	_PrintExplosion
   885D F1            [10] 7211 	pop	af
   885E 33            [ 6] 7212 	inc	sp
   885F C9            [10] 7213 	ret
                           7214 ;src/main.c:1679: case 30:	{ PrintExplosion(&spr[6], 1); break; }
   8860                    7215 00104$:
   8860 3E 01         [ 7] 7216 	ld	a, #0x01
   8862 F5            [11] 7217 	push	af
   8863 33            [ 6] 7218 	inc	sp
   8864 21 64 5F      [10] 7219 	ld	hl, #(_spr + 0x005a)
   8867 E5            [11] 7220 	push	hl
   8868 CD 44 7A      [17] 7221 	call	_PrintExplosion
   886B F1            [10] 7222 	pop	af
   886C 33            [ 6] 7223 	inc	sp
   886D C9            [10] 7224 	ret
                           7225 ;src/main.c:1681: case 31:	{ DeleteSprite(&spr[6]); PrintExplosion(&spr[6], 0); break; }						
   886E                    7226 00106$:
   886E 21 64 5F      [10] 7227 	ld	hl, #(_spr + 0x005a)
   8871 CD 19 77      [17] 7228 	call	_DeleteSprite
   8874 AF            [ 4] 7229 	xor	a, a
   8875 F5            [11] 7230 	push	af
   8876 33            [ 6] 7231 	inc	sp
   8877 21 64 5F      [10] 7232 	ld	hl, #(_spr + 0x005a)
   887A E5            [11] 7233 	push	hl
   887B CD 44 7A      [17] 7234 	call	_PrintExplosion
   887E F1            [10] 7235 	pop	af
   887F 33            [ 6] 7236 	inc	sp
   8880 C9            [10] 7237 	ret
                           7238 ;src/main.c:1683: case 4:		{ DeleteSprite(&spr[6]); PrintWizard(TRUE); break; }		
   8881                    7239 00107$:
   8881 21 64 5F      [10] 7240 	ld	hl, #(_spr + 0x005a)
   8884 CD 19 77      [17] 7241 	call	_DeleteSprite
   8887 2E 01         [ 7] 7242 	ld	l, #0x01
   8889 C3 C6 87      [10] 7243 	jp  _PrintWizard
                           7244 ;src/main.c:1685: case 5:		{ MakeShot(spr[6].x, spr[6].y-3, spr[6].dir); break; }			
   888C                    7245 00108$:
   888C 21 6B 5F      [10] 7246 	ld	hl, #_spr + 97
   888F 56            [ 7] 7247 	ld	d, (hl)
   8890 3A 67 5F      [13] 7248 	ld	a, (#_spr + 93)
   8893 C6 FD         [ 7] 7249 	add	a, #0xfd
   8895 4F            [ 4] 7250 	ld	c, a
   8896 21 66 5F      [10] 7251 	ld	hl, #_spr + 92
   8899 46            [ 7] 7252 	ld	b, (hl)
   889A 59            [ 4] 7253 	ld	e, c
   889B D5            [11] 7254 	push	de
   889C C5            [11] 7255 	push	bc
   889D 33            [ 6] 7256 	inc	sp
   889E CD A2 86      [17] 7257 	call	_MakeShot
   88A1 F1            [10] 7258 	pop	af
   88A2 33            [ 6] 7259 	inc	sp
   88A3 C9            [10] 7260 	ret
                           7261 ;src/main.c:1694: case 12:    { DeleteSprite(&spr[6]); PrintWizard(FALSE); break;}
   88A4                    7262 00115$:
   88A4 21 64 5F      [10] 7263 	ld	hl, #(_spr + 0x005a)
   88A7 CD 19 77      [17] 7264 	call	_DeleteSprite
   88AA 2E 00         [ 7] 7265 	ld	l, #0x00
   88AC C3 C6 87      [10] 7266 	jp  _PrintWizard
                           7267 ;src/main.c:1696: case 32:    { DeleteSprite(&spr[6]); ctWizardAnim = 0; return; }
   88AF                    7268 00116$:
   88AF 21 64 5F      [10] 7269 	ld	hl, #(_spr + 0x005a)
   88B2 CD 19 77      [17] 7270 	call	_DeleteSprite
   88B5 21 F1 5E      [10] 7271 	ld	hl,#_ctWizardAnim + 0
   88B8 36 00         [10] 7272 	ld	(hl), #0x00
   88BA C9            [10] 7273 	ret
                           7274 ;src/main.c:1698: default:	{ PrintWizard(FALSE); break;	}			
   88BB                    7275 00117$:
   88BB 2E 00         [ 7] 7276 	ld	l, #0x00
                           7277 ;src/main.c:1699: }		
   88BD C3 C6 87      [10] 7278 	jp  _PrintWizard
                           7279 ;src/main.c:1705: void MakeWizardAnim(u8 player) __z88dk_fastcall {
                           7280 ;	---------------------------------
                           7281 ; Function MakeWizardAnim
                           7282 ; ---------------------------------
   88C0                    7283 _MakeWizardAnim::
   88C0 4D            [ 4] 7284 	ld	c, l
                           7285 ;src/main.c:1706: if (ctInactivity[player]++ == 80 && !sht.active) {	
   88C1 11 ED 5E      [10] 7286 	ld	de, #_ctInactivity+0
   88C4 69            [ 4] 7287 	ld	l,c
   88C5 26 00         [ 7] 7288 	ld	h,#0x00
   88C7 19            [11] 7289 	add	hl, de
   88C8 46            [ 7] 7290 	ld	b, (hl)
   88C9 58            [ 4] 7291 	ld	e, b
   88CA 1C            [ 4] 7292 	inc	e
   88CB 73            [ 7] 7293 	ld	(hl), e
   88CC 78            [ 4] 7294 	ld	a, b
   88CD D6 50         [ 7] 7295 	sub	a, #0x50
   88CF C0            [11] 7296 	ret	NZ
   88D0 3A 77 5F      [13] 7297 	ld	a, (#(_sht + 0x0004) + 0)
   88D3 B7            [ 4] 7298 	or	a, a
   88D4 C0            [11] 7299 	ret	NZ
                           7300 ;src/main.c:1707: spr[6].y = spr[6].py = spr[player].y;
   88D5 11 0A 5F      [10] 7301 	ld	de, #_spr+0
   88D8 06 00         [ 7] 7302 	ld	b,#0x00
   88DA 69            [ 4] 7303 	ld	l, c
   88DB 60            [ 4] 7304 	ld	h, b
   88DC 29            [11] 7305 	add	hl, hl
   88DD 09            [11] 7306 	add	hl, bc
   88DE 29            [11] 7307 	add	hl, hl
   88DF 09            [11] 7308 	add	hl, bc
   88E0 29            [11] 7309 	add	hl, hl
   88E1 09            [11] 7310 	add	hl, bc
   88E2 19            [11] 7311 	add	hl,de
   88E3 4D            [ 4] 7312 	ld	c,l
   88E4 44            [ 4] 7313 	ld	b,h
   88E5 23            [ 6] 7314 	inc	hl
   88E6 23            [ 6] 7315 	inc	hl
   88E7 23            [ 6] 7316 	inc	hl
   88E8 7E            [ 7] 7317 	ld	a, (hl)
   88E9 32 69 5F      [13] 7318 	ld	(#(_spr + 0x005f)),a
   88EC 32 67 5F      [13] 7319 	ld	(#(_spr + 0x005d)),a
                           7320 ;src/main.c:1709: if (spr[player].x < 40) {
   88EF 69            [ 4] 7321 	ld	l, c
   88F0 60            [ 4] 7322 	ld	h, b
   88F1 23            [ 6] 7323 	inc	hl
   88F2 23            [ 6] 7324 	inc	hl
   88F3 4E            [ 7] 7325 	ld	c, (hl)
                           7326 ;src/main.c:1710: spr[6].x = spr[6].px = 74;		
   88F4 21 5E 00      [10] 7327 	ld	hl, #0x005e
   88F7 19            [11] 7328 	add	hl, de
                           7329 ;src/main.c:1711: spr[6].dir = D_left;
                           7330 ;src/main.c:1709: if (spr[player].x < 40) {
   88F8 79            [ 4] 7331 	ld	a, c
   88F9 D6 28         [ 7] 7332 	sub	a, #0x28
   88FB 30 0E         [12] 7333 	jr	NC,00102$
                           7334 ;src/main.c:1710: spr[6].x = spr[6].px = 74;		
   88FD 36 4A         [10] 7335 	ld	(hl), #0x4a
   88FF 21 66 5F      [10] 7336 	ld	hl, #(_spr + 0x005c)
   8902 36 4A         [10] 7337 	ld	(hl), #0x4a
                           7338 ;src/main.c:1711: spr[6].dir = D_left;
   8904 21 6B 5F      [10] 7339 	ld	hl, #(_spr + 0x0061)
   8907 36 02         [10] 7340 	ld	(hl), #0x02
   8909 18 0C         [12] 7341 	jr	00103$
   890B                    7342 00102$:
                           7343 ;src/main.c:1714: spr[6].x = spr[6].px = 1;
   890B 36 01         [10] 7344 	ld	(hl), #0x01
   890D 21 66 5F      [10] 7345 	ld	hl, #(_spr + 0x005c)
   8910 36 01         [10] 7346 	ld	(hl), #0x01
                           7347 ;src/main.c:1715: spr[6].dir = D_right;
   8912 21 6B 5F      [10] 7348 	ld	hl, #(_spr + 0x0061)
   8915 36 03         [10] 7349 	ld	(hl), #0x03
   8917                    7350 00103$:
                           7351 ;src/main.c:1717: ctWizardAnim++; // makes the wizard shooting animation start
   8917 21 F1 5E      [10] 7352 	ld	hl, #_ctWizardAnim+0
   891A 34            [11] 7353 	inc	(hl)
   891B C9            [10] 7354 	ret
                           7355 ;src/main.c:1735: void MoveEnemy(TSpr *pSpr) {
                           7356 ;	---------------------------------
                           7357 ; Function MoveEnemy
                           7358 ; ---------------------------------
   891C                    7359 _MoveEnemy::
   891C DD E5         [15] 7360 	push	ix
   891E DD 21 00 00   [14] 7361 	ld	ix,#0
   8922 DD 39         [15] 7362 	add	ix,sp
   8924 21 F0 FF      [10] 7363 	ld	hl, #-16
   8927 39            [11] 7364 	add	hl, sp
   8928 F9            [ 6] 7365 	ld	sp, hl
                           7366 ;src/main.c:1736: u8 z = 255;	// multipurpose variable
   8929 DD 36 F0 FF   [19] 7367 	ld	-16 (ix), #0xff
                           7368 ;src/main.c:1737: switch(pSpr->objNum_mov) {
   892D DD 7E 04      [19] 7369 	ld	a, 4 (ix)
   8930 DD 77 F1      [19] 7370 	ld	-15 (ix), a
   8933 DD 7E 05      [19] 7371 	ld	a, 5 (ix)
   8936 DD 77 F2      [19] 7372 	ld	-14 (ix), a
   8939 DD 6E F1      [19] 7373 	ld	l,-15 (ix)
   893C DD 66 F2      [19] 7374 	ld	h,-14 (ix)
   893F 11 0C 00      [10] 7375 	ld	de, #0x000c
   8942 19            [11] 7376 	add	hl, de
   8943 7E            [ 7] 7377 	ld	a, (hl)
   8944 DD 77 F5      [19] 7378 	ld	-11 (ix), a
                           7379 ;src/main.c:1740: if (pSpr->dir == D_right) {
   8947 DD 7E F1      [19] 7380 	ld	a, -15 (ix)
   894A C6 07         [ 7] 7381 	add	a, #0x07
   894C DD 77 F3      [19] 7382 	ld	-13 (ix), a
   894F DD 7E F2      [19] 7383 	ld	a, -14 (ix)
   8952 CE 00         [ 7] 7384 	adc	a, #0x00
   8954 DD 77 F4      [19] 7385 	ld	-12 (ix), a
                           7386 ;src/main.c:1742: if (pSpr->x < pSpr->power_maxV) 
   8957 DD 7E F1      [19] 7387 	ld	a, -15 (ix)
   895A C6 02         [ 7] 7388 	add	a, #0x02
   895C DD 77 F6      [19] 7389 	ld	-10 (ix), a
   895F DD 7E F2      [19] 7390 	ld	a, -14 (ix)
   8962 CE 00         [ 7] 7391 	adc	a, #0x00
   8964 DD 77 F7      [19] 7392 	ld	-9 (ix), a
   8967 DD 7E F1      [19] 7393 	ld	a, -15 (ix)
   896A C6 0E         [ 7] 7394 	add	a, #0x0e
   896C DD 77 FA      [19] 7395 	ld	-6 (ix), a
   896F DD 7E F2      [19] 7396 	ld	a, -14 (ix)
   8972 CE 00         [ 7] 7397 	adc	a, #0x00
   8974 DD 77 FB      [19] 7398 	ld	-5 (ix), a
                           7399 ;src/main.c:1743: pSpr->x = pSpr->x + pSpr->lives_speed;
   8977 DD 7E F1      [19] 7400 	ld	a, -15 (ix)
   897A C6 0B         [ 7] 7401 	add	a, #0x0b
   897C DD 77 F8      [19] 7402 	ld	-8 (ix), a
   897F DD 7E F2      [19] 7403 	ld	a, -14 (ix)
   8982 CE 00         [ 7] 7404 	adc	a, #0x00
   8984 DD 77 F9      [19] 7405 	ld	-7 (ix), a
                           7406 ;src/main.c:1749: if (pSpr->x > pSpr->print_minV)  
   8987 DD 7E F1      [19] 7407 	ld	a, -15 (ix)
   898A C6 0D         [ 7] 7408 	add	a, #0x0d
   898C DD 77 FC      [19] 7409 	ld	-4 (ix), a
   898F DD 7E F2      [19] 7410 	ld	a, -14 (ix)
   8992 CE 00         [ 7] 7411 	adc	a, #0x00
   8994 DD 77 FD      [19] 7412 	ld	-3 (ix), a
                           7413 ;src/main.c:1756: if (pSpr->y > (spr[0].y - SHT_H) && pSpr->y < (spr[0].y + SHT_H)) z = 0; // P1
   8997 DD 7E F1      [19] 7414 	ld	a, -15 (ix)
   899A C6 03         [ 7] 7415 	add	a, #0x03
   899C DD 77 FE      [19] 7416 	ld	-2 (ix), a
   899F DD 7E F2      [19] 7417 	ld	a, -14 (ix)
   89A2 CE 00         [ 7] 7418 	adc	a, #0x00
   89A4 DD 77 FF      [19] 7419 	ld	-1 (ix), a
                           7420 ;src/main.c:1737: switch(pSpr->objNum_mov) {
   89A7 DD 7E F5      [19] 7421 	ld	a, -11 (ix)
   89AA B7            [ 4] 7422 	or	a, a
   89AB 28 1A         [12] 7423 	jr	Z,00101$
   89AD DD 7E F5      [19] 7424 	ld	a, -11 (ix)
   89B0 3D            [ 4] 7425 	dec	a
   89B1 CA F1 8A      [10] 7426 	jp	Z,00125$
   89B4 DD 7E F5      [19] 7427 	ld	a, -11 (ix)
   89B7 D6 02         [ 7] 7428 	sub	a, #0x02
   89B9 CA 56 8B      [10] 7429 	jp	Z,00135$
   89BC DD 7E F5      [19] 7430 	ld	a, -11 (ix)
   89BF D6 03         [ 7] 7431 	sub	a, #0x03
   89C1 CA 95 8C      [10] 7432 	jp	Z,00152$
   89C4 C3 A7 8D      [10] 7433 	jp	00168$
                           7434 ;src/main.c:1739: case M_linear_X:
   89C7                    7435 00101$:
                           7436 ;src/main.c:1740: if (pSpr->dir == D_right) {
   89C7 DD 6E F3      [19] 7437 	ld	l,-13 (ix)
   89CA DD 66 F4      [19] 7438 	ld	h,-12 (ix)
   89CD 7E            [ 7] 7439 	ld	a, (hl)
                           7440 ;src/main.c:1759: if (spr[z].x > pSpr->x) pSpr->dir = D_right; 
   89CE DD 6E F6      [19] 7441 	ld	l,-10 (ix)
   89D1 DD 66 F7      [19] 7442 	ld	h,-9 (ix)
   89D4 4E            [ 7] 7443 	ld	c, (hl)
                           7444 ;src/main.c:1740: if (pSpr->dir == D_right) {
   89D5 D6 03         [ 7] 7445 	sub	a, #0x03
   89D7 20 27         [12] 7446 	jr	NZ,00109$
                           7447 ;src/main.c:1742: if (pSpr->x < pSpr->power_maxV) 
   89D9 DD 6E FA      [19] 7448 	ld	l,-6 (ix)
   89DC DD 66 FB      [19] 7449 	ld	h,-5 (ix)
   89DF 46            [ 7] 7450 	ld	b, (hl)
   89E0 79            [ 4] 7451 	ld	a, c
   89E1 90            [ 4] 7452 	sub	a, b
   89E2 30 12         [12] 7453 	jr	NC,00103$
                           7454 ;src/main.c:1743: pSpr->x = pSpr->x + pSpr->lives_speed;
   89E4 DD 6E F8      [19] 7455 	ld	l,-8 (ix)
   89E7 DD 66 F9      [19] 7456 	ld	h,-7 (ix)
   89EA 46            [ 7] 7457 	ld	b, (hl)
   89EB 79            [ 4] 7458 	ld	a, c
   89EC 80            [ 4] 7459 	add	a, b
   89ED DD 6E F6      [19] 7460 	ld	l,-10 (ix)
   89F0 DD 66 F7      [19] 7461 	ld	h,-9 (ix)
   89F3 77            [ 7] 7462 	ld	(hl), a
   89F4 18 2E         [12] 7463 	jr	00110$
   89F6                    7464 00103$:
                           7465 ;src/main.c:1745: pSpr->dir = D_left;
   89F6 DD 6E F3      [19] 7466 	ld	l,-13 (ix)
   89F9 DD 66 F4      [19] 7467 	ld	h,-12 (ix)
   89FC 36 02         [10] 7468 	ld	(hl), #0x02
   89FE 18 24         [12] 7469 	jr	00110$
   8A00                    7470 00109$:
                           7471 ;src/main.c:1749: if (pSpr->x > pSpr->print_minV)  
   8A00 DD 6E FC      [19] 7472 	ld	l,-4 (ix)
   8A03 DD 66 FD      [19] 7473 	ld	h,-3 (ix)
   8A06 7E            [ 7] 7474 	ld	a, (hl)
   8A07 91            [ 4] 7475 	sub	a, c
   8A08 30 12         [12] 7476 	jr	NC,00106$
                           7477 ;src/main.c:1750: pSpr->x = pSpr->x - pSpr->lives_speed;
   8A0A DD 6E F8      [19] 7478 	ld	l,-8 (ix)
   8A0D DD 66 F9      [19] 7479 	ld	h,-7 (ix)
   8A10 46            [ 7] 7480 	ld	b, (hl)
   8A11 79            [ 4] 7481 	ld	a, c
   8A12 90            [ 4] 7482 	sub	a, b
   8A13 DD 6E F6      [19] 7483 	ld	l,-10 (ix)
   8A16 DD 66 F7      [19] 7484 	ld	h,-9 (ix)
   8A19 77            [ 7] 7485 	ld	(hl), a
   8A1A 18 08         [12] 7486 	jr	00110$
   8A1C                    7487 00106$:
                           7488 ;src/main.c:1752: pSpr->dir = D_right; 
   8A1C DD 6E F3      [19] 7489 	ld	l,-13 (ix)
   8A1F DD 66 F4      [19] 7490 	ld	h,-12 (ix)
   8A22 36 03         [10] 7491 	ld	(hl), #0x03
   8A24                    7492 00110$:
                           7493 ;src/main.c:1755: if (pSpr->ident == WITCH) {
   8A24 DD 6E F1      [19] 7494 	ld	l,-15 (ix)
   8A27 DD 66 F2      [19] 7495 	ld	h,-14 (ix)
   8A2A 23            [ 6] 7496 	inc	hl
   8A2B 7E            [ 7] 7497 	ld	a, (hl)
   8A2C D6 06         [ 7] 7498 	sub	a, #0x06
   8A2E C2 A7 8D      [10] 7499 	jp	NZ,00168$
                           7500 ;src/main.c:1756: if (pSpr->y > (spr[0].y - SHT_H) && pSpr->y < (spr[0].y + SHT_H)) z = 0; // P1
   8A31 DD 6E FE      [19] 7501 	ld	l,-2 (ix)
   8A34 DD 66 FF      [19] 7502 	ld	h,-1 (ix)
   8A37 5E            [ 7] 7503 	ld	e, (hl)
   8A38 21 0D 5F      [10] 7504 	ld	hl, #_spr + 3
   8A3B 4E            [ 7] 7505 	ld	c, (hl)
   8A3C 06 00         [ 7] 7506 	ld	b, #0x00
   8A3E 79            [ 4] 7507 	ld	a, c
   8A3F C6 F8         [ 7] 7508 	add	a, #0xf8
   8A41 6F            [ 4] 7509 	ld	l, a
   8A42 78            [ 4] 7510 	ld	a, b
   8A43 CE FF         [ 7] 7511 	adc	a, #0xff
   8A45 67            [ 4] 7512 	ld	h, a
   8A46 16 00         [ 7] 7513 	ld	d, #0x00
   8A48 7D            [ 4] 7514 	ld	a, l
   8A49 93            [ 4] 7515 	sub	a, e
   8A4A 7C            [ 4] 7516 	ld	a, h
   8A4B 9A            [ 4] 7517 	sbc	a, d
   8A4C E2 51 8A      [10] 7518 	jp	PO, 00302$
   8A4F EE 80         [ 7] 7519 	xor	a, #0x80
   8A51                    7520 00302$:
   8A51 F2 6A 8A      [10] 7521 	jp	P, 00115$
   8A54 21 08 00      [10] 7522 	ld	hl, #0x0008
   8A57 09            [11] 7523 	add	hl, bc
   8A58 7B            [ 4] 7524 	ld	a, e
   8A59 95            [ 4] 7525 	sub	a, l
   8A5A 7A            [ 4] 7526 	ld	a, d
   8A5B 9C            [ 4] 7527 	sbc	a, h
   8A5C E2 61 8A      [10] 7528 	jp	PO, 00303$
   8A5F EE 80         [ 7] 7529 	xor	a, #0x80
   8A61                    7530 00303$:
   8A61 F2 6A 8A      [10] 7531 	jp	P, 00115$
   8A64 DD 36 F0 00   [19] 7532 	ld	-16 (ix), #0x00
   8A68 18 2E         [12] 7533 	jr	00116$
   8A6A                    7534 00115$:
                           7535 ;src/main.c:1757: else if (pSpr->y > (spr[1].y - SHT_H) && pSpr->y < (spr[1].y + SHT_H)) z = 1; // P2
   8A6A 21 1C 5F      [10] 7536 	ld	hl, #_spr + 18
   8A6D 4E            [ 7] 7537 	ld	c, (hl)
   8A6E 06 00         [ 7] 7538 	ld	b, #0x00
   8A70 79            [ 4] 7539 	ld	a, c
   8A71 C6 F8         [ 7] 7540 	add	a, #0xf8
   8A73 6F            [ 4] 7541 	ld	l, a
   8A74 78            [ 4] 7542 	ld	a, b
   8A75 CE FF         [ 7] 7543 	adc	a, #0xff
   8A77 67            [ 4] 7544 	ld	h, a
   8A78 7D            [ 4] 7545 	ld	a, l
   8A79 93            [ 4] 7546 	sub	a, e
   8A7A 7C            [ 4] 7547 	ld	a, h
   8A7B 9A            [ 4] 7548 	sbc	a, d
   8A7C E2 81 8A      [10] 7549 	jp	PO, 00304$
   8A7F EE 80         [ 7] 7550 	xor	a, #0x80
   8A81                    7551 00304$:
   8A81 F2 98 8A      [10] 7552 	jp	P, 00116$
   8A84 21 08 00      [10] 7553 	ld	hl, #0x0008
   8A87 09            [11] 7554 	add	hl, bc
   8A88 7B            [ 4] 7555 	ld	a, e
   8A89 95            [ 4] 7556 	sub	a, l
   8A8A 7A            [ 4] 7557 	ld	a, d
   8A8B 9C            [ 4] 7558 	sbc	a, h
   8A8C E2 91 8A      [10] 7559 	jp	PO, 00305$
   8A8F EE 80         [ 7] 7560 	xor	a, #0x80
   8A91                    7561 00305$:
   8A91 F2 98 8A      [10] 7562 	jp	P, 00116$
   8A94 DD 36 F0 01   [19] 7563 	ld	-16 (ix), #0x01
   8A98                    7564 00116$:
                           7565 ;src/main.c:1758: if (z < 255) {
   8A98 DD 7E F0      [19] 7566 	ld	a, -16 (ix)
   8A9B D6 FF         [ 7] 7567 	sub	a, #0xff
   8A9D D2 A7 8D      [10] 7568 	jp	NC, 00168$
                           7569 ;src/main.c:1759: if (spr[z].x > pSpr->x) pSpr->dir = D_right; 
   8AA0 DD 4E F0      [19] 7570 	ld	c,-16 (ix)
   8AA3 06 00         [ 7] 7571 	ld	b,#0x00
   8AA5 69            [ 4] 7572 	ld	l, c
   8AA6 60            [ 4] 7573 	ld	h, b
   8AA7 29            [11] 7574 	add	hl, hl
   8AA8 09            [11] 7575 	add	hl, bc
   8AA9 29            [11] 7576 	add	hl, hl
   8AAA 09            [11] 7577 	add	hl, bc
   8AAB 29            [11] 7578 	add	hl, hl
   8AAC 09            [11] 7579 	add	hl, bc
   8AAD 11 0A 5F      [10] 7580 	ld	de, #_spr
   8AB0 19            [11] 7581 	add	hl, de
   8AB1 23            [ 6] 7582 	inc	hl
   8AB2 23            [ 6] 7583 	inc	hl
   8AB3 4E            [ 7] 7584 	ld	c, (hl)
   8AB4 DD 6E F6      [19] 7585 	ld	l,-10 (ix)
   8AB7 DD 66 F7      [19] 7586 	ld	h,-9 (ix)
   8ABA 7E            [ 7] 7587 	ld	a, (hl)
   8ABB 91            [ 4] 7588 	sub	a, c
   8ABC 30 0A         [12] 7589 	jr	NC,00119$
   8ABE DD 6E F3      [19] 7590 	ld	l,-13 (ix)
   8AC1 DD 66 F4      [19] 7591 	ld	h,-12 (ix)
   8AC4 36 03         [10] 7592 	ld	(hl), #0x03
   8AC6 18 08         [12] 7593 	jr	00120$
   8AC8                    7594 00119$:
                           7595 ;src/main.c:1760: else pSpr->dir = D_left;
   8AC8 DD 6E F3      [19] 7596 	ld	l,-13 (ix)
   8ACB DD 66 F4      [19] 7597 	ld	h,-12 (ix)
   8ACE 36 02         [10] 7598 	ld	(hl), #0x02
   8AD0                    7599 00120$:
                           7600 ;src/main.c:1761: MakeShot(pSpr->x, pSpr->y, pSpr->dir);
   8AD0 DD 6E F3      [19] 7601 	ld	l,-13 (ix)
   8AD3 DD 66 F4      [19] 7602 	ld	h,-12 (ix)
   8AD6 7E            [ 7] 7603 	ld	a, (hl)
   8AD7 DD 6E FE      [19] 7604 	ld	l,-2 (ix)
   8ADA DD 66 FF      [19] 7605 	ld	h,-1 (ix)
   8ADD 56            [ 7] 7606 	ld	d, (hl)
   8ADE DD 6E F6      [19] 7607 	ld	l,-10 (ix)
   8AE1 DD 66 F7      [19] 7608 	ld	h,-9 (ix)
   8AE4 46            [ 7] 7609 	ld	b, (hl)
   8AE5 F5            [11] 7610 	push	af
   8AE6 33            [ 6] 7611 	inc	sp
   8AE7 58            [ 4] 7612 	ld	e, b
   8AE8 D5            [11] 7613 	push	de
   8AE9 CD A2 86      [17] 7614 	call	_MakeShot
   8AEC F1            [10] 7615 	pop	af
   8AED 33            [ 6] 7616 	inc	sp
                           7617 ;src/main.c:1764: break;
   8AEE C3 A7 8D      [10] 7618 	jp	00168$
                           7619 ;src/main.c:1767: case M_linear_Y:
   8AF1                    7620 00125$:
                           7621 ;src/main.c:1768: if (pSpr->dir == D_down) {
   8AF1 DD 6E F3      [19] 7622 	ld	l,-13 (ix)
   8AF4 DD 66 F4      [19] 7623 	ld	h,-12 (ix)
   8AF7 46            [ 7] 7624 	ld	b, (hl)
                           7625 ;src/main.c:1756: if (pSpr->y > (spr[0].y - SHT_H) && pSpr->y < (spr[0].y + SHT_H)) z = 0; // P1
   8AF8 DD 6E FE      [19] 7626 	ld	l,-2 (ix)
   8AFB DD 66 FF      [19] 7627 	ld	h,-1 (ix)
   8AFE 4E            [ 7] 7628 	ld	c, (hl)
                           7629 ;src/main.c:1768: if (pSpr->dir == D_down) {
   8AFF 10 2B         [13] 7630 	djnz	00133$
                           7631 ;src/main.c:1770: if (pSpr->y < pSpr->power_maxV)
   8B01 DD 6E FA      [19] 7632 	ld	l,-6 (ix)
   8B04 DD 66 FB      [19] 7633 	ld	h,-5 (ix)
   8B07 46            [ 7] 7634 	ld	b, (hl)
   8B08 79            [ 4] 7635 	ld	a, c
   8B09 90            [ 4] 7636 	sub	a, b
   8B0A 30 15         [12] 7637 	jr	NC,00127$
                           7638 ;src/main.c:1771: pSpr->y = pSpr->y + (pSpr->lives_speed*2);
   8B0C DD 6E F8      [19] 7639 	ld	l,-8 (ix)
   8B0F DD 66 F9      [19] 7640 	ld	h,-7 (ix)
   8B12 46            [ 7] 7641 	ld	b, (hl)
   8B13 CB 20         [ 8] 7642 	sla	b
   8B15 79            [ 4] 7643 	ld	a, c
   8B16 80            [ 4] 7644 	add	a, b
   8B17 DD 6E FE      [19] 7645 	ld	l,-2 (ix)
   8B1A DD 66 FF      [19] 7646 	ld	h,-1 (ix)
   8B1D 77            [ 7] 7647 	ld	(hl), a
   8B1E C3 A7 8D      [10] 7648 	jp	00168$
   8B21                    7649 00127$:
                           7650 ;src/main.c:1773: pSpr->dir = D_up;
   8B21 DD 6E F3      [19] 7651 	ld	l,-13 (ix)
   8B24 DD 66 F4      [19] 7652 	ld	h,-12 (ix)
   8B27 36 00         [10] 7653 	ld	(hl), #0x00
   8B29 C3 A7 8D      [10] 7654 	jp	00168$
   8B2C                    7655 00133$:
                           7656 ;src/main.c:1777: if (pSpr->y > pSpr->print_minV) 
   8B2C DD 6E FC      [19] 7657 	ld	l,-4 (ix)
   8B2F DD 66 FD      [19] 7658 	ld	h,-3 (ix)
   8B32 7E            [ 7] 7659 	ld	a, (hl)
   8B33 91            [ 4] 7660 	sub	a, c
   8B34 30 15         [12] 7661 	jr	NC,00130$
                           7662 ;src/main.c:1778: pSpr->y = pSpr->y - (pSpr->lives_speed*2);
   8B36 DD 6E F8      [19] 7663 	ld	l,-8 (ix)
   8B39 DD 66 F9      [19] 7664 	ld	h,-7 (ix)
   8B3C 46            [ 7] 7665 	ld	b, (hl)
   8B3D CB 20         [ 8] 7666 	sla	b
   8B3F 79            [ 4] 7667 	ld	a, c
   8B40 90            [ 4] 7668 	sub	a, b
   8B41 DD 6E FE      [19] 7669 	ld	l,-2 (ix)
   8B44 DD 66 FF      [19] 7670 	ld	h,-1 (ix)
   8B47 77            [ 7] 7671 	ld	(hl), a
   8B48 C3 A7 8D      [10] 7672 	jp	00168$
   8B4B                    7673 00130$:
                           7674 ;src/main.c:1780: pSpr->dir = D_down; 
   8B4B DD 6E F3      [19] 7675 	ld	l,-13 (ix)
   8B4E DD 66 F4      [19] 7676 	ld	h,-12 (ix)
   8B51 36 01         [10] 7677 	ld	(hl), #0x01
                           7678 ;src/main.c:1782: break;
   8B53 C3 A7 8D      [10] 7679 	jp	00168$
                           7680 ;src/main.c:1785: case M_linear_XY:		
   8B56                    7681 00135$:
                           7682 ;src/main.c:1787: if (pSpr->dir == D_up && OnBackground(pSpr->x, pSpr->y - (pSpr->lives_speed*2)-8))
   8B56 DD 6E F3      [19] 7683 	ld	l,-13 (ix)
   8B59 DD 66 F4      [19] 7684 	ld	h,-12 (ix)
   8B5C 7E            [ 7] 7685 	ld	a, (hl)
   8B5D B7            [ 4] 7686 	or	a, a
   8B5E 20 41         [12] 7687 	jr	NZ,00149$
   8B60 DD 6E FE      [19] 7688 	ld	l,-2 (ix)
   8B63 DD 66 FF      [19] 7689 	ld	h,-1 (ix)
   8B66 4E            [ 7] 7690 	ld	c, (hl)
   8B67 DD 6E F8      [19] 7691 	ld	l,-8 (ix)
   8B6A DD 66 F9      [19] 7692 	ld	h,-7 (ix)
   8B6D 46            [ 7] 7693 	ld	b, (hl)
   8B6E CB 20         [ 8] 7694 	sla	b
   8B70 79            [ 4] 7695 	ld	a, c
   8B71 90            [ 4] 7696 	sub	a, b
   8B72 C6 F8         [ 7] 7697 	add	a, #0xf8
   8B74 57            [ 4] 7698 	ld	d, a
   8B75 DD 6E F6      [19] 7699 	ld	l,-10 (ix)
   8B78 DD 66 F7      [19] 7700 	ld	h,-9 (ix)
   8B7B 5E            [ 7] 7701 	ld	e, (hl)
   8B7C D5            [11] 7702 	push	de
   8B7D CD 0A 62      [17] 7703 	call	_OnBackground
   8B80 F1            [10] 7704 	pop	af
   8B81 7D            [ 4] 7705 	ld	a, l
   8B82 B7            [ 4] 7706 	or	a, a
   8B83 28 1C         [12] 7707 	jr	Z,00149$
                           7708 ;src/main.c:1788: pSpr->y = pSpr->y - (pSpr->lives_speed*2);			
   8B85 DD 6E FE      [19] 7709 	ld	l,-2 (ix)
   8B88 DD 66 FF      [19] 7710 	ld	h,-1 (ix)
   8B8B 4E            [ 7] 7711 	ld	c, (hl)
   8B8C DD 6E F8      [19] 7712 	ld	l,-8 (ix)
   8B8F DD 66 F9      [19] 7713 	ld	h,-7 (ix)
   8B92 46            [ 7] 7714 	ld	b, (hl)
   8B93 CB 20         [ 8] 7715 	sla	b
   8B95 79            [ 4] 7716 	ld	a, c
   8B96 90            [ 4] 7717 	sub	a, b
   8B97 DD 6E FE      [19] 7718 	ld	l,-2 (ix)
   8B9A DD 66 FF      [19] 7719 	ld	h,-1 (ix)
   8B9D 77            [ 7] 7720 	ld	(hl), a
   8B9E C3 A7 8D      [10] 7721 	jp	00168$
   8BA1                    7722 00149$:
                           7723 ;src/main.c:1790: else if (pSpr->dir == D_down && OnBackground(pSpr->x, pSpr->y + (pSpr->lives_speed*2)+2))
   8BA1 DD 6E F3      [19] 7724 	ld	l,-13 (ix)
   8BA4 DD 66 F4      [19] 7725 	ld	h,-12 (ix)
   8BA7 4E            [ 7] 7726 	ld	c, (hl)
   8BA8 0D            [ 4] 7727 	dec	c
   8BA9 20 40         [12] 7728 	jr	NZ,00145$
   8BAB DD 6E FE      [19] 7729 	ld	l,-2 (ix)
   8BAE DD 66 FF      [19] 7730 	ld	h,-1 (ix)
   8BB1 4E            [ 7] 7731 	ld	c, (hl)
   8BB2 DD 6E F8      [19] 7732 	ld	l,-8 (ix)
   8BB5 DD 66 F9      [19] 7733 	ld	h,-7 (ix)
   8BB8 6E            [ 7] 7734 	ld	l, (hl)
   8BB9 CB 25         [ 8] 7735 	sla	l
   8BBB 09            [11] 7736 	add	hl, bc
   8BBC 55            [ 4] 7737 	ld	d, l
   8BBD 14            [ 4] 7738 	inc	d
   8BBE 14            [ 4] 7739 	inc	d
   8BBF DD 6E F6      [19] 7740 	ld	l,-10 (ix)
   8BC2 DD 66 F7      [19] 7741 	ld	h,-9 (ix)
   8BC5 5E            [ 7] 7742 	ld	e, (hl)
   8BC6 D5            [11] 7743 	push	de
   8BC7 CD 0A 62      [17] 7744 	call	_OnBackground
   8BCA F1            [10] 7745 	pop	af
   8BCB 7D            [ 4] 7746 	ld	a, l
   8BCC B7            [ 4] 7747 	or	a, a
   8BCD 28 1C         [12] 7748 	jr	Z,00145$
                           7749 ;src/main.c:1791: pSpr->y = pSpr->y + (pSpr->lives_speed*2);
   8BCF DD 6E FE      [19] 7750 	ld	l,-2 (ix)
   8BD2 DD 66 FF      [19] 7751 	ld	h,-1 (ix)
   8BD5 4E            [ 7] 7752 	ld	c, (hl)
   8BD6 DD 6E F8      [19] 7753 	ld	l,-8 (ix)
   8BD9 DD 66 F9      [19] 7754 	ld	h,-7 (ix)
   8BDC 46            [ 7] 7755 	ld	b, (hl)
   8BDD CB 20         [ 8] 7756 	sla	b
   8BDF 79            [ 4] 7757 	ld	a, c
   8BE0 80            [ 4] 7758 	add	a, b
   8BE1 DD 6E FE      [19] 7759 	ld	l,-2 (ix)
   8BE4 DD 66 FF      [19] 7760 	ld	h,-1 (ix)
   8BE7 77            [ 7] 7761 	ld	(hl), a
   8BE8 C3 A7 8D      [10] 7762 	jp	00168$
   8BEB                    7763 00145$:
                           7764 ;src/main.c:1793: else if (pSpr->dir == D_left && OnBackground((pSpr->x - pSpr->lives_speed)-3, pSpr->y))
   8BEB DD 6E F3      [19] 7765 	ld	l,-13 (ix)
   8BEE DD 66 F4      [19] 7766 	ld	h,-12 (ix)
   8BF1 7E            [ 7] 7767 	ld	a, (hl)
   8BF2 D6 02         [ 7] 7768 	sub	a, #0x02
   8BF4 20 3D         [12] 7769 	jr	NZ,00141$
   8BF6 DD 6E FE      [19] 7770 	ld	l,-2 (ix)
   8BF9 DD 66 FF      [19] 7771 	ld	h,-1 (ix)
   8BFC 56            [ 7] 7772 	ld	d, (hl)
   8BFD DD 6E F6      [19] 7773 	ld	l,-10 (ix)
   8C00 DD 66 F7      [19] 7774 	ld	h,-9 (ix)
   8C03 4E            [ 7] 7775 	ld	c, (hl)
   8C04 DD 6E F8      [19] 7776 	ld	l,-8 (ix)
   8C07 DD 66 F9      [19] 7777 	ld	h,-7 (ix)
   8C0A 5E            [ 7] 7778 	ld	e, (hl)
   8C0B 79            [ 4] 7779 	ld	a, c
   8C0C 93            [ 4] 7780 	sub	a, e
   8C0D C6 FD         [ 7] 7781 	add	a, #0xfd
   8C0F 5F            [ 4] 7782 	ld	e,a
   8C10 D5            [11] 7783 	push	de
   8C11 CD 0A 62      [17] 7784 	call	_OnBackground
   8C14 F1            [10] 7785 	pop	af
   8C15 7D            [ 4] 7786 	ld	a, l
   8C16 B7            [ 4] 7787 	or	a, a
   8C17 28 1A         [12] 7788 	jr	Z,00141$
                           7789 ;src/main.c:1794: pSpr->x = pSpr->x - pSpr->lives_speed;
   8C19 DD 6E F6      [19] 7790 	ld	l,-10 (ix)
   8C1C DD 66 F7      [19] 7791 	ld	h,-9 (ix)
   8C1F 4E            [ 7] 7792 	ld	c, (hl)
   8C20 DD 6E F8      [19] 7793 	ld	l,-8 (ix)
   8C23 DD 66 F9      [19] 7794 	ld	h,-7 (ix)
   8C26 46            [ 7] 7795 	ld	b, (hl)
   8C27 79            [ 4] 7796 	ld	a, c
   8C28 90            [ 4] 7797 	sub	a, b
   8C29 DD 6E F6      [19] 7798 	ld	l,-10 (ix)
   8C2C DD 66 F7      [19] 7799 	ld	h,-9 (ix)
   8C2F 77            [ 7] 7800 	ld	(hl), a
   8C30 C3 A7 8D      [10] 7801 	jp	00168$
   8C33                    7802 00141$:
                           7803 ;src/main.c:1796: else if (pSpr->dir == D_right && OnBackground((pSpr->x + pSpr->lives_speed)+1, pSpr->y))
   8C33 DD 6E F3      [19] 7804 	ld	l,-13 (ix)
   8C36 DD 66 F4      [19] 7805 	ld	h,-12 (ix)
   8C39 7E            [ 7] 7806 	ld	a, (hl)
   8C3A D6 03         [ 7] 7807 	sub	a, #0x03
   8C3C 20 3C         [12] 7808 	jr	NZ,00137$
   8C3E DD 6E FE      [19] 7809 	ld	l,-2 (ix)
   8C41 DD 66 FF      [19] 7810 	ld	h,-1 (ix)
   8C44 56            [ 7] 7811 	ld	d, (hl)
   8C45 DD 6E F6      [19] 7812 	ld	l,-10 (ix)
   8C48 DD 66 F7      [19] 7813 	ld	h,-9 (ix)
   8C4B 4E            [ 7] 7814 	ld	c, (hl)
   8C4C DD 6E F8      [19] 7815 	ld	l,-8 (ix)
   8C4F DD 66 F9      [19] 7816 	ld	h,-7 (ix)
   8C52 6E            [ 7] 7817 	ld	l, (hl)
   8C53 09            [11] 7818 	add	hl, bc
   8C54 45            [ 4] 7819 	ld	b, l
   8C55 04            [ 4] 7820 	inc	b
   8C56 58            [ 4] 7821 	ld	e, b
   8C57 D5            [11] 7822 	push	de
   8C58 CD 0A 62      [17] 7823 	call	_OnBackground
   8C5B F1            [10] 7824 	pop	af
   8C5C 7D            [ 4] 7825 	ld	a, l
   8C5D B7            [ 4] 7826 	or	a, a
   8C5E 28 1A         [12] 7827 	jr	Z,00137$
                           7828 ;src/main.c:1797: pSpr->x = pSpr->x + pSpr->lives_speed;
   8C60 DD 6E F6      [19] 7829 	ld	l,-10 (ix)
   8C63 DD 66 F7      [19] 7830 	ld	h,-9 (ix)
   8C66 4E            [ 7] 7831 	ld	c, (hl)
   8C67 DD 6E F8      [19] 7832 	ld	l,-8 (ix)
   8C6A DD 66 F9      [19] 7833 	ld	h,-7 (ix)
   8C6D 46            [ 7] 7834 	ld	b, (hl)
   8C6E 79            [ 4] 7835 	ld	a, c
   8C6F 80            [ 4] 7836 	add	a, b
   8C70 DD 6E F6      [19] 7837 	ld	l,-10 (ix)
   8C73 DD 66 F7      [19] 7838 	ld	h,-9 (ix)
   8C76 77            [ 7] 7839 	ld	(hl), a
   8C77 C3 A7 8D      [10] 7840 	jp	00168$
   8C7A                    7841 00137$:
                           7842 ;src/main.c:1799: else pSpr->dir = cpct_getRandom_lcg_u8(0) / 65; // 0-1-2-3			
   8C7A 2E 00         [ 7] 7843 	ld	l, #0x00
   8C7C CD D4 5B      [17] 7844 	call	_cpct_getRandom_lcg_u8
   8C7F 45            [ 4] 7845 	ld	b, l
   8C80 3E 41         [ 7] 7846 	ld	a, #0x41
   8C82 F5            [11] 7847 	push	af
   8C83 33            [ 6] 7848 	inc	sp
   8C84 C5            [11] 7849 	push	bc
   8C85 33            [ 6] 7850 	inc	sp
   8C86 CD 71 51      [17] 7851 	call	__divuchar
   8C89 F1            [10] 7852 	pop	af
   8C8A 4D            [ 4] 7853 	ld	c, l
   8C8B DD 6E F3      [19] 7854 	ld	l,-13 (ix)
   8C8E DD 66 F4      [19] 7855 	ld	h,-12 (ix)
   8C91 71            [ 7] 7856 	ld	(hl), c
                           7857 ;src/main.c:1800: break;
   8C92 C3 A7 8D      [10] 7858 	jp	00168$
                           7859 ;src/main.c:1803: case M_chaser:
   8C95                    7860 00152$:
                           7861 ;src/main.c:1804: if (ctMainLoop % pSpr->lives_speed == 0) {
   8C95 DD 6E F8      [19] 7862 	ld	l,-8 (ix)
   8C98 DD 66 F9      [19] 7863 	ld	h,-7 (ix)
   8C9B 4E            [ 7] 7864 	ld	c, (hl)
   8C9C 06 00         [ 7] 7865 	ld	b, #0x00
   8C9E C5            [11] 7866 	push	bc
   8C9F 2A F2 5E      [16] 7867 	ld	hl, (_ctMainLoop)
   8CA2 E5            [11] 7868 	push	hl
   8CA3 CD C2 5D      [17] 7869 	call	__modsint
   8CA6 F1            [10] 7870 	pop	af
   8CA7 F1            [10] 7871 	pop	af
   8CA8 7C            [ 4] 7872 	ld	a, h
                           7873 ;src/main.c:1805: z = 0;
   8CA9 B5            [ 4] 7874 	or	a,l
   8CAA C2 A7 8D      [10] 7875 	jp	NZ,00168$
   8CAD 4F            [ 4] 7876 	ld	c,a
                           7877 ;src/main.c:1807: if (TwoPlayers)
   8CAE 3A D4 5E      [13] 7878 	ld	a,(#_TwoPlayers + 0)
   8CB1 B7            [ 4] 7879 	or	a, a
   8CB2 CA 38 8D      [10] 7880 	jp	Z, 00154$
                           7881 ;src/main.c:1808: z = Abs(pSpr->x - spr[1].x)*2 + Abs(pSpr->y - spr[1].y) <
   8CB5 DD 6E F6      [19] 7882 	ld	l,-10 (ix)
   8CB8 DD 66 F7      [19] 7883 	ld	h,-9 (ix)
   8CBB 4E            [ 7] 7884 	ld	c, (hl)
   8CBC 06 00         [ 7] 7885 	ld	b, #0x00
   8CBE 21 1B 5F      [10] 7886 	ld	hl, #_spr + 17
   8CC1 5E            [ 7] 7887 	ld	e, (hl)
   8CC2 16 00         [ 7] 7888 	ld	d, #0x00
   8CC4 79            [ 4] 7889 	ld	a, c
   8CC5 93            [ 4] 7890 	sub	a, e
   8CC6 6F            [ 4] 7891 	ld	l, a
   8CC7 78            [ 4] 7892 	ld	a, b
   8CC8 9A            [ 4] 7893 	sbc	a, d
   8CC9 67            [ 4] 7894 	ld	h, a
   8CCA CD 83 5F      [17] 7895 	call	_Abs
   8CCD 29            [11] 7896 	add	hl, hl
   8CCE 4D            [ 4] 7897 	ld	c, l
   8CCF 44            [ 4] 7898 	ld	b, h
   8CD0 DD 6E FE      [19] 7899 	ld	l,-2 (ix)
   8CD3 DD 66 FF      [19] 7900 	ld	h,-1 (ix)
   8CD6 5E            [ 7] 7901 	ld	e, (hl)
   8CD7 16 00         [ 7] 7902 	ld	d, #0x00
   8CD9 21 1C 5F      [10] 7903 	ld	hl, #_spr + 18
   8CDC 6E            [ 7] 7904 	ld	l, (hl)
   8CDD 26 00         [ 7] 7905 	ld	h, #0x00
   8CDF 7B            [ 4] 7906 	ld	a, e
   8CE0 95            [ 4] 7907 	sub	a, l
   8CE1 6F            [ 4] 7908 	ld	l, a
   8CE2 7A            [ 4] 7909 	ld	a, d
   8CE3 9C            [ 4] 7910 	sbc	a, h
   8CE4 67            [ 4] 7911 	ld	h, a
   8CE5 C5            [11] 7912 	push	bc
   8CE6 CD 83 5F      [17] 7913 	call	_Abs
   8CE9 C1            [10] 7914 	pop	bc
   8CEA 09            [11] 7915 	add	hl,bc
   8CEB DD 75 FC      [19] 7916 	ld	-4 (ix), l
   8CEE DD 74 FD      [19] 7917 	ld	-3 (ix), h
                           7918 ;src/main.c:1809: Abs(pSpr->x - spr[0].x)*2 + Abs(pSpr->y - spr[0].y);
   8CF1 DD 6E F6      [19] 7919 	ld	l,-10 (ix)
   8CF4 DD 66 F7      [19] 7920 	ld	h,-9 (ix)
   8CF7 4E            [ 7] 7921 	ld	c, (hl)
   8CF8 06 00         [ 7] 7922 	ld	b, #0x00
   8CFA 21 0C 5F      [10] 7923 	ld	hl, #_spr + 2
   8CFD 5E            [ 7] 7924 	ld	e, (hl)
   8CFE 16 00         [ 7] 7925 	ld	d, #0x00
   8D00 79            [ 4] 7926 	ld	a, c
   8D01 93            [ 4] 7927 	sub	a, e
   8D02 6F            [ 4] 7928 	ld	l, a
   8D03 78            [ 4] 7929 	ld	a, b
   8D04 9A            [ 4] 7930 	sbc	a, d
   8D05 67            [ 4] 7931 	ld	h, a
   8D06 CD 83 5F      [17] 7932 	call	_Abs
   8D09 29            [11] 7933 	add	hl, hl
   8D0A 4D            [ 4] 7934 	ld	c, l
   8D0B 44            [ 4] 7935 	ld	b, h
   8D0C DD 6E FE      [19] 7936 	ld	l,-2 (ix)
   8D0F DD 66 FF      [19] 7937 	ld	h,-1 (ix)
   8D12 5E            [ 7] 7938 	ld	e, (hl)
   8D13 16 00         [ 7] 7939 	ld	d, #0x00
   8D15 21 0D 5F      [10] 7940 	ld	hl, #_spr + 3
   8D18 6E            [ 7] 7941 	ld	l, (hl)
   8D19 26 00         [ 7] 7942 	ld	h, #0x00
   8D1B 7B            [ 4] 7943 	ld	a, e
   8D1C 95            [ 4] 7944 	sub	a, l
   8D1D 6F            [ 4] 7945 	ld	l, a
   8D1E 7A            [ 4] 7946 	ld	a, d
   8D1F 9C            [ 4] 7947 	sbc	a, h
   8D20 67            [ 4] 7948 	ld	h, a
   8D21 C5            [11] 7949 	push	bc
   8D22 CD 83 5F      [17] 7950 	call	_Abs
   8D25 C1            [10] 7951 	pop	bc
   8D26 09            [11] 7952 	add	hl, bc
   8D27 DD 7E FC      [19] 7953 	ld	a, -4 (ix)
   8D2A 95            [ 4] 7954 	sub	a, l
   8D2B DD 7E FD      [19] 7955 	ld	a, -3 (ix)
   8D2E 9C            [ 4] 7956 	sbc	a, h
   8D2F E2 34 8D      [10] 7957 	jp	PO, 00314$
   8D32 EE 80         [ 7] 7958 	xor	a, #0x80
   8D34                    7959 00314$:
   8D34 07            [ 4] 7960 	rlca
   8D35 E6 01         [ 7] 7961 	and	a,#0x01
   8D37 4F            [ 4] 7962 	ld	c, a
   8D38                    7963 00154$:
                           7964 ;src/main.c:1811: if (pSpr->x < spr[z].x) {
   8D38 DD 6E F6      [19] 7965 	ld	l,-10 (ix)
   8D3B DD 66 F7      [19] 7966 	ld	h,-9 (ix)
   8D3E 46            [ 7] 7967 	ld	b, (hl)
   8D3F 11 0A 5F      [10] 7968 	ld	de, #_spr+0
   8D42 D5            [11] 7969 	push	de
   8D43 59            [ 4] 7970 	ld	e,c
   8D44 16 00         [ 7] 7971 	ld	d,#0x00
   8D46 6B            [ 4] 7972 	ld	l, e
   8D47 62            [ 4] 7973 	ld	h, d
   8D48 29            [11] 7974 	add	hl, hl
   8D49 19            [11] 7975 	add	hl, de
   8D4A 29            [11] 7976 	add	hl, hl
   8D4B 19            [11] 7977 	add	hl, de
   8D4C 29            [11] 7978 	add	hl, hl
   8D4D 19            [11] 7979 	add	hl, de
   8D4E D1            [10] 7980 	pop	de
   8D4F 19            [11] 7981 	add	hl,de
   8D50 5D            [ 4] 7982 	ld	e,l
   8D51 54            [ 4] 7983 	ld	d,h
   8D52 23            [ 6] 7984 	inc	hl
   8D53 23            [ 6] 7985 	inc	hl
   8D54 4E            [ 7] 7986 	ld	c, (hl)
   8D55 78            [ 4] 7987 	ld	a, b
   8D56 91            [ 4] 7988 	sub	a, c
   8D57 30 12         [12] 7989 	jr	NC,00158$
                           7990 ;src/main.c:1812: pSpr->x++;
   8D59 04            [ 4] 7991 	inc	b
   8D5A DD 6E F6      [19] 7992 	ld	l,-10 (ix)
   8D5D DD 66 F7      [19] 7993 	ld	h,-9 (ix)
   8D60 70            [ 7] 7994 	ld	(hl), b
                           7995 ;src/main.c:1813: pSpr->dir = D_right;
   8D61 DD 6E F3      [19] 7996 	ld	l,-13 (ix)
   8D64 DD 66 F4      [19] 7997 	ld	h,-12 (ix)
   8D67 36 03         [10] 7998 	ld	(hl), #0x03
   8D69 18 14         [12] 7999 	jr	00159$
   8D6B                    8000 00158$:
                           8001 ;src/main.c:1816: else if (pSpr->x > spr[z].x) {
   8D6B 79            [ 4] 8002 	ld	a, c
   8D6C 90            [ 4] 8003 	sub	a, b
   8D6D 30 10         [12] 8004 	jr	NC,00159$
                           8005 ;src/main.c:1817: pSpr->x--;
   8D6F 05            [ 4] 8006 	dec	b
   8D70 DD 6E F6      [19] 8007 	ld	l,-10 (ix)
   8D73 DD 66 F7      [19] 8008 	ld	h,-9 (ix)
   8D76 70            [ 7] 8009 	ld	(hl), b
                           8010 ;src/main.c:1818: pSpr->dir = D_left;
   8D77 DD 6E F3      [19] 8011 	ld	l,-13 (ix)
   8D7A DD 66 F4      [19] 8012 	ld	h,-12 (ix)
   8D7D 36 02         [10] 8013 	ld	(hl), #0x02
   8D7F                    8014 00159$:
                           8015 ;src/main.c:1821: if (pSpr->y < spr[z].y) {
   8D7F DD 6E FE      [19] 8016 	ld	l,-2 (ix)
   8D82 DD 66 FF      [19] 8017 	ld	h,-1 (ix)
   8D85 4E            [ 7] 8018 	ld	c, (hl)
   8D86 EB            [ 4] 8019 	ex	de,hl
   8D87 23            [ 6] 8020 	inc	hl
   8D88 23            [ 6] 8021 	inc	hl
   8D89 23            [ 6] 8022 	inc	hl
   8D8A 46            [ 7] 8023 	ld	b, (hl)
   8D8B 79            [ 4] 8024 	ld	a, c
   8D8C 90            [ 4] 8025 	sub	a, b
   8D8D 30 0B         [12] 8026 	jr	NC,00163$
                           8027 ;src/main.c:1822: pSpr->y+=2;
   8D8F 0C            [ 4] 8028 	inc	c
   8D90 0C            [ 4] 8029 	inc	c
   8D91 DD 6E FE      [19] 8030 	ld	l,-2 (ix)
   8D94 DD 66 FF      [19] 8031 	ld	h,-1 (ix)
   8D97 71            [ 7] 8032 	ld	(hl), c
   8D98 18 0D         [12] 8033 	jr	00168$
   8D9A                    8034 00163$:
                           8035 ;src/main.c:1825: else if (pSpr->y > spr[z].y) {
   8D9A 78            [ 4] 8036 	ld	a, b
   8D9B 91            [ 4] 8037 	sub	a, c
   8D9C 30 09         [12] 8038 	jr	NC,00168$
                           8039 ;src/main.c:1826: pSpr->y-=2;
   8D9E 0D            [ 4] 8040 	dec	c
   8D9F 0D            [ 4] 8041 	dec	c
   8DA0 DD 6E FE      [19] 8042 	ld	l,-2 (ix)
   8DA3 DD 66 FF      [19] 8043 	ld	h,-1 (ix)
   8DA6 71            [ 7] 8044 	ld	(hl), c
                           8045 ;src/main.c:1830: }
   8DA7                    8046 00168$:
   8DA7 DD F9         [10] 8047 	ld	sp, ix
   8DA9 DD E1         [14] 8048 	pop	ix
   8DAB C9            [10] 8049 	ret
                           8050 ;src/main.c:1835: void SetEnemyParams(u8 i, u8 ident, u8 mov, u8 dir, u8 speed, u8 x, u8 y, u8 minV, u8 maxV) {
                           8051 ;	---------------------------------
                           8052 ; Function SetEnemyParams
                           8053 ; ---------------------------------
   8DAC                    8054 _SetEnemyParams::
   8DAC DD E5         [15] 8055 	push	ix
   8DAE DD 21 00 00   [14] 8056 	ld	ix,#0
   8DB2 DD 39         [15] 8057 	add	ix,sp
                           8058 ;src/main.c:1836: spr[i].num = i;
   8DB4 01 0A 5F      [10] 8059 	ld	bc, #_spr+0
   8DB7 DD 5E 04      [19] 8060 	ld	e,4 (ix)
   8DBA 16 00         [ 7] 8061 	ld	d,#0x00
   8DBC 6B            [ 4] 8062 	ld	l, e
   8DBD 62            [ 4] 8063 	ld	h, d
   8DBE 29            [11] 8064 	add	hl, hl
   8DBF 19            [11] 8065 	add	hl, de
   8DC0 29            [11] 8066 	add	hl, hl
   8DC1 19            [11] 8067 	add	hl, de
   8DC2 29            [11] 8068 	add	hl, hl
   8DC3 19            [11] 8069 	add	hl, de
   8DC4 09            [11] 8070 	add	hl,bc
   8DC5 4D            [ 4] 8071 	ld	c, l
   8DC6 44            [ 4] 8072 	ld	b, h
   8DC7 DD 7E 04      [19] 8073 	ld	a, 4 (ix)
   8DCA 02            [ 7] 8074 	ld	(bc), a
                           8075 ;src/main.c:1837: spr[i].ident = ident; 
   8DCB 59            [ 4] 8076 	ld	e, c
   8DCC 50            [ 4] 8077 	ld	d, b
   8DCD 13            [ 6] 8078 	inc	de
   8DCE DD 7E 05      [19] 8079 	ld	a, 5 (ix)
   8DD1 12            [ 7] 8080 	ld	(de), a
                           8081 ;src/main.c:1838: spr[i].objNum_mov = mov;	 
   8DD2 21 0C 00      [10] 8082 	ld	hl, #0x000c
   8DD5 09            [11] 8083 	add	hl, bc
   8DD6 DD 7E 06      [19] 8084 	ld	a, 6 (ix)
   8DD9 77            [ 7] 8085 	ld	(hl), a
                           8086 ;src/main.c:1839: spr[i].dir = dir; 
   8DDA 21 07 00      [10] 8087 	ld	hl, #0x0007
   8DDD 09            [11] 8088 	add	hl, bc
   8DDE DD 7E 07      [19] 8089 	ld	a, 7 (ix)
   8DE1 77            [ 7] 8090 	ld	(hl), a
                           8091 ;src/main.c:1840: spr[i].lives_speed = speed;
   8DE2 21 0B 00      [10] 8092 	ld	hl, #0x000b
   8DE5 09            [11] 8093 	add	hl, bc
   8DE6 DD 7E 08      [19] 8094 	ld	a, 8 (ix)
   8DE9 77            [ 7] 8095 	ld	(hl), a
                           8096 ;src/main.c:1841: spr[i].x = spr[i].px = x;
   8DEA 59            [ 4] 8097 	ld	e, c
   8DEB 50            [ 4] 8098 	ld	d, b
   8DEC 13            [ 6] 8099 	inc	de
   8DED 13            [ 6] 8100 	inc	de
   8DEE 21 04 00      [10] 8101 	ld	hl, #0x0004
   8DF1 09            [11] 8102 	add	hl, bc
   8DF2 DD 7E 09      [19] 8103 	ld	a, 9 (ix)
   8DF5 77            [ 7] 8104 	ld	(hl), a
   8DF6 DD 7E 09      [19] 8105 	ld	a, 9 (ix)
   8DF9 12            [ 7] 8106 	ld	(de), a
                           8107 ;src/main.c:1842: spr[i].y = spr[i].py = y;
   8DFA 59            [ 4] 8108 	ld	e, c
   8DFB 50            [ 4] 8109 	ld	d, b
   8DFC 13            [ 6] 8110 	inc	de
   8DFD 13            [ 6] 8111 	inc	de
   8DFE 13            [ 6] 8112 	inc	de
   8DFF 21 05 00      [10] 8113 	ld	hl, #0x0005
   8E02 09            [11] 8114 	add	hl, bc
   8E03 DD 7E 0A      [19] 8115 	ld	a, 10 (ix)
   8E06 77            [ 7] 8116 	ld	(hl), a
   8E07 DD 7E 0A      [19] 8117 	ld	a, 10 (ix)
   8E0A 12            [ 7] 8118 	ld	(de), a
                           8119 ;src/main.c:1843: spr[i].print_minV = minV;
   8E0B 21 0D 00      [10] 8120 	ld	hl, #0x000d
   8E0E 09            [11] 8121 	add	hl, bc
   8E0F DD 7E 0B      [19] 8122 	ld	a, 11 (ix)
   8E12 77            [ 7] 8123 	ld	(hl), a
                           8124 ;src/main.c:1844: spr[i].power_maxV = maxV;
   8E13 21 0E 00      [10] 8125 	ld	hl, #0x000e
   8E16 09            [11] 8126 	add	hl, bc
   8E17 DD 7E 0C      [19] 8127 	ld	a, 12 (ix)
   8E1A 77            [ 7] 8128 	ld	(hl), a
   8E1B DD E1         [14] 8129 	pop	ix
   8E1D C9            [10] 8130 	ret
                           8131 ;src/main.c:1854: void SetEnemies() {
                           8132 ;	---------------------------------
                           8133 ; Function SetEnemies
                           8134 ; ---------------------------------
   8E1E                    8135 _SetEnemies::
                           8136 ;src/main.c:1855: switch (nMap) {
   8E1E 3E 0B         [ 7] 8137 	ld	a, #0x0b
   8E20 FD 21 D0 5E   [14] 8138 	ld	iy, #_nMap
   8E24 FD 96 00      [19] 8139 	sub	a, 0 (iy)
   8E27 DA FD 96      [10] 8140 	jp	C, 00113$
   8E2A FD 4E 00      [19] 8141 	ld	c, 0 (iy)
   8E2D 06 00         [ 7] 8142 	ld	b, #0x00
   8E2F 21 36 8E      [10] 8143 	ld	hl, #00126$
   8E32 09            [11] 8144 	add	hl, bc
   8E33 09            [11] 8145 	add	hl, bc
   8E34 09            [11] 8146 	add	hl, bc
   8E35 E9            [ 4] 8147 	jp	(hl)
   8E36                    8148 00126$:
   8E36 C3 5A 8E      [10] 8149 	jp	00101$
   8E39 C3 11 8F      [10] 8150 	jp	00102$
   8E3C C3 C9 8F      [10] 8151 	jp	00103$
   8E3F C3 82 90      [10] 8152 	jp	00104$
   8E42 C3 3B 91      [10] 8153 	jp	00105$
   8E45 C3 F5 91      [10] 8154 	jp	00106$
   8E48 C3 AE 92      [10] 8155 	jp	00107$
   8E4B C3 68 93      [10] 8156 	jp	00108$
   8E4E C3 20 94      [10] 8157 	jp	00109$
   8E51 C3 D9 94      [10] 8158 	jp	00110$
   8E54 C3 91 95      [10] 8159 	jp	00111$
   8E57 C3 47 96      [10] 8160 	jp	00112$
                           8161 ;src/main.c:1857: case 0: {			 
   8E5A                    8162 00101$:
                           8163 ;src/main.c:1859: SetEnemyParams(2, SENTINEL,	M_linear_X, 	D_left,     1, 73, 158,   2,  73);						
   8E5A 21 02 49      [10] 8164 	ld	hl, #0x4902
   8E5D E5            [11] 8165 	push	hl
   8E5E 21 49 9E      [10] 8166 	ld	hl, #0x9e49
   8E61 E5            [11] 8167 	push	hl
   8E62 21 02 01      [10] 8168 	ld	hl, #0x0102
   8E65 E5            [11] 8169 	push	hl
   8E66 26 00         [ 7] 8170 	ld	h, #0x00
   8E68 E5            [11] 8171 	push	hl
   8E69 3E 02         [ 7] 8172 	ld	a, #0x02
   8E6B F5            [11] 8173 	push	af
   8E6C 33            [ 6] 8174 	inc	sp
   8E6D CD AC 8D      [17] 8175 	call	_SetEnemyParams
   8E70 21 09 00      [10] 8176 	ld	hl, #9
   8E73 39            [11] 8177 	add	hl, sp
   8E74 F9            [ 6] 8178 	ld	sp, hl
                           8179 ;src/main.c:1860: SetEnemyParams(3, SENTINEL,	M_linear_X, 	D_right,    1,  3, 110,   2,  73);
   8E75 21 02 49      [10] 8180 	ld	hl, #0x4902
   8E78 E5            [11] 8181 	push	hl
   8E79 21 03 6E      [10] 8182 	ld	hl, #0x6e03
   8E7C E5            [11] 8183 	push	hl
   8E7D 26 01         [ 7] 8184 	ld	h, #0x01
   8E7F E5            [11] 8185 	push	hl
   8E80 21 02 00      [10] 8186 	ld	hl, #0x0002
   8E83 E5            [11] 8187 	push	hl
   8E84 3E 03         [ 7] 8188 	ld	a, #0x03
   8E86 F5            [11] 8189 	push	af
   8E87 33            [ 6] 8190 	inc	sp
   8E88 CD AC 8D      [17] 8191 	call	_SetEnemyParams
   8E8B 21 09 00      [10] 8192 	ld	hl, #9
   8E8E 39            [11] 8193 	add	hl, sp
   8E8F F9            [ 6] 8194 	ld	sp, hl
                           8195 ;src/main.c:1861: SetEnemyParams(4, SENTINEL,	M_linear_X, 	D_left,     1, 73,  62,  40,  73);
   8E90 21 28 49      [10] 8196 	ld	hl, #0x4928
   8E93 E5            [11] 8197 	push	hl
   8E94 21 49 3E      [10] 8198 	ld	hl, #0x3e49
   8E97 E5            [11] 8199 	push	hl
   8E98 21 02 01      [10] 8200 	ld	hl, #0x0102
   8E9B E5            [11] 8201 	push	hl
   8E9C 26 00         [ 7] 8202 	ld	h, #0x00
   8E9E E5            [11] 8203 	push	hl
   8E9F 3E 04         [ 7] 8204 	ld	a, #0x04
   8EA1 F5            [11] 8205 	push	af
   8EA2 33            [ 6] 8206 	inc	sp
   8EA3 CD AC 8D      [17] 8207 	call	_SetEnemyParams
   8EA6 21 09 00      [10] 8208 	ld	hl, #9
   8EA9 39            [11] 8209 	add	hl, sp
   8EAA F9            [ 6] 8210 	ld	sp, hl
                           8211 ;src/main.c:1862: SetEnemyParams(5, SENTINEL,	M_linear_X, 	D_right,    1,  2,  62,   2,  35);
   8EAB 21 02 23      [10] 8212 	ld	hl, #0x2302
   8EAE E5            [11] 8213 	push	hl
   8EAF 26 3E         [ 7] 8214 	ld	h, #0x3e
   8EB1 E5            [11] 8215 	push	hl
   8EB2 21 03 01      [10] 8216 	ld	hl, #0x0103
   8EB5 E5            [11] 8217 	push	hl
   8EB6 21 02 00      [10] 8218 	ld	hl, #0x0002
   8EB9 E5            [11] 8219 	push	hl
   8EBA 3E 05         [ 7] 8220 	ld	a, #0x05
   8EBC F5            [11] 8221 	push	af
   8EBD 33            [ 6] 8222 	inc	sp
   8EBE CD AC 8D      [17] 8223 	call	_SetEnemyParams
   8EC1 21 09 00      [10] 8224 	ld	hl, #9
   8EC4 39            [11] 8225 	add	hl, sp
   8EC5 F9            [ 6] 8226 	ld	sp, hl
                           8227 ;src/main.c:1864: spr[0].x = spr[0].px = 6; 
   8EC6 21 0E 5F      [10] 8228 	ld	hl, #(_spr + 0x0004)
   8EC9 36 06         [10] 8229 	ld	(hl), #0x06
   8ECB 21 0C 5F      [10] 8230 	ld	hl, #(_spr + 0x0002)
   8ECE 36 06         [10] 8231 	ld	(hl), #0x06
                           8232 ;src/main.c:1865: spr[0].y = spr[0].py = 178;			
   8ED0 21 0F 5F      [10] 8233 	ld	hl, #(_spr + 0x0005)
   8ED3 36 B2         [10] 8234 	ld	(hl), #0xb2
   8ED5 21 0D 5F      [10] 8235 	ld	hl, #(_spr + 0x0003)
   8ED8 36 B2         [10] 8236 	ld	(hl), #0xb2
                           8237 ;src/main.c:1867: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk0_end);
   8EDA 21 48 4A      [10] 8238 	ld	hl, #(_mappk0 + 0x0279)
   8EDD E5            [11] 8239 	push	hl
   8EDE 21 00 16      [10] 8240 	ld	hl, #0x1600
   8EE1 E5            [11] 8241 	push	hl
   8EE2 CD 5A 5C      [17] 8242 	call	_cpct_zx7b_decrunch_s
                           8243 ;src/main.c:1869: lName = "1;1@@GARDENS";
   8EE5 21 1B 97      [10] 8244 	ld	hl, #___str_23+0
   8EE8 22 D2 5E      [16] 8245 	ld	(_lName), hl
                           8246 ;src/main.c:1871: doorKey[0] = 4;	// toad snot
   8EEB 21 DF 5E      [10] 8247 	ld	hl, #_doorKey
   8EEE 36 04         [10] 8248 	ld	(hl), #0x04
                           8249 ;src/main.c:1872: doorKey[1] = 5;	// diamond dust
   8EF0 21 E0 5E      [10] 8250 	ld	hl, #(_doorKey + 0x0001)
   8EF3 36 05         [10] 8251 	ld	(hl), #0x05
                           8252 ;src/main.c:1873: doorKey[2] = 4;	// toad snot
   8EF5 21 E1 5E      [10] 8253 	ld	hl, #(_doorKey + 0x0002)
   8EF8 36 04         [10] 8254 	ld	(hl), #0x04
                           8255 ;src/main.c:1874: doorKey[3] = 5;	// diamond dust
   8EFA 21 E2 5E      [10] 8256 	ld	hl, #(_doorKey + 0x0003)
   8EFD 36 05         [10] 8257 	ld	(hl), #0x05
                           8258 ;src/main.c:1875: doorKey[4] = 4; // toad snot
   8EFF 21 E3 5E      [10] 8259 	ld	hl, #(_doorKey + 0x0004)
   8F02 36 04         [10] 8260 	ld	(hl), #0x04
                           8261 ;src/main.c:1877: storeX = 51;
   8F04 21 E9 5E      [10] 8262 	ld	hl,#_storeX + 0
   8F07 36 33         [10] 8263 	ld	(hl), #0x33
                           8264 ;src/main.c:1878: storeY = 11;
   8F09 21 EA 5E      [10] 8265 	ld	hl,#_storeY + 0
   8F0C 36 0B         [10] 8266 	ld	(hl), #0x0b
                           8267 ;src/main.c:1879: break;
   8F0E C3 FD 96      [10] 8268 	jp	00113$
                           8269 ;src/main.c:1882: case 1: {
   8F11                    8270 00102$:
                           8271 ;src/main.c:1884: SetEnemyParams(2, NOBODY,	M_linear_X, 	D_left,     1,  0,   0,   0,   0);
   8F11 21 00 00      [10] 8272 	ld	hl, #0x0000
   8F14 E5            [11] 8273 	push	hl
   8F15 2E 00         [ 7] 8274 	ld	l, #0x00
   8F17 E5            [11] 8275 	push	hl
   8F18 21 02 01      [10] 8276 	ld	hl, #0x0102
   8F1B E5            [11] 8277 	push	hl
   8F1C 21 09 00      [10] 8278 	ld	hl, #0x0009
   8F1F E5            [11] 8279 	push	hl
   8F20 3E 02         [ 7] 8280 	ld	a, #0x02
   8F22 F5            [11] 8281 	push	af
   8F23 33            [ 6] 8282 	inc	sp
   8F24 CD AC 8D      [17] 8283 	call	_SetEnemyParams
   8F27 21 09 00      [10] 8284 	ld	hl, #9
   8F2A 39            [11] 8285 	add	hl, sp
   8F2B F9            [ 6] 8286 	ld	sp, hl
                           8287 ;src/main.c:1885: SetEnemyParams(3, SENTINEL,	M_linear_X, 	D_right,    1,  2, 114,   2,  73);						
   8F2C 21 02 49      [10] 8288 	ld	hl, #0x4902
   8F2F E5            [11] 8289 	push	hl
   8F30 26 72         [ 7] 8290 	ld	h, #0x72
   8F32 E5            [11] 8291 	push	hl
   8F33 21 03 01      [10] 8292 	ld	hl, #0x0103
   8F36 E5            [11] 8293 	push	hl
   8F37 21 02 00      [10] 8294 	ld	hl, #0x0002
   8F3A E5            [11] 8295 	push	hl
   8F3B 3E 03         [ 7] 8296 	ld	a, #0x03
   8F3D F5            [11] 8297 	push	af
   8F3E 33            [ 6] 8298 	inc	sp
   8F3F CD AC 8D      [17] 8299 	call	_SetEnemyParams
   8F42 21 09 00      [10] 8300 	ld	hl, #9
   8F45 39            [11] 8301 	add	hl, sp
   8F46 F9            [ 6] 8302 	ld	sp, hl
                           8303 ;src/main.c:1886: SetEnemyParams(4, KNIGHT, 	M_linear_XY,    D_right,    1, 10,  62,   0,   0);
   8F47 21 00 00      [10] 8304 	ld	hl, #0x0000
   8F4A E5            [11] 8305 	push	hl
   8F4B 21 0A 3E      [10] 8306 	ld	hl, #0x3e0a
   8F4E E5            [11] 8307 	push	hl
   8F4F 21 03 01      [10] 8308 	ld	hl, #0x0103
   8F52 E5            [11] 8309 	push	hl
   8F53 26 02         [ 7] 8310 	ld	h, #0x02
   8F55 E5            [11] 8311 	push	hl
   8F56 3E 04         [ 7] 8312 	ld	a, #0x04
   8F58 F5            [11] 8313 	push	af
   8F59 33            [ 6] 8314 	inc	sp
   8F5A CD AC 8D      [17] 8315 	call	_SetEnemyParams
   8F5D 21 09 00      [10] 8316 	ld	hl, #9
   8F60 39            [11] 8317 	add	hl, sp
   8F61 F9            [ 6] 8318 	ld	sp, hl
                           8319 ;src/main.c:1887: SetEnemyParams(5, KNIGHT,	M_linear_XY,	D_down,     1,  2,  38,   0,   0);
   8F62 21 00 00      [10] 8320 	ld	hl, #0x0000
   8F65 E5            [11] 8321 	push	hl
   8F66 21 02 26      [10] 8322 	ld	hl, #0x2602
   8F69 E5            [11] 8323 	push	hl
   8F6A 21 01 01      [10] 8324 	ld	hl, #0x0101
   8F6D E5            [11] 8325 	push	hl
   8F6E 21 03 02      [10] 8326 	ld	hl, #0x0203
   8F71 E5            [11] 8327 	push	hl
   8F72 3E 05         [ 7] 8328 	ld	a, #0x05
   8F74 F5            [11] 8329 	push	af
   8F75 33            [ 6] 8330 	inc	sp
   8F76 CD AC 8D      [17] 8331 	call	_SetEnemyParams
   8F79 21 09 00      [10] 8332 	ld	hl, #9
   8F7C 39            [11] 8333 	add	hl, sp
   8F7D F9            [ 6] 8334 	ld	sp, hl
                           8335 ;src/main.c:1889: spr[0].x = spr[0].px = 58; 
   8F7E 21 0E 5F      [10] 8336 	ld	hl, #(_spr + 0x0004)
   8F81 36 3A         [10] 8337 	ld	(hl), #0x3a
   8F83 21 0C 5F      [10] 8338 	ld	hl, #(_spr + 0x0002)
   8F86 36 3A         [10] 8339 	ld	(hl), #0x3a
                           8340 ;src/main.c:1890: spr[0].y = spr[0].py = 178;	
   8F88 21 0F 5F      [10] 8341 	ld	hl, #(_spr + 0x0005)
   8F8B 36 B2         [10] 8342 	ld	(hl), #0xb2
   8F8D 21 0D 5F      [10] 8343 	ld	hl, #(_spr + 0x0003)
   8F90 36 B2         [10] 8344 	ld	(hl), #0xb2
                           8345 ;src/main.c:1892: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk1_end);
   8F92 21 CE 47      [10] 8346 	ld	hl, #(_mappk1 + 0x02a0)
   8F95 E5            [11] 8347 	push	hl
   8F96 21 00 16      [10] 8348 	ld	hl, #0x1600
   8F99 E5            [11] 8349 	push	hl
   8F9A CD 5A 5C      [17] 8350 	call	_cpct_zx7b_decrunch_s
                           8351 ;src/main.c:1894: lName = "1;2@@GARDENS";
   8F9D 21 28 97      [10] 8352 	ld	hl, #___str_24+0
   8FA0 22 D2 5E      [16] 8353 	ld	(_lName), hl
                           8354 ;src/main.c:1896: doorKey[0] = 4;	// toad snot
   8FA3 21 DF 5E      [10] 8355 	ld	hl, #_doorKey
   8FA6 36 04         [10] 8356 	ld	(hl), #0x04
                           8357 ;src/main.c:1897: doorKey[1] = 6;	// newt eye
   8FA8 21 E0 5E      [10] 8358 	ld	hl, #(_doorKey + 0x0001)
   8FAB 36 06         [10] 8359 	ld	(hl), #0x06
                           8360 ;src/main.c:1898: doorKey[2] = 5; // diamond dust
   8FAD 21 E1 5E      [10] 8361 	ld	hl, #(_doorKey + 0x0002)
   8FB0 36 05         [10] 8362 	ld	(hl), #0x05
                           8363 ;src/main.c:1899: doorKey[3] = 6; // newt eye
   8FB2 21 E2 5E      [10] 8364 	ld	hl, #(_doorKey + 0x0003)
   8FB5 36 06         [10] 8365 	ld	(hl), #0x06
                           8366 ;src/main.c:1900: doorKey[4] = 4; // toad snot
   8FB7 21 E3 5E      [10] 8367 	ld	hl, #(_doorKey + 0x0004)
   8FBA 36 04         [10] 8368 	ld	(hl), #0x04
                           8369 ;src/main.c:1902: storeX = 51;
   8FBC 21 E9 5E      [10] 8370 	ld	hl,#_storeX + 0
   8FBF 36 33         [10] 8371 	ld	(hl), #0x33
                           8372 ;src/main.c:1903: storeY = 55;
   8FC1 21 EA 5E      [10] 8373 	ld	hl,#_storeY + 0
   8FC4 36 37         [10] 8374 	ld	(hl), #0x37
                           8375 ;src/main.c:1904: break;
   8FC6 C3 FD 96      [10] 8376 	jp	00113$
                           8377 ;src/main.c:1907: case 2: {			 
   8FC9                    8378 00103$:
                           8379 ;src/main.c:1909: SetEnemyParams(2, GHOST,	M_linear_XY, 	D_right,    1,  3, 120,   0,   0);						
   8FC9 21 00 00      [10] 8380 	ld	hl, #0x0000
   8FCC E5            [11] 8381 	push	hl
   8FCD 21 03 78      [10] 8382 	ld	hl, #0x7803
   8FD0 E5            [11] 8383 	push	hl
   8FD1 26 01         [ 7] 8384 	ld	h, #0x01
   8FD3 E5            [11] 8385 	push	hl
   8FD4 21 04 02      [10] 8386 	ld	hl, #0x0204
   8FD7 E5            [11] 8387 	push	hl
   8FD8 3E 02         [ 7] 8388 	ld	a, #0x02
   8FDA F5            [11] 8389 	push	af
   8FDB 33            [ 6] 8390 	inc	sp
   8FDC CD AC 8D      [17] 8391 	call	_SetEnemyParams
   8FDF 21 09 00      [10] 8392 	ld	hl, #9
   8FE2 39            [11] 8393 	add	hl, sp
   8FE3 F9            [ 6] 8394 	ld	sp, hl
                           8395 ;src/main.c:1910: SetEnemyParams(3, GHOST,	M_linear_XY, 	D_left,     1, 73,  99,   0,   0);
   8FE4 21 00 00      [10] 8396 	ld	hl, #0x0000
   8FE7 E5            [11] 8397 	push	hl
   8FE8 21 49 63      [10] 8398 	ld	hl, #0x6349
   8FEB E5            [11] 8399 	push	hl
   8FEC 21 02 01      [10] 8400 	ld	hl, #0x0102
   8FEF E5            [11] 8401 	push	hl
   8FF0 21 04 02      [10] 8402 	ld	hl, #0x0204
   8FF3 E5            [11] 8403 	push	hl
   8FF4 3E 03         [ 7] 8404 	ld	a, #0x03
   8FF6 F5            [11] 8405 	push	af
   8FF7 33            [ 6] 8406 	inc	sp
   8FF8 CD AC 8D      [17] 8407 	call	_SetEnemyParams
   8FFB 21 09 00      [10] 8408 	ld	hl, #9
   8FFE 39            [11] 8409 	add	hl, sp
   8FFF F9            [ 6] 8410 	ld	sp, hl
                           8411 ;src/main.c:1911: SetEnemyParams(4, BAT,	 	M_linear_X,    	D_right,    1, 22,  58,  22,  60);																		
   9000 21 16 3C      [10] 8412 	ld	hl, #0x3c16
   9003 E5            [11] 8413 	push	hl
   9004 26 3A         [ 7] 8414 	ld	h, #0x3a
   9006 E5            [11] 8415 	push	hl
   9007 21 03 01      [10] 8416 	ld	hl, #0x0103
   900A E5            [11] 8417 	push	hl
   900B 21 05 00      [10] 8418 	ld	hl, #0x0005
   900E E5            [11] 8419 	push	hl
   900F 3E 04         [ 7] 8420 	ld	a, #0x04
   9011 F5            [11] 8421 	push	af
   9012 33            [ 6] 8422 	inc	sp
   9013 CD AC 8D      [17] 8423 	call	_SetEnemyParams
   9016 21 09 00      [10] 8424 	ld	hl, #9
   9019 39            [11] 8425 	add	hl, sp
   901A F9            [ 6] 8426 	ld	sp, hl
                           8427 ;src/main.c:1912: SetEnemyParams(5, WITCH,	M_linear_X,		D_left,     1,  3,  78,   2,  73);
   901B 21 02 49      [10] 8428 	ld	hl, #0x4902
   901E E5            [11] 8429 	push	hl
   901F 21 03 4E      [10] 8430 	ld	hl, #0x4e03
   9022 E5            [11] 8431 	push	hl
   9023 21 02 01      [10] 8432 	ld	hl, #0x0102
   9026 E5            [11] 8433 	push	hl
   9027 21 06 00      [10] 8434 	ld	hl, #0x0006
   902A E5            [11] 8435 	push	hl
   902B 3E 05         [ 7] 8436 	ld	a, #0x05
   902D F5            [11] 8437 	push	af
   902E 33            [ 6] 8438 	inc	sp
   902F CD AC 8D      [17] 8439 	call	_SetEnemyParams
   9032 21 09 00      [10] 8440 	ld	hl, #9
   9035 39            [11] 8441 	add	hl, sp
   9036 F9            [ 6] 8442 	ld	sp, hl
                           8443 ;src/main.c:1914: spr[0].x = spr[0].px = 58; 
   9037 21 0E 5F      [10] 8444 	ld	hl, #(_spr + 0x0004)
   903A 36 3A         [10] 8445 	ld	(hl), #0x3a
   903C 21 0C 5F      [10] 8446 	ld	hl, #(_spr + 0x0002)
   903F 36 3A         [10] 8447 	ld	(hl), #0x3a
                           8448 ;src/main.c:1915: spr[0].y = spr[0].py = 178;			
   9041 21 0F 5F      [10] 8449 	ld	hl, #(_spr + 0x0005)
   9044 36 B2         [10] 8450 	ld	(hl), #0xb2
   9046 21 0D 5F      [10] 8451 	ld	hl, #(_spr + 0x0003)
   9049 36 B2         [10] 8452 	ld	(hl), #0xb2
                           8453 ;src/main.c:1917: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk2_end);
   904B 21 2D 45      [10] 8454 	ld	hl, #(_mappk2 + 0x01f4)
   904E E5            [11] 8455 	push	hl
   904F 21 00 16      [10] 8456 	ld	hl, #0x1600
   9052 E5            [11] 8457 	push	hl
   9053 CD 5A 5C      [17] 8458 	call	_cpct_zx7b_decrunch_s
                           8459 ;src/main.c:1919: lName = "2;1@CEMETERY";
   9056 21 35 97      [10] 8460 	ld	hl, #___str_25+0
   9059 22 D2 5E      [16] 8461 	ld	(_lName), hl
                           8462 ;src/main.c:1921: doorKey[0] = 4;	// toad snot
   905C 21 DF 5E      [10] 8463 	ld	hl, #_doorKey
   905F 36 04         [10] 8464 	ld	(hl), #0x04
                           8465 ;src/main.c:1922: doorKey[1] = 5;	// diamond dust
   9061 21 E0 5E      [10] 8466 	ld	hl, #(_doorKey + 0x0001)
   9064 36 05         [10] 8467 	ld	(hl), #0x05
                           8468 ;src/main.c:1923: doorKey[2] = 6; // newt eye
   9066 21 E1 5E      [10] 8469 	ld	hl, #(_doorKey + 0x0002)
   9069 36 06         [10] 8470 	ld	(hl), #0x06
                           8471 ;src/main.c:1924: doorKey[3] = 7;	// mammoth poop
   906B 21 E2 5E      [10] 8472 	ld	hl, #(_doorKey + 0x0003)
   906E 36 07         [10] 8473 	ld	(hl), #0x07
                           8474 ;src/main.c:1925: doorKey[4] = 8; // kraken ink
   9070 21 E3 5E      [10] 8475 	ld	hl, #(_doorKey + 0x0004)
   9073 36 08         [10] 8476 	ld	(hl), #0x08
                           8477 ;src/main.c:1927: storeX = 3;
   9075 21 E9 5E      [10] 8478 	ld	hl,#_storeX + 0
   9078 36 03         [10] 8479 	ld	(hl), #0x03
                           8480 ;src/main.c:1928: storeY = 11;
   907A 21 EA 5E      [10] 8481 	ld	hl,#_storeY + 0
   907D 36 0B         [10] 8482 	ld	(hl), #0x0b
                           8483 ;src/main.c:1929: break;
   907F C3 FD 96      [10] 8484 	jp	00113$
                           8485 ;src/main.c:1932: case 3: {			 
   9082                    8486 00104$:
                           8487 ;src/main.c:1934: SetEnemyParams(2, GHOST,	M_linear_XY, 	D_left,     1,  2, 180,   0,   0);
   9082 21 00 00      [10] 8488 	ld	hl, #0x0000
   9085 E5            [11] 8489 	push	hl
   9086 21 02 B4      [10] 8490 	ld	hl, #0xb402
   9089 E5            [11] 8491 	push	hl
   908A 26 01         [ 7] 8492 	ld	h, #0x01
   908C E5            [11] 8493 	push	hl
   908D 21 04 02      [10] 8494 	ld	hl, #0x0204
   9090 E5            [11] 8495 	push	hl
   9091 3E 02         [ 7] 8496 	ld	a, #0x02
   9093 F5            [11] 8497 	push	af
   9094 33            [ 6] 8498 	inc	sp
   9095 CD AC 8D      [17] 8499 	call	_SetEnemyParams
   9098 21 09 00      [10] 8500 	ld	hl, #9
   909B 39            [11] 8501 	add	hl, sp
   909C F9            [ 6] 8502 	ld	sp, hl
                           8503 ;src/main.c:1935: SetEnemyParams(3, GHOST,	M_linear_XY, 	D_right,    1,  2, 136,   0,   0);
   909D 21 00 00      [10] 8504 	ld	hl, #0x0000
   90A0 E5            [11] 8505 	push	hl
   90A1 21 02 88      [10] 8506 	ld	hl, #0x8802
   90A4 E5            [11] 8507 	push	hl
   90A5 21 03 01      [10] 8508 	ld	hl, #0x0103
   90A8 E5            [11] 8509 	push	hl
   90A9 21 04 02      [10] 8510 	ld	hl, #0x0204
   90AC E5            [11] 8511 	push	hl
   90AD 3E 03         [ 7] 8512 	ld	a, #0x03
   90AF F5            [11] 8513 	push	af
   90B0 33            [ 6] 8514 	inc	sp
   90B1 CD AC 8D      [17] 8515 	call	_SetEnemyParams
   90B4 21 09 00      [10] 8516 	ld	hl, #9
   90B7 39            [11] 8517 	add	hl, sp
   90B8 F9            [ 6] 8518 	ld	sp, hl
                           8519 ;src/main.c:1936: SetEnemyParams(4, GHOST,	M_linear_XY, 	D_left,     1, 70,  40,   0,   0);
   90B9 21 00 00      [10] 8520 	ld	hl, #0x0000
   90BC E5            [11] 8521 	push	hl
   90BD 21 46 28      [10] 8522 	ld	hl, #0x2846
   90C0 E5            [11] 8523 	push	hl
   90C1 21 02 01      [10] 8524 	ld	hl, #0x0102
   90C4 E5            [11] 8525 	push	hl
   90C5 21 04 02      [10] 8526 	ld	hl, #0x0204
   90C8 E5            [11] 8527 	push	hl
   90C9 3E 04         [ 7] 8528 	ld	a, #0x04
   90CB F5            [11] 8529 	push	af
   90CC 33            [ 6] 8530 	inc	sp
   90CD CD AC 8D      [17] 8531 	call	_SetEnemyParams
   90D0 21 09 00      [10] 8532 	ld	hl, #9
   90D3 39            [11] 8533 	add	hl, sp
   90D4 F9            [ 6] 8534 	ld	sp, hl
                           8535 ;src/main.c:1937: SetEnemyParams(5, GHOST,	M_linear_XY,	D_left,     1,  2,  40,   0,   0);
   90D5 21 00 00      [10] 8536 	ld	hl, #0x0000
   90D8 E5            [11] 8537 	push	hl
   90D9 21 02 28      [10] 8538 	ld	hl, #0x2802
   90DC E5            [11] 8539 	push	hl
   90DD 26 01         [ 7] 8540 	ld	h, #0x01
   90DF E5            [11] 8541 	push	hl
   90E0 21 04 02      [10] 8542 	ld	hl, #0x0204
   90E3 E5            [11] 8543 	push	hl
   90E4 3E 05         [ 7] 8544 	ld	a, #0x05
   90E6 F5            [11] 8545 	push	af
   90E7 33            [ 6] 8546 	inc	sp
   90E8 CD AC 8D      [17] 8547 	call	_SetEnemyParams
   90EB 21 09 00      [10] 8548 	ld	hl, #9
   90EE 39            [11] 8549 	add	hl, sp
   90EF F9            [ 6] 8550 	ld	sp, hl
                           8551 ;src/main.c:1939: spr[0].x = spr[0].px = 36; 
   90F0 21 0E 5F      [10] 8552 	ld	hl, #(_spr + 0x0004)
   90F3 36 24         [10] 8553 	ld	(hl), #0x24
   90F5 21 0C 5F      [10] 8554 	ld	hl, #(_spr + 0x0002)
   90F8 36 24         [10] 8555 	ld	(hl), #0x24
                           8556 ;src/main.c:1940: spr[0].y = spr[0].py = 178;			
   90FA 21 0F 5F      [10] 8557 	ld	hl, #(_spr + 0x0005)
   90FD 36 B2         [10] 8558 	ld	(hl), #0xb2
   90FF 21 0D 5F      [10] 8559 	ld	hl, #(_spr + 0x0003)
   9102 36 B2         [10] 8560 	ld	(hl), #0xb2
                           8561 ;src/main.c:1942: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk3_end);
   9104 21 38 43      [10] 8562 	ld	hl, #(_mappk3 + 0x020f)
   9107 E5            [11] 8563 	push	hl
   9108 21 00 16      [10] 8564 	ld	hl, #0x1600
   910B E5            [11] 8565 	push	hl
   910C CD 5A 5C      [17] 8566 	call	_cpct_zx7b_decrunch_s
                           8567 ;src/main.c:1944: lName = "2;2@CEMETERY";
   910F 21 42 97      [10] 8568 	ld	hl, #___str_26+0
   9112 22 D2 5E      [16] 8569 	ld	(_lName), hl
                           8570 ;src/main.c:1946: doorKey[0] = 5;	// diamond dust
   9115 21 DF 5E      [10] 8571 	ld	hl, #_doorKey
   9118 36 05         [10] 8572 	ld	(hl), #0x05
                           8573 ;src/main.c:1947: doorKey[1] = 7; // mammooth poop
   911A 21 E0 5E      [10] 8574 	ld	hl, #(_doorKey + 0x0001)
   911D 36 07         [10] 8575 	ld	(hl), #0x07
                           8576 ;src/main.c:1948: doorKey[2] = 6; // newt eye
   911F 21 E1 5E      [10] 8577 	ld	hl, #(_doorKey + 0x0002)
   9122 36 06         [10] 8578 	ld	(hl), #0x06
                           8579 ;src/main.c:1949: doorKey[3] = 7; // mammooth poop
   9124 21 E2 5E      [10] 8580 	ld	hl, #(_doorKey + 0x0003)
   9127 36 07         [10] 8581 	ld	(hl), #0x07
                           8582 ;src/main.c:1950: doorKey[4] = 5; // diamond dust
   9129 21 E3 5E      [10] 8583 	ld	hl, #(_doorKey + 0x0004)
   912C 36 05         [10] 8584 	ld	(hl), #0x05
                           8585 ;src/main.c:1952: storeX = 41;
   912E 21 E9 5E      [10] 8586 	ld	hl,#_storeX + 0
   9131 36 29         [10] 8587 	ld	(hl), #0x29
                           8588 ;src/main.c:1953: storeY = 71;
   9133 21 EA 5E      [10] 8589 	ld	hl,#_storeY + 0
   9136 36 47         [10] 8590 	ld	(hl), #0x47
                           8591 ;src/main.c:1954: break;
   9138 C3 FD 96      [10] 8592 	jp	00113$
                           8593 ;src/main.c:1957: case 4: {			 
   913B                    8594 00105$:
                           8595 ;src/main.c:1959: SetEnemyParams(2, BAT,		M_linear_X, 	D_left,     1, 73, 134,  16,  73);							
   913B 21 10 49      [10] 8596 	ld	hl, #0x4910
   913E E5            [11] 8597 	push	hl
   913F 21 49 86      [10] 8598 	ld	hl, #0x8649
   9142 E5            [11] 8599 	push	hl
   9143 21 02 01      [10] 8600 	ld	hl, #0x0102
   9146 E5            [11] 8601 	push	hl
   9147 21 05 00      [10] 8602 	ld	hl, #0x0005
   914A E5            [11] 8603 	push	hl
   914B 3E 02         [ 7] 8604 	ld	a, #0x02
   914D F5            [11] 8605 	push	af
   914E 33            [ 6] 8606 	inc	sp
   914F CD AC 8D      [17] 8607 	call	_SetEnemyParams
   9152 21 09 00      [10] 8608 	ld	hl, #9
   9155 39            [11] 8609 	add	hl, sp
   9156 F9            [ 6] 8610 	ld	sp, hl
                           8611 ;src/main.c:1960: SetEnemyParams(3, BAT,		M_linear_X, 	D_right,    1,  3,  94,   2,  73);		
   9157 21 02 49      [10] 8612 	ld	hl, #0x4902
   915A E5            [11] 8613 	push	hl
   915B 21 03 5E      [10] 8614 	ld	hl, #0x5e03
   915E E5            [11] 8615 	push	hl
   915F 26 01         [ 7] 8616 	ld	h, #0x01
   9161 E5            [11] 8617 	push	hl
   9162 21 05 00      [10] 8618 	ld	hl, #0x0005
   9165 E5            [11] 8619 	push	hl
   9166 3E 03         [ 7] 8620 	ld	a, #0x03
   9168 F5            [11] 8621 	push	af
   9169 33            [ 6] 8622 	inc	sp
   916A CD AC 8D      [17] 8623 	call	_SetEnemyParams
   916D 21 09 00      [10] 8624 	ld	hl, #9
   9170 39            [11] 8625 	add	hl, sp
   9171 F9            [ 6] 8626 	ld	sp, hl
                           8627 ;src/main.c:1961: SetEnemyParams(4, KNIGHT,	M_linear_XY, 	D_down,    	1, 17,  50,   0,   0);
   9172 21 00 00      [10] 8628 	ld	hl, #0x0000
   9175 E5            [11] 8629 	push	hl
   9176 21 11 32      [10] 8630 	ld	hl, #0x3211
   9179 E5            [11] 8631 	push	hl
   917A 21 01 01      [10] 8632 	ld	hl, #0x0101
   917D E5            [11] 8633 	push	hl
   917E 21 03 02      [10] 8634 	ld	hl, #0x0203
   9181 E5            [11] 8635 	push	hl
   9182 3E 04         [ 7] 8636 	ld	a, #0x04
   9184 F5            [11] 8637 	push	af
   9185 33            [ 6] 8638 	inc	sp
   9186 CD AC 8D      [17] 8639 	call	_SetEnemyParams
   9189 21 09 00      [10] 8640 	ld	hl, #9
   918C 39            [11] 8641 	add	hl, sp
   918D F9            [ 6] 8642 	ld	sp, hl
                           8643 ;src/main.c:1962: SetEnemyParams(5, KNIGHT,	M_linear_XY, 	D_up,     	1, 57, 156,   0,   0);
   918E 21 00 00      [10] 8644 	ld	hl, #0x0000
   9191 E5            [11] 8645 	push	hl
   9192 21 39 9C      [10] 8646 	ld	hl, #0x9c39
   9195 E5            [11] 8647 	push	hl
   9196 21 00 01      [10] 8648 	ld	hl, #0x0100
   9199 E5            [11] 8649 	push	hl
   919A 21 03 02      [10] 8650 	ld	hl, #0x0203
   919D E5            [11] 8651 	push	hl
   919E 3E 05         [ 7] 8652 	ld	a, #0x05
   91A0 F5            [11] 8653 	push	af
   91A1 33            [ 6] 8654 	inc	sp
   91A2 CD AC 8D      [17] 8655 	call	_SetEnemyParams
   91A5 21 09 00      [10] 8656 	ld	hl, #9
   91A8 39            [11] 8657 	add	hl, sp
   91A9 F9            [ 6] 8658 	ld	sp, hl
                           8659 ;src/main.c:1964: spr[0].x = spr[0].px = 6; 
   91AA 21 0E 5F      [10] 8660 	ld	hl, #(_spr + 0x0004)
   91AD 36 06         [10] 8661 	ld	(hl), #0x06
   91AF 21 0C 5F      [10] 8662 	ld	hl, #(_spr + 0x0002)
   91B2 36 06         [10] 8663 	ld	(hl), #0x06
                           8664 ;src/main.c:1965: spr[0].y = spr[0].py = 175;			
   91B4 21 0F 5F      [10] 8665 	ld	hl, #(_spr + 0x0005)
   91B7 36 AF         [10] 8666 	ld	(hl), #0xaf
   91B9 21 0D 5F      [10] 8667 	ld	hl, #(_spr + 0x0003)
   91BC 36 AF         [10] 8668 	ld	(hl), #0xaf
                           8669 ;src/main.c:1967: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk4_end);
   91BE 21 28 41      [10] 8670 	ld	hl, #(_mappk4 + 0x0179)
   91C1 E5            [11] 8671 	push	hl
   91C2 21 00 16      [10] 8672 	ld	hl, #0x1600
   91C5 E5            [11] 8673 	push	hl
   91C6 CD 5A 5C      [17] 8674 	call	_cpct_zx7b_decrunch_s
                           8675 ;src/main.c:1969: lName = "3;1@@CELLARS";	
   91C9 21 4F 97      [10] 8676 	ld	hl, #___str_27+0
   91CC 22 D2 5E      [16] 8677 	ld	(_lName), hl
                           8678 ;src/main.c:1971: doorKey[0] = 4; // toad snot
   91CF 21 DF 5E      [10] 8679 	ld	hl, #_doorKey
   91D2 36 04         [10] 8680 	ld	(hl), #0x04
                           8681 ;src/main.c:1972: doorKey[1] = 9; // mermaid tear
   91D4 21 E0 5E      [10] 8682 	ld	hl, #(_doorKey + 0x0001)
   91D7 36 09         [10] 8683 	ld	(hl), #0x09
                           8684 ;src/main.c:1973: doorKey[2] = 10;// martian mushroom
   91D9 21 E1 5E      [10] 8685 	ld	hl, #(_doorKey + 0x0002)
   91DC 36 0A         [10] 8686 	ld	(hl), #0x0a
                           8687 ;src/main.c:1974: doorKey[3] = 9; // mermaid tear
   91DE 21 E2 5E      [10] 8688 	ld	hl, #(_doorKey + 0x0003)
   91E1 36 09         [10] 8689 	ld	(hl), #0x09
                           8690 ;src/main.c:1975: doorKey[4] = 4; // toad snot
   91E3 21 E3 5E      [10] 8691 	ld	hl, #(_doorKey + 0x0004)
   91E6 36 04         [10] 8692 	ld	(hl), #0x04
                           8693 ;src/main.c:1977: storeX = 5;
   91E8 21 E9 5E      [10] 8694 	ld	hl,#_storeX + 0
   91EB 36 05         [10] 8695 	ld	(hl), #0x05
                           8696 ;src/main.c:1978: storeY = 103;		
   91ED 21 EA 5E      [10] 8697 	ld	hl,#_storeY + 0
   91F0 36 67         [10] 8698 	ld	(hl), #0x67
                           8699 ;src/main.c:1979: break;
   91F2 C3 FD 96      [10] 8700 	jp	00113$
                           8701 ;src/main.c:1982: case 5: {			 
   91F5                    8702 00106$:
                           8703 ;src/main.c:1984: SetEnemyParams(2, SENTINEL,	M_linear_X, 	D_left,     1,  3, 142,   2,  73);
   91F5 21 02 49      [10] 8704 	ld	hl, #0x4902
   91F8 E5            [11] 8705 	push	hl
   91F9 21 03 8E      [10] 8706 	ld	hl, #0x8e03
   91FC E5            [11] 8707 	push	hl
   91FD 21 02 01      [10] 8708 	ld	hl, #0x0102
   9200 E5            [11] 8709 	push	hl
   9201 26 00         [ 7] 8710 	ld	h, #0x00
   9203 E5            [11] 8711 	push	hl
   9204 3E 02         [ 7] 8712 	ld	a, #0x02
   9206 F5            [11] 8713 	push	af
   9207 33            [ 6] 8714 	inc	sp
   9208 CD AC 8D      [17] 8715 	call	_SetEnemyParams
   920B 21 09 00      [10] 8716 	ld	hl, #9
   920E 39            [11] 8717 	add	hl, sp
   920F F9            [ 6] 8718 	ld	sp, hl
                           8719 ;src/main.c:1985: SetEnemyParams(3, SENTINEL,	M_linear_X, 	D_right,    1, 73, 102,   2,  73);						
   9210 21 02 49      [10] 8720 	ld	hl, #0x4902
   9213 E5            [11] 8721 	push	hl
   9214 21 49 66      [10] 8722 	ld	hl, #0x6649
   9217 E5            [11] 8723 	push	hl
   9218 21 03 01      [10] 8724 	ld	hl, #0x0103
   921B E5            [11] 8725 	push	hl
   921C 21 02 00      [10] 8726 	ld	hl, #0x0002
   921F E5            [11] 8727 	push	hl
   9220 3E 03         [ 7] 8728 	ld	a, #0x03
   9222 F5            [11] 8729 	push	af
   9223 33            [ 6] 8730 	inc	sp
   9224 CD AC 8D      [17] 8731 	call	_SetEnemyParams
   9227 21 09 00      [10] 8732 	ld	hl, #9
   922A 39            [11] 8733 	add	hl, sp
   922B F9            [ 6] 8734 	ld	sp, hl
                           8735 ;src/main.c:1986: SetEnemyParams(4, KNIGHT,	M_linear_Y, 	D_down,     1, 38,  50,  50, 178);
   922C 21 32 B2      [10] 8736 	ld	hl, #0xb232
   922F E5            [11] 8737 	push	hl
   9230 21 26 32      [10] 8738 	ld	hl, #0x3226
   9233 E5            [11] 8739 	push	hl
   9234 21 01 01      [10] 8740 	ld	hl, #0x0101
   9237 E5            [11] 8741 	push	hl
   9238 2E 03         [ 7] 8742 	ld	l, #0x03
   923A E5            [11] 8743 	push	hl
   923B 3E 04         [ 7] 8744 	ld	a, #0x04
   923D F5            [11] 8745 	push	af
   923E 33            [ 6] 8746 	inc	sp
   923F CD AC 8D      [17] 8747 	call	_SetEnemyParams
   9242 21 09 00      [10] 8748 	ld	hl, #9
   9245 39            [11] 8749 	add	hl, sp
   9246 F9            [ 6] 8750 	ld	sp, hl
                           8751 ;src/main.c:1987: SetEnemyParams(5, WITCH,	M_linear_X,		D_left,     1,  3,  62,   2,  73);
   9247 21 02 49      [10] 8752 	ld	hl, #0x4902
   924A E5            [11] 8753 	push	hl
   924B 21 03 3E      [10] 8754 	ld	hl, #0x3e03
   924E E5            [11] 8755 	push	hl
   924F 21 02 01      [10] 8756 	ld	hl, #0x0102
   9252 E5            [11] 8757 	push	hl
   9253 21 06 00      [10] 8758 	ld	hl, #0x0006
   9256 E5            [11] 8759 	push	hl
   9257 3E 05         [ 7] 8760 	ld	a, #0x05
   9259 F5            [11] 8761 	push	af
   925A 33            [ 6] 8762 	inc	sp
   925B CD AC 8D      [17] 8763 	call	_SetEnemyParams
   925E 21 09 00      [10] 8764 	ld	hl, #9
   9261 39            [11] 8765 	add	hl, sp
   9262 F9            [ 6] 8766 	ld	sp, hl
                           8767 ;src/main.c:1989: spr[0].x = spr[0].px = 34; 
   9263 21 0E 5F      [10] 8768 	ld	hl, #(_spr + 0x0004)
   9266 36 22         [10] 8769 	ld	(hl), #0x22
   9268 21 0C 5F      [10] 8770 	ld	hl, #(_spr + 0x0002)
   926B 36 22         [10] 8771 	ld	(hl), #0x22
                           8772 ;src/main.c:1990: spr[0].y = spr[0].py = 176;			
   926D 21 0F 5F      [10] 8773 	ld	hl, #(_spr + 0x0005)
   9270 36 B0         [10] 8774 	ld	(hl), #0xb0
   9272 21 0D 5F      [10] 8775 	ld	hl, #(_spr + 0x0003)
   9275 36 B0         [10] 8776 	ld	(hl), #0xb0
                           8777 ;src/main.c:1992: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk5_end);
   9277 21 AE 3F      [10] 8778 	ld	hl, #(_mappk5 + 0x0199)
   927A E5            [11] 8779 	push	hl
   927B 21 00 16      [10] 8780 	ld	hl, #0x1600
   927E E5            [11] 8781 	push	hl
   927F CD 5A 5C      [17] 8782 	call	_cpct_zx7b_decrunch_s
                           8783 ;src/main.c:1994: lName = "3;2@@CELLARS";
   9282 21 5C 97      [10] 8784 	ld	hl, #___str_28+0
   9285 22 D2 5E      [16] 8785 	ld	(_lName), hl
                           8786 ;src/main.c:1996: doorKey[0] = 7; // mammooth poop
   9288 21 DF 5E      [10] 8787 	ld	hl, #_doorKey
   928B 36 07         [10] 8788 	ld	(hl), #0x07
                           8789 ;src/main.c:1997: doorKey[1] = 8; // kraken ink
   928D 21 E0 5E      [10] 8790 	ld	hl, #(_doorKey + 0x0001)
   9290 36 08         [10] 8791 	ld	(hl), #0x08
                           8792 ;src/main.c:1998: doorKey[2] = 9; // mermaid tear
   9292 21 E1 5E      [10] 8793 	ld	hl, #(_doorKey + 0x0002)
   9295 36 09         [10] 8794 	ld	(hl), #0x09
                           8795 ;src/main.c:1999: doorKey[3] = 6; // newt eye
   9297 21 E2 5E      [10] 8796 	ld	hl, #(_doorKey + 0x0003)
   929A 36 06         [10] 8797 	ld	(hl), #0x06
                           8798 ;src/main.c:2000: doorKey[4] = 5; // diamond dust
   929C 21 E3 5E      [10] 8799 	ld	hl, #(_doorKey + 0x0004)
   929F 36 05         [10] 8800 	ld	(hl), #0x05
                           8801 ;src/main.c:2002: storeX = 3;
   92A1 21 E9 5E      [10] 8802 	ld	hl,#_storeX + 0
   92A4 36 03         [10] 8803 	ld	(hl), #0x03
                           8804 ;src/main.c:2003: storeY = 143;
   92A6 21 EA 5E      [10] 8805 	ld	hl,#_storeY + 0
   92A9 36 8F         [10] 8806 	ld	(hl), #0x8f
                           8807 ;src/main.c:2004: break;
   92AB C3 FD 96      [10] 8808 	jp	00113$
                           8809 ;src/main.c:2007: case 6: {			 
   92AE                    8810 00107$:
                           8811 ;src/main.c:2009: SetEnemyParams(2, KNIGHT,	M_linear_XY, 	D_up,     	1,  2, 174,   0,   0);
   92AE 21 00 00      [10] 8812 	ld	hl, #0x0000
   92B1 E5            [11] 8813 	push	hl
   92B2 21 02 AE      [10] 8814 	ld	hl, #0xae02
   92B5 E5            [11] 8815 	push	hl
   92B6 21 00 01      [10] 8816 	ld	hl, #0x0100
   92B9 E5            [11] 8817 	push	hl
   92BA 21 03 02      [10] 8818 	ld	hl, #0x0203
   92BD E5            [11] 8819 	push	hl
   92BE 3E 02         [ 7] 8820 	ld	a, #0x02
   92C0 F5            [11] 8821 	push	af
   92C1 33            [ 6] 8822 	inc	sp
   92C2 CD AC 8D      [17] 8823 	call	_SetEnemyParams
   92C5 21 09 00      [10] 8824 	ld	hl, #9
   92C8 39            [11] 8825 	add	hl, sp
   92C9 F9            [ 6] 8826 	ld	sp, hl
                           8827 ;src/main.c:2010: SetEnemyParams(3, KNIGHT,	M_linear_XY, 	D_left,    	1, 60, 116,   0,   0);
   92CA 21 00 00      [10] 8828 	ld	hl, #0x0000
   92CD E5            [11] 8829 	push	hl
   92CE 21 3C 74      [10] 8830 	ld	hl, #0x743c
   92D1 E5            [11] 8831 	push	hl
   92D2 21 02 01      [10] 8832 	ld	hl, #0x0102
   92D5 E5            [11] 8833 	push	hl
   92D6 21 03 02      [10] 8834 	ld	hl, #0x0203
   92D9 E5            [11] 8835 	push	hl
   92DA 3E 03         [ 7] 8836 	ld	a, #0x03
   92DC F5            [11] 8837 	push	af
   92DD 33            [ 6] 8838 	inc	sp
   92DE CD AC 8D      [17] 8839 	call	_SetEnemyParams
   92E1 21 09 00      [10] 8840 	ld	hl, #9
   92E4 39            [11] 8841 	add	hl, sp
   92E5 F9            [ 6] 8842 	ld	sp, hl
                           8843 ;src/main.c:2011: SetEnemyParams(4, SENTINEL,	M_linear_XY, 	D_left,     1, 73,  96,   0,   0);
   92E6 21 00 00      [10] 8844 	ld	hl, #0x0000
   92E9 E5            [11] 8845 	push	hl
   92EA 21 49 60      [10] 8846 	ld	hl, #0x6049
   92ED E5            [11] 8847 	push	hl
   92EE 21 02 01      [10] 8848 	ld	hl, #0x0102
   92F1 E5            [11] 8849 	push	hl
   92F2 26 02         [ 7] 8850 	ld	h, #0x02
   92F4 E5            [11] 8851 	push	hl
   92F5 3E 04         [ 7] 8852 	ld	a, #0x04
   92F7 F5            [11] 8853 	push	af
   92F8 33            [ 6] 8854 	inc	sp
   92F9 CD AC 8D      [17] 8855 	call	_SetEnemyParams
   92FC 21 09 00      [10] 8856 	ld	hl, #9
   92FF 39            [11] 8857 	add	hl, sp
   9300 F9            [ 6] 8858 	ld	sp, hl
                           8859 ;src/main.c:2012: SetEnemyParams(5, WITCH,	M_linear_X,		D_left,     1,  3,  60,   2,  73);
   9301 21 02 49      [10] 8860 	ld	hl, #0x4902
   9304 E5            [11] 8861 	push	hl
   9305 21 03 3C      [10] 8862 	ld	hl, #0x3c03
   9308 E5            [11] 8863 	push	hl
   9309 21 02 01      [10] 8864 	ld	hl, #0x0102
   930C E5            [11] 8865 	push	hl
   930D 21 06 00      [10] 8866 	ld	hl, #0x0006
   9310 E5            [11] 8867 	push	hl
   9311 3E 05         [ 7] 8868 	ld	a, #0x05
   9313 F5            [11] 8869 	push	af
   9314 33            [ 6] 8870 	inc	sp
   9315 CD AC 8D      [17] 8871 	call	_SetEnemyParams
   9318 21 09 00      [10] 8872 	ld	hl, #9
   931B 39            [11] 8873 	add	hl, sp
   931C F9            [ 6] 8874 	ld	sp, hl
                           8875 ;src/main.c:2014: spr[0].x = spr[0].px = 67; 
   931D 21 0E 5F      [10] 8876 	ld	hl, #(_spr + 0x0004)
   9320 36 43         [10] 8877 	ld	(hl), #0x43
   9322 21 0C 5F      [10] 8878 	ld	hl, #(_spr + 0x0002)
   9325 36 43         [10] 8879 	ld	(hl), #0x43
                           8880 ;src/main.c:2015: spr[0].y = spr[0].py = 176;			
   9327 21 0F 5F      [10] 8881 	ld	hl, #(_spr + 0x0005)
   932A 36 B0         [10] 8882 	ld	(hl), #0xb0
   932C 21 0D 5F      [10] 8883 	ld	hl, #(_spr + 0x0003)
   932F 36 B0         [10] 8884 	ld	(hl), #0xb0
                           8885 ;src/main.c:2017: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk6_end);
   9331 21 14 3E      [10] 8886 	ld	hl, #(_mappk6 + 0x01bb)
   9334 E5            [11] 8887 	push	hl
   9335 21 00 16      [10] 8888 	ld	hl, #0x1600
   9338 E5            [11] 8889 	push	hl
   9339 CD 5A 5C      [17] 8890 	call	_cpct_zx7b_decrunch_s
                           8891 ;src/main.c:2019: lName = "4;1@@@CASTLE";	
   933C 21 69 97      [10] 8892 	ld	hl, #___str_29+0
   933F 22 D2 5E      [16] 8893 	ld	(_lName), hl
                           8894 ;src/main.c:2021: doorKey[0] = 10; // martian mushroom
   9342 21 DF 5E      [10] 8895 	ld	hl, #_doorKey
   9345 36 0A         [10] 8896 	ld	(hl), #0x0a
                           8897 ;src/main.c:2022: doorKey[1] = 6; // newt eye
   9347 21 E0 5E      [10] 8898 	ld	hl, #(_doorKey + 0x0001)
   934A 36 06         [10] 8899 	ld	(hl), #0x06
                           8900 ;src/main.c:2023: doorKey[2] = 11; // dragon blood
   934C 21 E1 5E      [10] 8901 	ld	hl, #(_doorKey + 0x0002)
   934F 36 0B         [10] 8902 	ld	(hl), #0x0b
                           8903 ;src/main.c:2024: doorKey[3] = 6; // newt eye
   9351 21 E2 5E      [10] 8904 	ld	hl, #(_doorKey + 0x0003)
   9354 36 06         [10] 8905 	ld	(hl), #0x06
                           8906 ;src/main.c:2025: doorKey[4] = 10; // martian mushroom
   9356 21 E3 5E      [10] 8907 	ld	hl, #(_doorKey + 0x0004)
   9359 36 0A         [10] 8908 	ld	(hl), #0x0a
                           8909 ;src/main.c:2027: storeX = 3;
   935B 21 E9 5E      [10] 8910 	ld	hl,#_storeX + 0
   935E 36 03         [10] 8911 	ld	(hl), #0x03
                           8912 ;src/main.c:2028: storeY = 11;		
   9360 21 EA 5E      [10] 8913 	ld	hl,#_storeY + 0
   9363 36 0B         [10] 8914 	ld	(hl), #0x0b
                           8915 ;src/main.c:2029: break;
   9365 C3 FD 96      [10] 8916 	jp	00113$
                           8917 ;src/main.c:2032: case 7: {			 
   9368                    8918 00108$:
                           8919 ;src/main.c:2034: SetEnemyParams(2, NOBODY,	M_linear_XY, 	D_left,     1,  0,   0,   0,   0);
   9368 21 00 00      [10] 8920 	ld	hl, #0x0000
   936B E5            [11] 8921 	push	hl
   936C 2E 00         [ 7] 8922 	ld	l, #0x00
   936E E5            [11] 8923 	push	hl
   936F 21 02 01      [10] 8924 	ld	hl, #0x0102
   9372 E5            [11] 8925 	push	hl
   9373 21 09 02      [10] 8926 	ld	hl, #0x0209
   9376 E5            [11] 8927 	push	hl
   9377 3E 02         [ 7] 8928 	ld	a, #0x02
   9379 F5            [11] 8929 	push	af
   937A 33            [ 6] 8930 	inc	sp
   937B CD AC 8D      [17] 8931 	call	_SetEnemyParams
   937E 21 09 00      [10] 8932 	ld	hl, #9
   9381 39            [11] 8933 	add	hl, sp
   9382 F9            [ 6] 8934 	ld	sp, hl
                           8935 ;src/main.c:2035: SetEnemyParams(3, GHOST,	M_linear_XY, 	D_up,       1,  3, 176,   0,   0);
   9383 21 00 00      [10] 8936 	ld	hl, #0x0000
   9386 E5            [11] 8937 	push	hl
   9387 21 03 B0      [10] 8938 	ld	hl, #0xb003
   938A E5            [11] 8939 	push	hl
   938B 21 00 01      [10] 8940 	ld	hl, #0x0100
   938E E5            [11] 8941 	push	hl
   938F 21 04 02      [10] 8942 	ld	hl, #0x0204
   9392 E5            [11] 8943 	push	hl
   9393 3E 03         [ 7] 8944 	ld	a, #0x03
   9395 F5            [11] 8945 	push	af
   9396 33            [ 6] 8946 	inc	sp
   9397 CD AC 8D      [17] 8947 	call	_SetEnemyParams
   939A 21 09 00      [10] 8948 	ld	hl, #9
   939D 39            [11] 8949 	add	hl, sp
   939E F9            [ 6] 8950 	ld	sp, hl
                           8951 ;src/main.c:2036: SetEnemyParams(4, KNIGHT,	M_linear_XY, 	D_right,    1,  3,  44,   0,   0);
   939F 21 00 00      [10] 8952 	ld	hl, #0x0000
   93A2 E5            [11] 8953 	push	hl
   93A3 21 03 2C      [10] 8954 	ld	hl, #0x2c03
   93A6 E5            [11] 8955 	push	hl
   93A7 26 01         [ 7] 8956 	ld	h, #0x01
   93A9 E5            [11] 8957 	push	hl
   93AA 26 02         [ 7] 8958 	ld	h, #0x02
   93AC E5            [11] 8959 	push	hl
   93AD 3E 04         [ 7] 8960 	ld	a, #0x04
   93AF F5            [11] 8961 	push	af
   93B0 33            [ 6] 8962 	inc	sp
   93B1 CD AC 8D      [17] 8963 	call	_SetEnemyParams
   93B4 21 09 00      [10] 8964 	ld	hl, #9
   93B7 39            [11] 8965 	add	hl, sp
   93B8 F9            [ 6] 8966 	ld	sp, hl
                           8967 ;src/main.c:2037: SetEnemyParams(5, KNIGHT,	M_linear_XY, 	D_down,     1, 73,  44,   0,   0);
   93B9 21 00 00      [10] 8968 	ld	hl, #0x0000
   93BC E5            [11] 8969 	push	hl
   93BD 21 49 2C      [10] 8970 	ld	hl, #0x2c49
   93C0 E5            [11] 8971 	push	hl
   93C1 21 01 01      [10] 8972 	ld	hl, #0x0101
   93C4 E5            [11] 8973 	push	hl
   93C5 21 03 02      [10] 8974 	ld	hl, #0x0203
   93C8 E5            [11] 8975 	push	hl
   93C9 3E 05         [ 7] 8976 	ld	a, #0x05
   93CB F5            [11] 8977 	push	af
   93CC 33            [ 6] 8978 	inc	sp
   93CD CD AC 8D      [17] 8979 	call	_SetEnemyParams
   93D0 21 09 00      [10] 8980 	ld	hl, #9
   93D3 39            [11] 8981 	add	hl, sp
   93D4 F9            [ 6] 8982 	ld	sp, hl
                           8983 ;src/main.c:2039: spr[0].x = spr[0].px = 36; 
   93D5 21 0E 5F      [10] 8984 	ld	hl, #(_spr + 0x0004)
   93D8 36 24         [10] 8985 	ld	(hl), #0x24
   93DA 21 0C 5F      [10] 8986 	ld	hl, #(_spr + 0x0002)
   93DD 36 24         [10] 8987 	ld	(hl), #0x24
                           8988 ;src/main.c:2040: spr[0].y = spr[0].py = 176;			
   93DF 21 0F 5F      [10] 8989 	ld	hl, #(_spr + 0x0005)
   93E2 36 B0         [10] 8990 	ld	(hl), #0xb0
   93E4 21 0D 5F      [10] 8991 	ld	hl, #(_spr + 0x0003)
   93E7 36 B0         [10] 8992 	ld	(hl), #0xb0
                           8993 ;src/main.c:2042: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk7_end);
   93E9 21 58 3C      [10] 8994 	ld	hl, #(_mappk7 + 0x021b)
   93EC E5            [11] 8995 	push	hl
   93ED 21 00 16      [10] 8996 	ld	hl, #0x1600
   93F0 E5            [11] 8997 	push	hl
   93F1 CD 5A 5C      [17] 8998 	call	_cpct_zx7b_decrunch_s
                           8999 ;src/main.c:2044: lName = "4;2@@@CASTLE";
   93F4 21 76 97      [10] 9000 	ld	hl, #___str_30+0
   93F7 22 D2 5E      [16] 9001 	ld	(_lName), hl
                           9002 ;src/main.c:2046: doorKey[0] = 5; // diamond dust
   93FA 21 DF 5E      [10] 9003 	ld	hl, #_doorKey
   93FD 36 05         [10] 9004 	ld	(hl), #0x05
                           9005 ;src/main.c:2047: doorKey[1] = 11; // dragon blood
   93FF 21 E0 5E      [10] 9006 	ld	hl, #(_doorKey + 0x0001)
   9402 36 0B         [10] 9007 	ld	(hl), #0x0b
                           9008 ;src/main.c:2048: doorKey[2] = 7; // mammooth poop
   9404 21 E1 5E      [10] 9009 	ld	hl, #(_doorKey + 0x0002)
   9407 36 07         [10] 9010 	ld	(hl), #0x07
                           9011 ;src/main.c:2049: doorKey[3] = 11; // dragon blood
   9409 21 E2 5E      [10] 9012 	ld	hl, #(_doorKey + 0x0003)
   940C 36 0B         [10] 9013 	ld	(hl), #0x0b
                           9014 ;src/main.c:2050: doorKey[4] = 5; // diamond dust
   940E 21 E3 5E      [10] 9015 	ld	hl, #(_doorKey + 0x0004)
   9411 36 05         [10] 9016 	ld	(hl), #0x05
                           9017 ;src/main.c:2052: storeX = 33;
   9413 21 E9 5E      [10] 9018 	ld	hl,#_storeX + 0
   9416 36 21         [10] 9019 	ld	(hl), #0x21
                           9020 ;src/main.c:2053: storeY = 95;
   9418 21 EA 5E      [10] 9021 	ld	hl,#_storeY + 0
   941B 36 5F         [10] 9022 	ld	(hl), #0x5f
                           9023 ;src/main.c:2054: break;
   941D C3 FD 96      [10] 9024 	jp	00113$
                           9025 ;src/main.c:2057: case 8: {			 
   9420                    9026 00109$:
                           9027 ;src/main.c:2059: SetEnemyParams(2, NOBODY,	M_linear_X, 	D_left,     1,  0,   0,   0,   0);
   9420 21 00 00      [10] 9028 	ld	hl, #0x0000
   9423 E5            [11] 9029 	push	hl
   9424 2E 00         [ 7] 9030 	ld	l, #0x00
   9426 E5            [11] 9031 	push	hl
   9427 21 02 01      [10] 9032 	ld	hl, #0x0102
   942A E5            [11] 9033 	push	hl
   942B 21 09 00      [10] 9034 	ld	hl, #0x0009
   942E E5            [11] 9035 	push	hl
   942F 3E 02         [ 7] 9036 	ld	a, #0x02
   9431 F5            [11] 9037 	push	af
   9432 33            [ 6] 9038 	inc	sp
   9433 CD AC 8D      [17] 9039 	call	_SetEnemyParams
   9436 21 09 00      [10] 9040 	ld	hl, #9
   9439 39            [11] 9041 	add	hl, sp
   943A F9            [ 6] 9042 	ld	sp, hl
                           9043 ;src/main.c:2060: SetEnemyParams(3, GHOST,	M_chaser,		D_right,    7,  2, 114,   0,   0);						
   943B 21 00 00      [10] 9044 	ld	hl, #0x0000
   943E E5            [11] 9045 	push	hl
   943F 21 02 72      [10] 9046 	ld	hl, #0x7202
   9442 E5            [11] 9047 	push	hl
   9443 21 03 07      [10] 9048 	ld	hl, #0x0703
   9446 E5            [11] 9049 	push	hl
   9447 21 04 03      [10] 9050 	ld	hl, #0x0304
   944A E5            [11] 9051 	push	hl
   944B 3E 03         [ 7] 9052 	ld	a, #0x03
   944D F5            [11] 9053 	push	af
   944E 33            [ 6] 9054 	inc	sp
   944F CD AC 8D      [17] 9055 	call	_SetEnemyParams
   9452 21 09 00      [10] 9056 	ld	hl, #9
   9455 39            [11] 9057 	add	hl, sp
   9456 F9            [ 6] 9058 	ld	sp, hl
                           9059 ;src/main.c:2061: SetEnemyParams(4, KNIGHT, 	M_linear_XY,    D_right,    1, 10,  68,   0,   0);
   9457 21 00 00      [10] 9060 	ld	hl, #0x0000
   945A E5            [11] 9061 	push	hl
   945B 21 0A 44      [10] 9062 	ld	hl, #0x440a
   945E E5            [11] 9063 	push	hl
   945F 21 03 01      [10] 9064 	ld	hl, #0x0103
   9462 E5            [11] 9065 	push	hl
   9463 26 02         [ 7] 9066 	ld	h, #0x02
   9465 E5            [11] 9067 	push	hl
   9466 3E 04         [ 7] 9068 	ld	a, #0x04
   9468 F5            [11] 9069 	push	af
   9469 33            [ 6] 9070 	inc	sp
   946A CD AC 8D      [17] 9071 	call	_SetEnemyParams
   946D 21 09 00      [10] 9072 	ld	hl, #9
   9470 39            [11] 9073 	add	hl, sp
   9471 F9            [ 6] 9074 	ld	sp, hl
                           9075 ;src/main.c:2062: SetEnemyParams(5, KNIGHT,	M_linear_XY,	D_down,     1,  2,  38,   0,   0);
   9472 21 00 00      [10] 9076 	ld	hl, #0x0000
   9475 E5            [11] 9077 	push	hl
   9476 21 02 26      [10] 9078 	ld	hl, #0x2602
   9479 E5            [11] 9079 	push	hl
   947A 21 01 01      [10] 9080 	ld	hl, #0x0101
   947D E5            [11] 9081 	push	hl
   947E 21 03 02      [10] 9082 	ld	hl, #0x0203
   9481 E5            [11] 9083 	push	hl
   9482 3E 05         [ 7] 9084 	ld	a, #0x05
   9484 F5            [11] 9085 	push	af
   9485 33            [ 6] 9086 	inc	sp
   9486 CD AC 8D      [17] 9087 	call	_SetEnemyParams
   9489 21 09 00      [10] 9088 	ld	hl, #9
   948C 39            [11] 9089 	add	hl, sp
   948D F9            [ 6] 9090 	ld	sp, hl
                           9091 ;src/main.c:2064: spr[0].x = spr[0].px = 34; 
   948E 21 0E 5F      [10] 9092 	ld	hl, #(_spr + 0x0004)
   9491 36 22         [10] 9093 	ld	(hl), #0x22
   9493 21 0C 5F      [10] 9094 	ld	hl, #(_spr + 0x0002)
   9496 36 22         [10] 9095 	ld	(hl), #0x22
                           9096 ;src/main.c:2065: spr[0].y = spr[0].py = 176;			
   9498 21 0F 5F      [10] 9097 	ld	hl, #(_spr + 0x0005)
   949B 36 B0         [10] 9098 	ld	(hl), #0xb0
   949D 21 0D 5F      [10] 9099 	ld	hl, #(_spr + 0x0003)
   94A0 36 B0         [10] 9100 	ld	(hl), #0xb0
                           9101 ;src/main.c:2067: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk8_end);
   94A2 21 3C 3A      [10] 9102 	ld	hl, #(_mappk8 + 0x014e)
   94A5 E5            [11] 9103 	push	hl
   94A6 21 00 16      [10] 9104 	ld	hl, #0x1600
   94A9 E5            [11] 9105 	push	hl
   94AA CD 5A 5C      [17] 9106 	call	_cpct_zx7b_decrunch_s
                           9107 ;src/main.c:2069: lName = "5;1@@@TOWER";	
   94AD 21 83 97      [10] 9108 	ld	hl, #___str_31+0
   94B0 22 D2 5E      [16] 9109 	ld	(_lName), hl
                           9110 ;src/main.c:2071: doorKey[0] = 8; // kraken ink
   94B3 21 DF 5E      [10] 9111 	ld	hl, #_doorKey
   94B6 36 08         [10] 9112 	ld	(hl), #0x08
                           9113 ;src/main.c:2072: doorKey[1] = 9; // mermaid tear
   94B8 21 E0 5E      [10] 9114 	ld	hl, #(_doorKey + 0x0001)
   94BB 36 09         [10] 9115 	ld	(hl), #0x09
                           9116 ;src/main.c:2073: doorKey[2] = 10; // martian mushroom
   94BD 21 E1 5E      [10] 9117 	ld	hl, #(_doorKey + 0x0002)
   94C0 36 0A         [10] 9118 	ld	(hl), #0x0a
                           9119 ;src/main.c:2074: doorKey[3] = 11; // dragon blood
   94C2 21 E2 5E      [10] 9120 	ld	hl, #(_doorKey + 0x0003)
   94C5 36 0B         [10] 9121 	ld	(hl), #0x0b
                           9122 ;src/main.c:2075: doorKey[4] = 12; // dodo egg
   94C7 21 E3 5E      [10] 9123 	ld	hl, #(_doorKey + 0x0004)
   94CA 36 0C         [10] 9124 	ld	(hl), #0x0c
                           9125 ;src/main.c:2077: storeX = 25;
   94CC 21 E9 5E      [10] 9126 	ld	hl,#_storeX + 0
   94CF 36 19         [10] 9127 	ld	(hl), #0x19
                           9128 ;src/main.c:2078: storeY = 95;		
   94D1 21 EA 5E      [10] 9129 	ld	hl,#_storeY + 0
   94D4 36 5F         [10] 9130 	ld	(hl), #0x5f
                           9131 ;src/main.c:2079: break;
   94D6 C3 FD 96      [10] 9132 	jp	00113$
                           9133 ;src/main.c:2082: case 9: {			 
   94D9                    9134 00110$:
                           9135 ;src/main.c:2084: SetEnemyParams(2, BAT,		M_linear_X, 	D_left,     1, 73, 111,  41,  73);
   94D9 21 29 49      [10] 9136 	ld	hl, #0x4929
   94DC E5            [11] 9137 	push	hl
   94DD 21 49 6F      [10] 9138 	ld	hl, #0x6f49
   94E0 E5            [11] 9139 	push	hl
   94E1 21 02 01      [10] 9140 	ld	hl, #0x0102
   94E4 E5            [11] 9141 	push	hl
   94E5 21 05 00      [10] 9142 	ld	hl, #0x0005
   94E8 E5            [11] 9143 	push	hl
   94E9 3E 02         [ 7] 9144 	ld	a, #0x02
   94EB F5            [11] 9145 	push	af
   94EC 33            [ 6] 9146 	inc	sp
   94ED CD AC 8D      [17] 9147 	call	_SetEnemyParams
   94F0 21 09 00      [10] 9148 	ld	hl, #9
   94F3 39            [11] 9149 	add	hl, sp
   94F4 F9            [ 6] 9150 	ld	sp, hl
                           9151 ;src/main.c:2085: SetEnemyParams(3, BAT,		M_linear_X,		D_right,    1,  2, 111,   2,  34);				
   94F5 21 02 22      [10] 9152 	ld	hl, #0x2202
   94F8 E5            [11] 9153 	push	hl
   94F9 26 6F         [ 7] 9154 	ld	h, #0x6f
   94FB E5            [11] 9155 	push	hl
   94FC 21 03 01      [10] 9156 	ld	hl, #0x0103
   94FF E5            [11] 9157 	push	hl
   9500 21 05 00      [10] 9158 	ld	hl, #0x0005
   9503 E5            [11] 9159 	push	hl
   9504 3E 03         [ 7] 9160 	ld	a, #0x03
   9506 F5            [11] 9161 	push	af
   9507 33            [ 6] 9162 	inc	sp
   9508 CD AC 8D      [17] 9163 	call	_SetEnemyParams
   950B 21 09 00      [10] 9164 	ld	hl, #9
   950E 39            [11] 9165 	add	hl, sp
   950F F9            [ 6] 9166 	ld	sp, hl
                           9167 ;src/main.c:2086: SetEnemyParams(4, SENTINEL, M_linear_Y,    	D_down,     1, 27,  44,  44, 175);
   9510 21 2C AF      [10] 9168 	ld	hl, #0xaf2c
   9513 E5            [11] 9169 	push	hl
   9514 21 1B 2C      [10] 9170 	ld	hl, #0x2c1b
   9517 E5            [11] 9171 	push	hl
   9518 21 01 01      [10] 9172 	ld	hl, #0x0101
   951B E5            [11] 9173 	push	hl
   951C 2E 02         [ 7] 9174 	ld	l, #0x02
   951E E5            [11] 9175 	push	hl
   951F 3E 04         [ 7] 9176 	ld	a, #0x04
   9521 F5            [11] 9177 	push	af
   9522 33            [ 6] 9178 	inc	sp
   9523 CD AC 8D      [17] 9179 	call	_SetEnemyParams
   9526 21 09 00      [10] 9180 	ld	hl, #9
   9529 39            [11] 9181 	add	hl, sp
   952A F9            [ 6] 9182 	ld	sp, hl
                           9183 ;src/main.c:2087: SetEnemyParams(5, SENTINEL,	M_linear_Y,		D_up,       1, 49, 160,  44, 175);
   952B 21 2C AF      [10] 9184 	ld	hl, #0xaf2c
   952E E5            [11] 9185 	push	hl
   952F 21 31 A0      [10] 9186 	ld	hl, #0xa031
   9532 E5            [11] 9187 	push	hl
   9533 21 00 01      [10] 9188 	ld	hl, #0x0100
   9536 E5            [11] 9189 	push	hl
   9537 2E 02         [ 7] 9190 	ld	l, #0x02
   9539 E5            [11] 9191 	push	hl
   953A 3E 05         [ 7] 9192 	ld	a, #0x05
   953C F5            [11] 9193 	push	af
   953D 33            [ 6] 9194 	inc	sp
   953E CD AC 8D      [17] 9195 	call	_SetEnemyParams
   9541 21 09 00      [10] 9196 	ld	hl, #9
   9544 39            [11] 9197 	add	hl, sp
   9545 F9            [ 6] 9198 	ld	sp, hl
                           9199 ;src/main.c:2089: spr[0].x = spr[0].px = 34; 
   9546 21 0E 5F      [10] 9200 	ld	hl, #(_spr + 0x0004)
   9549 36 22         [10] 9201 	ld	(hl), #0x22
   954B 21 0C 5F      [10] 9202 	ld	hl, #(_spr + 0x0002)
   954E 36 22         [10] 9203 	ld	(hl), #0x22
                           9204 ;src/main.c:2090: spr[0].y = spr[0].py = 176;			
   9550 21 0F 5F      [10] 9205 	ld	hl, #(_spr + 0x0005)
   9553 36 B0         [10] 9206 	ld	(hl), #0xb0
   9555 21 0D 5F      [10] 9207 	ld	hl, #(_spr + 0x0003)
   9558 36 B0         [10] 9208 	ld	(hl), #0xb0
                           9209 ;src/main.c:2092: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk9_end);
   955A 21 ED 38      [10] 9210 	ld	hl, #(_mappk9 + 0x01ac)
   955D E5            [11] 9211 	push	hl
   955E 21 00 16      [10] 9212 	ld	hl, #0x1600
   9561 E5            [11] 9213 	push	hl
   9562 CD 5A 5C      [17] 9214 	call	_cpct_zx7b_decrunch_s
                           9215 ;src/main.c:2094: lName = "5;2@@@TOWER";	
   9565 21 8F 97      [10] 9216 	ld	hl, #___str_32+0
   9568 22 D2 5E      [16] 9217 	ld	(_lName), hl
                           9218 ;src/main.c:2096: doorKey[0] = 10; // martian mushroom
   956B 21 DF 5E      [10] 9219 	ld	hl, #_doorKey
   956E 36 0A         [10] 9220 	ld	(hl), #0x0a
                           9221 ;src/main.c:2097: doorKey[1] = 5; // diamond dust
   9570 21 E0 5E      [10] 9222 	ld	hl, #(_doorKey + 0x0001)
   9573 36 05         [10] 9223 	ld	(hl), #0x05
                           9224 ;src/main.c:2098: doorKey[2] = 12; // dodo egg
   9575 21 E1 5E      [10] 9225 	ld	hl, #(_doorKey + 0x0002)
   9578 36 0C         [10] 9226 	ld	(hl), #0x0c
                           9227 ;src/main.c:2099: doorKey[3] = 4; // toad snot
   957A 21 E2 5E      [10] 9228 	ld	hl, #(_doorKey + 0x0003)
   957D 36 04         [10] 9229 	ld	(hl), #0x04
                           9230 ;src/main.c:2100: doorKey[4] = 13; // unicorn blood
   957F 21 E3 5E      [10] 9231 	ld	hl, #(_doorKey + 0x0004)
   9582 36 0D         [10] 9232 	ld	(hl), #0x0d
                           9233 ;src/main.c:2102: storeX = 41;
   9584 21 E9 5E      [10] 9234 	ld	hl,#_storeX + 0
   9587 36 29         [10] 9235 	ld	(hl), #0x29
                           9236 ;src/main.c:2103: storeY = 43;		
   9589 21 EA 5E      [10] 9237 	ld	hl,#_storeY + 0
   958C 36 2B         [10] 9238 	ld	(hl), #0x2b
                           9239 ;src/main.c:2104: break;
   958E C3 FD 96      [10] 9240 	jp	00113$
                           9241 ;src/main.c:2107: case 10: {			 
   9591                    9242 00111$:
                           9243 ;src/main.c:2109: SetEnemyParams(2, SENTINEL,	M_linear_X, 	D_left,     1,  2, 156,   2,  73);
   9591 21 02 49      [10] 9244 	ld	hl, #0x4902
   9594 E5            [11] 9245 	push	hl
   9595 26 9C         [ 7] 9246 	ld	h, #0x9c
   9597 E5            [11] 9247 	push	hl
   9598 26 01         [ 7] 9248 	ld	h, #0x01
   959A E5            [11] 9249 	push	hl
   959B 26 00         [ 7] 9250 	ld	h, #0x00
   959D E5            [11] 9251 	push	hl
   959E 3E 02         [ 7] 9252 	ld	a, #0x02
   95A0 F5            [11] 9253 	push	af
   95A1 33            [ 6] 9254 	inc	sp
   95A2 CD AC 8D      [17] 9255 	call	_SetEnemyParams
   95A5 21 09 00      [10] 9256 	ld	hl, #9
   95A8 39            [11] 9257 	add	hl, sp
   95A9 F9            [ 6] 9258 	ld	sp, hl
                           9259 ;src/main.c:2110: SetEnemyParams(3, GHOST,	M_chaser, 		D_right,    4,  2, 114,   0,   0);
   95AA 21 00 00      [10] 9260 	ld	hl, #0x0000
   95AD E5            [11] 9261 	push	hl
   95AE 21 02 72      [10] 9262 	ld	hl, #0x7202
   95B1 E5            [11] 9263 	push	hl
   95B2 21 03 04      [10] 9264 	ld	hl, #0x0403
   95B5 E5            [11] 9265 	push	hl
   95B6 21 04 03      [10] 9266 	ld	hl, #0x0304
   95B9 E5            [11] 9267 	push	hl
   95BA 3E 03         [ 7] 9268 	ld	a, #0x03
   95BC F5            [11] 9269 	push	af
   95BD 33            [ 6] 9270 	inc	sp
   95BE CD AC 8D      [17] 9271 	call	_SetEnemyParams
   95C1 21 09 00      [10] 9272 	ld	hl, #9
   95C4 39            [11] 9273 	add	hl, sp
   95C5 F9            [ 6] 9274 	ld	sp, hl
                           9275 ;src/main.c:2111: SetEnemyParams(4, KNIGHT,	M_linear_Y, 	D_right,    1, 17,  40,  40, 145);
   95C6 21 28 91      [10] 9276 	ld	hl, #0x9128
   95C9 E5            [11] 9277 	push	hl
   95CA 21 11 28      [10] 9278 	ld	hl, #0x2811
   95CD E5            [11] 9279 	push	hl
   95CE 21 03 01      [10] 9280 	ld	hl, #0x0103
   95D1 E5            [11] 9281 	push	hl
   95D2 2E 03         [ 7] 9282 	ld	l, #0x03
   95D4 E5            [11] 9283 	push	hl
   95D5 3E 04         [ 7] 9284 	ld	a, #0x04
   95D7 F5            [11] 9285 	push	af
   95D8 33            [ 6] 9286 	inc	sp
   95D9 CD AC 8D      [17] 9287 	call	_SetEnemyParams
   95DC 21 09 00      [10] 9288 	ld	hl, #9
   95DF 39            [11] 9289 	add	hl, sp
   95E0 F9            [ 6] 9290 	ld	sp, hl
                           9291 ;src/main.c:2112: SetEnemyParams(5, KNIGHT,	M_linear_Y, 	D_left,     1, 59,  40,  40, 145);
   95E1 21 28 91      [10] 9292 	ld	hl, #0x9128
   95E4 E5            [11] 9293 	push	hl
   95E5 21 3B 28      [10] 9294 	ld	hl, #0x283b
   95E8 E5            [11] 9295 	push	hl
   95E9 21 02 01      [10] 9296 	ld	hl, #0x0102
   95EC E5            [11] 9297 	push	hl
   95ED 2E 03         [ 7] 9298 	ld	l, #0x03
   95EF E5            [11] 9299 	push	hl
   95F0 3E 05         [ 7] 9300 	ld	a, #0x05
   95F2 F5            [11] 9301 	push	af
   95F3 33            [ 6] 9302 	inc	sp
   95F4 CD AC 8D      [17] 9303 	call	_SetEnemyParams
   95F7 21 09 00      [10] 9304 	ld	hl, #9
   95FA 39            [11] 9305 	add	hl, sp
   95FB F9            [ 6] 9306 	ld	sp, hl
                           9307 ;src/main.c:2114: spr[0].x = spr[0].px = 54; 
   95FC 21 0E 5F      [10] 9308 	ld	hl, #(_spr + 0x0004)
   95FF 36 36         [10] 9309 	ld	(hl), #0x36
   9601 21 0C 5F      [10] 9310 	ld	hl, #(_spr + 0x0002)
   9604 36 36         [10] 9311 	ld	(hl), #0x36
                           9312 ;src/main.c:2115: spr[0].y = spr[0].py = 176;			
   9606 21 0F 5F      [10] 9313 	ld	hl, #(_spr + 0x0005)
   9609 36 B0         [10] 9314 	ld	(hl), #0xb0
   960B 21 0D 5F      [10] 9315 	ld	hl, #(_spr + 0x0003)
   960E 36 B0         [10] 9316 	ld	(hl), #0xb0
                           9317 ;src/main.c:2117: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk10_end);
   9610 21 40 37      [10] 9318 	ld	hl, #(_mappk10 + 0x01ad)
   9613 E5            [11] 9319 	push	hl
   9614 21 00 16      [10] 9320 	ld	hl, #0x1600
   9617 E5            [11] 9321 	push	hl
   9618 CD 5A 5C      [17] 9322 	call	_cpct_zx7b_decrunch_s
                           9323 ;src/main.c:2119: lName = "6;1@@LIBRARY";
   961B 21 9B 97      [10] 9324 	ld	hl, #___str_33+0
   961E 22 D2 5E      [16] 9325 	ld	(_lName), hl
                           9326 ;src/main.c:2121: doorKey[0] = 11; // dragon blood
   9621 21 DF 5E      [10] 9327 	ld	hl, #_doorKey
   9624 36 0B         [10] 9328 	ld	(hl), #0x0b
                           9329 ;src/main.c:2122: doorKey[1] = 8; // kraken ink
   9626 21 E0 5E      [10] 9330 	ld	hl, #(_doorKey + 0x0001)
   9629 36 08         [10] 9331 	ld	(hl), #0x08
                           9332 ;src/main.c:2123: doorKey[2] = 9; // dodo egg
   962B 21 E1 5E      [10] 9333 	ld	hl, #(_doorKey + 0x0002)
   962E 36 09         [10] 9334 	ld	(hl), #0x09
                           9335 ;src/main.c:2124: doorKey[3] = 10; // martian mushroom
   9630 21 E2 5E      [10] 9336 	ld	hl, #(_doorKey + 0x0003)
   9633 36 0A         [10] 9337 	ld	(hl), #0x0a
                           9338 ;src/main.c:2125: doorKey[4] = 15; // mordor lava
   9635 21 E3 5E      [10] 9339 	ld	hl, #(_doorKey + 0x0004)
   9638 36 0F         [10] 9340 	ld	(hl), #0x0f
                           9341 ;src/main.c:2127: storeX = 3;
   963A 21 E9 5E      [10] 9342 	ld	hl,#_storeX + 0
   963D 36 03         [10] 9343 	ld	(hl), #0x03
                           9344 ;src/main.c:2128: storeY = 143;
   963F 21 EA 5E      [10] 9345 	ld	hl,#_storeY + 0
   9642 36 8F         [10] 9346 	ld	(hl), #0x8f
                           9347 ;src/main.c:2129: break;
   9644 C3 FD 96      [10] 9348 	jp	00113$
                           9349 ;src/main.c:2132: case 11: {			 
   9647                    9350 00112$:
                           9351 ;src/main.c:2134: SetEnemyParams(2, GHOST,	M_linear_X, 	D_left,     1,  2, 132,   2,  72);
   9647 21 02 48      [10] 9352 	ld	hl, #0x4802
   964A E5            [11] 9353 	push	hl
   964B 26 84         [ 7] 9354 	ld	h, #0x84
   964D E5            [11] 9355 	push	hl
   964E 26 01         [ 7] 9356 	ld	h, #0x01
   9650 E5            [11] 9357 	push	hl
   9651 21 04 00      [10] 9358 	ld	hl, #0x0004
   9654 E5            [11] 9359 	push	hl
   9655 3E 02         [ 7] 9360 	ld	a, #0x02
   9657 F5            [11] 9361 	push	af
   9658 33            [ 6] 9362 	inc	sp
   9659 CD AC 8D      [17] 9363 	call	_SetEnemyParams
   965C 21 09 00      [10] 9364 	ld	hl, #9
   965F 39            [11] 9365 	add	hl, sp
   9660 F9            [ 6] 9366 	ld	sp, hl
                           9367 ;src/main.c:2135: SetEnemyParams(3, GHOST,	M_chaser, 		D_right,    5,  2, 114,   0,   0);
   9661 21 00 00      [10] 9368 	ld	hl, #0x0000
   9664 E5            [11] 9369 	push	hl
   9665 21 02 72      [10] 9370 	ld	hl, #0x7202
   9668 E5            [11] 9371 	push	hl
   9669 21 03 05      [10] 9372 	ld	hl, #0x0503
   966C E5            [11] 9373 	push	hl
   966D 21 04 03      [10] 9374 	ld	hl, #0x0304
   9670 E5            [11] 9375 	push	hl
   9671 3E 03         [ 7] 9376 	ld	a, #0x03
   9673 F5            [11] 9377 	push	af
   9674 33            [ 6] 9378 	inc	sp
   9675 CD AC 8D      [17] 9379 	call	_SetEnemyParams
   9678 21 09 00      [10] 9380 	ld	hl, #9
   967B 39            [11] 9381 	add	hl, sp
   967C F9            [ 6] 9382 	ld	sp, hl
                           9383 ;src/main.c:2136: SetEnemyParams(4, KNIGHT,	M_linear_XY, 	D_down,     1, 21,  38,   0,   0);
   967D 21 00 00      [10] 9384 	ld	hl, #0x0000
   9680 E5            [11] 9385 	push	hl
   9681 21 15 26      [10] 9386 	ld	hl, #0x2615
   9684 E5            [11] 9387 	push	hl
   9685 21 01 01      [10] 9388 	ld	hl, #0x0101
   9688 E5            [11] 9389 	push	hl
   9689 21 03 02      [10] 9390 	ld	hl, #0x0203
   968C E5            [11] 9391 	push	hl
   968D 3E 04         [ 7] 9392 	ld	a, #0x04
   968F F5            [11] 9393 	push	af
   9690 33            [ 6] 9394 	inc	sp
   9691 CD AC 8D      [17] 9395 	call	_SetEnemyParams
   9694 21 09 00      [10] 9396 	ld	hl, #9
   9697 39            [11] 9397 	add	hl, sp
   9698 F9            [ 6] 9398 	ld	sp, hl
                           9399 ;src/main.c:2137: SetEnemyParams(5, KNIGHT,	M_linear_XY, 	D_down,     1, 55,  38,   0,   0);
   9699 21 00 00      [10] 9400 	ld	hl, #0x0000
   969C E5            [11] 9401 	push	hl
   969D 21 37 26      [10] 9402 	ld	hl, #0x2637
   96A0 E5            [11] 9403 	push	hl
   96A1 21 01 01      [10] 9404 	ld	hl, #0x0101
   96A4 E5            [11] 9405 	push	hl
   96A5 21 03 02      [10] 9406 	ld	hl, #0x0203
   96A8 E5            [11] 9407 	push	hl
   96A9 3E 05         [ 7] 9408 	ld	a, #0x05
   96AB F5            [11] 9409 	push	af
   96AC 33            [ 6] 9410 	inc	sp
   96AD CD AC 8D      [17] 9411 	call	_SetEnemyParams
   96B0 21 09 00      [10] 9412 	ld	hl, #9
   96B3 39            [11] 9413 	add	hl, sp
   96B4 F9            [ 6] 9414 	ld	sp, hl
                           9415 ;src/main.c:2139: spr[0].x = spr[0].px = 34; 
   96B5 21 0E 5F      [10] 9416 	ld	hl, #(_spr + 0x0004)
   96B8 36 22         [10] 9417 	ld	(hl), #0x22
   96BA 21 0C 5F      [10] 9418 	ld	hl, #(_spr + 0x0002)
   96BD 36 22         [10] 9419 	ld	(hl), #0x22
                           9420 ;src/main.c:2140: spr[0].y = spr[0].py = 176;			
   96BF 21 0F 5F      [10] 9421 	ld	hl, #(_spr + 0x0005)
   96C2 36 B0         [10] 9422 	ld	(hl), #0xb0
   96C4 21 0D 5F      [10] 9423 	ld	hl, #(_spr + 0x0003)
   96C7 36 B0         [10] 9424 	ld	(hl), #0xb0
                           9425 ;src/main.c:2142: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk11_end);
   96C9 21 92 35      [10] 9426 	ld	hl, #(_mappk11 + 0x020b)
   96CC E5            [11] 9427 	push	hl
   96CD 21 00 16      [10] 9428 	ld	hl, #0x1600
   96D0 E5            [11] 9429 	push	hl
   96D1 CD 5A 5C      [17] 9430 	call	_cpct_zx7b_decrunch_s
                           9431 ;src/main.c:2144: lName = "6;2@@LIBRARY";
   96D4 21 A8 97      [10] 9432 	ld	hl, #___str_34+0
   96D7 22 D2 5E      [16] 9433 	ld	(_lName), hl
                           9434 ;src/main.c:2146: doorKey[0] = 13; // unicorn blood
   96DA 21 DF 5E      [10] 9435 	ld	hl, #_doorKey
   96DD 36 0D         [10] 9436 	ld	(hl), #0x0d
                           9437 ;src/main.c:2147: doorKey[1] = 15; // mordor lava
   96DF 21 E0 5E      [10] 9438 	ld	hl, #(_doorKey + 0x0001)
   96E2 36 0F         [10] 9439 	ld	(hl), #0x0f
                           9440 ;src/main.c:2148: doorKey[2] = 14; // troll fat
   96E4 21 E1 5E      [10] 9441 	ld	hl, #(_doorKey + 0x0002)
   96E7 36 0E         [10] 9442 	ld	(hl), #0x0e
                           9443 ;src/main.c:2149: doorKey[3] = 15; // mordor lava
   96E9 21 E2 5E      [10] 9444 	ld	hl, #(_doorKey + 0x0003)
   96EC 36 0F         [10] 9445 	ld	(hl), #0x0f
                           9446 ;src/main.c:2150: doorKey[4] = 13; // unicorn blood
   96EE 21 E3 5E      [10] 9447 	ld	hl, #(_doorKey + 0x0004)
   96F1 36 0D         [10] 9448 	ld	(hl), #0x0d
                           9449 ;src/main.c:2152: storeX = 73;
   96F3 21 E9 5E      [10] 9450 	ld	hl,#_storeX + 0
   96F6 36 49         [10] 9451 	ld	(hl), #0x49
                           9452 ;src/main.c:2153: storeY = 11;
   96F8 21 EA 5E      [10] 9453 	ld	hl,#_storeY + 0
   96FB 36 0B         [10] 9454 	ld	(hl), #0x0b
                           9455 ;src/main.c:2156: }
   96FD                    9456 00113$:
                           9457 ;src/main.c:2158: if (TwoPlayers) {
   96FD 3A D4 5E      [13] 9458 	ld	a,(#_TwoPlayers + 0)
   9700 B7            [ 4] 9459 	or	a, a
   9701 C8            [11] 9460 	ret	Z
                           9461 ;src/main.c:2159: spr[1].x = spr[1].px = spr[0].x + 6; 
   9702 01 1B 5F      [10] 9462 	ld	bc, #_spr + 17
   9705 11 1D 5F      [10] 9463 	ld	de, #_spr + 19
   9708 3A 0C 5F      [13] 9464 	ld	a, (#_spr + 2)
   970B C6 06         [ 7] 9465 	add	a, #0x06
   970D 12            [ 7] 9466 	ld	(de), a
   970E 02            [ 7] 9467 	ld	(bc), a
                           9468 ;src/main.c:2160: spr[1].y = spr[1].py = spr[0].y;
   970F 01 1C 5F      [10] 9469 	ld	bc, #_spr + 18
   9712 11 1E 5F      [10] 9470 	ld	de, #_spr + 20
   9715 3A 0D 5F      [13] 9471 	ld	a, (#_spr + 3)
   9718 12            [ 7] 9472 	ld	(de), a
   9719 02            [ 7] 9473 	ld	(bc), a
   971A C9            [10] 9474 	ret
   971B                    9475 ___str_23:
   971B 31 3B 31 40 40 47  9476 	.ascii "1;1@@GARDENS"
        41 52 44 45 4E 53
   9727 00                 9477 	.db 0x00
   9728                    9478 ___str_24:
   9728 31 3B 32 40 40 47  9479 	.ascii "1;2@@GARDENS"
        41 52 44 45 4E 53
   9734 00                 9480 	.db 0x00
   9735                    9481 ___str_25:
   9735 32 3B 31 40 43 45  9482 	.ascii "2;1@CEMETERY"
        4D 45 54 45 52 59
   9741 00                 9483 	.db 0x00
   9742                    9484 ___str_26:
   9742 32 3B 32 40 43 45  9485 	.ascii "2;2@CEMETERY"
        4D 45 54 45 52 59
   974E 00                 9486 	.db 0x00
   974F                    9487 ___str_27:
   974F 33 3B 31 40 40 43  9488 	.ascii "3;1@@CELLARS"
        45 4C 4C 41 52 53
   975B 00                 9489 	.db 0x00
   975C                    9490 ___str_28:
   975C 33 3B 32 40 40 43  9491 	.ascii "3;2@@CELLARS"
        45 4C 4C 41 52 53
   9768 00                 9492 	.db 0x00
   9769                    9493 ___str_29:
   9769 34 3B 31 40 40 40  9494 	.ascii "4;1@@@CASTLE"
        43 41 53 54 4C 45
   9775 00                 9495 	.db 0x00
   9776                    9496 ___str_30:
   9776 34 3B 32 40 40 40  9497 	.ascii "4;2@@@CASTLE"
        43 41 53 54 4C 45
   9782 00                 9498 	.db 0x00
   9783                    9499 ___str_31:
   9783 35 3B 31 40 40 40  9500 	.ascii "5;1@@@TOWER"
        54 4F 57 45 52
   978E 00                 9501 	.db 0x00
   978F                    9502 ___str_32:
   978F 35 3B 32 40 40 40  9503 	.ascii "5;2@@@TOWER"
        54 4F 57 45 52
   979A 00                 9504 	.db 0x00
   979B                    9505 ___str_33:
   979B 36 3B 31 40 40 4C  9506 	.ascii "6;1@@LIBRARY"
        49 42 52 41 52 59
   97A7 00                 9507 	.db 0x00
   97A8                    9508 ___str_34:
   97A8 36 3B 32 40 40 4C  9509 	.ascii "6;2@@LIBRARY"
        49 42 52 41 52 59
   97B4 00                 9510 	.db 0x00
                           9511 ;src/main.c:2166: void CheckEnemyCollision(u8 player, TSpr *pSpr) 
                           9512 ;	---------------------------------
                           9513 ; Function CheckEnemyCollision
                           9514 ; ---------------------------------
   97B5                    9515 _CheckEnemyCollision::
   97B5 DD E5         [15] 9516 	push	ix
   97B7 DD 21 00 00   [14] 9517 	ld	ix,#0
   97BB DD 39         [15] 9518 	add	ix,sp
   97BD 21 F8 FF      [10] 9519 	ld	hl, #-8
   97C0 39            [11] 9520 	add	hl, sp
   97C1 F9            [ 6] 9521 	ld	sp, hl
                           9522 ;src/main.c:2168: if ((spr[player].x + SPR_W) > pSpr->x && spr[player].x < (pSpr->x + SPR_W) &&
   97C2 01 0A 5F      [10] 9523 	ld	bc, #_spr+0
   97C5 DD 5E 04      [19] 9524 	ld	e,4 (ix)
   97C8 16 00         [ 7] 9525 	ld	d,#0x00
   97CA 6B            [ 4] 9526 	ld	l, e
   97CB 62            [ 4] 9527 	ld	h, d
   97CC 29            [11] 9528 	add	hl, hl
   97CD 19            [11] 9529 	add	hl, de
   97CE 29            [11] 9530 	add	hl, hl
   97CF 19            [11] 9531 	add	hl, de
   97D0 29            [11] 9532 	add	hl, hl
   97D1 19            [11] 9533 	add	hl, de
   97D2 09            [11] 9534 	add	hl,bc
   97D3 5D            [ 4] 9535 	ld	e,l
   97D4 54            [ 4] 9536 	ld	d,h
   97D5 23            [ 6] 9537 	inc	hl
   97D6 23            [ 6] 9538 	inc	hl
   97D7 4E            [ 7] 9539 	ld	c, (hl)
   97D8 06 00         [ 7] 9540 	ld	b, #0x00
   97DA 21 05 00      [10] 9541 	ld	hl, #0x0005
   97DD 09            [11] 9542 	add	hl,bc
   97DE E3            [19] 9543 	ex	(sp), hl
   97DF DD 7E 05      [19] 9544 	ld	a, 5 (ix)
   97E2 DD 77 FE      [19] 9545 	ld	-2 (ix), a
   97E5 DD 7E 06      [19] 9546 	ld	a, 6 (ix)
   97E8 DD 77 FF      [19] 9547 	ld	-1 (ix), a
   97EB DD 6E FE      [19] 9548 	ld	l,-2 (ix)
   97EE DD 66 FF      [19] 9549 	ld	h,-1 (ix)
   97F1 23            [ 6] 9550 	inc	hl
   97F2 23            [ 6] 9551 	inc	hl
   97F3 6E            [ 7] 9552 	ld	l, (hl)
   97F4 26 00         [ 7] 9553 	ld	h, #0x00
                           9554 ;src/main.c:2169: (spr[player].y + SPR_H) > pSpr->y && spr[player].y < (pSpr->y + SPR_H)) {
   97F6 13            [ 6] 9555 	inc	de
   97F7 13            [ 6] 9556 	inc	de
   97F8 13            [ 6] 9557 	inc	de
   97F9 DD 73 FA      [19] 9558 	ld	-6 (ix), e
   97FC DD 72 FB      [19] 9559 	ld	-5 (ix), d
                           9560 ;src/main.c:2168: if ((spr[player].x + SPR_W) > pSpr->x && spr[player].x < (pSpr->x + SPR_W) &&
   97FF 7D            [ 4] 9561 	ld	a, l
   9800 DD 96 F8      [19] 9562 	sub	a, -8 (ix)
   9803 7C            [ 4] 9563 	ld	a, h
   9804 DD 9E F9      [19] 9564 	sbc	a, -7 (ix)
   9807 E2 0C 98      [10] 9565 	jp	PO, 00153$
   980A EE 80         [ 7] 9566 	xor	a, #0x80
   980C                    9567 00153$:
   980C F2 7D 98      [10] 9568 	jp	P, 00110$
   980F 11 05 00      [10] 9569 	ld	de, #0x0005
   9812 19            [11] 9570 	add	hl, de
   9813 79            [ 4] 9571 	ld	a, c
   9814 95            [ 4] 9572 	sub	a, l
   9815 78            [ 4] 9573 	ld	a, b
   9816 9C            [ 4] 9574 	sbc	a, h
   9817 E2 1C 98      [10] 9575 	jp	PO, 00154$
   981A EE 80         [ 7] 9576 	xor	a, #0x80
   981C                    9577 00154$:
   981C F2 7D 98      [10] 9578 	jp	P, 00110$
                           9579 ;src/main.c:2169: (spr[player].y + SPR_H) > pSpr->y && spr[player].y < (pSpr->y + SPR_H)) {
   981F DD 6E FA      [19] 9580 	ld	l,-6 (ix)
   9822 DD 66 FB      [19] 9581 	ld	h,-5 (ix)
   9825 5E            [ 7] 9582 	ld	e, (hl)
   9826 16 00         [ 7] 9583 	ld	d, #0x00
   9828 21 0C 00      [10] 9584 	ld	hl, #0x000c
   982B 19            [11] 9585 	add	hl,de
   982C DD 75 FC      [19] 9586 	ld	-4 (ix), l
   982F DD 74 FD      [19] 9587 	ld	-3 (ix), h
   9832 DD 6E FE      [19] 9588 	ld	l,-2 (ix)
   9835 DD 66 FF      [19] 9589 	ld	h,-1 (ix)
   9838 23            [ 6] 9590 	inc	hl
   9839 23            [ 6] 9591 	inc	hl
   983A 23            [ 6] 9592 	inc	hl
   983B 6E            [ 7] 9593 	ld	l, (hl)
   983C 26 00         [ 7] 9594 	ld	h, #0x00
   983E 7D            [ 4] 9595 	ld	a, l
   983F DD 96 FC      [19] 9596 	sub	a, -4 (ix)
   9842 7C            [ 4] 9597 	ld	a, h
   9843 DD 9E FD      [19] 9598 	sbc	a, -3 (ix)
   9846 E2 4B 98      [10] 9599 	jp	PO, 00155$
   9849 EE 80         [ 7] 9600 	xor	a, #0x80
   984B                    9601 00155$:
   984B F2 7D 98      [10] 9602 	jp	P, 00110$
   984E D5            [11] 9603 	push	de
   984F 11 0C 00      [10] 9604 	ld	de, #0x000c
   9852 19            [11] 9605 	add	hl, de
   9853 D1            [10] 9606 	pop	de
   9854 7B            [ 4] 9607 	ld	a, e
   9855 95            [ 4] 9608 	sub	a, l
   9856 7A            [ 4] 9609 	ld	a, d
   9857 9C            [ 4] 9610 	sbc	a, h
   9858 E2 5D 98      [10] 9611 	jp	PO, 00156$
   985B EE 80         [ 7] 9612 	xor	a, #0x80
   985D                    9613 00156$:
   985D F2 7D 98      [10] 9614 	jp	P, 00110$
                           9615 ;src/main.c:2171: ExplodeSprite(player, pSpr->num);			
   9860 DD 6E FE      [19] 9616 	ld	l,-2 (ix)
   9863 DD 66 FF      [19] 9617 	ld	h,-1 (ix)
   9866 46            [ 7] 9618 	ld	b, (hl)
   9867 C5            [11] 9619 	push	bc
   9868 33            [ 6] 9620 	inc	sp
   9869 DD 7E 04      [19] 9621 	ld	a, 4 (ix)
   986C F5            [11] 9622 	push	af
   986D 33            [ 6] 9623 	inc	sp
   986E CD 8A 7A      [17] 9624 	call	_ExplodeSprite
   9871 F1            [10] 9625 	pop	af
                           9626 ;src/main.c:2172: GameOver(player);
   9872 DD 7E 04      [19] 9627 	ld	a, 4 (ix)
   9875 F5            [11] 9628 	push	af
   9876 33            [ 6] 9629 	inc	sp
   9877 CD 4F A0      [17] 9630 	call	_GameOver
   987A 33            [ 6] 9631 	inc	sp
   987B 18 7A         [12] 9632 	jr	00115$
   987D                    9633 00110$:
                           9634 ;src/main.c:2175: else if (sht.active) {
   987D 3A 77 5F      [13] 9635 	ld	a, (#_sht + 4)
   9880 B7            [ 4] 9636 	or	a, a
   9881 28 74         [12] 9637 	jr	Z,00115$
                           9638 ;src/main.c:2176: if ((sht.x + SHT_W) > (spr[player].x) && sht.x < (spr[player].x + SPR_W))
   9883 21 73 5F      [10] 9639 	ld	hl, #_sht + 0
   9886 5E            [ 7] 9640 	ld	e, (hl)
   9887 16 00         [ 7] 9641 	ld	d, #0x00
   9889 21 04 00      [10] 9642 	ld	hl, #0x0004
   988C 19            [11] 9643 	add	hl, de
   988D 79            [ 4] 9644 	ld	a, c
   988E 95            [ 4] 9645 	sub	a, l
   988F 78            [ 4] 9646 	ld	a, b
   9890 9C            [ 4] 9647 	sbc	a, h
   9891 E2 96 98      [10] 9648 	jp	PO, 00157$
   9894 EE 80         [ 7] 9649 	xor	a, #0x80
   9896                    9650 00157$:
   9896 F2 F7 98      [10] 9651 	jp	P, 00115$
   9899 7B            [ 4] 9652 	ld	a, e
   989A DD 96 F8      [19] 9653 	sub	a, -8 (ix)
   989D 7A            [ 4] 9654 	ld	a, d
   989E DD 9E F9      [19] 9655 	sbc	a, -7 (ix)
   98A1 E2 A6 98      [10] 9656 	jp	PO, 00158$
   98A4 EE 80         [ 7] 9657 	xor	a, #0x80
   98A6                    9658 00158$:
   98A6 F2 F7 98      [10] 9659 	jp	P, 00115$
                           9660 ;src/main.c:2177: if ((sht.y + SHT_H) > (spr[player].y) && (sht.y) < (spr[player].y + SPR_H))	{
   98A9 21 74 5F      [10] 9661 	ld	hl, #_sht + 1
   98AC 4E            [ 7] 9662 	ld	c, (hl)
   98AD 06 00         [ 7] 9663 	ld	b, #0x00
   98AF 21 08 00      [10] 9664 	ld	hl, #0x0008
   98B2 09            [11] 9665 	add	hl,bc
   98B3 EB            [ 4] 9666 	ex	de,hl
   98B4 DD 6E FA      [19] 9667 	ld	l,-6 (ix)
   98B7 DD 66 FB      [19] 9668 	ld	h,-5 (ix)
   98BA 6E            [ 7] 9669 	ld	l, (hl)
   98BB 26 00         [ 7] 9670 	ld	h, #0x00
   98BD 7D            [ 4] 9671 	ld	a, l
   98BE 93            [ 4] 9672 	sub	a, e
   98BF 7C            [ 4] 9673 	ld	a, h
   98C0 9A            [ 4] 9674 	sbc	a, d
   98C1 E2 C6 98      [10] 9675 	jp	PO, 00159$
   98C4 EE 80         [ 7] 9676 	xor	a, #0x80
   98C6                    9677 00159$:
   98C6 F2 F7 98      [10] 9678 	jp	P, 00115$
   98C9 11 0C 00      [10] 9679 	ld	de, #0x000c
   98CC 19            [11] 9680 	add	hl, de
   98CD 79            [ 4] 9681 	ld	a, c
   98CE 95            [ 4] 9682 	sub	a, l
   98CF 78            [ 4] 9683 	ld	a, b
   98D0 9C            [ 4] 9684 	sbc	a, h
   98D1 E2 D6 98      [10] 9685 	jp	PO, 00160$
   98D4 EE 80         [ 7] 9686 	xor	a, #0x80
   98D6                    9687 00160$:
   98D6 F2 F7 98      [10] 9688 	jp	P, 00115$
                           9689 ;src/main.c:2179: DeleteShot();
   98D9 CD FA 86      [17] 9690 	call	_DeleteShot
                           9691 ;src/main.c:2180: ExplodeSprite(player, pSpr->num);			
   98DC DD 6E FE      [19] 9692 	ld	l,-2 (ix)
   98DF DD 66 FF      [19] 9693 	ld	h,-1 (ix)
   98E2 46            [ 7] 9694 	ld	b, (hl)
   98E3 C5            [11] 9695 	push	bc
   98E4 33            [ 6] 9696 	inc	sp
   98E5 DD 7E 04      [19] 9697 	ld	a, 4 (ix)
   98E8 F5            [11] 9698 	push	af
   98E9 33            [ 6] 9699 	inc	sp
   98EA CD 8A 7A      [17] 9700 	call	_ExplodeSprite
   98ED F1            [10] 9701 	pop	af
                           9702 ;src/main.c:2181: GameOver(player);
   98EE DD 7E 04      [19] 9703 	ld	a, 4 (ix)
   98F1 F5            [11] 9704 	push	af
   98F2 33            [ 6] 9705 	inc	sp
   98F3 CD 4F A0      [17] 9706 	call	_GameOver
   98F6 33            [ 6] 9707 	inc	sp
   98F7                    9708 00115$:
   98F7 DD F9         [10] 9709 	ld	sp, ix
   98F9 DD E1         [14] 9710 	pop	ix
   98FB C9            [10] 9711 	ret
                           9712 ;src/main.c:2188: void EnemyLoop(TSpr *pSpr) __z88dk_fastcall {
                           9713 ;	---------------------------------
                           9714 ; Function EnemyLoop
                           9715 ; ---------------------------------
   98FC                    9716 _EnemyLoop::
                           9717 ;src/main.c:2189: if (pSpr->ident == NOBODY) 
   98FC 4D            [ 4] 9718 	ld	c,l
   98FD 44            [ 4] 9719 	ld	b,h
   98FE 23            [ 6] 9720 	inc	hl
   98FF 7E            [ 7] 9721 	ld	a, (hl)
   9900 D6 09         [ 7] 9722 	sub	a, #0x09
   9902 C8            [11] 9723 	ret	Z
                           9724 ;src/main.c:2190: return; 
   9903 18 00         [12] 9725 	jr	00102$
   9905                    9726 00102$:
                           9727 ;src/main.c:2192: MoveEnemy(pSpr);
   9905 C5            [11] 9728 	push	bc
   9906 C5            [11] 9729 	push	bc
   9907 CD 1C 89      [17] 9730 	call	_MoveEnemy
   990A F1            [10] 9731 	pop	af
   990B C1            [10] 9732 	pop	bc
                           9733 ;src/main.c:2194: SelectFrame(pSpr); 
   990C C5            [11] 9734 	push	bc
   990D 69            [ 4] 9735 	ld	l, c
   990E 60            [ 4] 9736 	ld	h, b
   990F CD CE 77      [17] 9737 	call	_SelectFrame
   9912 C1            [10] 9738 	pop	bc
                           9739 ;src/main.c:2195: WalkAnim(pSpr, pSpr->dir);
   9913 C5            [11] 9740 	push	bc
   9914 FD E1         [14] 9741 	pop	iy
   9916 FD 56 07      [19] 9742 	ld	d, 7 (iy)
   9919 C5            [11] 9743 	push	bc
   991A D5            [11] 9744 	push	de
   991B 33            [ 6] 9745 	inc	sp
   991C C5            [11] 9746 	push	bc
   991D CD F0 7F      [17] 9747 	call	_WalkAnim
   9920 F1            [10] 9748 	pop	af
   9921 33            [ 6] 9749 	inc	sp
   9922 C1            [10] 9750 	pop	bc
                           9751 ;src/main.c:2197: DeleteSprite(pSpr);
   9923 C5            [11] 9752 	push	bc
   9924 69            [ 4] 9753 	ld	l, c
   9925 60            [ 4] 9754 	ld	h, b
   9926 CD 19 77      [17] 9755 	call	_DeleteSprite
   9929 C1            [10] 9756 	pop	bc
                           9757 ;src/main.c:2198: pSpr->px = pSpr->x; // save the current X coordinate
   992A 21 04 00      [10] 9758 	ld	hl, #0x0004
   992D 09            [11] 9759 	add	hl,bc
   992E EB            [ 4] 9760 	ex	de,hl
   992F 69            [ 4] 9761 	ld	l, c
   9930 60            [ 4] 9762 	ld	h, b
   9931 23            [ 6] 9763 	inc	hl
   9932 23            [ 6] 9764 	inc	hl
   9933 7E            [ 7] 9765 	ld	a, (hl)
   9934 12            [ 7] 9766 	ld	(de), a
                           9767 ;src/main.c:2199: pSpr->py = pSpr->y; // save the current Y coordinate
   9935 21 05 00      [10] 9768 	ld	hl, #0x0005
   9938 09            [11] 9769 	add	hl,bc
   9939 EB            [ 4] 9770 	ex	de,hl
   993A 69            [ 4] 9771 	ld	l, c
   993B 60            [ 4] 9772 	ld	h, b
   993C 23            [ 6] 9773 	inc	hl
   993D 23            [ 6] 9774 	inc	hl
   993E 23            [ 6] 9775 	inc	hl
   993F 7E            [ 7] 9776 	ld	a, (hl)
   9940 12            [ 7] 9777 	ld	(de), a
                           9778 ;src/main.c:2200: PrintSprite(pSpr);
   9941 C5            [11] 9779 	push	bc
   9942 69            [ 4] 9780 	ld	l, c
   9943 60            [ 4] 9781 	ld	h, b
   9944 CD EA 76      [17] 9782 	call	_PrintSprite
   9947 C1            [10] 9783 	pop	bc
                           9784 ;src/main.c:2202: CheckEnemyCollision(0, pSpr);
   9948 C5            [11] 9785 	push	bc
   9949 C5            [11] 9786 	push	bc
   994A AF            [ 4] 9787 	xor	a, a
   994B F5            [11] 9788 	push	af
   994C 33            [ 6] 9789 	inc	sp
   994D CD B5 97      [17] 9790 	call	_CheckEnemyCollision
   9950 F1            [10] 9791 	pop	af
   9951 33            [ 6] 9792 	inc	sp
   9952 C1            [10] 9793 	pop	bc
                           9794 ;src/main.c:2203: if (TwoPlayers)
   9953 3A D4 5E      [13] 9795 	ld	a,(#_TwoPlayers + 0)
   9956 B7            [ 4] 9796 	or	a, a
   9957 C8            [11] 9797 	ret	Z
                           9798 ;src/main.c:2204: CheckEnemyCollision(1, pSpr);
   9958 C5            [11] 9799 	push	bc
   9959 3E 01         [ 7] 9800 	ld	a, #0x01
   995B F5            [11] 9801 	push	af
   995C 33            [ 6] 9802 	inc	sp
   995D CD B5 97      [17] 9803 	call	_CheckEnemyCollision
   9960 F1            [10] 9804 	pop	af
   9961 33            [ 6] 9805 	inc	sp
   9962 C9            [10] 9806 	ret
                           9807 ;src/main.c:2211: void PrintStartMenu() {
                           9808 ;	---------------------------------
                           9809 ; Function PrintStartMenu
                           9810 ; ---------------------------------
   9963                    9811 _PrintStartMenu::
                           9812 ;src/main.c:2212: ClearScreen();
   9963 CD B6 61      [17] 9813 	call	_ClearScreen
                           9814 ;src/main.c:2215: cpct_drawSprite(g_logo_0, cpctm_screenPtr(CPCT_VMEM_START, 0, 0), G_LOGO_0_W, G_LOGO_0_H);
   9966 21 28 23      [10] 9815 	ld	hl, #0x2328
   9969 E5            [11] 9816 	push	hl
   996A 21 00 C0      [10] 9817 	ld	hl, #0xc000
   996D E5            [11] 9818 	push	hl
   996E 21 B7 16      [10] 9819 	ld	hl, #_g_logo_0
   9971 E5            [11] 9820 	push	hl
   9972 CD 6C 5A      [17] 9821 	call	_cpct_drawSprite
                           9822 ;src/main.c:2216: cpct_drawSprite(g_logo_1, cpctm_screenPtr(CPCT_VMEM_START, G_LOGO_0_W, 0), G_LOGO_0_W, G_LOGO_0_H);
   9975 21 28 23      [10] 9823 	ld	hl, #0x2328
   9978 E5            [11] 9824 	push	hl
   9979 26 C0         [ 7] 9825 	ld	h, #0xc0
   997B E5            [11] 9826 	push	hl
   997C 21 2F 1C      [10] 9827 	ld	hl, #_g_logo_1
   997F E5            [11] 9828 	push	hl
   9980 CD 6C 5A      [17] 9829 	call	_cpct_drawSprite
                           9830 ;src/main.c:2218: PrintText("1@@1@PLAYER@GAME", 10, 50, 0);
   9983 21 32 00      [10] 9831 	ld	hl, #0x0032
   9986 E5            [11] 9832 	push	hl
   9987 3E 0A         [ 7] 9833 	ld	a, #0x0a
   9989 F5            [11] 9834 	push	af
   998A 33            [ 6] 9835 	inc	sp
   998B 21 92 9A      [10] 9836 	ld	hl, #___str_35
   998E E5            [11] 9837 	push	hl
   998F CD 10 63      [17] 9838 	call	_PrintText
   9992 F1            [10] 9839 	pop	af
                           9840 ;src/main.c:2219: PrintText("2@@2@PLAYER@GAME", 10, 60, 0);
   9993 33            [ 6] 9841 	inc	sp
   9994 21 3C 00      [10] 9842 	ld	hl,#0x003c
   9997 E3            [19] 9843 	ex	(sp),hl
   9998 3E 0A         [ 7] 9844 	ld	a, #0x0a
   999A F5            [11] 9845 	push	af
   999B 33            [ 6] 9846 	inc	sp
   999C 21 A3 9A      [10] 9847 	ld	hl, #___str_36
   999F E5            [11] 9848 	push	hl
   99A0 CD 10 63      [17] 9849 	call	_PrintText
   99A3 F1            [10] 9850 	pop	af
                           9851 ;src/main.c:2220: PrintText("3@@REDEFINE@CONTROLS", 10, 70, 0);
   99A4 33            [ 6] 9852 	inc	sp
   99A5 21 46 00      [10] 9853 	ld	hl,#0x0046
   99A8 E3            [19] 9854 	ex	(sp),hl
   99A9 3E 0A         [ 7] 9855 	ld	a, #0x0a
   99AB F5            [11] 9856 	push	af
   99AC 33            [ 6] 9857 	inc	sp
   99AD 21 B4 9A      [10] 9858 	ld	hl, #___str_37
   99B0 E5            [11] 9859 	push	hl
   99B1 CD 10 63      [17] 9860 	call	_PrintText
   99B4 F1            [10] 9861 	pop	af
   99B5 F1            [10] 9862 	pop	af
   99B6 33            [ 6] 9863 	inc	sp
                           9864 ;src/main.c:2221: if (turboMode)
   99B7 3A EF 5E      [13] 9865 	ld	a,(#_turboMode + 0)
   99BA B7            [ 4] 9866 	or	a, a
   99BB 28 14         [12] 9867 	jr	Z,00102$
                           9868 ;src/main.c:2222: PrintText("4@@TURBO@MODE:@ON", 10, 80, 0);
   99BD 21 50 00      [10] 9869 	ld	hl, #0x0050
   99C0 E5            [11] 9870 	push	hl
   99C1 3E 0A         [ 7] 9871 	ld	a, #0x0a
   99C3 F5            [11] 9872 	push	af
   99C4 33            [ 6] 9873 	inc	sp
   99C5 21 C9 9A      [10] 9874 	ld	hl, #___str_38
   99C8 E5            [11] 9875 	push	hl
   99C9 CD 10 63      [17] 9876 	call	_PrintText
   99CC F1            [10] 9877 	pop	af
   99CD F1            [10] 9878 	pop	af
   99CE 33            [ 6] 9879 	inc	sp
   99CF 18 12         [12] 9880 	jr	00103$
   99D1                    9881 00102$:
                           9882 ;src/main.c:2224: PrintText("4@@TURBO@MODE:@OFF", 10, 80, 0);
   99D1 21 50 00      [10] 9883 	ld	hl, #0x0050
   99D4 E5            [11] 9884 	push	hl
   99D5 3E 0A         [ 7] 9885 	ld	a, #0x0a
   99D7 F5            [11] 9886 	push	af
   99D8 33            [ 6] 9887 	inc	sp
   99D9 21 DB 9A      [10] 9888 	ld	hl, #___str_39
   99DC E5            [11] 9889 	push	hl
   99DD CD 10 63      [17] 9890 	call	_PrintText
   99E0 F1            [10] 9891 	pop	af
   99E1 F1            [10] 9892 	pop	af
   99E2 33            [ 6] 9893 	inc	sp
   99E3                    9894 00103$:
                           9895 ;src/main.c:2228: cpct_getScreenPtr(CPCT_VMEM_START, 6, 187), SPR_W, SPR_H, g_maskTable);
   99E3 21 06 BB      [10] 9896 	ld	hl, #0xbb06
   99E6 E5            [11] 9897 	push	hl
   99E7 21 00 C0      [10] 9898 	ld	hl, #0xc000
   99EA E5            [11] 9899 	push	hl
   99EB CD CF 5D      [17] 9900 	call	_cpct_getScreenPtr
                           9901 ;src/main.c:2227: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06, 
   99EE 01 D7 2D      [10] 9902 	ld	bc, #_g_sorcerer1_06+0
   99F1 11 00 01      [10] 9903 	ld	de, #_g_maskTable
   99F4 D5            [11] 9904 	push	de
   99F5 11 05 0C      [10] 9905 	ld	de, #0x0c05
   99F8 D5            [11] 9906 	push	de
   99F9 E5            [11] 9907 	push	hl
   99FA C5            [11] 9908 	push	bc
   99FB CD E5 5D      [17] 9909 	call	_cpct_drawSpriteMaskedAlignedTable
                           9910 ;src/main.c:2230: cpct_getScreenPtr(CPCT_VMEM_START, 68, 187), SPR_W, SPR_H, g_maskTable);
   99FE 21 44 BB      [10] 9911 	ld	hl, #0xbb44
   9A01 E5            [11] 9912 	push	hl
   9A02 21 00 C0      [10] 9913 	ld	hl, #0xc000
   9A05 E5            [11] 9914 	push	hl
   9A06 CD CF 5D      [17] 9915 	call	_cpct_getScreenPtr
                           9916 ;src/main.c:2229: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_04, 
   9A09 01 07 2B      [10] 9917 	ld	bc, #_g_sorcerer2_04+0
   9A0C 11 00 01      [10] 9918 	ld	de, #_g_maskTable
   9A0F D5            [11] 9919 	push	de
   9A10 11 05 0C      [10] 9920 	ld	de, #0x0c05
   9A13 D5            [11] 9921 	push	de
   9A14 E5            [11] 9922 	push	hl
   9A15 C5            [11] 9923 	push	bc
   9A16 CD E5 5D      [17] 9924 	call	_cpct_drawSpriteMaskedAlignedTable
                           9925 ;src/main.c:2232: PrintText("CODE@=@GFX", 25, 110, 0);
   9A19 21 6E 00      [10] 9926 	ld	hl, #0x006e
   9A1C E5            [11] 9927 	push	hl
   9A1D 3E 19         [ 7] 9928 	ld	a, #0x19
   9A1F F5            [11] 9929 	push	af
   9A20 33            [ 6] 9930 	inc	sp
   9A21 21 EE 9A      [10] 9931 	ld	hl, #___str_40
   9A24 E5            [11] 9932 	push	hl
   9A25 CD 10 63      [17] 9933 	call	_PrintText
   9A28 F1            [10] 9934 	pop	af
                           9935 ;src/main.c:2233: PrintText("SALVAKANTERO", 22, 120, 0);
   9A29 33            [ 6] 9936 	inc	sp
   9A2A 21 78 00      [10] 9937 	ld	hl,#0x0078
   9A2D E3            [19] 9938 	ex	(sp),hl
   9A2E 3E 16         [ 7] 9939 	ld	a, #0x16
   9A30 F5            [11] 9940 	push	af
   9A31 33            [ 6] 9941 	inc	sp
   9A32 21 F9 9A      [10] 9942 	ld	hl, #___str_41
   9A35 E5            [11] 9943 	push	hl
   9A36 CD 10 63      [17] 9944 	call	_PrintText
   9A39 F1            [10] 9945 	pop	af
                           9946 ;src/main.c:2234: PrintText("MUSIC@=@FX", 25, 135, 0);
   9A3A 33            [ 6] 9947 	inc	sp
   9A3B 21 87 00      [10] 9948 	ld	hl,#0x0087
   9A3E E3            [19] 9949 	ex	(sp),hl
   9A3F 3E 19         [ 7] 9950 	ld	a, #0x19
   9A41 F5            [11] 9951 	push	af
   9A42 33            [ 6] 9952 	inc	sp
   9A43 21 06 9B      [10] 9953 	ld	hl, #___str_42
   9A46 E5            [11] 9954 	push	hl
   9A47 CD 10 63      [17] 9955 	call	_PrintText
   9A4A F1            [10] 9956 	pop	af
                           9957 ;src/main.c:2235: PrintText("MCKLAIN", 30, 145, 0);
   9A4B 33            [ 6] 9958 	inc	sp
   9A4C 21 91 00      [10] 9959 	ld	hl,#0x0091
   9A4F E3            [19] 9960 	ex	(sp),hl
   9A50 3E 1E         [ 7] 9961 	ld	a, #0x1e
   9A52 F5            [11] 9962 	push	af
   9A53 33            [ 6] 9963 	inc	sp
   9A54 21 11 9B      [10] 9964 	ld	hl, #___str_43
   9A57 E5            [11] 9965 	push	hl
   9A58 CD 10 63      [17] 9966 	call	_PrintText
   9A5B F1            [10] 9967 	pop	af
                           9968 ;src/main.c:2236: PrintText("BETA@TESTING", 22, 160, 0);
   9A5C 33            [ 6] 9969 	inc	sp
   9A5D 21 A0 00      [10] 9970 	ld	hl,#0x00a0
   9A60 E3            [19] 9971 	ex	(sp),hl
   9A61 3E 16         [ 7] 9972 	ld	a, #0x16
   9A63 F5            [11] 9973 	push	af
   9A64 33            [ 6] 9974 	inc	sp
   9A65 21 19 9B      [10] 9975 	ld	hl, #___str_44
   9A68 E5            [11] 9976 	push	hl
   9A69 CD 10 63      [17] 9977 	call	_PrintText
   9A6C F1            [10] 9978 	pop	af
                           9979 ;src/main.c:2237: PrintText("BLACKMORES", 25, 170, 0);
   9A6D 33            [ 6] 9980 	inc	sp
   9A6E 21 AA 00      [10] 9981 	ld	hl,#0x00aa
   9A71 E3            [19] 9982 	ex	(sp),hl
   9A72 3E 19         [ 7] 9983 	ld	a, #0x19
   9A74 F5            [11] 9984 	push	af
   9A75 33            [ 6] 9985 	inc	sp
   9A76 21 26 9B      [10] 9986 	ld	hl, #___str_45
   9A79 E5            [11] 9987 	push	hl
   9A7A CD 10 63      [17] 9988 	call	_PrintText
   9A7D F1            [10] 9989 	pop	af
                           9990 ;src/main.c:2239: PrintText("PLAY@ON@RETRO@2020", 13, 190, 0);
   9A7E 33            [ 6] 9991 	inc	sp
   9A7F 21 BE 00      [10] 9992 	ld	hl,#0x00be
   9A82 E3            [19] 9993 	ex	(sp),hl
   9A83 3E 0D         [ 7] 9994 	ld	a, #0x0d
   9A85 F5            [11] 9995 	push	af
   9A86 33            [ 6] 9996 	inc	sp
   9A87 21 31 9B      [10] 9997 	ld	hl, #___str_46
   9A8A E5            [11] 9998 	push	hl
   9A8B CD 10 63      [17] 9999 	call	_PrintText
   9A8E F1            [10]10000 	pop	af
   9A8F F1            [10]10001 	pop	af
   9A90 33            [ 6]10002 	inc	sp
   9A91 C9            [10]10003 	ret
   9A92                   10004 ___str_35:
   9A92 31 40 40 31 40 50 10005 	.ascii "1@@1@PLAYER@GAME"
        4C 41 59 45 52 40
        47 41 4D 45
   9AA2 00                10006 	.db 0x00
   9AA3                   10007 ___str_36:
   9AA3 32 40 40 32 40 50 10008 	.ascii "2@@2@PLAYER@GAME"
        4C 41 59 45 52 40
        47 41 4D 45
   9AB3 00                10009 	.db 0x00
   9AB4                   10010 ___str_37:
   9AB4 33 40 40 52 45 44 10011 	.ascii "3@@REDEFINE@CONTROLS"
        45 46 49 4E 45 40
        43 4F 4E 54 52 4F
        4C 53
   9AC8 00                10012 	.db 0x00
   9AC9                   10013 ___str_38:
   9AC9 34 40 40 54 55 52 10014 	.ascii "4@@TURBO@MODE:@ON"
        42 4F 40 4D 4F 44
        45 3A 40 4F 4E
   9ADA 00                10015 	.db 0x00
   9ADB                   10016 ___str_39:
   9ADB 34 40 40 54 55 52 10017 	.ascii "4@@TURBO@MODE:@OFF"
        42 4F 40 4D 4F 44
        45 3A 40 4F 46 46
   9AED 00                10018 	.db 0x00
   9AEE                   10019 ___str_40:
   9AEE 43 4F 44 45 40 3D 10020 	.ascii "CODE@=@GFX"
        40 47 46 58
   9AF8 00                10021 	.db 0x00
   9AF9                   10022 ___str_41:
   9AF9 53 41 4C 56 41 4B 10023 	.ascii "SALVAKANTERO"
        41 4E 54 45 52 4F
   9B05 00                10024 	.db 0x00
   9B06                   10025 ___str_42:
   9B06 4D 55 53 49 43 40 10026 	.ascii "MUSIC@=@FX"
        3D 40 46 58
   9B10 00                10027 	.db 0x00
   9B11                   10028 ___str_43:
   9B11 4D 43 4B 4C 41 49 10029 	.ascii "MCKLAIN"
        4E
   9B18 00                10030 	.db 0x00
   9B19                   10031 ___str_44:
   9B19 42 45 54 41 40 54 10032 	.ascii "BETA@TESTING"
        45 53 54 49 4E 47
   9B25 00                10033 	.db 0x00
   9B26                   10034 ___str_45:
   9B26 42 4C 41 43 4B 4D 10035 	.ascii "BLACKMORES"
        4F 52 45 53
   9B30 00                10036 	.db 0x00
   9B31                   10037 ___str_46:
   9B31 50 4C 41 59 40 4F 10038 	.ascii "PLAY@ON@RETRO@2020"
        4E 40 52 45 54 52
        4F 40 32 30 32 30
   9B43 00                10039 	.db 0x00
                          10040 ;src/main.c:2244: void PrintObjInfo() {
                          10041 ;	---------------------------------
                          10042 ; Function PrintObjInfo
                          10043 ; ---------------------------------
   9B44                   10044 _PrintObjInfo::
                          10045 ;src/main.c:2247: ClearScreen();
   9B44 CD B6 61      [17]10046 	call	_ClearScreen
                          10047 ;src/main.c:2248: PrintText("INGREDIENT@VALUES", 13, 0, 0);
   9B47 21 00 00      [10]10048 	ld	hl, #0x0000
   9B4A E5            [11]10049 	push	hl
   9B4B 3E 0D         [ 7]10050 	ld	a, #0x0d
   9B4D F5            [11]10051 	push	af
   9B4E 33            [ 6]10052 	inc	sp
   9B4F 21 AA 9C      [10]10053 	ld	hl, #___str_47
   9B52 E5            [11]10054 	push	hl
   9B53 CD 10 63      [17]10055 	call	_PrintText
   9B56 F1            [10]10056 	pop	af
                          10057 ;src/main.c:2250: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 3, 12), cpct_px2byteM0(4, 4), 37, 188);
   9B57 33            [ 6]10058 	inc	sp
   9B58 21 04 04      [10]10059 	ld	hl,#0x0404
   9B5B E3            [19]10060 	ex	(sp),hl
   9B5C CD B3 5C      [17]10061 	call	_cpct_px2byteM0
   9B5F 26 00         [ 7]10062 	ld	h, #0x00
   9B61 01 25 BC      [10]10063 	ld	bc, #0xbc25
   9B64 C5            [11]10064 	push	bc
   9B65 E5            [11]10065 	push	hl
   9B66 21 53 E0      [10]10066 	ld	hl, #0xe053
   9B69 E5            [11]10067 	push	hl
   9B6A CD ED 5C      [17]10068 	call	_cpct_drawSolidBox
                          10069 ;src/main.c:2251: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 40, 12), cpct_px2byteM0(4, 4), 35, 188);	
   9B6D 21 04 04      [10]10070 	ld	hl, #0x0404
   9B70 E5            [11]10071 	push	hl
   9B71 CD B3 5C      [17]10072 	call	_cpct_px2byteM0
   9B74 26 00         [ 7]10073 	ld	h, #0x00
   9B76 01 23 BC      [10]10074 	ld	bc, #0xbc23
   9B79 C5            [11]10075 	push	bc
   9B7A E5            [11]10076 	push	hl
   9B7B 21 78 E0      [10]10077 	ld	hl, #0xe078
   9B7E E5            [11]10078 	push	hl
   9B7F CD ED 5C      [17]10079 	call	_cpct_drawSolidBox
                          10080 ;src/main.c:2252: PrintFrame(3,12,72,194);
   9B82 21 48 C2      [10]10081 	ld	hl, #0xc248
   9B85 E5            [11]10082 	push	hl
   9B86 21 03 0C      [10]10083 	ld	hl, #0x0c03
   9B89 E5            [11]10084 	push	hl
   9B8A CD B3 63      [17]10085 	call	_PrintFrame
   9B8D F1            [10]10086 	pop	af
   9B8E F1            [10]10087 	pop	af
                          10088 ;src/main.c:2254: for (obj=4; obj<16; obj++) {
   9B8F 01 04 19      [10]10089 	ld	bc,#0x1904
   9B92                   10090 00102$:
                          10091 ;src/main.c:2255: PrintObject(obj, 7, yPos);
   9B92 C5            [11]10092 	push	bc
   9B93 C5            [11]10093 	push	bc
   9B94 33            [ 6]10094 	inc	sp
   9B95 06 07         [ 7]10095 	ld	b, #0x07
   9B97 C5            [11]10096 	push	bc
   9B98 CD BD 6B      [17]10097 	call	_PrintObject
   9B9B F1            [10]10098 	pop	af
   9B9C 33            [ 6]10099 	inc	sp
   9B9D C1            [10]10100 	pop	bc
                          10101 ;src/main.c:2256: PrintNumber(obj-3, 2, 62, yPos, 0); PrintText("<", 68, yPos, 0);
   9B9E 59            [ 4]10102 	ld	e, c
   9B9F 16 00         [ 7]10103 	ld	d, #0x00
   9BA1 7B            [ 4]10104 	ld	a, e
   9BA2 C6 FD         [ 7]10105 	add	a, #0xfd
   9BA4 5F            [ 4]10106 	ld	e, a
   9BA5 7A            [ 4]10107 	ld	a, d
   9BA6 CE FF         [ 7]10108 	adc	a, #0xff
   9BA8 57            [ 4]10109 	ld	d, a
   9BA9 C5            [11]10110 	push	bc
   9BAA AF            [ 4]10111 	xor	a, a
   9BAB F5            [11]10112 	push	af
   9BAC 33            [ 6]10113 	inc	sp
   9BAD C5            [11]10114 	push	bc
   9BAE 33            [ 6]10115 	inc	sp
   9BAF 21 02 3E      [10]10116 	ld	hl, #0x3e02
   9BB2 E5            [11]10117 	push	hl
   9BB3 D5            [11]10118 	push	de
   9BB4 CD 41 62      [17]10119 	call	_PrintNumber
   9BB7 21 06 00      [10]10120 	ld	hl, #6
   9BBA 39            [11]10121 	add	hl, sp
   9BBB F9            [ 6]10122 	ld	sp, hl
   9BBC C1            [10]10123 	pop	bc
   9BBD C5            [11]10124 	push	bc
   9BBE AF            [ 4]10125 	xor	a, a
   9BBF F5            [11]10126 	push	af
   9BC0 33            [ 6]10127 	inc	sp
   9BC1 C5            [11]10128 	push	bc
   9BC2 33            [ 6]10129 	inc	sp
   9BC3 3E 44         [ 7]10130 	ld	a, #0x44
   9BC5 F5            [11]10131 	push	af
   9BC6 33            [ 6]10132 	inc	sp
   9BC7 21 BC 9C      [10]10133 	ld	hl, #___str_48
   9BCA E5            [11]10134 	push	hl
   9BCB CD 10 63      [17]10135 	call	_PrintText
   9BCE F1            [10]10136 	pop	af
   9BCF F1            [10]10137 	pop	af
   9BD0 33            [ 6]10138 	inc	sp
   9BD1 C1            [10]10139 	pop	bc
                          10140 ;src/main.c:2257: yPos += 14;
   9BD2 78            [ 4]10141 	ld	a, b
   9BD3 C6 0E         [ 7]10142 	add	a, #0x0e
   9BD5 47            [ 4]10143 	ld	b, a
                          10144 ;src/main.c:2254: for (obj=4; obj<16; obj++) {
   9BD6 0C            [ 4]10145 	inc	c
   9BD7 79            [ 4]10146 	ld	a, c
   9BD8 D6 10         [ 7]10147 	sub	a, #0x10
   9BDA 38 B6         [12]10148 	jr	C,00102$
                          10149 ;src/main.c:2260: PrintText("TOAD@SNOT", 14, 25, 0);
   9BDC 21 19 00      [10]10150 	ld	hl, #0x0019
   9BDF E5            [11]10151 	push	hl
   9BE0 3E 0E         [ 7]10152 	ld	a, #0x0e
   9BE2 F5            [11]10153 	push	af
   9BE3 33            [ 6]10154 	inc	sp
   9BE4 21 BE 9C      [10]10155 	ld	hl, #___str_49
   9BE7 E5            [11]10156 	push	hl
   9BE8 CD 10 63      [17]10157 	call	_PrintText
   9BEB F1            [10]10158 	pop	af
                          10159 ;src/main.c:2261: PrintText("DIAMOND@DUST", 14, 39, 0);
   9BEC 33            [ 6]10160 	inc	sp
   9BED 21 27 00      [10]10161 	ld	hl,#0x0027
   9BF0 E3            [19]10162 	ex	(sp),hl
   9BF1 3E 0E         [ 7]10163 	ld	a, #0x0e
   9BF3 F5            [11]10164 	push	af
   9BF4 33            [ 6]10165 	inc	sp
   9BF5 21 C8 9C      [10]10166 	ld	hl, #___str_50
   9BF8 E5            [11]10167 	push	hl
   9BF9 CD 10 63      [17]10168 	call	_PrintText
   9BFC F1            [10]10169 	pop	af
                          10170 ;src/main.c:2262: PrintText("NEWT@EYE", 14, 53, 0);
   9BFD 33            [ 6]10171 	inc	sp
   9BFE 21 35 00      [10]10172 	ld	hl,#0x0035
   9C01 E3            [19]10173 	ex	(sp),hl
   9C02 3E 0E         [ 7]10174 	ld	a, #0x0e
   9C04 F5            [11]10175 	push	af
   9C05 33            [ 6]10176 	inc	sp
   9C06 21 D5 9C      [10]10177 	ld	hl, #___str_51
   9C09 E5            [11]10178 	push	hl
   9C0A CD 10 63      [17]10179 	call	_PrintText
   9C0D F1            [10]10180 	pop	af
                          10181 ;src/main.c:2263: PrintText("MAMMOTH@POOP", 14, 67, 0);
   9C0E 33            [ 6]10182 	inc	sp
   9C0F 21 43 00      [10]10183 	ld	hl,#0x0043
   9C12 E3            [19]10184 	ex	(sp),hl
   9C13 3E 0E         [ 7]10185 	ld	a, #0x0e
   9C15 F5            [11]10186 	push	af
   9C16 33            [ 6]10187 	inc	sp
   9C17 21 DE 9C      [10]10188 	ld	hl, #___str_52
   9C1A E5            [11]10189 	push	hl
   9C1B CD 10 63      [17]10190 	call	_PrintText
   9C1E F1            [10]10191 	pop	af
                          10192 ;src/main.c:2264: PrintText("KRAKEN@INK", 14, 81, 0); 
   9C1F 33            [ 6]10193 	inc	sp
   9C20 21 51 00      [10]10194 	ld	hl,#0x0051
   9C23 E3            [19]10195 	ex	(sp),hl
   9C24 3E 0E         [ 7]10196 	ld	a, #0x0e
   9C26 F5            [11]10197 	push	af
   9C27 33            [ 6]10198 	inc	sp
   9C28 21 EB 9C      [10]10199 	ld	hl, #___str_53
   9C2B E5            [11]10200 	push	hl
   9C2C CD 10 63      [17]10201 	call	_PrintText
   9C2F F1            [10]10202 	pop	af
                          10203 ;src/main.c:2265: PrintText("MERMAID@TEAR", 14, 95, 0);
   9C30 33            [ 6]10204 	inc	sp
   9C31 21 5F 00      [10]10205 	ld	hl,#0x005f
   9C34 E3            [19]10206 	ex	(sp),hl
   9C35 3E 0E         [ 7]10207 	ld	a, #0x0e
   9C37 F5            [11]10208 	push	af
   9C38 33            [ 6]10209 	inc	sp
   9C39 21 F6 9C      [10]10210 	ld	hl, #___str_54
   9C3C E5            [11]10211 	push	hl
   9C3D CD 10 63      [17]10212 	call	_PrintText
   9C40 F1            [10]10213 	pop	af
                          10214 ;src/main.c:2266: PrintText("MARTIAN@MUSHROOM", 14, 109, 0);
   9C41 33            [ 6]10215 	inc	sp
   9C42 21 6D 00      [10]10216 	ld	hl,#0x006d
   9C45 E3            [19]10217 	ex	(sp),hl
   9C46 3E 0E         [ 7]10218 	ld	a, #0x0e
   9C48 F5            [11]10219 	push	af
   9C49 33            [ 6]10220 	inc	sp
   9C4A 21 03 9D      [10]10221 	ld	hl, #___str_55
   9C4D E5            [11]10222 	push	hl
   9C4E CD 10 63      [17]10223 	call	_PrintText
   9C51 F1            [10]10224 	pop	af
                          10225 ;src/main.c:2267: PrintText("DRAGON@BLOOD", 14, 123, 0);
   9C52 33            [ 6]10226 	inc	sp
   9C53 21 7B 00      [10]10227 	ld	hl,#0x007b
   9C56 E3            [19]10228 	ex	(sp),hl
   9C57 3E 0E         [ 7]10229 	ld	a, #0x0e
   9C59 F5            [11]10230 	push	af
   9C5A 33            [ 6]10231 	inc	sp
   9C5B 21 14 9D      [10]10232 	ld	hl, #___str_56
   9C5E E5            [11]10233 	push	hl
   9C5F CD 10 63      [17]10234 	call	_PrintText
   9C62 F1            [10]10235 	pop	af
                          10236 ;src/main.c:2268: PrintText("DODO@EGG", 14, 137, 0); 
   9C63 33            [ 6]10237 	inc	sp
   9C64 21 89 00      [10]10238 	ld	hl,#0x0089
   9C67 E3            [19]10239 	ex	(sp),hl
   9C68 3E 0E         [ 7]10240 	ld	a, #0x0e
   9C6A F5            [11]10241 	push	af
   9C6B 33            [ 6]10242 	inc	sp
   9C6C 21 21 9D      [10]10243 	ld	hl, #___str_57
   9C6F E5            [11]10244 	push	hl
   9C70 CD 10 63      [17]10245 	call	_PrintText
   9C73 F1            [10]10246 	pop	af
                          10247 ;src/main.c:2269: PrintText("UNICORN@BLOOD", 14, 151, 0);
   9C74 33            [ 6]10248 	inc	sp
   9C75 21 97 00      [10]10249 	ld	hl,#0x0097
   9C78 E3            [19]10250 	ex	(sp),hl
   9C79 3E 0E         [ 7]10251 	ld	a, #0x0e
   9C7B F5            [11]10252 	push	af
   9C7C 33            [ 6]10253 	inc	sp
   9C7D 21 2A 9D      [10]10254 	ld	hl, #___str_58
   9C80 E5            [11]10255 	push	hl
   9C81 CD 10 63      [17]10256 	call	_PrintText
   9C84 F1            [10]10257 	pop	af
                          10258 ;src/main.c:2270: PrintText("TROLL@FAT", 14, 165, 0); 
   9C85 33            [ 6]10259 	inc	sp
   9C86 21 A5 00      [10]10260 	ld	hl,#0x00a5
   9C89 E3            [19]10261 	ex	(sp),hl
   9C8A 3E 0E         [ 7]10262 	ld	a, #0x0e
   9C8C F5            [11]10263 	push	af
   9C8D 33            [ 6]10264 	inc	sp
   9C8E 21 38 9D      [10]10265 	ld	hl, #___str_59
   9C91 E5            [11]10266 	push	hl
   9C92 CD 10 63      [17]10267 	call	_PrintText
   9C95 F1            [10]10268 	pop	af
                          10269 ;src/main.c:2271: PrintText("MORDOR@LAVA", 14, 179, 0);
   9C96 33            [ 6]10270 	inc	sp
   9C97 21 B3 00      [10]10271 	ld	hl,#0x00b3
   9C9A E3            [19]10272 	ex	(sp),hl
   9C9B 3E 0E         [ 7]10273 	ld	a, #0x0e
   9C9D F5            [11]10274 	push	af
   9C9E 33            [ 6]10275 	inc	sp
   9C9F 21 42 9D      [10]10276 	ld	hl, #___str_60
   9CA2 E5            [11]10277 	push	hl
   9CA3 CD 10 63      [17]10278 	call	_PrintText
   9CA6 F1            [10]10279 	pop	af
   9CA7 F1            [10]10280 	pop	af
   9CA8 33            [ 6]10281 	inc	sp
   9CA9 C9            [10]10282 	ret
   9CAA                   10283 ___str_47:
   9CAA 49 4E 47 52 45 44 10284 	.ascii "INGREDIENT@VALUES"
        49 45 4E 54 40 56
        41 4C 55 45 53
   9CBB 00                10285 	.db 0x00
   9CBC                   10286 ___str_48:
   9CBC 3C                10287 	.ascii "<"
   9CBD 00                10288 	.db 0x00
   9CBE                   10289 ___str_49:
   9CBE 54 4F 41 44 40 53 10290 	.ascii "TOAD@SNOT"
        4E 4F 54
   9CC7 00                10291 	.db 0x00
   9CC8                   10292 ___str_50:
   9CC8 44 49 41 4D 4F 4E 10293 	.ascii "DIAMOND@DUST"
        44 40 44 55 53 54
   9CD4 00                10294 	.db 0x00
   9CD5                   10295 ___str_51:
   9CD5 4E 45 57 54 40 45 10296 	.ascii "NEWT@EYE"
        59 45
   9CDD 00                10297 	.db 0x00
   9CDE                   10298 ___str_52:
   9CDE 4D 41 4D 4D 4F 54 10299 	.ascii "MAMMOTH@POOP"
        48 40 50 4F 4F 50
   9CEA 00                10300 	.db 0x00
   9CEB                   10301 ___str_53:
   9CEB 4B 52 41 4B 45 4E 10302 	.ascii "KRAKEN@INK"
        40 49 4E 4B
   9CF5 00                10303 	.db 0x00
   9CF6                   10304 ___str_54:
   9CF6 4D 45 52 4D 41 49 10305 	.ascii "MERMAID@TEAR"
        44 40 54 45 41 52
   9D02 00                10306 	.db 0x00
   9D03                   10307 ___str_55:
   9D03 4D 41 52 54 49 41 10308 	.ascii "MARTIAN@MUSHROOM"
        4E 40 4D 55 53 48
        52 4F 4F 4D
   9D13 00                10309 	.db 0x00
   9D14                   10310 ___str_56:
   9D14 44 52 41 47 4F 4E 10311 	.ascii "DRAGON@BLOOD"
        40 42 4C 4F 4F 44
   9D20 00                10312 	.db 0x00
   9D21                   10313 ___str_57:
   9D21 44 4F 44 4F 40 45 10314 	.ascii "DODO@EGG"
        47 47
   9D29 00                10315 	.db 0x00
   9D2A                   10316 ___str_58:
   9D2A 55 4E 49 43 4F 52 10317 	.ascii "UNICORN@BLOOD"
        4E 40 42 4C 4F 4F
        44
   9D37 00                10318 	.db 0x00
   9D38                   10319 ___str_59:
   9D38 54 52 4F 4C 4C 40 10320 	.ascii "TROLL@FAT"
        46 41 54
   9D41 00                10321 	.db 0x00
   9D42                   10322 ___str_60:
   9D42 4D 4F 52 44 4F 52 10323 	.ascii "MORDOR@LAVA"
        40 4C 41 56 41
   9D4D 00                10324 	.db 0x00
                          10325 ;src/main.c:2274: void StartMenu() {
                          10326 ;	---------------------------------
                          10327 ; Function StartMenu
                          10328 ; ---------------------------------
   9D4E                   10329 _StartMenu::
   9D4E DD E5         [15]10330 	push	ix
   9D50 DD 21 00 00   [14]10331 	ld	ix,#0
   9D54 DD 39         [15]10332 	add	ix,sp
   9D56 F5            [11]10333 	push	af
                          10334 ;src/main.c:2275: u8 randSeed = 254;
   9D57 DD 36 FE FE   [19]10335 	ld	-2 (ix), #0xfe
                          10336 ;src/main.c:2276: u8 page = 0;
   9D5B DD 36 FF 00   [19]10337 	ld	-1 (ix), #0x00
                          10338 ;src/main.c:2277: cpct_akp_musicInit(g_menu); // initialize music. Main theme
   9D5F 21 07 0E      [10]10339 	ld	hl, #_g_menu
   9D62 E5            [11]10340 	push	hl
   9D63 CD 48 59      [17]10341 	call	_cpct_akp_musicInit
   9D66 F1            [10]10342 	pop	af
                          10343 ;src/main.c:2279: while(1) {
   9D67                   10344 00122$:
                          10345 ;src/main.c:2282: if (++randSeed == 255) {					
   9D67 DD 34 FE      [23]10346 	inc	-2 (ix)
   9D6A DD 7E FE      [19]10347 	ld	a, -2 (ix)
   9D6D 3C            [ 4]10348 	inc	a
   9D6E 20 27         [12]10349 	jr	NZ,00109$
                          10350 ;src/main.c:2283: if (page == 0) 		PrintStartMenu();	// page 1; menu
   9D70 DD 7E FF      [19]10351 	ld	a, -1 (ix)
   9D73 B7            [ 4]10352 	or	a, a
   9D74 20 05         [12]10353 	jr	NZ,00104$
   9D76 CD 63 99      [17]10354 	call	_PrintStartMenu
   9D79 18 0A         [12]10355 	jr	00105$
   9D7B                   10356 00104$:
                          10357 ;src/main.c:2284: else if(page == 4)	PrintObjInfo();		// page 2; ingredients info
   9D7B DD 7E FF      [19]10358 	ld	a, -1 (ix)
   9D7E D6 04         [ 7]10359 	sub	a, #0x04
   9D80 20 03         [12]10360 	jr	NZ,00105$
   9D82 CD 44 9B      [17]10361 	call	_PrintObjInfo
   9D85                   10362 00105$:
                          10363 ;src/main.c:2286: randSeed = 0;
   9D85 DD 36 FE 00   [19]10364 	ld	-2 (ix), #0x00
                          10365 ;src/main.c:2287: if (++page == 8) //12
   9D89 DD 34 FF      [23]10366 	inc	-1 (ix)
   9D8C DD 7E FF      [19]10367 	ld	a, -1 (ix)
   9D8F D6 08         [ 7]10368 	sub	a, #0x08
   9D91 20 04         [12]10369 	jr	NZ,00109$
                          10370 ;src/main.c:2288: page = 0;		
   9D93 DD 36 FF 00   [19]10371 	ld	-1 (ix), #0x00
   9D97                   10372 00109$:
                          10373 ;src/main.c:2291: cpct_scanKeyboard_f();
   9D97 CD CD 51      [17]10374 	call	_cpct_scanKeyboard_f
                          10375 ;src/main.c:2292: if(cpct_isKeyPressed(Key_1)) { // 1 player
   9D9A 21 08 01      [10]10376 	ld	hl, #0x0108
   9D9D CD C1 51      [17]10377 	call	_cpct_isKeyPressed
   9DA0 7D            [ 4]10378 	ld	a, l
   9DA1 B7            [ 4]10379 	or	a, a
   9DA2 28 08         [12]10380 	jr	Z,00119$
                          10381 ;src/main.c:2293: TwoPlayers = FALSE;	
   9DA4 21 D4 5E      [10]10382 	ld	hl,#_TwoPlayers + 0
   9DA7 36 00         [10]10383 	ld	(hl), #0x00
                          10384 ;src/main.c:2294: break;
   9DA9 C3 B4 9E      [10]10385 	jp	00123$
   9DAC                   10386 00119$:
                          10387 ;src/main.c:2296: else if(cpct_isKeyPressed(Key_2)) {	// 2 players
   9DAC 21 08 02      [10]10388 	ld	hl, #0x0208
   9DAF CD C1 51      [17]10389 	call	_cpct_isKeyPressed
   9DB2 7D            [ 4]10390 	ld	a, l
   9DB3 B7            [ 4]10391 	or	a, a
   9DB4 28 08         [12]10392 	jr	Z,00116$
                          10393 ;src/main.c:2297: TwoPlayers = TRUE;
   9DB6 21 D4 5E      [10]10394 	ld	hl,#_TwoPlayers + 0
   9DB9 36 01         [10]10395 	ld	(hl), #0x01
                          10396 ;src/main.c:2298: break;
   9DBB C3 B4 9E      [10]10397 	jp	00123$
   9DBE                   10398 00116$:
                          10399 ;src/main.c:2300: else if(cpct_isKeyPressed(Key_3)){ // redefine keys
   9DBE 21 07 02      [10]10400 	ld	hl, #0x0207
   9DC1 CD C1 51      [17]10401 	call	_cpct_isKeyPressed
   9DC4 7D            [ 4]10402 	ld	a, l
   9DC5 B7            [ 4]10403 	or	a, a
   9DC6 CA 87 9E      [10]10404 	jp	Z, 00113$
                          10405 ;src/main.c:2301: Wait4Key(Key_3);
   9DC9 21 07 02      [10]10406 	ld	hl, #0x0207
   9DCC E5            [11]10407 	push	hl
   9DCD CD 6F 68      [17]10408 	call	_Wait4Key
   9DD0 F1            [10]10409 	pop	af
                          10410 ;src/main.c:2302: randSeed = 0; page = 1;
   9DD1 DD 36 FE 00   [19]10411 	ld	-2 (ix), #0x00
   9DD5 DD 36 FF 01   [19]10412 	ld	-1 (ix), #0x01
                          10413 ;src/main.c:2303: PrintStartMenu();
   9DD9 CD 63 99      [17]10414 	call	_PrintStartMenu
                          10415 ;src/main.c:2305: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 22, 110), cpct_px2byteM0(1, 1), 45, 70);
   9DDC 21 01 01      [10]10416 	ld	hl, #0x0101
   9DDF E5            [11]10417 	push	hl
   9DE0 CD B3 5C      [17]10418 	call	_cpct_px2byteM0
   9DE3 26 00         [ 7]10419 	ld	h, #0x00
   9DE5 01 2D 46      [10]10420 	ld	bc, #0x462d
   9DE8 C5            [11]10421 	push	bc
   9DE9 E5            [11]10422 	push	hl
   9DEA 21 26 F4      [10]10423 	ld	hl, #0xf426
   9DED E5            [11]10424 	push	hl
   9DEE CD ED 5C      [17]10425 	call	_cpct_drawSolidBox
                          10426 ;src/main.c:2308: ctlUp[0] = 		RedefineKey("@P1@UP");
   9DF1 21 CA 9E      [10]10427 	ld	hl, #___str_61
   9DF4 E5            [11]10428 	push	hl
   9DF5 CD 8C 68      [17]10429 	call	_RedefineKey
   9DF8 F1            [10]10430 	pop	af
   9DF9 4D            [ 4]10431 	ld	c, l
   9DFA 44            [ 4]10432 	ld	b, h
   9DFB ED 43 F4 5E   [20]10433 	ld	(_ctlUp), bc
                          10434 ;src/main.c:2309: ctlDown[0] = 	RedefineKey("P1@DOWN");
   9DFF 21 D1 9E      [10]10435 	ld	hl, #___str_62
   9E02 E5            [11]10436 	push	hl
   9E03 CD 8C 68      [17]10437 	call	_RedefineKey
   9E06 F1            [10]10438 	pop	af
   9E07 4D            [ 4]10439 	ld	c, l
   9E08 44            [ 4]10440 	ld	b, h
   9E09 ED 43 F8 5E   [20]10441 	ld	(_ctlDown), bc
                          10442 ;src/main.c:2310: ctlLeft[0] = 	RedefineKey("P1@LEFT");
   9E0D 21 D9 9E      [10]10443 	ld	hl, #___str_63
   9E10 E5            [11]10444 	push	hl
   9E11 CD 8C 68      [17]10445 	call	_RedefineKey
   9E14 F1            [10]10446 	pop	af
   9E15 4D            [ 4]10447 	ld	c, l
   9E16 44            [ 4]10448 	ld	b, h
   9E17 ED 43 FC 5E   [20]10449 	ld	(_ctlLeft), bc
                          10450 ;src/main.c:2311: ctlRight[0] = 	RedefineKey("P1@RIGHT");
   9E1B 21 E1 9E      [10]10451 	ld	hl, #___str_64
   9E1E E5            [11]10452 	push	hl
   9E1F CD 8C 68      [17]10453 	call	_RedefineKey
   9E22 F1            [10]10454 	pop	af
   9E23 4D            [ 4]10455 	ld	c, l
   9E24 44            [ 4]10456 	ld	b, h
   9E25 ED 43 00 5F   [20]10457 	ld	(_ctlRight), bc
                          10458 ;src/main.c:2313: ctlUp[1] = 		RedefineKey("@P2@UP@@");
   9E29 21 EA 9E      [10]10459 	ld	hl, #___str_65
   9E2C E5            [11]10460 	push	hl
   9E2D CD 8C 68      [17]10461 	call	_RedefineKey
   9E30 F1            [10]10462 	pop	af
   9E31 4D            [ 4]10463 	ld	c, l
   9E32 44            [ 4]10464 	ld	b, h
   9E33 ED 43 F6 5E   [20]10465 	ld	((_ctlUp + 0x0002)), bc
                          10466 ;src/main.c:2314: ctlDown[1] = 	RedefineKey("P2@DOWN");
   9E37 21 F3 9E      [10]10467 	ld	hl, #___str_66
   9E3A E5            [11]10468 	push	hl
   9E3B CD 8C 68      [17]10469 	call	_RedefineKey
   9E3E F1            [10]10470 	pop	af
   9E3F 4D            [ 4]10471 	ld	c, l
   9E40 44            [ 4]10472 	ld	b, h
   9E41 ED 43 FA 5E   [20]10473 	ld	((_ctlDown + 0x0002)), bc
                          10474 ;src/main.c:2315: ctlLeft[1] = 	RedefineKey("P2@LEFT");
   9E45 21 FB 9E      [10]10475 	ld	hl, #___str_67
   9E48 E5            [11]10476 	push	hl
   9E49 CD 8C 68      [17]10477 	call	_RedefineKey
   9E4C F1            [10]10478 	pop	af
   9E4D 4D            [ 4]10479 	ld	c, l
   9E4E 44            [ 4]10480 	ld	b, h
   9E4F ED 43 FE 5E   [20]10481 	ld	((_ctlLeft + 0x0002)), bc
                          10482 ;src/main.c:2316: ctlRight[1] = 	RedefineKey("P2@RIGHT");	
   9E53 21 03 9F      [10]10483 	ld	hl, #___str_68
   9E56 E5            [11]10484 	push	hl
   9E57 CD 8C 68      [17]10485 	call	_RedefineKey
   9E5A F1            [10]10486 	pop	af
   9E5B 4D            [ 4]10487 	ld	c, l
   9E5C 44            [ 4]10488 	ld	b, h
   9E5D ED 43 02 5F   [20]10489 	ld	((_ctlRight + 0x0002)), bc
                          10490 ;src/main.c:2318: ctlAbort = 		RedefineKey("@ABORT@@");
   9E61 21 0C 9F      [10]10491 	ld	hl, #___str_69
   9E64 E5            [11]10492 	push	hl
   9E65 CD 8C 68      [17]10493 	call	_RedefineKey
   9E68 F1            [10]10494 	pop	af
   9E69 22 04 5F      [16]10495 	ld	(_ctlAbort), hl
                          10496 ;src/main.c:2319: ctlMusic = 		RedefineKey("@MUSIC");
   9E6C 21 15 9F      [10]10497 	ld	hl, #___str_70
   9E6F E5            [11]10498 	push	hl
   9E70 CD 8C 68      [17]10499 	call	_RedefineKey
   9E73 F1            [10]10500 	pop	af
   9E74 22 06 5F      [16]10501 	ld	(_ctlMusic), hl
                          10502 ;src/main.c:2320: ctlPause =		RedefineKey("@PAUSE");		
   9E77 21 1C 9F      [10]10503 	ld	hl, #___str_71
   9E7A E5            [11]10504 	push	hl
   9E7B CD 8C 68      [17]10505 	call	_RedefineKey
   9E7E F1            [10]10506 	pop	af
   9E7F 22 08 5F      [16]10507 	ld	(_ctlPause), hl
                          10508 ;src/main.c:2321: PrintStartMenu();
   9E82 CD 63 99      [17]10509 	call	_PrintStartMenu
   9E85 18 24         [12]10510 	jr	00120$
   9E87                   10511 00113$:
                          10512 ;src/main.c:2323: else if(cpct_isKeyPressed(Key_4)) {	// turbo mode
   9E87 21 07 01      [10]10513 	ld	hl, #0x0107
   9E8A CD C1 51      [17]10514 	call	_cpct_isKeyPressed
   9E8D 7D            [ 4]10515 	ld	a, l
   9E8E B7            [ 4]10516 	or	a, a
   9E8F 28 1A         [12]10517 	jr	Z,00120$
                          10518 ;src/main.c:2324: turboMode = !turboMode;
   9E91 FD 21 EF 5E   [14]10519 	ld	iy, #_turboMode
   9E95 FD 7E 00      [19]10520 	ld	a, 0 (iy)
   9E98 D6 01         [ 7]10521 	sub	a,#0x01
   9E9A 3E 00         [ 7]10522 	ld	a, #0x00
   9E9C 17            [ 4]10523 	rla
   9E9D FD 77 00      [19]10524 	ld	0 (iy), a
                          10525 ;src/main.c:2325: randSeed = 0; page = 1;
   9EA0 DD 36 FE 00   [19]10526 	ld	-2 (ix), #0x00
   9EA4 DD 36 FF 01   [19]10527 	ld	-1 (ix), #0x01
                          10528 ;src/main.c:2326: PrintStartMenu();
   9EA8 CD 63 99      [17]10529 	call	_PrintStartMenu
   9EAB                   10530 00120$:
                          10531 ;src/main.c:2328: Pause(3);
   9EAB 21 03 00      [10]10532 	ld	hl, #0x0003
   9EAE CD 81 61      [17]10533 	call	_Pause
   9EB1 C3 67 9D      [10]10534 	jp	00122$
   9EB4                   10535 00123$:
                          10536 ;src/main.c:2330: cpct_setSeed_lcg_u8(randSeed); // set the seed
   9EB4 DD 6E FE      [19]10537 	ld	l, -2 (ix)
   9EB7 CD A4 5B      [17]10538 	call	_cpct_setSeed_lcg_u8
                          10539 ;src/main.c:2331: cpct_akp_musicInit(g_fx); // mute the music
   9EBA 21 C4 05      [10]10540 	ld	hl, #_g_fx
   9EBD E5            [11]10541 	push	hl
   9EBE CD 48 59      [17]10542 	call	_cpct_akp_musicInit
   9EC1 F1            [10]10543 	pop	af
                          10544 ;src/main.c:2332: ClearScreen();
   9EC2 CD B6 61      [17]10545 	call	_ClearScreen
   9EC5 DD F9         [10]10546 	ld	sp, ix
   9EC7 DD E1         [14]10547 	pop	ix
   9EC9 C9            [10]10548 	ret
   9ECA                   10549 ___str_61:
   9ECA 40 50 31 40 55 50 10550 	.ascii "@P1@UP"
   9ED0 00                10551 	.db 0x00
   9ED1                   10552 ___str_62:
   9ED1 50 31 40 44 4F 57 10553 	.ascii "P1@DOWN"
        4E
   9ED8 00                10554 	.db 0x00
   9ED9                   10555 ___str_63:
   9ED9 50 31 40 4C 45 46 10556 	.ascii "P1@LEFT"
        54
   9EE0 00                10557 	.db 0x00
   9EE1                   10558 ___str_64:
   9EE1 50 31 40 52 49 47 10559 	.ascii "P1@RIGHT"
        48 54
   9EE9 00                10560 	.db 0x00
   9EEA                   10561 ___str_65:
   9EEA 40 50 32 40 55 50 10562 	.ascii "@P2@UP@@"
        40 40
   9EF2 00                10563 	.db 0x00
   9EF3                   10564 ___str_66:
   9EF3 50 32 40 44 4F 57 10565 	.ascii "P2@DOWN"
        4E
   9EFA 00                10566 	.db 0x00
   9EFB                   10567 ___str_67:
   9EFB 50 32 40 4C 45 46 10568 	.ascii "P2@LEFT"
        54
   9F02 00                10569 	.db 0x00
   9F03                   10570 ___str_68:
   9F03 50 32 40 52 49 47 10571 	.ascii "P2@RIGHT"
        48 54
   9F0B 00                10572 	.db 0x00
   9F0C                   10573 ___str_69:
   9F0C 40 41 42 4F 52 54 10574 	.ascii "@ABORT@@"
        40 40
   9F14 00                10575 	.db 0x00
   9F15                   10576 ___str_70:
   9F15 40 4D 55 53 49 43 10577 	.ascii "@MUSIC"
   9F1B 00                10578 	.db 0x00
   9F1C                   10579 ___str_71:
   9F1C 40 50 41 55 53 45 10580 	.ascii "@PAUSE"
   9F22 00                10581 	.db 0x00
                          10582 ;src/main.c:2340: void InitValues() {	
                          10583 ;	---------------------------------
                          10584 ; Function InitValues
                          10585 ; ---------------------------------
   9F23                   10586 _InitValues::
                          10587 ;src/main.c:2343: ctlUp[0] = Key_W;
   9F23 21 07 08      [10]10588 	ld	hl, #0x0807
   9F26 22 F4 5E      [16]10589 	ld	(_ctlUp), hl
                          10590 ;src/main.c:2344: ctlDown[0] = Key_S;
   9F29 26 10         [ 7]10591 	ld	h, #0x10
   9F2B 22 F8 5E      [16]10592 	ld	(_ctlDown), hl
                          10593 ;src/main.c:2345: ctlLeft[0] = Key_A;
   9F2E 21 08 20      [10]10594 	ld	hl, #0x2008
   9F31 22 FC 5E      [16]10595 	ld	(_ctlLeft), hl
                          10596 ;src/main.c:2346: ctlRight[0] = Key_D;
   9F34 2E 07         [ 7]10597 	ld	l, #0x07
   9F36 22 00 5F      [16]10598 	ld	(_ctlRight), hl
                          10599 ;src/main.c:2348: ctlUp[1] = Key_F5;
   9F39 21 01 10      [10]10600 	ld	hl, #0x1001
   9F3C 22 F6 5E      [16]10601 	ld	((_ctlUp + 0x0002)), hl
                          10602 ;src/main.c:2349: ctlDown[1] = Key_F2;
   9F3F 26 40         [ 7]10603 	ld	h, #0x40
   9F41 22 FA 5E      [16]10604 	ld	((_ctlDown + 0x0002)), hl
                          10605 ;src/main.c:2350: ctlLeft[1] = Key_F1;
   9F44 26 20         [ 7]10606 	ld	h, #0x20
   9F46 22 FE 5E      [16]10607 	ld	((_ctlLeft + 0x0002)), hl
                          10608 ;src/main.c:2351: ctlRight[1] = Key_F3;
   9F49 2E 00         [ 7]10609 	ld	l, #0x00
   9F4B 22 02 5F      [16]10610 	ld	((_ctlRight + 0x0002)), hl
                          10611 ;src/main.c:2353: ctlAbort = Key_X;
   9F4E 21 07 80      [10]10612 	ld	hl, #0x8007
   9F51 22 04 5F      [16]10613 	ld	(_ctlAbort), hl
                          10614 ;src/main.c:2354: ctlMusic = Key_M;
   9F54 21 04 40      [10]10615 	ld	hl, #0x4004
   9F57 22 06 5F      [16]10616 	ld	(_ctlMusic), hl
                          10617 ;src/main.c:2355: ctlPause = Key_H;	
   9F5A 21 05 10      [10]10618 	ld	hl, #0x1005
   9F5D 22 08 5F      [16]10619 	ld	(_ctlPause), hl
                          10620 ;src/main.c:2357: turboMode = FALSE;
   9F60 21 EF 5E      [10]10621 	ld	hl,#_turboMode + 0
   9F63 36 00         [10]10622 	ld	(hl), #0x00
                          10623 ;src/main.c:2358: nTip = 0;
   9F65 21 F0 5E      [10]10624 	ld	hl,#_nTip + 0
   9F68 36 00         [10]10625 	ld	(hl), #0x00
   9F6A C9            [10]10626 	ret
                          10627 ;src/main.c:2363: void ResetData() {
                          10628 ;	---------------------------------
                          10629 ; Function ResetData
                          10630 ; ---------------------------------
   9F6B                   10631 _ResetData::
                          10632 ;src/main.c:2364: ctMainLoop = 0;
   9F6B 21 00 00      [10]10633 	ld	hl, #0x0000
   9F6E 22 F2 5E      [16]10634 	ld	(_ctMainLoop), hl
                          10635 ;src/main.c:2365: nObj[0] = -1;
   9F71 21 78 5F      [10]10636 	ld	hl, #_nObj+0
   9F74 36 FF         [10]10637 	ld	(hl), #0xff
                          10638 ;src/main.c:2366: nObj[1] = -1;
   9F76 23            [ 6]10639 	inc	hl
   9F77 36 FF         [10]10640 	ld	(hl), #0xff
                          10641 ;src/main.c:2367: sht.active = FALSE;
   9F79 21 77 5F      [10]10642 	ld	hl, #(_sht + 0x0004)
   9F7C 36 00         [10]10643 	ld	(hl), #0x00
                          10644 ;src/main.c:2368: ctWizardAnim = 0;
   9F7E 21 F1 5E      [10]10645 	ld	hl,#_ctWizardAnim + 0
   9F81 36 00         [10]10646 	ld	(hl), #0x00
                          10647 ;src/main.c:2371: spr[0].dir = D_right; 
   9F83 21 11 5F      [10]10648 	ld	hl, #(_spr + 0x0007)
   9F86 36 03         [10]10649 	ld	(hl), #0x03
                          10650 ;src/main.c:2372: spr[0].status = S_stopped;
   9F88 21 10 5F      [10]10651 	ld	hl, #(_spr + 0x0006)
   9F8B 36 04         [10]10652 	ld	(hl), #0x04
                          10653 ;src/main.c:2373: spr[0].print_minV = TRUE; // the first time must be printed on screen
   9F8D 21 17 5F      [10]10654 	ld	hl, #(_spr + 0x000d)
   9F90 36 01         [10]10655 	ld	(hl), #0x01
                          10656 ;src/main.c:2374: spr[0].power_maxV = 0;
   9F92 21 18 5F      [10]10657 	ld	hl, #(_spr + 0x000e)
   9F95 36 00         [10]10658 	ld	(hl), #0x00
                          10659 ;src/main.c:2375: ctInactivity[0] = 0;
   9F97 01 ED 5E      [10]10660 	ld	bc, #_ctInactivity+0
   9F9A AF            [ 4]10661 	xor	a, a
   9F9B 02            [ 7]10662 	ld	(bc), a
                          10663 ;src/main.c:2377: spr[1].dir = D_left; 
   9F9C 21 20 5F      [10]10664 	ld	hl, #(_spr + 0x0016)
   9F9F 36 02         [10]10665 	ld	(hl), #0x02
                          10666 ;src/main.c:2378: spr[1].status = S_stopped;	
   9FA1 21 1F 5F      [10]10667 	ld	hl, #(_spr + 0x0015)
   9FA4 36 04         [10]10668 	ld	(hl), #0x04
                          10669 ;src/main.c:2379: spr[1].print_minV = TRUE; // the first time must be printed on screen
   9FA6 21 26 5F      [10]10670 	ld	hl, #(_spr + 0x001c)
   9FA9 36 01         [10]10671 	ld	(hl), #0x01
                          10672 ;src/main.c:2380: spr[1].power_maxV = 0;
   9FAB 21 27 5F      [10]10673 	ld	hl, #(_spr + 0x001d)
   9FAE 36 00         [10]10674 	ld	(hl), #0x00
                          10675 ;src/main.c:2381: ctInactivity[1] = 0;
   9FB0 03            [ 6]10676 	inc	bc
   9FB1 AF            [ 4]10677 	xor	a, a
   9FB2 02            [ 7]10678 	ld	(bc), a
                          10679 ;src/main.c:2383: SetEnemies();
   9FB3 CD 1E 8E      [17]10680 	call	_SetEnemies
                          10681 ;src/main.c:2384: PrintMap();
   9FB6 CD 2B 62      [17]10682 	call	_PrintMap
                          10683 ;src/main.c:2385: RefreshScoreboard();
   9FB9 CD 4D 6A      [17]10684 	call	_RefreshScoreboard
                          10685 ;src/main.c:2386: DeleteObjectInStore();
   9FBC CD F1 6C      [17]10686 	call	_DeleteObjectInStore
                          10687 ;src/main.c:2389: if (nMap != lastNMap) {
   9FBF 3A D0 5E      [13]10688 	ld	a,(#_nMap + 0)
   9FC2 FD 21 D1 5E   [14]10689 	ld	iy, #_lastNMap
   9FC6 FD 96 00      [19]10690 	sub	a, 0 (iy)
   9FC9 C8            [11]10691 	ret	Z
                          10692 ;src/main.c:2390: if (!TwoPlayers) {
   9FCA 3A D4 5E      [13]10693 	ld	a,(#_TwoPlayers + 0)
   9FCD B7            [ 4]10694 	or	a, a
   9FCE 20 1C         [12]10695 	jr	NZ,00102$
                          10696 ;src/main.c:2391: PrintKey();
   9FD0 CD 28 74      [17]10697 	call	_PrintKey
                          10698 ;src/main.c:2393: playerKey[0] = 0;
   9FD3 21 E4 5E      [10]10699 	ld	hl, #_playerKey
   9FD6 36 00         [10]10700 	ld	(hl), #0x00
                          10701 ;src/main.c:2394: playerKey[1] = 0;
   9FD8 21 E5 5E      [10]10702 	ld	hl, #(_playerKey + 0x0001)
   9FDB 36 00         [10]10703 	ld	(hl), #0x00
                          10704 ;src/main.c:2395: playerKey[2] = 0;
   9FDD 21 E6 5E      [10]10705 	ld	hl, #(_playerKey + 0x0002)
   9FE0 36 00         [10]10706 	ld	(hl), #0x00
                          10707 ;src/main.c:2396: playerKey[3] = 0;
   9FE2 21 E7 5E      [10]10708 	ld	hl, #(_playerKey + 0x0003)
   9FE5 36 00         [10]10709 	ld	(hl), #0x00
                          10710 ;src/main.c:2397: playerKey[4] = 0;
   9FE7 21 E8 5E      [10]10711 	ld	hl, #(_playerKey + 0x0004)
   9FEA 36 00         [10]10712 	ld	(hl), #0x00
   9FEC                   10713 00102$:
                          10714 ;src/main.c:2399: PrintLevelInfo();	
   9FEC CD 2A 66      [17]10715 	call	_PrintLevelInfo
                          10716 ;src/main.c:2400: PrintMap();	
   9FEF CD 2B 62      [17]10717 	call	_PrintMap
                          10718 ;src/main.c:2401: lastNMap = nMap;
   9FF2 3A D0 5E      [13]10719 	ld	a,(#_nMap + 0)
   9FF5 32 D1 5E      [13]10720 	ld	(#_lastNMap + 0),a
   9FF8 C9            [10]10721 	ret
                          10722 ;src/main.c:2407: void InitGame() {
                          10723 ;	---------------------------------
                          10724 ; Function InitGame
                          10725 ; ---------------------------------
   9FF9                   10726 _InitGame::
                          10727 ;src/main.c:2408: StartMenu(); // run the start menu
   9FF9 CD 4E 9D      [17]10728 	call	_StartMenu
                          10729 ;src/main.c:2409: music = TRUE;
   9FFC 21 EB 5E      [10]10730 	ld	hl,#_music + 0
   9FFF 36 01         [10]10731 	ld	(hl), #0x01
                          10732 ;src/main.c:2410: nMap = 0; // initial map number
   A001 21 D0 5E      [10]10733 	ld	hl,#_nMap + 0
   A004 36 00         [10]10734 	ld	(hl), #0x00
                          10735 ;src/main.c:2411: lastNMap = 255;
   A006 21 D1 5E      [10]10736 	ld	hl,#_lastNMap + 0
   A009 36 FF         [10]10737 	ld	(hl), #0xff
                          10738 ;src/main.c:2414: spr[0].num = 0; // sprite number
   A00B 21 0A 5F      [10]10739 	ld	hl, #_spr
   A00E 36 00         [10]10740 	ld	(hl), #0x00
                          10741 ;src/main.c:2415: spr[0].ident = SORCERER1; // identity
   A010 21 0B 5F      [10]10742 	ld	hl, #(_spr + 0x0001)
   A013 36 00         [10]10743 	ld	(hl), #0x00
                          10744 ;src/main.c:2416: spr[0].lives_speed = 3; // lives
   A015 21 15 5F      [10]10745 	ld	hl, #(_spr + 0x000b)
   A018 36 03         [10]10746 	ld	(hl), #0x03
                          10747 ;src/main.c:2417: score[0] = 0; // score
   A01A 21 00 00      [10]10748 	ld	hl, #0x0000
   A01D 22 D5 5E      [16]10749 	ld	(_score), hl
                          10750 ;src/main.c:2418: ResetObjData(0);
   A020 2E 00         [ 7]10751 	ld	l, #0x00
   A022 CD 66 6B      [17]10752 	call	_ResetObjData
                          10753 ;src/main.c:2421: spr[1].num = 1; // sprite number
   A025 21 19 5F      [10]10754 	ld	hl, #(_spr + 0x000f)
   A028 36 01         [10]10755 	ld	(hl), #0x01
                          10756 ;src/main.c:2422: spr[1].ident = SORCERER2; // identity
   A02A 21 1A 5F      [10]10757 	ld	hl, #(_spr + 0x0010)
   A02D 36 01         [10]10758 	ld	(hl), #0x01
                          10759 ;src/main.c:2423: spr[1].lives_speed = 3; // lives
   A02F 21 24 5F      [10]10760 	ld	hl, #(_spr + 0x001a)
   A032 36 03         [10]10761 	ld	(hl), #0x03
                          10762 ;src/main.c:2424: score[1] = 0; // score
   A034 21 00 00      [10]10763 	ld	hl, #0x0000
   A037 22 D7 5E      [16]10764 	ld	((_score + 0x0002)), hl
                          10765 ;src/main.c:2425: ResetObjData(1);
   A03A 2E 01         [ 7]10766 	ld	l, #0x01
   A03C CD 66 6B      [17]10767 	call	_ResetObjData
                          10768 ;src/main.c:2428: spr[6].num = 6; // sprite number
   A03F 21 64 5F      [10]10769 	ld	hl, #(_spr + 0x005a)
   A042 36 06         [10]10770 	ld	(hl), #0x06
                          10771 ;src/main.c:2429: spr[6].ident = WIZARD; // identity
   A044 21 65 5F      [10]10772 	ld	hl, #(_spr + 0x005b)
   A047 36 07         [10]10773 	ld	(hl), #0x07
                          10774 ;src/main.c:2431: InitScoreboard();		
   A049 CD E2 68      [17]10775 	call	_InitScoreboard
                          10776 ;src/main.c:2432: ResetData();
   A04C C3 6B 9F      [10]10777 	jp  _ResetData
                          10778 ;src/main.c:2437: void GameOver(u8 player) {
                          10779 ;	---------------------------------
                          10780 ; Function GameOver
                          10781 ; ---------------------------------
   A04F                   10782 _GameOver::
   A04F DD E5         [15]10783 	push	ix
   A051 DD 21 00 00   [14]10784 	ld	ix,#0
   A055 DD 39         [15]10785 	add	ix,sp
   A057 F5            [11]10786 	push	af
                          10787 ;src/main.c:2439: if (spr[player].lives_speed > 1 && player != 2) {
   A058 01 0A 5F      [10]10788 	ld	bc, #_spr+0
   A05B DD 5E 04      [19]10789 	ld	e,4 (ix)
   A05E 16 00         [ 7]10790 	ld	d,#0x00
   A060 6B            [ 4]10791 	ld	l, e
   A061 62            [ 4]10792 	ld	h, d
   A062 29            [11]10793 	add	hl, hl
   A063 19            [11]10794 	add	hl, de
   A064 29            [11]10795 	add	hl, hl
   A065 19            [11]10796 	add	hl, de
   A066 29            [11]10797 	add	hl, hl
   A067 19            [11]10798 	add	hl, de
   A068 09            [11]10799 	add	hl,bc
   A069 01 0B 00      [10]10800 	ld	bc,#0x000b
   A06C 09            [11]10801 	add	hl,bc
   A06D E3            [19]10802 	ex	(sp), hl
   A06E E1            [10]10803 	pop	hl
   A06F E5            [11]10804 	push	hl
   A070 4E            [ 7]10805 	ld	c, (hl)
   A071 3E 01         [ 7]10806 	ld	a, #0x01
   A073 91            [ 4]10807 	sub	a, c
   A074 30 11         [12]10808 	jr	NC,00113$
   A076 DD 7E 04      [19]10809 	ld	a, 4 (ix)
   A079 D6 02         [ 7]10810 	sub	a, #0x02
   A07B 28 0A         [12]10811 	jr	Z,00113$
                          10812 ;src/main.c:2440: spr[player].lives_speed--;
   A07D 0D            [ 4]10813 	dec	c
   A07E E1            [10]10814 	pop	hl
   A07F E5            [11]10815 	push	hl
   A080 71            [ 7]10816 	ld	(hl), c
                          10817 ;src/main.c:2441: ResetData();
   A081 CD 6B 9F      [17]10818 	call	_ResetData
   A084 C3 60 A1      [10]10819 	jp	00116$
   A087                   10820 00113$:
                          10821 ;src/main.c:2444: cpct_akp_musicInit(g_end); // game over music
   A087 21 2C 03      [10]10822 	ld	hl, #_g_end
   A08A E5            [11]10823 	push	hl
   A08B CD 48 59      [17]10824 	call	_cpct_akp_musicInit
   A08E F1            [10]10825 	pop	af
                          10826 ;src/main.c:2446: spr[player].lives_speed = 0;
   A08F E1            [10]10827 	pop	hl
   A090 E5            [11]10828 	push	hl
   A091 36 00         [10]10829 	ld	(hl), #0x00
                          10830 ;src/main.c:2447: RefreshScoreboard();
   A093 CD 4D 6A      [17]10831 	call	_RefreshScoreboard
                          10832 ;src/main.c:2449: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START,  6, 80), cpct_px2byteM0(4, 4), 34, 60);
   A096 21 04 04      [10]10833 	ld	hl, #0x0404
   A099 E5            [11]10834 	push	hl
   A09A CD B3 5C      [17]10835 	call	_cpct_px2byteM0
   A09D 26 00         [ 7]10836 	ld	h, #0x00
   A09F 01 22 3C      [10]10837 	ld	bc, #0x3c22
   A0A2 C5            [11]10838 	push	bc
   A0A3 E5            [11]10839 	push	hl
   A0A4 21 26 C3      [10]10840 	ld	hl, #0xc326
   A0A7 E5            [11]10841 	push	hl
   A0A8 CD ED 5C      [17]10842 	call	_cpct_drawSolidBox
                          10843 ;src/main.c:2450: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 40, 80), cpct_px2byteM0(4, 4), 34, 60);
   A0AB 21 04 04      [10]10844 	ld	hl, #0x0404
   A0AE E5            [11]10845 	push	hl
   A0AF CD B3 5C      [17]10846 	call	_cpct_px2byteM0
   A0B2 26 00         [ 7]10847 	ld	h, #0x00
   A0B4 01 22 3C      [10]10848 	ld	bc, #0x3c22
   A0B7 C5            [11]10849 	push	bc
   A0B8 E5            [11]10850 	push	hl
   A0B9 21 48 C3      [10]10851 	ld	hl, #0xc348
   A0BC E5            [11]10852 	push	hl
   A0BD CD ED 5C      [17]10853 	call	_cpct_drawSolidBox
                          10854 ;src/main.c:2451: PrintFrame(6,80,71,134);
   A0C0 21 47 86      [10]10855 	ld	hl, #0x8647
   A0C3 E5            [11]10856 	push	hl
   A0C4 21 06 50      [10]10857 	ld	hl, #0x5006
   A0C7 E5            [11]10858 	push	hl
   A0C8 CD B3 63      [17]10859 	call	_PrintFrame
   A0CB F1            [10]10860 	pop	af
   A0CC F1            [10]10861 	pop	af
                          10862 ;src/main.c:2452: if (TwoPlayers) {
   A0CD 3A D4 5E      [13]10863 	ld	a,(#_TwoPlayers + 0)
   A0D0 B7            [ 4]10864 	or	a, a
   A0D1 28 6B         [12]10865 	jr	Z,00107$
                          10866 ;src/main.c:2453: PrintText("G@A@M@E@@O@V@E@R", 16, 91, 0);
   A0D3 21 5B 00      [10]10867 	ld	hl, #0x005b
   A0D6 E5            [11]10868 	push	hl
   A0D7 3E 10         [ 7]10869 	ld	a, #0x10
   A0D9 F5            [11]10870 	push	af
   A0DA 33            [ 6]10871 	inc	sp
   A0DB 21 65 A1      [10]10872 	ld	hl, #___str_72
   A0DE E5            [11]10873 	push	hl
   A0DF CD 10 63      [17]10874 	call	_PrintText
   A0E2 F1            [10]10875 	pop	af
   A0E3 F1            [10]10876 	pop	af
   A0E4 33            [ 6]10877 	inc	sp
                          10878 ;src/main.c:2454: if (player == 0) PrintText("PLAYER@2@WINS>", 19, 106, 0);
   A0E5 DD 7E 04      [19]10879 	ld	a, 4 (ix)
   A0E8 B7            [ 4]10880 	or	a, a
   A0E9 20 14         [12]10881 	jr	NZ,00104$
   A0EB 21 6A 00      [10]10882 	ld	hl, #0x006a
   A0EE E5            [11]10883 	push	hl
   A0EF 3E 13         [ 7]10884 	ld	a, #0x13
   A0F1 F5            [11]10885 	push	af
   A0F2 33            [ 6]10886 	inc	sp
   A0F3 21 76 A1      [10]10887 	ld	hl, #___str_73
   A0F6 E5            [11]10888 	push	hl
   A0F7 CD 10 63      [17]10889 	call	_PrintText
   A0FA F1            [10]10890 	pop	af
   A0FB F1            [10]10891 	pop	af
   A0FC 33            [ 6]10892 	inc	sp
   A0FD 18 18         [12]10893 	jr	00105$
   A0FF                   10894 00104$:
                          10895 ;src/main.c:2455: else if (player == 1) PrintText("PLAYER@1@WINS>", 19, 106, 0);
   A0FF DD 7E 04      [19]10896 	ld	a, 4 (ix)
   A102 3D            [ 4]10897 	dec	a
   A103 20 12         [12]10898 	jr	NZ,00105$
   A105 21 6A 00      [10]10899 	ld	hl, #0x006a
   A108 E5            [11]10900 	push	hl
   A109 3E 13         [ 7]10901 	ld	a, #0x13
   A10B F5            [11]10902 	push	af
   A10C 33            [ 6]10903 	inc	sp
   A10D 21 85 A1      [10]10904 	ld	hl, #___str_74
   A110 E5            [11]10905 	push	hl
   A111 CD 10 63      [17]10906 	call	_PrintText
   A114 F1            [10]10907 	pop	af
   A115 F1            [10]10908 	pop	af
   A116 33            [ 6]10909 	inc	sp
   A117                   10910 00105$:
                          10911 ;src/main.c:2456: PrintText("HIGH@SCORE:", 16, 122, 0);
   A117 21 7A 00      [10]10912 	ld	hl, #0x007a
   A11A E5            [11]10913 	push	hl
   A11B 3E 10         [ 7]10914 	ld	a, #0x10
   A11D F5            [11]10915 	push	af
   A11E 33            [ 6]10916 	inc	sp
   A11F 21 94 A1      [10]10917 	ld	hl, #___str_75
   A122 E5            [11]10918 	push	hl
   A123 CD 10 63      [17]10919 	call	_PrintText
   A126 F1            [10]10920 	pop	af
                          10921 ;src/main.c:2457: PrintNumber(highScore, 4, 52, 122, 0);			
   A127 33            [ 6]10922 	inc	sp
   A128 21 7A 00      [10]10923 	ld	hl,#0x007a
   A12B E3            [19]10924 	ex	(sp),hl
   A12C 21 04 34      [10]10925 	ld	hl, #0x3404
   A12F E5            [11]10926 	push	hl
   A130 2A D9 5E      [16]10927 	ld	hl, (_highScore)
   A133 E5            [11]10928 	push	hl
   A134 CD 41 62      [17]10929 	call	_PrintNumber
   A137 21 06 00      [10]10930 	ld	hl, #6
   A13A 39            [11]10931 	add	hl, sp
   A13B F9            [ 6]10932 	ld	sp, hl
   A13C 18 12         [12]10933 	jr	00108$
   A13E                   10934 00107$:
                          10935 ;src/main.c:2460: PrintText("G@A@M@E@@O@V@E@R", 16, 107, 0);
   A13E 21 6B 00      [10]10936 	ld	hl, #0x006b
   A141 E5            [11]10937 	push	hl
   A142 3E 10         [ 7]10938 	ld	a, #0x10
   A144 F5            [11]10939 	push	af
   A145 33            [ 6]10940 	inc	sp
   A146 21 65 A1      [10]10941 	ld	hl, #___str_72
   A149 E5            [11]10942 	push	hl
   A14A CD 10 63      [17]10943 	call	_PrintText
   A14D F1            [10]10944 	pop	af
   A14E F1            [10]10945 	pop	af
   A14F 33            [ 6]10946 	inc	sp
   A150                   10947 00108$:
                          10948 ;src/main.c:2461: Pause(500);	
   A150 21 F4 01      [10]10949 	ld	hl, #0x01f4
   A153 CD 81 61      [17]10950 	call	_Pause
                          10951 ;src/main.c:2463: while (!cpct_isAnyKeyPressed());
   A156                   10952 00109$:
   A156 CD E5 5B      [17]10953 	call	_cpct_isAnyKeyPressed
   A159 7D            [ 4]10954 	ld	a, l
   A15A B7            [ 4]10955 	or	a, a
   A15B 28 F9         [12]10956 	jr	Z,00109$
                          10957 ;src/main.c:2464: InitGame();
   A15D CD F9 9F      [17]10958 	call	_InitGame
   A160                   10959 00116$:
   A160 DD F9         [10]10960 	ld	sp, ix
   A162 DD E1         [14]10961 	pop	ix
   A164 C9            [10]10962 	ret
   A165                   10963 ___str_72:
   A165 47 40 41 40 4D 40 10964 	.ascii "G@A@M@E@@O@V@E@R"
        45 40 40 4F 40 56
        40 45 40 52
   A175 00                10965 	.db 0x00
   A176                   10966 ___str_73:
   A176 50 4C 41 59 45 52 10967 	.ascii "PLAYER@2@WINS>"
        40 32 40 57 49 4E
        53 3E
   A184 00                10968 	.db 0x00
   A185                   10969 ___str_74:
   A185 50 4C 41 59 45 52 10970 	.ascii "PLAYER@1@WINS>"
        40 31 40 57 49 4E
        53 3E
   A193 00                10971 	.db 0x00
   A194                   10972 ___str_75:
   A194 48 49 47 48 40 53 10973 	.ascii "HIGH@SCORE:"
        43 4F 52 45 3A
   A19F 00                10974 	.db 0x00
                          10975 ;src/main.c:2469: void main(void) {
                          10976 ;	---------------------------------
                          10977 ; Function main
                          10978 ; ---------------------------------
   A1A0                   10979 _main::
                          10980 ;src/main.c:2471: cpct_disableFirmware();
   A1A0 CD DD 5C      [17]10981 	call	_cpct_disableFirmware
                          10982 ;src/main.c:2473: cpct_akp_SFXInit(g_fx);
   A1A3 21 C4 05      [10]10983 	ld	hl, #_g_fx
   A1A6 E5            [11]10984 	push	hl
   A1A7 CD D4 59      [17]10985 	call	_cpct_akp_SFXInit
   A1AA F1            [10]10986 	pop	af
                          10987 ;src/main.c:2475: cpct_setInterruptHandler(Interrupt); 
   A1AB 21 9D 61      [10]10988 	ld	hl, #_Interrupt
   A1AE CD 51 5E      [17]10989 	call	_cpct_setInterruptHandler
                          10990 ;src/main.c:2477: cpct_setVideoMode(0);
   A1B1 2E 00         [ 7]10991 	ld	l, #0x00
   A1B3 CD A5 5C      [17]10992 	call	_cpct_setVideoMode
                          10993 ;src/main.c:2479: cpct_setPalette(g_palette, 16);
   A1B6 21 10 00      [10]10994 	ld	hl, #0x0010
   A1B9 E5            [11]10995 	push	hl
   A1BA 21 C7 2E      [10]10996 	ld	hl, #_g_palette
   A1BD E5            [11]10997 	push	hl
   A1BE CD AA 51      [17]10998 	call	_cpct_setPalette
                          10999 ;src/main.c:2481: cpct_setBorder(g_palette[BG_COLOR]);
   A1C1 21 C8 2E      [10]11000 	ld	hl, #_g_palette + 1
   A1C4 46            [ 7]11001 	ld	b, (hl)
   A1C5 C5            [11]11002 	push	bc
   A1C6 33            [ 6]11003 	inc	sp
   A1C7 3E 10         [ 7]11004 	ld	a, #0x10
   A1C9 F5            [11]11005 	push	af
   A1CA 33            [ 6]11006 	inc	sp
   A1CB CD 37 52      [17]11007 	call	_cpct_setPALColour
                          11008 ;src/main.c:2483: cpct_etm_setTileset2x4(g_tileset);	
   A1CE 21 D7 2E      [10]11009 	ld	hl, #_g_tileset
   A1D1 CD A0 5B      [17]11010 	call	_cpct_etm_setTileset2x4
                          11011 ;src/main.c:2485: InitValues();
   A1D4 CD 23 9F      [17]11012 	call	_InitValues
                          11013 ;src/main.c:2487: InitGame();
   A1D7 CD F9 9F      [17]11014 	call	_InitGame
                          11015 ;src/main.c:2490: while (1) {
   A1DA                   11016 00136$:
                          11017 ;src/main.c:2492: if (ctMainLoop % 8 == 0) {
   A1DA 21 08 00      [10]11018 	ld	hl, #0x0008
   A1DD E5            [11]11019 	push	hl
   A1DE 2A F2 5E      [16]11020 	ld	hl, (_ctMainLoop)
   A1E1 E5            [11]11021 	push	hl
   A1E2 CD C2 5D      [17]11022 	call	__modsint
   A1E5 F1            [10]11023 	pop	af
   A1E6 F1            [10]11024 	pop	af
   A1E7 7C            [ 4]11025 	ld	a, h
   A1E8 B5            [ 4]11026 	or	a,l
   A1E9 20 46         [12]11027 	jr	NZ,00108$
                          11028 ;src/main.c:2493: ReprintObject(); // reprint the active object
   A1EB CD F7 6F      [17]11029 	call	_ReprintObject
                          11030 ;src/main.c:2494: PrintObjectInStore(); // reprint the object into the store
   A1EE CD 2D 6D      [17]11031 	call	_PrintObjectInStore
                          11032 ;src/main.c:2495: CheckObject(0); // verify collection of object 1
   A1F1 AF            [ 4]11033 	xor	a, a
   A1F2 F5            [11]11034 	push	af
   A1F3 33            [ 6]11035 	inc	sp
   A1F4 CD 60 6D      [17]11036 	call	_CheckObject
   A1F7 33            [ 6]11037 	inc	sp
                          11038 ;src/main.c:2496: CheckObject(1); // verify collection of object 2
   A1F8 3E 01         [ 7]11039 	ld	a, #0x01
   A1FA F5            [11]11040 	push	af
   A1FB 33            [ 6]11041 	inc	sp
   A1FC CD 60 6D      [17]11042 	call	_CheckObject
   A1FF 33            [ 6]11043 	inc	sp
                          11044 ;src/main.c:2497: MakeWizardAnim(0); // activates the wizard's shot if the player 1 is inactive		
   A200 2E 00         [ 7]11045 	ld	l, #0x00
   A202 CD C0 88      [17]11046 	call	_MakeWizardAnim
                          11047 ;src/main.c:2498: if (spr[0].print_minV) CheckActiveTile(0); // check entry into store, door or well of player 1
   A205 3A 17 5F      [13]11048 	ld	a, (#_spr + 13)
   A208 B7            [ 4]11049 	or	a, a
   A209 28 07         [12]11050 	jr	Z,00102$
   A20B AF            [ 4]11051 	xor	a, a
   A20C F5            [11]11052 	push	af
   A20D 33            [ 6]11053 	inc	sp
   A20E CD 84 74      [17]11054 	call	_CheckActiveTile
   A211 33            [ 6]11055 	inc	sp
   A212                   11056 00102$:
                          11057 ;src/main.c:2500: if (TwoPlayers) {
   A212 3A D4 5E      [13]11058 	ld	a,(#_TwoPlayers + 0)
   A215 B7            [ 4]11059 	or	a, a
   A216 28 16         [12]11060 	jr	Z,00106$
                          11061 ;src/main.c:2501: CheckDuel(); // check that both players collide and have potions
   A218 CD 51 86      [17]11062 	call	_CheckDuel
                          11063 ;src/main.c:2502: MakeWizardAnim(1); // activates the wizard's shot if the player 2 is inactive		
   A21B 2E 01         [ 7]11064 	ld	l, #0x01
   A21D CD C0 88      [17]11065 	call	_MakeWizardAnim
                          11066 ;src/main.c:2503: if (spr[1].print_minV) CheckActiveTile(1); // check entry into store, door or well of player 2
   A220 3A 26 5F      [13]11067 	ld	a, (#_spr + 28)
   A223 B7            [ 4]11068 	or	a, a
   A224 28 08         [12]11069 	jr	Z,00106$
   A226 3E 01         [ 7]11070 	ld	a, #0x01
   A228 F5            [11]11071 	push	af
   A229 33            [ 6]11072 	inc	sp
   A22A CD 84 74      [17]11073 	call	_CheckActiveTile
   A22D 33            [ 6]11074 	inc	sp
   A22E                   11075 00106$:
                          11076 ;src/main.c:2505: WizardAnim(); // print the wizard if active
   A22E CD 07 88      [17]11077 	call	_WizardAnim
   A231                   11078 00108$:
                          11079 ;src/main.c:2508: if (!turboMode) cpct_waitVSYNC(); // wait for vertical retrace	
   A231 3A EF 5E      [13]11080 	ld	a,(#_turboMode + 0)
   A234 B7            [ 4]11081 	or	a, a
   A235 20 03         [12]11082 	jr	NZ,00110$
   A237 CD 9D 5C      [17]11083 	call	_cpct_waitVSYNC
   A23A                   11084 00110$:
                          11085 ;src/main.c:2511: switch (ctMainLoop % 3) {
   A23A 21 03 00      [10]11086 	ld	hl, #0x0003
   A23D E5            [11]11087 	push	hl
   A23E 2A F2 5E      [16]11088 	ld	hl, (_ctMainLoop)
   A241 E5            [11]11089 	push	hl
   A242 CD C2 5D      [17]11090 	call	__modsint
   A245 F1            [10]11091 	pop	af
   A246 F1            [10]11092 	pop	af
   A247 4D            [ 4]11093 	ld	c, l
   A248 44            [ 4]11094 	ld	b, h
   A249 79            [ 4]11095 	ld	a, c
   A24A B7            [ 4]11096 	or	a, a
   A24B B0            [ 4]11097 	or	a, b
   A24C 28 0E         [12]11098 	jr	Z,00111$
   A24E 79            [ 4]11099 	ld	a, c
   A24F 3D            [ 4]11100 	dec	a
   A250 B0            [ 4]11101 	or	a, b
   A251 28 18         [12]11102 	jr	Z,00112$
   A253 79            [ 4]11103 	ld	a, c
   A254 D6 02         [ 7]11104 	sub	a, #0x02
   A256 B0            [ 4]11105 	or	a, b
   A257 28 2F         [12]11106 	jr	Z,00117$
   A259 C3 E2 A2      [10]11107 	jp	00129$
                          11108 ;src/main.c:2513: case 0: {							
   A25C                   11109 00111$:
                          11110 ;src/main.c:2514: PlayerLoop(&spr[0]); // player 1
   A25C 21 0A 5F      [10]11111 	ld	hl, #_spr
   A25F CD A7 81      [17]11112 	call	_PlayerLoop
                          11113 ;src/main.c:2515: EnemyLoop(&spr[2]);	 // enemy sprite 2 is always processed (fast)
   A262 21 28 5F      [10]11114 	ld	hl, #(_spr + 0x001e)
   A265 CD FC 98      [17]11115 	call	_EnemyLoop
                          11116 ;src/main.c:2516: break;
   A268 C3 E2 A2      [10]11117 	jp	00129$
                          11118 ;src/main.c:2519: case 1:	{			
   A26B                   11119 00112$:
                          11120 ;src/main.c:2520: if (TwoPlayers) {
   A26B 3A D4 5E      [13]11121 	ld	a,(#_TwoPlayers + 0)
   A26E B7            [ 4]11122 	or	a, a
   A26F 28 0F         [12]11123 	jr	Z,00116$
                          11124 ;src/main.c:2521: PlayerLoop(&spr[1]); // player 2
   A271 21 19 5F      [10]11125 	ld	hl, #(_spr + 0x000f)
   A274 CD A7 81      [17]11126 	call	_PlayerLoop
                          11127 ;src/main.c:2522: if (!turboMode) cpct_waitVSYNC(); // additional wait for vertical retrace (avoid flickering)
   A277 3A EF 5E      [13]11128 	ld	a,(#_turboMode + 0)
   A27A B7            [ 4]11129 	or	a, a
   A27B 20 03         [12]11130 	jr	NZ,00116$
   A27D CD 9D 5C      [17]11131 	call	_cpct_waitVSYNC
   A280                   11132 00116$:
                          11133 ;src/main.c:2524: EnemyLoop(&spr[3]);	 // enemy sprite 3 is always processed (fast)
   A280 21 37 5F      [10]11134 	ld	hl, #(_spr + 0x002d)
   A283 CD FC 98      [17]11135 	call	_EnemyLoop
                          11136 ;src/main.c:2525: break;
   A286 18 5A         [12]11137 	jr	00129$
                          11138 ;src/main.c:2528: case 2:	{
   A288                   11139 00117$:
                          11140 ;src/main.c:2529: EnemyLoop(&spr[enemyTurn+4]); // enemy sprites 4 and 5 take turns processing (slow)				
   A288 3A EC 5E      [13]11141 	ld	a,(#_enemyTurn + 0)
   A28B C6 04         [ 7]11142 	add	a, #0x04
   A28D 4F            [ 4]11143 	ld	c,a
   A28E 06 00         [ 7]11144 	ld	b,#0x00
   A290 69            [ 4]11145 	ld	l, c
   A291 60            [ 4]11146 	ld	h, b
   A292 29            [11]11147 	add	hl, hl
   A293 09            [11]11148 	add	hl, bc
   A294 29            [11]11149 	add	hl, hl
   A295 09            [11]11150 	add	hl, bc
   A296 29            [11]11151 	add	hl, hl
   A297 09            [11]11152 	add	hl, bc
   A298 11 0A 5F      [10]11153 	ld	de, #_spr
   A29B 19            [11]11154 	add	hl, de
   A29C CD FC 98      [17]11155 	call	_EnemyLoop
                          11156 ;src/main.c:2530: if (++enemyTurn > 1) enemyTurn = 0;
   A29F FD 21 EC 5E   [14]11157 	ld	iy, #_enemyTurn
   A2A3 FD 34 00      [23]11158 	inc	0 (iy)
   A2A6 3E 01         [ 7]11159 	ld	a, #0x01
   A2A8 FD 96 00      [19]11160 	sub	a, 0 (iy)
   A2AB 30 04         [12]11161 	jr	NC,00119$
   A2AD FD 36 00 00   [19]11162 	ld	0 (iy), #0x00
   A2B1                   11163 00119$:
                          11164 ;src/main.c:2533: if (sht.active) {				
   A2B1 3A 77 5F      [13]11165 	ld	a, (#(_sht + 0x0004) + 0)
   A2B4 B7            [ 4]11166 	or	a, a
   A2B5 28 17         [12]11167 	jr	Z,00124$
                          11168 ;src/main.c:2534: MoveShot(); // update the shot's XY coordinates	
   A2B7 CD 8D 87      [17]11169 	call	_MoveShot
                          11170 ;src/main.c:2537: if (ctWizardAnim > 0) 	
   A2BA 3A F1 5E      [13]11171 	ld	a,(#_ctWizardAnim + 0)
   A2BD B7            [ 4]11172 	or	a, a
   A2BE 28 08         [12]11173 	jr	Z,00121$
                          11174 ;src/main.c:2538: PrintShot(g_magic_3);	// wizard
   A2C0 21 61 16      [10]11175 	ld	hl, #_g_magic_3
   A2C3 CD 63 87      [17]11176 	call	_PrintShot
   A2C6 18 06         [12]11177 	jr	00124$
   A2C8                   11178 00121$:
                          11179 ;src/main.c:2540: PrintShot(g_magic_2);	// witch
   A2C8 21 41 16      [10]11180 	ld	hl, #_g_magic_2
   A2CB CD 63 87      [17]11181 	call	_PrintShot
   A2CE                   11182 00124$:
                          11183 ;src/main.c:2544: if (spr[0].power_maxV > 0) spr[0].power_maxV--;
   A2CE 01 18 5F      [10]11184 	ld	bc, #_spr + 14
   A2D1 0A            [ 7]11185 	ld	a, (bc)
   A2D2 B7            [ 4]11186 	or	a, a
   A2D3 28 03         [12]11187 	jr	Z,00126$
   A2D5 C6 FF         [ 7]11188 	add	a, #0xff
   A2D7 02            [ 7]11189 	ld	(bc), a
   A2D8                   11190 00126$:
                          11191 ;src/main.c:2545: if (spr[1].power_maxV > 0) spr[1].power_maxV--;			
   A2D8 01 27 5F      [10]11192 	ld	bc, #_spr + 29
   A2DB 0A            [ 7]11193 	ld	a, (bc)
   A2DC B7            [ 4]11194 	or	a, a
   A2DD 28 03         [12]11195 	jr	Z,00129$
   A2DF C6 FF         [ 7]11196 	add	a, #0xff
   A2E1 02            [ 7]11197 	ld	(bc), a
                          11198 ;src/main.c:2547: }
   A2E2                   11199 00129$:
                          11200 ;src/main.c:2550: ctMainLoop++;
   A2E2 ED 4B F2 5E   [20]11201 	ld	bc, (_ctMainLoop)
   A2E6 03            [ 6]11202 	inc	bc
                          11203 ;src/main.c:2549: if (ctMainLoop == 174) {
   A2E7 FD 21 F2 5E   [14]11204 	ld	iy, #_ctMainLoop
   A2EB FD 7E 00      [19]11205 	ld	a, 0 (iy)
   A2EE D6 AE         [ 7]11206 	sub	a, #0xae
   A2F0 FD B6 01      [19]11207 	or	a, 1 (iy)
   A2F3 20 0C         [12]11208 	jr	NZ,00133$
                          11209 ;src/main.c:2550: ctMainLoop++;
   A2F5 ED 43 F2 5E   [20]11210 	ld	(_ctMainLoop), bc
                          11211 ;src/main.c:2551: SetObject(1); // set the second object
   A2F9 2E 01         [ 7]11212 	ld	l, #0x01
   A2FB CD 91 72      [17]11213 	call	_SetObject
   A2FE C3 DA A1      [10]11214 	jp	00136$
   A301                   11215 00133$:
                          11216 ;src/main.c:2553: else if (ctMainLoop++ == 350) {			
   A301 ED 5B F2 5E   [20]11217 	ld	de, (_ctMainLoop)
   A305 ED 43 F2 5E   [20]11218 	ld	(_ctMainLoop), bc
   A309 7B            [ 4]11219 	ld	a, e
   A30A D6 5E         [ 7]11220 	sub	a, #0x5e
   A30C C2 DA A1      [10]11221 	jp	NZ,00136$
   A30F 15            [ 4]11222 	dec	d
   A310 C2 DA A1      [10]11223 	jp	NZ,00136$
                          11224 ;src/main.c:2554: SetObject(0); // set the first object			
   A313 2E 00         [ 7]11225 	ld	l, #0x00
   A315 CD 91 72      [17]11226 	call	_SetObject
                          11227 ;src/main.c:2555: ctMainLoop = 0; // reset counter
   A318 21 00 00      [10]11228 	ld	hl, #0x0000
   A31B 22 F2 5E      [16]11229 	ld	(_ctMainLoop), hl
   A31E C3 DA A1      [10]11230 	jp	00136$
                          11231 	.area _CODE
                          11232 	.area _INITIALIZER
                          11233 	.area _CABS (ABS)
