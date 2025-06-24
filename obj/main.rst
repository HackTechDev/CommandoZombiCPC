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
                             65 	.globl _PrintTip
                             66 	.globl _PrintEndGame
                             67 	.globl _PrintLevelInfo
                             68 	.globl _PrintSmallBlueBox
                             69 	.globl _PrintFrame
                             70 	.globl _PrintText
                             71 	.globl _PrintNumber
                             72 	.globl _PrintMap
                             73 	.globl _OnBackground
                             74 	.globl _GetTileNum
                             75 	.globl _ClearScreen
                             76 	.globl _Interrupt
                             77 	.globl _PlayMusic
                             78 	.globl _Pause
                             79 	.globl _Itoa
                             80 	.globl _Strlen
                             81 	.globl _Abs
                             82 	.globl _cpct_zx7b_decrunch_s
                             83 	.globl _cpct_etm_setTileset2x4
                             84 	.globl _cpct_etm_drawTileBox2x4
                             85 	.globl _cpct_setSeed_lcg_u8
                             86 	.globl _cpct_getRandom_lcg_u8
                             87 	.globl _cpct_akp_SFXPlay
                             88 	.globl _cpct_akp_SFXInit
                             89 	.globl _cpct_akp_musicInit
                             90 	.globl _cpct_getScreenPtr
                             91 	.globl _cpct_setPALColour
                             92 	.globl _cpct_setPalette
                             93 	.globl _cpct_waitVSYNC
                             94 	.globl _cpct_setVideoMode
                             95 	.globl _cpct_drawSpriteMaskedAlignedTable
                             96 	.globl _cpct_drawSprite
                             97 	.globl _cpct_drawSolidBox
                             98 	.globl _cpct_px2byteM0
                             99 	.globl _cpct_isAnyKeyPressed
                            100 	.globl _cpct_isKeyPressed
                            101 	.globl _cpct_scanKeyboard_if
                            102 	.globl _cpct_scanKeyboard_f
                            103 	.globl _cpct_scanKeyboard
                            104 	.globl _cpct_memset
                            105 	.globl _cpct_setInterruptHandler
                            106 	.globl _cpct_disableFirmware
                            107 	.globl _enum_mov
                            108 	.globl _enum_sta
                            109 	.globl _enum_dir
                            110 	.globl _nPObj
                            111 	.globl _objY
                            112 	.globl _objX
                            113 	.globl _nObj
                            114 	.globl _sht
                            115 	.globl _spr
                            116 	.globl _ctlPause
                            117 	.globl _ctlMusic
                            118 	.globl _ctlAbort
                            119 	.globl _ctlRight
                            120 	.globl _ctlLeft
                            121 	.globl _ctlDown
                            122 	.globl _ctlUp
                            123 	.globl _ctMainLoop
                            124 	.globl _ctWizardAnim
                            125 	.globl _nTip
                            126 	.globl _turboMode
                            127 	.globl _ctInactivity
                            128 	.globl _enemyTurn
                            129 	.globl _music
                            130 	.globl _storeY
                            131 	.globl _storeX
                            132 	.globl _playerKey
                            133 	.globl _doorKey
                            134 	.globl _coinScore
                            135 	.globl _potScore
                            136 	.globl _highScore
                            137 	.globl _score
                            138 	.globl _TwoPlayers
                            139 	.globl _lName
                            140 	.globl _lastNMap
                            141 	.globl _nMap
                            142 	.globl _animRight_Witch
                            143 	.globl _animLeft_Witch
                            144 	.globl _frmWitch
                            145 	.globl _anim_Bat
                            146 	.globl _frmBat
                            147 	.globl _animRight_Ghost
                            148 	.globl _animLeft_Ghost
                            149 	.globl _animDown_Ghost
                            150 	.globl _animUp_Ghost
                            151 	.globl _frmGhost
                            152 	.globl _animRight_Knight
                            153 	.globl _animLeft_Knight
                            154 	.globl _animDown_Knight
                            155 	.globl _animUp_Knight
                            156 	.globl _frmKnight
                            157 	.globl _animRight_Sentinel
                            158 	.globl _animLeft_Sentinel
                            159 	.globl _animDown_Sentinel
                            160 	.globl _animUp_Sentinel
                            161 	.globl _frmSentinel
                            162 	.globl _animRight_Sorcerer2
                            163 	.globl _animLeft_Sorcerer2
                            164 	.globl _animDown_Sorcerer2
                            165 	.globl _animUp_Sorcerer2
                            166 	.globl _frmSorcerer2
                            167 	.globl _animRight_Sorcerer1
                            168 	.globl _animLeft_Sorcerer1
                            169 	.globl _animDown_Sorcerer1
                            170 	.globl _animUp_Sorcerer1
                            171 	.globl _frmSorcerer1
                            172 	.globl _PrintObject
                            173 	.globl _PrintSprite
                            174 	.globl _SpriteCollision
                            175 	.globl _MakeDuel
                            176 	.globl _ResetData
                            177 	.globl _InitGame
                            178 	.globl _GameOver
                            179 ;--------------------------------------------------------
                            180 ; special function registers
                            181 ;--------------------------------------------------------
                            182 ;--------------------------------------------------------
                            183 ; ram data
                            184 ;--------------------------------------------------------
                            185 	.area _DATA
   5ED0                     186 _nMap::
   5ED0                     187 	.ds 1
   5ED1                     188 _lastNMap::
   5ED1                     189 	.ds 1
   5ED2                     190 _lName::
   5ED2                     191 	.ds 2
   5ED4                     192 _TwoPlayers::
   5ED4                     193 	.ds 1
   5ED5                     194 _score::
   5ED5                     195 	.ds 4
   5ED9                     196 _highScore::
   5ED9                     197 	.ds 2
   5EDB                     198 _potScore::
   5EDB                     199 	.ds 2
   5EDD                     200 _coinScore::
   5EDD                     201 	.ds 2
   5EDF                     202 _doorKey::
   5EDF                     203 	.ds 5
   5EE4                     204 _playerKey::
   5EE4                     205 	.ds 5
   5EE9                     206 _storeX::
   5EE9                     207 	.ds 1
   5EEA                     208 _storeY::
   5EEA                     209 	.ds 1
   5EEB                     210 _music::
   5EEB                     211 	.ds 1
   5EEC                     212 _enemyTurn::
   5EEC                     213 	.ds 1
   5EED                     214 _ctInactivity::
   5EED                     215 	.ds 2
   5EEF                     216 _turboMode::
   5EEF                     217 	.ds 1
   5EF0                     218 _nTip::
   5EF0                     219 	.ds 1
   5EF1                     220 _ctWizardAnim::
   5EF1                     221 	.ds 1
   5EF2                     222 _ctMainLoop::
   5EF2                     223 	.ds 2
   5EF4                     224 _ctlUp::
   5EF4                     225 	.ds 4
   5EF8                     226 _ctlDown::
   5EF8                     227 	.ds 4
   5EFC                     228 _ctlLeft::
   5EFC                     229 	.ds 4
   5F00                     230 _ctlRight::
   5F00                     231 	.ds 4
   5F04                     232 _ctlAbort::
   5F04                     233 	.ds 2
   5F06                     234 _ctlMusic::
   5F06                     235 	.ds 2
   5F08                     236 _ctlPause::
   5F08                     237 	.ds 2
   5F0A                     238 _spr::
   5F0A                     239 	.ds 105
   5F73                     240 _sht::
   5F73                     241 	.ds 5
   5F78                     242 _nObj::
   5F78                     243 	.ds 2
   5F7A                     244 _objX::
   5F7A                     245 	.ds 2
   5F7C                     246 _objY::
   5F7C                     247 	.ds 2
   5F7E                     248 _nPObj::
   5F7E                     249 	.ds 1
   5F7F                     250 _enum_dir::
   5F7F                     251 	.ds 1
   5F80                     252 _enum_sta::
   5F80                     253 	.ds 1
   5F81                     254 _enum_mov::
   5F81                     255 	.ds 1
   5F82                     256 _Interrupt_nInt_1_148:
   5F82                     257 	.ds 1
                            258 ;--------------------------------------------------------
                            259 ; ram data
                            260 ;--------------------------------------------------------
                            261 	.area _INITIALIZED
                            262 ;--------------------------------------------------------
                            263 ; absolute external ram data
                            264 ;--------------------------------------------------------
                            265 	.area _DABS (ABS)
                            266 ;--------------------------------------------------------
                            267 ; global & static initialisations
                            268 ;--------------------------------------------------------
                            269 	.area _HOME
                            270 	.area _GSINIT
                            271 	.area _GSFINAL
                            272 	.area _GSINIT
                            273 ;--------------------------------------------------------
                            274 ; Home
                            275 ;--------------------------------------------------------
                            276 	.area _HOME
                            277 	.area _HOME
                            278 ;--------------------------------------------------------
                            279 ; code
                            280 ;--------------------------------------------------------
                            281 	.area _CODE
                            282 ;src/main.c:345: cpctm_createTransparentMaskTable(g_maskTable, 0x100, M0, 0);
                            283 ;	---------------------------------
                            284 ; Function dummy_cpct_transparentMaskTable0M0_container
                            285 ; ---------------------------------
   4A49                     286 _dummy_cpct_transparentMaskTable0M0_container::
                            287 	.area _g_maskTable_ (ABS) 
   0100                     288 	.org 0x100 
   0100                     289 	 _g_maskTable::
   0100 FF AA 55 00 AA AA   290 	.db 0xFF, 0xAA, 0x55, 0x00, 0xAA, 0xAA, 0x00, 0x00 
        00 00
   0108 55 00 55 00 00 00   291 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0110 AA AA 00 00 AA AA   292 	.db 0xAA, 0xAA, 0x00, 0x00, 0xAA, 0xAA, 0x00, 0x00 
        00 00
   0118 00 00 00 00 00 00   293 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0120 55 00 55 00 00 00   294 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0128 55 00 55 00 00 00   295 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0130 00 00 00 00 00 00   296 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0138 00 00 00 00 00 00   297 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0140 AA AA 00 00 AA AA   298 	.db 0xAA, 0xAA, 0x00, 0x00, 0xAA, 0xAA, 0x00, 0x00 
        00 00
   0148 00 00 00 00 00 00   299 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0150 AA AA 00 00 AA AA   300 	.db 0xAA, 0xAA, 0x00, 0x00, 0xAA, 0xAA, 0x00, 0x00 
        00 00
   0158 00 00 00 00 00 00   301 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0160 00 00 00 00 00 00   302 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0168 00 00 00 00 00 00   303 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0170 00 00 00 00 00 00   304 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0178 00 00 00 00 00 00   305 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0180 55 00 55 00 00 00   306 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0188 55 00 55 00 00 00   307 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0190 00 00 00 00 00 00   308 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   0198 00 00 00 00 00 00   309 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01A0 55 00 55 00 00 00   310 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01A8 55 00 55 00 00 00   311 	.db 0x55, 0x00, 0x55, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01B0 00 00 00 00 00 00   312 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01B8 00 00 00 00 00 00   313 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01C0 00 00 00 00 00 00   314 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01C8 00 00 00 00 00 00   315 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01D0 00 00 00 00 00 00   316 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01D8 00 00 00 00 00 00   317 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01E0 00 00 00 00 00 00   318 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01E8 00 00 00 00 00 00   319 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01F0 00 00 00 00 00 00   320 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
   01F8 00 00 00 00 00 00   321 	.db 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 
        00 00
                            322 	.area _CSEG (REL, CON) 
                            323 ;src/main.c:382: i16 Abs(i16 number) __z88dk_fastcall {
                            324 ;	---------------------------------
                            325 ; Function Abs
                            326 ; ---------------------------------
   5F83                     327 _Abs::
                            328 ;src/main.c:383: if (number < 0)
   5F83 CB 7C         [ 8]  329 	bit	7, h
   5F85 C8            [11]  330 	ret	Z
                            331 ;src/main.c:384: number *= -1;
   5F86 AF            [ 4]  332 	xor	a, a
   5F87 95            [ 4]  333 	sub	a, l
   5F88 6F            [ 4]  334 	ld	l, a
   5F89 3E 00         [ 7]  335 	ld	a, #0x00
   5F8B 9C            [ 4]  336 	sbc	a, h
   5F8C 67            [ 4]  337 	ld	h, a
                            338 ;src/main.c:385: return (number);
   5F8D C9            [10]  339 	ret
   5F8E                     340 _frmSorcerer1:
   5F8E 6F 2C               341 	.dw _g_sorcerer1_00
   5F90 AB 2C               342 	.dw _g_sorcerer1_01
   5F92 E7 2C               343 	.dw _g_sorcerer1_02
   5F94 23 2D               344 	.dw _g_sorcerer1_03
   5F96 5F 2D               345 	.dw _g_sorcerer1_04
   5F98 9B 2D               346 	.dw _g_sorcerer1_05
   5F9A D7 2D               347 	.dw _g_sorcerer1_06
   5F9C 13 2E               348 	.dw _g_sorcerer1_07
   5F9E                     349 _animUp_Sorcerer1:
   5F9E 8E 5F               350 	.dw (_frmSorcerer1 + 0)
   5FA0 90 5F               351 	.dw (_frmSorcerer1 + 2)
   5FA2                     352 _animDown_Sorcerer1:
   5FA2 92 5F               353 	.dw (_frmSorcerer1 + 4)
   5FA4 94 5F               354 	.dw (_frmSorcerer1 + 6)
   5FA6                     355 _animLeft_Sorcerer1:
   5FA6 96 5F               356 	.dw (_frmSorcerer1 + 8)
   5FA8 98 5F               357 	.dw (_frmSorcerer1 + 10)
   5FAA                     358 _animRight_Sorcerer1:
   5FAA 9A 5F               359 	.dw (_frmSorcerer1 + 12)
   5FAC 9C 5F               360 	.dw (_frmSorcerer1 + 14)
   5FAE                     361 _frmSorcerer2:
   5FAE 17 2A               362 	.dw _g_sorcerer2_00
   5FB0 53 2A               363 	.dw _g_sorcerer2_01
   5FB2 8F 2A               364 	.dw _g_sorcerer2_02
   5FB4 CB 2A               365 	.dw _g_sorcerer2_03
   5FB6 07 2B               366 	.dw _g_sorcerer2_04
   5FB8 43 2B               367 	.dw _g_sorcerer2_05
   5FBA 7F 2B               368 	.dw _g_sorcerer2_06
   5FBC BB 2B               369 	.dw _g_sorcerer2_07
   5FBE                     370 _animUp_Sorcerer2:
   5FBE AE 5F               371 	.dw (_frmSorcerer2 + 0)
   5FC0 B0 5F               372 	.dw (_frmSorcerer2 + 2)
   5FC2                     373 _animDown_Sorcerer2:
   5FC2 B2 5F               374 	.dw (_frmSorcerer2 + 4)
   5FC4 B4 5F               375 	.dw (_frmSorcerer2 + 6)
   5FC6                     376 _animLeft_Sorcerer2:
   5FC6 B6 5F               377 	.dw (_frmSorcerer2 + 8)
   5FC8 B8 5F               378 	.dw (_frmSorcerer2 + 10)
   5FCA                     379 _animRight_Sorcerer2:
   5FCA BA 5F               380 	.dw (_frmSorcerer2 + 12)
   5FCC BC 5F               381 	.dw (_frmSorcerer2 + 14)
   5FCE                     382 _frmSentinel:
   5FCE 37 28               383 	.dw _g_sentinel_0
   5FD0 73 28               384 	.dw _g_sentinel_1
   5FD2 AF 28               385 	.dw _g_sentinel_2
   5FD4 EB 28               386 	.dw _g_sentinel_3
   5FD6 27 29               387 	.dw _g_sentinel_4
   5FD8 63 29               388 	.dw _g_sentinel_5
   5FDA 9F 29               389 	.dw _g_sentinel_6
   5FDC DB 29               390 	.dw _g_sentinel_7
   5FDE                     391 _animUp_Sentinel:
   5FDE CE 5F               392 	.dw (_frmSentinel + 0)
   5FE0 D0 5F               393 	.dw (_frmSentinel + 2)
   5FE2                     394 _animDown_Sentinel:
   5FE2 D2 5F               395 	.dw (_frmSentinel + 4)
   5FE4 D4 5F               396 	.dw (_frmSentinel + 6)
   5FE6                     397 _animLeft_Sentinel:
   5FE6 D6 5F               398 	.dw (_frmSentinel + 8)
   5FE8 D8 5F               399 	.dw (_frmSentinel + 10)
   5FEA                     400 _animRight_Sentinel:
   5FEA DA 5F               401 	.dw (_frmSentinel + 12)
   5FEC DC 5F               402 	.dw (_frmSentinel + 14)
   5FEE                     403 _frmKnight:
   5FEE 57 26               404 	.dw _g_knight_0
   5FF0 93 26               405 	.dw _g_knight_1
   5FF2 CF 26               406 	.dw _g_knight_2
   5FF4 0B 27               407 	.dw _g_knight_3
   5FF6 47 27               408 	.dw _g_knight_4
   5FF8 83 27               409 	.dw _g_knight_5
   5FFA BF 27               410 	.dw _g_knight_6
   5FFC FB 27               411 	.dw _g_knight_7
   5FFE                     412 _animUp_Knight:
   5FFE EE 5F               413 	.dw (_frmKnight + 0)
   6000 F0 5F               414 	.dw (_frmKnight + 2)
   6002                     415 _animDown_Knight:
   6002 F2 5F               416 	.dw (_frmKnight + 4)
   6004 F4 5F               417 	.dw (_frmKnight + 6)
   6006                     418 _animLeft_Knight:
   6006 F6 5F               419 	.dw (_frmKnight + 8)
   6008 F8 5F               420 	.dw (_frmKnight + 10)
   600A                     421 _animRight_Knight:
   600A FA 5F               422 	.dw (_frmKnight + 12)
   600C FC 5F               423 	.dw (_frmKnight + 14)
   600E                     424 _frmGhost:
   600E 77 24               425 	.dw _g_ghost_0
   6010 B3 24               426 	.dw _g_ghost_1
   6012 EF 24               427 	.dw _g_ghost_2
   6014 2B 25               428 	.dw _g_ghost_3
   6016 67 25               429 	.dw _g_ghost_4
   6018 A3 25               430 	.dw _g_ghost_5
   601A DF 25               431 	.dw _g_ghost_6
   601C 1B 26               432 	.dw _g_ghost_7
   601E                     433 _animUp_Ghost:
   601E 0E 60               434 	.dw (_frmGhost + 0)
   6020 10 60               435 	.dw (_frmGhost + 2)
   6022                     436 _animDown_Ghost:
   6022 12 60               437 	.dw (_frmGhost + 4)
   6024 14 60               438 	.dw (_frmGhost + 6)
   6026                     439 _animLeft_Ghost:
   6026 16 60               440 	.dw (_frmGhost + 8)
   6028 18 60               441 	.dw (_frmGhost + 10)
   602A                     442 _animRight_Ghost:
   602A 1A 60               443 	.dw (_frmGhost + 12)
   602C 1C 60               444 	.dw (_frmGhost + 14)
   602E                     445 _frmBat:
   602E FF 23               446 	.dw _g_bat_0
   6030 3B 24               447 	.dw _g_bat_1
   6032                     448 _anim_Bat:
   6032 2E 60               449 	.dw (_frmBat + 0)
   6034 30 60               450 	.dw (_frmBat + 2)
   6036                     451 _frmWitch:
   6036 97 22               452 	.dw _g_witch_0
   6038 D3 22               453 	.dw _g_witch_1
   603A 0F 23               454 	.dw _g_witch_2
   603C 4B 23               455 	.dw _g_witch_3
   603E                     456 _animLeft_Witch:
   603E 36 60               457 	.dw (_frmWitch + 0)
   6040 38 60               458 	.dw (_frmWitch + 2)
   6042                     459 _animRight_Witch:
   6042 3A 60               460 	.dw (_frmWitch + 4)
   6044 3C 60               461 	.dw (_frmWitch + 6)
                            462 ;src/main.c:390: u8 Strlen(const unsigned char *str) __z88dk_fastcall {
                            463 ;	---------------------------------
                            464 ; Function Strlen
                            465 ; ---------------------------------
   6046                     466 _Strlen::
                            467 ;src/main.c:392: for (s = str; *s; ++s);
   6046 4D            [ 4]  468 	ld	c,l
   6047 44            [ 4]  469 	ld	b,h
   6048                     470 00103$:
   6048 7E            [ 7]  471 	ld	a, (hl)
   6049 B7            [ 4]  472 	or	a, a
   604A 28 03         [12]  473 	jr	Z,00101$
   604C 23            [ 6]  474 	inc	hl
   604D 18 F9         [12]  475 	jr	00103$
   604F                     476 00101$:
                            477 ;src/main.c:393: return (s - str);
   604F BF            [ 4]  478 	cp	a, a
   6050 ED 42         [15]  479 	sbc	hl, bc
   6052 C9            [10]  480 	ret
                            481 ;src/main.c:398: char* Itoa(u16 value, char* result, int base) {    
                            482 ;	---------------------------------
                            483 ; Function Itoa
                            484 ; ---------------------------------
   6053                     485 _Itoa::
   6053 DD E5         [15]  486 	push	ix
   6055 DD 21 00 00   [14]  487 	ld	ix,#0
   6059 DD 39         [15]  488 	add	ix,sp
   605B 21 F9 FF      [10]  489 	ld	hl, #-7
   605E 39            [11]  490 	add	hl, sp
   605F F9            [ 6]  491 	ld	sp, hl
                            492 ;src/main.c:400: char* ptr = result, *ptr1 = result, tmp_char;
   6060 DD 5E 06      [19]  493 	ld	e,6 (ix)
   6063 DD 56 07      [19]  494 	ld	d,7 (ix)
   6066 DD 73 FC      [19]  495 	ld	-4 (ix), e
   6069 DD 72 FD      [19]  496 	ld	-3 (ix), d
                            497 ;src/main.c:402: if (base < 2 || base > 36) { 
   606C DD 7E 08      [19]  498 	ld	a, 8 (ix)
   606F D6 02         [ 7]  499 	sub	a, #0x02
   6071 DD 7E 09      [19]  500 	ld	a, 9 (ix)
   6074 17            [ 4]  501 	rla
   6075 3F            [ 4]  502 	ccf
   6076 1F            [ 4]  503 	rra
   6077 DE 80         [ 7]  504 	sbc	a, #0x80
   6079 38 12         [12]  505 	jr	C,00101$
   607B 3E 24         [ 7]  506 	ld	a, #0x24
   607D DD BE 08      [19]  507 	cp	a, 8 (ix)
   6080 3E 00         [ 7]  508 	ld	a, #0x00
   6082 DD 9E 09      [19]  509 	sbc	a, 9 (ix)
   6085 E2 8A 60      [10]  510 	jp	PO, 00140$
   6088 EE 80         [ 7]  511 	xor	a, #0x80
   608A                     512 00140$:
   608A F2 93 60      [10]  513 	jp	P, 00115$
   608D                     514 00101$:
                            515 ;src/main.c:403: *result = '\0'; 
   608D AF            [ 4]  516 	xor	a, a
   608E 12            [ 7]  517 	ld	(de), a
                            518 ;src/main.c:404: return result; 
   608F EB            [ 4]  519 	ex	de,hl
   6090 C3 34 61      [10]  520 	jp	00112$
                            521 ;src/main.c:407: do {
   6093                     522 00115$:
   6093 DD 73 FE      [19]  523 	ld	-2 (ix), e
   6096 DD 72 FF      [19]  524 	ld	-1 (ix), d
   6099                     525 00104$:
                            526 ;src/main.c:408: tmp_value = value;
   6099 DD 7E 04      [19]  527 	ld	a, 4 (ix)
   609C DD 77 F9      [19]  528 	ld	-7 (ix), a
   609F DD 7E 05      [19]  529 	ld	a, 5 (ix)
   60A2 DD 77 FA      [19]  530 	ld	-6 (ix), a
                            531 ;src/main.c:409: value /= base;
   60A5 DD 4E 08      [19]  532 	ld	c,8 (ix)
   60A8 DD 46 09      [19]  533 	ld	b,9 (ix)
   60AB C5            [11]  534 	push	bc
   60AC DD 6E 04      [19]  535 	ld	l,4 (ix)
   60AF DD 66 05      [19]  536 	ld	h,5 (ix)
   60B2 E5            [11]  537 	push	hl
   60B3 CD 69 51      [17]  538 	call	__divuint
   60B6 F1            [10]  539 	pop	af
   60B7 F1            [10]  540 	pop	af
   60B8 DD 75 04      [19]  541 	ld	4 (ix), l
   60BB DD 74 05      [19]  542 	ld	5 (ix), h
                            543 ;src/main.c:410: *ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
   60BE DD 4E F9      [19]  544 	ld	c, -7 (ix)
   60C1 DD 5E 04      [19]  545 	ld	e, 4 (ix)
   60C4 DD 66 08      [19]  546 	ld	h, 8 (ix)
   60C7 2E 00         [ 7]  547 	ld	l, #0x00
   60C9 55            [ 4]  548 	ld	d, l
   60CA 06 08         [ 7]  549 	ld	b, #0x08
   60CC                     550 00141$:
   60CC 29            [11]  551 	add	hl, hl
   60CD 30 01         [12]  552 	jr	NC,00142$
   60CF 19            [11]  553 	add	hl, de
   60D0                     554 00142$:
   60D0 10 FA         [13]  555 	djnz	00141$
   60D2 79            [ 4]  556 	ld	a, c
   60D3 95            [ 4]  557 	sub	a, l
   60D4 C6 23         [ 7]  558 	add	a, #0x23
   60D6 4F            [ 4]  559 	ld	c, a
   60D7 17            [ 4]  560 	rla
   60D8 9F            [ 4]  561 	sbc	a, a
   60D9 47            [ 4]  562 	ld	b, a
   60DA 21 39 61      [10]  563 	ld	hl, #___str_0
   60DD 09            [11]  564 	add	hl, bc
   60DE 4E            [ 7]  565 	ld	c, (hl)
   60DF DD 6E FE      [19]  566 	ld	l,-2 (ix)
   60E2 DD 66 FF      [19]  567 	ld	h,-1 (ix)
   60E5 71            [ 7]  568 	ld	(hl), c
   60E6 DD 34 FE      [23]  569 	inc	-2 (ix)
   60E9 20 03         [12]  570 	jr	NZ,00143$
   60EB DD 34 FF      [23]  571 	inc	-1 (ix)
   60EE                     572 00143$:
                            573 ;src/main.c:411: } while (value);
   60EE DD 7E 05      [19]  574 	ld	a, 5 (ix)
   60F1 DD B6 04      [19]  575 	or	a,4 (ix)
   60F4 20 A3         [12]  576 	jr	NZ,00104$
                            577 ;src/main.c:413: if (tmp_value < 0) 
   60F6 DD 4E FE      [19]  578 	ld	c,-2 (ix)
   60F9 DD 46 FF      [19]  579 	ld	b,-1 (ix)
   60FC DD CB FA 7E   [20]  580 	bit	7, -6 (ix)
   6100 28 0F         [12]  581 	jr	Z,00108$
                            582 ;src/main.c:414: *ptr++ = '-';
   6102 DD 6E FE      [19]  583 	ld	l,-2 (ix)
   6105 DD 66 FF      [19]  584 	ld	h,-1 (ix)
   6108 36 2D         [10]  585 	ld	(hl), #0x2d
   610A DD 4E FE      [19]  586 	ld	c,-2 (ix)
   610D DD 46 FF      [19]  587 	ld	b,-1 (ix)
   6110 03            [ 6]  588 	inc	bc
   6111                     589 00108$:
                            590 ;src/main.c:415: *ptr-- = '\0';
   6111 AF            [ 4]  591 	xor	a, a
   6112 02            [ 7]  592 	ld	(bc), a
   6113 0B            [ 6]  593 	dec	bc
                            594 ;src/main.c:417: while(ptr1 < ptr) {
   6114 DD 5E FC      [19]  595 	ld	e,-4 (ix)
   6117 DD 56 FD      [19]  596 	ld	d,-3 (ix)
   611A                     597 00109$:
   611A 7B            [ 4]  598 	ld	a, e
   611B 91            [ 4]  599 	sub	a, c
   611C 7A            [ 4]  600 	ld	a, d
   611D 98            [ 4]  601 	sbc	a, b
   611E 30 0E         [12]  602 	jr	NC,00111$
                            603 ;src/main.c:418: tmp_char = *ptr;
   6120 0A            [ 7]  604 	ld	a, (bc)
   6121 DD 77 FB      [19]  605 	ld	-5 (ix), a
                            606 ;src/main.c:419: *ptr--= *ptr1;
   6124 1A            [ 7]  607 	ld	a, (de)
   6125 02            [ 7]  608 	ld	(bc), a
   6126 0B            [ 6]  609 	dec	bc
                            610 ;src/main.c:420: *ptr1++ = tmp_char;
   6127 DD 7E FB      [19]  611 	ld	a, -5 (ix)
   612A 12            [ 7]  612 	ld	(de), a
   612B 13            [ 6]  613 	inc	de
   612C 18 EC         [12]  614 	jr	00109$
   612E                     615 00111$:
                            616 ;src/main.c:423: return result;
   612E DD 6E 06      [19]  617 	ld	l,6 (ix)
   6131 DD 66 07      [19]  618 	ld	h,7 (ix)
   6134                     619 00112$:
   6134 DD F9         [10]  620 	ld	sp, ix
   6136 DD E1         [14]  621 	pop	ix
   6138 C9            [10]  622 	ret
   6139                     623 ___str_0:
   6139 7A 79 78 77 76 75   624 	.ascii "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmno"
        74 73 72 71 70 6F
        6E 6D 6C 6B 6A 69
        68 67 66 65 64 63
        62 61 39 38 37 36
        35 34 33 32 31 30
        31 32 33 34 35 36
        37 38 39 61 62 63
        64 65 66 67 68 69
        6A 6B 6C 6D 6E 6F
   6175 70 71 72 73 74 75   625 	.ascii "pqrstuvwxyz"
        76 77 78 79 7A
   6180 00                  626 	.db 0x00
                            627 ;src/main.c:428: void Pause(u16 value) __z88dk_fastcall {
                            628 ;	---------------------------------
                            629 ; Function Pause
                            630 ; ---------------------------------
   6181                     631 _Pause::
                            632 ;src/main.c:430: for(i=0; i < value; i++) {
   6181 01 00 00      [10]  633 	ld	bc, #0x0000
   6184                     634 00103$:
   6184 79            [ 4]  635 	ld	a, c
   6185 95            [ 4]  636 	sub	a, l
   6186 78            [ 4]  637 	ld	a, b
   6187 9C            [ 4]  638 	sbc	a, h
   6188 D0            [11]  639 	ret	NC
                            640 ;src/main.c:433: __endasm;
   6189 76            [ 4]  641 	halt
                            642 ;src/main.c:430: for(i=0; i < value; i++) {
   618A 03            [ 6]  643 	inc	bc
   618B 18 F7         [12]  644 	jr	00103$
                            645 ;src/main.c:439: void PlayMusic() {
                            646 ;	---------------------------------
                            647 ; Function PlayMusic
                            648 ; ---------------------------------
   618D                     649 _PlayMusic::
                            650 ;src/main.c:454: __endasm;
   618D D9            [ 4]  651 	exx
   618E 08                  652 	.db	#0x08
   618F F5            [11]  653 	push	af
   6190 C5            [11]  654 	push	bc
   6191 D5            [11]  655 	push	de
   6192 E5            [11]  656 	push	hl
   6193 CD 45 52      [17]  657 	call	_cpct_akp_musicPlay
   6196 E1            [10]  658 	pop	hl
   6197 D1            [10]  659 	pop	de
   6198 C1            [10]  660 	pop	bc
   6199 F1            [10]  661 	pop	af
   619A 08                  662 	.db	#0x08
   619B D9            [ 4]  663 	exx
   619C C9            [10]  664 	ret
                            665 ;src/main.c:459: void Interrupt() {
                            666 ;	---------------------------------
                            667 ; Function Interrupt
                            668 ; ---------------------------------
   619D                     669 _Interrupt::
                            670 ;src/main.c:462: if (++nInt == 6) {
   619D FD 21 82 5F   [14]  671 	ld	iy, #_Interrupt_nInt_1_148
   61A1 FD 34 00      [23]  672 	inc	0 (iy)
   61A4 FD 7E 00      [19]  673 	ld	a, 0 (iy)
   61A7 D6 06         [ 7]  674 	sub	a, #0x06
   61A9 C0            [11]  675 	ret	NZ
                            676 ;src/main.c:463: PlayMusic();
   61AA CD 8D 61      [17]  677 	call	_PlayMusic
                            678 ;src/main.c:464: cpct_scanKeyboard_if();
   61AD CD F2 5B      [17]  679 	call	_cpct_scanKeyboard_if
                            680 ;src/main.c:465: nInt = 0;
   61B0 21 82 5F      [10]  681 	ld	hl,#_Interrupt_nInt_1_148 + 0
   61B3 36 00         [10]  682 	ld	(hl), #0x00
   61B5 C9            [10]  683 	ret
                            684 ;src/main.c:483: void ClearScreen() {
                            685 ;	---------------------------------
                            686 ; Function ClearScreen
                            687 ; ---------------------------------
   61B6                     688 _ClearScreen::
                            689 ;src/main.c:484: cpct_memset(CPCT_VMEM_START, cpct_px2byteM0(BG_COLOR, BG_COLOR), 16384);
   61B6 21 01 01      [10]  690 	ld	hl, #0x0101
   61B9 E5            [11]  691 	push	hl
   61BA CD B3 5C      [17]  692 	call	_cpct_px2byteM0
   61BD 45            [ 4]  693 	ld	b, l
   61BE 21 00 40      [10]  694 	ld	hl, #0x4000
   61C1 E5            [11]  695 	push	hl
   61C2 C5            [11]  696 	push	bc
   61C3 33            [ 6]  697 	inc	sp
   61C4 26 C0         [ 7]  698 	ld	h, #0xc0
   61C6 E5            [11]  699 	push	hl
   61C7 CD CF 5C      [17]  700 	call	_cpct_memset
   61CA C9            [10]  701 	ret
                            702 ;src/main.c:489: u8* GetTileNum(u8 x, u8 y) {
                            703 ;	---------------------------------
                            704 ; Function GetTileNum
                            705 ; ---------------------------------
   61CB                     706 _GetTileNum::
   61CB DD E5         [15]  707 	push	ix
   61CD DD 21 00 00   [14]  708 	ld	ix,#0
   61D1 DD 39         [15]  709 	add	ix,sp
                            710 ;src/main.c:490: return UNPACKED_MAP_INI + (y - ORIG_MAP_Y) / 4 * MAP_W + x / 2;	
   61D3 DD 4E 05      [19]  711 	ld	c, 5 (ix)
   61D6 06 00         [ 7]  712 	ld	b, #0x00
   61D8 79            [ 4]  713 	ld	a, c
   61D9 C6 E0         [ 7]  714 	add	a, #0xe0
   61DB 5F            [ 4]  715 	ld	e, a
   61DC 78            [ 4]  716 	ld	a, b
   61DD CE FF         [ 7]  717 	adc	a, #0xff
   61DF 57            [ 4]  718 	ld	d, a
   61E0 6B            [ 4]  719 	ld	l, e
   61E1 62            [ 4]  720 	ld	h, d
   61E2 CB 7A         [ 8]  721 	bit	7, d
   61E4 28 04         [12]  722 	jr	Z,00103$
   61E6 21 E3 FF      [10]  723 	ld	hl, #0xffe3
   61E9 09            [11]  724 	add	hl, bc
   61EA                     725 00103$:
   61EA CB 2C         [ 8]  726 	sra	h
   61EC CB 1D         [ 8]  727 	rr	l
   61EE CB 2C         [ 8]  728 	sra	h
   61F0 CB 1D         [ 8]  729 	rr	l
   61F2 4D            [ 4]  730 	ld	c, l
   61F3 44            [ 4]  731 	ld	b, h
   61F4 29            [11]  732 	add	hl, hl
   61F5 29            [11]  733 	add	hl, hl
   61F6 09            [11]  734 	add	hl, bc
   61F7 29            [11]  735 	add	hl, hl
   61F8 29            [11]  736 	add	hl, hl
   61F9 29            [11]  737 	add	hl, hl
   61FA 01 71 0F      [10]  738 	ld	bc, #0x0f71
   61FD 09            [11]  739 	add	hl, bc
   61FE DD 4E 04      [19]  740 	ld	c, 4 (ix)
   6201 CB 39         [ 8]  741 	srl	c
   6203 59            [ 4]  742 	ld	e,c
   6204 16 00         [ 7]  743 	ld	d,#0x00
   6206 19            [11]  744 	add	hl, de
   6207 DD E1         [14]  745 	pop	ix
   6209 C9            [10]  746 	ret
                            747 ;src/main.c:495: u8 OnBackground(u8 x, u8 y) {
                            748 ;	---------------------------------
                            749 ; Function OnBackground
                            750 ; ---------------------------------
   620A                     751 _OnBackground::
                            752 ;src/main.c:496: if (*GetTileNum(x+3, y+8) >= TILESET_BLOCKERS) 
   620A 21 03 00      [10]  753 	ld	hl, #3+0
   620D 39            [11]  754 	add	hl, sp
   620E 7E            [ 7]  755 	ld	a, (hl)
   620F C6 08         [ 7]  756 	add	a, #0x08
   6211 47            [ 4]  757 	ld	b, a
   6212 21 02 00      [10]  758 	ld	hl, #2+0
   6215 39            [11]  759 	add	hl, sp
   6216 56            [ 7]  760 	ld	d, (hl)
   6217 14            [ 4]  761 	inc	d
   6218 14            [ 4]  762 	inc	d
   6219 14            [ 4]  763 	inc	d
   621A 4A            [ 4]  764 	ld	c, d
   621B C5            [11]  765 	push	bc
   621C CD CB 61      [17]  766 	call	_GetTileNum
   621F F1            [10]  767 	pop	af
   6220 7E            [ 7]  768 	ld	a, (hl)
   6221 D6 2D         [ 7]  769 	sub	a, #0x2d
   6223 38 03         [12]  770 	jr	C,00102$
                            771 ;src/main.c:497: return FALSE;
   6225 2E 00         [ 7]  772 	ld	l, #0x00
   6227 C9            [10]  773 	ret
   6228                     774 00102$:
                            775 ;src/main.c:498: return TRUE;
   6228 2E 01         [ 7]  776 	ld	l, #0x01
   622A C9            [10]  777 	ret
                            778 ;src/main.c:503: void PrintMap() {
                            779 ;	---------------------------------
                            780 ; Function PrintMap
                            781 ; ---------------------------------
   622B                     782 _PrintMap::
                            783 ;src/main.c:504: cpct_etm_drawTilemap2x4(MAP_W, MAP_H, 
   622B 21 71 0F      [10]  784 	ld	hl, #0x0f71
   622E E5            [11]  785 	push	hl
   622F 21 40 C1      [10]  786 	ld	hl, #0xc140
   6232 E5            [11]  787 	push	hl
   6233 21 2A 28      [10]  788 	ld	hl, #0x282a
   6236 E5            [11]  789 	push	hl
   6237 2E 00         [ 7]  790 	ld	l, #0x00
   6239 E5            [11]  791 	push	hl
   623A AF            [ 4]  792 	xor	a, a
   623B F5            [11]  793 	push	af
   623C 33            [ 6]  794 	inc	sp
   623D CD 11 5B      [17]  795 	call	_cpct_etm_drawTileBox2x4
   6240 C9            [10]  796 	ret
                            797 ;src/main.c:511: void PrintNumber(u16 num, u8 len, u8 x, u8 y, u8 prevDel) { 
                            798 ;	---------------------------------
                            799 ; Function PrintNumber
                            800 ; ---------------------------------
   6241                     801 _PrintNumber::
   6241 DD E5         [15]  802 	push	ix
   6243 DD 21 00 00   [14]  803 	ld	ix,#0
   6247 DD 39         [15]  804 	add	ix,sp
   6249 21 F5 FF      [10]  805 	ld	hl, #-11
   624C 39            [11]  806 	add	hl, sp
   624D F9            [ 6]  807 	ld	sp, hl
                            808 ;src/main.c:517: Itoa(num, txt, 10);    
   624E 21 03 00      [10]  809 	ld	hl, #0x0003
   6251 39            [11]  810 	add	hl, sp
   6252 4D            [ 4]  811 	ld	c, l
   6253 44            [ 4]  812 	ld	b, h
   6254 59            [ 4]  813 	ld	e, c
   6255 50            [ 4]  814 	ld	d, b
   6256 C5            [11]  815 	push	bc
   6257 21 0A 00      [10]  816 	ld	hl, #0x000a
   625A E5            [11]  817 	push	hl
   625B D5            [11]  818 	push	de
   625C DD 6E 04      [19]  819 	ld	l,4 (ix)
   625F DD 66 05      [19]  820 	ld	h,5 (ix)
   6262 E5            [11]  821 	push	hl
   6263 CD 53 60      [17]  822 	call	_Itoa
   6266 21 06 00      [10]  823 	ld	hl, #6
   6269 39            [11]  824 	add	hl, sp
   626A F9            [ 6]  825 	ld	sp, hl
   626B C1            [10]  826 	pop	bc
                            827 ;src/main.c:518: zeros = len - Strlen(txt);
   626C 69            [ 4]  828 	ld	l, c
   626D 60            [ 4]  829 	ld	h, b
   626E C5            [11]  830 	push	bc
   626F CD 46 60      [17]  831 	call	_Strlen
   6272 C1            [10]  832 	pop	bc
   6273 DD 7E 06      [19]  833 	ld	a, 6 (ix)
   6276 95            [ 4]  834 	sub	a, l
   6277 DD 77 F7      [19]  835 	ld	-9 (ix), a
                            836 ;src/main.c:519: nAux = txt[pos];
   627A 0A            [ 7]  837 	ld	a, (bc)
   627B DD 77 F5      [19]  838 	ld	-11 (ix), a
                            839 ;src/main.c:521: while(nAux != '\0')	{	
   627E DD 36 F6 00   [19]  840 	ld	-10 (ix), #0x00
   6282                     841 00103$:
   6282 DD 7E F5      [19]  842 	ld	a, -11 (ix)
   6285 B7            [ 4]  843 	or	a, a
   6286 CA 0B 63      [10]  844 	jp	Z, 00106$
                            845 ;src/main.c:522: u8* ptr = cpct_getScreenPtr(CPCT_VMEM_START, (zeros + pos) * FNT_W + x, y);
   6289 DD 7E F7      [19]  846 	ld	a, -9 (ix)
   628C DD 86 F6      [19]  847 	add	a, -10 (ix)
   628F 5F            [ 4]  848 	ld	e, a
   6290 87            [ 4]  849 	add	a, a
   6291 83            [ 4]  850 	add	a, e
   6292 5F            [ 4]  851 	ld	e,a
   6293 DD 86 07      [19]  852 	add	a, 7 (ix)
   6296 57            [ 4]  853 	ld	d, a
   6297 C5            [11]  854 	push	bc
   6298 DD 7E 08      [19]  855 	ld	a, 8 (ix)
   629B F5            [11]  856 	push	af
   629C 33            [ 6]  857 	inc	sp
   629D D5            [11]  858 	push	de
   629E 33            [ 6]  859 	inc	sp
   629F 21 00 C0      [10]  860 	ld	hl, #0xc000
   62A2 E5            [11]  861 	push	hl
   62A3 CD CF 5D      [17]  862 	call	_cpct_getScreenPtr
   62A6 C1            [10]  863 	pop	bc
                            864 ;src/main.c:524: cpct_drawSolidBox(ptr, cpct_px2byteM0(BG_COLOR, BG_COLOR), FNT_W, FNT_H); // previous deletion
   62A7 DD 75 FE      [19]  865 	ld	-2 (ix), l
   62AA DD 74 FF      [19]  866 	ld	-1 (ix), h
                            867 ;src/main.c:523: if (prevDel) 
   62AD DD 7E 09      [19]  868 	ld	a, 9 (ix)
   62B0 B7            [ 4]  869 	or	a, a
   62B1 28 1C         [12]  870 	jr	Z,00102$
                            871 ;src/main.c:524: cpct_drawSolidBox(ptr, cpct_px2byteM0(BG_COLOR, BG_COLOR), FNT_W, FNT_H); // previous deletion
   62B3 C5            [11]  872 	push	bc
   62B4 21 01 01      [10]  873 	ld	hl, #0x0101
   62B7 E5            [11]  874 	push	hl
   62B8 CD B3 5C      [17]  875 	call	_cpct_px2byteM0
   62BB C1            [10]  876 	pop	bc
   62BC 26 00         [ 7]  877 	ld	h, #0x00
   62BE C5            [11]  878 	push	bc
   62BF 11 03 08      [10]  879 	ld	de, #0x0803
   62C2 D5            [11]  880 	push	de
   62C3 E5            [11]  881 	push	hl
   62C4 DD 6E FE      [19]  882 	ld	l,-2 (ix)
   62C7 DD 66 FF      [19]  883 	ld	h,-1 (ix)
   62CA E5            [11]  884 	push	hl
   62CB CD ED 5C      [17]  885 	call	_cpct_drawSolidBox
   62CE C1            [10]  886 	pop	bc
   62CF                     887 00102$:
                            888 ;src/main.c:525: cpct_drawSpriteMaskedAlignedTable(g_font[nAux - 48], ptr, FNT_W, FNT_H, g_maskTable);
   62CF DD 7E F5      [19]  889 	ld	a, -11 (ix)
   62D2 16 00         [ 7]  890 	ld	d, #0x00
   62D4 C6 D0         [ 7]  891 	add	a, #0xd0
   62D6 5F            [ 4]  892 	ld	e, a
   62D7 7A            [ 4]  893 	ld	a, d
   62D8 CE FF         [ 7]  894 	adc	a, #0xff
   62DA 57            [ 4]  895 	ld	d, a
   62DB 6B            [ 4]  896 	ld	l, e
   62DC 62            [ 4]  897 	ld	h, d
   62DD 29            [11]  898 	add	hl, hl
   62DE 19            [11]  899 	add	hl, de
   62DF 29            [11]  900 	add	hl, hl
   62E0 29            [11]  901 	add	hl, hl
   62E1 29            [11]  902 	add	hl, hl
   62E2 11 49 4B      [10]  903 	ld	de, #_g_font
   62E5 19            [11]  904 	add	hl, de
   62E6 C5            [11]  905 	push	bc
   62E7 11 00 01      [10]  906 	ld	de, #_g_maskTable
   62EA D5            [11]  907 	push	de
   62EB 11 03 08      [10]  908 	ld	de, #0x0803
   62EE D5            [11]  909 	push	de
   62EF DD 5E FE      [19]  910 	ld	e,-2 (ix)
   62F2 DD 56 FF      [19]  911 	ld	d,-1 (ix)
   62F5 D5            [11]  912 	push	de
   62F6 E5            [11]  913 	push	hl
   62F7 CD E5 5D      [17]  914 	call	_cpct_drawSpriteMaskedAlignedTable
   62FA C1            [10]  915 	pop	bc
                            916 ;src/main.c:526: nAux = txt[++pos];
   62FB DD 34 F6      [23]  917 	inc	-10 (ix)
   62FE DD 6E F6      [19]  918 	ld	l,-10 (ix)
   6301 26 00         [ 7]  919 	ld	h,#0x00
   6303 09            [11]  920 	add	hl, bc
   6304 7E            [ 7]  921 	ld	a, (hl)
   6305 DD 77 F5      [19]  922 	ld	-11 (ix), a
   6308 C3 82 62      [10]  923 	jp	00103$
   630B                     924 00106$:
   630B DD F9         [10]  925 	ld	sp, ix
   630D DD E1         [14]  926 	pop	ix
   630F C9            [10]  927 	ret
                            928 ;src/main.c:532: void PrintText(u8 txt[], u8 x, u8 y, u8 prevDel) {
                            929 ;	---------------------------------
                            930 ; Function PrintText
                            931 ; ---------------------------------
   6310                     932 _PrintText::
   6310 DD E5         [15]  933 	push	ix
   6312 DD 21 00 00   [14]  934 	ld	ix,#0
   6316 DD 39         [15]  935 	add	ix,sp
   6318 F5            [11]  936 	push	af
   6319 F5            [11]  937 	push	af
                            938 ;src/main.c:534: u8 car = txt[pos];
   631A DD 4E 04      [19]  939 	ld	c,4 (ix)
   631D DD 46 05      [19]  940 	ld	b,5 (ix)
   6320 0A            [ 7]  941 	ld	a, (bc)
   6321 DD 77 FC      [19]  942 	ld	-4 (ix), a
                            943 ;src/main.c:536: while(car != '\0') { // "@" = blank    ";" = -   ">" = !!   "[" = ,
   6324 DD 36 FD 00   [19]  944 	ld	-3 (ix), #0x00
   6328                     945 00103$:
   6328 DD 7E FC      [19]  946 	ld	a, -4 (ix)
   632B B7            [ 4]  947 	or	a, a
   632C CA AE 63      [10]  948 	jp	Z, 00106$
                            949 ;src/main.c:537: u8* ptr = cpct_getScreenPtr(CPCT_VMEM_START, (pos * FNT_W) + x, y);
   632F DD 6E FD      [19]  950 	ld	l, -3 (ix)
   6332 5D            [ 4]  951 	ld	e, l
   6333 29            [11]  952 	add	hl, hl
   6334 19            [11]  953 	add	hl, de
   6335 7D            [ 4]  954 	ld	a, l
   6336 DD 86 06      [19]  955 	add	a, 6 (ix)
   6339 57            [ 4]  956 	ld	d, a
   633A C5            [11]  957 	push	bc
   633B DD 7E 07      [19]  958 	ld	a, 7 (ix)
   633E F5            [11]  959 	push	af
   633F 33            [ 6]  960 	inc	sp
   6340 D5            [11]  961 	push	de
   6341 33            [ 6]  962 	inc	sp
   6342 21 00 C0      [10]  963 	ld	hl, #0xc000
   6345 E5            [11]  964 	push	hl
   6346 CD CF 5D      [17]  965 	call	_cpct_getScreenPtr
   6349 C1            [10]  966 	pop	bc
                            967 ;src/main.c:539: cpct_drawSolidBox(ptr, cpct_px2byteM0(BG_COLOR, BG_COLOR), FNT_W, FNT_H); // previous deletion
   634A DD 75 FE      [19]  968 	ld	-2 (ix), l
   634D DD 74 FF      [19]  969 	ld	-1 (ix), h
                            970 ;src/main.c:538: if (prevDel) 
   6350 DD 7E 08      [19]  971 	ld	a, 8 (ix)
   6353 B7            [ 4]  972 	or	a, a
   6354 28 1C         [12]  973 	jr	Z,00102$
                            974 ;src/main.c:539: cpct_drawSolidBox(ptr, cpct_px2byteM0(BG_COLOR, BG_COLOR), FNT_W, FNT_H); // previous deletion
   6356 C5            [11]  975 	push	bc
   6357 21 01 01      [10]  976 	ld	hl, #0x0101
   635A E5            [11]  977 	push	hl
   635B CD B3 5C      [17]  978 	call	_cpct_px2byteM0
   635E C1            [10]  979 	pop	bc
   635F 26 00         [ 7]  980 	ld	h, #0x00
   6361 C5            [11]  981 	push	bc
   6362 11 03 08      [10]  982 	ld	de, #0x0803
   6365 D5            [11]  983 	push	de
   6366 E5            [11]  984 	push	hl
   6367 DD 6E FE      [19]  985 	ld	l,-2 (ix)
   636A DD 66 FF      [19]  986 	ld	h,-1 (ix)
   636D E5            [11]  987 	push	hl
   636E CD ED 5C      [17]  988 	call	_cpct_drawSolidBox
   6371 C1            [10]  989 	pop	bc
   6372                     990 00102$:
                            991 ;src/main.c:540: cpct_drawSpriteMaskedAlignedTable(g_font[car - 48], ptr, FNT_W, FNT_H, g_maskTable);
   6372 DD 7E FC      [19]  992 	ld	a, -4 (ix)
   6375 16 00         [ 7]  993 	ld	d, #0x00
   6377 C6 D0         [ 7]  994 	add	a, #0xd0
   6379 5F            [ 4]  995 	ld	e, a
   637A 7A            [ 4]  996 	ld	a, d
   637B CE FF         [ 7]  997 	adc	a, #0xff
   637D 57            [ 4]  998 	ld	d, a
   637E 6B            [ 4]  999 	ld	l, e
   637F 62            [ 4] 1000 	ld	h, d
   6380 29            [11] 1001 	add	hl, hl
   6381 19            [11] 1002 	add	hl, de
   6382 29            [11] 1003 	add	hl, hl
   6383 29            [11] 1004 	add	hl, hl
   6384 29            [11] 1005 	add	hl, hl
   6385 11 49 4B      [10] 1006 	ld	de, #_g_font
   6388 19            [11] 1007 	add	hl, de
   6389 C5            [11] 1008 	push	bc
   638A 11 00 01      [10] 1009 	ld	de, #_g_maskTable
   638D D5            [11] 1010 	push	de
   638E 11 03 08      [10] 1011 	ld	de, #0x0803
   6391 D5            [11] 1012 	push	de
   6392 DD 5E FE      [19] 1013 	ld	e,-2 (ix)
   6395 DD 56 FF      [19] 1014 	ld	d,-1 (ix)
   6398 D5            [11] 1015 	push	de
   6399 E5            [11] 1016 	push	hl
   639A CD E5 5D      [17] 1017 	call	_cpct_drawSpriteMaskedAlignedTable
   639D C1            [10] 1018 	pop	bc
                           1019 ;src/main.c:541: car = txt[++pos];
   639E DD 34 FD      [23] 1020 	inc	-3 (ix)
   63A1 DD 6E FD      [19] 1021 	ld	l,-3 (ix)
   63A4 26 00         [ 7] 1022 	ld	h,#0x00
   63A6 09            [11] 1023 	add	hl, bc
   63A7 7E            [ 7] 1024 	ld	a, (hl)
   63A8 DD 77 FC      [19] 1025 	ld	-4 (ix), a
   63AB C3 28 63      [10] 1026 	jp	00103$
   63AE                    1027 00106$:
   63AE DD F9         [10] 1028 	ld	sp, ix
   63B0 DD E1         [14] 1029 	pop	ix
   63B2 C9            [10] 1030 	ret
                           1031 ;src/main.c:547: void PrintFrame(u8 xIni, u8 yIni, u8 xEnd, u8 yEnd) {
                           1032 ;	---------------------------------
                           1033 ; Function PrintFrame
                           1034 ; ---------------------------------
   63B3                    1035 _PrintFrame::
   63B3 DD E5         [15] 1036 	push	ix
   63B5 DD 21 00 00   [14] 1037 	ld	ix,#0
   63B9 DD 39         [15] 1038 	add	ix,sp
   63BB 21 F4 FF      [10] 1039 	ld	hl, #-12
   63BE 39            [11] 1040 	add	hl, sp
   63BF F9            [ 6] 1041 	ld	sp, hl
                           1042 ;src/main.c:548: int i = xIni+3;	
   63C0 DD 4E 04      [19] 1043 	ld	c, 4 (ix)
   63C3 06 00         [ 7] 1044 	ld	b, #0x00
   63C5 03            [ 6] 1045 	inc	bc
   63C6 03            [ 6] 1046 	inc	bc
   63C7 03            [ 6] 1047 	inc	bc
   63C8 DD 71 F8      [19] 1048 	ld	-8 (ix), c
   63CB DD 70 F9      [19] 1049 	ld	-7 (ix), b
                           1050 ;src/main.c:550: while (i < xEnd) {		
   63CE DD 7E 05      [19] 1051 	ld	a, 5 (ix)
   63D1 0F            [ 4] 1052 	rrca
   63D2 0F            [ 4] 1053 	rrca
   63D3 0F            [ 4] 1054 	rrca
   63D4 E6 1F         [ 7] 1055 	and	a, #0x1f
   63D6 DD 77 FF      [19] 1056 	ld	-1 (ix), a
   63D9 DD 7E 05      [19] 1057 	ld	a, 5 (ix)
   63DC E6 07         [ 7] 1058 	and	a, #0x07
   63DE DD 77 FE      [19] 1059 	ld	-2 (ix), a
   63E1 DD 7E 07      [19] 1060 	ld	a, 7 (ix)
   63E4 0F            [ 4] 1061 	rrca
   63E5 0F            [ 4] 1062 	rrca
   63E6 0F            [ 4] 1063 	rrca
   63E7 E6 1F         [ 7] 1064 	and	a, #0x1f
   63E9 DD 77 FD      [19] 1065 	ld	-3 (ix), a
   63EC DD 7E 07      [19] 1066 	ld	a, 7 (ix)
   63EF E6 07         [ 7] 1067 	and	a, #0x07
   63F1 DD 77 FC      [19] 1068 	ld	-4 (ix), a
   63F4                    1069 00101$:
   63F4 DD 7E 06      [19] 1070 	ld	a, 6 (ix)
   63F7 DD 77 FA      [19] 1071 	ld	-6 (ix), a
   63FA DD 36 FB 00   [19] 1072 	ld	-5 (ix), #0x00
                           1073 ;src/main.c:551: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yIni), 3, 6, g_maskTable);	
   63FE DD 6E FF      [19] 1074 	ld	l, -1 (ix)
   6401 26 00         [ 7] 1075 	ld	h, #0x00
   6403 DD 5E FE      [19] 1076 	ld	e, -2 (ix)
   6406 16 00         [ 7] 1077 	ld	d, #0x00
                           1078 ;src/main.c:552: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yEnd), 3, 6, g_maskTable);	
   6408 DD 4E FD      [19] 1079 	ld	c, -3 (ix)
   640B 06 00         [ 7] 1080 	ld	b, #0x00
   640D DD 7E FC      [19] 1081 	ld	a, -4 (ix)
   6410 DD 77 F6      [19] 1082 	ld	-10 (ix), a
   6413 DD 36 F7 00   [19] 1083 	ld	-9 (ix), #0x00
                           1084 ;src/main.c:551: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yIni), 3, 6, g_maskTable);	
   6417 D5            [11] 1085 	push	de
   6418 5D            [ 4] 1086 	ld	e, l
   6419 54            [ 4] 1087 	ld	d, h
   641A 29            [11] 1088 	add	hl, hl
   641B 29            [11] 1089 	add	hl, hl
   641C 19            [11] 1090 	add	hl, de
   641D 29            [11] 1091 	add	hl, hl
   641E 29            [11] 1092 	add	hl, hl
   641F 29            [11] 1093 	add	hl, hl
   6420 29            [11] 1094 	add	hl, hl
   6421 D1            [10] 1095 	pop	de
   6422 E3            [19] 1096 	ex	(sp), hl
   6423 7B            [ 4] 1097 	ld	a, e
   6424 07            [ 4] 1098 	rlca
   6425 07            [ 4] 1099 	rlca
   6426 07            [ 4] 1100 	rlca
   6427 E6 F8         [ 7] 1101 	and	a, #0xf8
   6429 57            [ 4] 1102 	ld	d, a
   642A 1E 00         [ 7] 1103 	ld	e, #0x00
                           1104 ;src/main.c:552: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yEnd), 3, 6, g_maskTable);	
   642C 69            [ 4] 1105 	ld	l, c
   642D 60            [ 4] 1106 	ld	h, b
   642E 29            [11] 1107 	add	hl, hl
   642F 29            [11] 1108 	add	hl, hl
   6430 09            [11] 1109 	add	hl, bc
   6431 29            [11] 1110 	add	hl, hl
   6432 29            [11] 1111 	add	hl, hl
   6433 29            [11] 1112 	add	hl, hl
   6434 29            [11] 1113 	add	hl, hl
   6435 DD 7E F6      [19] 1114 	ld	a, -10 (ix)
   6438 07            [ 4] 1115 	rlca
   6439 07            [ 4] 1116 	rlca
   643A 07            [ 4] 1117 	rlca
   643B E6 F8         [ 7] 1118 	and	a, #0xf8
   643D 47            [ 4] 1119 	ld	b, a
   643E 0E 00         [ 7] 1120 	ld	c, #0x00
                           1121 ;src/main.c:551: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yIni), 3, 6, g_maskTable);	
   6440 DD 7E F4      [19] 1122 	ld	a, -12 (ix)
   6443 C6 00         [ 7] 1123 	add	a, #0x00
   6445 DD 77 F4      [19] 1124 	ld	-12 (ix), a
   6448 DD 7E F5      [19] 1125 	ld	a, -11 (ix)
   644B CE C0         [ 7] 1126 	adc	a, #0xc0
   644D DD 77 F5      [19] 1127 	ld	-11 (ix), a
                           1128 ;src/main.c:552: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yEnd), 3, 6, g_maskTable);	
   6450 D5            [11] 1129 	push	de
   6451 11 00 C0      [10] 1130 	ld	de, #0xc000
   6454 19            [11] 1131 	add	hl, de
   6455 D1            [10] 1132 	pop	de
                           1133 ;src/main.c:551: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yIni), 3, 6, g_maskTable);	
   6456 DD 7E F4      [19] 1134 	ld	a, -12 (ix)
   6459 83            [ 4] 1135 	add	a, e
   645A DD 77 F4      [19] 1136 	ld	-12 (ix), a
   645D DD 7E F5      [19] 1137 	ld	a, -11 (ix)
   6460 8A            [ 4] 1138 	adc	a, d
   6461 DD 77 F5      [19] 1139 	ld	-11 (ix), a
                           1140 ;src/main.c:552: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yEnd), 3, 6, g_maskTable);	
   6464 09            [11] 1141 	add	hl,bc
   6465 DD 75 F6      [19] 1142 	ld	-10 (ix), l
   6468 DD 74 F7      [19] 1143 	ld	-9 (ix), h
                           1144 ;src/main.c:550: while (i < xEnd) {		
   646B DD 7E F8      [19] 1145 	ld	a, -8 (ix)
   646E DD 96 FA      [19] 1146 	sub	a, -6 (ix)
   6471 DD 7E F9      [19] 1147 	ld	a, -7 (ix)
   6474 DD 9E FB      [19] 1148 	sbc	a, -5 (ix)
   6477 E2 7C 64      [10] 1149 	jp	PO, 00127$
   647A EE 80         [ 7] 1150 	xor	a, #0x80
   647C                    1151 00127$:
   647C F2 CE 64      [10] 1152 	jp	P, 00103$
                           1153 ;src/main.c:551: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yIni), 3, 6, g_maskTable);	
   647F 01 00 01      [10] 1154 	ld	bc, #_g_maskTable
   6482 DD 7E F4      [19] 1155 	ld	a, -12 (ix)
   6485 DD 86 F8      [19] 1156 	add	a, -8 (ix)
   6488 5F            [ 4] 1157 	ld	e, a
   6489 DD 7E F5      [19] 1158 	ld	a, -11 (ix)
   648C DD 8E F9      [19] 1159 	adc	a, -7 (ix)
   648F 57            [ 4] 1160 	ld	d, a
   6490 C5            [11] 1161 	push	bc
   6491 21 03 06      [10] 1162 	ld	hl, #0x0603
   6494 E5            [11] 1163 	push	hl
   6495 D5            [11] 1164 	push	de
   6496 21 A5 16      [10] 1165 	ld	hl, #_g_goldframe_2
   6499 E5            [11] 1166 	push	hl
   649A CD E5 5D      [17] 1167 	call	_cpct_drawSpriteMaskedAlignedTable
                           1168 ;src/main.c:552: cpct_drawSpriteMaskedAlignedTable(g_goldframe_2, cpctm_screenPtr(CPCT_VMEM_START, i, yEnd), 3, 6, g_maskTable);	
   649D DD 7E F6      [19] 1169 	ld	a, -10 (ix)
   64A0 DD 86 F8      [19] 1170 	add	a, -8 (ix)
   64A3 4F            [ 4] 1171 	ld	c, a
   64A4 DD 7E F7      [19] 1172 	ld	a, -9 (ix)
   64A7 DD 8E F9      [19] 1173 	adc	a, -7 (ix)
   64AA 47            [ 4] 1174 	ld	b, a
   64AB 21 00 01      [10] 1175 	ld	hl, #_g_maskTable
   64AE E5            [11] 1176 	push	hl
   64AF 21 03 06      [10] 1177 	ld	hl, #0x0603
   64B2 E5            [11] 1178 	push	hl
   64B3 C5            [11] 1179 	push	bc
   64B4 21 A5 16      [10] 1180 	ld	hl, #_g_goldframe_2
   64B7 E5            [11] 1181 	push	hl
   64B8 CD E5 5D      [17] 1182 	call	_cpct_drawSpriteMaskedAlignedTable
                           1183 ;src/main.c:553: i += 3;
   64BB DD 7E F8      [19] 1184 	ld	a, -8 (ix)
   64BE C6 03         [ 7] 1185 	add	a, #0x03
   64C0 DD 77 F8      [19] 1186 	ld	-8 (ix), a
   64C3 DD 7E F9      [19] 1187 	ld	a, -7 (ix)
   64C6 CE 00         [ 7] 1188 	adc	a, #0x00
   64C8 DD 77 F9      [19] 1189 	ld	-7 (ix), a
   64CB C3 F4 63      [10] 1190 	jp	00101$
   64CE                    1191 00103$:
                           1192 ;src/main.c:556: i = yIni+6;
   64CE DD 4E 05      [19] 1193 	ld	c, 5 (ix)
   64D1 06 00         [ 7] 1194 	ld	b, #0x00
   64D3 21 06 00      [10] 1195 	ld	hl, #0x0006
   64D6 09            [11] 1196 	add	hl,bc
   64D7 DD 75 FA      [19] 1197 	ld	-6 (ix), l
   64DA DD 74 FB      [19] 1198 	ld	-5 (ix), h
                           1199 ;src/main.c:557: while (i < yEnd) {		
   64DD                    1200 00104$:
   64DD DD 4E 07      [19] 1201 	ld	c, 7 (ix)
   64E0 06 00         [ 7] 1202 	ld	b, #0x00
   64E2 DD 7E FA      [19] 1203 	ld	a, -6 (ix)
   64E5 91            [ 4] 1204 	sub	a, c
   64E6 DD 7E FB      [19] 1205 	ld	a, -5 (ix)
   64E9 98            [ 4] 1206 	sbc	a, b
   64EA E2 EF 64      [10] 1207 	jp	PO, 00128$
   64ED EE 80         [ 7] 1208 	xor	a, #0x80
   64EF                    1209 00128$:
   64EF F2 79 65      [10] 1210 	jp	P, 00106$
                           1211 ;src/main.c:558: cpct_drawSpriteMaskedAlignedTable(g_goldframe_1, cpctm_screenPtr(CPCT_VMEM_START, xIni, i), 3, 6, g_maskTable);	
   64F2 DD 7E FA      [19] 1212 	ld	a, -6 (ix)
   64F5 DD 77 F8      [19] 1213 	ld	-8 (ix), a
   64F8 DD 7E FB      [19] 1214 	ld	a, -5 (ix)
   64FB DD 77 F9      [19] 1215 	ld	-7 (ix), a
   64FE DD CB F9 2E   [23] 1216 	sra	-7 (ix)
   6502 DD CB F8 1E   [23] 1217 	rr	-8 (ix)
   6506 DD CB F9 2E   [23] 1218 	sra	-7 (ix)
   650A DD CB F8 1E   [23] 1219 	rr	-8 (ix)
   650E DD CB F9 2E   [23] 1220 	sra	-7 (ix)
   6512 DD CB F8 1E   [23] 1221 	rr	-8 (ix)
   6516 DD 4E F8      [19] 1222 	ld	c,-8 (ix)
   6519 DD 46 F9      [19] 1223 	ld	b,-7 (ix)
   651C 69            [ 4] 1224 	ld	l, c
   651D 60            [ 4] 1225 	ld	h, b
   651E 29            [11] 1226 	add	hl, hl
   651F 29            [11] 1227 	add	hl, hl
   6520 09            [11] 1228 	add	hl, bc
   6521 29            [11] 1229 	add	hl, hl
   6522 29            [11] 1230 	add	hl, hl
   6523 29            [11] 1231 	add	hl, hl
   6524 29            [11] 1232 	add	hl, hl
   6525 01 00 C0      [10] 1233 	ld	bc, #0xc000
   6528 09            [11] 1234 	add	hl, bc
   6529 DD 7E FA      [19] 1235 	ld	a, -6 (ix)
   652C E6 07         [ 7] 1236 	and	a, #0x07
   652E 07            [ 4] 1237 	rlca
   652F 07            [ 4] 1238 	rlca
   6530 07            [ 4] 1239 	rlca
   6531 E6 F8         [ 7] 1240 	and	a, #0xf8
   6533 47            [ 4] 1241 	ld	b, a
   6534 0E 00         [ 7] 1242 	ld	c, #0x00
   6536 09            [11] 1243 	add	hl,bc
   6537 EB            [ 4] 1244 	ex	de,hl
   6538 DD 6E 04      [19] 1245 	ld	l,4 (ix)
   653B 26 00         [ 7] 1246 	ld	h,#0x00
   653D 19            [11] 1247 	add	hl, de
   653E D5            [11] 1248 	push	de
   653F 01 00 01      [10] 1249 	ld	bc, #_g_maskTable
   6542 C5            [11] 1250 	push	bc
   6543 01 03 06      [10] 1251 	ld	bc, #0x0603
   6546 C5            [11] 1252 	push	bc
   6547 E5            [11] 1253 	push	hl
   6548 21 93 16      [10] 1254 	ld	hl, #_g_goldframe_1
   654B E5            [11] 1255 	push	hl
   654C CD E5 5D      [17] 1256 	call	_cpct_drawSpriteMaskedAlignedTable
   654F D1            [10] 1257 	pop	de
                           1258 ;src/main.c:559: cpct_drawSpriteMaskedAlignedTable(g_goldframe_1, cpctm_screenPtr(CPCT_VMEM_START, xEnd, i), 3, 6, g_maskTable);	
   6550 01 00 01      [10] 1259 	ld	bc, #_g_maskTable
   6553 DD 6E 06      [19] 1260 	ld	l,6 (ix)
   6556 26 00         [ 7] 1261 	ld	h,#0x00
   6558 19            [11] 1262 	add	hl, de
   6559 C5            [11] 1263 	push	bc
   655A 01 03 06      [10] 1264 	ld	bc, #0x0603
   655D C5            [11] 1265 	push	bc
   655E E5            [11] 1266 	push	hl
   655F 21 93 16      [10] 1267 	ld	hl, #_g_goldframe_1
   6562 E5            [11] 1268 	push	hl
   6563 CD E5 5D      [17] 1269 	call	_cpct_drawSpriteMaskedAlignedTable
                           1270 ;src/main.c:560: i += 6;
   6566 DD 7E FA      [19] 1271 	ld	a, -6 (ix)
   6569 C6 06         [ 7] 1272 	add	a, #0x06
   656B DD 77 FA      [19] 1273 	ld	-6 (ix), a
   656E DD 7E FB      [19] 1274 	ld	a, -5 (ix)
   6571 CE 00         [ 7] 1275 	adc	a, #0x00
   6573 DD 77 FB      [19] 1276 	ld	-5 (ix), a
   6576 C3 DD 64      [10] 1277 	jp	00104$
   6579                    1278 00106$:
                           1279 ;src/main.c:564: cpct_drawSpriteMaskedAlignedTable(g_goldframe_0, cpctm_screenPtr(CPCT_VMEM_START, xIni, yIni), 3, 6, g_maskTable);
   6579 DD 7E F4      [19] 1280 	ld	a, -12 (ix)
   657C DD 86 04      [19] 1281 	add	a, 4 (ix)
   657F 4F            [ 4] 1282 	ld	c, a
   6580 DD 7E F5      [19] 1283 	ld	a, -11 (ix)
   6583 CE 00         [ 7] 1284 	adc	a, #0x00
   6585 47            [ 4] 1285 	ld	b, a
   6586 21 00 01      [10] 1286 	ld	hl, #_g_maskTable
   6589 E5            [11] 1287 	push	hl
   658A 21 03 06      [10] 1288 	ld	hl, #0x0603
   658D E5            [11] 1289 	push	hl
   658E C5            [11] 1290 	push	bc
   658F 21 81 16      [10] 1291 	ld	hl, #_g_goldframe_0
   6592 E5            [11] 1292 	push	hl
   6593 CD E5 5D      [17] 1293 	call	_cpct_drawSpriteMaskedAlignedTable
                           1294 ;src/main.c:566: cpct_drawSpriteMaskedAlignedTable(g_goldframe_0, cpctm_screenPtr(CPCT_VMEM_START, xEnd, yIni), 3, 6, g_maskTable);
   6596 DD 7E F4      [19] 1295 	ld	a, -12 (ix)
   6599 DD 86 06      [19] 1296 	add	a, 6 (ix)
   659C 4F            [ 4] 1297 	ld	c, a
   659D DD 7E F5      [19] 1298 	ld	a, -11 (ix)
   65A0 CE 00         [ 7] 1299 	adc	a, #0x00
   65A2 47            [ 4] 1300 	ld	b, a
   65A3 21 00 01      [10] 1301 	ld	hl, #_g_maskTable
   65A6 E5            [11] 1302 	push	hl
   65A7 21 03 06      [10] 1303 	ld	hl, #0x0603
   65AA E5            [11] 1304 	push	hl
   65AB C5            [11] 1305 	push	bc
   65AC 21 81 16      [10] 1306 	ld	hl, #_g_goldframe_0
   65AF E5            [11] 1307 	push	hl
   65B0 CD E5 5D      [17] 1308 	call	_cpct_drawSpriteMaskedAlignedTable
                           1309 ;src/main.c:568: cpct_drawSpriteMaskedAlignedTable(g_goldframe_0, cpctm_screenPtr(CPCT_VMEM_START, xIni, yEnd), 3, 6, g_maskTable);
   65B3 DD 7E F6      [19] 1310 	ld	a, -10 (ix)
   65B6 DD 86 04      [19] 1311 	add	a, 4 (ix)
   65B9 4F            [ 4] 1312 	ld	c, a
   65BA DD 7E F7      [19] 1313 	ld	a, -9 (ix)
   65BD CE 00         [ 7] 1314 	adc	a, #0x00
   65BF 47            [ 4] 1315 	ld	b, a
   65C0 21 00 01      [10] 1316 	ld	hl, #_g_maskTable
   65C3 E5            [11] 1317 	push	hl
   65C4 21 03 06      [10] 1318 	ld	hl, #0x0603
   65C7 E5            [11] 1319 	push	hl
   65C8 C5            [11] 1320 	push	bc
   65C9 21 81 16      [10] 1321 	ld	hl, #_g_goldframe_0
   65CC E5            [11] 1322 	push	hl
   65CD CD E5 5D      [17] 1323 	call	_cpct_drawSpriteMaskedAlignedTable
                           1324 ;src/main.c:570: cpct_drawSpriteMaskedAlignedTable(g_goldframe_0, cpctm_screenPtr(CPCT_VMEM_START, xEnd, yEnd), 3, 6, g_maskTable);									
   65D0 DD 7E F6      [19] 1325 	ld	a, -10 (ix)
   65D3 DD 86 06      [19] 1326 	add	a, 6 (ix)
   65D6 4F            [ 4] 1327 	ld	c, a
   65D7 DD 7E F7      [19] 1328 	ld	a, -9 (ix)
   65DA CE 00         [ 7] 1329 	adc	a, #0x00
   65DC 47            [ 4] 1330 	ld	b, a
   65DD 21 00 01      [10] 1331 	ld	hl, #_g_maskTable
   65E0 E5            [11] 1332 	push	hl
   65E1 21 03 06      [10] 1333 	ld	hl, #0x0603
   65E4 E5            [11] 1334 	push	hl
   65E5 C5            [11] 1335 	push	bc
   65E6 21 81 16      [10] 1336 	ld	hl, #_g_goldframe_0
   65E9 E5            [11] 1337 	push	hl
   65EA CD E5 5D      [17] 1338 	call	_cpct_drawSpriteMaskedAlignedTable
   65ED DD F9         [10] 1339 	ld	sp, ix
   65EF DD E1         [14] 1340 	pop	ix
   65F1 C9            [10] 1341 	ret
                           1342 ;src/main.c:586: void PrintSmallBlueBox() {
                           1343 ;	---------------------------------
                           1344 ; Function PrintSmallBlueBox
                           1345 ; ---------------------------------
   65F2                    1346 _PrintSmallBlueBox::
                           1347 ;src/main.c:587: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START,  6, 80), cpct_px2byteM0(4, 4), 34, 60);
   65F2 21 04 04      [10] 1348 	ld	hl, #0x0404
   65F5 E5            [11] 1349 	push	hl
   65F6 CD B3 5C      [17] 1350 	call	_cpct_px2byteM0
   65F9 26 00         [ 7] 1351 	ld	h, #0x00
   65FB 01 22 3C      [10] 1352 	ld	bc, #0x3c22
   65FE C5            [11] 1353 	push	bc
   65FF E5            [11] 1354 	push	hl
   6600 21 26 C3      [10] 1355 	ld	hl, #0xc326
   6603 E5            [11] 1356 	push	hl
   6604 CD ED 5C      [17] 1357 	call	_cpct_drawSolidBox
                           1358 ;src/main.c:588: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 40, 80), cpct_px2byteM0(4, 4), 34, 60);
   6607 21 04 04      [10] 1359 	ld	hl, #0x0404
   660A E5            [11] 1360 	push	hl
   660B CD B3 5C      [17] 1361 	call	_cpct_px2byteM0
   660E 26 00         [ 7] 1362 	ld	h, #0x00
   6610 01 22 3C      [10] 1363 	ld	bc, #0x3c22
   6613 C5            [11] 1364 	push	bc
   6614 E5            [11] 1365 	push	hl
   6615 21 48 C3      [10] 1366 	ld	hl, #0xc348
   6618 E5            [11] 1367 	push	hl
   6619 CD ED 5C      [17] 1368 	call	_cpct_drawSolidBox
                           1369 ;src/main.c:589: PrintFrame(6,80,71,134);
   661C 21 47 86      [10] 1370 	ld	hl, #0x8647
   661F E5            [11] 1371 	push	hl
   6620 21 06 50      [10] 1372 	ld	hl, #0x5006
   6623 E5            [11] 1373 	push	hl
   6624 CD B3 63      [17] 1374 	call	_PrintFrame
   6627 F1            [10] 1375 	pop	af
   6628 F1            [10] 1376 	pop	af
   6629 C9            [10] 1377 	ret
                           1378 ;src/main.c:594: void PrintLevelInfo() {
                           1379 ;	---------------------------------
                           1380 ; Function PrintLevelInfo
                           1381 ; ---------------------------------
   662A                    1382 _PrintLevelInfo::
                           1383 ;src/main.c:595: PrintSmallBlueBox();	
   662A CD F2 65      [17] 1384 	call	_PrintSmallBlueBox
                           1385 ;src/main.c:597: if (TwoPlayers) {
   662D 3A D4 5E      [13] 1386 	ld	a,(#_TwoPlayers + 0)
   6630 B7            [ 4] 1387 	or	a, a
   6631 28 49         [12] 1388 	jr	Z,00102$
                           1389 ;src/main.c:598: PrintText("LEVEL", 13, 95, 0);
   6633 21 5F 00      [10] 1390 	ld	hl, #0x005f
   6636 E5            [11] 1391 	push	hl
   6637 3E 0D         [ 7] 1392 	ld	a, #0x0d
   6639 F5            [11] 1393 	push	af
   663A 33            [ 6] 1394 	inc	sp
   663B 21 BB 66      [10] 1395 	ld	hl, #___str_1
   663E E5            [11] 1396 	push	hl
   663F CD 10 63      [17] 1397 	call	_PrintText
   6642 F1            [10] 1398 	pop	af
                           1399 ;src/main.c:599: PrintText(lName, 31, 95, 0);
   6643 33            [ 6] 1400 	inc	sp
   6644 21 5F 00      [10] 1401 	ld	hl,#0x005f
   6647 E3            [19] 1402 	ex	(sp),hl
   6648 3E 1F         [ 7] 1403 	ld	a, #0x1f
   664A F5            [11] 1404 	push	af
   664B 33            [ 6] 1405 	inc	sp
   664C 2A D2 5E      [16] 1406 	ld	hl, (_lName)
   664F E5            [11] 1407 	push	hl
   6650 CD 10 63      [17] 1408 	call	_PrintText
   6653 F1            [10] 1409 	pop	af
                           1410 ;src/main.c:600: PrintText("HIGH@SCORE:", 16, 118, 0);
   6654 33            [ 6] 1411 	inc	sp
   6655 21 76 00      [10] 1412 	ld	hl,#0x0076
   6658 E3            [19] 1413 	ex	(sp),hl
   6659 3E 10         [ 7] 1414 	ld	a, #0x10
   665B F5            [11] 1415 	push	af
   665C 33            [ 6] 1416 	inc	sp
   665D 21 C1 66      [10] 1417 	ld	hl, #___str_2
   6660 E5            [11] 1418 	push	hl
   6661 CD 10 63      [17] 1419 	call	_PrintText
   6664 F1            [10] 1420 	pop	af
                           1421 ;src/main.c:601: PrintNumber(highScore, 4, 52, 118, 0);
   6665 33            [ 6] 1422 	inc	sp
   6666 21 76 00      [10] 1423 	ld	hl,#0x0076
   6669 E3            [19] 1424 	ex	(sp),hl
   666A 21 04 34      [10] 1425 	ld	hl, #0x3404
   666D E5            [11] 1426 	push	hl
   666E 2A D9 5E      [16] 1427 	ld	hl, (_highScore)
   6671 E5            [11] 1428 	push	hl
   6672 CD 41 62      [17] 1429 	call	_PrintNumber
   6675 21 06 00      [10] 1430 	ld	hl, #6
   6678 39            [11] 1431 	add	hl, sp
   6679 F9            [ 6] 1432 	ld	sp, hl
   667A 18 23         [12] 1433 	jr	00103$
   667C                    1434 00102$:
                           1435 ;src/main.c:604: PrintText("LEVEL", 13, 107, 0);
   667C 21 6B 00      [10] 1436 	ld	hl, #0x006b
   667F E5            [11] 1437 	push	hl
   6680 3E 0D         [ 7] 1438 	ld	a, #0x0d
   6682 F5            [11] 1439 	push	af
   6683 33            [ 6] 1440 	inc	sp
   6684 21 BB 66      [10] 1441 	ld	hl, #___str_1
   6687 E5            [11] 1442 	push	hl
   6688 CD 10 63      [17] 1443 	call	_PrintText
   668B F1            [10] 1444 	pop	af
                           1445 ;src/main.c:605: PrintText(lName, 31, 107, 0);
   668C 33            [ 6] 1446 	inc	sp
   668D 21 6B 00      [10] 1447 	ld	hl,#0x006b
   6690 E3            [19] 1448 	ex	(sp),hl
   6691 3E 1F         [ 7] 1449 	ld	a, #0x1f
   6693 F5            [11] 1450 	push	af
   6694 33            [ 6] 1451 	inc	sp
   6695 2A D2 5E      [16] 1452 	ld	hl, (_lName)
   6698 E5            [11] 1453 	push	hl
   6699 CD 10 63      [17] 1454 	call	_PrintText
   669C F1            [10] 1455 	pop	af
   669D F1            [10] 1456 	pop	af
   669E 33            [ 6] 1457 	inc	sp
   669F                    1458 00103$:
                           1459 ;src/main.c:608: cpct_akp_musicInit(g_start); // start level music
   669F 21 00 02      [10] 1460 	ld	hl, #_g_start
   66A2 E5            [11] 1461 	push	hl
   66A3 CD 48 59      [17] 1462 	call	_cpct_akp_musicInit
   66A6 F1            [10] 1463 	pop	af
                           1464 ;src/main.c:609: Pause(1150);
   66A7 21 7E 04      [10] 1465 	ld	hl, #0x047e
   66AA CD 81 61      [17] 1466 	call	_Pause
                           1467 ;src/main.c:610: if (music)
   66AD 3A EB 5E      [13] 1468 	ld	a,(#_music + 0)
   66B0 B7            [ 4] 1469 	or	a, a
   66B1 C8            [11] 1470 	ret	Z
                           1471 ;src/main.c:611: cpct_akp_musicInit(g_ingame); // music ingame
   66B2 21 91 07      [10] 1472 	ld	hl, #_g_ingame
   66B5 E5            [11] 1473 	push	hl
   66B6 CD 48 59      [17] 1474 	call	_cpct_akp_musicInit
   66B9 F1            [10] 1475 	pop	af
   66BA C9            [10] 1476 	ret
   66BB                    1477 ___str_1:
   66BB 4C 45 56 45 4C     1478 	.ascii "LEVEL"
   66C0 00                 1479 	.db 0x00
   66C1                    1480 ___str_2:
   66C1 48 49 47 48 40 53  1481 	.ascii "HIGH@SCORE:"
        43 4F 52 45 3A
   66CC 00                 1482 	.db 0x00
                           1483 ;src/main.c:615: void PrintEndGame(u8 player) __z88dk_fastcall {
                           1484 ;	---------------------------------
                           1485 ; Function PrintEndGame
                           1486 ; ---------------------------------
   66CD                    1487 _PrintEndGame::
   66CD 3B            [ 6] 1488 	dec	sp
   66CE FD 21 00 00   [14] 1489 	ld	iy, #0
   66D2 FD 39         [15] 1490 	add	iy, sp
   66D4 FD 75 00      [19] 1491 	ld	0 (iy), l
                           1492 ;src/main.c:617: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 5, 40), cpct_px2byteM0(4, 4), 35, 144);
   66D7 21 04 04      [10] 1493 	ld	hl, #0x0404
   66DA E5            [11] 1494 	push	hl
   66DB CD B3 5C      [17] 1495 	call	_cpct_px2byteM0
   66DE 26 00         [ 7] 1496 	ld	h, #0x00
   66E0 01 23 90      [10] 1497 	ld	bc, #0x9023
   66E3 C5            [11] 1498 	push	bc
   66E4 E5            [11] 1499 	push	hl
   66E5 21 95 C1      [10] 1500 	ld	hl, #0xc195
   66E8 E5            [11] 1501 	push	hl
   66E9 CD ED 5C      [17] 1502 	call	_cpct_drawSolidBox
                           1503 ;src/main.c:618: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 40, 40), cpct_px2byteM0(4, 4), 35, 144);	
   66EC 21 04 04      [10] 1504 	ld	hl, #0x0404
   66EF E5            [11] 1505 	push	hl
   66F0 CD B3 5C      [17] 1506 	call	_cpct_px2byteM0
   66F3 26 00         [ 7] 1507 	ld	h, #0x00
   66F5 01 23 90      [10] 1508 	ld	bc, #0x9023
   66F8 C5            [11] 1509 	push	bc
   66F9 E5            [11] 1510 	push	hl
   66FA 21 B8 C1      [10] 1511 	ld	hl, #0xc1b8
   66FD E5            [11] 1512 	push	hl
   66FE CD ED 5C      [17] 1513 	call	_cpct_drawSolidBox
                           1514 ;src/main.c:619: PrintFrame(5,40,72,178);
   6701 21 48 B2      [10] 1515 	ld	hl, #0xb248
   6704 E5            [11] 1516 	push	hl
   6705 21 05 28      [10] 1517 	ld	hl, #0x2805
   6708 E5            [11] 1518 	push	hl
   6709 CD B3 63      [17] 1519 	call	_PrintFrame
   670C F1            [10] 1520 	pop	af
                           1521 ;src/main.c:621: PrintText("CONGRATULATIONS", 12, 60, 0);
   670D 21 3C 00      [10] 1522 	ld	hl, #0x003c
   6710 E3            [19] 1523 	ex	(sp),hl
   6711 3E 0C         [ 7] 1524 	ld	a, #0x0c
   6713 F5            [11] 1525 	push	af
   6714 33            [ 6] 1526 	inc	sp
   6715 21 B8 67      [10] 1527 	ld	hl, #___str_3
   6718 E5            [11] 1528 	push	hl
   6719 CD 10 63      [17] 1529 	call	_PrintText
   671C F1            [10] 1530 	pop	af
                           1531 ;src/main.c:622: PrintText("PLAYER@@>", 12, 70, 0);
   671D 33            [ 6] 1532 	inc	sp
   671E 21 46 00      [10] 1533 	ld	hl,#0x0046
   6721 E3            [19] 1534 	ex	(sp),hl
   6722 3E 0C         [ 7] 1535 	ld	a, #0x0c
   6724 F5            [11] 1536 	push	af
   6725 33            [ 6] 1537 	inc	sp
   6726 21 C8 67      [10] 1538 	ld	hl, #___str_4
   6729 E5            [11] 1539 	push	hl
   672A CD 10 63      [17] 1540 	call	_PrintText
   672D F1            [10] 1541 	pop	af
   672E F1            [10] 1542 	pop	af
   672F 33            [ 6] 1543 	inc	sp
                           1544 ;src/main.c:623: PrintNumber(++player, 1, 33, 70, 0);
   6730 21 00 00      [10] 1545 	ld	hl, #0+0
   6733 39            [11] 1546 	add	hl, sp
   6734 4E            [ 7] 1547 	ld	c, (hl)
   6735 0C            [ 4] 1548 	inc	c
   6736 06 00         [ 7] 1549 	ld	b, #0x00
   6738 21 46 00      [10] 1550 	ld	hl, #0x0046
   673B E5            [11] 1551 	push	hl
   673C 21 01 21      [10] 1552 	ld	hl, #0x2101
   673F E5            [11] 1553 	push	hl
   6740 C5            [11] 1554 	push	bc
   6741 CD 41 62      [17] 1555 	call	_PrintNumber
   6744 21 06 00      [10] 1556 	ld	hl, #6
   6747 39            [11] 1557 	add	hl, sp
   6748 F9            [ 6] 1558 	ld	sp, hl
                           1559 ;src/main.c:624: PrintText("YOU@FOUND@YOUR", 12, 90, 0);
   6749 21 5A 00      [10] 1560 	ld	hl, #0x005a
   674C E5            [11] 1561 	push	hl
   674D 3E 0C         [ 7] 1562 	ld	a, #0x0c
   674F F5            [11] 1563 	push	af
   6750 33            [ 6] 1564 	inc	sp
   6751 21 D2 67      [10] 1565 	ld	hl, #___str_5
   6754 E5            [11] 1566 	push	hl
   6755 CD 10 63      [17] 1567 	call	_PrintText
   6758 F1            [10] 1568 	pop	af
                           1569 ;src/main.c:625: PrintText("FATHERS@SPELL@BOOK", 12, 100, 0);
   6759 33            [ 6] 1570 	inc	sp
   675A 21 64 00      [10] 1571 	ld	hl,#0x0064
   675D E3            [19] 1572 	ex	(sp),hl
   675E 3E 0C         [ 7] 1573 	ld	a, #0x0c
   6760 F5            [11] 1574 	push	af
   6761 33            [ 6] 1575 	inc	sp
   6762 21 E1 67      [10] 1576 	ld	hl, #___str_6
   6765 E5            [11] 1577 	push	hl
   6766 CD 10 63      [17] 1578 	call	_PrintText
   6769 F1            [10] 1579 	pop	af
                           1580 ;src/main.c:626: PrintText("NOW@YOUR@POWER@WILL", 12, 120, 0);
   676A 33            [ 6] 1581 	inc	sp
   676B 21 78 00      [10] 1582 	ld	hl,#0x0078
   676E E3            [19] 1583 	ex	(sp),hl
   676F 3E 0C         [ 7] 1584 	ld	a, #0x0c
   6771 F5            [11] 1585 	push	af
   6772 33            [ 6] 1586 	inc	sp
   6773 21 F4 67      [10] 1587 	ld	hl, #___str_7
   6776 E5            [11] 1588 	push	hl
   6777 CD 10 63      [17] 1589 	call	_PrintText
   677A F1            [10] 1590 	pop	af
                           1591 ;src/main.c:627: PrintText("BE@UNSURPASSED", 12, 130, 0);
   677B 33            [ 6] 1592 	inc	sp
   677C 21 82 00      [10] 1593 	ld	hl,#0x0082
   677F E3            [19] 1594 	ex	(sp),hl
   6780 3E 0C         [ 7] 1595 	ld	a, #0x0c
   6782 F5            [11] 1596 	push	af
   6783 33            [ 6] 1597 	inc	sp
   6784 21 08 68      [10] 1598 	ld	hl, #___str_8
   6787 E5            [11] 1599 	push	hl
   6788 CD 10 63      [17] 1600 	call	_PrintText
   678B F1            [10] 1601 	pop	af
                           1602 ;src/main.c:628: PrintText(";THANKS@FOR@PLAYING;", 10, 160, 0);	
   678C 33            [ 6] 1603 	inc	sp
   678D 21 A0 00      [10] 1604 	ld	hl,#0x00a0
   6790 E3            [19] 1605 	ex	(sp),hl
   6791 3E 0A         [ 7] 1606 	ld	a, #0x0a
   6793 F5            [11] 1607 	push	af
   6794 33            [ 6] 1608 	inc	sp
   6795 21 17 68      [10] 1609 	ld	hl, #___str_9
   6798 E5            [11] 1610 	push	hl
   6799 CD 10 63      [17] 1611 	call	_PrintText
   679C F1            [10] 1612 	pop	af
                           1613 ;src/main.c:630: cpct_akp_musicInit(g_completed); // completed level theme
   679D 33            [ 6] 1614 	inc	sp
   679E 21 9E 04      [10] 1615 	ld	hl,#_g_completed
   67A1 E3            [19] 1616 	ex	(sp),hl
   67A2 CD 48 59      [17] 1617 	call	_cpct_akp_musicInit
   67A5 F1            [10] 1618 	pop	af
                           1619 ;src/main.c:631: Pause(1000);
   67A6 21 E8 03      [10] 1620 	ld	hl, #0x03e8
   67A9 CD 81 61      [17] 1621 	call	_Pause
                           1622 ;src/main.c:632: while (!cpct_isAnyKeyPressed()); // wait for a key press
   67AC                    1623 00101$:
   67AC CD E5 5B      [17] 1624 	call	_cpct_isAnyKeyPressed
   67AF 7D            [ 4] 1625 	ld	a, l
   67B0 B7            [ 4] 1626 	or	a, a
   67B1 28 F9         [12] 1627 	jr	Z,00101$
                           1628 ;src/main.c:633: InitGame();
   67B3 CD 12 A2      [17] 1629 	call	_InitGame
   67B6 33            [ 6] 1630 	inc	sp
   67B7 C9            [10] 1631 	ret
   67B8                    1632 ___str_3:
   67B8 43 4F 4E 47 52 41  1633 	.ascii "CONGRATULATIONS"
        54 55 4C 41 54 49
        4F 4E 53
   67C7 00                 1634 	.db 0x00
   67C8                    1635 ___str_4:
   67C8 50 4C 41 59 45 52  1636 	.ascii "PLAYER@@>"
        40 40 3E
   67D1 00                 1637 	.db 0x00
   67D2                    1638 ___str_5:
   67D2 59 4F 55 40 46 4F  1639 	.ascii "YOU@FOUND@YOUR"
        55 4E 44 40 59 4F
        55 52
   67E0 00                 1640 	.db 0x00
   67E1                    1641 ___str_6:
   67E1 46 41 54 48 45 52  1642 	.ascii "FATHERS@SPELL@BOOK"
        53 40 53 50 45 4C
        4C 40 42 4F 4F 4B
   67F3 00                 1643 	.db 0x00
   67F4                    1644 ___str_7:
   67F4 4E 4F 57 40 59 4F  1645 	.ascii "NOW@YOUR@POWER@WILL"
        55 52 40 50 4F 57
        45 52 40 57 49 4C
        4C
   6807 00                 1646 	.db 0x00
   6808                    1647 ___str_8:
   6808 42 45 40 55 4E 53  1648 	.ascii "BE@UNSURPASSED"
        55 52 50 41 53 53
        45 44
   6816 00                 1649 	.db 0x00
   6817                    1650 ___str_9:
   6817 3B 54 48 41 4E 4B  1651 	.ascii ";THANKS@FOR@PLAYING;"
        53 40 46 4F 52 40
        50 4C 41 59 49 4E
        47 3B
   682B 00                 1652 	.db 0x00
                           1653 ;src/main.c:638: void PrintTip() {
                           1654 ;	---------------------------------
                           1655 ; Function PrintTip
                           1656 ; ---------------------------------
   682C                    1657 _PrintTip::
                           1658 ;src/main.c:639: PrintSprite(&spr[0]);
   682C 21 0A 5F      [10] 1659 	ld	hl, #_spr
   682F CD 03 79      [17] 1660 	call	_PrintSprite
                           1661 ;src/main.c:640: PrintSmallBlueBox();
   6832 CD F2 65      [17] 1662 	call	_PrintSmallBlueBox
                           1663 ;src/main.c:641: switch (nTip) {
   6835 FD 21 F0 5E   [14] 1664 	ld	iy, #_nTip
   6839 FD 7E 00      [19] 1665 	ld	a, 0 (iy)
   683C B7            [ 4] 1666 	or	a, a
   683D 28 18         [12] 1667 	jr	Z,00101$
   683F FD 7E 00      [19] 1668 	ld	a, 0 (iy)
   6842 3D            [ 4] 1669 	dec	a
   6843 28 49         [12] 1670 	jr	Z,00102$
   6845 FD 7E 00      [19] 1671 	ld	a, 0 (iy)
   6848 D6 02         [ 7] 1672 	sub	a, #0x02
   684A 28 78         [12] 1673 	jr	Z,00103$
   684C FD 7E 00      [19] 1674 	ld	a, 0 (iy)
   684F D6 03         [ 7] 1675 	sub	a, #0x03
   6851 CA FA 68      [10] 1676 	jp	Z,00104$
   6854 C3 2E 69      [10] 1677 	jp	00105$
                           1678 ;src/main.c:642: case 0: {
   6857                    1679 00101$:
                           1680 ;src/main.c:643: PrintText("TIP:@TAKE@THE@EXACT", 11, 95, 0);
   6857 21 5F 00      [10] 1681 	ld	hl, #0x005f
   685A E5            [11] 1682 	push	hl
   685B 3E 0B         [ 7] 1683 	ld	a, #0x0b
   685D F5            [11] 1684 	push	af
   685E 33            [ 6] 1685 	inc	sp
   685F 21 42 69      [10] 1686 	ld	hl, #___str_10
   6862 E5            [11] 1687 	push	hl
   6863 CD 10 63      [17] 1688 	call	_PrintText
   6866 F1            [10] 1689 	pop	af
                           1690 ;src/main.c:644: PrintText("COINS@TO@BUY@THE", 16, 105, 0);
   6867 33            [ 6] 1691 	inc	sp
   6868 21 69 00      [10] 1692 	ld	hl,#0x0069
   686B E3            [19] 1693 	ex	(sp),hl
   686C 3E 10         [ 7] 1694 	ld	a, #0x10
   686E F5            [11] 1695 	push	af
   686F 33            [ 6] 1696 	inc	sp
   6870 21 56 69      [10] 1697 	ld	hl, #___str_11
   6873 E5            [11] 1698 	push	hl
   6874 CD 10 63      [17] 1699 	call	_PrintText
   6877 F1            [10] 1700 	pop	af
                           1701 ;src/main.c:645: PrintText("REQUIRED@INGREDIENT", 11, 115, 0);
   6878 33            [ 6] 1702 	inc	sp
   6879 21 73 00      [10] 1703 	ld	hl,#0x0073
   687C E3            [19] 1704 	ex	(sp),hl
   687D 3E 0B         [ 7] 1705 	ld	a, #0x0b
   687F F5            [11] 1706 	push	af
   6880 33            [ 6] 1707 	inc	sp
   6881 21 67 69      [10] 1708 	ld	hl, #___str_12
   6884 E5            [11] 1709 	push	hl
   6885 CD 10 63      [17] 1710 	call	_PrintText
   6888 F1            [10] 1711 	pop	af
   6889 F1            [10] 1712 	pop	af
   688A 33            [ 6] 1713 	inc	sp
                           1714 ;src/main.c:646: break;
   688B C3 2E 69      [10] 1715 	jp	00105$
                           1716 ;src/main.c:648: case 1: {
   688E                    1717 00102$:
                           1718 ;src/main.c:649: PrintText("TIP:@GO@TO@THE@SHOP", 11, 95, 0);
   688E 21 5F 00      [10] 1719 	ld	hl, #0x005f
   6891 E5            [11] 1720 	push	hl
   6892 3E 0B         [ 7] 1721 	ld	a, #0x0b
   6894 F5            [11] 1722 	push	af
   6895 33            [ 6] 1723 	inc	sp
   6896 21 7B 69      [10] 1724 	ld	hl, #___str_13
   6899 E5            [11] 1725 	push	hl
   689A CD 10 63      [17] 1726 	call	_PrintText
   689D F1            [10] 1727 	pop	af
                           1728 ;src/main.c:650: PrintText("WHEN@YOU@CAN@GET@THE", 10, 105, 0);
   689E 33            [ 6] 1729 	inc	sp
   689F 21 69 00      [10] 1730 	ld	hl,#0x0069
   68A2 E3            [19] 1731 	ex	(sp),hl
   68A3 3E 0A         [ 7] 1732 	ld	a, #0x0a
   68A5 F5            [11] 1733 	push	af
   68A6 33            [ 6] 1734 	inc	sp
   68A7 21 8F 69      [10] 1735 	ld	hl, #___str_14
   68AA E5            [11] 1736 	push	hl
   68AB CD 10 63      [17] 1737 	call	_PrintText
   68AE F1            [10] 1738 	pop	af
                           1739 ;src/main.c:651: PrintText("INGREDIENT@YOU@NEED", 11, 115, 0);
   68AF 33            [ 6] 1740 	inc	sp
   68B0 21 73 00      [10] 1741 	ld	hl,#0x0073
   68B3 E3            [19] 1742 	ex	(sp),hl
   68B4 3E 0B         [ 7] 1743 	ld	a, #0x0b
   68B6 F5            [11] 1744 	push	af
   68B7 33            [ 6] 1745 	inc	sp
   68B8 21 A4 69      [10] 1746 	ld	hl, #___str_15
   68BB E5            [11] 1747 	push	hl
   68BC CD 10 63      [17] 1748 	call	_PrintText
   68BF F1            [10] 1749 	pop	af
   68C0 F1            [10] 1750 	pop	af
   68C1 33            [ 6] 1751 	inc	sp
                           1752 ;src/main.c:652: break;
   68C2 18 6A         [12] 1753 	jr	00105$
                           1754 ;src/main.c:654: case 2: {
   68C4                    1755 00103$:
                           1756 ;src/main.c:655: PrintText("TIP:@USE@THE@WELL", 14, 95, 0);
   68C4 21 5F 00      [10] 1757 	ld	hl, #0x005f
   68C7 E5            [11] 1758 	push	hl
   68C8 3E 0E         [ 7] 1759 	ld	a, #0x0e
   68CA F5            [11] 1760 	push	af
   68CB 33            [ 6] 1761 	inc	sp
   68CC 21 B8 69      [10] 1762 	ld	hl, #___str_16
   68CF E5            [11] 1763 	push	hl
   68D0 CD 10 63      [17] 1764 	call	_PrintText
   68D3 F1            [10] 1765 	pop	af
                           1766 ;src/main.c:656: PrintText("WHEN@YOU@TAKE@MORE", 13, 105, 0);
   68D4 33            [ 6] 1767 	inc	sp
   68D5 21 69 00      [10] 1768 	ld	hl,#0x0069
   68D8 E3            [19] 1769 	ex	(sp),hl
   68D9 3E 0D         [ 7] 1770 	ld	a, #0x0d
   68DB F5            [11] 1771 	push	af
   68DC 33            [ 6] 1772 	inc	sp
   68DD 21 CA 69      [10] 1773 	ld	hl, #___str_17
   68E0 E5            [11] 1774 	push	hl
   68E1 CD 10 63      [17] 1775 	call	_PrintText
   68E4 F1            [10] 1776 	pop	af
                           1777 ;src/main.c:657: PrintText("COINS@THAN@YOU@NEED", 11, 115, 0);
   68E5 33            [ 6] 1778 	inc	sp
   68E6 21 73 00      [10] 1779 	ld	hl,#0x0073
   68E9 E3            [19] 1780 	ex	(sp),hl
   68EA 3E 0B         [ 7] 1781 	ld	a, #0x0b
   68EC F5            [11] 1782 	push	af
   68ED 33            [ 6] 1783 	inc	sp
   68EE 21 DD 69      [10] 1784 	ld	hl, #___str_18
   68F1 E5            [11] 1785 	push	hl
   68F2 CD 10 63      [17] 1786 	call	_PrintText
   68F5 F1            [10] 1787 	pop	af
   68F6 F1            [10] 1788 	pop	af
   68F7 33            [ 6] 1789 	inc	sp
                           1790 ;src/main.c:658: break;
   68F8 18 34         [12] 1791 	jr	00105$
                           1792 ;src/main.c:660: case 3: {
   68FA                    1793 00104$:
                           1794 ;src/main.c:661: PrintText("TIP:@GO@TO@THE@EXIT", 11, 95, 0);
   68FA 21 5F 00      [10] 1795 	ld	hl, #0x005f
   68FD E5            [11] 1796 	push	hl
   68FE 3E 0B         [ 7] 1797 	ld	a, #0x0b
   6900 F5            [11] 1798 	push	af
   6901 33            [ 6] 1799 	inc	sp
   6902 21 F1 69      [10] 1800 	ld	hl, #___str_19
   6905 E5            [11] 1801 	push	hl
   6906 CD 10 63      [17] 1802 	call	_PrintText
   6909 F1            [10] 1803 	pop	af
                           1804 ;src/main.c:662: PrintText("DOOR@WHEN@YOU@HAVE", 13, 105, 0);
   690A 33            [ 6] 1805 	inc	sp
   690B 21 69 00      [10] 1806 	ld	hl,#0x0069
   690E E3            [19] 1807 	ex	(sp),hl
   690F 3E 0D         [ 7] 1808 	ld	a, #0x0d
   6911 F5            [11] 1809 	push	af
   6912 33            [ 6] 1810 	inc	sp
   6913 21 05 6A      [10] 1811 	ld	hl, #___str_20
   6916 E5            [11] 1812 	push	hl
   6917 CD 10 63      [17] 1813 	call	_PrintText
   691A F1            [10] 1814 	pop	af
                           1815 ;src/main.c:663: PrintText("THE@RIGHT@POTION", 15, 115, 0);
   691B 33            [ 6] 1816 	inc	sp
   691C 21 73 00      [10] 1817 	ld	hl,#0x0073
   691F E3            [19] 1818 	ex	(sp),hl
   6920 3E 0F         [ 7] 1819 	ld	a, #0x0f
   6922 F5            [11] 1820 	push	af
   6923 33            [ 6] 1821 	inc	sp
   6924 21 18 6A      [10] 1822 	ld	hl, #___str_21
   6927 E5            [11] 1823 	push	hl
   6928 CD 10 63      [17] 1824 	call	_PrintText
   692B F1            [10] 1825 	pop	af
   692C F1            [10] 1826 	pop	af
   692D 33            [ 6] 1827 	inc	sp
                           1828 ;src/main.c:665: }
   692E                    1829 00105$:
                           1830 ;src/main.c:666: Pause(400);
   692E 21 90 01      [10] 1831 	ld	hl, #0x0190
   6931 CD 81 61      [17] 1832 	call	_Pause
                           1833 ;src/main.c:667: while (!cpct_isAnyKeyPressed()); // wait for a key press
   6934                    1834 00106$:
   6934 CD E5 5B      [17] 1835 	call	_cpct_isAnyKeyPressed
   6937 7D            [ 4] 1836 	ld	a, l
   6938 B7            [ 4] 1837 	or	a, a
   6939 28 F9         [12] 1838 	jr	Z,00106$
                           1839 ;src/main.c:668: nTip++; // next message
   693B 21 F0 5E      [10] 1840 	ld	hl, #_nTip+0
   693E 34            [11] 1841 	inc	(hl)
                           1842 ;src/main.c:669: PrintMap();
   693F C3 2B 62      [10] 1843 	jp  _PrintMap
   6942                    1844 ___str_10:
   6942 54 49 50 3A 40 54  1845 	.ascii "TIP:@TAKE@THE@EXACT"
        41 4B 45 40 54 48
        45 40 45 58 41 43
        54
   6955 00                 1846 	.db 0x00
   6956                    1847 ___str_11:
   6956 43 4F 49 4E 53 40  1848 	.ascii "COINS@TO@BUY@THE"
        54 4F 40 42 55 59
        40 54 48 45
   6966 00                 1849 	.db 0x00
   6967                    1850 ___str_12:
   6967 52 45 51 55 49 52  1851 	.ascii "REQUIRED@INGREDIENT"
        45 44 40 49 4E 47
        52 45 44 49 45 4E
        54
   697A 00                 1852 	.db 0x00
   697B                    1853 ___str_13:
   697B 54 49 50 3A 40 47  1854 	.ascii "TIP:@GO@TO@THE@SHOP"
        4F 40 54 4F 40 54
        48 45 40 53 48 4F
        50
   698E 00                 1855 	.db 0x00
   698F                    1856 ___str_14:
   698F 57 48 45 4E 40 59  1857 	.ascii "WHEN@YOU@CAN@GET@THE"
        4F 55 40 43 41 4E
        40 47 45 54 40 54
        48 45
   69A3 00                 1858 	.db 0x00
   69A4                    1859 ___str_15:
   69A4 49 4E 47 52 45 44  1860 	.ascii "INGREDIENT@YOU@NEED"
        49 45 4E 54 40 59
        4F 55 40 4E 45 45
        44
   69B7 00                 1861 	.db 0x00
   69B8                    1862 ___str_16:
   69B8 54 49 50 3A 40 55  1863 	.ascii "TIP:@USE@THE@WELL"
        53 45 40 54 48 45
        40 57 45 4C 4C
   69C9 00                 1864 	.db 0x00
   69CA                    1865 ___str_17:
   69CA 57 48 45 4E 40 59  1866 	.ascii "WHEN@YOU@TAKE@MORE"
        4F 55 40 54 41 4B
        45 40 4D 4F 52 45
   69DC 00                 1867 	.db 0x00
   69DD                    1868 ___str_18:
   69DD 43 4F 49 4E 53 40  1869 	.ascii "COINS@THAN@YOU@NEED"
        54 48 41 4E 40 59
        4F 55 40 4E 45 45
        44
   69F0 00                 1870 	.db 0x00
   69F1                    1871 ___str_19:
   69F1 54 49 50 3A 40 47  1872 	.ascii "TIP:@GO@TO@THE@EXIT"
        4F 40 54 4F 40 54
        48 45 40 45 58 49
        54
   6A04 00                 1873 	.db 0x00
   6A05                    1874 ___str_20:
   6A05 44 4F 4F 52 40 57  1875 	.ascii "DOOR@WHEN@YOU@HAVE"
        48 45 4E 40 59 4F
        55 40 48 41 56 45
   6A17 00                 1876 	.db 0x00
   6A18                    1877 ___str_21:
   6A18 54 48 45 40 52 49  1878 	.ascii "THE@RIGHT@POTION"
        47 48 54 40 50 4F
        54 49 4F 4E
   6A28 00                 1879 	.db 0x00
                           1880 ;src/main.c:686: cpct_keyID ReturnKeyPressed() {
                           1881 ;	---------------------------------
                           1882 ; Function ReturnKeyPressed
                           1883 ; ---------------------------------
   6A29                    1884 _ReturnKeyPressed::
   6A29 DD E5         [15] 1885 	push	ix
   6A2B DD 21 00 00   [14] 1886 	ld	ix,#0
   6A2F DD 39         [15] 1887 	add	ix,sp
   6A31 F5            [11] 1888 	push	af
                           1889 ;src/main.c:687: u8 i = 10, *keys = cpct_keyboardStatusBuffer + 9;
   6A32 0E 0A         [ 7] 1890 	ld	c, #0x0a
                           1891 ;src/main.c:690: do { cpct_scanKeyboard(); } while ( ! cpct_isAnyKeyPressed() );
   6A34                    1892 00101$:
   6A34 C5            [11] 1893 	push	bc
   6A35 CD 20 5E      [17] 1894 	call	_cpct_scanKeyboard
   6A38 CD E5 5B      [17] 1895 	call	_cpct_isAnyKeyPressed
   6A3B C1            [10] 1896 	pop	bc
   6A3C 7D            [ 4] 1897 	ld	a, l
   6A3D B7            [ 4] 1898 	or	a, a
   6A3E 28 F4         [12] 1899 	jr	Z,00101$
                           1900 ;src/main.c:692: do {
   6A40 11 B2 5B      [10] 1901 	ld	de, #(_cpct_keyboardStatusBuffer + 0x0009)
   6A43 06 0A         [ 7] 1902 	ld	b, #0x0a
   6A45                    1903 00106$:
                           1904 ;src/main.c:693: keypressed = *keys ^ 0xFF;
   6A45 1A            [ 7] 1905 	ld	a, (de)
   6A46 EE FF         [ 7] 1906 	xor	a, #0xff
   6A48 6F            [ 4] 1907 	ld	l, a
   6A49 26 00         [ 7] 1908 	ld	h, #0x00
   6A4B 33            [ 6] 1909 	inc	sp
   6A4C 33            [ 6] 1910 	inc	sp
   6A4D E5            [11] 1911 	push	hl
                           1912 ;src/main.c:694: if (keypressed)
   6A4E 7C            [ 4] 1913 	ld	a, h
   6A4F B5            [ 4] 1914 	or	a,l
   6A50 28 0B         [12] 1915 	jr	Z,00105$
                           1916 ;src/main.c:695: return (keypressed << 8) + (i - 1); 
   6A52 DD 66 FE      [19] 1917 	ld	h, -2 (ix)
   6A55 2E 00         [ 7] 1918 	ld	l, #0x00
   6A57 06 00         [ 7] 1919 	ld	b, #0x00
   6A59 0B            [ 6] 1920 	dec	bc
   6A5A 09            [11] 1921 	add	hl, bc
   6A5B 18 0A         [12] 1922 	jr	00109$
   6A5D                    1923 00105$:
                           1924 ;src/main.c:696: keys--;
   6A5D 1B            [ 6] 1925 	dec	de
                           1926 ;src/main.c:697: } while(--i);    
   6A5E 05            [ 4] 1927 	dec	b
   6A5F 78            [ 4] 1928 	ld	a,b
   6A60 4F            [ 4] 1929 	ld	c,a
   6A61 B7            [ 4] 1930 	or	a, a
   6A62 20 E1         [12] 1931 	jr	NZ,00106$
                           1932 ;src/main.c:698: return 0;
   6A64 21 00 00      [10] 1933 	ld	hl, #0x0000
   6A67                    1934 00109$:
   6A67 DD F9         [10] 1935 	ld	sp, ix
   6A69 DD E1         [14] 1936 	pop	ix
   6A6B C9            [10] 1937 	ret
                           1938 ;src/main.c:704: void Wait4Key(cpct_keyID key) {
                           1939 ;	---------------------------------
                           1940 ; Function Wait4Key
                           1941 ; ---------------------------------
   6A6C                    1942 _Wait4Key::
                           1943 ;src/main.c:705: do cpct_scanKeyboard_f();
   6A6C                    1944 00101$:
   6A6C CD CD 51      [17] 1945 	call	_cpct_scanKeyboard_f
                           1946 ;src/main.c:706: while(!cpct_isKeyPressed(key));
   6A6F C1            [10] 1947 	pop	bc
   6A70 E1            [10] 1948 	pop	hl
   6A71 E5            [11] 1949 	push	hl
   6A72 C5            [11] 1950 	push	bc
   6A73 CD C1 51      [17] 1951 	call	_cpct_isKeyPressed
   6A76 7D            [ 4] 1952 	ld	a, l
   6A77 B7            [ 4] 1953 	or	a, a
   6A78 28 F2         [12] 1954 	jr	Z,00101$
                           1955 ;src/main.c:707: do cpct_scanKeyboard_f();
   6A7A                    1956 00104$:
   6A7A CD CD 51      [17] 1957 	call	_cpct_scanKeyboard_f
                           1958 ;src/main.c:708: while(cpct_isKeyPressed(key));
   6A7D C1            [10] 1959 	pop	bc
   6A7E E1            [10] 1960 	pop	hl
   6A7F E5            [11] 1961 	push	hl
   6A80 C5            [11] 1962 	push	bc
   6A81 CD C1 51      [17] 1963 	call	_cpct_isKeyPressed
   6A84 7D            [ 4] 1964 	ld	a, l
   6A85 B7            [ 4] 1965 	or	a, a
   6A86 20 F2         [12] 1966 	jr	NZ,00104$
   6A88 C9            [10] 1967 	ret
                           1968 ;src/main.c:713: cpct_keyID RedefineKey(u8 *info) {
                           1969 ;	---------------------------------
                           1970 ; Function RedefineKey
                           1971 ; ---------------------------------
   6A89                    1972 _RedefineKey::
                           1973 ;src/main.c:715: PrintText(info, 28, 120, 1);       
   6A89 21 78 01      [10] 1974 	ld	hl, #0x0178
   6A8C E5            [11] 1975 	push	hl
   6A8D 3E 1C         [ 7] 1976 	ld	a, #0x1c
   6A8F F5            [11] 1977 	push	af
   6A90 33            [ 6] 1978 	inc	sp
   6A91 21 05 00      [10] 1979 	ld	hl, #5
   6A94 39            [11] 1980 	add	hl, sp
   6A95 4E            [ 7] 1981 	ld	c, (hl)
   6A96 23            [ 6] 1982 	inc	hl
   6A97 46            [ 7] 1983 	ld	b, (hl)
   6A98 C5            [11] 1984 	push	bc
   6A99 CD 10 63      [17] 1985 	call	_PrintText
   6A9C F1            [10] 1986 	pop	af
   6A9D F1            [10] 1987 	pop	af
   6A9E 33            [ 6] 1988 	inc	sp
                           1989 ;src/main.c:716: key = ReturnKeyPressed();
   6A9F CD 29 6A      [17] 1990 	call	_ReturnKeyPressed
                           1991 ;src/main.c:717: Wait4Key(key);
   6AA2 E5            [11] 1992 	push	hl
   6AA3 E5            [11] 1993 	push	hl
   6AA4 CD 6C 6A      [17] 1994 	call	_Wait4Key
   6AA7 26 01         [ 7] 1995 	ld	h,#0x01
   6AA9 E3            [19] 1996 	ex	(sp),hl
   6AAA 33            [ 6] 1997 	inc	sp
   6AAB 01 00 00      [10] 1998 	ld	bc, #0x0000
   6AAE C5            [11] 1999 	push	bc
   6AAF 01 3B 00      [10] 2000 	ld	bc, #0x003b
   6AB2 C5            [11] 2001 	push	bc
   6AB3 01 01 0C      [10] 2002 	ld	bc, #0x0c01
   6AB6 C5            [11] 2003 	push	bc
   6AB7 CD EF 59      [17] 2004 	call	_cpct_akp_SFXPlay
   6ABA 21 07 00      [10] 2005 	ld	hl, #7
   6ABD 39            [11] 2006 	add	hl, sp
   6ABE F9            [ 6] 2007 	ld	sp, hl
   6ABF E1            [10] 2008 	pop	hl
                           2009 ;src/main.c:719: return key;    
   6AC0 C9            [10] 2010 	ret
                           2011 ;src/main.c:736: void RefreshHighScore(u8 player) __z88dk_fastcall {
                           2012 ;	---------------------------------
                           2013 ; Function RefreshHighScore
                           2014 ; ---------------------------------
   6AC1                    2015 _RefreshHighScore::
   6AC1 5D            [ 4] 2016 	ld	e, l
                           2017 ;src/main.c:737: if (highScore < score[player])
   6AC2 01 D5 5E      [10] 2018 	ld	bc, #_score+0
   6AC5 6B            [ 4] 2019 	ld	l, e
   6AC6 26 00         [ 7] 2020 	ld	h, #0x00
   6AC8 29            [11] 2021 	add	hl, hl
   6AC9 09            [11] 2022 	add	hl, bc
   6ACA 4E            [ 7] 2023 	ld	c, (hl)
   6ACB 23            [ 6] 2024 	inc	hl
   6ACC 46            [ 7] 2025 	ld	b, (hl)
   6ACD FD 21 D9 5E   [14] 2026 	ld	iy, #_highScore
   6AD1 FD 7E 00      [19] 2027 	ld	a, 0 (iy)
   6AD4 91            [ 4] 2028 	sub	a, c
   6AD5 FD 7E 01      [19] 2029 	ld	a, 1 (iy)
   6AD8 98            [ 4] 2030 	sbc	a, b
   6AD9 D0            [11] 2031 	ret	NC
                           2032 ;src/main.c:738: highScore = score[player];
   6ADA ED 43 D9 5E   [20] 2033 	ld	(_highScore), bc
   6ADE C9            [10] 2034 	ret
                           2035 ;src/main.c:743: void InitScoreboard() {
                           2036 ;	---------------------------------
                           2037 ; Function InitScoreboard
                           2038 ; ---------------------------------
   6ADF                    2039 _InitScoreboard::
                           2040 ;src/main.c:744: nPObj = 0;
   6ADF 21 7E 5F      [10] 2041 	ld	hl,#_nPObj + 0
   6AE2 36 00         [10] 2042 	ld	(hl), #0x00
                           2043 ;src/main.c:745: PrintFrame(0,0,77,24);	
   6AE4 21 4D 18      [10] 2044 	ld	hl, #0x184d
   6AE7 E5            [11] 2045 	push	hl
   6AE8 21 00 00      [10] 2046 	ld	hl, #0x0000
   6AEB E5            [11] 2047 	push	hl
   6AEC CD B3 63      [17] 2048 	call	_PrintFrame
   6AEF F1            [10] 2049 	pop	af
                           2050 ;src/main.c:748: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06, cpct_getScreenPtr(CPCT_VMEM_START,  3, 4), SPR_W, SPR_H, g_maskTable);
   6AF0 21 03 04      [10] 2051 	ld	hl, #0x0403
   6AF3 E3            [19] 2052 	ex	(sp),hl
   6AF4 21 00 C0      [10] 2053 	ld	hl, #0xc000
   6AF7 E5            [11] 2054 	push	hl
   6AF8 CD CF 5D      [17] 2055 	call	_cpct_getScreenPtr
   6AFB 01 D7 2D      [10] 2056 	ld	bc, #_g_sorcerer1_06+0
   6AFE 11 00 01      [10] 2057 	ld	de, #_g_maskTable
   6B01 D5            [11] 2058 	push	de
   6B02 11 05 0C      [10] 2059 	ld	de, #0x0c05
   6B05 D5            [11] 2060 	push	de
   6B06 E5            [11] 2061 	push	hl
   6B07 C5            [11] 2062 	push	bc
   6B08 CD E5 5D      [17] 2063 	call	_cpct_drawSpriteMaskedAlignedTable
                           2064 ;src/main.c:749: PrintText("0000", 14, 6, 1); // player score
   6B0B 21 06 01      [10] 2065 	ld	hl, #0x0106
   6B0E E5            [11] 2066 	push	hl
   6B0F 3E 0E         [ 7] 2067 	ld	a, #0x0e
   6B11 F5            [11] 2068 	push	af
   6B12 33            [ 6] 2069 	inc	sp
   6B13 21 2F 6C      [10] 2070 	ld	hl, #___str_22
   6B16 E5            [11] 2071 	push	hl
   6B17 CD 10 63      [17] 2072 	call	_PrintText
   6B1A F1            [10] 2073 	pop	af
                           2074 ;src/main.c:750: PrintObject(nPObj, 28, 6); PrintText("00", 32, 6, 1);	// coins score	
   6B1B 33            [ 6] 2075 	inc	sp
   6B1C 21 1C 06      [10] 2076 	ld	hl,#0x061c
   6B1F E3            [19] 2077 	ex	(sp),hl
   6B20 3A 7E 5F      [13] 2078 	ld	a, (_nPObj)
   6B23 F5            [11] 2079 	push	af
   6B24 33            [ 6] 2080 	inc	sp
   6B25 CD BA 6D      [17] 2081 	call	_PrintObject
   6B28 33            [ 6] 2082 	inc	sp
   6B29 21 06 01      [10] 2083 	ld	hl,#0x0106
   6B2C E3            [19] 2084 	ex	(sp),hl
   6B2D 3E 20         [ 7] 2085 	ld	a, #0x20
   6B2F F5            [11] 2086 	push	af
   6B30 33            [ 6] 2087 	inc	sp
   6B31 21 34 6C      [10] 2088 	ld	hl, #___str_23
   6B34 E5            [11] 2089 	push	hl
   6B35 CD 10 63      [17] 2090 	call	_PrintText
   6B38 F1            [10] 2091 	pop	af
                           2092 ;src/main.c:751: PrintText("<", 28, 15, 1); PrintText("00", 32, 15, 1);	// potion score
   6B39 33            [ 6] 2093 	inc	sp
   6B3A 21 0F 01      [10] 2094 	ld	hl,#0x010f
   6B3D E3            [19] 2095 	ex	(sp),hl
   6B3E 3E 1C         [ 7] 2096 	ld	a, #0x1c
   6B40 F5            [11] 2097 	push	af
   6B41 33            [ 6] 2098 	inc	sp
   6B42 21 37 6C      [10] 2099 	ld	hl, #___str_24
   6B45 E5            [11] 2100 	push	hl
   6B46 CD 10 63      [17] 2101 	call	_PrintText
   6B49 F1            [10] 2102 	pop	af
   6B4A 33            [ 6] 2103 	inc	sp
   6B4B 21 0F 01      [10] 2104 	ld	hl,#0x010f
   6B4E E3            [19] 2105 	ex	(sp),hl
   6B4F 3E 20         [ 7] 2106 	ld	a, #0x20
   6B51 F5            [11] 2107 	push	af
   6B52 33            [ 6] 2108 	inc	sp
   6B53 21 34 6C      [10] 2109 	ld	hl, #___str_23
   6B56 E5            [11] 2110 	push	hl
   6B57 CD 10 63      [17] 2111 	call	_PrintText
   6B5A F1            [10] 2112 	pop	af
   6B5B F1            [10] 2113 	pop	af
   6B5C 33            [ 6] 2114 	inc	sp
                           2115 ;src/main.c:754: if (TwoPlayers) {
   6B5D 3A D4 5E      [13] 2116 	ld	a,(#_TwoPlayers + 0)
   6B60 B7            [ 4] 2117 	or	a, a
   6B61 28 6E         [12] 2118 	jr	Z,00102$
                           2119 ;src/main.c:755: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_06, cpct_getScreenPtr(CPCT_VMEM_START, 42, 4), SPR_W, SPR_H, g_maskTable);
   6B63 21 2A 04      [10] 2120 	ld	hl, #0x042a
   6B66 E5            [11] 2121 	push	hl
   6B67 21 00 C0      [10] 2122 	ld	hl, #0xc000
   6B6A E5            [11] 2123 	push	hl
   6B6B CD CF 5D      [17] 2124 	call	_cpct_getScreenPtr
   6B6E 01 7F 2B      [10] 2125 	ld	bc, #_g_sorcerer2_06+0
   6B71 11 00 01      [10] 2126 	ld	de, #_g_maskTable
   6B74 D5            [11] 2127 	push	de
   6B75 11 05 0C      [10] 2128 	ld	de, #0x0c05
   6B78 D5            [11] 2129 	push	de
   6B79 E5            [11] 2130 	push	hl
   6B7A C5            [11] 2131 	push	bc
   6B7B CD E5 5D      [17] 2132 	call	_cpct_drawSpriteMaskedAlignedTable
                           2133 ;src/main.c:756: PrintText("0000", 53, 6, 1); // player score
   6B7E 21 06 01      [10] 2134 	ld	hl, #0x0106
   6B81 E5            [11] 2135 	push	hl
   6B82 3E 35         [ 7] 2136 	ld	a, #0x35
   6B84 F5            [11] 2137 	push	af
   6B85 33            [ 6] 2138 	inc	sp
   6B86 21 2F 6C      [10] 2139 	ld	hl, #___str_22
   6B89 E5            [11] 2140 	push	hl
   6B8A CD 10 63      [17] 2141 	call	_PrintText
   6B8D F1            [10] 2142 	pop	af
                           2143 ;src/main.c:757: PrintObject(nPObj, 67, 6); PrintText("00", 71, 6, 1);	// coins score
   6B8E 33            [ 6] 2144 	inc	sp
   6B8F 21 43 06      [10] 2145 	ld	hl,#0x0643
   6B92 E3            [19] 2146 	ex	(sp),hl
   6B93 3A 7E 5F      [13] 2147 	ld	a, (_nPObj)
   6B96 F5            [11] 2148 	push	af
   6B97 33            [ 6] 2149 	inc	sp
   6B98 CD BA 6D      [17] 2150 	call	_PrintObject
   6B9B 33            [ 6] 2151 	inc	sp
   6B9C 21 06 01      [10] 2152 	ld	hl,#0x0106
   6B9F E3            [19] 2153 	ex	(sp),hl
   6BA0 3E 47         [ 7] 2154 	ld	a, #0x47
   6BA2 F5            [11] 2155 	push	af
   6BA3 33            [ 6] 2156 	inc	sp
   6BA4 21 34 6C      [10] 2157 	ld	hl, #___str_23
   6BA7 E5            [11] 2158 	push	hl
   6BA8 CD 10 63      [17] 2159 	call	_PrintText
   6BAB F1            [10] 2160 	pop	af
                           2161 ;src/main.c:758: PrintText("<", 67, 15, 1); PrintText("00", 71, 15, 1);	// potion score
   6BAC 33            [ 6] 2162 	inc	sp
   6BAD 21 0F 01      [10] 2163 	ld	hl,#0x010f
   6BB0 E3            [19] 2164 	ex	(sp),hl
   6BB1 3E 43         [ 7] 2165 	ld	a, #0x43
   6BB3 F5            [11] 2166 	push	af
   6BB4 33            [ 6] 2167 	inc	sp
   6BB5 21 37 6C      [10] 2168 	ld	hl, #___str_24
   6BB8 E5            [11] 2169 	push	hl
   6BB9 CD 10 63      [17] 2170 	call	_PrintText
   6BBC F1            [10] 2171 	pop	af
   6BBD 33            [ 6] 2172 	inc	sp
   6BBE 21 0F 01      [10] 2173 	ld	hl,#0x010f
   6BC1 E3            [19] 2174 	ex	(sp),hl
   6BC2 3E 47         [ 7] 2175 	ld	a, #0x47
   6BC4 F5            [11] 2176 	push	af
   6BC5 33            [ 6] 2177 	inc	sp
   6BC6 21 34 6C      [10] 2178 	ld	hl, #___str_23
   6BC9 E5            [11] 2179 	push	hl
   6BCA CD 10 63      [17] 2180 	call	_PrintText
   6BCD F1            [10] 2181 	pop	af
   6BCE F1            [10] 2182 	pop	af
   6BCF 33            [ 6] 2183 	inc	sp
   6BD0 C9            [10] 2184 	ret
   6BD1                    2185 00102$:
                           2186 ;src/main.c:761: PrintText("HIGH:", 44, 6 , 1);
   6BD1 21 06 01      [10] 2187 	ld	hl, #0x0106
   6BD4 E5            [11] 2188 	push	hl
   6BD5 3E 2C         [ 7] 2189 	ld	a, #0x2c
   6BD7 F5            [11] 2190 	push	af
   6BD8 33            [ 6] 2191 	inc	sp
   6BD9 21 39 6C      [10] 2192 	ld	hl, #___str_25
   6BDC E5            [11] 2193 	push	hl
   6BDD CD 10 63      [17] 2194 	call	_PrintText
   6BE0 F1            [10] 2195 	pop	af
                           2196 ;src/main.c:762: PrintText("00000", 61, 6, 1); 
   6BE1 33            [ 6] 2197 	inc	sp
   6BE2 21 06 01      [10] 2198 	ld	hl,#0x0106
   6BE5 E3            [19] 2199 	ex	(sp),hl
   6BE6 3E 3D         [ 7] 2200 	ld	a, #0x3d
   6BE8 F5            [11] 2201 	push	af
   6BE9 33            [ 6] 2202 	inc	sp
   6BEA 21 3F 6C      [10] 2203 	ld	hl, #___str_26
   6BED E5            [11] 2204 	push	hl
   6BEE CD 10 63      [17] 2205 	call	_PrintText
   6BF1 F1            [10] 2206 	pop	af
                           2207 ;src/main.c:763: PrintNumber(highScore, 5, 61, 6, 1); // high score
   6BF2 33            [ 6] 2208 	inc	sp
   6BF3 21 06 01      [10] 2209 	ld	hl,#0x0106
   6BF6 E3            [19] 2210 	ex	(sp),hl
   6BF7 21 05 3D      [10] 2211 	ld	hl, #0x3d05
   6BFA E5            [11] 2212 	push	hl
   6BFB 2A D9 5E      [16] 2213 	ld	hl, (_highScore)
   6BFE E5            [11] 2214 	push	hl
   6BFF CD 41 62      [17] 2215 	call	_PrintNumber
   6C02 21 06 00      [10] 2216 	ld	hl, #6
   6C05 39            [11] 2217 	add	hl, sp
   6C06 F9            [ 6] 2218 	ld	sp, hl
                           2219 ;src/main.c:764: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 60, 16), cpct_px2byteM0(BG_COLOR, BG_COLOR), 16, 8); // key
   6C07 21 01 01      [10] 2220 	ld	hl, #0x0101
   6C0A E5            [11] 2221 	push	hl
   6C0B CD B3 5C      [17] 2222 	call	_cpct_px2byteM0
   6C0E 26 00         [ 7] 2223 	ld	h, #0x00
   6C10 01 10 08      [10] 2224 	ld	bc, #0x0810
   6C13 C5            [11] 2225 	push	bc
   6C14 E5            [11] 2226 	push	hl
   6C15 21 DC C0      [10] 2227 	ld	hl, #0xc0dc
   6C18 E5            [11] 2228 	push	hl
   6C19 CD ED 5C      [17] 2229 	call	_cpct_drawSolidBox
                           2230 ;src/main.c:765: PrintText("KEY:", 47, 15, 1);
   6C1C 21 0F 01      [10] 2231 	ld	hl, #0x010f
   6C1F E5            [11] 2232 	push	hl
   6C20 3E 2F         [ 7] 2233 	ld	a, #0x2f
   6C22 F5            [11] 2234 	push	af
   6C23 33            [ 6] 2235 	inc	sp
   6C24 21 45 6C      [10] 2236 	ld	hl, #___str_27
   6C27 E5            [11] 2237 	push	hl
   6C28 CD 10 63      [17] 2238 	call	_PrintText
   6C2B F1            [10] 2239 	pop	af
   6C2C F1            [10] 2240 	pop	af
   6C2D 33            [ 6] 2241 	inc	sp
   6C2E C9            [10] 2242 	ret
   6C2F                    2243 ___str_22:
   6C2F 30 30 30 30        2244 	.ascii "0000"
   6C33 00                 2245 	.db 0x00
   6C34                    2246 ___str_23:
   6C34 30 30              2247 	.ascii "00"
   6C36 00                 2248 	.db 0x00
   6C37                    2249 ___str_24:
   6C37 3C                 2250 	.ascii "<"
   6C38 00                 2251 	.db 0x00
   6C39                    2252 ___str_25:
   6C39 48 49 47 48 3A     2253 	.ascii "HIGH:"
   6C3E 00                 2254 	.db 0x00
   6C3F                    2255 ___str_26:
   6C3F 30 30 30 30 30     2256 	.ascii "00000"
   6C44 00                 2257 	.db 0x00
   6C45                    2258 ___str_27:
   6C45 4B 45 59 3A        2259 	.ascii "KEY:"
   6C49 00                 2260 	.db 0x00
                           2261 ;src/main.c:771: void RefreshScoreboard() { 
                           2262 ;	---------------------------------
                           2263 ; Function RefreshScoreboard
                           2264 ; ---------------------------------
   6C4A                    2265 _RefreshScoreboard::
                           2266 ;src/main.c:773: PrintNumber(spr[0].lives_speed,  1,  8, 6, 1); 		// lives
   6C4A 21 15 5F      [10] 2267 	ld	hl, #_spr + 11
   6C4D 4E            [ 7] 2268 	ld	c, (hl)
   6C4E 06 00         [ 7] 2269 	ld	b, #0x00
   6C50 21 06 01      [10] 2270 	ld	hl, #0x0106
   6C53 E5            [11] 2271 	push	hl
   6C54 21 01 08      [10] 2272 	ld	hl, #0x0801
   6C57 E5            [11] 2273 	push	hl
   6C58 C5            [11] 2274 	push	bc
   6C59 CD 41 62      [17] 2275 	call	_PrintNumber
   6C5C 21 06 00      [10] 2276 	ld	hl, #6
   6C5F 39            [11] 2277 	add	hl, sp
   6C60 F9            [ 6] 2278 	ld	sp, hl
                           2279 ;src/main.c:774: PrintNumber(score[0], 4, 14, 6, 1);		 			// current score
   6C61 2A D5 5E      [16] 2280 	ld	hl, (#_score + 0)
   6C64 01 06 01      [10] 2281 	ld	bc, #0x0106
   6C67 C5            [11] 2282 	push	bc
   6C68 01 04 0E      [10] 2283 	ld	bc, #0x0e04
   6C6B C5            [11] 2284 	push	bc
   6C6C E5            [11] 2285 	push	hl
   6C6D CD 41 62      [17] 2286 	call	_PrintNumber
   6C70 21 06 00      [10] 2287 	ld	hl, #6
   6C73 39            [11] 2288 	add	hl, sp
   6C74 F9            [ 6] 2289 	ld	sp, hl
                           2290 ;src/main.c:775: PrintText("0", 32, 6, 1);
   6C75 21 06 01      [10] 2291 	ld	hl, #0x0106
   6C78 E5            [11] 2292 	push	hl
   6C79 3E 20         [ 7] 2293 	ld	a, #0x20
   6C7B F5            [11] 2294 	push	af
   6C7C 33            [ 6] 2295 	inc	sp
   6C7D 21 61 6D      [10] 2296 	ld	hl, #___str_28
   6C80 E5            [11] 2297 	push	hl
   6C81 CD 10 63      [17] 2298 	call	_PrintText
   6C84 F1            [10] 2299 	pop	af
   6C85 F1            [10] 2300 	pop	af
   6C86 33            [ 6] 2301 	inc	sp
                           2302 ;src/main.c:776: PrintNumber(coinScore[0], 2, 32, 6, 1); 			// coin score
   6C87 21 DD 5E      [10] 2303 	ld	hl, #_coinScore + 0
   6C8A 4E            [ 7] 2304 	ld	c, (hl)
   6C8B 06 00         [ 7] 2305 	ld	b, #0x00
   6C8D 21 06 01      [10] 2306 	ld	hl, #0x0106
   6C90 E5            [11] 2307 	push	hl
   6C91 21 02 20      [10] 2308 	ld	hl, #0x2002
   6C94 E5            [11] 2309 	push	hl
   6C95 C5            [11] 2310 	push	bc
   6C96 CD 41 62      [17] 2311 	call	_PrintNumber
   6C99 21 06 00      [10] 2312 	ld	hl, #6
   6C9C 39            [11] 2313 	add	hl, sp
   6C9D F9            [ 6] 2314 	ld	sp, hl
                           2315 ;src/main.c:777: PrintText("0", 32, 15, 1);
   6C9E 21 0F 01      [10] 2316 	ld	hl, #0x010f
   6CA1 E5            [11] 2317 	push	hl
   6CA2 3E 20         [ 7] 2318 	ld	a, #0x20
   6CA4 F5            [11] 2319 	push	af
   6CA5 33            [ 6] 2320 	inc	sp
   6CA6 21 61 6D      [10] 2321 	ld	hl, #___str_28
   6CA9 E5            [11] 2322 	push	hl
   6CAA CD 10 63      [17] 2323 	call	_PrintText
   6CAD F1            [10] 2324 	pop	af
   6CAE F1            [10] 2325 	pop	af
   6CAF 33            [ 6] 2326 	inc	sp
                           2327 ;src/main.c:778: PrintNumber(potScore[0], 2, 32, 15, 1); 			// potion score
   6CB0 21 DB 5E      [10] 2328 	ld	hl, #_potScore + 0
   6CB3 4E            [ 7] 2329 	ld	c, (hl)
   6CB4 06 00         [ 7] 2330 	ld	b, #0x00
   6CB6 21 0F 01      [10] 2331 	ld	hl, #0x010f
   6CB9 E5            [11] 2332 	push	hl
   6CBA 21 02 20      [10] 2333 	ld	hl, #0x2002
   6CBD E5            [11] 2334 	push	hl
   6CBE C5            [11] 2335 	push	bc
   6CBF CD 41 62      [17] 2336 	call	_PrintNumber
   6CC2 21 06 00      [10] 2337 	ld	hl, #6
   6CC5 39            [11] 2338 	add	hl, sp
   6CC6 F9            [ 6] 2339 	ld	sp, hl
                           2340 ;src/main.c:780: if (TwoPlayers) {
   6CC7 3A D4 5E      [13] 2341 	ld	a,(#_TwoPlayers + 0)
   6CCA B7            [ 4] 2342 	or	a, a
   6CCB CA 4C 6D      [10] 2343 	jp	Z, 00102$
                           2344 ;src/main.c:781: PrintNumber(spr[1].lives_speed,  1, 47, 6, 1); 	// lives
   6CCE 21 24 5F      [10] 2345 	ld	hl, #_spr + 26
   6CD1 4E            [ 7] 2346 	ld	c, (hl)
   6CD2 06 00         [ 7] 2347 	ld	b, #0x00
   6CD4 21 06 01      [10] 2348 	ld	hl, #0x0106
   6CD7 E5            [11] 2349 	push	hl
   6CD8 21 01 2F      [10] 2350 	ld	hl, #0x2f01
   6CDB E5            [11] 2351 	push	hl
   6CDC C5            [11] 2352 	push	bc
   6CDD CD 41 62      [17] 2353 	call	_PrintNumber
   6CE0 21 06 00      [10] 2354 	ld	hl, #6
   6CE3 39            [11] 2355 	add	hl, sp
   6CE4 F9            [ 6] 2356 	ld	sp, hl
                           2357 ;src/main.c:782: PrintNumber(score[1], 4, 53, 6, 1);		 		// current score
   6CE5 2A D7 5E      [16] 2358 	ld	hl, (#_score + 2)
   6CE8 01 06 01      [10] 2359 	ld	bc, #0x0106
   6CEB C5            [11] 2360 	push	bc
   6CEC 01 04 35      [10] 2361 	ld	bc, #0x3504
   6CEF C5            [11] 2362 	push	bc
   6CF0 E5            [11] 2363 	push	hl
   6CF1 CD 41 62      [17] 2364 	call	_PrintNumber
   6CF4 21 06 00      [10] 2365 	ld	hl, #6
   6CF7 39            [11] 2366 	add	hl, sp
   6CF8 F9            [ 6] 2367 	ld	sp, hl
                           2368 ;src/main.c:783: PrintText("0", 71, 6, 1);
   6CF9 21 06 01      [10] 2369 	ld	hl, #0x0106
   6CFC E5            [11] 2370 	push	hl
   6CFD 3E 47         [ 7] 2371 	ld	a, #0x47
   6CFF F5            [11] 2372 	push	af
   6D00 33            [ 6] 2373 	inc	sp
   6D01 21 61 6D      [10] 2374 	ld	hl, #___str_28
   6D04 E5            [11] 2375 	push	hl
   6D05 CD 10 63      [17] 2376 	call	_PrintText
   6D08 F1            [10] 2377 	pop	af
   6D09 F1            [10] 2378 	pop	af
   6D0A 33            [ 6] 2379 	inc	sp
                           2380 ;src/main.c:784: PrintNumber(coinScore[1], 2, 71, 6, 1); 		// coin score
   6D0B 21 DE 5E      [10] 2381 	ld	hl, #_coinScore + 1
   6D0E 4E            [ 7] 2382 	ld	c, (hl)
   6D0F 06 00         [ 7] 2383 	ld	b, #0x00
   6D11 21 06 01      [10] 2384 	ld	hl, #0x0106
   6D14 E5            [11] 2385 	push	hl
   6D15 21 02 47      [10] 2386 	ld	hl, #0x4702
   6D18 E5            [11] 2387 	push	hl
   6D19 C5            [11] 2388 	push	bc
   6D1A CD 41 62      [17] 2389 	call	_PrintNumber
   6D1D 21 06 00      [10] 2390 	ld	hl, #6
   6D20 39            [11] 2391 	add	hl, sp
   6D21 F9            [ 6] 2392 	ld	sp, hl
                           2393 ;src/main.c:785: PrintText("0", 71, 15, 1);
   6D22 21 0F 01      [10] 2394 	ld	hl, #0x010f
   6D25 E5            [11] 2395 	push	hl
   6D26 3E 47         [ 7] 2396 	ld	a, #0x47
   6D28 F5            [11] 2397 	push	af
   6D29 33            [ 6] 2398 	inc	sp
   6D2A 21 61 6D      [10] 2399 	ld	hl, #___str_28
   6D2D E5            [11] 2400 	push	hl
   6D2E CD 10 63      [17] 2401 	call	_PrintText
   6D31 F1            [10] 2402 	pop	af
   6D32 F1            [10] 2403 	pop	af
   6D33 33            [ 6] 2404 	inc	sp
                           2405 ;src/main.c:786: PrintNumber(potScore[1], 2, 71, 15, 1); 		// potion score
   6D34 21 DC 5E      [10] 2406 	ld	hl, #_potScore + 1
   6D37 4E            [ 7] 2407 	ld	c, (hl)
   6D38 06 00         [ 7] 2408 	ld	b, #0x00
   6D3A 21 0F 01      [10] 2409 	ld	hl, #0x010f
   6D3D E5            [11] 2410 	push	hl
   6D3E 21 02 47      [10] 2411 	ld	hl, #0x4702
   6D41 E5            [11] 2412 	push	hl
   6D42 C5            [11] 2413 	push	bc
   6D43 CD 41 62      [17] 2414 	call	_PrintNumber
   6D46 21 06 00      [10] 2415 	ld	hl, #6
   6D49 39            [11] 2416 	add	hl, sp
   6D4A F9            [ 6] 2417 	ld	sp, hl
   6D4B C9            [10] 2418 	ret
   6D4C                    2419 00102$:
                           2420 ;src/main.c:789: PrintNumber(highScore, 5, 61, 6, 1);
   6D4C 21 06 01      [10] 2421 	ld	hl, #0x0106
   6D4F E5            [11] 2422 	push	hl
   6D50 21 05 3D      [10] 2423 	ld	hl, #0x3d05
   6D53 E5            [11] 2424 	push	hl
   6D54 2A D9 5E      [16] 2425 	ld	hl, (_highScore)
   6D57 E5            [11] 2426 	push	hl
   6D58 CD 41 62      [17] 2427 	call	_PrintNumber
   6D5B 21 06 00      [10] 2428 	ld	hl, #6
   6D5E 39            [11] 2429 	add	hl, sp
   6D5F F9            [ 6] 2430 	ld	sp, hl
   6D60 C9            [10] 2431 	ret
   6D61                    2432 ___str_28:
   6D61 30                 2433 	.ascii "0"
   6D62 00                 2434 	.db 0x00
                           2435 ;src/main.c:806: void ResetObjData(u8 player) __z88dk_fastcall {
                           2436 ;	---------------------------------
                           2437 ; Function ResetObjData
                           2438 ; ---------------------------------
   6D63                    2439 _ResetObjData::
   6D63 4D            [ 4] 2440 	ld	c, l
                           2441 ;src/main.c:807: spr[player].objNum_mov = 0; // number of objects
   6D64 11 0A 5F      [10] 2442 	ld	de, #_spr+0
   6D67 06 00         [ 7] 2443 	ld	b,#0x00
   6D69 69            [ 4] 2444 	ld	l, c
   6D6A 60            [ 4] 2445 	ld	h, b
   6D6B 29            [11] 2446 	add	hl, hl
   6D6C 09            [11] 2447 	add	hl, bc
   6D6D 29            [11] 2448 	add	hl, hl
   6D6E 09            [11] 2449 	add	hl, bc
   6D6F 29            [11] 2450 	add	hl, hl
   6D70 09            [11] 2451 	add	hl, bc
   6D71 19            [11] 2452 	add	hl, de
   6D72 11 0C 00      [10] 2453 	ld	de, #0x000c
   6D75 19            [11] 2454 	add	hl, de
   6D76 36 00         [10] 2455 	ld	(hl), #0x00
                           2456 ;src/main.c:808: potScore[player] = 0; // potion value
   6D78 11 DB 5E      [10] 2457 	ld	de, #_potScore+0
   6D7B 69            [ 4] 2458 	ld	l,c
   6D7C 26 00         [ 7] 2459 	ld	h,#0x00
   6D7E 19            [11] 2460 	add	hl, de
   6D7F 36 00         [10] 2461 	ld	(hl), #0x00
                           2462 ;src/main.c:809: coinScore[player] = 0; // money
   6D81 11 DD 5E      [10] 2463 	ld	de, #_coinScore+0
   6D84 69            [ 4] 2464 	ld	l,c
   6D85 26 00         [ 7] 2465 	ld	h,#0x00
   6D87 19            [11] 2466 	add	hl, de
   6D88 36 00         [10] 2467 	ld	(hl), #0x00
                           2468 ;src/main.c:811: if (player == 0)
   6D8A 79            [ 4] 2469 	ld	a, c
   6D8B B7            [ 4] 2470 	or	a, a
   6D8C 20 16         [12] 2471 	jr	NZ,00102$
                           2472 ;src/main.c:812: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 7, 16), cpct_px2byteM0(BG_COLOR, BG_COLOR), 20, 8);
   6D8E 21 01 01      [10] 2473 	ld	hl, #0x0101
   6D91 E5            [11] 2474 	push	hl
   6D92 CD B3 5C      [17] 2475 	call	_cpct_px2byteM0
   6D95 26 00         [ 7] 2476 	ld	h, #0x00
   6D97 01 14 08      [10] 2477 	ld	bc, #0x0814
   6D9A C5            [11] 2478 	push	bc
   6D9B E5            [11] 2479 	push	hl
   6D9C 21 A7 C0      [10] 2480 	ld	hl, #0xc0a7
   6D9F E5            [11] 2481 	push	hl
   6DA0 CD ED 5C      [17] 2482 	call	_cpct_drawSolidBox
   6DA3 C9            [10] 2483 	ret
   6DA4                    2484 00102$:
                           2485 ;src/main.c:814: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 46, 16), cpct_px2byteM0(BG_COLOR, BG_COLOR), 20, 8);
   6DA4 21 01 01      [10] 2486 	ld	hl, #0x0101
   6DA7 E5            [11] 2487 	push	hl
   6DA8 CD B3 5C      [17] 2488 	call	_cpct_px2byteM0
   6DAB 26 00         [ 7] 2489 	ld	h, #0x00
   6DAD 01 14 08      [10] 2490 	ld	bc, #0x0814
   6DB0 C5            [11] 2491 	push	bc
   6DB1 E5            [11] 2492 	push	hl
   6DB2 21 CE C0      [10] 2493 	ld	hl, #0xc0ce
   6DB5 E5            [11] 2494 	push	hl
   6DB6 CD ED 5C      [17] 2495 	call	_cpct_drawSolidBox
   6DB9 C9            [10] 2496 	ret
                           2497 ;src/main.c:819: void PrintObject(u8 nObj, u8 objX, u8 objY) {
                           2498 ;	---------------------------------
                           2499 ; Function PrintObject
                           2500 ; ---------------------------------
   6DBA                    2501 _PrintObject::
   6DBA DD E5         [15] 2502 	push	ix
   6DBC DD 21 00 00   [14] 2503 	ld	ix,#0
   6DC0 DD 39         [15] 2504 	add	ix,sp
                           2505 ;src/main.c:821: OBJ_W, OBJ_H, g_maskTable);
                           2506 ;src/main.c:820: cpct_drawSpriteMaskedAlignedTable(g_objects[nObj], cpct_getScreenPtr(CPCT_VMEM_START, objX, objY),
   6DC2 DD 66 06      [19] 2507 	ld	h, 6 (ix)
   6DC5 DD 6E 05      [19] 2508 	ld	l, 5 (ix)
   6DC8 E5            [11] 2509 	push	hl
   6DC9 21 00 C0      [10] 2510 	ld	hl, #0xc000
   6DCC E5            [11] 2511 	push	hl
   6DCD CD CF 5D      [17] 2512 	call	_cpct_getScreenPtr
   6DD0 4D            [ 4] 2513 	ld	c, l
   6DD1 44            [ 4] 2514 	ld	b, h
   6DD2 11 69 4F      [10] 2515 	ld	de, #_g_objects+0
   6DD5 DD 6E 04      [19] 2516 	ld	l, 4 (ix)
   6DD8 26 00         [ 7] 2517 	ld	h, #0x00
   6DDA 29            [11] 2518 	add	hl, hl
   6DDB 29            [11] 2519 	add	hl, hl
   6DDC 29            [11] 2520 	add	hl, hl
   6DDD 29            [11] 2521 	add	hl, hl
   6DDE 29            [11] 2522 	add	hl, hl
   6DDF 19            [11] 2523 	add	hl, de
   6DE0 11 00 01      [10] 2524 	ld	de, #_g_maskTable
   6DE3 D5            [11] 2525 	push	de
   6DE4 11 04 08      [10] 2526 	ld	de, #0x0804
   6DE7 D5            [11] 2527 	push	de
   6DE8 C5            [11] 2528 	push	bc
   6DE9 E5            [11] 2529 	push	hl
   6DEA CD E5 5D      [17] 2530 	call	_cpct_drawSpriteMaskedAlignedTable
   6DED DD E1         [14] 2531 	pop	ix
   6DEF C9            [10] 2532 	ret
                           2533 ;src/main.c:826: void DeleteObject(u8 index) __z88dk_fastcall {
                           2534 ;	---------------------------------
                           2535 ; Function DeleteObject
                           2536 ; ---------------------------------
   6DF0                    2537 _DeleteObject::
   6DF0 DD E5         [15] 2538 	push	ix
   6DF2 DD 21 00 00   [14] 2539 	ld	ix,#0
   6DF6 DD 39         [15] 2540 	add	ix,sp
   6DF8 F5            [11] 2541 	push	af
   6DF9 3B            [ 6] 2542 	dec	sp
   6DFA 4D            [ 4] 2543 	ld	c, l
                           2544 ;src/main.c:828: 2 + (objX[index] & 1), 2 + (objY[index] & 3 ? 1 : 0), MAP_W, 
   6DFB 11 7C 5F      [10] 2545 	ld	de, #_objY+0
   6DFE 69            [ 4] 2546 	ld	l,c
   6DFF 26 00         [ 7] 2547 	ld	h,#0x00
   6E01 19            [11] 2548 	add	hl, de
   6E02 46            [ 7] 2549 	ld	b, (hl)
   6E03 78            [ 4] 2550 	ld	a, b
   6E04 E6 03         [ 7] 2551 	and	a, #0x03
   6E06 28 04         [12] 2552 	jr	Z,00103$
   6E08 3E 01         [ 7] 2553 	ld	a, #0x01
   6E0A 18 02         [12] 2554 	jr	00104$
   6E0C                    2555 00103$:
   6E0C 3E 00         [ 7] 2556 	ld	a, #0x00
   6E0E                    2557 00104$:
   6E0E C6 02         [ 7] 2558 	add	a, #0x02
   6E10 DD 77 FF      [19] 2559 	ld	-1 (ix), a
   6E13 11 7A 5F      [10] 2560 	ld	de, #_objX+0
   6E16 69            [ 4] 2561 	ld	l,c
   6E17 26 00         [ 7] 2562 	ld	h,#0x00
   6E19 19            [11] 2563 	add	hl, de
   6E1A 5E            [ 7] 2564 	ld	e, (hl)
   6E1B 7B            [ 4] 2565 	ld	a, e
   6E1C E6 01         [ 7] 2566 	and	a, #0x01
   6E1E 57            [ 4] 2567 	ld	d, a
   6E1F 14            [ 4] 2568 	inc	d
   6E20 14            [ 4] 2569 	inc	d
                           2570 ;src/main.c:827: cpct_etm_drawTileBox2x4(objX[index] / 2, (objY[index] - ORIG_MAP_Y) / 4,
   6E21 48            [ 4] 2571 	ld	c, b
   6E22 06 00         [ 7] 2572 	ld	b, #0x00
   6E24 79            [ 4] 2573 	ld	a, c
   6E25 C6 E0         [ 7] 2574 	add	a, #0xe0
   6E27 DD 77 FD      [19] 2575 	ld	-3 (ix), a
   6E2A 78            [ 4] 2576 	ld	a, b
   6E2B CE FF         [ 7] 2577 	adc	a, #0xff
   6E2D DD 77 FE      [19] 2578 	ld	-2 (ix), a
   6E30 E1            [10] 2579 	pop	hl
   6E31 E5            [11] 2580 	push	hl
   6E32 DD CB FE 7E   [20] 2581 	bit	7, -2 (ix)
   6E36 28 04         [12] 2582 	jr	Z,00105$
   6E38 21 E3 FF      [10] 2583 	ld	hl, #0xffe3
   6E3B 09            [11] 2584 	add	hl, bc
   6E3C                    2585 00105$:
   6E3C CB 2C         [ 8] 2586 	sra	h
   6E3E CB 1D         [ 8] 2587 	rr	l
   6E40 CB 2C         [ 8] 2588 	sra	h
   6E42 CB 1D         [ 8] 2589 	rr	l
   6E44 4D            [ 4] 2590 	ld	c, l
   6E45 CB 3B         [ 8] 2591 	srl	e
   6E47 21 71 0F      [10] 2592 	ld	hl, #0x0f71
   6E4A E5            [11] 2593 	push	hl
   6E4B 21 40 C1      [10] 2594 	ld	hl, #0xc140
   6E4E E5            [11] 2595 	push	hl
   6E4F 3E 28         [ 7] 2596 	ld	a, #0x28
   6E51 F5            [11] 2597 	push	af
   6E52 33            [ 6] 2598 	inc	sp
   6E53 DD 7E FF      [19] 2599 	ld	a, -1 (ix)
   6E56 F5            [11] 2600 	push	af
   6E57 33            [ 6] 2601 	inc	sp
   6E58 D5            [11] 2602 	push	de
   6E59 33            [ 6] 2603 	inc	sp
   6E5A 51            [ 4] 2604 	ld	d, c
   6E5B D5            [11] 2605 	push	de
   6E5C CD 11 5B      [17] 2606 	call	_cpct_etm_drawTileBox2x4
   6E5F DD F9         [10] 2607 	ld	sp, ix
   6E61 DD E1         [14] 2608 	pop	ix
   6E63 C9            [10] 2609 	ret
                           2610 ;src/main.c:834: void PrintDust(u8 nFrame, u8 index) {
                           2611 ;	---------------------------------
                           2612 ; Function PrintDust
                           2613 ; ---------------------------------
   6E64                    2614 _PrintDust::
   6E64 DD E5         [15] 2615 	push	ix
   6E66 DD 21 00 00   [14] 2616 	ld	ix,#0
   6E6A DD 39         [15] 2617 	add	ix,sp
                           2618 ;src/main.c:837: OBJ_W, OBJ_H, g_maskTable);
                           2619 ;src/main.c:836: cpct_getScreenPtr(CPCT_VMEM_START, objX[index], objY[index]), 
   6E6C 01 7C 5F      [10] 2620 	ld	bc, #_objY+0
   6E6F DD 6E 05      [19] 2621 	ld	l,5 (ix)
   6E72 26 00         [ 7] 2622 	ld	h,#0x00
   6E74 09            [11] 2623 	add	hl, bc
   6E75 56            [ 7] 2624 	ld	d, (hl)
   6E76 01 7A 5F      [10] 2625 	ld	bc, #_objX+0
   6E79 DD 6E 05      [19] 2626 	ld	l,5 (ix)
   6E7C 26 00         [ 7] 2627 	ld	h,#0x00
   6E7E 09            [11] 2628 	add	hl, bc
   6E7F 5E            [ 7] 2629 	ld	e, (hl)
   6E80 D5            [11] 2630 	push	de
   6E81 21 00 C0      [10] 2631 	ld	hl, #0xc000
   6E84 E5            [11] 2632 	push	hl
   6E85 CD CF 5D      [17] 2633 	call	_cpct_getScreenPtr
   6E88 4D            [ 4] 2634 	ld	c, l
   6E89 44            [ 4] 2635 	ld	b, h
                           2636 ;src/main.c:835: cpct_drawSpriteMaskedAlignedTable(g_dust[nFrame], 
   6E8A 11 91 4A      [10] 2637 	ld	de, #_g_dust+0
   6E8D DD 6E 04      [19] 2638 	ld	l, 4 (ix)
   6E90 26 00         [ 7] 2639 	ld	h, #0x00
   6E92 29            [11] 2640 	add	hl, hl
   6E93 29            [11] 2641 	add	hl, hl
   6E94 29            [11] 2642 	add	hl, hl
   6E95 29            [11] 2643 	add	hl, hl
   6E96 29            [11] 2644 	add	hl, hl
   6E97 19            [11] 2645 	add	hl, de
   6E98 11 00 01      [10] 2646 	ld	de, #_g_maskTable
   6E9B D5            [11] 2647 	push	de
   6E9C 11 04 08      [10] 2648 	ld	de, #0x0804
   6E9F D5            [11] 2649 	push	de
   6EA0 C5            [11] 2650 	push	bc
   6EA1 E5            [11] 2651 	push	hl
   6EA2 CD E5 5D      [17] 2652 	call	_cpct_drawSpriteMaskedAlignedTable
   6EA5 DD E1         [14] 2653 	pop	ix
   6EA7 C9            [10] 2654 	ret
                           2655 ;src/main.c:842: void PrintCoin(u8 nFrame, u8 index) {
                           2656 ;	---------------------------------
                           2657 ; Function PrintCoin
                           2658 ; ---------------------------------
   6EA8                    2659 _PrintCoin::
   6EA8 DD E5         [15] 2660 	push	ix
   6EAA DD 21 00 00   [14] 2661 	ld	ix,#0
   6EAE DD 39         [15] 2662 	add	ix,sp
                           2663 ;src/main.c:845: 3, OBJ_H, g_maskTable);
                           2664 ;src/main.c:844: cpct_getScreenPtr(CPCT_VMEM_START, objX[index], objY[index]), 
   6EB0 01 7C 5F      [10] 2665 	ld	bc, #_objY+0
   6EB3 DD 6E 05      [19] 2666 	ld	l,5 (ix)
   6EB6 26 00         [ 7] 2667 	ld	h,#0x00
   6EB8 09            [11] 2668 	add	hl, bc
   6EB9 56            [ 7] 2669 	ld	d, (hl)
   6EBA 01 7A 5F      [10] 2670 	ld	bc, #_objX+0
   6EBD DD 6E 05      [19] 2671 	ld	l,5 (ix)
   6EC0 26 00         [ 7] 2672 	ld	h,#0x00
   6EC2 09            [11] 2673 	add	hl, bc
   6EC3 5E            [ 7] 2674 	ld	e, (hl)
   6EC4 D5            [11] 2675 	push	de
   6EC5 21 00 C0      [10] 2676 	ld	hl, #0xc000
   6EC8 E5            [11] 2677 	push	hl
   6EC9 CD CF 5D      [17] 2678 	call	_cpct_getScreenPtr
   6ECC 4D            [ 4] 2679 	ld	c, l
   6ECD 44            [ 4] 2680 	ld	b, h
                           2681 ;src/main.c:843: cpct_drawSpriteMaskedAlignedTable(g_coin[nFrame], 
   6ECE DD 5E 04      [19] 2682 	ld	e,4 (ix)
   6ED1 16 00         [ 7] 2683 	ld	d,#0x00
   6ED3 6B            [ 4] 2684 	ld	l, e
   6ED4 62            [ 4] 2685 	ld	h, d
   6ED5 29            [11] 2686 	add	hl, hl
   6ED6 19            [11] 2687 	add	hl, de
   6ED7 29            [11] 2688 	add	hl, hl
   6ED8 29            [11] 2689 	add	hl, hl
   6ED9 29            [11] 2690 	add	hl, hl
   6EDA 11 49 4A      [10] 2691 	ld	de, #_g_coin
   6EDD 19            [11] 2692 	add	hl, de
   6EDE 11 00 01      [10] 2693 	ld	de, #_g_maskTable
   6EE1 D5            [11] 2694 	push	de
   6EE2 11 03 08      [10] 2695 	ld	de, #0x0803
   6EE5 D5            [11] 2696 	push	de
   6EE6 C5            [11] 2697 	push	bc
   6EE7 E5            [11] 2698 	push	hl
   6EE8 CD E5 5D      [17] 2699 	call	_cpct_drawSpriteMaskedAlignedTable
   6EEB DD E1         [14] 2700 	pop	ix
   6EED C9            [10] 2701 	ret
                           2702 ;src/main.c:850: void DeleteObjectInStore() {
                           2703 ;	---------------------------------
                           2704 ; Function DeleteObjectInStore
                           2705 ; ---------------------------------
   6EEE                    2706 _DeleteObjectInStore::
                           2707 ;src/main.c:851: if (TwoPlayers) return;
   6EEE 3A D4 5E      [13] 2708 	ld	a,(#_TwoPlayers + 0)
   6EF1 B7            [ 4] 2709 	or	a, a
   6EF2 C0            [11] 2710 	ret	NZ
                           2711 ;src/main.c:853: 2 + (storeX & 1), 2 + (storeY & 3 ? 1 : 0),	MAP_W, 
   6EF3 3A EA 5E      [13] 2712 	ld	a,(#_storeY + 0)
   6EF6 E6 03         [ 7] 2713 	and	a, #0x03
   6EF8 28 04         [12] 2714 	jr	Z,00105$
   6EFA 16 01         [ 7] 2715 	ld	d, #0x01
   6EFC 18 02         [12] 2716 	jr	00106$
   6EFE                    2717 00105$:
   6EFE 16 00         [ 7] 2718 	ld	d, #0x00
   6F00                    2719 00106$:
   6F00 14            [ 4] 2720 	inc	d
   6F01 14            [ 4] 2721 	inc	d
   6F02 3A E9 5E      [13] 2722 	ld	a,(#_storeX + 0)
   6F05 E6 01         [ 7] 2723 	and	a, #0x01
   6F07 5F            [ 4] 2724 	ld	e, a
   6F08 1C            [ 4] 2725 	inc	e
   6F09 1C            [ 4] 2726 	inc	e
                           2727 ;src/main.c:852: cpct_etm_drawTileBox2x4(storeX / 2, storeY / 4,
   6F0A 21 EA 5E      [10] 2728 	ld	hl,#_storeY + 0
   6F0D 46            [ 7] 2729 	ld	b, (hl)
   6F0E CB 38         [ 8] 2730 	srl	b
   6F10 CB 38         [ 8] 2731 	srl	b
   6F12 21 E9 5E      [10] 2732 	ld	hl,#_storeX + 0
   6F15 4E            [ 7] 2733 	ld	c, (hl)
   6F16 CB 39         [ 8] 2734 	srl	c
   6F18 21 71 0F      [10] 2735 	ld	hl, #0x0f71
   6F1B E5            [11] 2736 	push	hl
   6F1C 21 40 C1      [10] 2737 	ld	hl, #0xc140
   6F1F E5            [11] 2738 	push	hl
   6F20 3E 28         [ 7] 2739 	ld	a, #0x28
   6F22 F5            [11] 2740 	push	af
   6F23 33            [ 6] 2741 	inc	sp
   6F24 D5            [11] 2742 	push	de
   6F25 C5            [11] 2743 	push	bc
   6F26 CD 11 5B      [17] 2744 	call	_cpct_etm_drawTileBox2x4
   6F29 C9            [10] 2745 	ret
                           2746 ;src/main.c:859: void PrintObjectInStore() {
                           2747 ;	---------------------------------
                           2748 ; Function PrintObjectInStore
                           2749 ; ---------------------------------
   6F2A                    2750 _PrintObjectInStore::
                           2751 ;src/main.c:860: if (TwoPlayers) return;
   6F2A 3A D4 5E      [13] 2752 	ld	a,(#_TwoPlayers + 0)
   6F2D B7            [ 4] 2753 	or	a, a
   6F2E C0            [11] 2754 	ret	NZ
                           2755 ;src/main.c:861: if (coinScore[0] == 0) return;
   6F2F 3A DD 5E      [13] 2756 	ld	a, (#_coinScore + 0)
   6F32 B7            [ 4] 2757 	or	a, a
   6F33 C8            [11] 2758 	ret	Z
                           2759 ;src/main.c:863: if (coinScore[0] < 13)
   6F34 FE 0D         [ 7] 2760 	cp	a, #0x0d
   6F36 30 08         [12] 2761 	jr	NC,00106$
                           2762 ;src/main.c:864: nPObj = coinScore[0] + 3; // assign the corresponding object to the available money
   6F38 21 7E 5F      [10] 2763 	ld	hl, #_nPObj
   6F3B C6 03         [ 7] 2764 	add	a, #0x03
   6F3D 77            [ 7] 2765 	ld	(hl), a
   6F3E 18 05         [12] 2766 	jr	00107$
   6F40                    2767 00106$:
                           2768 ;src/main.c:866: nPObj = 15; // assign the most expensive object
   6F40 21 7E 5F      [10] 2769 	ld	hl,#_nPObj + 0
   6F43 36 0F         [10] 2770 	ld	(hl), #0x0f
   6F45                    2771 00107$:
                           2772 ;src/main.c:868: PrintObject(nPObj, storeX, storeY + ORIG_MAP_Y);
   6F45 3A EA 5E      [13] 2773 	ld	a,(#_storeY + 0)
   6F48 C6 20         [ 7] 2774 	add	a, #0x20
   6F4A 47            [ 4] 2775 	ld	b, a
   6F4B C5            [11] 2776 	push	bc
   6F4C 33            [ 6] 2777 	inc	sp
   6F4D 3A E9 5E      [13] 2778 	ld	a, (_storeX)
   6F50 F5            [11] 2779 	push	af
   6F51 33            [ 6] 2780 	inc	sp
   6F52 3A 7E 5F      [13] 2781 	ld	a, (_nPObj)
   6F55 F5            [11] 2782 	push	af
   6F56 33            [ 6] 2783 	inc	sp
   6F57 CD BA 6D      [17] 2784 	call	_PrintObject
   6F5A F1            [10] 2785 	pop	af
   6F5B 33            [ 6] 2786 	inc	sp
   6F5C C9            [10] 2787 	ret
                           2788 ;src/main.c:874: void CheckObject(u8 index) {	
                           2789 ;	---------------------------------
                           2790 ; Function CheckObject
                           2791 ; ---------------------------------
   6F5D                    2792 _CheckObject::
   6F5D DD E5         [15] 2793 	push	ix
   6F5F DD 21 00 00   [14] 2794 	ld	ix,#0
   6F63 DD 39         [15] 2795 	add	ix,sp
   6F65 21 F9 FF      [10] 2796 	ld	hl, #-7
   6F68 39            [11] 2797 	add	hl, sp
   6F69 F9            [ 6] 2798 	ld	sp, hl
                           2799 ;src/main.c:875: i8 player = -1;
   6F6A DD 36 F9 FF   [19] 2800 	ld	-7 (ix), #0xff
                           2801 ;src/main.c:877: if (nObj[index] != -1)	{
   6F6E DD 7E 04      [19] 2802 	ld	a, 4 (ix)
   6F71 C6 78         [ 7] 2803 	add	a, #<(_nObj)
   6F73 DD 77 FE      [19] 2804 	ld	-2 (ix), a
   6F76 3E 00         [ 7] 2805 	ld	a, #0x00
   6F78 CE 5F         [ 7] 2806 	adc	a, #>(_nObj)
   6F7A DD 77 FF      [19] 2807 	ld	-1 (ix), a
   6F7D DD 6E FE      [19] 2808 	ld	l,-2 (ix)
   6F80 DD 66 FF      [19] 2809 	ld	h,-1 (ix)
   6F83 4E            [ 7] 2810 	ld	c, (hl)
   6F84 0C            [ 4] 2811 	inc	c
   6F85 CA 58 71      [10] 2812 	jp	Z,00124$
                           2813 ;src/main.c:878: if (SpriteCollision(objX[index], objY[index], &spr[0], 0)) player = 0; // player 1
   6F88 DD 7E 04      [19] 2814 	ld	a, 4 (ix)
   6F8B C6 7C         [ 7] 2815 	add	a, #<(_objY)
   6F8D DD 77 FC      [19] 2816 	ld	-4 (ix), a
   6F90 3E 00         [ 7] 2817 	ld	a, #0x00
   6F92 CE 5F         [ 7] 2818 	adc	a, #>(_objY)
   6F94 DD 77 FD      [19] 2819 	ld	-3 (ix), a
   6F97 DD 6E FC      [19] 2820 	ld	l,-4 (ix)
   6F9A DD 66 FD      [19] 2821 	ld	h,-3 (ix)
   6F9D 56            [ 7] 2822 	ld	d, (hl)
   6F9E DD 7E 04      [19] 2823 	ld	a, 4 (ix)
   6FA1 C6 7A         [ 7] 2824 	add	a, #<(_objX)
   6FA3 DD 77 FA      [19] 2825 	ld	-6 (ix), a
   6FA6 3E 00         [ 7] 2826 	ld	a, #0x00
   6FA8 CE 5F         [ 7] 2827 	adc	a, #>(_objX)
   6FAA DD 77 FB      [19] 2828 	ld	-5 (ix), a
   6FAD DD 6E FA      [19] 2829 	ld	l,-6 (ix)
   6FB0 DD 66 FB      [19] 2830 	ld	h,-5 (ix)
   6FB3 46            [ 7] 2831 	ld	b, (hl)
   6FB4 AF            [ 4] 2832 	xor	a, a
   6FB5 F5            [11] 2833 	push	af
   6FB6 33            [ 6] 2834 	inc	sp
   6FB7 21 0A 5F      [10] 2835 	ld	hl, #_spr
   6FBA E5            [11] 2836 	push	hl
   6FBB 58            [ 4] 2837 	ld	e, b
   6FBC D5            [11] 2838 	push	de
   6FBD CD 7F 7D      [17] 2839 	call	_SpriteCollision
   6FC0 F1            [10] 2840 	pop	af
   6FC1 F1            [10] 2841 	pop	af
   6FC2 33            [ 6] 2842 	inc	sp
   6FC3 7D            [ 4] 2843 	ld	a, l
   6FC4 B7            [ 4] 2844 	or	a, a
   6FC5 28 06         [12] 2845 	jr	Z,00105$
   6FC7 DD 36 F9 00   [19] 2846 	ld	-7 (ix), #0x00
   6FCB 18 2B         [12] 2847 	jr	00106$
   6FCD                    2848 00105$:
                           2849 ;src/main.c:879: else if (TwoPlayers && SpriteCollision(objX[index], objY[index], &spr[1], 0)) player = 1; // player 2
   6FCD 3A D4 5E      [13] 2850 	ld	a,(#_TwoPlayers + 0)
   6FD0 B7            [ 4] 2851 	or	a, a
   6FD1 28 25         [12] 2852 	jr	Z,00106$
   6FD3 DD 6E FC      [19] 2853 	ld	l,-4 (ix)
   6FD6 DD 66 FD      [19] 2854 	ld	h,-3 (ix)
   6FD9 56            [ 7] 2855 	ld	d, (hl)
   6FDA DD 6E FA      [19] 2856 	ld	l,-6 (ix)
   6FDD DD 66 FB      [19] 2857 	ld	h,-5 (ix)
   6FE0 46            [ 7] 2858 	ld	b, (hl)
   6FE1 AF            [ 4] 2859 	xor	a, a
   6FE2 F5            [11] 2860 	push	af
   6FE3 33            [ 6] 2861 	inc	sp
   6FE4 21 19 5F      [10] 2862 	ld	hl, #(_spr + 0x000f)
   6FE7 E5            [11] 2863 	push	hl
   6FE8 58            [ 4] 2864 	ld	e, b
   6FE9 D5            [11] 2865 	push	de
   6FEA CD 7F 7D      [17] 2866 	call	_SpriteCollision
   6FED F1            [10] 2867 	pop	af
   6FEE F1            [10] 2868 	pop	af
   6FEF 33            [ 6] 2869 	inc	sp
   6FF0 7D            [ 4] 2870 	ld	a, l
   6FF1 B7            [ 4] 2871 	or	a, a
   6FF2 28 04         [12] 2872 	jr	Z,00106$
   6FF4 DD 36 F9 01   [19] 2873 	ld	-7 (ix), #0x01
   6FF8                    2874 00106$:
                           2875 ;src/main.c:881: if (player >= 0)	{									
   6FF8 DD CB F9 7E   [20] 2876 	bit	7, -7 (ix)
   6FFC C2 58 71      [10] 2877 	jp	NZ, 00124$
                           2878 ;src/main.c:882: DeleteObject(index);
   6FFF DD 6E 04      [19] 2879 	ld	l, 4 (ix)
   7002 CD F0 6D      [17] 2880 	call	_DeleteObject
                           2881 ;src/main.c:885: if (nObj[index] <= 1) {
   7005 DD 6E FE      [19] 2882 	ld	l,-2 (ix)
   7008 DD 66 FF      [19] 2883 	ld	h,-1 (ix)
   700B 4E            [ 7] 2884 	ld	c, (hl)
   700C 3E 01         [ 7] 2885 	ld	a, #0x01
   700E 91            [ 4] 2886 	sub	a, c
   700F E2 14 70      [10] 2887 	jp	PO, 00183$
   7012 EE 80         [ 7] 2888 	xor	a, #0x80
   7014                    2889 00183$:
   7014 FA 44 70      [10] 2890 	jp	M, 00112$
                           2891 ;src/main.c:886: cpct_akp_SFXPlay (2, 12, 79, 0, 0, AY_CHANNEL_C); // take an item
   7017 3E 04         [ 7] 2892 	ld	a, #0x04
   7019 F5            [11] 2893 	push	af
   701A 33            [ 6] 2894 	inc	sp
   701B 21 00 00      [10] 2895 	ld	hl, #0x0000
   701E E5            [11] 2896 	push	hl
   701F 2E 4F         [ 7] 2897 	ld	l, #0x4f
   7021 E5            [11] 2898 	push	hl
   7022 21 02 0C      [10] 2899 	ld	hl, #0x0c02
   7025 E5            [11] 2900 	push	hl
   7026 CD EF 59      [17] 2901 	call	_cpct_akp_SFXPlay
   7029 21 07 00      [10] 2902 	ld	hl, #7
   702C 39            [11] 2903 	add	hl, sp
   702D F9            [ 6] 2904 	ld	sp, hl
                           2905 ;src/main.c:887: if (nMap == 0 && !TwoPlayers && nTip<2) 
   702E 3A D0 5E      [13] 2906 	ld	a,(#_nMap + 0)
   7031 B7            [ 4] 2907 	or	a, a
   7032 20 10         [12] 2908 	jr	NZ,00112$
   7034 3A D4 5E      [13] 2909 	ld	a,(#_TwoPlayers + 0)
   7037 B7            [ 4] 2910 	or	a, a
   7038 20 0A         [12] 2911 	jr	NZ,00112$
   703A 3A F0 5E      [13] 2912 	ld	a,(#_nTip + 0)
   703D D6 02         [ 7] 2913 	sub	a, #0x02
   703F 30 03         [12] 2914 	jr	NC,00112$
                           2915 ;src/main.c:888: PrintTip(); // novice help
   7041 CD 2C 68      [17] 2916 	call	_PrintTip
   7044                    2917 00112$:
                           2918 ;src/main.c:891: switch (nObj[index])
   7044 DD 6E FE      [19] 2919 	ld	l,-2 (ix)
   7047 DD 66 FF      [19] 2920 	ld	h,-1 (ix)
   704A 7E            [ 7] 2921 	ld	a, (hl)
   704B DD 77 FA      [19] 2922 	ld	-6 (ix), a
                           2923 ;src/main.c:894: coinScore[player]++;
   704E DD 5E F9      [19] 2924 	ld	e, -7 (ix)
   7051 DD 7E F9      [19] 2925 	ld	a, -7 (ix)
   7054 17            [ 4] 2926 	rla
   7055 9F            [ 4] 2927 	sbc	a, a
   7056 57            [ 4] 2928 	ld	d, a
                           2929 ;src/main.c:895: score[player] += 5;
   7057 4B            [ 4] 2930 	ld	c, e
   7058 42            [ 4] 2931 	ld	b, d
   7059 CB 21         [ 8] 2932 	sla	c
   705B CB 10         [ 8] 2933 	rl	b
                           2934 ;src/main.c:891: switch (nObj[index])
   705D DD 7E FA      [19] 2935 	ld	a, -6 (ix)
   7060 B7            [ 4] 2936 	or	a, a
   7061 28 2E         [12] 2937 	jr	Z,00113$
   7063 DD 7E FA      [19] 2938 	ld	a, -6 (ix)
   7066 3D            [ 4] 2939 	dec	a
   7067 28 49         [12] 2940 	jr	Z,00114$
                           2941 ;src/main.c:909: if (spr[player].lives_speed < 9)
   7069 DD 5E F9      [19] 2942 	ld	e, -7 (ix)
   706C 7B            [ 4] 2943 	ld	a, e
   706D CB 07         [ 8] 2944 	rlc	a
   706F 9F            [ 4] 2945 	sbc	a, a
   7070 57            [ 4] 2946 	ld	d, a
   7071 6B            [ 4] 2947 	ld	l, e
   7072 62            [ 4] 2948 	ld	h, d
   7073 29            [11] 2949 	add	hl, hl
   7074 19            [11] 2950 	add	hl, de
   7075 29            [11] 2951 	add	hl, hl
   7076 19            [11] 2952 	add	hl, de
   7077 29            [11] 2953 	add	hl, hl
   7078 19            [11] 2954 	add	hl, de
   7079 EB            [ 4] 2955 	ex	de,hl
   707A 21 0A 5F      [10] 2956 	ld	hl, #_spr
   707D 19            [11] 2957 	add	hl,de
   707E EB            [ 4] 2958 	ex	de,hl
                           2959 ;src/main.c:891: switch (nObj[index])
   707F DD 7E FA      [19] 2960 	ld	a, -6 (ix)
   7082 D6 02         [ 7] 2961 	sub	a, #0x02
   7084 28 50         [12] 2962 	jr	Z,00115$
   7086 DD 7E FA      [19] 2963 	ld	a, -6 (ix)
   7089 D6 03         [ 7] 2964 	sub	a, #0x03
   708B CA 12 71      [10] 2965 	jp	Z,00118$
   708E C3 47 71      [10] 2966 	jp	00119$
                           2967 ;src/main.c:893: case 0:	{	// coin
   7091                    2968 00113$:
                           2969 ;src/main.c:894: coinScore[player]++;
   7091 21 DD 5E      [10] 2970 	ld	hl, #_coinScore+0
   7094 19            [11] 2971 	add	hl, de
   7095 5E            [ 7] 2972 	ld	e, (hl)
   7096 1C            [ 4] 2973 	inc	e
   7097 73            [ 7] 2974 	ld	(hl), e
                           2975 ;src/main.c:895: score[player] += 5;
   7098 21 D5 5E      [10] 2976 	ld	hl, #_score+0
   709B 09            [11] 2977 	add	hl, bc
   709C E5            [11] 2978 	push	hl
   709D 4E            [ 7] 2979 	ld	c, (hl)
   709E 23            [ 6] 2980 	inc	hl
   709F 46            [ 7] 2981 	ld	b, (hl)
   70A0 E1            [10] 2982 	pop	hl
   70A1 03            [ 6] 2983 	inc	bc
   70A2 03            [ 6] 2984 	inc	bc
   70A3 03            [ 6] 2985 	inc	bc
   70A4 03            [ 6] 2986 	inc	bc
   70A5 03            [ 6] 2987 	inc	bc
   70A6 71            [ 7] 2988 	ld	(hl), c
   70A7 23            [ 6] 2989 	inc	hl
   70A8 70            [ 7] 2990 	ld	(hl), b
                           2991 ;src/main.c:896: DeleteObjectInStore();
   70A9 CD EE 6E      [17] 2992 	call	_DeleteObjectInStore
                           2993 ;src/main.c:897: PrintObjectInStore();
   70AC CD 2A 6F      [17] 2994 	call	_PrintObjectInStore
                           2995 ;src/main.c:898: break;
   70AF C3 47 71      [10] 2996 	jp	00119$
                           2997 ;src/main.c:900: case 1: {	// coin x5
   70B2                    2998 00114$:
                           2999 ;src/main.c:901: coinScore[player] += 5;
   70B2 21 DD 5E      [10] 3000 	ld	hl, #_coinScore
   70B5 19            [11] 3001 	add	hl, de
   70B6 7E            [ 7] 3002 	ld	a, (hl)
   70B7 C6 05         [ 7] 3003 	add	a, #0x05
   70B9 77            [ 7] 3004 	ld	(hl), a
                           3005 ;src/main.c:902: score[player] += 20;
   70BA 21 D5 5E      [10] 3006 	ld	hl, #_score
   70BD 09            [11] 3007 	add	hl, bc
   70BE E5            [11] 3008 	push	hl
   70BF 4E            [ 7] 3009 	ld	c, (hl)
   70C0 23            [ 6] 3010 	inc	hl
   70C1 46            [ 7] 3011 	ld	b, (hl)
   70C2 E1            [10] 3012 	pop	hl
   70C3 79            [ 4] 3013 	ld	a, c
   70C4 C6 14         [ 7] 3014 	add	a, #0x14
   70C6 4F            [ 4] 3015 	ld	c, a
   70C7 78            [ 4] 3016 	ld	a, b
   70C8 CE 00         [ 7] 3017 	adc	a, #0x00
   70CA 47            [ 4] 3018 	ld	b, a
   70CB 71            [ 7] 3019 	ld	(hl), c
   70CC 23            [ 6] 3020 	inc	hl
   70CD 70            [ 7] 3021 	ld	(hl), b
                           3022 ;src/main.c:903: DeleteObjectInStore();
   70CE CD EE 6E      [17] 3023 	call	_DeleteObjectInStore
                           3024 ;src/main.c:904: PrintObjectInStore();
   70D1 CD 2A 6F      [17] 3025 	call	_PrintObjectInStore
                           3026 ;src/main.c:905: break;
   70D4 18 71         [12] 3027 	jr	00119$
                           3028 ;src/main.c:907: case 2: {	// extra life
   70D6                    3029 00115$:
                           3030 ;src/main.c:908: cpct_akp_SFXPlay (8, 12, 60, 0, 0, AY_CHANNEL_C); // Prince of Persia tune
   70D6 C5            [11] 3031 	push	bc
   70D7 D5            [11] 3032 	push	de
   70D8 3E 04         [ 7] 3033 	ld	a, #0x04
   70DA F5            [11] 3034 	push	af
   70DB 33            [ 6] 3035 	inc	sp
   70DC 21 00 00      [10] 3036 	ld	hl, #0x0000
   70DF E5            [11] 3037 	push	hl
   70E0 2E 3C         [ 7] 3038 	ld	l, #0x3c
   70E2 E5            [11] 3039 	push	hl
   70E3 21 08 0C      [10] 3040 	ld	hl, #0x0c08
   70E6 E5            [11] 3041 	push	hl
   70E7 CD EF 59      [17] 3042 	call	_cpct_akp_SFXPlay
   70EA 21 07 00      [10] 3043 	ld	hl, #7
   70ED 39            [11] 3044 	add	hl, sp
   70EE F9            [ 6] 3045 	ld	sp, hl
   70EF D1            [10] 3046 	pop	de
   70F0 C1            [10] 3047 	pop	bc
                           3048 ;src/main.c:909: if (spr[player].lives_speed < 9)
   70F1 21 0B 00      [10] 3049 	ld	hl, #0x000b
   70F4 19            [11] 3050 	add	hl, de
   70F5 7E            [ 7] 3051 	ld	a, (hl)
   70F6 FE 09         [ 7] 3052 	cp	a, #0x09
   70F8 30 02         [12] 3053 	jr	NC,00117$
                           3054 ;src/main.c:910: spr[player].lives_speed++;
   70FA 3C            [ 4] 3055 	inc	a
   70FB 77            [ 7] 3056 	ld	(hl), a
   70FC                    3057 00117$:
                           3058 ;src/main.c:911: score[player] += 30;
   70FC 21 D5 5E      [10] 3059 	ld	hl, #_score
   70FF 09            [11] 3060 	add	hl, bc
   7100 E5            [11] 3061 	push	hl
   7101 4E            [ 7] 3062 	ld	c, (hl)
   7102 23            [ 6] 3063 	inc	hl
   7103 46            [ 7] 3064 	ld	b, (hl)
   7104 E1            [10] 3065 	pop	hl
   7105 79            [ 4] 3066 	ld	a, c
   7106 C6 1E         [ 7] 3067 	add	a, #0x1e
   7108 4F            [ 4] 3068 	ld	c, a
   7109 78            [ 4] 3069 	ld	a, b
   710A CE 00         [ 7] 3070 	adc	a, #0x00
   710C 47            [ 4] 3071 	ld	b, a
   710D 71            [ 7] 3072 	ld	(hl), c
   710E 23            [ 6] 3073 	inc	hl
   710F 70            [ 7] 3074 	ld	(hl), b
                           3075 ;src/main.c:912: break;
   7110 18 35         [12] 3076 	jr	00119$
                           3077 ;src/main.c:914: case 3: {	// power up speed*2
   7112                    3078 00118$:
                           3079 ;src/main.c:915: cpct_akp_SFXPlay (9, 12, 60, 0, 0, AY_CHANNEL_A); // powerUp
   7112 C5            [11] 3080 	push	bc
   7113 D5            [11] 3081 	push	de
   7114 3E 01         [ 7] 3082 	ld	a, #0x01
   7116 F5            [11] 3083 	push	af
   7117 33            [ 6] 3084 	inc	sp
   7118 21 00 00      [10] 3085 	ld	hl, #0x0000
   711B E5            [11] 3086 	push	hl
   711C 2E 3C         [ 7] 3087 	ld	l, #0x3c
   711E E5            [11] 3088 	push	hl
   711F 21 09 0C      [10] 3089 	ld	hl, #0x0c09
   7122 E5            [11] 3090 	push	hl
   7123 CD EF 59      [17] 3091 	call	_cpct_akp_SFXPlay
   7126 21 07 00      [10] 3092 	ld	hl, #7
   7129 39            [11] 3093 	add	hl, sp
   712A F9            [ 6] 3094 	ld	sp, hl
   712B D1            [10] 3095 	pop	de
   712C C1            [10] 3096 	pop	bc
                           3097 ;src/main.c:916: spr[player].power_maxV = 255;
   712D 21 0E 00      [10] 3098 	ld	hl, #0x000e
   7130 19            [11] 3099 	add	hl, de
   7131 36 FF         [10] 3100 	ld	(hl), #0xff
                           3101 ;src/main.c:917: score[player] += 25;
   7133 21 D5 5E      [10] 3102 	ld	hl, #_score
   7136 09            [11] 3103 	add	hl, bc
   7137 E5            [11] 3104 	push	hl
   7138 4E            [ 7] 3105 	ld	c, (hl)
   7139 23            [ 6] 3106 	inc	hl
   713A 46            [ 7] 3107 	ld	b, (hl)
   713B E1            [10] 3108 	pop	hl
   713C 79            [ 4] 3109 	ld	a, c
   713D C6 19         [ 7] 3110 	add	a, #0x19
   713F 4F            [ 4] 3111 	ld	c, a
   7140 78            [ 4] 3112 	ld	a, b
   7141 CE 00         [ 7] 3113 	adc	a, #0x00
   7143 47            [ 4] 3114 	ld	b, a
   7144 71            [ 7] 3115 	ld	(hl), c
   7145 23            [ 6] 3116 	inc	hl
   7146 70            [ 7] 3117 	ld	(hl), b
                           3118 ;src/main.c:919: }
   7147                    3119 00119$:
                           3120 ;src/main.c:920: RefreshHighScore(player);
   7147 DD 6E F9      [19] 3121 	ld	l, -7 (ix)
   714A CD C1 6A      [17] 3122 	call	_RefreshHighScore
                           3123 ;src/main.c:921: RefreshScoreboard();
   714D CD 4A 6C      [17] 3124 	call	_RefreshScoreboard
                           3125 ;src/main.c:922: nObj[index] = -1; // object not assigned
   7150 DD 6E FE      [19] 3126 	ld	l,-2 (ix)
   7153 DD 66 FF      [19] 3127 	ld	h,-1 (ix)
   7156 36 FF         [10] 3128 	ld	(hl), #0xff
   7158                    3129 00124$:
   7158 DD F9         [10] 3130 	ld	sp, ix
   715A DD E1         [14] 3131 	pop	ix
   715C C9            [10] 3132 	ret
                           3133 ;src/main.c:929: u8 ObjectCollision(u8 numObj) __z88dk_fastcall {	
                           3134 ;	---------------------------------
                           3135 ; Function ObjectCollision
                           3136 ; ---------------------------------
   715D                    3137 _ObjectCollision::
   715D DD E5         [15] 3138 	push	ix
   715F DD 21 00 00   [14] 3139 	ld	ix,#0
   7163 DD 39         [15] 3140 	add	ix,sp
   7165 F5            [11] 3141 	push	af
   7166 3B            [ 6] 3142 	dec	sp
   7167 4D            [ 4] 3143 	ld	c, l
                           3144 ;src/main.c:931: while(i<=5) {
   7168 11 7C 5F      [10] 3145 	ld	de, #_objY+0
   716B 69            [ 4] 3146 	ld	l,c
   716C 26 00         [ 7] 3147 	ld	h,#0x00
   716E 19            [11] 3148 	add	hl, de
   716F 7E            [ 7] 3149 	ld	a, (hl)
   7170 DD 77 FF      [19] 3150 	ld	-1 (ix), a
   7173 11 7A 5F      [10] 3151 	ld	de, #_objX+0
   7176 69            [ 4] 3152 	ld	l,c
   7177 26 00         [ 7] 3153 	ld	h,#0x00
   7179 19            [11] 3154 	add	hl, de
   717A 7E            [ 7] 3155 	ld	a, (hl)
   717B DD 77 FE      [19] 3156 	ld	-2 (ix), a
   717E DD 36 FD 02   [19] 3157 	ld	-3 (ix), #0x02
   7182                    3158 00106$:
   7182 3E 05         [ 7] 3159 	ld	a, #0x05
   7184 DD 96 FD      [19] 3160 	sub	a, -3 (ix)
   7187 38 7A         [12] 3161 	jr	C,00108$
                           3162 ;src/main.c:932: if ((spr[i].x + SPR_W >= objX[numObj] && spr[i].x <= objX[numObj] + OBJ_W) && 
   7189 DD 4E FD      [19] 3163 	ld	c,-3 (ix)
   718C 06 00         [ 7] 3164 	ld	b,#0x00
   718E 69            [ 4] 3165 	ld	l, c
   718F 60            [ 4] 3166 	ld	h, b
   7190 29            [11] 3167 	add	hl, hl
   7191 09            [11] 3168 	add	hl, bc
   7192 29            [11] 3169 	add	hl, hl
   7193 09            [11] 3170 	add	hl, bc
   7194 29            [11] 3171 	add	hl, hl
   7195 09            [11] 3172 	add	hl, bc
   7196 4D            [ 4] 3173 	ld	c, l
   7197 44            [ 4] 3174 	ld	b, h
   7198 FD 21 0A 5F   [14] 3175 	ld	iy, #_spr
   719C FD 09         [15] 3176 	add	iy, bc
   719E FD E5         [15] 3177 	push	iy
   71A0 E1            [10] 3178 	pop	hl
   71A1 23            [ 6] 3179 	inc	hl
   71A2 23            [ 6] 3180 	inc	hl
   71A3 4E            [ 7] 3181 	ld	c, (hl)
   71A4 06 00         [ 7] 3182 	ld	b, #0x00
   71A6 21 05 00      [10] 3183 	ld	hl, #0x0005
   71A9 09            [11] 3184 	add	hl, bc
   71AA DD 5E FE      [19] 3185 	ld	e, -2 (ix)
   71AD 16 00         [ 7] 3186 	ld	d, #0x00
   71AF 7D            [ 4] 3187 	ld	a, l
   71B0 93            [ 4] 3188 	sub	a, e
   71B1 7C            [ 4] 3189 	ld	a, h
   71B2 9A            [ 4] 3190 	sbc	a, d
   71B3 E2 B8 71      [10] 3191 	jp	PO, 00135$
   71B6 EE 80         [ 7] 3192 	xor	a, #0x80
   71B8                    3193 00135$:
   71B8 FA FD 71      [10] 3194 	jp	M, 00102$
   71BB 13            [ 6] 3195 	inc	de
   71BC 13            [ 6] 3196 	inc	de
   71BD 13            [ 6] 3197 	inc	de
   71BE 13            [ 6] 3198 	inc	de
   71BF 7B            [ 4] 3199 	ld	a, e
   71C0 91            [ 4] 3200 	sub	a, c
   71C1 7A            [ 4] 3201 	ld	a, d
   71C2 98            [ 4] 3202 	sbc	a, b
   71C3 E2 C8 71      [10] 3203 	jp	PO, 00136$
   71C6 EE 80         [ 7] 3204 	xor	a, #0x80
   71C8                    3205 00136$:
   71C8 FA FD 71      [10] 3206 	jp	M, 00102$
                           3207 ;src/main.c:933: (spr[i].y + SPR_H >= objY[numObj] && spr[i].y <= objY[numObj] + OBJ_H)) {
   71CB FD E5         [15] 3208 	push	iy
   71CD E1            [10] 3209 	pop	hl
   71CE 23            [ 6] 3210 	inc	hl
   71CF 23            [ 6] 3211 	inc	hl
   71D0 23            [ 6] 3212 	inc	hl
   71D1 4E            [ 7] 3213 	ld	c, (hl)
   71D2 06 00         [ 7] 3214 	ld	b, #0x00
   71D4 21 0C 00      [10] 3215 	ld	hl, #0x000c
   71D7 09            [11] 3216 	add	hl, bc
   71D8 DD 5E FF      [19] 3217 	ld	e, -1 (ix)
   71DB 16 00         [ 7] 3218 	ld	d, #0x00
   71DD 7D            [ 4] 3219 	ld	a, l
   71DE 93            [ 4] 3220 	sub	a, e
   71DF 7C            [ 4] 3221 	ld	a, h
   71E0 9A            [ 4] 3222 	sbc	a, d
   71E1 E2 E6 71      [10] 3223 	jp	PO, 00137$
   71E4 EE 80         [ 7] 3224 	xor	a, #0x80
   71E6                    3225 00137$:
   71E6 FA FD 71      [10] 3226 	jp	M, 00102$
   71E9 21 08 00      [10] 3227 	ld	hl, #0x0008
   71EC 19            [11] 3228 	add	hl, de
   71ED 7D            [ 4] 3229 	ld	a, l
   71EE 91            [ 4] 3230 	sub	a, c
   71EF 7C            [ 4] 3231 	ld	a, h
   71F0 98            [ 4] 3232 	sbc	a, b
   71F1 E2 F6 71      [10] 3233 	jp	PO, 00138$
   71F4 EE 80         [ 7] 3234 	xor	a, #0x80
   71F6                    3235 00138$:
   71F6 FA FD 71      [10] 3236 	jp	M, 00102$
                           3237 ;src/main.c:934: return 1;
   71F9 2E 01         [ 7] 3238 	ld	l, #0x01
   71FB 18 08         [12] 3239 	jr	00109$
   71FD                    3240 00102$:
                           3241 ;src/main.c:936: i++;
   71FD DD 34 FD      [23] 3242 	inc	-3 (ix)
   7200 C3 82 71      [10] 3243 	jp	00106$
   7203                    3244 00108$:
                           3245 ;src/main.c:938: return 0;
   7203 2E 00         [ 7] 3246 	ld	l, #0x00
   7205                    3247 00109$:
   7205 DD F9         [10] 3248 	ld	sp, ix
   7207 DD E1         [14] 3249 	pop	ix
   7209 C9            [10] 3250 	ret
                           3251 ;src/main.c:945: void ReprintObject() {
                           3252 ;	---------------------------------
                           3253 ; Function ReprintObject
                           3254 ; ---------------------------------
   720A                    3255 _ReprintObject::
                           3256 ;src/main.c:947: if (nObj[0] >= 0 && !ObjectCollision(0)) {  // does not print if hidden by enemies
   720A 21 78 5F      [10] 3257 	ld	hl, #_nObj + 0
   720D CB 7E         [12] 3258 	bit	7, (hl)
   720F C2 5C 73      [10] 3259 	jp	NZ, 00125$
   7212 2E 00         [ 7] 3260 	ld	l, #0x00
   7214 CD 5D 71      [17] 3261 	call	_ObjectCollision
   7217 7D            [ 4] 3262 	ld	a, l
   7218 B7            [ 4] 3263 	or	a, a
   7219 C2 5C 73      [10] 3264 	jp	NZ, 00125$
                           3265 ;src/main.c:948: switch(ctMainLoop) {
   721C FD 21 F2 5E   [14] 3266 	ld	iy, #_ctMainLoop
   7220 FD 7E 00      [19] 3267 	ld	a, 0 (iy)
   7223 B7            [ 4] 3268 	or	a, a
   7224 FD B6 01      [19] 3269 	or	a, 1 (iy)
   7227 CA CD 72      [10] 3270 	jp	Z,00102$
   722A FD 7E 00      [19] 3271 	ld	a, 0 (iy)
   722D D6 08         [ 7] 3272 	sub	a, #0x08
   722F FD B6 01      [19] 3273 	or	a, 1 (iy)
   7232 CA DD 72      [10] 3274 	jp	Z,00104$
   7235 FD 7E 00      [19] 3275 	ld	a, 0 (iy)
   7238 D6 10         [ 7] 3276 	sub	a, #0x10
   723A FD B6 01      [19] 3277 	or	a, 1 (iy)
   723D CA EC 72      [10] 3278 	jp	Z,00105$
   7240 FD 7E 00      [19] 3279 	ld	a, 0 (iy)
   7243 D6 18         [ 7] 3280 	sub	a, #0x18
   7245 FD B6 01      [19] 3281 	or	a, 1 (iy)
   7248 CA 07 73      [10] 3282 	jp	Z,00108$
   724B FD 7E 00      [19] 3283 	ld	a, 0 (iy)
   724E D6 20         [ 7] 3284 	sub	a, #0x20
   7250 FD B6 01      [19] 3285 	or	a, 1 (iy)
   7253 CA 1B 73      [10] 3286 	jp	Z,00113$
   7256 FD 7E 00      [19] 3287 	ld	a, 0 (iy)
   7259 D6 28         [ 7] 3288 	sub	a, #0x28
   725B FD B6 01      [19] 3289 	or	a, 1 (iy)
   725E CA 2F 73      [10] 3290 	jp	Z,00118$
   7261 FD 7E 00      [19] 3291 	ld	a, 0 (iy)
   7264 D6 38         [ 7] 3292 	sub	a, #0x38
   7266 FD B6 01      [19] 3293 	or	a, 1 (iy)
   7269 CA 07 73      [10] 3294 	jp	Z,00108$
   726C FD 7E 00      [19] 3295 	ld	a, 0 (iy)
   726F D6 40         [ 7] 3296 	sub	a, #0x40
   7271 FD B6 01      [19] 3297 	or	a, 1 (iy)
   7274 CA 1B 73      [10] 3298 	jp	Z,00113$
   7277 FD 7E 00      [19] 3299 	ld	a, 0 (iy)
   727A D6 48         [ 7] 3300 	sub	a, #0x48
   727C FD B6 01      [19] 3301 	or	a, 1 (iy)
   727F CA 2F 73      [10] 3302 	jp	Z,00118$
   7282 FD 7E 00      [19] 3303 	ld	a, 0 (iy)
   7285 D6 58         [ 7] 3304 	sub	a, #0x58
   7287 FD B6 01      [19] 3305 	or	a, 1 (iy)
   728A CA 07 73      [10] 3306 	jp	Z,00108$
   728D FD 7E 00      [19] 3307 	ld	a, 0 (iy)
   7290 D6 60         [ 7] 3308 	sub	a, #0x60
   7292 FD B6 01      [19] 3309 	or	a, 1 (iy)
   7295 CA 1B 73      [10] 3310 	jp	Z,00113$
   7298 FD 7E 00      [19] 3311 	ld	a, 0 (iy)
   729B D6 68         [ 7] 3312 	sub	a, #0x68
   729D FD B6 01      [19] 3313 	or	a, 1 (iy)
   72A0 CA 2F 73      [10] 3314 	jp	Z,00118$
   72A3 FD 7E 00      [19] 3315 	ld	a, 0 (iy)
   72A6 D6 48         [ 7] 3316 	sub	a, #0x48
   72A8 20 07         [12] 3317 	jr	NZ,00323$
   72AA FD 7E 01      [19] 3318 	ld	a, 1 (iy)
   72AD 3D            [ 4] 3319 	dec	a
   72AE CA 43 73      [10] 3320 	jp	Z,00121$
   72B1                    3321 00323$:
   72B1 FD 7E 00      [19] 3322 	ld	a, 0 (iy)
   72B4 D6 50         [ 7] 3323 	sub	a, #0x50
   72B6 20 06         [12] 3324 	jr	NZ,00324$
   72B8 FD 7E 01      [19] 3325 	ld	a, 1 (iy)
   72BB 3D            [ 4] 3326 	dec	a
   72BC 28 1F         [12] 3327 	jr	Z,00104$
   72BE                    3328 00324$:
   72BE FD 7E 00      [19] 3329 	ld	a, 0 (iy)
   72C1 D6 58         [ 7] 3330 	sub	a, #0x58
   72C3 C2 48 73      [10] 3331 	jp	NZ,00122$
   72C6 FD 7E 01      [19] 3332 	ld	a, 1 (iy)
   72C9 3D            [ 4] 3333 	dec	a
   72CA C2 48 73      [10] 3334 	jp	NZ,00122$
                           3335 ;src/main.c:951: case 344:	{ DeleteObject(0); PrintDust(0,0); break; }
   72CD                    3336 00102$:
   72CD 2E 00         [ 7] 3337 	ld	l, #0x00
   72CF CD F0 6D      [17] 3338 	call	_DeleteObject
   72D2 21 00 00      [10] 3339 	ld	hl, #0x0000
   72D5 E5            [11] 3340 	push	hl
   72D6 CD 64 6E      [17] 3341 	call	_PrintDust
   72D9 F1            [10] 3342 	pop	af
   72DA C3 5C 73      [10] 3343 	jp	00125$
                           3344 ;src/main.c:954: case 336:	{ DeleteObject(0); PrintDust(1,0); break; }
   72DD                    3345 00104$:
   72DD 2E 00         [ 7] 3346 	ld	l, #0x00
   72DF CD F0 6D      [17] 3347 	call	_DeleteObject
   72E2 21 01 00      [10] 3348 	ld	hl, #0x0001
   72E5 E5            [11] 3349 	push	hl
   72E6 CD 64 6E      [17] 3350 	call	_PrintDust
   72E9 F1            [10] 3351 	pop	af
   72EA 18 70         [12] 3352 	jr	00125$
                           3353 ;src/main.c:957: case 16:	{ DeleteObject(0); PrintObject(nObj[0], objX[0], objY[0]); break; }
   72EC                    3354 00105$:
   72EC 2E 00         [ 7] 3355 	ld	l, #0x00
   72EE CD F0 6D      [17] 3356 	call	_DeleteObject
   72F1 21 7C 5F      [10] 3357 	ld	hl, #_objY+0
   72F4 56            [ 7] 3358 	ld	d, (hl)
   72F5 3A 7A 5F      [13] 3359 	ld	a, (#_objX + 0)
   72F8 21 78 5F      [10] 3360 	ld	hl, #_nObj + 0
   72FB 46            [ 7] 3361 	ld	b, (hl)
   72FC 5F            [ 4] 3362 	ld	e, a
   72FD D5            [11] 3363 	push	de
   72FE C5            [11] 3364 	push	bc
   72FF 33            [ 6] 3365 	inc	sp
   7300 CD BA 6D      [17] 3366 	call	_PrintObject
   7303 F1            [10] 3367 	pop	af
   7304 33            [ 6] 3368 	inc	sp
   7305 18 55         [12] 3369 	jr	00125$
                           3370 ;src/main.c:962: case 88: { if (nObj[0] == 0) {DeleteObject(0); PrintCoin(0,0); break; }}
   7307                    3371 00108$:
   7307 3A 78 5F      [13] 3372 	ld	a, (#_nObj + 0)
   730A B7            [ 4] 3373 	or	a,a
   730B 20 0E         [12] 3374 	jr	NZ,00113$
   730D 6F            [ 4] 3375 	ld	l,a
   730E CD F0 6D      [17] 3376 	call	_DeleteObject
   7311 21 00 00      [10] 3377 	ld	hl, #0x0000
   7314 E5            [11] 3378 	push	hl
   7315 CD A8 6E      [17] 3379 	call	_PrintCoin
   7318 F1            [10] 3380 	pop	af
   7319 18 41         [12] 3381 	jr	00125$
                           3382 ;src/main.c:965: case 96: { if (nObj[0] == 0) {DeleteObject(0); PrintCoin(1,0); break; }}
   731B                    3383 00113$:
   731B 3A 78 5F      [13] 3384 	ld	a, (#_nObj + 0)
   731E B7            [ 4] 3385 	or	a,a
   731F 20 0E         [12] 3386 	jr	NZ,00118$
   7321 6F            [ 4] 3387 	ld	l,a
   7322 CD F0 6D      [17] 3388 	call	_DeleteObject
   7325 21 01 00      [10] 3389 	ld	hl, #0x0001
   7328 E5            [11] 3390 	push	hl
   7329 CD A8 6E      [17] 3391 	call	_PrintCoin
   732C F1            [10] 3392 	pop	af
   732D 18 2D         [12] 3393 	jr	00125$
                           3394 ;src/main.c:968: case 104: { if (nObj[0] == 0) {DeleteObject(0); PrintCoin(2,0); break; }}
   732F                    3395 00118$:
   732F 3A 78 5F      [13] 3396 	ld	a, (#_nObj + 0)
   7332 B7            [ 4] 3397 	or	a,a
   7333 20 0E         [12] 3398 	jr	NZ,00121$
   7335 6F            [ 4] 3399 	ld	l,a
   7336 CD F0 6D      [17] 3400 	call	_DeleteObject
   7339 21 02 00      [10] 3401 	ld	hl, #0x0002
   733C E5            [11] 3402 	push	hl
   733D CD A8 6E      [17] 3403 	call	_PrintCoin
   7340 F1            [10] 3404 	pop	af
   7341 18 19         [12] 3405 	jr	00125$
                           3406 ;src/main.c:971: case 328:	{ DeleteObject(0); }
   7343                    3407 00121$:
   7343 2E 00         [ 7] 3408 	ld	l, #0x00
   7345 CD F0 6D      [17] 3409 	call	_DeleteObject
                           3410 ;src/main.c:973: default:	{ PrintObject(nObj[0], objX[0], objY[0]); }			
   7348                    3411 00122$:
   7348 21 7C 5F      [10] 3412 	ld	hl, #_objY+0
   734B 56            [ 7] 3413 	ld	d, (hl)
   734C 3A 7A 5F      [13] 3414 	ld	a, (#_objX + 0)
   734F 21 78 5F      [10] 3415 	ld	hl, #_nObj + 0
   7352 46            [ 7] 3416 	ld	b, (hl)
   7353 5F            [ 4] 3417 	ld	e, a
   7354 D5            [11] 3418 	push	de
   7355 C5            [11] 3419 	push	bc
   7356 33            [ 6] 3420 	inc	sp
   7357 CD BA 6D      [17] 3421 	call	_PrintObject
   735A F1            [10] 3422 	pop	af
   735B 33            [ 6] 3423 	inc	sp
                           3424 ;src/main.c:974: }
   735C                    3425 00125$:
                           3426 ;src/main.c:977: if (nObj[1] >= 0 && !ObjectCollision(1)) {
   735C 21 79 5F      [10] 3427 	ld	hl, #(_nObj + 0x0001) + 0
   735F CB 7E         [12] 3428 	bit	7, (hl)
   7361 C0            [11] 3429 	ret	NZ
   7362 2E 01         [ 7] 3430 	ld	l, #0x01
   7364 CD 5D 71      [17] 3431 	call	_ObjectCollision
   7367 7D            [ 4] 3432 	ld	a, l
   7368 B7            [ 4] 3433 	or	a, a
   7369 C0            [11] 3434 	ret	NZ
                           3435 ;src/main.c:978: switch(ctMainLoop) {
   736A FD 21 F2 5E   [14] 3436 	ld	iy, #_ctMainLoop
   736E FD 7E 00      [19] 3437 	ld	a, 0 (iy)
   7371 D6 9A         [ 7] 3438 	sub	a, #0x9a
   7373 FD B6 01      [19] 3439 	or	a, 1 (iy)
   7376 CA 8A 74      [10] 3440 	jp	Z,00147$
   7379 FD 7E 00      [19] 3441 	ld	a, 0 (iy)
   737C D6 A0         [ 7] 3442 	sub	a, #0xa0
   737E FD B6 01      [19] 3443 	or	a, 1 (iy)
   7381 CA 2C 74      [10] 3444 	jp	Z,00130$
   7384 FD 7E 00      [19] 3445 	ld	a, 0 (iy)
   7387 D6 A8         [ 7] 3446 	sub	a, #0xa8
   7389 FD B6 01      [19] 3447 	or	a, 1 (iy)
   738C CA 1E 74      [10] 3448 	jp	Z,00128$
   738F FD 7E 00      [19] 3449 	ld	a, 0 (iy)
   7392 D6 B0         [ 7] 3450 	sub	a, #0xb0
   7394 FD B6 01      [19] 3451 	or	a, 1 (iy)
   7397 CA 1E 74      [10] 3452 	jp	Z,00128$
   739A FD 7E 00      [19] 3453 	ld	a, 0 (iy)
   739D D6 B8         [ 7] 3454 	sub	a, #0xb8
   739F FD B6 01      [19] 3455 	or	a, 1 (iy)
   73A2 CA 2C 74      [10] 3456 	jp	Z,00130$
   73A5 FD 7E 00      [19] 3457 	ld	a, 0 (iy)
   73A8 D6 C0         [ 7] 3458 	sub	a, #0xc0
   73AA FD B6 01      [19] 3459 	or	a, 1 (iy)
   73AD CA 3A 74      [10] 3460 	jp	Z,00131$
                           3461 ;src/main.c:977: if (nObj[1] >= 0 && !ObjectCollision(1)) {
   73B0 21 79 5F      [10] 3462 	ld	hl, #(_nObj + 0x0001) + 0
   73B3 4E            [ 7] 3463 	ld	c, (hl)
                           3464 ;src/main.c:978: switch(ctMainLoop) {
   73B4 FD 7E 00      [19] 3465 	ld	a, 0 (iy)
   73B7 D6 C8         [ 7] 3466 	sub	a, #0xc8
   73B9 FD B6 01      [19] 3467 	or	a, 1 (iy)
   73BC CA 54 74      [10] 3468 	jp	Z,00134$
   73BF FD 7E 00      [19] 3469 	ld	a, 0 (iy)
   73C2 D6 D0         [ 7] 3470 	sub	a, #0xd0
   73C4 FD B6 01      [19] 3471 	or	a, 1 (iy)
   73C7 CA 66 74      [10] 3472 	jp	Z,00139$
   73CA FD 7E 00      [19] 3473 	ld	a, 0 (iy)
   73CD D6 D8         [ 7] 3474 	sub	a, #0xd8
   73CF FD B6 01      [19] 3475 	or	a, 1 (iy)
   73D2 CA 78 74      [10] 3476 	jp	Z,00144$
   73D5 FD 7E 00      [19] 3477 	ld	a, 0 (iy)
   73D8 D6 E8         [ 7] 3478 	sub	a, #0xe8
   73DA FD B6 01      [19] 3479 	or	a, 1 (iy)
   73DD 28 75         [12] 3480 	jr	Z,00134$
   73DF FD 7E 00      [19] 3481 	ld	a, 0 (iy)
   73E2 D6 F0         [ 7] 3482 	sub	a, #0xf0
   73E4 FD B6 01      [19] 3483 	or	a, 1 (iy)
   73E7 CA 66 74      [10] 3484 	jp	Z,00139$
   73EA FD 7E 00      [19] 3485 	ld	a, 0 (iy)
   73ED D6 F8         [ 7] 3486 	sub	a, #0xf8
   73EF FD B6 01      [19] 3487 	or	a, 1 (iy)
   73F2 CA 78 74      [10] 3488 	jp	Z,00144$
   73F5 FD 7E 00      [19] 3489 	ld	a, 0 (iy)
   73F8 D6 08         [ 7] 3490 	sub	a, #0x08
   73FA 20 06         [12] 3491 	jr	NZ,00339$
   73FC FD 7E 01      [19] 3492 	ld	a, 1 (iy)
   73FF 3D            [ 4] 3493 	dec	a
   7400 28 52         [12] 3494 	jr	Z,00134$
   7402                    3495 00339$:
   7402 FD 7E 00      [19] 3496 	ld	a, 0 (iy)
   7405 D6 10         [ 7] 3497 	sub	a, #0x10
   7407 20 06         [12] 3498 	jr	NZ,00340$
   7409 FD 7E 01      [19] 3499 	ld	a, 1 (iy)
   740C 3D            [ 4] 3500 	dec	a
   740D 28 57         [12] 3501 	jr	Z,00139$
   740F                    3502 00340$:
   740F FD 7E 00      [19] 3503 	ld	a, 0 (iy)
   7412 D6 18         [ 7] 3504 	sub	a, #0x18
   7414 20 79         [12] 3505 	jr	NZ,00148$
   7416 FD 7E 01      [19] 3506 	ld	a, 1 (iy)
   7419 3D            [ 4] 3507 	dec	a
   741A 28 5C         [12] 3508 	jr	Z,00144$
   741C 18 71         [12] 3509 	jr	00148$
                           3510 ;src/main.c:981: case 168:	{ DeleteObject(1); PrintDust(0,1); break; }
   741E                    3511 00128$:
   741E 2E 01         [ 7] 3512 	ld	l, #0x01
   7420 CD F0 6D      [17] 3513 	call	_DeleteObject
   7423 21 00 01      [10] 3514 	ld	hl, #0x0100
   7426 E5            [11] 3515 	push	hl
   7427 CD 64 6E      [17] 3516 	call	_PrintDust
   742A F1            [10] 3517 	pop	af
   742B C9            [10] 3518 	ret
                           3519 ;src/main.c:984: case 160:	{ DeleteObject(1); PrintDust(1,1); break; }
   742C                    3520 00130$:
   742C 2E 01         [ 7] 3521 	ld	l, #0x01
   742E CD F0 6D      [17] 3522 	call	_DeleteObject
   7431 21 01 01      [10] 3523 	ld	hl, #0x0101
   7434 E5            [11] 3524 	push	hl
   7435 CD 64 6E      [17] 3525 	call	_PrintDust
   7438 F1            [10] 3526 	pop	af
   7439 C9            [10] 3527 	ret
                           3528 ;src/main.c:986: case 192:	{ DeleteObject(1); PrintObject(nObj[1], objX[1], objY[1]); break; }
   743A                    3529 00131$:
   743A 2E 01         [ 7] 3530 	ld	l, #0x01
   743C CD F0 6D      [17] 3531 	call	_DeleteObject
   743F 21 7D 5F      [10] 3532 	ld	hl, #_objY+1
   7442 56            [ 7] 3533 	ld	d, (hl)
   7443 3A 7B 5F      [13] 3534 	ld	a, (#(_objX + 0x0001) + 0)
   7446 21 79 5F      [10] 3535 	ld	hl, #(_nObj + 0x0001) + 0
   7449 46            [ 7] 3536 	ld	b, (hl)
   744A 5F            [ 4] 3537 	ld	e, a
   744B D5            [11] 3538 	push	de
   744C C5            [11] 3539 	push	bc
   744D 33            [ 6] 3540 	inc	sp
   744E CD BA 6D      [17] 3541 	call	_PrintObject
   7451 F1            [10] 3542 	pop	af
   7452 33            [ 6] 3543 	inc	sp
   7453 C9            [10] 3544 	ret
                           3545 ;src/main.c:991: case 264: { if (nObj[1] == 0) {DeleteObject(1); PrintCoin(0,1); break; }}
   7454                    3546 00134$:
   7454 79            [ 4] 3547 	ld	a, c
   7455 B7            [ 4] 3548 	or	a, a
   7456 20 0E         [12] 3549 	jr	NZ,00139$
   7458 2E 01         [ 7] 3550 	ld	l, #0x01
   745A CD F0 6D      [17] 3551 	call	_DeleteObject
   745D 21 00 01      [10] 3552 	ld	hl, #0x0100
   7460 E5            [11] 3553 	push	hl
   7461 CD A8 6E      [17] 3554 	call	_PrintCoin
   7464 F1            [10] 3555 	pop	af
   7465 C9            [10] 3556 	ret
                           3557 ;src/main.c:994: case 272: { if (nObj[1] == 0) {DeleteObject(1); PrintCoin(1,1); break; }}
   7466                    3558 00139$:
   7466 79            [ 4] 3559 	ld	a, c
   7467 B7            [ 4] 3560 	or	a, a
   7468 20 0E         [12] 3561 	jr	NZ,00144$
   746A 2E 01         [ 7] 3562 	ld	l, #0x01
   746C CD F0 6D      [17] 3563 	call	_DeleteObject
   746F 21 01 01      [10] 3564 	ld	hl, #0x0101
   7472 E5            [11] 3565 	push	hl
   7473 CD A8 6E      [17] 3566 	call	_PrintCoin
   7476 F1            [10] 3567 	pop	af
   7477 C9            [10] 3568 	ret
                           3569 ;src/main.c:997: case 280: { if (nObj[1] == 0) {DeleteObject(1); PrintCoin(2,1); break; }}
   7478                    3570 00144$:
   7478 79            [ 4] 3571 	ld	a, c
   7479 B7            [ 4] 3572 	or	a, a
   747A 20 0E         [12] 3573 	jr	NZ,00147$
   747C 2E 01         [ 7] 3574 	ld	l, #0x01
   747E CD F0 6D      [17] 3575 	call	_DeleteObject
   7481 21 02 01      [10] 3576 	ld	hl, #0x0102
   7484 E5            [11] 3577 	push	hl
   7485 CD A8 6E      [17] 3578 	call	_PrintCoin
   7488 F1            [10] 3579 	pop	af
   7489 C9            [10] 3580 	ret
                           3581 ;src/main.c:1000: case 154:	{ DeleteObject(1); }
   748A                    3582 00147$:
   748A 2E 01         [ 7] 3583 	ld	l, #0x01
   748C CD F0 6D      [17] 3584 	call	_DeleteObject
                           3585 ;src/main.c:1002: default:	{ PrintObject(nObj[1], objX[1], objY[1]); }			
   748F                    3586 00148$:
   748F 21 7D 5F      [10] 3587 	ld	hl, #_objY+1
   7492 56            [ 7] 3588 	ld	d, (hl)
   7493 3A 7B 5F      [13] 3589 	ld	a, (#(_objX + 0x0001) + 0)
   7496 21 79 5F      [10] 3590 	ld	hl, #(_nObj + 0x0001) + 0
   7499 46            [ 7] 3591 	ld	b, (hl)
   749A 5F            [ 4] 3592 	ld	e, a
   749B D5            [11] 3593 	push	de
   749C C5            [11] 3594 	push	bc
   749D 33            [ 6] 3595 	inc	sp
   749E CD BA 6D      [17] 3596 	call	_PrintObject
   74A1 F1            [10] 3597 	pop	af
   74A2 33            [ 6] 3598 	inc	sp
                           3599 ;src/main.c:1003: }
   74A3 C9            [10] 3600 	ret
                           3601 ;src/main.c:1008: void SetObject(u8 index) __z88dk_fastcall {
                           3602 ;	---------------------------------
                           3603 ; Function SetObject
                           3604 ; ---------------------------------
   74A4                    3605 _SetObject::
   74A4 DD E5         [15] 3606 	push	ix
   74A6 DD 21 00 00   [14] 3607 	ld	ix,#0
   74AA DD 39         [15] 3608 	add	ix,sp
   74AC F5            [11] 3609 	push	af
   74AD F5            [11] 3610 	push	af
   74AE 3B            [ 6] 3611 	dec	sp
                           3612 ;src/main.c:1011: if (nObj[index] >= 0) DeleteObject(index); 
   74AF DD 75 FF      [19] 3613 	ld	-1 (ix), l
   74B2 7D            [ 4] 3614 	ld	a, l
   74B3 C6 78         [ 7] 3615 	add	a, #<(_nObj)
   74B5 4F            [ 4] 3616 	ld	c, a
   74B6 3E 00         [ 7] 3617 	ld	a, #0x00
   74B8 CE 5F         [ 7] 3618 	adc	a, #>(_nObj)
   74BA 47            [ 4] 3619 	ld	b, a
   74BB 0A            [ 7] 3620 	ld	a, (bc)
   74BC CB 7F         [ 8] 3621 	bit	7,a
   74BE 20 08         [12] 3622 	jr	NZ,00102$
   74C0 C5            [11] 3623 	push	bc
   74C1 DD 6E FF      [19] 3624 	ld	l, -1 (ix)
   74C4 CD F0 6D      [17] 3625 	call	_DeleteObject
   74C7 C1            [10] 3626 	pop	bc
   74C8                    3627 00102$:
                           3628 ;src/main.c:1013: nObj[index] = cpct_getRandom_lcg_u8(0) / 11;	// obj = 0 a 22
   74C8 C5            [11] 3629 	push	bc
   74C9 2E 00         [ 7] 3630 	ld	l, #0x00
   74CB CD D4 5B      [17] 3631 	call	_cpct_getRandom_lcg_u8
   74CE 55            [ 4] 3632 	ld	d, l
   74CF 3E 0B         [ 7] 3633 	ld	a, #0x0b
   74D1 F5            [11] 3634 	push	af
   74D2 33            [ 6] 3635 	inc	sp
   74D3 D5            [11] 3636 	push	de
   74D4 33            [ 6] 3637 	inc	sp
   74D5 CD 71 51      [17] 3638 	call	__divuchar
   74D8 F1            [10] 3639 	pop	af
   74D9 7D            [ 4] 3640 	ld	a, l
   74DA C1            [10] 3641 	pop	bc
   74DB 02            [ 7] 3642 	ld	(bc), a
                           3643 ;src/main.c:1015: do {
   74DC                    3644 00107$:
                           3645 ;src/main.c:1016: objX[index] = 4 + (cpct_getRandom_lcg_u8(0)*10/36); 	// x = 4 a 74
   74DC 3E 7A         [ 7] 3646 	ld	a, #<(_objX)
   74DE DD 86 FF      [19] 3647 	add	a, -1 (ix)
   74E1 DD 77 FD      [19] 3648 	ld	-3 (ix), a
   74E4 3E 5F         [ 7] 3649 	ld	a, #>(_objX)
   74E6 CE 00         [ 7] 3650 	adc	a, #0x00
   74E8 DD 77 FE      [19] 3651 	ld	-2 (ix), a
   74EB C5            [11] 3652 	push	bc
   74EC 2E 00         [ 7] 3653 	ld	l, #0x00
   74EE CD D4 5B      [17] 3654 	call	_cpct_getRandom_lcg_u8
   74F1 C1            [10] 3655 	pop	bc
   74F2 5D            [ 4] 3656 	ld	e,l
   74F3 16 00         [ 7] 3657 	ld	d,#0x00
   74F5 6B            [ 4] 3658 	ld	l, e
   74F6 62            [ 4] 3659 	ld	h, d
   74F7 29            [11] 3660 	add	hl, hl
   74F8 29            [11] 3661 	add	hl, hl
   74F9 19            [11] 3662 	add	hl, de
   74FA 29            [11] 3663 	add	hl, hl
   74FB C5            [11] 3664 	push	bc
   74FC 11 24 00      [10] 3665 	ld	de, #0x0024
   74FF D5            [11] 3666 	push	de
   7500 E5            [11] 3667 	push	hl
   7501 CD 78 5E      [17] 3668 	call	__divsint
   7504 F1            [10] 3669 	pop	af
   7505 F1            [10] 3670 	pop	af
   7506 C1            [10] 3671 	pop	bc
   7507 7D            [ 4] 3672 	ld	a, l
   7508 C6 04         [ 7] 3673 	add	a, #0x04
   750A DD 6E FD      [19] 3674 	ld	l,-3 (ix)
   750D DD 66 FE      [19] 3675 	ld	h,-2 (ix)
   7510 77            [ 7] 3676 	ld	(hl), a
                           3677 ;src/main.c:1017: objY[index] = 40 + (cpct_getRandom_lcg_u8(0)*10/17);	// y = 40 a 190	
   7511 3E 7C         [ 7] 3678 	ld	a, #<(_objY)
   7513 DD 86 FF      [19] 3679 	add	a, -1 (ix)
   7516 DD 77 FB      [19] 3680 	ld	-5 (ix), a
   7519 3E 5F         [ 7] 3681 	ld	a, #>(_objY)
   751B CE 00         [ 7] 3682 	adc	a, #0x00
   751D DD 77 FC      [19] 3683 	ld	-4 (ix), a
   7520 C5            [11] 3684 	push	bc
   7521 2E 00         [ 7] 3685 	ld	l, #0x00
   7523 CD D4 5B      [17] 3686 	call	_cpct_getRandom_lcg_u8
   7526 C1            [10] 3687 	pop	bc
   7527 5D            [ 4] 3688 	ld	e,l
   7528 16 00         [ 7] 3689 	ld	d,#0x00
   752A 6B            [ 4] 3690 	ld	l, e
   752B 62            [ 4] 3691 	ld	h, d
   752C 29            [11] 3692 	add	hl, hl
   752D 29            [11] 3693 	add	hl, hl
   752E 19            [11] 3694 	add	hl, de
   752F 29            [11] 3695 	add	hl, hl
   7530 C5            [11] 3696 	push	bc
   7531 11 11 00      [10] 3697 	ld	de, #0x0011
   7534 D5            [11] 3698 	push	de
   7535 E5            [11] 3699 	push	hl
   7536 CD 78 5E      [17] 3700 	call	__divsint
   7539 F1            [10] 3701 	pop	af
   753A F1            [10] 3702 	pop	af
   753B C1            [10] 3703 	pop	bc
   753C 7D            [ 4] 3704 	ld	a, l
   753D C6 28         [ 7] 3705 	add	a, #0x28
   753F E1            [10] 3706 	pop	hl
   7540 E5            [11] 3707 	push	hl
   7541 77            [ 7] 3708 	ld	(hl), a
                           3709 ;src/main.c:1018: tile = *GetTileNum(objX[index]+2, objY[index]+8);	
   7542 E1            [10] 3710 	pop	hl
   7543 E5            [11] 3711 	push	hl
   7544 7E            [ 7] 3712 	ld	a, (hl)
   7545 C6 08         [ 7] 3713 	add	a, #0x08
   7547 57            [ 4] 3714 	ld	d, a
   7548 DD 6E FD      [19] 3715 	ld	l,-3 (ix)
   754B DD 66 FE      [19] 3716 	ld	h,-2 (ix)
   754E 7E            [ 7] 3717 	ld	a, (hl)
   754F C6 02         [ 7] 3718 	add	a, #0x02
   7551 C5            [11] 3719 	push	bc
   7552 5F            [ 4] 3720 	ld	e, a
   7553 D5            [11] 3721 	push	de
   7554 CD CB 61      [17] 3722 	call	_GetTileNum
   7557 F1            [10] 3723 	pop	af
   7558 C1            [10] 3724 	pop	bc
   7559 5E            [ 7] 3725 	ld	e, (hl)
                           3726 ;src/main.c:1021: while (tile > 34 || tile == TILESET_DOOR || // tile is a blocker
   755A 3E 22         [ 7] 3727 	ld	a, #0x22
   755C 93            [ 4] 3728 	sub	a, e
   755D DA DC 74      [10] 3729 	jp	C, 00107$
   7560 7B            [ 4] 3730 	ld	a, e
   7561 D6 0E         [ 7] 3731 	sub	a, #0x0e
   7563 CA DC 74      [10] 3732 	jp	Z,00107$
                           3733 ;src/main.c:1022: Abs(objX[0] - objX[1]) < 12 || // near the other object
   7566 21 7A 5F      [10] 3734 	ld	hl, #_objX + 0
   7569 5E            [ 7] 3735 	ld	e, (hl)
   756A 16 00         [ 7] 3736 	ld	d, #0x00
   756C 21 7B 5F      [10] 3737 	ld	hl, #_objX + 1
   756F 6E            [ 7] 3738 	ld	l, (hl)
   7570 26 00         [ 7] 3739 	ld	h, #0x00
   7572 7B            [ 4] 3740 	ld	a, e
   7573 95            [ 4] 3741 	sub	a, l
   7574 6F            [ 4] 3742 	ld	l, a
   7575 7A            [ 4] 3743 	ld	a, d
   7576 9C            [ 4] 3744 	sbc	a, h
   7577 67            [ 4] 3745 	ld	h, a
   7578 C5            [11] 3746 	push	bc
   7579 CD 83 5F      [17] 3747 	call	_Abs
   757C C1            [10] 3748 	pop	bc
   757D 11 0C 80      [10] 3749 	ld	de, #0x800c
   7580 29            [11] 3750 	add	hl, hl
   7581 3F            [ 4] 3751 	ccf
   7582 CB 1C         [ 8] 3752 	rr	h
   7584 CB 1D         [ 8] 3753 	rr	l
   7586 ED 52         [15] 3754 	sbc	hl, de
   7588 DA DC 74      [10] 3755 	jp	C, 00107$
                           3756 ;src/main.c:1023: SpriteCollision(objX[index], objY[index], &spr[0], 12) || // near player 1
   758B E1            [10] 3757 	pop	hl
   758C E5            [11] 3758 	push	hl
   758D 56            [ 7] 3759 	ld	d, (hl)
   758E DD 6E FD      [19] 3760 	ld	l,-3 (ix)
   7591 DD 66 FE      [19] 3761 	ld	h,-2 (ix)
   7594 5E            [ 7] 3762 	ld	e, (hl)
   7595 C5            [11] 3763 	push	bc
   7596 3E 0C         [ 7] 3764 	ld	a, #0x0c
   7598 F5            [11] 3765 	push	af
   7599 33            [ 6] 3766 	inc	sp
   759A 21 0A 5F      [10] 3767 	ld	hl, #_spr
   759D E5            [11] 3768 	push	hl
   759E D5            [11] 3769 	push	de
   759F CD 7F 7D      [17] 3770 	call	_SpriteCollision
   75A2 F1            [10] 3771 	pop	af
   75A3 F1            [10] 3772 	pop	af
   75A4 33            [ 6] 3773 	inc	sp
   75A5 C1            [10] 3774 	pop	bc
   75A6 7D            [ 4] 3775 	ld	a, l
   75A7 B7            [ 4] 3776 	or	a, a
   75A8 C2 DC 74      [10] 3777 	jp	NZ, 00107$
                           3778 ;src/main.c:1024: SpriteCollision(objX[index], objY[index], &spr[1], 12)); // near player 2
   75AB E1            [10] 3779 	pop	hl
   75AC E5            [11] 3780 	push	hl
   75AD 56            [ 7] 3781 	ld	d, (hl)
   75AE DD 6E FD      [19] 3782 	ld	l,-3 (ix)
   75B1 DD 66 FE      [19] 3783 	ld	h,-2 (ix)
   75B4 5E            [ 7] 3784 	ld	e, (hl)
   75B5 C5            [11] 3785 	push	bc
   75B6 3E 0C         [ 7] 3786 	ld	a, #0x0c
   75B8 F5            [11] 3787 	push	af
   75B9 33            [ 6] 3788 	inc	sp
   75BA 21 19 5F      [10] 3789 	ld	hl, #(_spr + 0x000f)
   75BD E5            [11] 3790 	push	hl
   75BE D5            [11] 3791 	push	de
   75BF CD 7F 7D      [17] 3792 	call	_SpriteCollision
   75C2 F1            [10] 3793 	pop	af
   75C3 F1            [10] 3794 	pop	af
   75C4 33            [ 6] 3795 	inc	sp
   75C5 C1            [10] 3796 	pop	bc
   75C6 7D            [ 4] 3797 	ld	a, l
   75C7 B7            [ 4] 3798 	or	a, a
   75C8 C2 DC 74      [10] 3799 	jp	NZ, 00107$
                           3800 ;src/main.c:1011: if (nObj[index] >= 0) DeleteObject(index); 
   75CB 0A            [ 7] 3801 	ld	a, (bc)
                           3802 ;src/main.c:1026: if (nObj[index] == 22) nObj[index] = 1; // slightly more chance of showing 5 coins
   75CC 5F            [ 4] 3803 	ld	e,a
   75CD D6 16         [ 7] 3804 	sub	a, #0x16
   75CF 20 05         [12] 3805 	jr	NZ,00116$
   75D1 3E 01         [ 7] 3806 	ld	a, #0x01
   75D3 02            [ 7] 3807 	ld	(bc), a
   75D4 18 17         [12] 3808 	jr	00117$
   75D6                    3809 00116$:
                           3810 ;src/main.c:1027: else if (nObj[index] == 21) nObj[index] = 3; // slightly more chance of powerUps showing up
   75D6 7B            [ 4] 3811 	ld	a, e
   75D7 D6 15         [ 7] 3812 	sub	a, #0x15
   75D9 20 05         [12] 3813 	jr	NZ,00113$
   75DB 3E 03         [ 7] 3814 	ld	a, #0x03
   75DD 02            [ 7] 3815 	ld	(bc), a
   75DE 18 0D         [12] 3816 	jr	00117$
   75E0                    3817 00113$:
                           3818 ;src/main.c:1028: else if (nObj[index] > 3) nObj[index] = 0; // only PowerUps and coins, others are purchased
   75E0 3E 03         [ 7] 3819 	ld	a, #0x03
   75E2 93            [ 4] 3820 	sub	a, e
   75E3 E2 E8 75      [10] 3821 	jp	PO, 00165$
   75E6 EE 80         [ 7] 3822 	xor	a, #0x80
   75E8                    3823 00165$:
   75E8 F2 ED 75      [10] 3824 	jp	P, 00117$
   75EB AF            [ 4] 3825 	xor	a, a
   75EC 02            [ 7] 3826 	ld	(bc), a
   75ED                    3827 00117$:
                           3828 ;src/main.c:1030: cpct_akp_SFXPlay(1, 12, 65, 0, 0, AY_CHANNEL_A); // new item
   75ED 3E 01         [ 7] 3829 	ld	a, #0x01
   75EF F5            [11] 3830 	push	af
   75F0 33            [ 6] 3831 	inc	sp
   75F1 21 00 00      [10] 3832 	ld	hl, #0x0000
   75F4 E5            [11] 3833 	push	hl
   75F5 2E 41         [ 7] 3834 	ld	l, #0x41
   75F7 E5            [11] 3835 	push	hl
   75F8 21 01 0C      [10] 3836 	ld	hl, #0x0c01
   75FB E5            [11] 3837 	push	hl
   75FC CD EF 59      [17] 3838 	call	_cpct_akp_SFXPlay
   75FF 21 07 00      [10] 3839 	ld	hl, #7
   7602 39            [11] 3840 	add	hl, sp
   7603 F9            [ 6] 3841 	ld	sp, hl
   7604 DD F9         [10] 3842 	ld	sp, ix
   7606 DD E1         [14] 3843 	pop	ix
   7608 C9            [10] 3844 	ret
                           3845 ;src/main.c:1036: void AddObjectToScoreboard(u8 player) __z88dk_fastcall {
                           3846 ;	---------------------------------
                           3847 ; Function AddObjectToScoreboard
                           3848 ; ---------------------------------
   7609                    3849 _AddObjectToScoreboard::
   7609 4D            [ 4] 3850 	ld	c, l
                           3851 ;src/main.c:1037: u8 x = spr[player].objNum_mov * 3 + 7;
   760A 11 0A 5F      [10] 3852 	ld	de, #_spr+0
   760D 06 00         [ 7] 3853 	ld	b,#0x00
   760F 69            [ 4] 3854 	ld	l, c
   7610 60            [ 4] 3855 	ld	h, b
   7611 29            [11] 3856 	add	hl, hl
   7612 09            [11] 3857 	add	hl, bc
   7613 29            [11] 3858 	add	hl, hl
   7614 09            [11] 3859 	add	hl, bc
   7615 29            [11] 3860 	add	hl, hl
   7616 09            [11] 3861 	add	hl, bc
   7617 19            [11] 3862 	add	hl, de
   7618 11 0C 00      [10] 3863 	ld	de, #0x000c
   761B 19            [11] 3864 	add	hl, de
   761C 5E            [ 7] 3865 	ld	e, (hl)
   761D 7B            [ 4] 3866 	ld	a, e
   761E 87            [ 4] 3867 	add	a, a
   761F 83            [ 4] 3868 	add	a, e
   7620 C6 07         [ 7] 3869 	add	a, #0x07
   7622 47            [ 4] 3870 	ld	b, a
                           3871 ;src/main.c:1038: if (player == 1) x += 39;		
   7623 0D            [ 4] 3872 	dec	c
   7624 20 04         [12] 3873 	jr	NZ,00102$
   7626 78            [ 4] 3874 	ld	a, b
   7627 C6 27         [ 7] 3875 	add	a, #0x27
   7629 47            [ 4] 3876 	ld	b, a
   762A                    3877 00102$:
                           3878 ;src/main.c:1039: PrintObject(nPObj, x, 16);
   762A 3E 10         [ 7] 3879 	ld	a, #0x10
   762C F5            [11] 3880 	push	af
   762D 33            [ 6] 3881 	inc	sp
   762E C5            [11] 3882 	push	bc
   762F 33            [ 6] 3883 	inc	sp
   7630 3A 7E 5F      [13] 3884 	ld	a, (_nPObj)
   7633 F5            [11] 3885 	push	af
   7634 33            [ 6] 3886 	inc	sp
   7635 CD BA 6D      [17] 3887 	call	_PrintObject
   7638 F1            [10] 3888 	pop	af
   7639 33            [ 6] 3889 	inc	sp
   763A C9            [10] 3890 	ret
                           3891 ;src/main.c:1044: void PrintKey() {
                           3892 ;	---------------------------------
                           3893 ; Function PrintKey
                           3894 ; ---------------------------------
   763B                    3895 _PrintKey::
                           3896 ;src/main.c:1047: while (i<=4) {
   763B 0E 00         [ 7] 3897 	ld	c, #0x00
   763D 16 3C         [ 7] 3898 	ld	d, #0x3c
   763F                    3899 00101$:
   763F 3E 04         [ 7] 3900 	ld	a, #0x04
   7641 91            [ 4] 3901 	sub	a, c
   7642 D8            [11] 3902 	ret	C
                           3903 ;src/main.c:1048: PrintObject(doorKey[i], x, 16);
   7643 21 DF 5E      [10] 3904 	ld	hl, #_doorKey
   7646 06 00         [ 7] 3905 	ld	b, #0x00
   7648 09            [11] 3906 	add	hl, bc
   7649 46            [ 7] 3907 	ld	b, (hl)
   764A C5            [11] 3908 	push	bc
   764B D5            [11] 3909 	push	de
   764C 3E 10         [ 7] 3910 	ld	a, #0x10
   764E F5            [11] 3911 	push	af
   764F 33            [ 6] 3912 	inc	sp
   7650 58            [ 4] 3913 	ld	e, b
   7651 D5            [11] 3914 	push	de
   7652 CD BA 6D      [17] 3915 	call	_PrintObject
   7655 F1            [10] 3916 	pop	af
   7656 33            [ 6] 3917 	inc	sp
   7657 D1            [10] 3918 	pop	de
   7658 C1            [10] 3919 	pop	bc
                           3920 ;src/main.c:1049: i++;
   7659 0C            [ 4] 3921 	inc	c
                           3922 ;src/main.c:1050: x+=3;
   765A 14            [ 4] 3923 	inc	d
   765B 14            [ 4] 3924 	inc	d
   765C 14            [ 4] 3925 	inc	d
   765D 18 E0         [12] 3926 	jr	00101$
                           3927 ;src/main.c:1056: u8 CompareKeys() {
                           3928 ;	---------------------------------
                           3929 ; Function CompareKeys
                           3930 ; ---------------------------------
   765F                    3931 _CompareKeys::
                           3932 ;src/main.c:1057: if (doorKey[0] == playerKey[0] && 
   765F 21 DF 5E      [10] 3933 	ld	hl, #_doorKey + 0
   7662 4E            [ 7] 3934 	ld	c, (hl)
   7663 3A E4 5E      [13] 3935 	ld	a, (#_playerKey + 0)
   7666 91            [ 4] 3936 	sub	a, c
   7667 20 2B         [12] 3937 	jr	NZ,00102$
                           3938 ;src/main.c:1058: doorKey[1] == playerKey[1] &&
   7669 21 E0 5E      [10] 3939 	ld	hl, #_doorKey + 1
   766C 4E            [ 7] 3940 	ld	c, (hl)
   766D 3A E5 5E      [13] 3941 	ld	a, (#_playerKey + 1)
   7670 91            [ 4] 3942 	sub	a, c
   7671 20 21         [12] 3943 	jr	NZ,00102$
                           3944 ;src/main.c:1059: doorKey[2] == playerKey[2] && 
   7673 21 E1 5E      [10] 3945 	ld	hl, #_doorKey + 2
   7676 4E            [ 7] 3946 	ld	c, (hl)
   7677 3A E6 5E      [13] 3947 	ld	a, (#_playerKey + 2)
   767A 91            [ 4] 3948 	sub	a, c
   767B 20 17         [12] 3949 	jr	NZ,00102$
                           3950 ;src/main.c:1060: doorKey[3] == playerKey[3] &&
   767D 21 E2 5E      [10] 3951 	ld	hl, #_doorKey + 3
   7680 4E            [ 7] 3952 	ld	c, (hl)
   7681 3A E7 5E      [13] 3953 	ld	a, (#_playerKey + 3)
   7684 91            [ 4] 3954 	sub	a, c
   7685 20 0D         [12] 3955 	jr	NZ,00102$
                           3956 ;src/main.c:1061: doorKey[4] == playerKey[4]) 
   7687 21 E3 5E      [10] 3957 	ld	hl, #_doorKey + 4
   768A 4E            [ 7] 3958 	ld	c, (hl)
   768B 3A E8 5E      [13] 3959 	ld	a, (#_playerKey + 4)
   768E 91            [ 4] 3960 	sub	a, c
   768F 20 03         [12] 3961 	jr	NZ,00102$
                           3962 ;src/main.c:1062: return 1;
   7691 2E 01         [ 7] 3963 	ld	l, #0x01
   7693 C9            [10] 3964 	ret
   7694                    3965 00102$:
                           3966 ;src/main.c:1064: return 0;
   7694 2E 00         [ 7] 3967 	ld	l, #0x00
   7696 C9            [10] 3968 	ret
                           3969 ;src/main.c:1069: void CheckActiveTile(u8 player) {	
                           3970 ;	---------------------------------
                           3971 ; Function CheckActiveTile
                           3972 ; ---------------------------------
   7697                    3973 _CheckActiveTile::
   7697 DD E5         [15] 3974 	push	ix
   7699 DD 21 00 00   [14] 3975 	ld	ix,#0
   769D DD 39         [15] 3976 	add	ix,sp
   769F 21 FA FF      [10] 3977 	ld	hl, #-6
   76A2 39            [11] 3978 	add	hl, sp
   76A3 F9            [ 6] 3979 	ld	sp, hl
                           3980 ;src/main.c:1070: u8 currentTile = *GetTileNum(spr[player].x+3, spr[player].y+8);	
   76A4 DD 4E 04      [19] 3981 	ld	c,4 (ix)
   76A7 06 00         [ 7] 3982 	ld	b,#0x00
   76A9 69            [ 4] 3983 	ld	l, c
   76AA 60            [ 4] 3984 	ld	h, b
   76AB 29            [11] 3985 	add	hl, hl
   76AC 09            [11] 3986 	add	hl, bc
   76AD 29            [11] 3987 	add	hl, hl
   76AE 09            [11] 3988 	add	hl, bc
   76AF 29            [11] 3989 	add	hl, hl
   76B0 09            [11] 3990 	add	hl, bc
   76B1 01 0A 5F      [10] 3991 	ld	bc,#_spr
   76B4 09            [11] 3992 	add	hl,bc
   76B5 4D            [ 4] 3993 	ld	c,l
   76B6 44            [ 4] 3994 	ld	b,h
   76B7 23            [ 6] 3995 	inc	hl
   76B8 23            [ 6] 3996 	inc	hl
   76B9 23            [ 6] 3997 	inc	hl
   76BA 7E            [ 7] 3998 	ld	a, (hl)
   76BB C6 08         [ 7] 3999 	add	a, #0x08
   76BD 57            [ 4] 4000 	ld	d, a
   76BE 69            [ 4] 4001 	ld	l, c
   76BF 60            [ 4] 4002 	ld	h, b
   76C0 23            [ 6] 4003 	inc	hl
   76C1 23            [ 6] 4004 	inc	hl
   76C2 7E            [ 7] 4005 	ld	a, (hl)
   76C3 C6 03         [ 7] 4006 	add	a, #0x03
   76C5 C5            [11] 4007 	push	bc
   76C6 5F            [ 4] 4008 	ld	e, a
   76C7 D5            [11] 4009 	push	de
   76C8 CD CB 61      [17] 4010 	call	_GetTileNum
   76CB F1            [10] 4011 	pop	af
   76CC C1            [10] 4012 	pop	bc
   76CD 7E            [ 7] 4013 	ld	a, (hl)
   76CE DD 77 FB      [19] 4014 	ld	-5 (ix), a
                           4015 ;src/main.c:1071: u8 i = 0;
   76D1 DD 36 FA 00   [19] 4016 	ld	-6 (ix), #0x00
                           4017 ;src/main.c:1076: while (coinScore[player] > 0 && spr[player].objNum_mov < 5) {
   76D5 21 0C 00      [10] 4018 	ld	hl, #0x000c
   76D8 09            [11] 4019 	add	hl,bc
   76D9 DD 75 FC      [19] 4020 	ld	-4 (ix), l
   76DC DD 74 FD      [19] 4021 	ld	-3 (ix), h
                           4022 ;src/main.c:1074: if (currentTile >= TILESET_STORE && currentTile <= TILESET_STORE + 5) {
   76DF DD 7E FB      [19] 4023 	ld	a, -5 (ix)
   76E2 D6 27         [ 7] 4024 	sub	a, #0x27
   76E4 DA D5 77      [10] 4025 	jp	C, 00140$
   76E7 3E 2C         [ 7] 4026 	ld	a, #0x2c
   76E9 DD 96 FB      [19] 4027 	sub	a, -5 (ix)
   76EC DA D5 77      [10] 4028 	jp	C, 00140$
                           4029 ;src/main.c:1076: while (coinScore[player] > 0 && spr[player].objNum_mov < 5) {
   76EF                    4030 00112$:
   76EF 3E DD         [ 7] 4031 	ld	a, #<(_coinScore)
   76F1 DD 86 04      [19] 4032 	add	a, 4 (ix)
   76F4 5F            [ 4] 4033 	ld	e, a
   76F5 3E 5E         [ 7] 4034 	ld	a, #>(_coinScore)
   76F7 CE 00         [ 7] 4035 	adc	a, #0x00
   76F9 57            [ 4] 4036 	ld	d, a
   76FA 1A            [ 7] 4037 	ld	a, (de)
   76FB B7            [ 4] 4038 	or	a, a
   76FC CA FE 78      [10] 4039 	jp	Z, 00143$
   76FF DD 6E FC      [19] 4040 	ld	l,-4 (ix)
   7702 DD 66 FD      [19] 4041 	ld	h,-3 (ix)
   7705 7E            [ 7] 4042 	ld	a, (hl)
   7706 D6 05         [ 7] 4043 	sub	a, #0x05
   7708 D2 FE 78      [10] 4044 	jp	NC, 00143$
                           4045 ;src/main.c:1077: cpct_akp_SFXPlay (7, 12, 65, 0, 0, AY_CHANNEL_A);
   770B D5            [11] 4046 	push	de
   770C 3E 01         [ 7] 4047 	ld	a, #0x01
   770E F5            [11] 4048 	push	af
   770F 33            [ 6] 4049 	inc	sp
   7710 21 00 00      [10] 4050 	ld	hl, #0x0000
   7713 E5            [11] 4051 	push	hl
   7714 2E 41         [ 7] 4052 	ld	l, #0x41
   7716 E5            [11] 4053 	push	hl
   7717 21 07 0C      [10] 4054 	ld	hl, #0x0c07
   771A E5            [11] 4055 	push	hl
   771B CD EF 59      [17] 4056 	call	_cpct_akp_SFXPlay
   771E 21 07 00      [10] 4057 	ld	hl, #7
   7721 39            [11] 4058 	add	hl, sp
   7722 F9            [ 6] 4059 	ld	sp, hl
   7723 D1            [10] 4060 	pop	de
                           4061 ;src/main.c:1078: if (coinScore[player] < 13) // no money left
   7724 1A            [ 7] 4062 	ld	a, (de)
   7725 FE 0D         [ 7] 4063 	cp	a, #0x0d
   7727 30 08         [12] 4064 	jr	NC,00102$
                           4065 ;src/main.c:1079: nPObj = coinScore[player] + 3; // assign the corresponding object to the available money
   7729 21 7E 5F      [10] 4066 	ld	hl, #_nPObj
   772C C6 03         [ 7] 4067 	add	a, #0x03
   772E 77            [ 7] 4068 	ld	(hl), a
   772F 18 05         [12] 4069 	jr	00103$
   7731                    4070 00102$:
                           4071 ;src/main.c:1081: nPObj = 15; // assign the most expensive object
   7731 21 7E 5F      [10] 4072 	ld	hl,#_nPObj + 0
   7734 36 0F         [10] 4073 	ld	(hl), #0x0f
   7736                    4074 00103$:
                           4075 ;src/main.c:1082: spr[player].objNum_mov++; // increases the number of objects the player carries
   7736 DD 6E FC      [19] 4076 	ld	l,-4 (ix)
   7739 DD 66 FD      [19] 4077 	ld	h,-3 (ix)
   773C 4E            [ 7] 4078 	ld	c, (hl)
   773D 0C            [ 4] 4079 	inc	c
   773E DD 6E FC      [19] 4080 	ld	l,-4 (ix)
   7741 DD 66 FD      [19] 4081 	ld	h,-3 (ix)
   7744 71            [ 7] 4082 	ld	(hl), c
                           4083 ;src/main.c:1083: potScore[player] += coinScore[player]; // increase the potion score
   7745 FD 21 DB 5E   [14] 4084 	ld	iy, #_potScore
   7749 DD 4E 04      [19] 4085 	ld	c,4 (ix)
   774C 06 00         [ 7] 4086 	ld	b,#0x00
   774E FD 09         [15] 4087 	add	iy, bc
   7750 FD 4E 00      [19] 4088 	ld	c, 0 (iy)
   7753 1A            [ 7] 4089 	ld	a, (de)
   7754 6F            [ 4] 4090 	ld	l, a
   7755 09            [11] 4091 	add	hl, bc
   7756 FD 75 00      [19] 4092 	ld	0 (iy), l
                           4093 ;src/main.c:1084: score[player] += coinScore[player] * 2; // increase the player score
   7759 DD 6E 04      [19] 4094 	ld	l, 4 (ix)
   775C 26 00         [ 7] 4095 	ld	h, #0x00
   775E 29            [11] 4096 	add	hl, hl
   775F 4D            [ 4] 4097 	ld	c, l
   7760 44            [ 4] 4098 	ld	b, h
   7761 FD 21 D5 5E   [14] 4099 	ld	iy, #_score
   7765 FD 09         [15] 4100 	add	iy, bc
   7767 FD 4E 00      [19] 4101 	ld	c, 0 (iy)
   776A FD 46 01      [19] 4102 	ld	b, 1 (iy)
   776D 1A            [ 7] 4103 	ld	a, (de)
   776E 6F            [ 4] 4104 	ld	l, a
   776F 26 00         [ 7] 4105 	ld	h, #0x00
   7771 29            [11] 4106 	add	hl, hl
   7772 09            [11] 4107 	add	hl, bc
   7773 FD 75 00      [19] 4108 	ld	0 (iy), l
   7776 FD 74 01      [19] 4109 	ld	1 (iy), h
                           4110 ;src/main.c:1085: RefreshHighScore(player);
   7779 D5            [11] 4111 	push	de
   777A DD 6E 04      [19] 4112 	ld	l, 4 (ix)
   777D CD C1 6A      [17] 4113 	call	_RefreshHighScore
   7780 D1            [10] 4114 	pop	de
                           4115 ;src/main.c:1086: coinScore[player] -= nPObj - 3; // decrease the coin score
   7781 1A            [ 7] 4116 	ld	a, (de)
   7782 47            [ 4] 4117 	ld	b, a
   7783 3A 7E 5F      [13] 4118 	ld	a,(#_nPObj + 0)
   7786 C6 FD         [ 7] 4119 	add	a, #0xfd
   7788 4F            [ 4] 4120 	ld	c, a
   7789 78            [ 4] 4121 	ld	a, b
   778A 91            [ 4] 4122 	sub	a, c
   778B 12            [ 7] 4123 	ld	(de), a
                           4124 ;src/main.c:1087: if (!TwoPlayers) {
   778C 3A D4 5E      [13] 4125 	ld	a,(#_TwoPlayers + 0)
   778F B7            [ 4] 4126 	or	a, a
   7790 20 34         [12] 4127 	jr	NZ,00110$
                           4128 ;src/main.c:1088: playerKey[spr[player].objNum_mov-1] = nPObj; // add object to key
   7792 DD 6E FC      [19] 4129 	ld	l,-4 (ix)
   7795 DD 66 FD      [19] 4130 	ld	h,-3 (ix)
   7798 4E            [ 7] 4131 	ld	c, (hl)
   7799 0D            [ 4] 4132 	dec	c
   779A 21 E4 5E      [10] 4133 	ld	hl, #_playerKey
   779D 06 00         [ 7] 4134 	ld	b, #0x00
   779F 09            [11] 4135 	add	hl, bc
   77A0 3A 7E 5F      [13] 4136 	ld	a,(#_nPObj + 0)
   77A3 77            [ 7] 4137 	ld	(hl), a
                           4138 ;src/main.c:1090: if (nMap == 0 && (nTip<3 || (nTip<4 && spr[0].objNum_mov >= 5)))
   77A4 3A D0 5E      [13] 4139 	ld	a,(#_nMap + 0)
   77A7 B7            [ 4] 4140 	or	a, a
   77A8 20 1C         [12] 4141 	jr	NZ,00110$
   77AA FD 21 F0 5E   [14] 4142 	ld	iy, #_nTip
   77AE FD 7E 00      [19] 4143 	ld	a, 0 (iy)
   77B1 D6 03         [ 7] 4144 	sub	a, #0x03
   77B3 38 0E         [12] 4145 	jr	C,00104$
   77B5 FD 7E 00      [19] 4146 	ld	a, 0 (iy)
   77B8 D6 04         [ 7] 4147 	sub	a, #0x04
   77BA 30 0A         [12] 4148 	jr	NC,00110$
   77BC 3A 16 5F      [13] 4149 	ld	a, (#(_spr + 0x000c) + 0)
   77BF D6 05         [ 7] 4150 	sub	a, #0x05
   77C1 38 03         [12] 4151 	jr	C,00110$
   77C3                    4152 00104$:
                           4153 ;src/main.c:1091: PrintTip();
   77C3 CD 2C 68      [17] 4154 	call	_PrintTip
   77C6                    4155 00110$:
                           4156 ;src/main.c:1093: DeleteObjectInStore();
   77C6 CD EE 6E      [17] 4157 	call	_DeleteObjectInStore
                           4158 ;src/main.c:1094: AddObjectToScoreboard(player); 
   77C9 DD 6E 04      [19] 4159 	ld	l, 4 (ix)
   77CC CD 09 76      [17] 4160 	call	_AddObjectToScoreboard
                           4161 ;src/main.c:1095: RefreshScoreboard();
   77CF CD 4A 6C      [17] 4162 	call	_RefreshScoreboard
   77D2 C3 EF 76      [10] 4163 	jp	00112$
   77D5                    4164 00140$:
                           4165 ;src/main.c:1100: else if (currentTile == TILESET_WELL && (potScore[player] > 0 || coinScore[player] > 0)) {	
   77D5 DD 7E FB      [19] 4166 	ld	a, -5 (ix)
   77D8 D6 26         [ 7] 4167 	sub	a, #0x26
   77DA C2 DF 78      [10] 4168 	jp	NZ,00135$
   77DD 3E DB         [ 7] 4169 	ld	a, #<(_potScore)
   77DF DD 86 04      [19] 4170 	add	a, 4 (ix)
   77E2 DD 77 FE      [19] 4171 	ld	-2 (ix), a
   77E5 3E 5E         [ 7] 4172 	ld	a, #>(_potScore)
   77E7 CE 00         [ 7] 4173 	adc	a, #0x00
   77E9 DD 77 FF      [19] 4174 	ld	-1 (ix), a
   77EC DD 6E FE      [19] 4175 	ld	l,-2 (ix)
   77EF DD 66 FF      [19] 4176 	ld	h,-1 (ix)
   77F2 7E            [ 7] 4177 	ld	a, (hl)
   77F3 B7            [ 4] 4178 	or	a, a
   77F4 20 0E         [12] 4179 	jr	NZ,00134$
   77F6 01 DD 5E      [10] 4180 	ld	bc, #_coinScore+0
   77F9 DD 6E 04      [19] 4181 	ld	l,4 (ix)
   77FC 26 00         [ 7] 4182 	ld	h,#0x00
   77FE 09            [11] 4183 	add	hl, bc
   77FF 7E            [ 7] 4184 	ld	a, (hl)
   7800 B7            [ 4] 4185 	or	a, a
   7801 CA DF 78      [10] 4186 	jp	Z, 00135$
   7804                    4187 00134$:
                           4188 ;src/main.c:1102: cpct_akp_SFXPlay (3, 12, 57, 0, 0, AY_CHANNEL_C);
   7804 3E 04         [ 7] 4189 	ld	a, #0x04
   7806 F5            [11] 4190 	push	af
   7807 33            [ 6] 4191 	inc	sp
   7808 21 00 00      [10] 4192 	ld	hl, #0x0000
   780B E5            [11] 4193 	push	hl
   780C 2E 39         [ 7] 4194 	ld	l, #0x39
   780E E5            [11] 4195 	push	hl
   780F 21 03 0C      [10] 4196 	ld	hl, #0x0c03
   7812 E5            [11] 4197 	push	hl
   7813 CD EF 59      [17] 4198 	call	_cpct_akp_SFXPlay
   7816 21 07 00      [10] 4199 	ld	hl, #7
   7819 39            [11] 4200 	add	hl, sp
   781A F9            [ 6] 4201 	ld	sp, hl
                           4202 ;src/main.c:1104: if (player == 0)
   781B DD 7E 04      [19] 4203 	ld	a, 4 (ix)
   781E B7            [ 4] 4204 	or	a, a
   781F 20 17         [12] 4205 	jr	NZ,00116$
                           4206 ;src/main.c:1106: cpct_px2byteM0(BG_COLOR, BG_COLOR), 20, 8);
   7821 21 01 01      [10] 4207 	ld	hl, #0x0101
   7824 E5            [11] 4208 	push	hl
   7825 CD B3 5C      [17] 4209 	call	_cpct_px2byteM0
   7828 26 00         [ 7] 4210 	ld	h, #0x00
                           4211 ;src/main.c:1105: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 7, 16), 
   782A 01 14 08      [10] 4212 	ld	bc, #0x0814
   782D C5            [11] 4213 	push	bc
   782E E5            [11] 4214 	push	hl
   782F 21 A7 C0      [10] 4215 	ld	hl, #0xc0a7
   7832 E5            [11] 4216 	push	hl
   7833 CD ED 5C      [17] 4217 	call	_cpct_drawSolidBox
   7836 18 15         [12] 4218 	jr	00117$
   7838                    4219 00116$:
                           4220 ;src/main.c:1109: cpct_px2byteM0(BG_COLOR, BG_COLOR), 20, 8);
   7838 21 01 01      [10] 4221 	ld	hl, #0x0101
   783B E5            [11] 4222 	push	hl
   783C CD B3 5C      [17] 4223 	call	_cpct_px2byteM0
   783F 26 00         [ 7] 4224 	ld	h, #0x00
                           4225 ;src/main.c:1108: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 46, 16), 
   7841 01 14 08      [10] 4226 	ld	bc, #0x0814
   7844 C5            [11] 4227 	push	bc
   7845 E5            [11] 4228 	push	hl
   7846 21 CE C0      [10] 4229 	ld	hl, #0xc0ce
   7849 E5            [11] 4230 	push	hl
   784A CD ED 5C      [17] 4231 	call	_cpct_drawSolidBox
   784D                    4232 00117$:
                           4233 ;src/main.c:1111: coinScore[player] = 0; 		// throwing money
   784D 01 DD 5E      [10] 4234 	ld	bc, #_coinScore+0
   7850 DD 6E 04      [19] 4235 	ld	l,4 (ix)
   7853 26 00         [ 7] 4236 	ld	h,#0x00
   7855 09            [11] 4237 	add	hl, bc
   7856 36 00         [10] 4238 	ld	(hl), #0x00
                           4239 ;src/main.c:1112: spr[player].objNum_mov = 0;	// throwing objects
   7858 DD 6E FC      [19] 4240 	ld	l,-4 (ix)
   785B DD 66 FD      [19] 4241 	ld	h,-3 (ix)
   785E 36 00         [10] 4242 	ld	(hl), #0x00
                           4243 ;src/main.c:1113: potScore[player] = 0;		// potion value to zero
   7860 DD 6E FE      [19] 4244 	ld	l,-2 (ix)
   7863 DD 66 FF      [19] 4245 	ld	h,-1 (ix)
   7866 36 00         [10] 4246 	ld	(hl), #0x00
                           4247 ;src/main.c:1115: if (!TwoPlayers) { // search for valid objects to retrieve them (only 1 player game)			
   7868 3A D4 5E      [13] 4248 	ld	a,(#_TwoPlayers + 0)
   786B B7            [ 4] 4249 	or	a, a
   786C 20 6C         [12] 4250 	jr	NZ,00128$
                           4251 ;src/main.c:1116: while (i<5) {
   786E 01 E4 5E      [10] 4252 	ld	bc, #_playerKey+0
   7871                    4253 00124$:
   7871 DD 7E FA      [19] 4254 	ld	a, -6 (ix)
   7874 D6 05         [ 7] 4255 	sub	a, #0x05
   7876 30 5F         [12] 4256 	jr	NC,00126$
                           4257 ;src/main.c:1117: if (playerKey[i] == doorKey[i] ) {
   7878 DD 6E FA      [19] 4258 	ld	l,-6 (ix)
   787B 26 00         [ 7] 4259 	ld	h,#0x00
   787D 09            [11] 4260 	add	hl, bc
   787E 5E            [ 7] 4261 	ld	e, (hl)
   787F 3E DF         [ 7] 4262 	ld	a, #<(_doorKey)
   7881 DD 86 FA      [19] 4263 	add	a, -6 (ix)
   7884 6F            [ 4] 4264 	ld	l, a
   7885 3E 5E         [ 7] 4265 	ld	a, #>(_doorKey)
   7887 CE 00         [ 7] 4266 	adc	a, #0x00
   7889 67            [ 4] 4267 	ld	h, a
   788A 7E            [ 7] 4268 	ld	a, (hl)
   788B 93            [ 4] 4269 	sub	a, e
   788C 20 34         [12] 4270 	jr	NZ,00161$
                           4271 ;src/main.c:1118: potScore[0] += playerKey[i] - 3; // increases potion value
   788E 21 DB 5E      [10] 4272 	ld	hl, #_potScore + 0
   7891 6E            [ 7] 4273 	ld	l, (hl)
   7892 7B            [ 4] 4274 	ld	a, e
   7893 C6 FD         [ 7] 4275 	add	a, #0xfd
   7895 85            [ 4] 4276 	add	a,l
   7896 32 DB 5E      [13] 4277 	ld	(#_potScore),a
                           4278 ;src/main.c:1119: spr[0].objNum_mov++; // increases the number of objects		
   7899 3A 16 5F      [13] 4279 	ld	a, (#(_spr + 0x000c) + 0)
   789C 3C            [ 4] 4280 	inc	a
   789D 32 16 5F      [13] 4281 	ld	(#(_spr + 0x000c)),a
                           4282 ;src/main.c:1121: PrintObject(playerKey[i++], spr[0].objNum_mov * 3 + 7, 16);					
   78A0 5F            [ 4] 4283 	ld	e, a
   78A1 87            [ 4] 4284 	add	a, a
   78A2 83            [ 4] 4285 	add	a, e
   78A3 C6 07         [ 7] 4286 	add	a, #0x07
   78A5 5F            [ 4] 4287 	ld	e, a
   78A6 DD 6E FA      [19] 4288 	ld	l, -6 (ix)
   78A9 DD 34 FA      [23] 4289 	inc	-6 (ix)
   78AC 26 00         [ 7] 4290 	ld	h,#0x00
   78AE 09            [11] 4291 	add	hl, bc
   78AF 56            [ 7] 4292 	ld	d, (hl)
   78B0 C5            [11] 4293 	push	bc
   78B1 3E 10         [ 7] 4294 	ld	a, #0x10
   78B3 F5            [11] 4295 	push	af
   78B4 33            [ 6] 4296 	inc	sp
   78B5 7B            [ 4] 4297 	ld	a, e
   78B6 F5            [11] 4298 	push	af
   78B7 33            [ 6] 4299 	inc	sp
   78B8 D5            [11] 4300 	push	de
   78B9 33            [ 6] 4301 	inc	sp
   78BA CD BA 6D      [17] 4302 	call	_PrintObject
   78BD F1            [10] 4303 	pop	af
   78BE 33            [ 6] 4304 	inc	sp
   78BF C1            [10] 4305 	pop	bc
   78C0 18 AF         [12] 4306 	jr	00124$
                           4307 ;src/main.c:1124: while (i<5)	
   78C2                    4308 00161$:
   78C2 DD 5E FA      [19] 4309 	ld	e, -6 (ix)
   78C5                    4310 00118$:
   78C5 7B            [ 4] 4311 	ld	a, e
   78C6 D6 05         [ 7] 4312 	sub	a, #0x05
   78C8 30 A7         [12] 4313 	jr	NC,00124$
                           4314 ;src/main.c:1125: playerKey[i++] = 0;					
   78CA 53            [ 4] 4315 	ld	d, e
   78CB 1C            [ 4] 4316 	inc	e
   78CC DD 73 FA      [19] 4317 	ld	-6 (ix), e
   78CF 6A            [ 4] 4318 	ld	l,d
   78D0 26 00         [ 7] 4319 	ld	h,#0x00
   78D2 09            [11] 4320 	add	hl, bc
   78D3 36 00         [10] 4321 	ld	(hl), #0x00
   78D5 18 EE         [12] 4322 	jr	00118$
   78D7                    4323 00126$:
                           4324 ;src/main.c:1127: DeleteObjectInStore();
   78D7 CD EE 6E      [17] 4325 	call	_DeleteObjectInStore
   78DA                    4326 00128$:
                           4327 ;src/main.c:1129: RefreshScoreboard();
   78DA CD 4A 6C      [17] 4328 	call	_RefreshScoreboard
   78DD 18 1F         [12] 4329 	jr	00143$
   78DF                    4330 00135$:
                           4331 ;src/main.c:1133: else if ((currentTile == TILESET_DOOR || currentTile == 30) && 
   78DF DD 7E FB      [19] 4332 	ld	a, -5 (ix)
   78E2 D6 0E         [ 7] 4333 	sub	a, #0x0e
   78E4 28 07         [12] 4334 	jr	Z,00132$
   78E6 DD 7E FB      [19] 4335 	ld	a, -5 (ix)
   78E9 D6 1E         [ 7] 4336 	sub	a, #0x1e
   78EB 20 11         [12] 4337 	jr	NZ,00143$
   78ED                    4338 00132$:
                           4339 ;src/main.c:1134: spr[0].objNum_mov == 5 && CompareKeys()) {
   78ED 3A 16 5F      [13] 4340 	ld	a, (#(_spr + 0x000c) + 0)
   78F0 D6 05         [ 7] 4341 	sub	a, #0x05
   78F2 20 0A         [12] 4342 	jr	NZ,00143$
   78F4 CD 5F 76      [17] 4343 	call	_CompareKeys
   78F7 7D            [ 4] 4344 	ld	a, l
   78F8 B7            [ 4] 4345 	or	a, a
   78F9 28 03         [12] 4346 	jr	Z,00143$
                           4347 ;src/main.c:1135: MakeDuel();	
   78FB CD AB 84      [17] 4348 	call	_MakeDuel
   78FE                    4349 00143$:
   78FE DD F9         [10] 4350 	ld	sp, ix
   7900 DD E1         [14] 4351 	pop	ix
   7902 C9            [10] 4352 	ret
                           4353 ;src/main.c:1153: void PrintSprite(TSpr *pSpr) __z88dk_fastcall {
                           4354 ;	---------------------------------
                           4355 ; Function PrintSprite
                           4356 ; ---------------------------------
   7903                    4357 _PrintSprite::
                           4358 ;src/main.c:1156: SPR_W, SPR_H, g_maskTable);
                           4359 ;src/main.c:1155: cpct_getScreenPtr(CPCT_VMEM_START, pSpr->x, pSpr->y), 
   7903 4D            [ 4] 4360 	ld	c,l
   7904 44            [ 4] 4361 	ld	b,h
   7905 23            [ 6] 4362 	inc	hl
   7906 23            [ 6] 4363 	inc	hl
   7907 23            [ 6] 4364 	inc	hl
   7908 56            [ 7] 4365 	ld	d, (hl)
   7909 69            [ 4] 4366 	ld	l, c
   790A 60            [ 4] 4367 	ld	h, b
   790B 23            [ 6] 4368 	inc	hl
   790C 23            [ 6] 4369 	inc	hl
   790D 7E            [ 7] 4370 	ld	a, (hl)
   790E C5            [11] 4371 	push	bc
   790F 5F            [ 4] 4372 	ld	e, a
   7910 D5            [11] 4373 	push	de
   7911 21 00 C0      [10] 4374 	ld	hl, #0xc000
   7914 E5            [11] 4375 	push	hl
   7915 CD CF 5D      [17] 4376 	call	_cpct_getScreenPtr
   7918 EB            [ 4] 4377 	ex	de,hl
   7919 FD E1         [14] 4378 	pop	iy
   791B FD 6E 08      [19] 4379 	ld	l, 8 (iy)
   791E FD 66 09      [19] 4380 	ld	h, 9 (iy)
   7921 4E            [ 7] 4381 	ld	c, (hl)
   7922 23            [ 6] 4382 	inc	hl
   7923 46            [ 7] 4383 	ld	b, (hl)
   7924 21 00 01      [10] 4384 	ld	hl, #_g_maskTable
   7927 E5            [11] 4385 	push	hl
   7928 21 05 0C      [10] 4386 	ld	hl, #0x0c05
   792B E5            [11] 4387 	push	hl
   792C D5            [11] 4388 	push	de
   792D C5            [11] 4389 	push	bc
   792E CD E5 5D      [17] 4390 	call	_cpct_drawSpriteMaskedAlignedTable
   7931 C9            [10] 4391 	ret
                           4392 ;src/main.c:1161: void DeleteSprite(TSpr *pSpr) __z88dk_fastcall {	
                           4393 ;	---------------------------------
                           4394 ; Function DeleteSprite
                           4395 ; ---------------------------------
   7932                    4396 _DeleteSprite::
   7932 DD E5         [15] 4397 	push	ix
   7934 DD 21 00 00   [14] 4398 	ld	ix,#0
   7938 DD 39         [15] 4399 	add	ix,sp
   793A F5            [11] 4400 	push	af
   793B 3B            [ 6] 4401 	dec	sp
   793C 4D            [ 4] 4402 	ld	c, l
   793D 44            [ 4] 4403 	ld	b, h
                           4404 ;src/main.c:1163: 3 + (pSpr->px & 1), 3 + (pSpr->py & 3 ? 1 : 0),	
   793E C5            [11] 4405 	push	bc
   793F FD E1         [14] 4406 	pop	iy
   7941 FD 5E 05      [19] 4407 	ld	e, 5 (iy)
   7944 7B            [ 4] 4408 	ld	a, e
   7945 E6 03         [ 7] 4409 	and	a, #0x03
   7947 28 04         [12] 4410 	jr	Z,00103$
   7949 3E 01         [ 7] 4411 	ld	a, #0x01
   794B 18 02         [12] 4412 	jr	00104$
   794D                    4413 00103$:
   794D 3E 00         [ 7] 4414 	ld	a, #0x00
   794F                    4415 00104$:
   794F C6 03         [ 7] 4416 	add	a, #0x03
   7951 DD 77 FF      [19] 4417 	ld	-1 (ix), a
   7954 C5            [11] 4418 	push	bc
   7955 FD E1         [14] 4419 	pop	iy
   7957 FD 4E 04      [19] 4420 	ld	c, 4 (iy)
   795A 79            [ 4] 4421 	ld	a, c
   795B E6 01         [ 7] 4422 	and	a, #0x01
   795D 47            [ 4] 4423 	ld	b, a
   795E 04            [ 4] 4424 	inc	b
   795F 04            [ 4] 4425 	inc	b
   7960 04            [ 4] 4426 	inc	b
                           4427 ;src/main.c:1162: cpct_etm_drawTileBox2x4(pSpr->px / 2, (pSpr->py - ORIG_MAP_Y) / 4, 
   7961 16 00         [ 7] 4428 	ld	d, #0x00
   7963 7B            [ 4] 4429 	ld	a, e
   7964 C6 E0         [ 7] 4430 	add	a, #0xe0
   7966 DD 77 FD      [19] 4431 	ld	-3 (ix), a
   7969 7A            [ 4] 4432 	ld	a, d
   796A CE FF         [ 7] 4433 	adc	a, #0xff
   796C DD 77 FE      [19] 4434 	ld	-2 (ix), a
   796F E1            [10] 4435 	pop	hl
   7970 E5            [11] 4436 	push	hl
   7971 DD CB FE 7E   [20] 4437 	bit	7, -2 (ix)
   7975 28 04         [12] 4438 	jr	Z,00105$
   7977 21 E3 FF      [10] 4439 	ld	hl, #0xffe3
   797A 19            [11] 4440 	add	hl, de
   797B                    4441 00105$:
   797B CB 2C         [ 8] 4442 	sra	h
   797D CB 1D         [ 8] 4443 	rr	l
   797F CB 2C         [ 8] 4444 	sra	h
   7981 CB 1D         [ 8] 4445 	rr	l
   7983 5D            [ 4] 4446 	ld	e, l
   7984 CB 39         [ 8] 4447 	srl	c
   7986 21 71 0F      [10] 4448 	ld	hl, #0x0f71
   7989 E5            [11] 4449 	push	hl
   798A 21 40 C1      [10] 4450 	ld	hl, #0xc140
   798D E5            [11] 4451 	push	hl
   798E 3E 28         [ 7] 4452 	ld	a, #0x28
   7990 F5            [11] 4453 	push	af
   7991 33            [ 6] 4454 	inc	sp
   7992 DD 7E FF      [19] 4455 	ld	a, -1 (ix)
   7995 F5            [11] 4456 	push	af
   7996 33            [ 6] 4457 	inc	sp
   7997 C5            [11] 4458 	push	bc
   7998 33            [ 6] 4459 	inc	sp
   7999 43            [ 4] 4460 	ld	b, e
   799A C5            [11] 4461 	push	bc
   799B CD 11 5B      [17] 4462 	call	_cpct_etm_drawTileBox2x4
   799E DD F9         [10] 4463 	ld	sp, ix
   79A0 DD E1         [14] 4464 	pop	ix
   79A2 C9            [10] 4465 	ret
                           4466 ;src/main.c:1169: void AssignFrame(TSpr *pSpr, TFrm **anim) {
                           4467 ;	---------------------------------
                           4468 ; Function AssignFrame
                           4469 ; ---------------------------------
   79A3                    4470 _AssignFrame::
   79A3 DD E5         [15] 4471 	push	ix
   79A5 DD 21 00 00   [14] 4472 	ld	ix,#0
   79A9 DD 39         [15] 4473 	add	ix,sp
                           4474 ;src/main.c:1170: u8 animPause = 2;
   79AB 16 02         [ 7] 4475 	ld	d, #0x02
                           4476 ;src/main.c:1171: if (pSpr->num > 3) animPause = 1; // slow enemies (4 and 5) have no pause in animation
   79AD DD 6E 04      [19] 4477 	ld	l,4 (ix)
   79B0 DD 66 05      [19] 4478 	ld	h,5 (ix)
   79B3 4E            [ 7] 4479 	ld	c, (hl)
   79B4 3E 03         [ 7] 4480 	ld	a, #0x03
   79B6 91            [ 4] 4481 	sub	a, c
   79B7 30 02         [12] 4482 	jr	NC,00102$
   79B9 16 01         [ 7] 4483 	ld	d, #0x01
   79BB                    4484 00102$:
                           4485 ;src/main.c:1172: pSpr->frm = anim[pSpr->nFrm / animPause];	
   79BB 7D            [ 4] 4486 	ld	a, l
   79BC C6 08         [ 7] 4487 	add	a, #0x08
   79BE 4F            [ 4] 4488 	ld	c, a
   79BF 7C            [ 4] 4489 	ld	a, h
   79C0 CE 00         [ 7] 4490 	adc	a, #0x00
   79C2 47            [ 4] 4491 	ld	b, a
   79C3 E5            [11] 4492 	push	hl
   79C4 FD E1         [14] 4493 	pop	iy
   79C6 FD 7E 0A      [19] 4494 	ld	a, 10 (iy)
   79C9 C5            [11] 4495 	push	bc
   79CA 5F            [ 4] 4496 	ld	e, a
   79CB D5            [11] 4497 	push	de
   79CC CD 71 51      [17] 4498 	call	__divuchar
   79CF F1            [10] 4499 	pop	af
   79D0 C1            [10] 4500 	pop	bc
   79D1 26 00         [ 7] 4501 	ld	h, #0x00
   79D3 29            [11] 4502 	add	hl, hl
   79D4 EB            [ 4] 4503 	ex	de,hl
   79D5 DD 6E 06      [19] 4504 	ld	l,6 (ix)
   79D8 DD 66 07      [19] 4505 	ld	h,7 (ix)
   79DB 19            [11] 4506 	add	hl, de
   79DC 5E            [ 7] 4507 	ld	e, (hl)
   79DD 23            [ 6] 4508 	inc	hl
   79DE 56            [ 7] 4509 	ld	d, (hl)
   79DF 7B            [ 4] 4510 	ld	a, e
   79E0 02            [ 7] 4511 	ld	(bc), a
   79E1 03            [ 6] 4512 	inc	bc
   79E2 7A            [ 4] 4513 	ld	a, d
   79E3 02            [ 7] 4514 	ld	(bc), a
   79E4 DD E1         [14] 4515 	pop	ix
   79E6 C9            [10] 4516 	ret
                           4517 ;src/main.c:1177: void SelectFrame(TSpr *pSpr) __z88dk_fastcall {
                           4518 ;	---------------------------------
                           4519 ; Function SelectFrame
                           4520 ; ---------------------------------
   79E7                    4521 _SelectFrame::
   79E7 DD E5         [15] 4522 	push	ix
   79E9 DD 21 00 00   [14] 4523 	ld	ix,#0
   79ED DD 39         [15] 4524 	add	ix,sp
   79EF F5            [11] 4525 	push	af
   79F0 DD 75 FE      [19] 4526 	ld	-2 (ix), l
   79F3 DD 74 FF      [19] 4527 	ld	-1 (ix), h
                           4528 ;src/main.c:1179: if(pSpr->ident == SORCERER1) {
   79F6 E1            [10] 4529 	pop	hl
   79F7 E5            [11] 4530 	push	hl
   79F8 23            [ 6] 4531 	inc	hl
   79F9 4E            [ 7] 4532 	ld	c, (hl)
                           4533 ;src/main.c:1180: switch(pSpr->status) {
   79FA DD 7E FE      [19] 4534 	ld	a, -2 (ix)
   79FD C6 06         [ 7] 4535 	add	a, #0x06
   79FF 5F            [ 4] 4536 	ld	e, a
   7A00 DD 7E FF      [19] 4537 	ld	a, -1 (ix)
   7A03 CE 00         [ 7] 4538 	adc	a, #0x00
   7A05 57            [ 4] 4539 	ld	d, a
                           4540 ;src/main.c:1179: if(pSpr->ident == SORCERER1) {
   7A06 79            [ 4] 4541 	ld	a, c
   7A07 B7            [ 4] 4542 	or	a, a
   7A08 20 75         [12] 4543 	jr	NZ,00149$
                           4544 ;src/main.c:1180: switch(pSpr->status) {
   7A0A 1A            [ 7] 4545 	ld	a, (de)
   7A0B 4F            [ 4] 4546 	ld	c, a
   7A0C 3E 04         [ 7] 4547 	ld	a, #0x04
   7A0E 91            [ 4] 4548 	sub	a, c
   7A0F DA 58 7C      [10] 4549 	jp	C, 00151$
   7A12 06 00         [ 7] 4550 	ld	b, #0x00
   7A14 21 1B 7A      [10] 4551 	ld	hl, #00245$
   7A17 09            [11] 4552 	add	hl, bc
   7A18 09            [11] 4553 	add	hl, bc
   7A19 09            [11] 4554 	add	hl, bc
   7A1A E9            [ 4] 4555 	jp	(hl)
   7A1B                    4556 00245$:
   7A1B C3 2A 7A      [10] 4557 	jp	00101$
   7A1E C3 3A 7A      [10] 4558 	jp	00102$
   7A21 C3 4A 7A      [10] 4559 	jp	00103$
   7A24 C3 5A 7A      [10] 4560 	jp	00104$
   7A27 C3 6A 7A      [10] 4561 	jp	00105$
                           4562 ;src/main.c:1181: case S_walkingUp: 		{AssignFrame(&spr[0], animUp_Sorcerer1); break;}
   7A2A                    4563 00101$:
   7A2A 21 9E 5F      [10] 4564 	ld	hl, #_animUp_Sorcerer1
   7A2D E5            [11] 4565 	push	hl
   7A2E 21 0A 5F      [10] 4566 	ld	hl, #_spr
   7A31 E5            [11] 4567 	push	hl
   7A32 CD A3 79      [17] 4568 	call	_AssignFrame
   7A35 F1            [10] 4569 	pop	af
   7A36 F1            [10] 4570 	pop	af
   7A37 C3 58 7C      [10] 4571 	jp	00151$
                           4572 ;src/main.c:1182: case S_walkingDown:		{AssignFrame(&spr[0], animDown_Sorcerer1); break;}
   7A3A                    4573 00102$:
   7A3A 21 A2 5F      [10] 4574 	ld	hl, #_animDown_Sorcerer1
   7A3D E5            [11] 4575 	push	hl
   7A3E 21 0A 5F      [10] 4576 	ld	hl, #_spr
   7A41 E5            [11] 4577 	push	hl
   7A42 CD A3 79      [17] 4578 	call	_AssignFrame
   7A45 F1            [10] 4579 	pop	af
   7A46 F1            [10] 4580 	pop	af
   7A47 C3 58 7C      [10] 4581 	jp	00151$
                           4582 ;src/main.c:1183: case S_walkingLeft:		{AssignFrame(&spr[0], animLeft_Sorcerer1); break;}
   7A4A                    4583 00103$:
   7A4A 21 A6 5F      [10] 4584 	ld	hl, #_animLeft_Sorcerer1
   7A4D E5            [11] 4585 	push	hl
   7A4E 21 0A 5F      [10] 4586 	ld	hl, #_spr
   7A51 E5            [11] 4587 	push	hl
   7A52 CD A3 79      [17] 4588 	call	_AssignFrame
   7A55 F1            [10] 4589 	pop	af
   7A56 F1            [10] 4590 	pop	af
   7A57 C3 58 7C      [10] 4591 	jp	00151$
                           4592 ;src/main.c:1184: case S_walkingRight:	{AssignFrame(&spr[0], animRight_Sorcerer1); break;}
   7A5A                    4593 00104$:
   7A5A 21 AA 5F      [10] 4594 	ld	hl, #_animRight_Sorcerer1
   7A5D E5            [11] 4595 	push	hl
   7A5E 21 0A 5F      [10] 4596 	ld	hl, #_spr
   7A61 E5            [11] 4597 	push	hl
   7A62 CD A3 79      [17] 4598 	call	_AssignFrame
   7A65 F1            [10] 4599 	pop	af
   7A66 F1            [10] 4600 	pop	af
   7A67 C3 58 7C      [10] 4601 	jp	00151$
                           4602 ;src/main.c:1185: case S_stopped:			{spr[0].frm = &frmSorcerer1[spr[0].dir*2];}		
   7A6A                    4603 00105$:
   7A6A 01 8E 5F      [10] 4604 	ld	bc, #_frmSorcerer1+0
   7A6D 3A 11 5F      [13] 4605 	ld	a, (#_spr + 7)
   7A70 87            [ 4] 4606 	add	a, a
   7A71 6F            [ 4] 4607 	ld	l, a
   7A72 26 00         [ 7] 4608 	ld	h, #0x00
   7A74 29            [11] 4609 	add	hl, hl
   7A75 09            [11] 4610 	add	hl,bc
   7A76 4D            [ 4] 4611 	ld	c, l
   7A77 44            [ 4] 4612 	ld	b, h
   7A78 ED 43 12 5F   [20] 4613 	ld	((_spr + 0x0008)), bc
                           4614 ;src/main.c:1186: }
   7A7C C3 58 7C      [10] 4615 	jp	00151$
   7A7F                    4616 00149$:
                           4617 ;src/main.c:1189: else if(pSpr->ident == SORCERER2) {
   7A7F 79            [ 4] 4618 	ld	a, c
   7A80 3D            [ 4] 4619 	dec	a
   7A81 20 75         [12] 4620 	jr	NZ,00146$
                           4621 ;src/main.c:1190: switch(pSpr->status) {
   7A83 1A            [ 7] 4622 	ld	a, (de)
   7A84 4F            [ 4] 4623 	ld	c, a
   7A85 3E 04         [ 7] 4624 	ld	a, #0x04
   7A87 91            [ 4] 4625 	sub	a, c
   7A88 DA 58 7C      [10] 4626 	jp	C, 00151$
   7A8B 06 00         [ 7] 4627 	ld	b, #0x00
   7A8D 21 94 7A      [10] 4628 	ld	hl, #00248$
   7A90 09            [11] 4629 	add	hl, bc
   7A91 09            [11] 4630 	add	hl, bc
   7A92 09            [11] 4631 	add	hl, bc
   7A93 E9            [ 4] 4632 	jp	(hl)
   7A94                    4633 00248$:
   7A94 C3 A3 7A      [10] 4634 	jp	00107$
   7A97 C3 B3 7A      [10] 4635 	jp	00108$
   7A9A C3 C3 7A      [10] 4636 	jp	00109$
   7A9D C3 D3 7A      [10] 4637 	jp	00110$
   7AA0 C3 E3 7A      [10] 4638 	jp	00111$
                           4639 ;src/main.c:1191: case S_walkingUp: 		{AssignFrame(&spr[1], animUp_Sorcerer2); break;}
   7AA3                    4640 00107$:
   7AA3 21 BE 5F      [10] 4641 	ld	hl, #_animUp_Sorcerer2
   7AA6 E5            [11] 4642 	push	hl
   7AA7 21 19 5F      [10] 4643 	ld	hl, #(_spr + 0x000f)
   7AAA E5            [11] 4644 	push	hl
   7AAB CD A3 79      [17] 4645 	call	_AssignFrame
   7AAE F1            [10] 4646 	pop	af
   7AAF F1            [10] 4647 	pop	af
   7AB0 C3 58 7C      [10] 4648 	jp	00151$
                           4649 ;src/main.c:1192: case S_walkingDown:		{AssignFrame(&spr[1], animDown_Sorcerer2); break;}
   7AB3                    4650 00108$:
   7AB3 21 C2 5F      [10] 4651 	ld	hl, #_animDown_Sorcerer2
   7AB6 E5            [11] 4652 	push	hl
   7AB7 21 19 5F      [10] 4653 	ld	hl, #(_spr + 0x000f)
   7ABA E5            [11] 4654 	push	hl
   7ABB CD A3 79      [17] 4655 	call	_AssignFrame
   7ABE F1            [10] 4656 	pop	af
   7ABF F1            [10] 4657 	pop	af
   7AC0 C3 58 7C      [10] 4658 	jp	00151$
                           4659 ;src/main.c:1193: case S_walkingLeft:		{AssignFrame(&spr[1], animLeft_Sorcerer2); break;}
   7AC3                    4660 00109$:
   7AC3 21 C6 5F      [10] 4661 	ld	hl, #_animLeft_Sorcerer2
   7AC6 E5            [11] 4662 	push	hl
   7AC7 21 19 5F      [10] 4663 	ld	hl, #(_spr + 0x000f)
   7ACA E5            [11] 4664 	push	hl
   7ACB CD A3 79      [17] 4665 	call	_AssignFrame
   7ACE F1            [10] 4666 	pop	af
   7ACF F1            [10] 4667 	pop	af
   7AD0 C3 58 7C      [10] 4668 	jp	00151$
                           4669 ;src/main.c:1194: case S_walkingRight:	{AssignFrame(&spr[1], animRight_Sorcerer2); break;}
   7AD3                    4670 00110$:
   7AD3 21 CA 5F      [10] 4671 	ld	hl, #_animRight_Sorcerer2
   7AD6 E5            [11] 4672 	push	hl
   7AD7 21 19 5F      [10] 4673 	ld	hl, #(_spr + 0x000f)
   7ADA E5            [11] 4674 	push	hl
   7ADB CD A3 79      [17] 4675 	call	_AssignFrame
   7ADE F1            [10] 4676 	pop	af
   7ADF F1            [10] 4677 	pop	af
   7AE0 C3 58 7C      [10] 4678 	jp	00151$
                           4679 ;src/main.c:1195: case S_stopped:			{spr[1].frm = &frmSorcerer2[spr[1].dir*2];}	
   7AE3                    4680 00111$:
   7AE3 01 AE 5F      [10] 4681 	ld	bc, #_frmSorcerer2+0
   7AE6 3A 20 5F      [13] 4682 	ld	a, (#_spr + 22)
   7AE9 87            [ 4] 4683 	add	a, a
   7AEA 6F            [ 4] 4684 	ld	l, a
   7AEB 26 00         [ 7] 4685 	ld	h, #0x00
   7AED 29            [11] 4686 	add	hl, hl
   7AEE 09            [11] 4687 	add	hl,bc
   7AEF 4D            [ 4] 4688 	ld	c, l
   7AF0 44            [ 4] 4689 	ld	b, h
   7AF1 ED 43 21 5F   [20] 4690 	ld	((_spr + 0x0017)), bc
                           4691 ;src/main.c:1196: }
   7AF5 C3 58 7C      [10] 4692 	jp	00151$
   7AF8                    4693 00146$:
                           4694 ;src/main.c:1200: switch(pSpr->dir) {
   7AF8 DD 7E FE      [19] 4695 	ld	a, -2 (ix)
   7AFB C6 07         [ 7] 4696 	add	a, #0x07
   7AFD 5F            [ 4] 4697 	ld	e, a
   7AFE DD 7E FF      [19] 4698 	ld	a, -1 (ix)
   7B01 CE 00         [ 7] 4699 	adc	a, #0x00
   7B03 57            [ 4] 4700 	ld	d, a
                           4701 ;src/main.c:1199: else if(pSpr->ident == SENTINEL) {
   7B04 79            [ 4] 4702 	ld	a, c
   7B05 D6 02         [ 7] 4703 	sub	a, #0x02
   7B07 20 57         [12] 4704 	jr	NZ,00143$
                           4705 ;src/main.c:1200: switch(pSpr->dir) {
   7B09 1A            [ 7] 4706 	ld	a, (de)
   7B0A B7            [ 4] 4707 	or	a, a
   7B0B 28 0F         [12] 4708 	jr	Z,00113$
   7B0D FE 01         [ 7] 4709 	cp	a, #0x01
   7B0F 28 1C         [12] 4710 	jr	Z,00114$
   7B11 FE 02         [ 7] 4711 	cp	a, #0x02
   7B13 28 29         [12] 4712 	jr	Z,00115$
   7B15 D6 03         [ 7] 4713 	sub	a, #0x03
   7B17 28 36         [12] 4714 	jr	Z,00116$
   7B19 C3 58 7C      [10] 4715 	jp	00151$
                           4716 ;src/main.c:1201: case D_up:				{AssignFrame(pSpr, animUp_Sentinel); break;}
   7B1C                    4717 00113$:
   7B1C 21 DE 5F      [10] 4718 	ld	hl, #_animUp_Sentinel
   7B1F 4D            [ 4] 4719 	ld	c, l
   7B20 44            [ 4] 4720 	ld	b, h
   7B21 E1            [10] 4721 	pop	hl
   7B22 E5            [11] 4722 	push	hl
   7B23 C5            [11] 4723 	push	bc
   7B24 E5            [11] 4724 	push	hl
   7B25 CD A3 79      [17] 4725 	call	_AssignFrame
   7B28 F1            [10] 4726 	pop	af
   7B29 F1            [10] 4727 	pop	af
   7B2A C3 58 7C      [10] 4728 	jp	00151$
                           4729 ;src/main.c:1202: case D_down:			{AssignFrame(pSpr, animDown_Sentinel); break;}
   7B2D                    4730 00114$:
   7B2D 21 E2 5F      [10] 4731 	ld	hl, #_animDown_Sentinel
   7B30 4D            [ 4] 4732 	ld	c, l
   7B31 44            [ 4] 4733 	ld	b, h
   7B32 E1            [10] 4734 	pop	hl
   7B33 E5            [11] 4735 	push	hl
   7B34 C5            [11] 4736 	push	bc
   7B35 E5            [11] 4737 	push	hl
   7B36 CD A3 79      [17] 4738 	call	_AssignFrame
   7B39 F1            [10] 4739 	pop	af
   7B3A F1            [10] 4740 	pop	af
   7B3B C3 58 7C      [10] 4741 	jp	00151$
                           4742 ;src/main.c:1203: case D_left:			{AssignFrame(pSpr, animLeft_Sentinel); break;}
   7B3E                    4743 00115$:
   7B3E 21 E6 5F      [10] 4744 	ld	hl, #_animLeft_Sentinel
   7B41 4D            [ 4] 4745 	ld	c, l
   7B42 44            [ 4] 4746 	ld	b, h
   7B43 E1            [10] 4747 	pop	hl
   7B44 E5            [11] 4748 	push	hl
   7B45 C5            [11] 4749 	push	bc
   7B46 E5            [11] 4750 	push	hl
   7B47 CD A3 79      [17] 4751 	call	_AssignFrame
   7B4A F1            [10] 4752 	pop	af
   7B4B F1            [10] 4753 	pop	af
   7B4C C3 58 7C      [10] 4754 	jp	00151$
                           4755 ;src/main.c:1204: case D_right:			{AssignFrame(pSpr, animRight_Sentinel);}
   7B4F                    4756 00116$:
   7B4F 21 EA 5F      [10] 4757 	ld	hl, #_animRight_Sentinel
   7B52 4D            [ 4] 4758 	ld	c, l
   7B53 44            [ 4] 4759 	ld	b, h
   7B54 E1            [10] 4760 	pop	hl
   7B55 E5            [11] 4761 	push	hl
   7B56 C5            [11] 4762 	push	bc
   7B57 E5            [11] 4763 	push	hl
   7B58 CD A3 79      [17] 4764 	call	_AssignFrame
   7B5B F1            [10] 4765 	pop	af
   7B5C F1            [10] 4766 	pop	af
                           4767 ;src/main.c:1205: }
   7B5D C3 58 7C      [10] 4768 	jp	00151$
   7B60                    4769 00143$:
                           4770 ;src/main.c:1208: else if(pSpr->ident == KNIGHT) {
   7B60 79            [ 4] 4771 	ld	a, c
   7B61 D6 03         [ 7] 4772 	sub	a, #0x03
   7B63 20 57         [12] 4773 	jr	NZ,00140$
                           4774 ;src/main.c:1209: switch(pSpr->dir) {
   7B65 1A            [ 7] 4775 	ld	a, (de)
   7B66 B7            [ 4] 4776 	or	a, a
   7B67 28 0F         [12] 4777 	jr	Z,00118$
   7B69 FE 01         [ 7] 4778 	cp	a, #0x01
   7B6B 28 1C         [12] 4779 	jr	Z,00119$
   7B6D FE 02         [ 7] 4780 	cp	a, #0x02
   7B6F 28 29         [12] 4781 	jr	Z,00120$
   7B71 D6 03         [ 7] 4782 	sub	a, #0x03
   7B73 28 36         [12] 4783 	jr	Z,00121$
   7B75 C3 58 7C      [10] 4784 	jp	00151$
                           4785 ;src/main.c:1210: case D_up:				{AssignFrame(pSpr, animUp_Knight); break;}
   7B78                    4786 00118$:
   7B78 21 FE 5F      [10] 4787 	ld	hl, #_animUp_Knight
   7B7B 4D            [ 4] 4788 	ld	c, l
   7B7C 44            [ 4] 4789 	ld	b, h
   7B7D E1            [10] 4790 	pop	hl
   7B7E E5            [11] 4791 	push	hl
   7B7F C5            [11] 4792 	push	bc
   7B80 E5            [11] 4793 	push	hl
   7B81 CD A3 79      [17] 4794 	call	_AssignFrame
   7B84 F1            [10] 4795 	pop	af
   7B85 F1            [10] 4796 	pop	af
   7B86 C3 58 7C      [10] 4797 	jp	00151$
                           4798 ;src/main.c:1211: case D_down:			{AssignFrame(pSpr, animDown_Knight); break;}
   7B89                    4799 00119$:
   7B89 21 02 60      [10] 4800 	ld	hl, #_animDown_Knight
   7B8C 4D            [ 4] 4801 	ld	c, l
   7B8D 44            [ 4] 4802 	ld	b, h
   7B8E E1            [10] 4803 	pop	hl
   7B8F E5            [11] 4804 	push	hl
   7B90 C5            [11] 4805 	push	bc
   7B91 E5            [11] 4806 	push	hl
   7B92 CD A3 79      [17] 4807 	call	_AssignFrame
   7B95 F1            [10] 4808 	pop	af
   7B96 F1            [10] 4809 	pop	af
   7B97 C3 58 7C      [10] 4810 	jp	00151$
                           4811 ;src/main.c:1212: case D_left:			{AssignFrame(pSpr, animLeft_Knight); break;}
   7B9A                    4812 00120$:
   7B9A 21 06 60      [10] 4813 	ld	hl, #_animLeft_Knight
   7B9D 4D            [ 4] 4814 	ld	c, l
   7B9E 44            [ 4] 4815 	ld	b, h
   7B9F E1            [10] 4816 	pop	hl
   7BA0 E5            [11] 4817 	push	hl
   7BA1 C5            [11] 4818 	push	bc
   7BA2 E5            [11] 4819 	push	hl
   7BA3 CD A3 79      [17] 4820 	call	_AssignFrame
   7BA6 F1            [10] 4821 	pop	af
   7BA7 F1            [10] 4822 	pop	af
   7BA8 C3 58 7C      [10] 4823 	jp	00151$
                           4824 ;src/main.c:1213: case D_right:			{AssignFrame(pSpr, animRight_Knight);}
   7BAB                    4825 00121$:
   7BAB 21 0A 60      [10] 4826 	ld	hl, #_animRight_Knight
   7BAE 4D            [ 4] 4827 	ld	c, l
   7BAF 44            [ 4] 4828 	ld	b, h
   7BB0 E1            [10] 4829 	pop	hl
   7BB1 E5            [11] 4830 	push	hl
   7BB2 C5            [11] 4831 	push	bc
   7BB3 E5            [11] 4832 	push	hl
   7BB4 CD A3 79      [17] 4833 	call	_AssignFrame
   7BB7 F1            [10] 4834 	pop	af
   7BB8 F1            [10] 4835 	pop	af
                           4836 ;src/main.c:1214: }
   7BB9 C3 58 7C      [10] 4837 	jp	00151$
   7BBC                    4838 00140$:
                           4839 ;src/main.c:1217: else if(pSpr->ident == GHOST) {
   7BBC 79            [ 4] 4840 	ld	a, c
   7BBD D6 04         [ 7] 4841 	sub	a, #0x04
   7BBF 20 54         [12] 4842 	jr	NZ,00137$
                           4843 ;src/main.c:1218: switch(pSpr->dir) {
   7BC1 1A            [ 7] 4844 	ld	a, (de)
   7BC2 B7            [ 4] 4845 	or	a, a
   7BC3 28 0F         [12] 4846 	jr	Z,00123$
   7BC5 FE 01         [ 7] 4847 	cp	a, #0x01
   7BC7 28 1C         [12] 4848 	jr	Z,00124$
   7BC9 FE 02         [ 7] 4849 	cp	a, #0x02
   7BCB 28 28         [12] 4850 	jr	Z,00125$
   7BCD D6 03         [ 7] 4851 	sub	a, #0x03
   7BCF 28 34         [12] 4852 	jr	Z,00126$
   7BD1 C3 58 7C      [10] 4853 	jp	00151$
                           4854 ;src/main.c:1219: case D_up:				{AssignFrame(pSpr, animUp_Ghost); break;}
   7BD4                    4855 00123$:
   7BD4 21 1E 60      [10] 4856 	ld	hl, #_animUp_Ghost
   7BD7 4D            [ 4] 4857 	ld	c, l
   7BD8 44            [ 4] 4858 	ld	b, h
   7BD9 E1            [10] 4859 	pop	hl
   7BDA E5            [11] 4860 	push	hl
   7BDB C5            [11] 4861 	push	bc
   7BDC E5            [11] 4862 	push	hl
   7BDD CD A3 79      [17] 4863 	call	_AssignFrame
   7BE0 F1            [10] 4864 	pop	af
   7BE1 F1            [10] 4865 	pop	af
   7BE2 C3 58 7C      [10] 4866 	jp	00151$
                           4867 ;src/main.c:1220: case D_down:			{AssignFrame(pSpr, animDown_Ghost); break;}
   7BE5                    4868 00124$:
   7BE5 21 22 60      [10] 4869 	ld	hl, #_animDown_Ghost
   7BE8 4D            [ 4] 4870 	ld	c, l
   7BE9 44            [ 4] 4871 	ld	b, h
   7BEA E1            [10] 4872 	pop	hl
   7BEB E5            [11] 4873 	push	hl
   7BEC C5            [11] 4874 	push	bc
   7BED E5            [11] 4875 	push	hl
   7BEE CD A3 79      [17] 4876 	call	_AssignFrame
   7BF1 F1            [10] 4877 	pop	af
   7BF2 F1            [10] 4878 	pop	af
   7BF3 18 63         [12] 4879 	jr	00151$
                           4880 ;src/main.c:1221: case D_left:			{AssignFrame(pSpr, animLeft_Ghost); break;}
   7BF5                    4881 00125$:
   7BF5 21 26 60      [10] 4882 	ld	hl, #_animLeft_Ghost
   7BF8 4D            [ 4] 4883 	ld	c, l
   7BF9 44            [ 4] 4884 	ld	b, h
   7BFA E1            [10] 4885 	pop	hl
   7BFB E5            [11] 4886 	push	hl
   7BFC C5            [11] 4887 	push	bc
   7BFD E5            [11] 4888 	push	hl
   7BFE CD A3 79      [17] 4889 	call	_AssignFrame
   7C01 F1            [10] 4890 	pop	af
   7C02 F1            [10] 4891 	pop	af
   7C03 18 53         [12] 4892 	jr	00151$
                           4893 ;src/main.c:1222: case D_right:			{AssignFrame(pSpr, animRight_Ghost);}
   7C05                    4894 00126$:
   7C05 21 2A 60      [10] 4895 	ld	hl, #_animRight_Ghost
   7C08 4D            [ 4] 4896 	ld	c, l
   7C09 44            [ 4] 4897 	ld	b, h
   7C0A E1            [10] 4898 	pop	hl
   7C0B E5            [11] 4899 	push	hl
   7C0C C5            [11] 4900 	push	bc
   7C0D E5            [11] 4901 	push	hl
   7C0E CD A3 79      [17] 4902 	call	_AssignFrame
   7C11 F1            [10] 4903 	pop	af
   7C12 F1            [10] 4904 	pop	af
                           4905 ;src/main.c:1223: }
   7C13 18 43         [12] 4906 	jr	00151$
   7C15                    4907 00137$:
                           4908 ;src/main.c:1226: else if(pSpr->ident == WITCH) {
   7C15 79            [ 4] 4909 	ld	a, c
   7C16 D6 06         [ 7] 4910 	sub	a, #0x06
   7C18 20 2B         [12] 4911 	jr	NZ,00134$
                           4912 ;src/main.c:1227: switch(pSpr->dir) {
   7C1A 1A            [ 7] 4913 	ld	a, (de)
   7C1B FE 02         [ 7] 4914 	cp	a, #0x02
   7C1D 28 06         [12] 4915 	jr	Z,00128$
   7C1F D6 03         [ 7] 4916 	sub	a, #0x03
   7C21 28 12         [12] 4917 	jr	Z,00129$
   7C23 18 33         [12] 4918 	jr	00151$
                           4919 ;src/main.c:1228: case D_left:			{AssignFrame(pSpr, animLeft_Witch); break;}
   7C25                    4920 00128$:
   7C25 21 3E 60      [10] 4921 	ld	hl, #_animLeft_Witch
   7C28 4D            [ 4] 4922 	ld	c, l
   7C29 44            [ 4] 4923 	ld	b, h
   7C2A E1            [10] 4924 	pop	hl
   7C2B E5            [11] 4925 	push	hl
   7C2C C5            [11] 4926 	push	bc
   7C2D E5            [11] 4927 	push	hl
   7C2E CD A3 79      [17] 4928 	call	_AssignFrame
   7C31 F1            [10] 4929 	pop	af
   7C32 F1            [10] 4930 	pop	af
   7C33 18 23         [12] 4931 	jr	00151$
                           4932 ;src/main.c:1229: case D_right:			{AssignFrame(pSpr, animRight_Witch);}
   7C35                    4933 00129$:
   7C35 21 42 60      [10] 4934 	ld	hl, #_animRight_Witch
   7C38 4D            [ 4] 4935 	ld	c, l
   7C39 44            [ 4] 4936 	ld	b, h
   7C3A E1            [10] 4937 	pop	hl
   7C3B E5            [11] 4938 	push	hl
   7C3C C5            [11] 4939 	push	bc
   7C3D E5            [11] 4940 	push	hl
   7C3E CD A3 79      [17] 4941 	call	_AssignFrame
   7C41 F1            [10] 4942 	pop	af
   7C42 F1            [10] 4943 	pop	af
                           4944 ;src/main.c:1230: }
   7C43 18 13         [12] 4945 	jr	00151$
   7C45                    4946 00134$:
                           4947 ;src/main.c:1233: else if(pSpr->ident == BAT)	AssignFrame(pSpr, anim_Bat);
   7C45 79            [ 4] 4948 	ld	a, c
   7C46 D6 05         [ 7] 4949 	sub	a, #0x05
   7C48 20 0E         [12] 4950 	jr	NZ,00151$
   7C4A 21 32 60      [10] 4951 	ld	hl, #_anim_Bat
   7C4D 4D            [ 4] 4952 	ld	c, l
   7C4E 44            [ 4] 4953 	ld	b, h
   7C4F E1            [10] 4954 	pop	hl
   7C50 E5            [11] 4955 	push	hl
   7C51 C5            [11] 4956 	push	bc
   7C52 E5            [11] 4957 	push	hl
   7C53 CD A3 79      [17] 4958 	call	_AssignFrame
   7C56 F1            [10] 4959 	pop	af
   7C57 F1            [10] 4960 	pop	af
   7C58                    4961 00151$:
   7C58 DD F9         [10] 4962 	ld	sp, ix
   7C5A DD E1         [14] 4963 	pop	ix
   7C5C C9            [10] 4964 	ret
                           4965 ;src/main.c:1238: void PrintExplosion(TSpr *pSpr, u8 nFrame)
                           4966 ;	---------------------------------
                           4967 ; Function PrintExplosion
                           4968 ; ---------------------------------
   7C5D                    4969 _PrintExplosion::
   7C5D DD E5         [15] 4970 	push	ix
   7C5F DD 21 00 00   [14] 4971 	ld	ix,#0
   7C63 DD 39         [15] 4972 	add	ix,sp
                           4973 ;src/main.c:1242: SPR_W, SPR_H, g_maskTable);
                           4974 ;src/main.c:1241: cpct_getScreenPtr(CPCT_VMEM_START, pSpr->x, pSpr->y), 
   7C65 DD 4E 04      [19] 4975 	ld	c,4 (ix)
   7C68 DD 46 05      [19] 4976 	ld	b,5 (ix)
   7C6B 69            [ 4] 4977 	ld	l, c
   7C6C 60            [ 4] 4978 	ld	h, b
   7C6D 23            [ 6] 4979 	inc	hl
   7C6E 23            [ 6] 4980 	inc	hl
   7C6F 23            [ 6] 4981 	inc	hl
   7C70 56            [ 7] 4982 	ld	d, (hl)
   7C71 69            [ 4] 4983 	ld	l, c
   7C72 60            [ 4] 4984 	ld	h, b
   7C73 23            [ 6] 4985 	inc	hl
   7C74 23            [ 6] 4986 	inc	hl
   7C75 5E            [ 7] 4987 	ld	e, (hl)
   7C76 D5            [11] 4988 	push	de
   7C77 21 00 C0      [10] 4989 	ld	hl, #0xc000
   7C7A E5            [11] 4990 	push	hl
   7C7B CD CF 5D      [17] 4991 	call	_cpct_getScreenPtr
   7C7E 4D            [ 4] 4992 	ld	c, l
   7C7F 44            [ 4] 4993 	ld	b, h
                           4994 ;src/main.c:1240: cpct_drawSpriteMaskedAlignedTable(g_explosion[nFrame], 
   7C80 DD 5E 06      [19] 4995 	ld	e,6 (ix)
   7C83 16 00         [ 7] 4996 	ld	d,#0x00
   7C85 6B            [ 4] 4997 	ld	l, e
   7C86 62            [ 4] 4998 	ld	h, d
   7C87 29            [11] 4999 	add	hl, hl
   7C88 19            [11] 5000 	add	hl, de
   7C89 29            [11] 5001 	add	hl, hl
   7C8A 19            [11] 5002 	add	hl, de
   7C8B 29            [11] 5003 	add	hl, hl
   7C8C 19            [11] 5004 	add	hl, de
   7C8D 29            [11] 5005 	add	hl, hl
   7C8E 29            [11] 5006 	add	hl, hl
   7C8F 11 D1 4A      [10] 5007 	ld	de, #_g_explosion
   7C92 19            [11] 5008 	add	hl, de
   7C93 11 00 01      [10] 5009 	ld	de, #_g_maskTable
   7C96 D5            [11] 5010 	push	de
   7C97 11 05 0C      [10] 5011 	ld	de, #0x0c05
   7C9A D5            [11] 5012 	push	de
   7C9B C5            [11] 5013 	push	bc
   7C9C E5            [11] 5014 	push	hl
   7C9D CD E5 5D      [17] 5015 	call	_cpct_drawSpriteMaskedAlignedTable
   7CA0 DD E1         [14] 5016 	pop	ix
   7CA2 C9            [10] 5017 	ret
                           5018 ;src/main.c:1247: void ExplodeSprite(u8 player, u8 deleteSpr)
                           5019 ;	---------------------------------
                           5020 ; Function ExplodeSprite
                           5021 ; ---------------------------------
   7CA3                    5022 _ExplodeSprite::
   7CA3 DD E5         [15] 5023 	push	ix
   7CA5 DD 21 00 00   [14] 5024 	ld	ix,#0
   7CA9 DD 39         [15] 5025 	add	ix,sp
   7CAB 21 F9 FF      [10] 5026 	ld	hl, #-7
   7CAE 39            [11] 5027 	add	hl, sp
   7CAF F9            [ 6] 5028 	ld	sp, hl
                           5029 ;src/main.c:1251: cpct_akp_SFXPlay (4, 12, 48, 0, 0, AY_CHANNEL_B); // explosion
   7CB0 3E 02         [ 7] 5030 	ld	a, #0x02
   7CB2 F5            [11] 5031 	push	af
   7CB3 33            [ 6] 5032 	inc	sp
   7CB4 21 00 00      [10] 5033 	ld	hl, #0x0000
   7CB7 E5            [11] 5034 	push	hl
   7CB8 2E 30         [ 7] 5035 	ld	l, #0x30
   7CBA E5            [11] 5036 	push	hl
   7CBB 21 04 0C      [10] 5037 	ld	hl, #0x0c04
   7CBE E5            [11] 5038 	push	hl
   7CBF CD EF 59      [17] 5039 	call	_cpct_akp_SFXPlay
   7CC2 21 07 00      [10] 5040 	ld	hl, #7
   7CC5 39            [11] 5041 	add	hl, sp
   7CC6 F9            [ 6] 5042 	ld	sp, hl
                           5043 ;src/main.c:1252: while (ct++ < 2) {	
   7CC7 11 0A 5F      [10] 5044 	ld	de, #_spr+0
   7CCA DD 4E 04      [19] 5045 	ld	c,4 (ix)
   7CCD 06 00         [ 7] 5046 	ld	b,#0x00
   7CCF 69            [ 4] 5047 	ld	l, c
   7CD0 60            [ 4] 5048 	ld	h, b
   7CD1 29            [11] 5049 	add	hl, hl
   7CD2 09            [11] 5050 	add	hl, bc
   7CD3 29            [11] 5051 	add	hl, hl
   7CD4 09            [11] 5052 	add	hl, bc
   7CD5 29            [11] 5053 	add	hl, hl
   7CD6 09            [11] 5054 	add	hl, bc
   7CD7 19            [11] 5055 	add	hl,de
   7CD8 4D            [ 4] 5056 	ld	c, l
   7CD9 44            [ 4] 5057 	ld	b, h
   7CDA DD 71 FE      [19] 5058 	ld	-2 (ix), c
   7CDD DD 70 FF      [19] 5059 	ld	-1 (ix), b
   7CE0 DD 71 FC      [19] 5060 	ld	-4 (ix), c
   7CE3 DD 70 FD      [19] 5061 	ld	-3 (ix), b
   7CE6 D5            [11] 5062 	push	de
   7CE7 DD 5E 05      [19] 5063 	ld	e,5 (ix)
   7CEA 16 00         [ 7] 5064 	ld	d,#0x00
   7CEC 6B            [ 4] 5065 	ld	l, e
   7CED 62            [ 4] 5066 	ld	h, d
   7CEE 29            [11] 5067 	add	hl, hl
   7CEF 19            [11] 5068 	add	hl, de
   7CF0 29            [11] 5069 	add	hl, hl
   7CF1 19            [11] 5070 	add	hl, de
   7CF2 29            [11] 5071 	add	hl, hl
   7CF3 19            [11] 5072 	add	hl, de
   7CF4 D1            [10] 5073 	pop	de
   7CF5 19            [11] 5074 	add	hl,de
   7CF6 DD 75 FA      [19] 5075 	ld	-6 (ix), l
   7CF9 DD 74 FB      [19] 5076 	ld	-5 (ix), h
   7CFC DD 36 F9 00   [19] 5077 	ld	-7 (ix), #0x00
   7D00                    5078 00103$:
   7D00 DD 7E F9      [19] 5079 	ld	a, -7 (ix)
   7D03 DD 34 F9      [23] 5080 	inc	-7 (ix)
   7D06 D6 02         [ 7] 5081 	sub	a, #0x02
   7D08 30 49         [12] 5082 	jr	NC,00105$
                           5083 ;src/main.c:1253: PrintExplosion(&spr[player], 0); Pause(40);
   7D0A 59            [ 4] 5084 	ld	e, c
   7D0B 50            [ 4] 5085 	ld	d, b
   7D0C C5            [11] 5086 	push	bc
   7D0D AF            [ 4] 5087 	xor	a, a
   7D0E F5            [11] 5088 	push	af
   7D0F 33            [ 6] 5089 	inc	sp
   7D10 D5            [11] 5090 	push	de
   7D11 CD 5D 7C      [17] 5091 	call	_PrintExplosion
   7D14 F1            [10] 5092 	pop	af
   7D15 33            [ 6] 5093 	inc	sp
   7D16 21 28 00      [10] 5094 	ld	hl, #0x0028
   7D19 CD 81 61      [17] 5095 	call	_Pause
   7D1C C1            [10] 5096 	pop	bc
                           5097 ;src/main.c:1254: PrintExplosion(&spr[player], 1); Pause(40);
   7D1D DD 5E FE      [19] 5098 	ld	e,-2 (ix)
   7D20 DD 56 FF      [19] 5099 	ld	d,-1 (ix)
   7D23 C5            [11] 5100 	push	bc
   7D24 3E 01         [ 7] 5101 	ld	a, #0x01
   7D26 F5            [11] 5102 	push	af
   7D27 33            [ 6] 5103 	inc	sp
   7D28 D5            [11] 5104 	push	de
   7D29 CD 5D 7C      [17] 5105 	call	_PrintExplosion
   7D2C F1            [10] 5106 	pop	af
   7D2D 33            [ 6] 5107 	inc	sp
   7D2E 21 28 00      [10] 5108 	ld	hl, #0x0028
   7D31 CD 81 61      [17] 5109 	call	_Pause
   7D34 C1            [10] 5110 	pop	bc
                           5111 ;src/main.c:1255: if (deleteSpr > FALSE) {
   7D35 DD 7E 05      [19] 5112 	ld	a, 5 (ix)
   7D38 B7            [ 4] 5113 	or	a, a
   7D39 28 C5         [12] 5114 	jr	Z,00103$
                           5115 ;src/main.c:1256: DeleteSprite(&spr[player]); // delete player
   7D3B DD 6E FC      [19] 5116 	ld	l,-4 (ix)
   7D3E DD 66 FD      [19] 5117 	ld	h,-3 (ix)
   7D41 C5            [11] 5118 	push	bc
   7D42 CD 32 79      [17] 5119 	call	_DeleteSprite
   7D45 C1            [10] 5120 	pop	bc
                           5121 ;src/main.c:1257: PrintSprite(&spr[deleteSpr]); // reprint enemy, which may have been partially erased
   7D46 DD 6E FA      [19] 5122 	ld	l,-6 (ix)
   7D49 DD 66 FB      [19] 5123 	ld	h,-5 (ix)
   7D4C C5            [11] 5124 	push	bc
   7D4D CD 03 79      [17] 5125 	call	_PrintSprite
   7D50 C1            [10] 5126 	pop	bc
   7D51 18 AD         [12] 5127 	jr	00103$
   7D53                    5128 00105$:
                           5129 ;src/main.c:1260: PrintExplosion(&spr[player], 0); Pause(40);
   7D53 59            [ 4] 5130 	ld	e, c
   7D54 50            [ 4] 5131 	ld	d, b
   7D55 C5            [11] 5132 	push	bc
   7D56 AF            [ 4] 5133 	xor	a, a
   7D57 F5            [11] 5134 	push	af
   7D58 33            [ 6] 5135 	inc	sp
   7D59 D5            [11] 5136 	push	de
   7D5A CD 5D 7C      [17] 5137 	call	_PrintExplosion
   7D5D F1            [10] 5138 	pop	af
   7D5E 33            [ 6] 5139 	inc	sp
   7D5F 21 28 00      [10] 5140 	ld	hl, #0x0028
   7D62 CD 81 61      [17] 5141 	call	_Pause
   7D65 C1            [10] 5142 	pop	bc
                           5143 ;src/main.c:1261: if (deleteSpr > FALSE) {
   7D66 DD 7E 05      [19] 5144 	ld	a, 5 (ix)
   7D69 B7            [ 4] 5145 	or	a, a
   7D6A 28 0E         [12] 5146 	jr	Z,00108$
                           5147 ;src/main.c:1262: DeleteSprite(&spr[player]);
   7D6C 69            [ 4] 5148 	ld	l, c
   7D6D 60            [ 4] 5149 	ld	h, b
   7D6E CD 32 79      [17] 5150 	call	_DeleteSprite
                           5151 ;src/main.c:1263: PrintSprite(&spr[deleteSpr]);
   7D71 DD 6E FA      [19] 5152 	ld	l,-6 (ix)
   7D74 DD 66 FB      [19] 5153 	ld	h,-5 (ix)
   7D77 CD 03 79      [17] 5154 	call	_PrintSprite
   7D7A                    5155 00108$:
   7D7A DD F9         [10] 5156 	ld	sp, ix
   7D7C DD E1         [14] 5157 	pop	ix
   7D7E C9            [10] 5158 	ret
                           5159 ;src/main.c:1269: u8 SpriteCollision(u8 x, u8 y, TSpr *pSpr, u8 marginX) {
                           5160 ;	---------------------------------
                           5161 ; Function SpriteCollision
                           5162 ; ---------------------------------
   7D7F                    5163 _SpriteCollision::
   7D7F DD E5         [15] 5164 	push	ix
   7D81 DD 21 00 00   [14] 5165 	ld	ix,#0
   7D85 DD 39         [15] 5166 	add	ix,sp
   7D87 21 F9 FF      [10] 5167 	ld	hl, #-7
   7D8A 39            [11] 5168 	add	hl, sp
   7D8B F9            [ 6] 5169 	ld	sp, hl
                           5170 ;src/main.c:1270: u8 marginY = marginX+marginX;	
   7D8C DD 7E 08      [19] 5171 	ld	a, 8 (ix)
   7D8F 87            [ 4] 5172 	add	a, a
   7D90 DD 77 F9      [19] 5173 	ld	-7 (ix), a
                           5174 ;src/main.c:1271: if (x+OBJ_W > pSpr->x-marginX && x-marginX < pSpr->x+SPR_W) // check the X coordinate with the sprite		
   7D93 DD 4E 04      [19] 5175 	ld	c, 4 (ix)
   7D96 06 00         [ 7] 5176 	ld	b, #0x00
   7D98 21 04 00      [10] 5177 	ld	hl, #0x0004
   7D9B 09            [11] 5178 	add	hl,bc
   7D9C DD 75 FE      [19] 5179 	ld	-2 (ix), l
   7D9F DD 74 FF      [19] 5180 	ld	-1 (ix), h
   7DA2 DD 5E 06      [19] 5181 	ld	e,6 (ix)
   7DA5 DD 56 07      [19] 5182 	ld	d,7 (ix)
   7DA8 6B            [ 4] 5183 	ld	l, e
   7DA9 62            [ 4] 5184 	ld	h, d
   7DAA 23            [ 6] 5185 	inc	hl
   7DAB 23            [ 6] 5186 	inc	hl
   7DAC 6E            [ 7] 5187 	ld	l, (hl)
   7DAD 26 00         [ 7] 5188 	ld	h, #0x00
   7DAF DD 7E 08      [19] 5189 	ld	a, 8 (ix)
   7DB2 DD 77 FC      [19] 5190 	ld	-4 (ix), a
   7DB5 DD 36 FD 00   [19] 5191 	ld	-3 (ix), #0x00
   7DB9 7D            [ 4] 5192 	ld	a, l
   7DBA DD 96 FC      [19] 5193 	sub	a, -4 (ix)
   7DBD DD 77 FA      [19] 5194 	ld	-6 (ix), a
   7DC0 7C            [ 4] 5195 	ld	a, h
   7DC1 DD 9E FD      [19] 5196 	sbc	a, -3 (ix)
   7DC4 DD 77 FB      [19] 5197 	ld	-5 (ix), a
   7DC7 DD 7E FA      [19] 5198 	ld	a, -6 (ix)
   7DCA DD 96 FE      [19] 5199 	sub	a, -2 (ix)
   7DCD DD 7E FB      [19] 5200 	ld	a, -5 (ix)
   7DD0 DD 9E FF      [19] 5201 	sbc	a, -1 (ix)
   7DD3 E2 D8 7D      [10] 5202 	jp	PO, 00125$
   7DD6 EE 80         [ 7] 5203 	xor	a, #0x80
   7DD8                    5204 00125$:
   7DD8 F2 49 7E      [10] 5205 	jp	P, 00105$
   7DDB 79            [ 4] 5206 	ld	a, c
   7DDC DD 96 FC      [19] 5207 	sub	a, -4 (ix)
   7DDF 4F            [ 4] 5208 	ld	c, a
   7DE0 78            [ 4] 5209 	ld	a, b
   7DE1 DD 9E FD      [19] 5210 	sbc	a, -3 (ix)
   7DE4 47            [ 4] 5211 	ld	b, a
   7DE5 23            [ 6] 5212 	inc	hl
   7DE6 23            [ 6] 5213 	inc	hl
   7DE7 23            [ 6] 5214 	inc	hl
   7DE8 23            [ 6] 5215 	inc	hl
   7DE9 23            [ 6] 5216 	inc	hl
   7DEA 79            [ 4] 5217 	ld	a, c
   7DEB 95            [ 4] 5218 	sub	a, l
   7DEC 78            [ 4] 5219 	ld	a, b
   7DED 9C            [ 4] 5220 	sbc	a, h
   7DEE E2 F3 7D      [10] 5221 	jp	PO, 00126$
   7DF1 EE 80         [ 7] 5222 	xor	a, #0x80
   7DF3                    5223 00126$:
   7DF3 F2 49 7E      [10] 5224 	jp	P, 00105$
                           5225 ;src/main.c:1272: if (y+OBJ_H > pSpr->y-marginY && y-marginY < pSpr->y+SPR_H) // check the Y coordinate with the sprite
   7DF6 DD 4E 05      [19] 5226 	ld	c, 5 (ix)
   7DF9 06 00         [ 7] 5227 	ld	b, #0x00
   7DFB 21 08 00      [10] 5228 	ld	hl, #0x0008
   7DFE 09            [11] 5229 	add	hl,bc
   7DFF DD 75 FA      [19] 5230 	ld	-6 (ix), l
   7E02 DD 74 FB      [19] 5231 	ld	-5 (ix), h
   7E05 EB            [ 4] 5232 	ex	de,hl
   7E06 23            [ 6] 5233 	inc	hl
   7E07 23            [ 6] 5234 	inc	hl
   7E08 23            [ 6] 5235 	inc	hl
   7E09 5E            [ 7] 5236 	ld	e, (hl)
   7E0A 16 00         [ 7] 5237 	ld	d, #0x00
   7E0C DD 6E F9      [19] 5238 	ld	l, -7 (ix)
   7E0F 26 00         [ 7] 5239 	ld	h, #0x00
   7E11 7B            [ 4] 5240 	ld	a, e
   7E12 95            [ 4] 5241 	sub	a, l
   7E13 DD 77 FC      [19] 5242 	ld	-4 (ix), a
   7E16 7A            [ 4] 5243 	ld	a, d
   7E17 9C            [ 4] 5244 	sbc	a, h
   7E18 DD 77 FD      [19] 5245 	ld	-3 (ix), a
   7E1B DD 7E FC      [19] 5246 	ld	a, -4 (ix)
   7E1E DD 96 FA      [19] 5247 	sub	a, -6 (ix)
   7E21 DD 7E FD      [19] 5248 	ld	a, -3 (ix)
   7E24 DD 9E FB      [19] 5249 	sbc	a, -5 (ix)
   7E27 E2 2C 7E      [10] 5250 	jp	PO, 00127$
   7E2A EE 80         [ 7] 5251 	xor	a, #0x80
   7E2C                    5252 00127$:
   7E2C F2 49 7E      [10] 5253 	jp	P, 00105$
   7E2F 79            [ 4] 5254 	ld	a, c
   7E30 95            [ 4] 5255 	sub	a, l
   7E31 4F            [ 4] 5256 	ld	c, a
   7E32 78            [ 4] 5257 	ld	a, b
   7E33 9C            [ 4] 5258 	sbc	a, h
   7E34 47            [ 4] 5259 	ld	b, a
   7E35 21 0C 00      [10] 5260 	ld	hl, #0x000c
   7E38 19            [11] 5261 	add	hl, de
   7E39 79            [ 4] 5262 	ld	a, c
   7E3A 95            [ 4] 5263 	sub	a, l
   7E3B 78            [ 4] 5264 	ld	a, b
   7E3C 9C            [ 4] 5265 	sbc	a, h
   7E3D E2 42 7E      [10] 5266 	jp	PO, 00128$
   7E40 EE 80         [ 7] 5267 	xor	a, #0x80
   7E42                    5268 00128$:
   7E42 F2 49 7E      [10] 5269 	jp	P, 00105$
                           5270 ;src/main.c:1273: return TRUE;	
   7E45 2E 01         [ 7] 5271 	ld	l, #0x01
   7E47 18 02         [12] 5272 	jr	00107$
   7E49                    5273 00105$:
                           5274 ;src/main.c:1274: return FALSE;
   7E49 2E 00         [ 7] 5275 	ld	l, #0x00
   7E4B                    5276 00107$:
   7E4B DD F9         [10] 5277 	ld	sp, ix
   7E4D DD E1         [14] 5278 	pop	ix
   7E4F C9            [10] 5279 	ret
                           5280 ;src/main.c:1290: void MoveUp(TSpr *pSpr) __z88dk_fastcall { 
                           5281 ;	---------------------------------
                           5282 ; Function MoveUp
                           5283 ; ---------------------------------
   7E50                    5284 _MoveUp::
   7E50 DD E5         [15] 5285 	push	ix
   7E52 DD 21 00 00   [14] 5286 	ld	ix,#0
   7E56 DD 39         [15] 5287 	add	ix,sp
   7E58 F5            [11] 5288 	push	af
   7E59 F5            [11] 5289 	push	af
                           5290 ;src/main.c:1292: if (pSpr->y > ORIG_MAP_Y && OnBackground(pSpr->x-1, pSpr->y-2)) {
   7E5A DD 75 FE      [19] 5291 	ld	-2 (ix), l
   7E5D DD 74 FF      [19] 5292 	ld	-1 (ix), h
   7E60 23            [ 6] 5293 	inc	hl
   7E61 23            [ 6] 5294 	inc	hl
   7E62 23            [ 6] 5295 	inc	hl
   7E63 4D            [ 4] 5296 	ld	c,l
   7E64 44            [ 4] 5297 	ld	b,h
   7E65 0A            [ 7] 5298 	ld	a, (bc)
   7E66 5F            [ 4] 5299 	ld	e, a
   7E67 3E 20         [ 7] 5300 	ld	a, #0x20
   7E69 93            [ 4] 5301 	sub	a, e
   7E6A 30 6C         [12] 5302 	jr	NC,00107$
   7E6C 1D            [ 4] 5303 	dec	e
   7E6D 1D            [ 4] 5304 	dec	e
   7E6E DD 7E FE      [19] 5305 	ld	a, -2 (ix)
   7E71 C6 02         [ 7] 5306 	add	a, #0x02
   7E73 DD 77 FC      [19] 5307 	ld	-4 (ix), a
   7E76 DD 7E FF      [19] 5308 	ld	a, -1 (ix)
   7E79 CE 00         [ 7] 5309 	adc	a, #0x00
   7E7B DD 77 FD      [19] 5310 	ld	-3 (ix), a
   7E7E E1            [10] 5311 	pop	hl
   7E7F E5            [11] 5312 	push	hl
   7E80 56            [ 7] 5313 	ld	d, (hl)
   7E81 15            [ 4] 5314 	dec	d
   7E82 C5            [11] 5315 	push	bc
   7E83 7B            [ 4] 5316 	ld	a, e
   7E84 F5            [11] 5317 	push	af
   7E85 33            [ 6] 5318 	inc	sp
   7E86 D5            [11] 5319 	push	de
   7E87 33            [ 6] 5320 	inc	sp
   7E88 CD 0A 62      [17] 5321 	call	_OnBackground
   7E8B F1            [10] 5322 	pop	af
   7E8C C1            [10] 5323 	pop	bc
   7E8D 7D            [ 4] 5324 	ld	a, l
   7E8E B7            [ 4] 5325 	or	a, a
   7E8F 28 47         [12] 5326 	jr	Z,00107$
                           5327 ;src/main.c:1293: pSpr->y -= 2;
   7E91 0A            [ 7] 5328 	ld	a, (bc)
   7E92 C6 FE         [ 7] 5329 	add	a, #0xfe
   7E94 02            [ 7] 5330 	ld	(bc), a
                           5331 ;src/main.c:1294: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x-1, pSpr->y-2))
   7E95 D1            [10] 5332 	pop	de
   7E96 E1            [10] 5333 	pop	hl
   7E97 E5            [11] 5334 	push	hl
   7E98 D5            [11] 5335 	push	de
   7E99 11 0E 00      [10] 5336 	ld	de, #0x000e
   7E9C 19            [11] 5337 	add	hl, de
   7E9D 7E            [ 7] 5338 	ld	a, (hl)
   7E9E B7            [ 4] 5339 	or	a, a
   7E9F 28 1B         [12] 5340 	jr	Z,00102$
   7EA1 0A            [ 7] 5341 	ld	a, (bc)
   7EA2 5F            [ 4] 5342 	ld	e, a
   7EA3 1D            [ 4] 5343 	dec	e
   7EA4 1D            [ 4] 5344 	dec	e
   7EA5 E1            [10] 5345 	pop	hl
   7EA6 E5            [11] 5346 	push	hl
   7EA7 56            [ 7] 5347 	ld	d, (hl)
   7EA8 15            [ 4] 5348 	dec	d
   7EA9 C5            [11] 5349 	push	bc
   7EAA 7B            [ 4] 5350 	ld	a, e
   7EAB F5            [11] 5351 	push	af
   7EAC 33            [ 6] 5352 	inc	sp
   7EAD D5            [11] 5353 	push	de
   7EAE 33            [ 6] 5354 	inc	sp
   7EAF CD 0A 62      [17] 5355 	call	_OnBackground
   7EB2 F1            [10] 5356 	pop	af
   7EB3 C1            [10] 5357 	pop	bc
   7EB4 7D            [ 4] 5358 	ld	a, l
   7EB5 B7            [ 4] 5359 	or	a, a
   7EB6 28 04         [12] 5360 	jr	Z,00102$
                           5361 ;src/main.c:1295: pSpr->y -= 2; // powerUp speed*2
   7EB8 0A            [ 7] 5362 	ld	a, (bc)
   7EB9 C6 FE         [ 7] 5363 	add	a, #0xfe
   7EBB 02            [ 7] 5364 	ld	(bc), a
   7EBC                    5365 00102$:
                           5366 ;src/main.c:1297: pSpr->dir = D_up;
   7EBC DD 7E FE      [19] 5367 	ld	a, -2 (ix)
   7EBF C6 07         [ 7] 5368 	add	a, #0x07
   7EC1 4F            [ 4] 5369 	ld	c, a
   7EC2 DD 7E FF      [19] 5370 	ld	a, -1 (ix)
   7EC5 CE 00         [ 7] 5371 	adc	a, #0x00
   7EC7 47            [ 4] 5372 	ld	b, a
   7EC8 AF            [ 4] 5373 	xor	a, a
   7EC9 02            [ 7] 5374 	ld	(bc), a
                           5375 ;src/main.c:1298: pSpr->status = S_walkingUp;
   7ECA DD 7E FE      [19] 5376 	ld	a, -2 (ix)
   7ECD C6 06         [ 7] 5377 	add	a, #0x06
   7ECF 4F            [ 4] 5378 	ld	c, a
   7ED0 DD 7E FF      [19] 5379 	ld	a, -1 (ix)
   7ED3 CE 00         [ 7] 5380 	adc	a, #0x00
   7ED5 47            [ 4] 5381 	ld	b, a
   7ED6 AF            [ 4] 5382 	xor	a, a
   7ED7 02            [ 7] 5383 	ld	(bc), a
   7ED8                    5384 00107$:
   7ED8 DD F9         [10] 5385 	ld	sp, ix
   7EDA DD E1         [14] 5386 	pop	ix
   7EDC C9            [10] 5387 	ret
                           5388 ;src/main.c:1303: void MoveDown(TSpr *pSpr) __z88dk_fastcall {
                           5389 ;	---------------------------------
                           5390 ; Function MoveDown
                           5391 ; ---------------------------------
   7EDD                    5392 _MoveDown::
   7EDD DD E5         [15] 5393 	push	ix
   7EDF DD 21 00 00   [14] 5394 	ld	ix,#0
   7EE3 DD 39         [15] 5395 	add	ix,sp
   7EE5 F5            [11] 5396 	push	af
   7EE6 F5            [11] 5397 	push	af
                           5398 ;src/main.c:1305: if (pSpr->y + SPR_H < GLOBAL_MAX_Y && OnBackground(pSpr->x-1, pSpr->y+4)) {
   7EE7 DD 75 FE      [19] 5399 	ld	-2 (ix), l
   7EEA DD 74 FF      [19] 5400 	ld	-1 (ix), h
   7EED 23            [ 6] 5401 	inc	hl
   7EEE 23            [ 6] 5402 	inc	hl
   7EEF 23            [ 6] 5403 	inc	hl
   7EF0 4D            [ 4] 5404 	ld	c,l
   7EF1 44            [ 4] 5405 	ld	b,h
   7EF2 0A            [ 7] 5406 	ld	a, (bc)
   7EF3 5F            [ 4] 5407 	ld	e, a
   7EF4 6B            [ 4] 5408 	ld	l, e
   7EF5 26 00         [ 7] 5409 	ld	h, #0x00
   7EF7 D5            [11] 5410 	push	de
   7EF8 11 0C 00      [10] 5411 	ld	de, #0x000c
   7EFB 19            [11] 5412 	add	hl, de
   7EFC D1            [10] 5413 	pop	de
   7EFD 7D            [ 4] 5414 	ld	a, l
   7EFE D6 C8         [ 7] 5415 	sub	a, #0xc8
   7F00 7C            [ 4] 5416 	ld	a, h
   7F01 17            [ 4] 5417 	rla
   7F02 3F            [ 4] 5418 	ccf
   7F03 1F            [ 4] 5419 	rra
   7F04 DE 80         [ 7] 5420 	sbc	a, #0x80
   7F06 30 70         [12] 5421 	jr	NC,00107$
   7F08 1C            [ 4] 5422 	inc	e
   7F09 1C            [ 4] 5423 	inc	e
   7F0A 1C            [ 4] 5424 	inc	e
   7F0B 1C            [ 4] 5425 	inc	e
   7F0C DD 7E FE      [19] 5426 	ld	a, -2 (ix)
   7F0F C6 02         [ 7] 5427 	add	a, #0x02
   7F11 DD 77 FC      [19] 5428 	ld	-4 (ix), a
   7F14 DD 7E FF      [19] 5429 	ld	a, -1 (ix)
   7F17 CE 00         [ 7] 5430 	adc	a, #0x00
   7F19 DD 77 FD      [19] 5431 	ld	-3 (ix), a
   7F1C E1            [10] 5432 	pop	hl
   7F1D E5            [11] 5433 	push	hl
   7F1E 56            [ 7] 5434 	ld	d, (hl)
   7F1F 15            [ 4] 5435 	dec	d
   7F20 C5            [11] 5436 	push	bc
   7F21 7B            [ 4] 5437 	ld	a, e
   7F22 F5            [11] 5438 	push	af
   7F23 33            [ 6] 5439 	inc	sp
   7F24 D5            [11] 5440 	push	de
   7F25 33            [ 6] 5441 	inc	sp
   7F26 CD 0A 62      [17] 5442 	call	_OnBackground
   7F29 F1            [10] 5443 	pop	af
   7F2A C1            [10] 5444 	pop	bc
   7F2B 7D            [ 4] 5445 	ld	a, l
   7F2C B7            [ 4] 5446 	or	a, a
   7F2D 28 49         [12] 5447 	jr	Z,00107$
                           5448 ;src/main.c:1306: pSpr->y += 2;
   7F2F 0A            [ 7] 5449 	ld	a, (bc)
   7F30 C6 02         [ 7] 5450 	add	a, #0x02
   7F32 02            [ 7] 5451 	ld	(bc), a
                           5452 ;src/main.c:1307: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x-1, pSpr->y+4))
   7F33 D1            [10] 5453 	pop	de
   7F34 E1            [10] 5454 	pop	hl
   7F35 E5            [11] 5455 	push	hl
   7F36 D5            [11] 5456 	push	de
   7F37 11 0E 00      [10] 5457 	ld	de, #0x000e
   7F3A 19            [11] 5458 	add	hl, de
   7F3B 7E            [ 7] 5459 	ld	a, (hl)
   7F3C B7            [ 4] 5460 	or	a, a
   7F3D 28 1D         [12] 5461 	jr	Z,00102$
   7F3F 0A            [ 7] 5462 	ld	a, (bc)
   7F40 5F            [ 4] 5463 	ld	e, a
   7F41 1C            [ 4] 5464 	inc	e
   7F42 1C            [ 4] 5465 	inc	e
   7F43 1C            [ 4] 5466 	inc	e
   7F44 1C            [ 4] 5467 	inc	e
   7F45 E1            [10] 5468 	pop	hl
   7F46 E5            [11] 5469 	push	hl
   7F47 56            [ 7] 5470 	ld	d, (hl)
   7F48 15            [ 4] 5471 	dec	d
   7F49 C5            [11] 5472 	push	bc
   7F4A 7B            [ 4] 5473 	ld	a, e
   7F4B F5            [11] 5474 	push	af
   7F4C 33            [ 6] 5475 	inc	sp
   7F4D D5            [11] 5476 	push	de
   7F4E 33            [ 6] 5477 	inc	sp
   7F4F CD 0A 62      [17] 5478 	call	_OnBackground
   7F52 F1            [10] 5479 	pop	af
   7F53 C1            [10] 5480 	pop	bc
   7F54 7D            [ 4] 5481 	ld	a, l
   7F55 B7            [ 4] 5482 	or	a, a
   7F56 28 04         [12] 5483 	jr	Z,00102$
                           5484 ;src/main.c:1308: pSpr->y += 2; // powerUp speed*2
   7F58 0A            [ 7] 5485 	ld	a, (bc)
   7F59 C6 02         [ 7] 5486 	add	a, #0x02
   7F5B 02            [ 7] 5487 	ld	(bc), a
   7F5C                    5488 00102$:
                           5489 ;src/main.c:1310: pSpr->dir = D_down;
   7F5C DD 7E FE      [19] 5490 	ld	a, -2 (ix)
   7F5F C6 07         [ 7] 5491 	add	a, #0x07
   7F61 6F            [ 4] 5492 	ld	l, a
   7F62 DD 7E FF      [19] 5493 	ld	a, -1 (ix)
   7F65 CE 00         [ 7] 5494 	adc	a, #0x00
   7F67 67            [ 4] 5495 	ld	h, a
   7F68 36 01         [10] 5496 	ld	(hl), #0x01
                           5497 ;src/main.c:1311: pSpr->status = S_walkingDown;
   7F6A DD 7E FE      [19] 5498 	ld	a, -2 (ix)
   7F6D C6 06         [ 7] 5499 	add	a, #0x06
   7F6F 6F            [ 4] 5500 	ld	l, a
   7F70 DD 7E FF      [19] 5501 	ld	a, -1 (ix)
   7F73 CE 00         [ 7] 5502 	adc	a, #0x00
   7F75 67            [ 4] 5503 	ld	h, a
   7F76 36 01         [10] 5504 	ld	(hl), #0x01
   7F78                    5505 00107$:
   7F78 DD F9         [10] 5506 	ld	sp, ix
   7F7A DD E1         [14] 5507 	pop	ix
   7F7C C9            [10] 5508 	ret
                           5509 ;src/main.c:1316: void MoveLeft(TSpr *pSpr) __z88dk_fastcall {
                           5510 ;	---------------------------------
                           5511 ; Function MoveLeft
                           5512 ; ---------------------------------
   7F7D                    5513 _MoveLeft::
   7F7D DD E5         [15] 5514 	push	ix
   7F7F DD 21 00 00   [14] 5515 	ld	ix,#0
   7F83 DD 39         [15] 5516 	add	ix,sp
   7F85 F5            [11] 5517 	push	af
   7F86 F5            [11] 5518 	push	af
                           5519 ;src/main.c:1318: if (OnBackground(pSpr->x-3, pSpr->y+1)) {
   7F87 DD 75 FE      [19] 5520 	ld	-2 (ix), l
   7F8A DD 74 FF      [19] 5521 	ld	-1 (ix), h
   7F8D 23            [ 6] 5522 	inc	hl
   7F8E 23            [ 6] 5523 	inc	hl
   7F8F 23            [ 6] 5524 	inc	hl
   7F90 4D            [ 4] 5525 	ld	c,l
   7F91 44            [ 4] 5526 	ld	b,h
   7F92 0A            [ 7] 5527 	ld	a, (bc)
   7F93 57            [ 4] 5528 	ld	d, a
   7F94 14            [ 4] 5529 	inc	d
   7F95 DD 7E FE      [19] 5530 	ld	a, -2 (ix)
   7F98 C6 02         [ 7] 5531 	add	a, #0x02
   7F9A DD 77 FC      [19] 5532 	ld	-4 (ix), a
   7F9D DD 7E FF      [19] 5533 	ld	a, -1 (ix)
   7FA0 CE 00         [ 7] 5534 	adc	a, #0x00
   7FA2 DD 77 FD      [19] 5535 	ld	-3 (ix), a
   7FA5 E1            [10] 5536 	pop	hl
   7FA6 E5            [11] 5537 	push	hl
   7FA7 7E            [ 7] 5538 	ld	a, (hl)
   7FA8 C6 FD         [ 7] 5539 	add	a, #0xfd
   7FAA C5            [11] 5540 	push	bc
   7FAB 5F            [ 4] 5541 	ld	e, a
   7FAC D5            [11] 5542 	push	de
   7FAD CD 0A 62      [17] 5543 	call	_OnBackground
   7FB0 F1            [10] 5544 	pop	af
   7FB1 C1            [10] 5545 	pop	bc
   7FB2 7D            [ 4] 5546 	ld	a, l
   7FB3 B7            [ 4] 5547 	or	a, a
   7FB4 28 4C         [12] 5548 	jr	Z,00106$
                           5549 ;src/main.c:1319: pSpr->x--;
   7FB6 E1            [10] 5550 	pop	hl
   7FB7 E5            [11] 5551 	push	hl
   7FB8 5E            [ 7] 5552 	ld	e, (hl)
   7FB9 1D            [ 4] 5553 	dec	e
   7FBA E1            [10] 5554 	pop	hl
   7FBB E5            [11] 5555 	push	hl
   7FBC 73            [ 7] 5556 	ld	(hl), e
                           5557 ;src/main.c:1320: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x-3, pSpr->y+1))
   7FBD D1            [10] 5558 	pop	de
   7FBE E1            [10] 5559 	pop	hl
   7FBF E5            [11] 5560 	push	hl
   7FC0 D5            [11] 5561 	push	de
   7FC1 11 0E 00      [10] 5562 	ld	de, #0x000e
   7FC4 19            [11] 5563 	add	hl, de
   7FC5 7E            [ 7] 5564 	ld	a, (hl)
   7FC6 B7            [ 4] 5565 	or	a, a
   7FC7 28 1D         [12] 5566 	jr	Z,00102$
   7FC9 0A            [ 7] 5567 	ld	a, (bc)
   7FCA 4F            [ 4] 5568 	ld	c, a
   7FCB 0C            [ 4] 5569 	inc	c
   7FCC E1            [10] 5570 	pop	hl
   7FCD E5            [11] 5571 	push	hl
   7FCE 7E            [ 7] 5572 	ld	a, (hl)
   7FCF C6 FD         [ 7] 5573 	add	a, #0xfd
   7FD1 47            [ 4] 5574 	ld	b, a
   7FD2 79            [ 4] 5575 	ld	a, c
   7FD3 F5            [11] 5576 	push	af
   7FD4 33            [ 6] 5577 	inc	sp
   7FD5 C5            [11] 5578 	push	bc
   7FD6 33            [ 6] 5579 	inc	sp
   7FD7 CD 0A 62      [17] 5580 	call	_OnBackground
   7FDA F1            [10] 5581 	pop	af
   7FDB 7D            [ 4] 5582 	ld	a, l
   7FDC B7            [ 4] 5583 	or	a, a
   7FDD 28 07         [12] 5584 	jr	Z,00102$
                           5585 ;src/main.c:1321: pSpr->x--; // powerUp speed*2
   7FDF E1            [10] 5586 	pop	hl
   7FE0 E5            [11] 5587 	push	hl
   7FE1 4E            [ 7] 5588 	ld	c, (hl)
   7FE2 0D            [ 4] 5589 	dec	c
   7FE3 E1            [10] 5590 	pop	hl
   7FE4 E5            [11] 5591 	push	hl
   7FE5 71            [ 7] 5592 	ld	(hl), c
   7FE6                    5593 00102$:
                           5594 ;src/main.c:1323: pSpr->dir = D_left;
   7FE6 DD 7E FE      [19] 5595 	ld	a, -2 (ix)
   7FE9 C6 07         [ 7] 5596 	add	a, #0x07
   7FEB 6F            [ 4] 5597 	ld	l, a
   7FEC DD 7E FF      [19] 5598 	ld	a, -1 (ix)
   7FEF CE 00         [ 7] 5599 	adc	a, #0x00
   7FF1 67            [ 4] 5600 	ld	h, a
   7FF2 36 02         [10] 5601 	ld	(hl), #0x02
                           5602 ;src/main.c:1324: pSpr->status = S_walkingLeft;
   7FF4 DD 7E FE      [19] 5603 	ld	a, -2 (ix)
   7FF7 C6 06         [ 7] 5604 	add	a, #0x06
   7FF9 6F            [ 4] 5605 	ld	l, a
   7FFA DD 7E FF      [19] 5606 	ld	a, -1 (ix)
   7FFD CE 00         [ 7] 5607 	adc	a, #0x00
   7FFF 67            [ 4] 5608 	ld	h, a
   8000 36 02         [10] 5609 	ld	(hl), #0x02
   8002                    5610 00106$:
   8002 DD F9         [10] 5611 	ld	sp, ix
   8004 DD E1         [14] 5612 	pop	ix
   8006 C9            [10] 5613 	ret
                           5614 ;src/main.c:1329: void MoveRight(TSpr *pSpr) __z88dk_fastcall { 
                           5615 ;	---------------------------------
                           5616 ; Function MoveRight
                           5617 ; ---------------------------------
   8007                    5618 _MoveRight::
   8007 DD E5         [15] 5619 	push	ix
   8009 DD 21 00 00   [14] 5620 	ld	ix,#0
   800D DD 39         [15] 5621 	add	ix,sp
   800F F5            [11] 5622 	push	af
   8010 F5            [11] 5623 	push	af
                           5624 ;src/main.c:1331: if (OnBackground(pSpr->x+1, pSpr->y+1)) {
   8011 DD 75 FE      [19] 5625 	ld	-2 (ix), l
   8014 DD 74 FF      [19] 5626 	ld	-1 (ix), h
   8017 23            [ 6] 5627 	inc	hl
   8018 23            [ 6] 5628 	inc	hl
   8019 23            [ 6] 5629 	inc	hl
   801A 4D            [ 4] 5630 	ld	c,l
   801B 44            [ 4] 5631 	ld	b,h
   801C 0A            [ 7] 5632 	ld	a, (bc)
   801D 57            [ 4] 5633 	ld	d, a
   801E 14            [ 4] 5634 	inc	d
   801F DD 7E FE      [19] 5635 	ld	a, -2 (ix)
   8022 C6 02         [ 7] 5636 	add	a, #0x02
   8024 DD 77 FC      [19] 5637 	ld	-4 (ix), a
   8027 DD 7E FF      [19] 5638 	ld	a, -1 (ix)
   802A CE 00         [ 7] 5639 	adc	a, #0x00
   802C DD 77 FD      [19] 5640 	ld	-3 (ix), a
   802F E1            [10] 5641 	pop	hl
   8030 E5            [11] 5642 	push	hl
   8031 7E            [ 7] 5643 	ld	a, (hl)
   8032 3C            [ 4] 5644 	inc	a
   8033 C5            [11] 5645 	push	bc
   8034 5F            [ 4] 5646 	ld	e, a
   8035 D5            [11] 5647 	push	de
   8036 CD 0A 62      [17] 5648 	call	_OnBackground
   8039 F1            [10] 5649 	pop	af
   803A C1            [10] 5650 	pop	bc
   803B 7D            [ 4] 5651 	ld	a, l
   803C B7            [ 4] 5652 	or	a, a
   803D 28 4A         [12] 5653 	jr	Z,00106$
                           5654 ;src/main.c:1332: pSpr->x++;
   803F E1            [10] 5655 	pop	hl
   8040 E5            [11] 5656 	push	hl
   8041 5E            [ 7] 5657 	ld	e, (hl)
   8042 1C            [ 4] 5658 	inc	e
   8043 E1            [10] 5659 	pop	hl
   8044 E5            [11] 5660 	push	hl
   8045 73            [ 7] 5661 	ld	(hl), e
                           5662 ;src/main.c:1333: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x+1, pSpr->y+1)) 
   8046 D1            [10] 5663 	pop	de
   8047 E1            [10] 5664 	pop	hl
   8048 E5            [11] 5665 	push	hl
   8049 D5            [11] 5666 	push	de
   804A 11 0E 00      [10] 5667 	ld	de, #0x000e
   804D 19            [11] 5668 	add	hl, de
   804E 7E            [ 7] 5669 	ld	a, (hl)
   804F B7            [ 4] 5670 	or	a, a
   8050 28 1B         [12] 5671 	jr	Z,00102$
   8052 0A            [ 7] 5672 	ld	a, (bc)
   8053 4F            [ 4] 5673 	ld	c, a
   8054 0C            [ 4] 5674 	inc	c
   8055 E1            [10] 5675 	pop	hl
   8056 E5            [11] 5676 	push	hl
   8057 46            [ 7] 5677 	ld	b, (hl)
   8058 04            [ 4] 5678 	inc	b
   8059 79            [ 4] 5679 	ld	a, c
   805A F5            [11] 5680 	push	af
   805B 33            [ 6] 5681 	inc	sp
   805C C5            [11] 5682 	push	bc
   805D 33            [ 6] 5683 	inc	sp
   805E CD 0A 62      [17] 5684 	call	_OnBackground
   8061 F1            [10] 5685 	pop	af
   8062 7D            [ 4] 5686 	ld	a, l
   8063 B7            [ 4] 5687 	or	a, a
   8064 28 07         [12] 5688 	jr	Z,00102$
                           5689 ;src/main.c:1334: pSpr->x++; // powerUp speed*2
   8066 E1            [10] 5690 	pop	hl
   8067 E5            [11] 5691 	push	hl
   8068 4E            [ 7] 5692 	ld	c, (hl)
   8069 0C            [ 4] 5693 	inc	c
   806A E1            [10] 5694 	pop	hl
   806B E5            [11] 5695 	push	hl
   806C 71            [ 7] 5696 	ld	(hl), c
   806D                    5697 00102$:
                           5698 ;src/main.c:1336: pSpr->dir = D_right;
   806D DD 7E FE      [19] 5699 	ld	a, -2 (ix)
   8070 C6 07         [ 7] 5700 	add	a, #0x07
   8072 6F            [ 4] 5701 	ld	l, a
   8073 DD 7E FF      [19] 5702 	ld	a, -1 (ix)
   8076 CE 00         [ 7] 5703 	adc	a, #0x00
   8078 67            [ 4] 5704 	ld	h, a
   8079 36 03         [10] 5705 	ld	(hl), #0x03
                           5706 ;src/main.c:1337: pSpr->status = S_walkingRight;
   807B DD 7E FE      [19] 5707 	ld	a, -2 (ix)
   807E C6 06         [ 7] 5708 	add	a, #0x06
   8080 6F            [ 4] 5709 	ld	l, a
   8081 DD 7E FF      [19] 5710 	ld	a, -1 (ix)
   8084 CE 00         [ 7] 5711 	adc	a, #0x00
   8086 67            [ 4] 5712 	ld	h, a
   8087 36 03         [10] 5713 	ld	(hl), #0x03
   8089                    5714 00106$:
   8089 DD F9         [10] 5715 	ld	sp, ix
   808B DD E1         [14] 5716 	pop	ix
   808D C9            [10] 5717 	ret
                           5718 ;src/main.c:1343: void WalkIn(TSpr *pSpr, u8 dir) {
                           5719 ;	---------------------------------
                           5720 ; Function WalkIn
                           5721 ; ---------------------------------
   808E                    5722 _WalkIn::
                           5723 ;src/main.c:1344: pSpr->nFrm = 0;
   808E D1            [10] 5724 	pop	de
   808F C1            [10] 5725 	pop	bc
   8090 C5            [11] 5726 	push	bc
   8091 D5            [11] 5727 	push	de
   8092 21 0A 00      [10] 5728 	ld	hl, #0x000a
   8095 09            [11] 5729 	add	hl, bc
   8096 36 00         [10] 5730 	ld	(hl), #0x00
                           5731 ;src/main.c:1345: pSpr->dir = dir;
   8098 21 07 00      [10] 5732 	ld	hl, #0x0007
   809B 09            [11] 5733 	add	hl, bc
   809C FD 21 04 00   [14] 5734 	ld	iy, #4
   80A0 FD 39         [15] 5735 	add	iy, sp
   80A2 FD 7E 00      [19] 5736 	ld	a, 0 (iy)
   80A5 77            [ 7] 5737 	ld	(hl), a
                           5738 ;src/main.c:1346: pSpr->status = dir;
   80A6 21 06 00      [10] 5739 	ld	hl, #0x0006
   80A9 09            [11] 5740 	add	hl, bc
   80AA FD 7E 00      [19] 5741 	ld	a, 0 (iy)
   80AD 77            [ 7] 5742 	ld	(hl), a
                           5743 ;src/main.c:1347: pSpr->print_minV = TRUE; // the sprite must be printed, it will move
   80AE 21 0D 00      [10] 5744 	ld	hl, #0x000d
   80B1 09            [11] 5745 	add	hl, bc
   80B2 36 01         [10] 5746 	ld	(hl), #0x01
   80B4 C9            [10] 5747 	ret
                           5748 ;src/main.c:1352: void Stop(TSpr *pSpr) __z88dk_fastcall {
                           5749 ;	---------------------------------
                           5750 ; Function Stop
                           5751 ; ---------------------------------
   80B5                    5752 _Stop::
   80B5 DD E5         [15] 5753 	push	ix
   80B7 DD 21 00 00   [14] 5754 	ld	ix,#0
   80BB DD 39         [15] 5755 	add	ix,sp
   80BD F5            [11] 5756 	push	af
   80BE F5            [11] 5757 	push	af
   80BF DD 75 FE      [19] 5758 	ld	-2 (ix), l
   80C2 DD 74 FF      [19] 5759 	ld	-1 (ix), h
                           5760 ;src/main.c:1353: cpct_scanKeyboard_f(); // check the pressed keys
   80C5 CD CD 51      [17] 5761 	call	_cpct_scanKeyboard_f
                           5762 ;src/main.c:1354: if(cpct_isKeyPressed(ctlUp[pSpr->ident]))			WalkIn(pSpr, D_up);
   80C8 01 F4 5E      [10] 5763 	ld	bc, #_ctlUp+0
   80CB DD 7E FE      [19] 5764 	ld	a, -2 (ix)
   80CE C6 01         [ 7] 5765 	add	a, #0x01
   80D0 DD 77 FC      [19] 5766 	ld	-4 (ix), a
   80D3 DD 7E FF      [19] 5767 	ld	a, -1 (ix)
   80D6 CE 00         [ 7] 5768 	adc	a, #0x00
   80D8 DD 77 FD      [19] 5769 	ld	-3 (ix), a
   80DB E1            [10] 5770 	pop	hl
   80DC E5            [11] 5771 	push	hl
   80DD 6E            [ 7] 5772 	ld	l, (hl)
   80DE 26 00         [ 7] 5773 	ld	h, #0x00
   80E0 29            [11] 5774 	add	hl, hl
   80E1 09            [11] 5775 	add	hl, bc
   80E2 4E            [ 7] 5776 	ld	c, (hl)
   80E3 23            [ 6] 5777 	inc	hl
   80E4 66            [ 7] 5778 	ld	h, (hl)
   80E5 69            [ 4] 5779 	ld	l, c
   80E6 CD C1 51      [17] 5780 	call	_cpct_isKeyPressed
   80E9 7D            [ 4] 5781 	ld	a, l
   80EA B7            [ 4] 5782 	or	a, a
   80EB 28 12         [12] 5783 	jr	Z,00127$
   80ED AF            [ 4] 5784 	xor	a, a
   80EE F5            [11] 5785 	push	af
   80EF 33            [ 6] 5786 	inc	sp
   80F0 DD 6E FE      [19] 5787 	ld	l,-2 (ix)
   80F3 DD 66 FF      [19] 5788 	ld	h,-1 (ix)
   80F6 E5            [11] 5789 	push	hl
   80F7 CD 8E 80      [17] 5790 	call	_WalkIn
   80FA F1            [10] 5791 	pop	af
   80FB 33            [ 6] 5792 	inc	sp
   80FC C3 04 82      [10] 5793 	jp	00129$
   80FF                    5794 00127$:
                           5795 ;src/main.c:1355: else if(cpct_isKeyPressed(ctlDown[pSpr->ident]))	WalkIn(pSpr, D_down);
   80FF E1            [10] 5796 	pop	hl
   8100 E5            [11] 5797 	push	hl
   8101 6E            [ 7] 5798 	ld	l, (hl)
   8102 26 00         [ 7] 5799 	ld	h, #0x00
   8104 29            [11] 5800 	add	hl, hl
   8105 11 F8 5E      [10] 5801 	ld	de, #_ctlDown
   8108 19            [11] 5802 	add	hl, de
   8109 7E            [ 7] 5803 	ld	a, (hl)
   810A 23            [ 6] 5804 	inc	hl
   810B 66            [ 7] 5805 	ld	h, (hl)
   810C 6F            [ 4] 5806 	ld	l, a
   810D CD C1 51      [17] 5807 	call	_cpct_isKeyPressed
   8110 7D            [ 4] 5808 	ld	a, l
   8111 B7            [ 4] 5809 	or	a, a
   8112 28 13         [12] 5810 	jr	Z,00124$
   8114 3E 01         [ 7] 5811 	ld	a, #0x01
   8116 F5            [11] 5812 	push	af
   8117 33            [ 6] 5813 	inc	sp
   8118 DD 6E FE      [19] 5814 	ld	l,-2 (ix)
   811B DD 66 FF      [19] 5815 	ld	h,-1 (ix)
   811E E5            [11] 5816 	push	hl
   811F CD 8E 80      [17] 5817 	call	_WalkIn
   8122 F1            [10] 5818 	pop	af
   8123 33            [ 6] 5819 	inc	sp
   8124 C3 04 82      [10] 5820 	jp	00129$
   8127                    5821 00124$:
                           5822 ;src/main.c:1356: else if(cpct_isKeyPressed(ctlLeft[pSpr->ident]))	WalkIn(pSpr, D_left);
   8127 E1            [10] 5823 	pop	hl
   8128 E5            [11] 5824 	push	hl
   8129 6E            [ 7] 5825 	ld	l, (hl)
   812A 26 00         [ 7] 5826 	ld	h, #0x00
   812C 29            [11] 5827 	add	hl, hl
   812D 11 FC 5E      [10] 5828 	ld	de, #_ctlLeft
   8130 19            [11] 5829 	add	hl, de
   8131 7E            [ 7] 5830 	ld	a, (hl)
   8132 23            [ 6] 5831 	inc	hl
   8133 66            [ 7] 5832 	ld	h, (hl)
   8134 6F            [ 4] 5833 	ld	l, a
   8135 CD C1 51      [17] 5834 	call	_cpct_isKeyPressed
   8138 7D            [ 4] 5835 	ld	a, l
   8139 B7            [ 4] 5836 	or	a, a
   813A 28 13         [12] 5837 	jr	Z,00121$
   813C 3E 02         [ 7] 5838 	ld	a, #0x02
   813E F5            [11] 5839 	push	af
   813F 33            [ 6] 5840 	inc	sp
   8140 DD 6E FE      [19] 5841 	ld	l,-2 (ix)
   8143 DD 66 FF      [19] 5842 	ld	h,-1 (ix)
   8146 E5            [11] 5843 	push	hl
   8147 CD 8E 80      [17] 5844 	call	_WalkIn
   814A F1            [10] 5845 	pop	af
   814B 33            [ 6] 5846 	inc	sp
   814C C3 04 82      [10] 5847 	jp	00129$
   814F                    5848 00121$:
                           5849 ;src/main.c:1357: else if(cpct_isKeyPressed(ctlRight[pSpr->ident]))	WalkIn(pSpr, D_right);	
   814F E1            [10] 5850 	pop	hl
   8150 E5            [11] 5851 	push	hl
   8151 6E            [ 7] 5852 	ld	l, (hl)
   8152 26 00         [ 7] 5853 	ld	h, #0x00
   8154 29            [11] 5854 	add	hl, hl
   8155 11 00 5F      [10] 5855 	ld	de, #_ctlRight
   8158 19            [11] 5856 	add	hl, de
   8159 7E            [ 7] 5857 	ld	a, (hl)
   815A 23            [ 6] 5858 	inc	hl
   815B 66            [ 7] 5859 	ld	h, (hl)
   815C 6F            [ 4] 5860 	ld	l, a
   815D CD C1 51      [17] 5861 	call	_cpct_isKeyPressed
   8160 7D            [ 4] 5862 	ld	a, l
   8161 B7            [ 4] 5863 	or	a, a
   8162 28 13         [12] 5864 	jr	Z,00118$
   8164 3E 03         [ 7] 5865 	ld	a, #0x03
   8166 F5            [11] 5866 	push	af
   8167 33            [ 6] 5867 	inc	sp
   8168 DD 6E FE      [19] 5868 	ld	l,-2 (ix)
   816B DD 66 FF      [19] 5869 	ld	h,-1 (ix)
   816E E5            [11] 5870 	push	hl
   816F CD 8E 80      [17] 5871 	call	_WalkIn
   8172 F1            [10] 5872 	pop	af
   8173 33            [ 6] 5873 	inc	sp
   8174 C3 04 82      [10] 5874 	jp	00129$
   8177                    5875 00118$:
                           5876 ;src/main.c:1359: else if(cpct_isKeyPressed(ctlAbort)) {
   8177 2A 04 5F      [16] 5877 	ld	hl, (_ctlAbort)
   817A CD C1 51      [17] 5878 	call	_cpct_isKeyPressed
   817D 7D            [ 4] 5879 	ld	a, l
   817E B7            [ 4] 5880 	or	a, a
   817F 28 14         [12] 5881 	jr	Z,00115$
                           5882 ;src/main.c:1360: spr[0].lives_speed = 0;
   8181 21 15 5F      [10] 5883 	ld	hl, #(_spr + 0x000b)
   8184 36 00         [10] 5884 	ld	(hl), #0x00
                           5885 ;src/main.c:1361: spr[1].lives_speed = 0;
   8186 21 24 5F      [10] 5886 	ld	hl, #(_spr + 0x001a)
   8189 36 00         [10] 5887 	ld	(hl), #0x00
                           5888 ;src/main.c:1362: GameOver(2);
   818B 3E 02         [ 7] 5889 	ld	a, #0x02
   818D F5            [11] 5890 	push	af
   818E 33            [ 6] 5891 	inc	sp
   818F CD 68 A2      [17] 5892 	call	_GameOver
   8192 33            [ 6] 5893 	inc	sp
   8193 18 6F         [12] 5894 	jr	00129$
   8195                    5895 00115$:
                           5896 ;src/main.c:1365: else if(cpct_isKeyPressed(ctlMusic)) {
   8195 2A 06 5F      [16] 5897 	ld	hl, (_ctlMusic)
   8198 CD C1 51      [17] 5898 	call	_cpct_isKeyPressed
   819B 7D            [ 4] 5899 	ld	a, l
   819C B7            [ 4] 5900 	or	a, a
   819D 28 2F         [12] 5901 	jr	Z,00112$
                           5902 ;src/main.c:1366: Wait4Key(ctlMusic);
   819F 2A 06 5F      [16] 5903 	ld	hl, (_ctlMusic)
   81A2 E5            [11] 5904 	push	hl
   81A3 CD 6C 6A      [17] 5905 	call	_Wait4Key
   81A6 F1            [10] 5906 	pop	af
                           5907 ;src/main.c:1367: if (music == TRUE) { // if the music is playing ...
   81A7 FD 21 EB 5E   [14] 5908 	ld	iy, #_music
   81AB FD 7E 00      [19] 5909 	ld	a, 0 (iy)
   81AE 3D            [ 4] 5910 	dec	a
   81AF 20 0E         [12] 5911 	jr	NZ,00102$
                           5912 ;src/main.c:1368: music = FALSE;
   81B1 FD 36 00 00   [19] 5913 	ld	0 (iy), #0x00
                           5914 ;src/main.c:1369: cpct_akp_musicInit(g_fx);
   81B5 21 C4 05      [10] 5915 	ld	hl, #_g_fx
   81B8 E5            [11] 5916 	push	hl
   81B9 CD 48 59      [17] 5917 	call	_cpct_akp_musicInit
   81BC F1            [10] 5918 	pop	af
   81BD 18 45         [12] 5919 	jr	00129$
   81BF                    5920 00102$:
                           5921 ;src/main.c:1372: music = TRUE;			
   81BF 21 EB 5E      [10] 5922 	ld	hl,#_music + 0
   81C2 36 01         [10] 5923 	ld	(hl), #0x01
                           5924 ;src/main.c:1373: cpct_akp_musicInit(g_ingame); // music ingame
   81C4 21 91 07      [10] 5925 	ld	hl, #_g_ingame
   81C7 E5            [11] 5926 	push	hl
   81C8 CD 48 59      [17] 5927 	call	_cpct_akp_musicInit
   81CB F1            [10] 5928 	pop	af
   81CC 18 36         [12] 5929 	jr	00129$
   81CE                    5930 00112$:
                           5931 ;src/main.c:1377: else if(cpct_isKeyPressed(ctlPause)) {
   81CE 2A 08 5F      [16] 5932 	ld	hl, (_ctlPause)
   81D1 CD C1 51      [17] 5933 	call	_cpct_isKeyPressed
   81D4 7D            [ 4] 5934 	ld	a, l
   81D5 B7            [ 4] 5935 	or	a, a
   81D6 28 2C         [12] 5936 	jr	Z,00129$
                           5937 ;src/main.c:1378: Wait4Key(ctlPause);
   81D8 2A 08 5F      [16] 5938 	ld	hl, (_ctlPause)
   81DB E5            [11] 5939 	push	hl
   81DC CD 6C 6A      [17] 5940 	call	_Wait4Key
                           5941 ;src/main.c:1379: cpct_akp_musicInit(g_fx);
   81DF 21 C4 05      [10] 5942 	ld	hl, #_g_fx
   81E2 E3            [19] 5943 	ex	(sp),hl
   81E3 CD 48 59      [17] 5944 	call	_cpct_akp_musicInit
   81E6 F1            [10] 5945 	pop	af
                           5946 ;src/main.c:1380: while (!cpct_isAnyKeyPressed());
   81E7                    5947 00104$:
   81E7 CD E5 5B      [17] 5948 	call	_cpct_isAnyKeyPressed
   81EA 7D            [ 4] 5949 	ld	a, l
   81EB B7            [ 4] 5950 	or	a, a
   81EC 28 F9         [12] 5951 	jr	Z,00104$
                           5952 ;src/main.c:1381: Wait4Key(ctlPause);
   81EE 2A 08 5F      [16] 5953 	ld	hl, (_ctlPause)
   81F1 E5            [11] 5954 	push	hl
   81F2 CD 6C 6A      [17] 5955 	call	_Wait4Key
   81F5 F1            [10] 5956 	pop	af
                           5957 ;src/main.c:1382: if (music)
   81F6 3A EB 5E      [13] 5958 	ld	a,(#_music + 0)
   81F9 B7            [ 4] 5959 	or	a, a
   81FA 28 08         [12] 5960 	jr	Z,00129$
                           5961 ;src/main.c:1383: cpct_akp_musicInit(g_ingame); // music ingame
   81FC 01 91 07      [10] 5962 	ld	bc, #_g_ingame
   81FF C5            [11] 5963 	push	bc
   8200 CD 48 59      [17] 5964 	call	_cpct_akp_musicInit
   8203 F1            [10] 5965 	pop	af
   8204                    5966 00129$:
   8204 DD F9         [10] 5967 	ld	sp, ix
   8206 DD E1         [14] 5968 	pop	ix
   8208 C9            [10] 5969 	ret
                           5970 ;src/main.c:1407: void WalkAnim(TSpr *pSpr, u8 dir) {
                           5971 ;	---------------------------------
                           5972 ; Function WalkAnim
                           5973 ; ---------------------------------
   8209                    5974 _WalkAnim::
   8209 DD E5         [15] 5975 	push	ix
   820B DD 21 00 00   [14] 5976 	ld	ix,#0
   820F DD 39         [15] 5977 	add	ix,sp
                           5978 ;src/main.c:1408: u8 animPause = 2;
   8211 0E 02         [ 7] 5979 	ld	c, #0x02
                           5980 ;src/main.c:1409: if (pSpr->num > 3) animPause = 1; // slow enemies (4 and 5) have no pause in animation
   8213 DD 5E 04      [19] 5981 	ld	e,4 (ix)
   8216 DD 56 05      [19] 5982 	ld	d,5 (ix)
   8219 1A            [ 7] 5983 	ld	a, (de)
   821A 47            [ 4] 5984 	ld	b, a
   821B 3E 03         [ 7] 5985 	ld	a, #0x03
   821D 90            [ 4] 5986 	sub	a, b
   821E 30 02         [12] 5987 	jr	NC,00102$
   8220 0E 01         [ 7] 5988 	ld	c, #0x01
   8222                    5989 00102$:
                           5990 ;src/main.c:1410: pSpr->dir = dir;
   8222 21 07 00      [10] 5991 	ld	hl, #0x0007
   8225 19            [11] 5992 	add	hl, de
   8226 DD 7E 06      [19] 5993 	ld	a, 6 (ix)
   8229 77            [ 7] 5994 	ld	(hl), a
                           5995 ;src/main.c:1411: if(++pSpr->nFrm == animPause*2) pSpr->nFrm = 0;
   822A FD 21 0A 00   [14] 5996 	ld	iy, #0x000a
   822E FD 19         [15] 5997 	add	iy, de
   8230 FD 34 00      [23] 5998 	inc	0 (iy)
   8233 FD 5E 00      [19] 5999 	ld	e, 0 (iy)
   8236 06 00         [ 7] 6000 	ld	b, #0x00
   8238 CB 21         [ 8] 6001 	sla	c
   823A CB 10         [ 8] 6002 	rl	b
   823C 16 00         [ 7] 6003 	ld	d, #0x00
   823E 79            [ 4] 6004 	ld	a, c
   823F 93            [ 4] 6005 	sub	a, e
   8240 20 08         [12] 6006 	jr	NZ,00105$
   8242 78            [ 4] 6007 	ld	a, b
   8243 92            [ 4] 6008 	sub	a, d
   8244 20 04         [12] 6009 	jr	NZ,00105$
   8246 FD 36 00 00   [19] 6010 	ld	0 (iy), #0x00
   824A                    6011 00105$:
   824A DD E1         [14] 6012 	pop	ix
   824C C9            [10] 6013 	ret
                           6014 ;src/main.c:1416: void Walk(TSpr *pSpr) __z88dk_fastcall {
                           6015 ;	---------------------------------
                           6016 ; Function Walk
                           6017 ; ---------------------------------
   824D                    6018 _Walk::
   824D DD E5         [15] 6019 	push	ix
   824F DD 21 00 00   [14] 6020 	ld	ix,#0
   8253 DD 39         [15] 6021 	add	ix,sp
   8255 F5            [11] 6022 	push	af
   8256 F5            [11] 6023 	push	af
   8257 DD 75 FE      [19] 6024 	ld	-2 (ix), l
   825A DD 74 FF      [19] 6025 	ld	-1 (ix), h
                           6026 ;src/main.c:1417: cpct_scanKeyboard_f(); // check the pressed keys
   825D CD CD 51      [17] 6027 	call	_cpct_scanKeyboard_f
                           6028 ;src/main.c:1419: if(cpct_isKeyPressed(ctlRight[pSpr->ident])) {	
   8260 11 00 5F      [10] 6029 	ld	de, #_ctlRight+0
   8263 DD 4E FE      [19] 6030 	ld	c,-2 (ix)
   8266 DD 46 FF      [19] 6031 	ld	b,-1 (ix)
   8269 03            [ 6] 6032 	inc	bc
   826A 0A            [ 7] 6033 	ld	a, (bc)
   826B 6F            [ 4] 6034 	ld	l, a
   826C 26 00         [ 7] 6035 	ld	h, #0x00
   826E 29            [11] 6036 	add	hl, hl
   826F 19            [11] 6037 	add	hl, de
   8270 5E            [ 7] 6038 	ld	e, (hl)
   8271 23            [ 6] 6039 	inc	hl
   8272 66            [ 7] 6040 	ld	h, (hl)
   8273 C5            [11] 6041 	push	bc
   8274 6B            [ 4] 6042 	ld	l, e
   8275 CD C1 51      [17] 6043 	call	_cpct_isKeyPressed
   8278 5D            [ 4] 6044 	ld	e, l
   8279 C1            [10] 6045 	pop	bc
   827A 0A            [ 7] 6046 	ld	a, (bc)
   827B 6F            [ 4] 6047 	ld	l, a
                           6048 ;src/main.c:1420: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr);  // diagonal derecha-arriba
   827C 26 00         [ 7] 6049 	ld	h, #0x00
   827E 29            [11] 6050 	add	hl, hl
   827F E3            [19] 6051 	ex	(sp), hl
                           6052 ;src/main.c:1419: if(cpct_isKeyPressed(ctlRight[pSpr->ident])) {	
   8280 7B            [ 4] 6053 	ld	a, e
   8281 B7            [ 4] 6054 	or	a, a
   8282 28 51         [12] 6055 	jr	Z,00121$
                           6056 ;src/main.c:1420: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr);  // diagonal derecha-arriba
   8284 11 F4 5E      [10] 6057 	ld	de, #_ctlUp+0
   8287 E1            [10] 6058 	pop	hl
   8288 E5            [11] 6059 	push	hl
   8289 19            [11] 6060 	add	hl, de
   828A 5E            [ 7] 6061 	ld	e, (hl)
   828B 23            [ 6] 6062 	inc	hl
   828C 66            [ 7] 6063 	ld	h, (hl)
   828D C5            [11] 6064 	push	bc
   828E 6B            [ 4] 6065 	ld	l, e
   828F CD C1 51      [17] 6066 	call	_cpct_isKeyPressed
   8292 C1            [10] 6067 	pop	bc
   8293 7D            [ 4] 6068 	ld	a, l
   8294 B7            [ 4] 6069 	or	a, a
   8295 28 09         [12] 6070 	jr	Z,00104$
   8297 C1            [10] 6071 	pop	bc
   8298 E1            [10] 6072 	pop	hl
   8299 E5            [11] 6073 	push	hl
   829A C5            [11] 6074 	push	bc
   829B CD 50 7E      [17] 6075 	call	_MoveUp
   829E 18 1B         [12] 6076 	jr	00105$
   82A0                    6077 00104$:
                           6078 ;src/main.c:1421: else if(cpct_isKeyPressed(ctlDown[pSpr->ident]))	MoveDown(pSpr); // diagonal derecha-abajo
   82A0 11 F8 5E      [10] 6079 	ld	de, #_ctlDown+0
   82A3 0A            [ 7] 6080 	ld	a, (bc)
   82A4 6F            [ 4] 6081 	ld	l, a
   82A5 26 00         [ 7] 6082 	ld	h, #0x00
   82A7 29            [11] 6083 	add	hl, hl
   82A8 19            [11] 6084 	add	hl, de
   82A9 4E            [ 7] 6085 	ld	c, (hl)
   82AA 23            [ 6] 6086 	inc	hl
   82AB 66            [ 7] 6087 	ld	h, (hl)
   82AC 69            [ 4] 6088 	ld	l, c
   82AD CD C1 51      [17] 6089 	call	_cpct_isKeyPressed
   82B0 7D            [ 4] 6090 	ld	a, l
   82B1 B7            [ 4] 6091 	or	a, a
   82B2 28 07         [12] 6092 	jr	Z,00105$
   82B4 C1            [10] 6093 	pop	bc
   82B5 E1            [10] 6094 	pop	hl
   82B6 E5            [11] 6095 	push	hl
   82B7 C5            [11] 6096 	push	bc
   82B8 CD DD 7E      [17] 6097 	call	_MoveDown
   82BB                    6098 00105$:
                           6099 ;src/main.c:1422: MoveRight(pSpr);
   82BB C1            [10] 6100 	pop	bc
   82BC E1            [10] 6101 	pop	hl
   82BD E5            [11] 6102 	push	hl
   82BE C5            [11] 6103 	push	bc
   82BF CD 07 80      [17] 6104 	call	_MoveRight
                           6105 ;src/main.c:1423: WalkAnim(pSpr, D_right);
   82C2 3E 03         [ 7] 6106 	ld	a, #0x03
   82C4 F5            [11] 6107 	push	af
   82C5 33            [ 6] 6108 	inc	sp
   82C6 DD 6E FE      [19] 6109 	ld	l,-2 (ix)
   82C9 DD 66 FF      [19] 6110 	ld	h,-1 (ix)
   82CC E5            [11] 6111 	push	hl
   82CD CD 09 82      [17] 6112 	call	_WalkAnim
   82D0 F1            [10] 6113 	pop	af
   82D1 33            [ 6] 6114 	inc	sp
   82D2 C3 A5 83      [10] 6115 	jp	00123$
   82D5                    6116 00121$:
                           6117 ;src/main.c:1426: else if(cpct_isKeyPressed(ctlLeft[pSpr->ident])) {	
   82D5 11 FC 5E      [10] 6118 	ld	de, #_ctlLeft+0
   82D8 E1            [10] 6119 	pop	hl
   82D9 E5            [11] 6120 	push	hl
   82DA 19            [11] 6121 	add	hl, de
   82DB 5E            [ 7] 6122 	ld	e, (hl)
   82DC 23            [ 6] 6123 	inc	hl
   82DD 66            [ 7] 6124 	ld	h, (hl)
   82DE C5            [11] 6125 	push	bc
   82DF 6B            [ 4] 6126 	ld	l, e
   82E0 CD C1 51      [17] 6127 	call	_cpct_isKeyPressed
   82E3 5D            [ 4] 6128 	ld	e, l
   82E4 C1            [10] 6129 	pop	bc
                           6130 ;src/main.c:1419: if(cpct_isKeyPressed(ctlRight[pSpr->ident])) {	
   82E5 0A            [ 7] 6131 	ld	a, (bc)
   82E6 6F            [ 4] 6132 	ld	l, a
                           6133 ;src/main.c:1420: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr);  // diagonal derecha-arriba
   82E7 26 00         [ 7] 6134 	ld	h, #0x00
   82E9 29            [11] 6135 	add	hl, hl
   82EA E3            [19] 6136 	ex	(sp), hl
                           6137 ;src/main.c:1426: else if(cpct_isKeyPressed(ctlLeft[pSpr->ident])) {	
   82EB 7B            [ 4] 6138 	ld	a, e
   82EC B7            [ 4] 6139 	or	a, a
   82ED 28 50         [12] 6140 	jr	Z,00118$
                           6141 ;src/main.c:1427: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr); // diagonal izda-arriba
   82EF 11 F4 5E      [10] 6142 	ld	de, #_ctlUp+0
   82F2 E1            [10] 6143 	pop	hl
   82F3 E5            [11] 6144 	push	hl
   82F4 19            [11] 6145 	add	hl, de
   82F5 5E            [ 7] 6146 	ld	e, (hl)
   82F6 23            [ 6] 6147 	inc	hl
   82F7 66            [ 7] 6148 	ld	h, (hl)
   82F8 C5            [11] 6149 	push	bc
   82F9 6B            [ 4] 6150 	ld	l, e
   82FA CD C1 51      [17] 6151 	call	_cpct_isKeyPressed
   82FD C1            [10] 6152 	pop	bc
   82FE 7D            [ 4] 6153 	ld	a, l
   82FF B7            [ 4] 6154 	or	a, a
   8300 28 09         [12] 6155 	jr	Z,00109$
   8302 C1            [10] 6156 	pop	bc
   8303 E1            [10] 6157 	pop	hl
   8304 E5            [11] 6158 	push	hl
   8305 C5            [11] 6159 	push	bc
   8306 CD 50 7E      [17] 6160 	call	_MoveUp
   8309 18 1B         [12] 6161 	jr	00110$
   830B                    6162 00109$:
                           6163 ;src/main.c:1428: else if(cpct_isKeyPressed(ctlDown[pSpr->ident]))	MoveDown(pSpr); // diagonal izda-abajo
   830B 0A            [ 7] 6164 	ld	a, (bc)
   830C 6F            [ 4] 6165 	ld	l, a
   830D 26 00         [ 7] 6166 	ld	h, #0x00
   830F 29            [11] 6167 	add	hl, hl
   8310 11 F8 5E      [10] 6168 	ld	de, #_ctlDown
   8313 19            [11] 6169 	add	hl, de
   8314 4E            [ 7] 6170 	ld	c, (hl)
   8315 23            [ 6] 6171 	inc	hl
   8316 66            [ 7] 6172 	ld	h, (hl)
   8317 69            [ 4] 6173 	ld	l, c
   8318 CD C1 51      [17] 6174 	call	_cpct_isKeyPressed
   831B 7D            [ 4] 6175 	ld	a, l
   831C B7            [ 4] 6176 	or	a, a
   831D 28 07         [12] 6177 	jr	Z,00110$
   831F C1            [10] 6178 	pop	bc
   8320 E1            [10] 6179 	pop	hl
   8321 E5            [11] 6180 	push	hl
   8322 C5            [11] 6181 	push	bc
   8323 CD DD 7E      [17] 6182 	call	_MoveDown
   8326                    6183 00110$:
                           6184 ;src/main.c:1429: MoveLeft(pSpr); 
   8326 C1            [10] 6185 	pop	bc
   8327 E1            [10] 6186 	pop	hl
   8328 E5            [11] 6187 	push	hl
   8329 C5            [11] 6188 	push	bc
   832A CD 7D 7F      [17] 6189 	call	_MoveLeft
                           6190 ;src/main.c:1430: WalkAnim(pSpr, D_left);
   832D 3E 02         [ 7] 6191 	ld	a, #0x02
   832F F5            [11] 6192 	push	af
   8330 33            [ 6] 6193 	inc	sp
   8331 DD 6E FE      [19] 6194 	ld	l,-2 (ix)
   8334 DD 66 FF      [19] 6195 	ld	h,-1 (ix)
   8337 E5            [11] 6196 	push	hl
   8338 CD 09 82      [17] 6197 	call	_WalkAnim
   833B F1            [10] 6198 	pop	af
   833C 33            [ 6] 6199 	inc	sp
   833D 18 66         [12] 6200 	jr	00123$
   833F                    6201 00118$:
                           6202 ;src/main.c:1433: else if(cpct_isKeyPressed(ctlUp[pSpr->ident])) {
   833F 11 F4 5E      [10] 6203 	ld	de, #_ctlUp+0
   8342 E1            [10] 6204 	pop	hl
   8343 E5            [11] 6205 	push	hl
   8344 19            [11] 6206 	add	hl, de
   8345 5E            [ 7] 6207 	ld	e, (hl)
   8346 23            [ 6] 6208 	inc	hl
   8347 66            [ 7] 6209 	ld	h, (hl)
   8348 C5            [11] 6210 	push	bc
   8349 6B            [ 4] 6211 	ld	l, e
   834A CD C1 51      [17] 6212 	call	_cpct_isKeyPressed
   834D C1            [10] 6213 	pop	bc
   834E 7D            [ 4] 6214 	ld	a, l
   834F B7            [ 4] 6215 	or	a, a
   8350 28 18         [12] 6216 	jr	Z,00115$
                           6217 ;src/main.c:1434: MoveUp(pSpr); 
   8352 C1            [10] 6218 	pop	bc
   8353 E1            [10] 6219 	pop	hl
   8354 E5            [11] 6220 	push	hl
   8355 C5            [11] 6221 	push	bc
   8356 CD 50 7E      [17] 6222 	call	_MoveUp
                           6223 ;src/main.c:1435: WalkAnim(pSpr, D_up);
   8359 AF            [ 4] 6224 	xor	a, a
   835A F5            [11] 6225 	push	af
   835B 33            [ 6] 6226 	inc	sp
   835C DD 6E FE      [19] 6227 	ld	l,-2 (ix)
   835F DD 66 FF      [19] 6228 	ld	h,-1 (ix)
   8362 E5            [11] 6229 	push	hl
   8363 CD 09 82      [17] 6230 	call	_WalkAnim
   8366 F1            [10] 6231 	pop	af
   8367 33            [ 6] 6232 	inc	sp
   8368 18 3B         [12] 6233 	jr	00123$
   836A                    6234 00115$:
                           6235 ;src/main.c:1438: else if(cpct_isKeyPressed(ctlDown[pSpr->ident])) {
   836A 0A            [ 7] 6236 	ld	a, (bc)
   836B 6F            [ 4] 6237 	ld	l, a
   836C 26 00         [ 7] 6238 	ld	h, #0x00
   836E 29            [11] 6239 	add	hl, hl
   836F 11 F8 5E      [10] 6240 	ld	de, #_ctlDown
   8372 19            [11] 6241 	add	hl, de
   8373 7E            [ 7] 6242 	ld	a, (hl)
   8374 23            [ 6] 6243 	inc	hl
   8375 66            [ 7] 6244 	ld	h, (hl)
   8376 6F            [ 4] 6245 	ld	l, a
   8377 CD C1 51      [17] 6246 	call	_cpct_isKeyPressed
   837A 7D            [ 4] 6247 	ld	a, l
   837B B7            [ 4] 6248 	or	a, a
   837C 28 19         [12] 6249 	jr	Z,00112$
                           6250 ;src/main.c:1439: MoveDown(pSpr); 
   837E C1            [10] 6251 	pop	bc
   837F E1            [10] 6252 	pop	hl
   8380 E5            [11] 6253 	push	hl
   8381 C5            [11] 6254 	push	bc
   8382 CD DD 7E      [17] 6255 	call	_MoveDown
                           6256 ;src/main.c:1440: WalkAnim(pSpr, D_down);
   8385 3E 01         [ 7] 6257 	ld	a, #0x01
   8387 F5            [11] 6258 	push	af
   8388 33            [ 6] 6259 	inc	sp
   8389 DD 6E FE      [19] 6260 	ld	l,-2 (ix)
   838C DD 66 FF      [19] 6261 	ld	h,-1 (ix)
   838F E5            [11] 6262 	push	hl
   8390 CD 09 82      [17] 6263 	call	_WalkAnim
   8393 F1            [10] 6264 	pop	af
   8394 33            [ 6] 6265 	inc	sp
   8395 18 0E         [12] 6266 	jr	00123$
   8397                    6267 00112$:
                           6268 ;src/main.c:1443: pSpr->status = S_stopped;
   8397 DD 7E FE      [19] 6269 	ld	a, -2 (ix)
   839A C6 06         [ 7] 6270 	add	a, #0x06
   839C 6F            [ 4] 6271 	ld	l, a
   839D DD 7E FF      [19] 6272 	ld	a, -1 (ix)
   83A0 CE 00         [ 7] 6273 	adc	a, #0x00
   83A2 67            [ 4] 6274 	ld	h, a
   83A3 36 04         [10] 6275 	ld	(hl), #0x04
   83A5                    6276 00123$:
   83A5 DD F9         [10] 6277 	ld	sp, ix
   83A7 DD E1         [14] 6278 	pop	ix
   83A9 C9            [10] 6279 	ret
                           6280 ;src/main.c:1448: void RunStatus(TSpr *pSpr) __z88dk_fastcall {
                           6281 ;	---------------------------------
                           6282 ; Function RunStatus
                           6283 ; ---------------------------------
   83AA                    6284 _RunStatus::
   83AA 4D            [ 4] 6285 	ld	c, l
   83AB 44            [ 4] 6286 	ld	b, h
                           6287 ;src/main.c:1449: if (pSpr->status == S_stopped)
   83AC C5            [11] 6288 	push	bc
   83AD FD E1         [14] 6289 	pop	iy
   83AF FD 7E 06      [19] 6290 	ld	a, 6 (iy)
   83B2 D6 04         [ 7] 6291 	sub	a, #0x04
   83B4 20 05         [12] 6292 	jr	NZ,00102$
                           6293 ;src/main.c:1450: Stop(pSpr);
   83B6 69            [ 4] 6294 	ld	l, c
   83B7 60            [ 4] 6295 	ld	h, b
   83B8 C3 B5 80      [10] 6296 	jp  _Stop
   83BB                    6297 00102$:
                           6298 ;src/main.c:1452: Walk(pSpr);	
   83BB 69            [ 4] 6299 	ld	l, c
   83BC 60            [ 4] 6300 	ld	h, b
   83BD C3 4D 82      [10] 6301 	jp  _Walk
                           6302 ;src/main.c:1457: void PlayerLoop(TSpr *pSpr) __z88dk_fastcall {
                           6303 ;	---------------------------------
                           6304 ; Function PlayerLoop
                           6305 ; ---------------------------------
   83C0                    6306 _PlayerLoop::
   83C0 DD E5         [15] 6307 	push	ix
   83C2 DD 21 00 00   [14] 6308 	ld	ix,#0
   83C6 DD 39         [15] 6309 	add	ix,sp
   83C8 F5            [11] 6310 	push	af
   83C9 4D            [ 4] 6311 	ld	c, l
   83CA 44            [ 4] 6312 	ld	b, h
                           6313 ;src/main.c:1458: RunStatus(pSpr); // calls the appropriate function based on the status of the main sprites
   83CB C5            [11] 6314 	push	bc
   83CC 69            [ 4] 6315 	ld	l, c
   83CD 60            [ 4] 6316 	ld	h, b
   83CE CD AA 83      [17] 6317 	call	_RunStatus
   83D1 C1            [10] 6318 	pop	bc
                           6319 ;src/main.c:1459: if (pSpr->print_minV) { // does the sprite have to be reprinted?
   83D2 21 0D 00      [10] 6320 	ld	hl, #0x000d
   83D5 09            [11] 6321 	add	hl,bc
   83D6 E3            [19] 6322 	ex	(sp), hl
   83D7 E1            [10] 6323 	pop	hl
   83D8 E5            [11] 6324 	push	hl
   83D9 7E            [ 7] 6325 	ld	a, (hl)
   83DA B7            [ 4] 6326 	or	a, a
   83DB 28 46         [12] 6327 	jr	Z,00106$
                           6328 ;src/main.c:1460: SelectFrame(pSpr); // we assign the next frame of the animation to the sprite
   83DD C5            [11] 6329 	push	bc
   83DE 69            [ 4] 6330 	ld	l, c
   83DF 60            [ 4] 6331 	ld	h, b
   83E0 CD E7 79      [17] 6332 	call	_SelectFrame
   83E3 C1            [10] 6333 	pop	bc
                           6334 ;src/main.c:1461: DeleteSprite(pSpr); // delete the sprite
   83E4 C5            [11] 6335 	push	bc
   83E5 69            [ 4] 6336 	ld	l, c
   83E6 60            [ 4] 6337 	ld	h, b
   83E7 CD 32 79      [17] 6338 	call	_DeleteSprite
   83EA C1            [10] 6339 	pop	bc
                           6340 ;src/main.c:1462: pSpr->px = pSpr->x; // save the current X coordinate
   83EB 21 04 00      [10] 6341 	ld	hl, #0x0004
   83EE 09            [11] 6342 	add	hl,bc
   83EF EB            [ 4] 6343 	ex	de,hl
   83F0 69            [ 4] 6344 	ld	l, c
   83F1 60            [ 4] 6345 	ld	h, b
   83F2 23            [ 6] 6346 	inc	hl
   83F3 23            [ 6] 6347 	inc	hl
   83F4 7E            [ 7] 6348 	ld	a, (hl)
   83F5 12            [ 7] 6349 	ld	(de), a
                           6350 ;src/main.c:1463: pSpr->py = pSpr->y; // save the current Y coordinate
   83F6 21 05 00      [10] 6351 	ld	hl, #0x0005
   83F9 09            [11] 6352 	add	hl,bc
   83FA EB            [ 4] 6353 	ex	de,hl
   83FB 69            [ 4] 6354 	ld	l, c
   83FC 60            [ 4] 6355 	ld	h, b
   83FD 23            [ 6] 6356 	inc	hl
   83FE 23            [ 6] 6357 	inc	hl
   83FF 23            [ 6] 6358 	inc	hl
   8400 7E            [ 7] 6359 	ld	a, (hl)
   8401 12            [ 7] 6360 	ld	(de), a
                           6361 ;src/main.c:1464: PrintSprite(pSpr); // paint the sprite in the new XY position
   8402 C5            [11] 6362 	push	bc
   8403 69            [ 4] 6363 	ld	l, c
   8404 60            [ 4] 6364 	ld	h, b
   8405 CD 03 79      [17] 6365 	call	_PrintSprite
   8408 C1            [10] 6366 	pop	bc
                           6367 ;src/main.c:1465: ctInactivity[pSpr->num] = 0; // on the move
   8409 11 ED 5E      [10] 6368 	ld	de, #_ctInactivity+0
   840C 0A            [ 7] 6369 	ld	a, (bc)
   840D 6F            [ 4] 6370 	ld	l, a
   840E 26 00         [ 7] 6371 	ld	h,#0x00
   8410 19            [11] 6372 	add	hl, de
   8411 36 00         [10] 6373 	ld	(hl), #0x00
                           6374 ;src/main.c:1466: if (pSpr->status == S_stopped) 
   8413 C5            [11] 6375 	push	bc
   8414 FD E1         [14] 6376 	pop	iy
   8416 FD 7E 06      [19] 6377 	ld	a, 6 (iy)
   8419 D6 04         [ 7] 6378 	sub	a, #0x04
   841B 20 1E         [12] 6379 	jr	NZ,00108$
                           6380 ;src/main.c:1467: pSpr->print_minV = FALSE; // if it is stopped it is no longer necessary to continue printing the sprite
   841D E1            [10] 6381 	pop	hl
   841E E5            [11] 6382 	push	hl
   841F 36 00         [10] 6383 	ld	(hl), #0x00
   8421 18 18         [12] 6384 	jr	00108$
   8423                    6385 00106$:
                           6386 ;src/main.c:1470: else if (ctMainLoop % 5 == 0)
   8423 C5            [11] 6387 	push	bc
   8424 21 05 00      [10] 6388 	ld	hl, #0x0005
   8427 E5            [11] 6389 	push	hl
   8428 2A F2 5E      [16] 6390 	ld	hl, (_ctMainLoop)
   842B E5            [11] 6391 	push	hl
   842C CD C2 5D      [17] 6392 	call	__modsint
   842F F1            [10] 6393 	pop	af
   8430 F1            [10] 6394 	pop	af
   8431 C1            [10] 6395 	pop	bc
   8432 7C            [ 4] 6396 	ld	a, h
   8433 B5            [ 4] 6397 	or	a,l
   8434 20 05         [12] 6398 	jr	NZ,00108$
                           6399 ;src/main.c:1471: PrintSprite(pSpr);
   8436 69            [ 4] 6400 	ld	l, c
   8437 60            [ 4] 6401 	ld	h, b
   8438 CD 03 79      [17] 6402 	call	_PrintSprite
   843B                    6403 00108$:
   843B DD F9         [10] 6404 	ld	sp, ix
   843D DD E1         [14] 6405 	pop	ix
   843F C9            [10] 6406 	ret
                           6407 ;src/main.c:1488: void ExplodePlayerInDuel(u8 player) __z88dk_fastcall {
                           6408 ;	---------------------------------
                           6409 ; Function ExplodePlayerInDuel
                           6410 ; ---------------------------------
   8440                    6411 _ExplodePlayerInDuel::
   8440 DD E5         [15] 6412 	push	ix
   8442 DD 21 00 00   [14] 6413 	ld	ix,#0
   8446 DD 39         [15] 6414 	add	ix,sp
   8448 3B            [ 6] 6415 	dec	sp
   8449 DD 75 FF      [19] 6416 	ld	-1 (ix), l
                           6417 ;src/main.c:1489: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, spr[player].x, 122), cpct_px2byteM0(4, 4), SPR_W, SPR_H);
   844C 21 04 04      [10] 6418 	ld	hl, #0x0404
   844F E5            [11] 6419 	push	hl
   8450 CD B3 5C      [17] 6420 	call	_cpct_px2byteM0
   8453 4D            [ 4] 6421 	ld	c, l
   8454 06 00         [ 7] 6422 	ld	b, #0x00
   8456 DD 5E FF      [19] 6423 	ld	e,-1 (ix)
   8459 16 00         [ 7] 6424 	ld	d,#0x00
   845B 6B            [ 4] 6425 	ld	l, e
   845C 62            [ 4] 6426 	ld	h, d
   845D 29            [11] 6427 	add	hl, hl
   845E 19            [11] 6428 	add	hl, de
   845F 29            [11] 6429 	add	hl, hl
   8460 19            [11] 6430 	add	hl, de
   8461 29            [11] 6431 	add	hl, hl
   8462 19            [11] 6432 	add	hl, de
   8463 11 0A 5F      [10] 6433 	ld	de, #_spr
   8466 19            [11] 6434 	add	hl, de
   8467 23            [ 6] 6435 	inc	hl
   8468 23            [ 6] 6436 	inc	hl
   8469 7E            [ 7] 6437 	ld	a, (hl)
   846A C6 B0         [ 7] 6438 	add	a, #0xb0
   846C 5F            [ 4] 6439 	ld	e, a
   846D 3E 00         [ 7] 6440 	ld	a, #0x00
   846F CE D4         [ 7] 6441 	adc	a, #0xd4
   8471 57            [ 4] 6442 	ld	d, a
   8472 D5            [11] 6443 	push	de
   8473 FD E1         [14] 6444 	pop	iy
   8475 E5            [11] 6445 	push	hl
   8476 11 05 0C      [10] 6446 	ld	de, #0x0c05
   8479 D5            [11] 6447 	push	de
   847A C5            [11] 6448 	push	bc
   847B FD E5         [15] 6449 	push	iy
   847D CD ED 5C      [17] 6450 	call	_cpct_drawSolidBox
   8480 AF            [ 4] 6451 	xor	a, a
   8481 F5            [11] 6452 	push	af
   8482 33            [ 6] 6453 	inc	sp
   8483 DD 7E FF      [19] 6454 	ld	a, -1 (ix)
   8486 F5            [11] 6455 	push	af
   8487 33            [ 6] 6456 	inc	sp
   8488 CD A3 7C      [17] 6457 	call	_ExplodeSprite
   848B F1            [10] 6458 	pop	af
   848C 01 04 04      [10] 6459 	ld	bc, #0x0404
   848F C5            [11] 6460 	push	bc
   8490 CD B3 5C      [17] 6461 	call	_cpct_px2byteM0
   8493 4D            [ 4] 6462 	ld	c, l
   8494 E1            [10] 6463 	pop	hl
   8495 06 00         [ 7] 6464 	ld	b, #0x00
   8497 5E            [ 7] 6465 	ld	e, (hl)
   8498 21 B0 D4      [10] 6466 	ld	hl, #0xd4b0
   849B 16 00         [ 7] 6467 	ld	d, #0x00
   849D 19            [11] 6468 	add	hl, de
   849E 11 05 0C      [10] 6469 	ld	de, #0x0c05
   84A1 D5            [11] 6470 	push	de
   84A2 C5            [11] 6471 	push	bc
   84A3 E5            [11] 6472 	push	hl
   84A4 CD ED 5C      [17] 6473 	call	_cpct_drawSolidBox
   84A7 33            [ 6] 6474 	inc	sp
   84A8 DD E1         [14] 6475 	pop	ix
   84AA C9            [10] 6476 	ret
                           6477 ;src/main.c:1496: void MakeDuel() {
                           6478 ;	---------------------------------
                           6479 ; Function MakeDuel
                           6480 ; ---------------------------------
   84AB                    6481 _MakeDuel::
   84AB DD E5         [15] 6482 	push	ix
   84AD DD 21 00 00   [14] 6483 	ld	ix,#0
   84B1 DD 39         [15] 6484 	add	ix,sp
   84B3 F5            [11] 6485 	push	af
   84B4 3B            [ 6] 6486 	dec	sp
                           6487 ;src/main.c:1499: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 18, 80), cpct_px2byteM0(4, 4), 45, 60);
   84B5 21 04 04      [10] 6488 	ld	hl, #0x0404
   84B8 E5            [11] 6489 	push	hl
   84B9 CD B3 5C      [17] 6490 	call	_cpct_px2byteM0
   84BC 26 00         [ 7] 6491 	ld	h, #0x00
   84BE 01 2D 3C      [10] 6492 	ld	bc, #0x3c2d
   84C1 C5            [11] 6493 	push	bc
   84C2 E5            [11] 6494 	push	hl
   84C3 21 32 C3      [10] 6495 	ld	hl, #0xc332
   84C6 E5            [11] 6496 	push	hl
   84C7 CD ED 5C      [17] 6497 	call	_cpct_drawSolidBox
                           6498 ;src/main.c:1500: PrintFrame(18,80,60,134);
   84CA 21 3C 86      [10] 6499 	ld	hl, #0x863c
   84CD E5            [11] 6500 	push	hl
   84CE 21 12 50      [10] 6501 	ld	hl, #0x5012
   84D1 E5            [11] 6502 	push	hl
   84D2 CD B3 63      [17] 6503 	call	_PrintFrame
   84D5 F1            [10] 6504 	pop	af
   84D6 F1            [10] 6505 	pop	af
                           6506 ;src/main.c:1502: spr[0].x = 23; spr[0].y = 122;
   84D7 21 0C 5F      [10] 6507 	ld	hl, #(_spr + 0x0002)
   84DA 36 17         [10] 6508 	ld	(hl), #0x17
   84DC 21 0D 5F      [10] 6509 	ld	hl, #(_spr + 0x0003)
   84DF 36 7A         [10] 6510 	ld	(hl), #0x7a
                           6511 ;src/main.c:1504: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   84E1 21 0D 5F      [10] 6512 	ld	hl, #(_spr + 0x0003) + 0
   84E4 56            [ 7] 6513 	ld	d, (hl)
   84E5 21 0C 5F      [10] 6514 	ld	hl, #(_spr + 0x0002) + 0
   84E8 5E            [ 7] 6515 	ld	e, (hl)
   84E9 D5            [11] 6516 	push	de
   84EA 21 00 C0      [10] 6517 	ld	hl, #0xc000
   84ED E5            [11] 6518 	push	hl
   84EE CD CF 5D      [17] 6519 	call	_cpct_getScreenPtr
   84F1 4D            [ 4] 6520 	ld	c, l
   84F2 44            [ 4] 6521 	ld	b, h
                           6522 ;src/main.c:1503: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06,
   84F3 21 00 01      [10] 6523 	ld	hl, #_g_maskTable
   84F6 E5            [11] 6524 	push	hl
   84F7 21 05 0C      [10] 6525 	ld	hl, #0x0c05
   84FA E5            [11] 6526 	push	hl
   84FB C5            [11] 6527 	push	bc
   84FC 21 D7 2D      [10] 6528 	ld	hl, #_g_sorcerer1_06
   84FF E5            [11] 6529 	push	hl
   8500 CD E5 5D      [17] 6530 	call	_cpct_drawSpriteMaskedAlignedTable
                           6531 ;src/main.c:1506: spr[1].x = 53; spr[1].y = 122;
   8503 21 1B 5F      [10] 6532 	ld	hl, #(_spr + 0x0011)
   8506 36 35         [10] 6533 	ld	(hl), #0x35
   8508 21 1C 5F      [10] 6534 	ld	hl, #(_spr + 0x0012)
   850B 36 7A         [10] 6535 	ld	(hl), #0x7a
                           6536 ;src/main.c:1509: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   850D 3A 1C 5F      [13] 6537 	ld	a,(#(_spr + 0x0012) + 0)
   8510 DD 77 FF      [19] 6538 	ld	-1 (ix), a
   8513 3A 1B 5F      [13] 6539 	ld	a,(#(_spr + 0x0011) + 0)
   8516 DD 77 FE      [19] 6540 	ld	-2 (ix), a
                           6541 ;src/main.c:1507: if (TwoPlayers) {
   8519 3A D4 5E      [13] 6542 	ld	a,(#_TwoPlayers + 0)
   851C B7            [ 4] 6543 	or	a, a
   851D 28 20         [12] 6544 	jr	Z,00102$
                           6545 ;src/main.c:1509: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   851F DD 66 FF      [19] 6546 	ld	h, -1 (ix)
   8522 DD 6E FE      [19] 6547 	ld	l, -2 (ix)
   8525 E5            [11] 6548 	push	hl
   8526 21 00 C0      [10] 6549 	ld	hl, #0xc000
   8529 E5            [11] 6550 	push	hl
   852A CD CF 5D      [17] 6551 	call	_cpct_getScreenPtr
                           6552 ;src/main.c:1508: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_04, 
   852D 01 07 2B      [10] 6553 	ld	bc, #_g_sorcerer2_04+0
   8530 11 00 01      [10] 6554 	ld	de, #_g_maskTable
   8533 D5            [11] 6555 	push	de
   8534 11 05 0C      [10] 6556 	ld	de, #0x0c05
   8537 D5            [11] 6557 	push	de
   8538 E5            [11] 6558 	push	hl
   8539 C5            [11] 6559 	push	bc
   853A CD E5 5D      [17] 6560 	call	_cpct_drawSpriteMaskedAlignedTable
   853D 18 1E         [12] 6561 	jr	00103$
   853F                    6562 00102$:
                           6563 ;src/main.c:1514: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   853F DD 66 FF      [19] 6564 	ld	h, -1 (ix)
   8542 DD 6E FE      [19] 6565 	ld	l, -2 (ix)
   8545 E5            [11] 6566 	push	hl
   8546 21 00 C0      [10] 6567 	ld	hl, #0xc000
   8549 E5            [11] 6568 	push	hl
   854A CD CF 5D      [17] 6569 	call	_cpct_getScreenPtr
                           6570 ;src/main.c:1513: cpct_drawSpriteMaskedAlignedTable(g_door_0, 
   854D 01 87 23      [10] 6571 	ld	bc, #_g_door_0+0
   8550 11 00 01      [10] 6572 	ld	de, #_g_maskTable
   8553 D5            [11] 6573 	push	de
   8554 11 05 0C      [10] 6574 	ld	de, #0x0c05
   8557 D5            [11] 6575 	push	de
   8558 E5            [11] 6576 	push	hl
   8559 C5            [11] 6577 	push	bc
   855A CD E5 5D      [17] 6578 	call	_cpct_drawSpriteMaskedAlignedTable
   855D                    6579 00103$:
                           6580 ;src/main.c:1516: Pause(400);
   855D 21 90 01      [10] 6581 	ld	hl, #0x0190
   8560 CD 81 61      [17] 6582 	call	_Pause
                           6583 ;src/main.c:1520: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   8563 21 0D 5F      [10] 6584 	ld	hl, #(_spr + 0x0003) + 0
   8566 56            [ 7] 6585 	ld	d, (hl)
   8567 21 0C 5F      [10] 6586 	ld	hl, #(_spr + 0x0002) + 0
   856A 5E            [ 7] 6587 	ld	e, (hl)
   856B D5            [11] 6588 	push	de
   856C 21 00 C0      [10] 6589 	ld	hl, #0xc000
   856F E5            [11] 6590 	push	hl
   8570 CD CF 5D      [17] 6591 	call	_cpct_getScreenPtr
                           6592 ;src/main.c:1519: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_08, 
   8573 01 4F 2E      [10] 6593 	ld	bc, #_g_sorcerer1_08+0
   8576 11 00 01      [10] 6594 	ld	de, #_g_maskTable
   8579 D5            [11] 6595 	push	de
   857A 11 05 0C      [10] 6596 	ld	de, #0x0c05
   857D D5            [11] 6597 	push	de
   857E E5            [11] 6598 	push	hl
   857F C5            [11] 6599 	push	bc
   8580 CD E5 5D      [17] 6600 	call	_cpct_drawSpriteMaskedAlignedTable
                           6601 ;src/main.c:1521: spr[0].x += OBJ_W;
   8583 3A 0C 5F      [13] 6602 	ld	a, (#(_spr + 0x0002) + 0)
   8586 C6 04         [ 7] 6603 	add	a, #0x04
   8588 32 0C 5F      [13] 6604 	ld	(#(_spr + 0x0002)),a
                           6605 ;src/main.c:1522: if (TwoPlayers) {
   858B 3A D4 5E      [13] 6606 	ld	a,(#_TwoPlayers + 0)
   858E B7            [ 4] 6607 	or	a, a
   858F 28 28         [12] 6608 	jr	Z,00105$
                           6609 ;src/main.c:1524: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   8591 21 1C 5F      [10] 6610 	ld	hl, #(_spr + 0x0012) + 0
   8594 56            [ 7] 6611 	ld	d, (hl)
   8595 21 1B 5F      [10] 6612 	ld	hl, #(_spr + 0x0011) + 0
   8598 5E            [ 7] 6613 	ld	e, (hl)
   8599 D5            [11] 6614 	push	de
   859A 21 00 C0      [10] 6615 	ld	hl, #0xc000
   859D E5            [11] 6616 	push	hl
   859E CD CF 5D      [17] 6617 	call	_cpct_getScreenPtr
                           6618 ;src/main.c:1523: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_08, 
   85A1 01 F7 2B      [10] 6619 	ld	bc, #_g_sorcerer2_08+0
   85A4 11 00 01      [10] 6620 	ld	de, #_g_maskTable
   85A7 D5            [11] 6621 	push	de
   85A8 11 05 0C      [10] 6622 	ld	de, #0x0c05
   85AB D5            [11] 6623 	push	de
   85AC E5            [11] 6624 	push	hl
   85AD C5            [11] 6625 	push	bc
   85AE CD E5 5D      [17] 6626 	call	_cpct_drawSpriteMaskedAlignedTable
                           6627 ;src/main.c:1525: spr[1].x -= OBJ_W;
   85B1 3A 1B 5F      [13] 6628 	ld	a, (#(_spr + 0x0011) + 0)
   85B4 C6 FC         [ 7] 6629 	add	a, #0xfc
   85B6 32 1B 5F      [13] 6630 	ld	(#(_spr + 0x0011)),a
   85B9                    6631 00105$:
                           6632 ;src/main.c:1527: cpct_akp_SFXPlay (5, 12, 60, 0, 0, AY_CHANNEL_B); // shot sound
   85B9 3E 02         [ 7] 6633 	ld	a, #0x02
   85BB F5            [11] 6634 	push	af
   85BC 33            [ 6] 6635 	inc	sp
   85BD 21 00 00      [10] 6636 	ld	hl, #0x0000
   85C0 E5            [11] 6637 	push	hl
   85C1 2E 3C         [ 7] 6638 	ld	l, #0x3c
   85C3 E5            [11] 6639 	push	hl
   85C4 21 05 0C      [10] 6640 	ld	hl, #0x0c05
   85C7 E5            [11] 6641 	push	hl
   85C8 CD EF 59      [17] 6642 	call	_cpct_akp_SFXPlay
   85CB 21 07 00      [10] 6643 	ld	hl, #7
   85CE 39            [11] 6644 	add	hl, sp
   85CF F9            [ 6] 6645 	ld	sp, hl
                           6646 ;src/main.c:1530: while (spr[0].x < 50)
   85D0                    6647 00110$:
                           6648 ;src/main.c:1504: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   85D0 21 0C 5F      [10] 6649 	ld	hl, #(_spr + 0x0002) + 0
   85D3 4E            [ 7] 6650 	ld	c, (hl)
                           6651 ;src/main.c:1530: while (spr[0].x < 50)
   85D4 79            [ 4] 6652 	ld	a, c
   85D5 D6 32         [ 7] 6653 	sub	a, #0x32
   85D7 D2 73 86      [10] 6654 	jp	NC, 00112$
                           6655 ;src/main.c:1533: spr[0].x ++;
   85DA 41            [ 4] 6656 	ld	b, c
   85DB 04            [ 4] 6657 	inc	b
   85DC 21 0C 5F      [10] 6658 	ld	hl, #(_spr + 0x0002)
   85DF 70            [ 7] 6659 	ld	(hl), b
                           6660 ;src/main.c:1535: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, 125), SHT_W, SHT_H, g_maskTable);
   85E0 3E 7D         [ 7] 6661 	ld	a, #0x7d
   85E2 F5            [11] 6662 	push	af
   85E3 33            [ 6] 6663 	inc	sp
   85E4 C5            [11] 6664 	push	bc
   85E5 33            [ 6] 6665 	inc	sp
   85E6 21 00 C0      [10] 6666 	ld	hl, #0xc000
   85E9 E5            [11] 6667 	push	hl
   85EA CD CF 5D      [17] 6668 	call	_cpct_getScreenPtr
                           6669 ;src/main.c:1534: cpct_drawSpriteMaskedAlignedTable(g_magic_0, 
   85ED 01 00 01      [10] 6670 	ld	bc, #_g_maskTable
   85F0 C5            [11] 6671 	push	bc
   85F1 01 04 08      [10] 6672 	ld	bc, #0x0804
   85F4 C5            [11] 6673 	push	bc
   85F5 E5            [11] 6674 	push	hl
   85F6 21 01 16      [10] 6675 	ld	hl, #_g_magic_0
   85F9 E5            [11] 6676 	push	hl
   85FA CD E5 5D      [17] 6677 	call	_cpct_drawSpriteMaskedAlignedTable
                           6678 ;src/main.c:1536: if (TwoPlayers) {
   85FD 3A D4 5E      [13] 6679 	ld	a,(#_TwoPlayers + 0)
   8600 B7            [ 4] 6680 	or	a, a
   8601 28 26         [12] 6681 	jr	Z,00107$
                           6682 ;src/main.c:1537: spr[1].x --;
   8603 21 1B 5F      [10] 6683 	ld	hl, #(_spr + 0x0011) + 0
   8606 46            [ 7] 6684 	ld	b, (hl)
   8607 05            [ 4] 6685 	dec	b
   8608 21 1B 5F      [10] 6686 	ld	hl, #(_spr + 0x0011)
   860B 70            [ 7] 6687 	ld	(hl), b
                           6688 ;src/main.c:1539: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, 125), SHT_W, SHT_H, g_maskTable);
   860C 3E 7D         [ 7] 6689 	ld	a, #0x7d
   860E F5            [11] 6690 	push	af
   860F 33            [ 6] 6691 	inc	sp
   8610 C5            [11] 6692 	push	bc
   8611 33            [ 6] 6693 	inc	sp
   8612 21 00 C0      [10] 6694 	ld	hl, #0xc000
   8615 E5            [11] 6695 	push	hl
   8616 CD CF 5D      [17] 6696 	call	_cpct_getScreenPtr
                           6697 ;src/main.c:1538: cpct_drawSpriteMaskedAlignedTable(g_magic_1, 
   8619 01 00 01      [10] 6698 	ld	bc, #_g_maskTable
   861C C5            [11] 6699 	push	bc
   861D 01 04 08      [10] 6700 	ld	bc, #0x0804
   8620 C5            [11] 6701 	push	bc
   8621 E5            [11] 6702 	push	hl
   8622 21 21 16      [10] 6703 	ld	hl, #_g_magic_1
   8625 E5            [11] 6704 	push	hl
   8626 CD E5 5D      [17] 6705 	call	_cpct_drawSpriteMaskedAlignedTable
   8629                    6706 00107$:
                           6707 ;src/main.c:1541: Pause(12);
   8629 21 0C 00      [10] 6708 	ld	hl, #0x000c
   862C CD 81 61      [17] 6709 	call	_Pause
                           6710 ;src/main.c:1544: cpct_px2byteM0(4, 4), OBJ_W, OBJ_H);
   862F 21 04 04      [10] 6711 	ld	hl, #0x0404
   8632 E5            [11] 6712 	push	hl
   8633 CD B3 5C      [17] 6713 	call	_cpct_px2byteM0
   8636 4D            [ 4] 6714 	ld	c, l
   8637 06 00         [ 7] 6715 	ld	b, #0x00
                           6716 ;src/main.c:1543: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, spr[0].x, 125), 
   8639 21 0C 5F      [10] 6717 	ld	hl, #(_spr + 0x0002) + 0
   863C 5E            [ 7] 6718 	ld	e, (hl)
   863D 21 B0 EC      [10] 6719 	ld	hl, #0xecb0
   8640 16 00         [ 7] 6720 	ld	d, #0x00
   8642 19            [11] 6721 	add	hl, de
   8643 11 04 08      [10] 6722 	ld	de, #0x0804
   8646 D5            [11] 6723 	push	de
   8647 C5            [11] 6724 	push	bc
   8648 E5            [11] 6725 	push	hl
   8649 CD ED 5C      [17] 6726 	call	_cpct_drawSolidBox
                           6727 ;src/main.c:1545: if (TwoPlayers)
   864C 3A D4 5E      [13] 6728 	ld	a,(#_TwoPlayers + 0)
   864F B7            [ 4] 6729 	or	a, a
   8650 CA D0 85      [10] 6730 	jp	Z, 00110$
                           6731 ;src/main.c:1547: cpct_px2byteM0(4, 4), OBJ_W, OBJ_H);
   8653 21 04 04      [10] 6732 	ld	hl, #0x0404
   8656 E5            [11] 6733 	push	hl
   8657 CD B3 5C      [17] 6734 	call	_cpct_px2byteM0
   865A 4D            [ 4] 6735 	ld	c, l
   865B 06 00         [ 7] 6736 	ld	b, #0x00
                           6737 ;src/main.c:1546: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, spr[1].x, 125), 
   865D 21 1B 5F      [10] 6738 	ld	hl, #(_spr + 0x0011) + 0
   8660 5E            [ 7] 6739 	ld	e, (hl)
   8661 21 B0 EC      [10] 6740 	ld	hl, #0xecb0
   8664 16 00         [ 7] 6741 	ld	d, #0x00
   8666 19            [11] 6742 	add	hl, de
   8667 11 04 08      [10] 6743 	ld	de, #0x0804
   866A D5            [11] 6744 	push	de
   866B C5            [11] 6745 	push	bc
   866C E5            [11] 6746 	push	hl
   866D CD ED 5C      [17] 6747 	call	_cpct_drawSolidBox
   8670 C3 D0 85      [10] 6748 	jp	00110$
   8673                    6749 00112$:
                           6750 ;src/main.c:1551: spr[0].x = 23;
   8673 21 0C 5F      [10] 6751 	ld	hl, #(_spr + 0x0002)
   8676 36 17         [10] 6752 	ld	(hl), #0x17
                           6753 ;src/main.c:1553: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   8678 21 0D 5F      [10] 6754 	ld	hl, #(_spr + 0x0003) + 0
   867B 46            [ 7] 6755 	ld	b, (hl)
   867C 21 0C 5F      [10] 6756 	ld	hl, #(_spr + 0x0002) + 0
   867F 4E            [ 7] 6757 	ld	c, (hl)
   8680 C5            [11] 6758 	push	bc
   8681 21 00 C0      [10] 6759 	ld	hl, #0xc000
   8684 E5            [11] 6760 	push	hl
   8685 CD CF 5D      [17] 6761 	call	_cpct_getScreenPtr
                           6762 ;src/main.c:1552: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06, 
   8688 01 00 01      [10] 6763 	ld	bc, #_g_maskTable
   868B C5            [11] 6764 	push	bc
   868C 01 05 0C      [10] 6765 	ld	bc, #0x0c05
   868F C5            [11] 6766 	push	bc
   8690 E5            [11] 6767 	push	hl
   8691 21 D7 2D      [10] 6768 	ld	hl, #_g_sorcerer1_06
   8694 E5            [11] 6769 	push	hl
   8695 CD E5 5D      [17] 6770 	call	_cpct_drawSpriteMaskedAlignedTable
                           6771 ;src/main.c:1554: spr[1].x = 53;
   8698 21 1B 5F      [10] 6772 	ld	hl, #(_spr + 0x0011)
   869B 36 35         [10] 6773 	ld	(hl), #0x35
                           6774 ;src/main.c:1556: if (TwoPlayers) {
   869D 3A D4 5E      [13] 6775 	ld	a,(#_TwoPlayers + 0)
   86A0 B7            [ 4] 6776 	or	a, a
   86A1 28 20         [12] 6777 	jr	Z,00114$
                           6778 ;src/main.c:1558: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   86A3 21 1C 5F      [10] 6779 	ld	hl, #(_spr + 0x0012) + 0
   86A6 46            [ 7] 6780 	ld	b, (hl)
   86A7 21 1B 5F      [10] 6781 	ld	hl, #(_spr + 0x0011) + 0
   86AA 4E            [ 7] 6782 	ld	c, (hl)
   86AB C5            [11] 6783 	push	bc
   86AC 21 00 C0      [10] 6784 	ld	hl, #0xc000
   86AF E5            [11] 6785 	push	hl
   86B0 CD CF 5D      [17] 6786 	call	_cpct_getScreenPtr
                           6787 ;src/main.c:1557: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_04, 
   86B3 01 07 2B      [10] 6788 	ld	bc, #_g_sorcerer2_04+0
   86B6 11 00 01      [10] 6789 	ld	de, #_g_maskTable
   86B9 D5            [11] 6790 	push	de
   86BA 11 05 0C      [10] 6791 	ld	de, #0x0c05
   86BD D5            [11] 6792 	push	de
   86BE E5            [11] 6793 	push	hl
   86BF C5            [11] 6794 	push	bc
   86C0 CD E5 5D      [17] 6795 	call	_cpct_drawSpriteMaskedAlignedTable
   86C3                    6796 00114$:
                           6797 ;src/main.c:1562: if (potScore[0] > potScore[1]) {
   86C3 21 DB 5E      [10] 6798 	ld	hl, #_potScore+0
   86C6 4E            [ 7] 6799 	ld	c, (hl)
   86C7 23            [ 6] 6800 	inc	hl
   86C8 5E            [ 7] 6801 	ld	e, (hl)
   86C9 7B            [ 4] 6802 	ld	a, e
   86CA 91            [ 4] 6803 	sub	a, c
   86CB D2 4B 87      [10] 6804 	jp	NC, 00126$
                           6805 ;src/main.c:1563: loser = 1;
   86CE DD 36 FD 01   [19] 6806 	ld	-3 (ix), #0x01
                           6807 ;src/main.c:1564: ExplodePlayerInDuel(loser);
   86D2 2E 01         [ 7] 6808 	ld	l, #0x01
   86D4 CD 40 84      [17] 6809 	call	_ExplodePlayerInDuel
                           6810 ;src/main.c:1509: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   86D7 21 1C 5F      [10] 6811 	ld	hl, #(_spr + 0x0012) + 0
   86DA 4E            [ 7] 6812 	ld	c, (hl)
   86DB 21 1B 5F      [10] 6813 	ld	hl, #(_spr + 0x0011) + 0
   86DE 5E            [ 7] 6814 	ld	e, (hl)
                           6815 ;src/main.c:1565: if (TwoPlayers) {
   86DF 3A D4 5E      [13] 6816 	ld	a,(#_TwoPlayers + 0)
   86E2 B7            [ 4] 6817 	or	a, a
   86E3 28 39         [12] 6818 	jr	Z,00118$
                           6819 ;src/main.c:1568: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   86E5 51            [ 4] 6820 	ld	d, c
   86E6 D5            [11] 6821 	push	de
   86E7 21 00 C0      [10] 6822 	ld	hl, #0xc000
   86EA E5            [11] 6823 	push	hl
   86EB CD CF 5D      [17] 6824 	call	_cpct_getScreenPtr
                           6825 ;src/main.c:1567: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_09, 
   86EE 01 33 2C      [10] 6826 	ld	bc, #_g_sorcerer2_09+0
   86F1 11 00 01      [10] 6827 	ld	de, #_g_maskTable
   86F4 D5            [11] 6828 	push	de
   86F5 11 05 0C      [10] 6829 	ld	de, #0x0c05
   86F8 D5            [11] 6830 	push	de
   86F9 E5            [11] 6831 	push	hl
   86FA C5            [11] 6832 	push	bc
   86FB CD E5 5D      [17] 6833 	call	_cpct_drawSpriteMaskedAlignedTable
                           6834 ;src/main.c:1569: PrintText("PLAYER1", 30, 90, 0);
   86FE 21 5A 00      [10] 6835 	ld	hl, #0x005a
   8701 E5            [11] 6836 	push	hl
   8702 3E 1E         [ 7] 6837 	ld	a, #0x1e
   8704 F5            [11] 6838 	push	af
   8705 33            [ 6] 6839 	inc	sp
   8706 21 3D 88      [10] 6840 	ld	hl, #___str_29
   8709 E5            [11] 6841 	push	hl
   870A CD 10 63      [17] 6842 	call	_PrintText
   870D F1            [10] 6843 	pop	af
   870E F1            [10] 6844 	pop	af
   870F 33            [ 6] 6845 	inc	sp
                           6846 ;src/main.c:1572: if (spr[0].lives_speed < 9) spr[0].lives_speed++;
   8710 01 15 5F      [10] 6847 	ld	bc, #_spr + 11
   8713 0A            [ 7] 6848 	ld	a, (bc)
   8714 FE 09         [ 7] 6849 	cp	a, #0x09
   8716 D2 AC 87      [10] 6850 	jp	NC, 00127$
   8719 3C            [ 4] 6851 	inc	a
   871A 02            [ 7] 6852 	ld	(bc), a
   871B C3 AC 87      [10] 6853 	jp	00127$
   871E                    6854 00118$:
                           6855 ;src/main.c:1577: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   871E 51            [ 4] 6856 	ld	d, c
   871F D5            [11] 6857 	push	de
   8720 21 00 C0      [10] 6858 	ld	hl, #0xc000
   8723 E5            [11] 6859 	push	hl
   8724 CD CF 5D      [17] 6860 	call	_cpct_getScreenPtr
                           6861 ;src/main.c:1576: cpct_drawSpriteMaskedAlignedTable(g_door_1, 
   8727 01 C3 23      [10] 6862 	ld	bc, #_g_door_1+0
   872A 11 00 01      [10] 6863 	ld	de, #_g_maskTable
   872D D5            [11] 6864 	push	de
   872E 11 05 0C      [10] 6865 	ld	de, #0x0c05
   8731 D5            [11] 6866 	push	de
   8732 E5            [11] 6867 	push	hl
   8733 C5            [11] 6868 	push	bc
   8734 CD E5 5D      [17] 6869 	call	_cpct_drawSpriteMaskedAlignedTable
                           6870 ;src/main.c:1578: PrintText("LEVEL", 33, 90, 0);
   8737 21 5A 00      [10] 6871 	ld	hl, #0x005a
   873A E5            [11] 6872 	push	hl
   873B 3E 21         [ 7] 6873 	ld	a, #0x21
   873D F5            [11] 6874 	push	af
   873E 33            [ 6] 6875 	inc	sp
   873F 21 45 88      [10] 6876 	ld	hl, #___str_30
   8742 E5            [11] 6877 	push	hl
   8743 CD 10 63      [17] 6878 	call	_PrintText
   8746 F1            [10] 6879 	pop	af
   8747 F1            [10] 6880 	pop	af
   8748 33            [ 6] 6881 	inc	sp
   8749 18 61         [12] 6882 	jr	00127$
   874B                    6883 00126$:
                           6884 ;src/main.c:1582: else if (potScore[0] < potScore[1]) {
   874B 79            [ 4] 6885 	ld	a, c
   874C 93            [ 4] 6886 	sub	a, e
   874D 30 47         [12] 6887 	jr	NC,00123$
                           6888 ;src/main.c:1583: loser = 0;
   874F DD 36 FD 00   [19] 6889 	ld	-3 (ix), #0x00
                           6890 ;src/main.c:1584: ExplodePlayerInDuel(loser);
   8753 2E 00         [ 7] 6891 	ld	l, #0x00
   8755 CD 40 84      [17] 6892 	call	_ExplodePlayerInDuel
                           6893 ;src/main.c:1587: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   8758 21 0D 5F      [10] 6894 	ld	hl, #(_spr + 0x0003) + 0
   875B 56            [ 7] 6895 	ld	d, (hl)
   875C 21 0C 5F      [10] 6896 	ld	hl, #(_spr + 0x0002) + 0
   875F 5E            [ 7] 6897 	ld	e, (hl)
   8760 D5            [11] 6898 	push	de
   8761 21 00 C0      [10] 6899 	ld	hl, #0xc000
   8764 E5            [11] 6900 	push	hl
   8765 CD CF 5D      [17] 6901 	call	_cpct_getScreenPtr
                           6902 ;src/main.c:1586: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_09, 
   8768 01 8B 2E      [10] 6903 	ld	bc, #_g_sorcerer1_09+0
   876B 11 00 01      [10] 6904 	ld	de, #_g_maskTable
   876E D5            [11] 6905 	push	de
   876F 11 05 0C      [10] 6906 	ld	de, #0x0c05
   8772 D5            [11] 6907 	push	de
   8773 E5            [11] 6908 	push	hl
   8774 C5            [11] 6909 	push	bc
   8775 CD E5 5D      [17] 6910 	call	_cpct_drawSpriteMaskedAlignedTable
                           6911 ;src/main.c:1588: PrintText("PLAYER2", 30, 90, 0);
   8778 21 5A 00      [10] 6912 	ld	hl, #0x005a
   877B E5            [11] 6913 	push	hl
   877C 3E 1E         [ 7] 6914 	ld	a, #0x1e
   877E F5            [11] 6915 	push	af
   877F 33            [ 6] 6916 	inc	sp
   8780 21 4B 88      [10] 6917 	ld	hl, #___str_31
   8783 E5            [11] 6918 	push	hl
   8784 CD 10 63      [17] 6919 	call	_PrintText
   8787 F1            [10] 6920 	pop	af
   8788 F1            [10] 6921 	pop	af
   8789 33            [ 6] 6922 	inc	sp
                           6923 ;src/main.c:1591: if (spr[1].lives_speed < 9) spr[1].lives_speed++;
   878A 01 24 5F      [10] 6924 	ld	bc, #_spr + 26
   878D 0A            [ 7] 6925 	ld	a, (bc)
   878E FE 09         [ 7] 6926 	cp	a, #0x09
   8790 30 1A         [12] 6927 	jr	NC,00127$
   8792 3C            [ 4] 6928 	inc	a
   8793 02            [ 7] 6929 	ld	(bc), a
   8794 18 16         [12] 6930 	jr	00127$
   8796                    6931 00123$:
                           6932 ;src/main.c:1595: PrintText("NOBODY", 32, 90, 0);
   8796 01 53 88      [10] 6933 	ld	bc, #___str_32
   8799 21 5A 00      [10] 6934 	ld	hl, #0x005a
   879C E5            [11] 6935 	push	hl
   879D 3E 20         [ 7] 6936 	ld	a, #0x20
   879F F5            [11] 6937 	push	af
   87A0 33            [ 6] 6938 	inc	sp
   87A1 C5            [11] 6939 	push	bc
   87A2 CD 10 63      [17] 6940 	call	_PrintText
   87A5 F1            [10] 6941 	pop	af
   87A6 F1            [10] 6942 	pop	af
   87A7 33            [ 6] 6943 	inc	sp
                           6944 ;src/main.c:1596: loser = 2;
   87A8 DD 36 FD 02   [19] 6945 	ld	-3 (ix), #0x02
   87AC                    6946 00127$:
                           6947 ;src/main.c:1598: if (TwoPlayers)
   87AC 3A D4 5E      [13] 6948 	ld	a,(#_TwoPlayers + 0)
   87AF B7            [ 4] 6949 	or	a, a
   87B0 28 14         [12] 6950 	jr	Z,00129$
                           6951 ;src/main.c:1599: PrintText("WINS>", 33, 101, 0);
   87B2 21 65 00      [10] 6952 	ld	hl, #0x0065
   87B5 E5            [11] 6953 	push	hl
   87B6 3E 21         [ 7] 6954 	ld	a, #0x21
   87B8 F5            [11] 6955 	push	af
   87B9 33            [ 6] 6956 	inc	sp
   87BA 21 5A 88      [10] 6957 	ld	hl, #___str_33
   87BD E5            [11] 6958 	push	hl
   87BE CD 10 63      [17] 6959 	call	_PrintText
   87C1 F1            [10] 6960 	pop	af
   87C2 F1            [10] 6961 	pop	af
   87C3 33            [ 6] 6962 	inc	sp
   87C4 18 12         [12] 6963 	jr	00130$
   87C6                    6964 00129$:
                           6965 ;src/main.c:1601: PrintText("COMPLETED", 27, 101, 0);	
   87C6 21 65 00      [10] 6966 	ld	hl, #0x0065
   87C9 E5            [11] 6967 	push	hl
   87CA 3E 1B         [ 7] 6968 	ld	a, #0x1b
   87CC F5            [11] 6969 	push	af
   87CD 33            [ 6] 6970 	inc	sp
   87CE 21 60 88      [10] 6971 	ld	hl, #___str_34
   87D1 E5            [11] 6972 	push	hl
   87D2 CD 10 63      [17] 6973 	call	_PrintText
   87D5 F1            [10] 6974 	pop	af
   87D6 F1            [10] 6975 	pop	af
   87D7 33            [ 6] 6976 	inc	sp
   87D8                    6977 00130$:
                           6978 ;src/main.c:1603: cpct_akp_musicInit(g_completed); // level completed music
   87D8 21 9E 04      [10] 6979 	ld	hl, #_g_completed
   87DB E5            [11] 6980 	push	hl
   87DC CD 48 59      [17] 6981 	call	_cpct_akp_musicInit
   87DF F1            [10] 6982 	pop	af
                           6983 ;src/main.c:1604: Pause(1000);
   87E0 21 E8 03      [10] 6984 	ld	hl, #0x03e8
   87E3 CD 81 61      [17] 6985 	call	_Pause
                           6986 ;src/main.c:1606: if (loser < 2) // if there is no tie
   87E6 DD 7E FD      [19] 6987 	ld	a, -3 (ix)
   87E9 D6 02         [ 7] 6988 	sub	a, #0x02
   87EB 3E 00         [ 7] 6989 	ld	a, #0x00
   87ED 17            [ 4] 6990 	rla
   87EE DD 77 FE      [19] 6991 	ld	-2 (ix), a
   87F1 B7            [ 4] 6992 	or	a, a
   87F2 28 04         [12] 6993 	jr	Z,00132$
                           6994 ;src/main.c:1607: nMap++; // go to the next screen on the map
   87F4 21 D0 5E      [10] 6995 	ld	hl, #_nMap+0
   87F7 34            [11] 6996 	inc	(hl)
   87F8                    6997 00132$:
                           6998 ;src/main.c:1609: if (nMap == 12) { // screens are over. End of the game
   87F8 3A D0 5E      [13] 6999 	ld	a,(#_nMap + 0)
   87FB D6 0C         [ 7] 7000 	sub	a, #0x0c
   87FD 20 12         [12] 7001 	jr	NZ,00137$
                           7002 ;src/main.c:1610: if (loser == 0)		
   87FF DD 7E FD      [19] 7003 	ld	a, -3 (ix)
   8802 B7            [ 4] 7004 	or	a, a
   8803 20 07         [12] 7005 	jr	NZ,00134$
                           7006 ;src/main.c:1611: PrintEndGame(1); // player 2 wins
   8805 2E 01         [ 7] 7007 	ld	l, #0x01
   8807 CD CD 66      [17] 7008 	call	_PrintEndGame
   880A 18 05         [12] 7009 	jr	00137$
   880C                    7010 00134$:
                           7011 ;src/main.c:1613: PrintEndGame(0); // player 1 wins
   880C 2E 00         [ 7] 7012 	ld	l, #0x00
   880E CD CD 66      [17] 7013 	call	_PrintEndGame
   8811                    7014 00137$:
                           7015 ;src/main.c:1617: ResetObjData(0);
   8811 2E 00         [ 7] 7016 	ld	l, #0x00
   8813 CD 63 6D      [17] 7017 	call	_ResetObjData
                           7018 ;src/main.c:1618: ResetObjData(1);
   8816 2E 01         [ 7] 7019 	ld	l, #0x01
   8818 CD 63 6D      [17] 7020 	call	_ResetObjData
                           7021 ;src/main.c:1619: InitScoreboard();
   881B CD DF 6A      [17] 7022 	call	_InitScoreboard
                           7023 ;src/main.c:1621: if (loser < 2 && TwoPlayers)
   881E DD 7E FE      [19] 7024 	ld	a, -2 (ix)
   8821 B7            [ 4] 7025 	or	a, a
   8822 28 11         [12] 7026 	jr	Z,00139$
   8824 3A D4 5E      [13] 7027 	ld	a,(#_TwoPlayers + 0)
   8827 B7            [ 4] 7028 	or	a, a
   8828 28 0B         [12] 7029 	jr	Z,00139$
                           7030 ;src/main.c:1622: GameOver(loser); // the player who loses a duel loses a life
   882A DD 7E FD      [19] 7031 	ld	a, -3 (ix)
   882D F5            [11] 7032 	push	af
   882E 33            [ 6] 7033 	inc	sp
   882F CD 68 A2      [17] 7034 	call	_GameOver
   8832 33            [ 6] 7035 	inc	sp
   8833 18 03         [12] 7036 	jr	00142$
   8835                    7037 00139$:
                           7038 ;src/main.c:1624: ResetData();
   8835 CD 84 A1      [17] 7039 	call	_ResetData
   8838                    7040 00142$:
   8838 DD F9         [10] 7041 	ld	sp, ix
   883A DD E1         [14] 7042 	pop	ix
   883C C9            [10] 7043 	ret
   883D                    7044 ___str_29:
   883D 50 4C 41 59 45 52  7045 	.ascii "PLAYER1"
        31
   8844 00                 7046 	.db 0x00
   8845                    7047 ___str_30:
   8845 4C 45 56 45 4C     7048 	.ascii "LEVEL"
   884A 00                 7049 	.db 0x00
   884B                    7050 ___str_31:
   884B 50 4C 41 59 45 52  7051 	.ascii "PLAYER2"
        32
   8852 00                 7052 	.db 0x00
   8853                    7053 ___str_32:
   8853 4E 4F 42 4F 44 59  7054 	.ascii "NOBODY"
   8859 00                 7055 	.db 0x00
   885A                    7056 ___str_33:
   885A 57 49 4E 53 3E     7057 	.ascii "WINS>"
   885F 00                 7058 	.db 0x00
   8860                    7059 ___str_34:
   8860 43 4F 4D 50 4C 45  7060 	.ascii "COMPLETED"
        54 45 44
   8869 00                 7061 	.db 0x00
                           7062 ;src/main.c:1629: void CheckDuel() {
                           7063 ;	---------------------------------
                           7064 ; Function CheckDuel
                           7065 ; ---------------------------------
   886A                    7066 _CheckDuel::
                           7067 ;src/main.c:1630: if ((spr[0].objNum_mov == 5 || spr[1].objNum_mov == 5) && 
   886A 3A 16 5F      [13] 7068 	ld	a, (#_spr + 12)
   886D D6 05         [ 7] 7069 	sub	a, #0x05
   886F 28 06         [12] 7070 	jr	Z,00105$
   8871 3A 25 5F      [13] 7071 	ld	a, (#_spr + 27)
   8874 D6 05         [ 7] 7072 	sub	a, #0x05
   8876 C0            [11] 7073 	ret	NZ
   8877                    7074 00105$:
                           7075 ;src/main.c:1631: SpriteCollision(spr[0].x, spr[0].y, &spr[1], 0)) {				
   8877 21 0D 5F      [10] 7076 	ld	hl, #_spr + 3
   887A 56            [ 7] 7077 	ld	d, (hl)
   887B 21 0C 5F      [10] 7078 	ld	hl, #_spr + 2
   887E 46            [ 7] 7079 	ld	b, (hl)
   887F AF            [ 4] 7080 	xor	a, a
   8880 F5            [11] 7081 	push	af
   8881 33            [ 6] 7082 	inc	sp
   8882 21 19 5F      [10] 7083 	ld	hl, #(_spr + 0x000f)
   8885 E5            [11] 7084 	push	hl
   8886 58            [ 4] 7085 	ld	e, b
   8887 D5            [11] 7086 	push	de
   8888 CD 7F 7D      [17] 7087 	call	_SpriteCollision
   888B F1            [10] 7088 	pop	af
   888C F1            [10] 7089 	pop	af
   888D 33            [ 6] 7090 	inc	sp
   888E 7D            [ 4] 7091 	ld	a, l
   888F B7            [ 4] 7092 	or	a, a
   8890 C8            [11] 7093 	ret	Z
                           7094 ;src/main.c:1633: for(u8 i=0;i<6;i++)
   8891 0E 00         [ 7] 7095 	ld	c, #0x00
   8893                    7096 00107$:
   8893 79            [ 4] 7097 	ld	a, c
   8894 D6 06         [ 7] 7098 	sub	a, #0x06
   8896 30 16         [12] 7099 	jr	NC,00101$
                           7100 ;src/main.c:1634: DeleteSprite(&spr[i]);
   8898 06 00         [ 7] 7101 	ld	b,#0x00
   889A 69            [ 4] 7102 	ld	l, c
   889B 60            [ 4] 7103 	ld	h, b
   889C 29            [11] 7104 	add	hl, hl
   889D 09            [11] 7105 	add	hl, bc
   889E 29            [11] 7106 	add	hl, hl
   889F 09            [11] 7107 	add	hl, bc
   88A0 29            [11] 7108 	add	hl, hl
   88A1 09            [11] 7109 	add	hl, bc
   88A2 11 0A 5F      [10] 7110 	ld	de, #_spr
   88A5 19            [11] 7111 	add	hl, de
   88A6 C5            [11] 7112 	push	bc
   88A7 CD 32 79      [17] 7113 	call	_DeleteSprite
   88AA C1            [10] 7114 	pop	bc
                           7115 ;src/main.c:1633: for(u8 i=0;i<6;i++)
   88AB 0C            [ 4] 7116 	inc	c
   88AC 18 E5         [12] 7117 	jr	00107$
   88AE                    7118 00101$:
                           7119 ;src/main.c:1635: DeleteObject(0);
   88AE 2E 00         [ 7] 7120 	ld	l, #0x00
   88B0 CD F0 6D      [17] 7121 	call	_DeleteObject
                           7122 ;src/main.c:1636: DeleteObject(1);
   88B3 2E 01         [ 7] 7123 	ld	l, #0x01
   88B5 CD F0 6D      [17] 7124 	call	_DeleteObject
                           7125 ;src/main.c:1638: MakeDuel();
   88B8 C3 AB 84      [10] 7126 	jp  _MakeDuel
                           7127 ;src/main.c:1656: void MakeShot(u8 x, u8 y, u8 dir) {	
                           7128 ;	---------------------------------
                           7129 ; Function MakeShot
                           7130 ; ---------------------------------
   88BB                    7131 _MakeShot::
                           7132 ;src/main.c:1657: if (sht.active == FALSE) { // if there is no active shot...
   88BB 01 73 5F      [10] 7133 	ld	bc, #_sht+0
   88BE 3A 77 5F      [13] 7134 	ld	a, (#(_sht + 0x0004) + 0)
   88C1 B7            [ 4] 7135 	or	a, a
   88C2 C0            [11] 7136 	ret	NZ
                           7137 ;src/main.c:1658: sht.active = TRUE; // activate it
   88C3 21 77 5F      [10] 7138 	ld	hl, #(_sht + 0x0004)
   88C6 36 01         [10] 7139 	ld	(hl), #0x01
                           7140 ;src/main.c:1659: sht.dir = dir; // the direction of the shot is that of the sprite that shoots
   88C8 21 76 5F      [10] 7141 	ld	hl, #(_sht + 0x0003)
   88CB FD 21 04 00   [14] 7142 	ld	iy, #4
   88CF FD 39         [15] 7143 	add	iy, sp
   88D1 FD 7E 00      [19] 7144 	ld	a, 0 (iy)
   88D4 77            [ 7] 7145 	ld	(hl), a
                           7146 ;src/main.c:1660: sht.y = y + 5; // adjusts to the height of the gun (hand)
   88D5 59            [ 4] 7147 	ld	e, c
   88D6 50            [ 4] 7148 	ld	d, b
   88D7 13            [ 6] 7149 	inc	de
   88D8 21 03 00      [10] 7150 	ld	hl, #3+0
   88DB 39            [11] 7151 	add	hl, sp
   88DC 7E            [ 7] 7152 	ld	a, (hl)
   88DD C6 05         [ 7] 7153 	add	a, #0x05
   88DF 12            [ 7] 7154 	ld	(de), a
                           7155 ;src/main.c:1662: if (sht.dir == D_right) sht.x = x + SPR_W;
   88E0 21 04 00      [10] 7156 	ld	hl, #4+0
   88E3 39            [11] 7157 	add	hl, sp
   88E4 7E            [ 7] 7158 	ld	a, (hl)
   88E5 D6 03         [ 7] 7159 	sub	a, #0x03
   88E7 20 0A         [12] 7160 	jr	NZ,00102$
   88E9 21 02 00      [10] 7161 	ld	hl, #2+0
   88EC 39            [11] 7162 	add	hl, sp
   88ED 7E            [ 7] 7163 	ld	a, (hl)
   88EE C6 05         [ 7] 7164 	add	a, #0x05
   88F0 02            [ 7] 7165 	ld	(bc), a
   88F1 18 08         [12] 7166 	jr	00103$
   88F3                    7167 00102$:
                           7168 ;src/main.c:1663: else sht.x = x - SHT_W;
   88F3 21 02 00      [10] 7169 	ld	hl, #2+0
   88F6 39            [11] 7170 	add	hl, sp
   88F7 7E            [ 7] 7171 	ld	a, (hl)
   88F8 C6 FC         [ 7] 7172 	add	a, #0xfc
   88FA 02            [ 7] 7173 	ld	(bc), a
   88FB                    7174 00103$:
                           7175 ;src/main.c:1664: cpct_akp_SFXPlay (6, 12, 65, 0, 0, AY_CHANNEL_B); // shot sound
   88FB 3E 02         [ 7] 7176 	ld	a, #0x02
   88FD F5            [11] 7177 	push	af
   88FE 33            [ 6] 7178 	inc	sp
   88FF 21 00 00      [10] 7179 	ld	hl, #0x0000
   8902 E5            [11] 7180 	push	hl
   8903 2E 41         [ 7] 7181 	ld	l, #0x41
   8905 E5            [11] 7182 	push	hl
   8906 21 06 0C      [10] 7183 	ld	hl, #0x0c06
   8909 E5            [11] 7184 	push	hl
   890A CD EF 59      [17] 7185 	call	_cpct_akp_SFXPlay
   890D 21 07 00      [10] 7186 	ld	hl, #7
   8910 39            [11] 7187 	add	hl, sp
   8911 F9            [ 6] 7188 	ld	sp, hl
   8912 C9            [10] 7189 	ret
                           7190 ;src/main.c:1670: void DeleteShot() {
                           7191 ;	---------------------------------
                           7192 ; Function DeleteShot
                           7193 ; ---------------------------------
   8913                    7194 _DeleteShot::
   8913 DD E5         [15] 7195 	push	ix
   8915 DD 21 00 00   [14] 7196 	ld	ix,#0
   8919 DD 39         [15] 7197 	add	ix,sp
   891B F5            [11] 7198 	push	af
   891C 3B            [ 6] 7199 	dec	sp
                           7200 ;src/main.c:1672: 2 + (sht.px & 1), 2 + (sht.y & 3 ? 1 : 0), 
   891D 21 74 5F      [10] 7201 	ld	hl, #_sht + 1
   8920 4E            [ 7] 7202 	ld	c, (hl)
   8921 79            [ 4] 7203 	ld	a, c
   8922 E6 03         [ 7] 7204 	and	a, #0x03
   8924 28 04         [12] 7205 	jr	Z,00103$
   8926 16 01         [ 7] 7206 	ld	d, #0x01
   8928 18 02         [12] 7207 	jr	00104$
   892A                    7208 00103$:
   892A 16 00         [ 7] 7209 	ld	d, #0x00
   892C                    7210 00104$:
   892C 14            [ 4] 7211 	inc	d
   892D 14            [ 4] 7212 	inc	d
   892E 21 75 5F      [10] 7213 	ld	hl, #_sht + 2
   8931 5E            [ 7] 7214 	ld	e, (hl)
   8932 7B            [ 4] 7215 	ld	a, e
   8933 E6 01         [ 7] 7216 	and	a, #0x01
   8935 C6 02         [ 7] 7217 	add	a, #0x02
   8937 DD 77 FF      [19] 7218 	ld	-1 (ix), a
                           7219 ;src/main.c:1671: cpct_etm_drawTileBox2x4(sht.px / 2, (sht.y - ORIG_MAP_Y) / 4, 
   893A 06 00         [ 7] 7220 	ld	b, #0x00
   893C 79            [ 4] 7221 	ld	a, c
   893D C6 E0         [ 7] 7222 	add	a, #0xe0
   893F DD 77 FD      [19] 7223 	ld	-3 (ix), a
   8942 78            [ 4] 7224 	ld	a, b
   8943 CE FF         [ 7] 7225 	adc	a, #0xff
   8945 DD 77 FE      [19] 7226 	ld	-2 (ix), a
   8948 E1            [10] 7227 	pop	hl
   8949 E5            [11] 7228 	push	hl
   894A DD CB FE 7E   [20] 7229 	bit	7, -2 (ix)
   894E 28 04         [12] 7230 	jr	Z,00105$
   8950 21 E3 FF      [10] 7231 	ld	hl, #0xffe3
   8953 09            [11] 7232 	add	hl, bc
   8954                    7233 00105$:
   8954 CB 2C         [ 8] 7234 	sra	h
   8956 CB 1D         [ 8] 7235 	rr	l
   8958 CB 2C         [ 8] 7236 	sra	h
   895A CB 1D         [ 8] 7237 	rr	l
   895C 4D            [ 4] 7238 	ld	c, l
   895D CB 3B         [ 8] 7239 	srl	e
   895F 21 71 0F      [10] 7240 	ld	hl, #0x0f71
   8962 E5            [11] 7241 	push	hl
   8963 21 40 C1      [10] 7242 	ld	hl, #0xc140
   8966 E5            [11] 7243 	push	hl
   8967 3E 28         [ 7] 7244 	ld	a, #0x28
   8969 F5            [11] 7245 	push	af
   896A 33            [ 6] 7246 	inc	sp
   896B D5            [11] 7247 	push	de
   896C 33            [ 6] 7248 	inc	sp
   896D DD 7E FF      [19] 7249 	ld	a, -1 (ix)
   8970 F5            [11] 7250 	push	af
   8971 33            [ 6] 7251 	inc	sp
   8972 51            [ 4] 7252 	ld	d, c
   8973 D5            [11] 7253 	push	de
   8974 CD 11 5B      [17] 7254 	call	_cpct_etm_drawTileBox2x4
   8977 DD F9         [10] 7255 	ld	sp, ix
   8979 DD E1         [14] 7256 	pop	ix
   897B C9            [10] 7257 	ret
                           7258 ;src/main.c:1677: void PrintShot(u8* magic) __z88dk_fastcall {
                           7259 ;	---------------------------------
                           7260 ; Function PrintShot
                           7261 ; ---------------------------------
   897C                    7262 _PrintShot::
                           7263 ;src/main.c:1678: DeleteShot(); // delete the previous shot
   897C E5            [11] 7264 	push	hl
   897D CD 13 89      [17] 7265 	call	_DeleteShot
   8980 C1            [10] 7266 	pop	bc
                           7267 ;src/main.c:1679: if (!sht.active) return; // outside the margins. no need to print
   8981 3A 77 5F      [13] 7268 	ld	a, (#_sht + 4)
   8984 B7            [ 4] 7269 	or	a, a
   8985 C8            [11] 7270 	ret	Z
                           7271 ;src/main.c:1681: SHT_W, SHT_H, g_maskTable);
                           7272 ;src/main.c:1680: cpct_drawSpriteMaskedAlignedTable(magic, cpct_getScreenPtr(CPCT_VMEM_START, sht.x, sht.y), 
   8986 21 74 5F      [10] 7273 	ld	hl, #_sht + 1
   8989 56            [ 7] 7274 	ld	d, (hl)
   898A 3A 73 5F      [13] 7275 	ld	a, (#_sht + 0)
   898D C5            [11] 7276 	push	bc
   898E 5F            [ 4] 7277 	ld	e, a
   898F D5            [11] 7278 	push	de
   8990 21 00 C0      [10] 7279 	ld	hl, #0xc000
   8993 E5            [11] 7280 	push	hl
   8994 CD CF 5D      [17] 7281 	call	_cpct_getScreenPtr
   8997 C1            [10] 7282 	pop	bc
   8998 11 00 01      [10] 7283 	ld	de, #_g_maskTable
   899B D5            [11] 7284 	push	de
   899C 11 04 08      [10] 7285 	ld	de, #0x0804
   899F D5            [11] 7286 	push	de
   89A0 E5            [11] 7287 	push	hl
   89A1 C5            [11] 7288 	push	bc
   89A2 CD E5 5D      [17] 7289 	call	_cpct_drawSpriteMaskedAlignedTable
   89A5 C9            [10] 7290 	ret
                           7291 ;src/main.c:1686: void MoveShot() {
                           7292 ;	---------------------------------
                           7293 ; Function MoveShot
                           7294 ; ---------------------------------
   89A6                    7295 _MoveShot::
                           7296 ;src/main.c:1687: sht.px = sht.x; // save the current X coordinate
   89A6 01 73 5F      [10] 7297 	ld	bc, #_sht+0
   89A9 0A            [ 7] 7298 	ld	a, (bc)
   89AA 32 75 5F      [13] 7299 	ld	(#(_sht + 0x0002)),a
                           7300 ;src/main.c:1689: if (sht.dir == D_right)	sht.x++; else sht.x--;
   89AD 21 76 5F      [10] 7301 	ld	hl, #_sht + 3
   89B0 56            [ 7] 7302 	ld	d, (hl)
                           7303 ;src/main.c:1687: sht.px = sht.x; // save the current X coordinate
   89B1 0A            [ 7] 7304 	ld	a, (bc)
   89B2 5F            [ 4] 7305 	ld	e, a
                           7306 ;src/main.c:1689: if (sht.dir == D_right)	sht.x++; else sht.x--;
   89B3 7A            [ 4] 7307 	ld	a, d
   89B4 D6 03         [ 7] 7308 	sub	a, #0x03
   89B6 20 05         [12] 7309 	jr	NZ,00102$
   89B8 1C            [ 4] 7310 	inc	e
   89B9 7B            [ 4] 7311 	ld	a, e
   89BA 02            [ 7] 7312 	ld	(bc), a
   89BB 18 03         [12] 7313 	jr	00103$
   89BD                    7314 00102$:
   89BD 1D            [ 4] 7315 	dec	e
   89BE 7B            [ 4] 7316 	ld	a, e
   89BF 02            [ 7] 7317 	ld	(bc), a
   89C0                    7318 00103$:
                           7319 ;src/main.c:1687: sht.px = sht.x; // save the current X coordinate
   89C0 0A            [ 7] 7320 	ld	a, (bc)
   89C1 5F            [ 4] 7321 	ld	e, a
                           7322 ;src/main.c:1691: if (sht.x + SHT_W >= GLOBAL_MAX_X || sht.x <= 0) {
   89C2 6B            [ 4] 7323 	ld	l, e
   89C3 26 00         [ 7] 7324 	ld	h, #0x00
   89C5 23            [ 6] 7325 	inc	hl
   89C6 23            [ 6] 7326 	inc	hl
   89C7 23            [ 6] 7327 	inc	hl
   89C8 23            [ 6] 7328 	inc	hl
   89C9 7D            [ 4] 7329 	ld	a, l
   89CA D6 50         [ 7] 7330 	sub	a, #0x50
   89CC 7C            [ 4] 7331 	ld	a, h
   89CD 17            [ 4] 7332 	rla
   89CE 3F            [ 4] 7333 	ccf
   89CF 1F            [ 4] 7334 	rra
   89D0 DE 80         [ 7] 7335 	sbc	a, #0x80
   89D2 30 03         [12] 7336 	jr	NC,00104$
   89D4 7B            [ 4] 7337 	ld	a, e
   89D5 B7            [ 4] 7338 	or	a, a
   89D6 C0            [11] 7339 	ret	NZ
   89D7                    7340 00104$:
                           7341 ;src/main.c:1692: sht.active = FALSE;
   89D7 21 77 5F      [10] 7342 	ld	hl, #(_sht + 0x0004)
   89DA 36 00         [10] 7343 	ld	(hl), #0x00
                           7344 ;src/main.c:1693: DeleteShot();
   89DC C3 13 89      [10] 7345 	jp  _DeleteShot
                           7346 ;src/main.c:1710: void PrintWizard(u8 shooting) __z88dk_fastcall {
                           7347 ;	---------------------------------
                           7348 ; Function PrintWizard
                           7349 ; ---------------------------------
   89DF                    7350 _PrintWizard::
   89DF 4D            [ 4] 7351 	ld	c, l
                           7352 ;src/main.c:1712: u8 x = 0;
   89E0 1E 00         [ 7] 7353 	ld	e, #0x00
                           7354 ;src/main.c:1714: if (spr[6].dir == D_left) { // on the right bank facing left
   89E2 3A 6B 5F      [13] 7355 	ld	a, (#_spr + 97)
                           7356 ;src/main.c:1715: if (shooting) wizard = g_wizard_1;
   89E5 D6 02         [ 7] 7357 	sub	a,#0x02
   89E7 20 0F         [12] 7358 	jr	NZ,00108$
   89E9 B1            [ 4] 7359 	or	a,c
   89EA 28 05         [12] 7360 	jr	Z,00102$
   89EC 01 E3 21      [10] 7361 	ld	bc, #_g_wizard_1+0
   89EF 18 03         [12] 7362 	jr	00103$
   89F1                    7363 00102$:
                           7364 ;src/main.c:1716: else wizard = g_wizard_0;
   89F1 01 A7 21      [10] 7365 	ld	bc, #_g_wizard_0
   89F4                    7366 00103$:
                           7367 ;src/main.c:1717: x = 75;
   89F4 1E 4B         [ 7] 7368 	ld	e, #0x4b
   89F6 18 0C         [12] 7369 	jr	00109$
   89F8                    7370 00108$:
                           7371 ;src/main.c:1720: if (shooting) wizard = g_wizard_3; 
   89F8 79            [ 4] 7372 	ld	a, c
   89F9 B7            [ 4] 7373 	or	a, a
   89FA 28 05         [12] 7374 	jr	Z,00105$
   89FC 01 5B 22      [10] 7375 	ld	bc, #_g_wizard_3
   89FF 18 03         [12] 7376 	jr	00109$
   8A01                    7377 00105$:
                           7378 ;src/main.c:1721: else wizard = g_wizard_2;
   8A01 01 1F 22      [10] 7379 	ld	bc, #_g_wizard_2
   8A04                    7380 00109$:
                           7381 ;src/main.c:1725: SPR_W, SPR_H, g_maskTable); 							
                           7382 ;src/main.c:1724: cpct_drawSpriteMaskedAlignedTable(wizard, cpct_getScreenPtr(CPCT_VMEM_START, x, spr[6].y), 
   8A04 21 67 5F      [10] 7383 	ld	hl, #_spr + 93
   8A07 56            [ 7] 7384 	ld	d, (hl)
   8A08 C5            [11] 7385 	push	bc
   8A09 D5            [11] 7386 	push	de
   8A0A 21 00 C0      [10] 7387 	ld	hl, #0xc000
   8A0D E5            [11] 7388 	push	hl
   8A0E CD CF 5D      [17] 7389 	call	_cpct_getScreenPtr
   8A11 C1            [10] 7390 	pop	bc
   8A12 11 00 01      [10] 7391 	ld	de, #_g_maskTable
   8A15 D5            [11] 7392 	push	de
   8A16 11 05 0C      [10] 7393 	ld	de, #0x0c05
   8A19 D5            [11] 7394 	push	de
   8A1A E5            [11] 7395 	push	hl
   8A1B C5            [11] 7396 	push	bc
   8A1C CD E5 5D      [17] 7397 	call	_cpct_drawSpriteMaskedAlignedTable
   8A1F C9            [10] 7398 	ret
                           7399 ;src/main.c:1730: void WizardAnim() {
                           7400 ;	---------------------------------
                           7401 ; Function WizardAnim
                           7402 ; ---------------------------------
   8A20                    7403 _WizardAnim::
                           7404 ;src/main.c:1731: if (ctWizardAnim > 0) {
   8A20 FD 21 F1 5E   [14] 7405 	ld	iy, #_ctWizardAnim
   8A24 FD 7E 00      [19] 7406 	ld	a, 0 (iy)
   8A27 B7            [ 4] 7407 	or	a, a
   8A28 C8            [11] 7408 	ret	Z
                           7409 ;src/main.c:1732: switch(ctWizardAnim++) {			
   8A29 FD 4E 00      [19] 7410 	ld	c, 0 (iy)
   8A2C FD 34 00      [23] 7411 	inc	0 (iy)
   8A2F 79            [ 4] 7412 	ld	a, c
   8A30 3D            [ 4] 7413 	dec	a
   8A31 28 39         [12] 7414 	jr	Z,00102$
   8A33 79            [ 4] 7415 	ld	a,c
   8A34 FE 02         [ 7] 7416 	cp	a,#0x02
   8A36 28 41         [12] 7417 	jr	Z,00104$
   8A38 FE 03         [ 7] 7418 	cp	a,#0x03
   8A3A 28 4B         [12] 7419 	jr	Z,00106$
   8A3C FE 04         [ 7] 7420 	cp	a,#0x04
   8A3E 28 5A         [12] 7421 	jr	Z,00107$
   8A40 FE 05         [ 7] 7422 	cp	a,#0x05
   8A42 28 61         [12] 7423 	jr	Z,00108$
   8A44 FE 06         [ 7] 7424 	cp	a,#0x06
   8A46 C8            [11] 7425 	ret	Z
   8A47 FE 07         [ 7] 7426 	cp	a,#0x07
   8A49 C8            [11] 7427 	ret	Z
   8A4A FE 08         [ 7] 7428 	cp	a,#0x08
   8A4C C8            [11] 7429 	ret	Z
   8A4D FE 09         [ 7] 7430 	cp	a,#0x09
   8A4F C8            [11] 7431 	ret	Z
   8A50 FE 0A         [ 7] 7432 	cp	a,#0x0a
   8A52 C8            [11] 7433 	ret	Z
   8A53 FE 0B         [ 7] 7434 	cp	a,#0x0b
   8A55 C8            [11] 7435 	ret	Z
   8A56 FE 0C         [ 7] 7436 	cp	a,#0x0c
   8A58 28 63         [12] 7437 	jr	Z,00115$
   8A5A FE 1D         [ 7] 7438 	cp	a,#0x1d
   8A5C 28 0E         [12] 7439 	jr	Z,00102$
   8A5E FE 1E         [ 7] 7440 	cp	a,#0x1e
   8A60 28 17         [12] 7441 	jr	Z,00104$
   8A62 FE 1F         [ 7] 7442 	cp	a,#0x1f
   8A64 28 21         [12] 7443 	jr	Z,00106$
   8A66 D6 20         [ 7] 7444 	sub	a, #0x20
   8A68 28 5E         [12] 7445 	jr	Z,00116$
   8A6A 18 68         [12] 7446 	jr	00117$
                           7447 ;src/main.c:1735: case 29:	{ PrintExplosion(&spr[6], 0); break; }
   8A6C                    7448 00102$:
   8A6C AF            [ 4] 7449 	xor	a, a
   8A6D F5            [11] 7450 	push	af
   8A6E 33            [ 6] 7451 	inc	sp
   8A6F 21 64 5F      [10] 7452 	ld	hl, #(_spr + 0x005a)
   8A72 E5            [11] 7453 	push	hl
   8A73 CD 5D 7C      [17] 7454 	call	_PrintExplosion
   8A76 F1            [10] 7455 	pop	af
   8A77 33            [ 6] 7456 	inc	sp
   8A78 C9            [10] 7457 	ret
                           7458 ;src/main.c:1737: case 30:	{ PrintExplosion(&spr[6], 1); break; }
   8A79                    7459 00104$:
   8A79 3E 01         [ 7] 7460 	ld	a, #0x01
   8A7B F5            [11] 7461 	push	af
   8A7C 33            [ 6] 7462 	inc	sp
   8A7D 21 64 5F      [10] 7463 	ld	hl, #(_spr + 0x005a)
   8A80 E5            [11] 7464 	push	hl
   8A81 CD 5D 7C      [17] 7465 	call	_PrintExplosion
   8A84 F1            [10] 7466 	pop	af
   8A85 33            [ 6] 7467 	inc	sp
   8A86 C9            [10] 7468 	ret
                           7469 ;src/main.c:1739: case 31:	{ DeleteSprite(&spr[6]); PrintExplosion(&spr[6], 0); break; }						
   8A87                    7470 00106$:
   8A87 21 64 5F      [10] 7471 	ld	hl, #(_spr + 0x005a)
   8A8A CD 32 79      [17] 7472 	call	_DeleteSprite
   8A8D AF            [ 4] 7473 	xor	a, a
   8A8E F5            [11] 7474 	push	af
   8A8F 33            [ 6] 7475 	inc	sp
   8A90 21 64 5F      [10] 7476 	ld	hl, #(_spr + 0x005a)
   8A93 E5            [11] 7477 	push	hl
   8A94 CD 5D 7C      [17] 7478 	call	_PrintExplosion
   8A97 F1            [10] 7479 	pop	af
   8A98 33            [ 6] 7480 	inc	sp
   8A99 C9            [10] 7481 	ret
                           7482 ;src/main.c:1741: case 4:		{ DeleteSprite(&spr[6]); PrintWizard(TRUE); break; }		
   8A9A                    7483 00107$:
   8A9A 21 64 5F      [10] 7484 	ld	hl, #(_spr + 0x005a)
   8A9D CD 32 79      [17] 7485 	call	_DeleteSprite
   8AA0 2E 01         [ 7] 7486 	ld	l, #0x01
   8AA2 C3 DF 89      [10] 7487 	jp  _PrintWizard
                           7488 ;src/main.c:1743: case 5:		{ MakeShot(spr[6].x, spr[6].y-3, spr[6].dir); break; }			
   8AA5                    7489 00108$:
   8AA5 21 6B 5F      [10] 7490 	ld	hl, #_spr + 97
   8AA8 56            [ 7] 7491 	ld	d, (hl)
   8AA9 3A 67 5F      [13] 7492 	ld	a, (#_spr + 93)
   8AAC C6 FD         [ 7] 7493 	add	a, #0xfd
   8AAE 4F            [ 4] 7494 	ld	c, a
   8AAF 21 66 5F      [10] 7495 	ld	hl, #_spr + 92
   8AB2 46            [ 7] 7496 	ld	b, (hl)
   8AB3 59            [ 4] 7497 	ld	e, c
   8AB4 D5            [11] 7498 	push	de
   8AB5 C5            [11] 7499 	push	bc
   8AB6 33            [ 6] 7500 	inc	sp
   8AB7 CD BB 88      [17] 7501 	call	_MakeShot
   8ABA F1            [10] 7502 	pop	af
   8ABB 33            [ 6] 7503 	inc	sp
   8ABC C9            [10] 7504 	ret
                           7505 ;src/main.c:1752: case 12:    { DeleteSprite(&spr[6]); PrintWizard(FALSE); break;}
   8ABD                    7506 00115$:
   8ABD 21 64 5F      [10] 7507 	ld	hl, #(_spr + 0x005a)
   8AC0 CD 32 79      [17] 7508 	call	_DeleteSprite
   8AC3 2E 00         [ 7] 7509 	ld	l, #0x00
   8AC5 C3 DF 89      [10] 7510 	jp  _PrintWizard
                           7511 ;src/main.c:1754: case 32:    { DeleteSprite(&spr[6]); ctWizardAnim = 0; return; }
   8AC8                    7512 00116$:
   8AC8 21 64 5F      [10] 7513 	ld	hl, #(_spr + 0x005a)
   8ACB CD 32 79      [17] 7514 	call	_DeleteSprite
   8ACE 21 F1 5E      [10] 7515 	ld	hl,#_ctWizardAnim + 0
   8AD1 36 00         [10] 7516 	ld	(hl), #0x00
   8AD3 C9            [10] 7517 	ret
                           7518 ;src/main.c:1756: default:	{ PrintWizard(FALSE); break;	}			
   8AD4                    7519 00117$:
   8AD4 2E 00         [ 7] 7520 	ld	l, #0x00
                           7521 ;src/main.c:1757: }		
   8AD6 C3 DF 89      [10] 7522 	jp  _PrintWizard
                           7523 ;src/main.c:1763: void MakeWizardAnim(u8 player) __z88dk_fastcall {
                           7524 ;	---------------------------------
                           7525 ; Function MakeWizardAnim
                           7526 ; ---------------------------------
   8AD9                    7527 _MakeWizardAnim::
   8AD9 4D            [ 4] 7528 	ld	c, l
                           7529 ;src/main.c:1764: if (ctInactivity[player]++ == 80 && !sht.active) {	
   8ADA 11 ED 5E      [10] 7530 	ld	de, #_ctInactivity+0
   8ADD 69            [ 4] 7531 	ld	l,c
   8ADE 26 00         [ 7] 7532 	ld	h,#0x00
   8AE0 19            [11] 7533 	add	hl, de
   8AE1 46            [ 7] 7534 	ld	b, (hl)
   8AE2 58            [ 4] 7535 	ld	e, b
   8AE3 1C            [ 4] 7536 	inc	e
   8AE4 73            [ 7] 7537 	ld	(hl), e
   8AE5 78            [ 4] 7538 	ld	a, b
   8AE6 D6 50         [ 7] 7539 	sub	a, #0x50
   8AE8 C0            [11] 7540 	ret	NZ
   8AE9 3A 77 5F      [13] 7541 	ld	a, (#(_sht + 0x0004) + 0)
   8AEC B7            [ 4] 7542 	or	a, a
   8AED C0            [11] 7543 	ret	NZ
                           7544 ;src/main.c:1765: spr[6].y = spr[6].py = spr[player].y;
   8AEE 11 0A 5F      [10] 7545 	ld	de, #_spr+0
   8AF1 06 00         [ 7] 7546 	ld	b,#0x00
   8AF3 69            [ 4] 7547 	ld	l, c
   8AF4 60            [ 4] 7548 	ld	h, b
   8AF5 29            [11] 7549 	add	hl, hl
   8AF6 09            [11] 7550 	add	hl, bc
   8AF7 29            [11] 7551 	add	hl, hl
   8AF8 09            [11] 7552 	add	hl, bc
   8AF9 29            [11] 7553 	add	hl, hl
   8AFA 09            [11] 7554 	add	hl, bc
   8AFB 19            [11] 7555 	add	hl,de
   8AFC 4D            [ 4] 7556 	ld	c,l
   8AFD 44            [ 4] 7557 	ld	b,h
   8AFE 23            [ 6] 7558 	inc	hl
   8AFF 23            [ 6] 7559 	inc	hl
   8B00 23            [ 6] 7560 	inc	hl
   8B01 7E            [ 7] 7561 	ld	a, (hl)
   8B02 32 69 5F      [13] 7562 	ld	(#(_spr + 0x005f)),a
   8B05 32 67 5F      [13] 7563 	ld	(#(_spr + 0x005d)),a
                           7564 ;src/main.c:1767: if (spr[player].x < 40) {
   8B08 69            [ 4] 7565 	ld	l, c
   8B09 60            [ 4] 7566 	ld	h, b
   8B0A 23            [ 6] 7567 	inc	hl
   8B0B 23            [ 6] 7568 	inc	hl
   8B0C 4E            [ 7] 7569 	ld	c, (hl)
                           7570 ;src/main.c:1768: spr[6].x = spr[6].px = 74;		
   8B0D 21 5E 00      [10] 7571 	ld	hl, #0x005e
   8B10 19            [11] 7572 	add	hl, de
                           7573 ;src/main.c:1769: spr[6].dir = D_left;
                           7574 ;src/main.c:1767: if (spr[player].x < 40) {
   8B11 79            [ 4] 7575 	ld	a, c
   8B12 D6 28         [ 7] 7576 	sub	a, #0x28
   8B14 30 0E         [12] 7577 	jr	NC,00102$
                           7578 ;src/main.c:1768: spr[6].x = spr[6].px = 74;		
   8B16 36 4A         [10] 7579 	ld	(hl), #0x4a
   8B18 21 66 5F      [10] 7580 	ld	hl, #(_spr + 0x005c)
   8B1B 36 4A         [10] 7581 	ld	(hl), #0x4a
                           7582 ;src/main.c:1769: spr[6].dir = D_left;
   8B1D 21 6B 5F      [10] 7583 	ld	hl, #(_spr + 0x0061)
   8B20 36 02         [10] 7584 	ld	(hl), #0x02
   8B22 18 0C         [12] 7585 	jr	00103$
   8B24                    7586 00102$:
                           7587 ;src/main.c:1772: spr[6].x = spr[6].px = 1;
   8B24 36 01         [10] 7588 	ld	(hl), #0x01
   8B26 21 66 5F      [10] 7589 	ld	hl, #(_spr + 0x005c)
   8B29 36 01         [10] 7590 	ld	(hl), #0x01
                           7591 ;src/main.c:1773: spr[6].dir = D_right;
   8B2B 21 6B 5F      [10] 7592 	ld	hl, #(_spr + 0x0061)
   8B2E 36 03         [10] 7593 	ld	(hl), #0x03
   8B30                    7594 00103$:
                           7595 ;src/main.c:1775: ctWizardAnim++; // makes the wizard shooting animation start
   8B30 21 F1 5E      [10] 7596 	ld	hl, #_ctWizardAnim+0
   8B33 34            [11] 7597 	inc	(hl)
   8B34 C9            [10] 7598 	ret
                           7599 ;src/main.c:1793: void MoveEnemy(TSpr *pSpr) {
                           7600 ;	---------------------------------
                           7601 ; Function MoveEnemy
                           7602 ; ---------------------------------
   8B35                    7603 _MoveEnemy::
   8B35 DD E5         [15] 7604 	push	ix
   8B37 DD 21 00 00   [14] 7605 	ld	ix,#0
   8B3B DD 39         [15] 7606 	add	ix,sp
   8B3D 21 F0 FF      [10] 7607 	ld	hl, #-16
   8B40 39            [11] 7608 	add	hl, sp
   8B41 F9            [ 6] 7609 	ld	sp, hl
                           7610 ;src/main.c:1794: u8 z = 255;	// multipurpose variable
   8B42 DD 36 F0 FF   [19] 7611 	ld	-16 (ix), #0xff
                           7612 ;src/main.c:1795: switch(pSpr->objNum_mov) {
   8B46 DD 7E 04      [19] 7613 	ld	a, 4 (ix)
   8B49 DD 77 F1      [19] 7614 	ld	-15 (ix), a
   8B4C DD 7E 05      [19] 7615 	ld	a, 5 (ix)
   8B4F DD 77 F2      [19] 7616 	ld	-14 (ix), a
   8B52 DD 6E F1      [19] 7617 	ld	l,-15 (ix)
   8B55 DD 66 F2      [19] 7618 	ld	h,-14 (ix)
   8B58 11 0C 00      [10] 7619 	ld	de, #0x000c
   8B5B 19            [11] 7620 	add	hl, de
   8B5C 7E            [ 7] 7621 	ld	a, (hl)
   8B5D DD 77 F5      [19] 7622 	ld	-11 (ix), a
                           7623 ;src/main.c:1798: if (pSpr->dir == D_right) {
   8B60 DD 7E F1      [19] 7624 	ld	a, -15 (ix)
   8B63 C6 07         [ 7] 7625 	add	a, #0x07
   8B65 DD 77 F3      [19] 7626 	ld	-13 (ix), a
   8B68 DD 7E F2      [19] 7627 	ld	a, -14 (ix)
   8B6B CE 00         [ 7] 7628 	adc	a, #0x00
   8B6D DD 77 F4      [19] 7629 	ld	-12 (ix), a
                           7630 ;src/main.c:1800: if (pSpr->x < pSpr->power_maxV) 
   8B70 DD 7E F1      [19] 7631 	ld	a, -15 (ix)
   8B73 C6 02         [ 7] 7632 	add	a, #0x02
   8B75 DD 77 F6      [19] 7633 	ld	-10 (ix), a
   8B78 DD 7E F2      [19] 7634 	ld	a, -14 (ix)
   8B7B CE 00         [ 7] 7635 	adc	a, #0x00
   8B7D DD 77 F7      [19] 7636 	ld	-9 (ix), a
   8B80 DD 7E F1      [19] 7637 	ld	a, -15 (ix)
   8B83 C6 0E         [ 7] 7638 	add	a, #0x0e
   8B85 DD 77 FA      [19] 7639 	ld	-6 (ix), a
   8B88 DD 7E F2      [19] 7640 	ld	a, -14 (ix)
   8B8B CE 00         [ 7] 7641 	adc	a, #0x00
   8B8D DD 77 FB      [19] 7642 	ld	-5 (ix), a
                           7643 ;src/main.c:1801: pSpr->x = pSpr->x + pSpr->lives_speed;
   8B90 DD 7E F1      [19] 7644 	ld	a, -15 (ix)
   8B93 C6 0B         [ 7] 7645 	add	a, #0x0b
   8B95 DD 77 F8      [19] 7646 	ld	-8 (ix), a
   8B98 DD 7E F2      [19] 7647 	ld	a, -14 (ix)
   8B9B CE 00         [ 7] 7648 	adc	a, #0x00
   8B9D DD 77 F9      [19] 7649 	ld	-7 (ix), a
                           7650 ;src/main.c:1807: if (pSpr->x > pSpr->print_minV)  
   8BA0 DD 7E F1      [19] 7651 	ld	a, -15 (ix)
   8BA3 C6 0D         [ 7] 7652 	add	a, #0x0d
   8BA5 DD 77 FC      [19] 7653 	ld	-4 (ix), a
   8BA8 DD 7E F2      [19] 7654 	ld	a, -14 (ix)
   8BAB CE 00         [ 7] 7655 	adc	a, #0x00
   8BAD DD 77 FD      [19] 7656 	ld	-3 (ix), a
                           7657 ;src/main.c:1814: if (pSpr->y > (spr[0].y - SHT_H) && pSpr->y < (spr[0].y + SHT_H)) z = 0; // P1
   8BB0 DD 7E F1      [19] 7658 	ld	a, -15 (ix)
   8BB3 C6 03         [ 7] 7659 	add	a, #0x03
   8BB5 DD 77 FE      [19] 7660 	ld	-2 (ix), a
   8BB8 DD 7E F2      [19] 7661 	ld	a, -14 (ix)
   8BBB CE 00         [ 7] 7662 	adc	a, #0x00
   8BBD DD 77 FF      [19] 7663 	ld	-1 (ix), a
                           7664 ;src/main.c:1795: switch(pSpr->objNum_mov) {
   8BC0 DD 7E F5      [19] 7665 	ld	a, -11 (ix)
   8BC3 B7            [ 4] 7666 	or	a, a
   8BC4 28 1A         [12] 7667 	jr	Z,00101$
   8BC6 DD 7E F5      [19] 7668 	ld	a, -11 (ix)
   8BC9 3D            [ 4] 7669 	dec	a
   8BCA CA 0A 8D      [10] 7670 	jp	Z,00125$
   8BCD DD 7E F5      [19] 7671 	ld	a, -11 (ix)
   8BD0 D6 02         [ 7] 7672 	sub	a, #0x02
   8BD2 CA 6F 8D      [10] 7673 	jp	Z,00135$
   8BD5 DD 7E F5      [19] 7674 	ld	a, -11 (ix)
   8BD8 D6 03         [ 7] 7675 	sub	a, #0x03
   8BDA CA AE 8E      [10] 7676 	jp	Z,00152$
   8BDD C3 C0 8F      [10] 7677 	jp	00168$
                           7678 ;src/main.c:1797: case M_linear_X:
   8BE0                    7679 00101$:
                           7680 ;src/main.c:1798: if (pSpr->dir == D_right) {
   8BE0 DD 6E F3      [19] 7681 	ld	l,-13 (ix)
   8BE3 DD 66 F4      [19] 7682 	ld	h,-12 (ix)
   8BE6 7E            [ 7] 7683 	ld	a, (hl)
                           7684 ;src/main.c:1817: if (spr[z].x > pSpr->x) pSpr->dir = D_right; 
   8BE7 DD 6E F6      [19] 7685 	ld	l,-10 (ix)
   8BEA DD 66 F7      [19] 7686 	ld	h,-9 (ix)
   8BED 4E            [ 7] 7687 	ld	c, (hl)
                           7688 ;src/main.c:1798: if (pSpr->dir == D_right) {
   8BEE D6 03         [ 7] 7689 	sub	a, #0x03
   8BF0 20 27         [12] 7690 	jr	NZ,00109$
                           7691 ;src/main.c:1800: if (pSpr->x < pSpr->power_maxV) 
   8BF2 DD 6E FA      [19] 7692 	ld	l,-6 (ix)
   8BF5 DD 66 FB      [19] 7693 	ld	h,-5 (ix)
   8BF8 46            [ 7] 7694 	ld	b, (hl)
   8BF9 79            [ 4] 7695 	ld	a, c
   8BFA 90            [ 4] 7696 	sub	a, b
   8BFB 30 12         [12] 7697 	jr	NC,00103$
                           7698 ;src/main.c:1801: pSpr->x = pSpr->x + pSpr->lives_speed;
   8BFD DD 6E F8      [19] 7699 	ld	l,-8 (ix)
   8C00 DD 66 F9      [19] 7700 	ld	h,-7 (ix)
   8C03 46            [ 7] 7701 	ld	b, (hl)
   8C04 79            [ 4] 7702 	ld	a, c
   8C05 80            [ 4] 7703 	add	a, b
   8C06 DD 6E F6      [19] 7704 	ld	l,-10 (ix)
   8C09 DD 66 F7      [19] 7705 	ld	h,-9 (ix)
   8C0C 77            [ 7] 7706 	ld	(hl), a
   8C0D 18 2E         [12] 7707 	jr	00110$
   8C0F                    7708 00103$:
                           7709 ;src/main.c:1803: pSpr->dir = D_left;
   8C0F DD 6E F3      [19] 7710 	ld	l,-13 (ix)
   8C12 DD 66 F4      [19] 7711 	ld	h,-12 (ix)
   8C15 36 02         [10] 7712 	ld	(hl), #0x02
   8C17 18 24         [12] 7713 	jr	00110$
   8C19                    7714 00109$:
                           7715 ;src/main.c:1807: if (pSpr->x > pSpr->print_minV)  
   8C19 DD 6E FC      [19] 7716 	ld	l,-4 (ix)
   8C1C DD 66 FD      [19] 7717 	ld	h,-3 (ix)
   8C1F 7E            [ 7] 7718 	ld	a, (hl)
   8C20 91            [ 4] 7719 	sub	a, c
   8C21 30 12         [12] 7720 	jr	NC,00106$
                           7721 ;src/main.c:1808: pSpr->x = pSpr->x - pSpr->lives_speed;
   8C23 DD 6E F8      [19] 7722 	ld	l,-8 (ix)
   8C26 DD 66 F9      [19] 7723 	ld	h,-7 (ix)
   8C29 46            [ 7] 7724 	ld	b, (hl)
   8C2A 79            [ 4] 7725 	ld	a, c
   8C2B 90            [ 4] 7726 	sub	a, b
   8C2C DD 6E F6      [19] 7727 	ld	l,-10 (ix)
   8C2F DD 66 F7      [19] 7728 	ld	h,-9 (ix)
   8C32 77            [ 7] 7729 	ld	(hl), a
   8C33 18 08         [12] 7730 	jr	00110$
   8C35                    7731 00106$:
                           7732 ;src/main.c:1810: pSpr->dir = D_right; 
   8C35 DD 6E F3      [19] 7733 	ld	l,-13 (ix)
   8C38 DD 66 F4      [19] 7734 	ld	h,-12 (ix)
   8C3B 36 03         [10] 7735 	ld	(hl), #0x03
   8C3D                    7736 00110$:
                           7737 ;src/main.c:1813: if (pSpr->ident == WITCH) {
   8C3D DD 6E F1      [19] 7738 	ld	l,-15 (ix)
   8C40 DD 66 F2      [19] 7739 	ld	h,-14 (ix)
   8C43 23            [ 6] 7740 	inc	hl
   8C44 7E            [ 7] 7741 	ld	a, (hl)
   8C45 D6 06         [ 7] 7742 	sub	a, #0x06
   8C47 C2 C0 8F      [10] 7743 	jp	NZ,00168$
                           7744 ;src/main.c:1814: if (pSpr->y > (spr[0].y - SHT_H) && pSpr->y < (spr[0].y + SHT_H)) z = 0; // P1
   8C4A DD 6E FE      [19] 7745 	ld	l,-2 (ix)
   8C4D DD 66 FF      [19] 7746 	ld	h,-1 (ix)
   8C50 5E            [ 7] 7747 	ld	e, (hl)
   8C51 21 0D 5F      [10] 7748 	ld	hl, #_spr + 3
   8C54 4E            [ 7] 7749 	ld	c, (hl)
   8C55 06 00         [ 7] 7750 	ld	b, #0x00
   8C57 79            [ 4] 7751 	ld	a, c
   8C58 C6 F8         [ 7] 7752 	add	a, #0xf8
   8C5A 6F            [ 4] 7753 	ld	l, a
   8C5B 78            [ 4] 7754 	ld	a, b
   8C5C CE FF         [ 7] 7755 	adc	a, #0xff
   8C5E 67            [ 4] 7756 	ld	h, a
   8C5F 16 00         [ 7] 7757 	ld	d, #0x00
   8C61 7D            [ 4] 7758 	ld	a, l
   8C62 93            [ 4] 7759 	sub	a, e
   8C63 7C            [ 4] 7760 	ld	a, h
   8C64 9A            [ 4] 7761 	sbc	a, d
   8C65 E2 6A 8C      [10] 7762 	jp	PO, 00302$
   8C68 EE 80         [ 7] 7763 	xor	a, #0x80
   8C6A                    7764 00302$:
   8C6A F2 83 8C      [10] 7765 	jp	P, 00115$
   8C6D 21 08 00      [10] 7766 	ld	hl, #0x0008
   8C70 09            [11] 7767 	add	hl, bc
   8C71 7B            [ 4] 7768 	ld	a, e
   8C72 95            [ 4] 7769 	sub	a, l
   8C73 7A            [ 4] 7770 	ld	a, d
   8C74 9C            [ 4] 7771 	sbc	a, h
   8C75 E2 7A 8C      [10] 7772 	jp	PO, 00303$
   8C78 EE 80         [ 7] 7773 	xor	a, #0x80
   8C7A                    7774 00303$:
   8C7A F2 83 8C      [10] 7775 	jp	P, 00115$
   8C7D DD 36 F0 00   [19] 7776 	ld	-16 (ix), #0x00
   8C81 18 2E         [12] 7777 	jr	00116$
   8C83                    7778 00115$:
                           7779 ;src/main.c:1815: else if (pSpr->y > (spr[1].y - SHT_H) && pSpr->y < (spr[1].y + SHT_H)) z = 1; // P2
   8C83 21 1C 5F      [10] 7780 	ld	hl, #_spr + 18
   8C86 4E            [ 7] 7781 	ld	c, (hl)
   8C87 06 00         [ 7] 7782 	ld	b, #0x00
   8C89 79            [ 4] 7783 	ld	a, c
   8C8A C6 F8         [ 7] 7784 	add	a, #0xf8
   8C8C 6F            [ 4] 7785 	ld	l, a
   8C8D 78            [ 4] 7786 	ld	a, b
   8C8E CE FF         [ 7] 7787 	adc	a, #0xff
   8C90 67            [ 4] 7788 	ld	h, a
   8C91 7D            [ 4] 7789 	ld	a, l
   8C92 93            [ 4] 7790 	sub	a, e
   8C93 7C            [ 4] 7791 	ld	a, h
   8C94 9A            [ 4] 7792 	sbc	a, d
   8C95 E2 9A 8C      [10] 7793 	jp	PO, 00304$
   8C98 EE 80         [ 7] 7794 	xor	a, #0x80
   8C9A                    7795 00304$:
   8C9A F2 B1 8C      [10] 7796 	jp	P, 00116$
   8C9D 21 08 00      [10] 7797 	ld	hl, #0x0008
   8CA0 09            [11] 7798 	add	hl, bc
   8CA1 7B            [ 4] 7799 	ld	a, e
   8CA2 95            [ 4] 7800 	sub	a, l
   8CA3 7A            [ 4] 7801 	ld	a, d
   8CA4 9C            [ 4] 7802 	sbc	a, h
   8CA5 E2 AA 8C      [10] 7803 	jp	PO, 00305$
   8CA8 EE 80         [ 7] 7804 	xor	a, #0x80
   8CAA                    7805 00305$:
   8CAA F2 B1 8C      [10] 7806 	jp	P, 00116$
   8CAD DD 36 F0 01   [19] 7807 	ld	-16 (ix), #0x01
   8CB1                    7808 00116$:
                           7809 ;src/main.c:1816: if (z < 255) {
   8CB1 DD 7E F0      [19] 7810 	ld	a, -16 (ix)
   8CB4 D6 FF         [ 7] 7811 	sub	a, #0xff
   8CB6 D2 C0 8F      [10] 7812 	jp	NC, 00168$
                           7813 ;src/main.c:1817: if (spr[z].x > pSpr->x) pSpr->dir = D_right; 
   8CB9 DD 4E F0      [19] 7814 	ld	c,-16 (ix)
   8CBC 06 00         [ 7] 7815 	ld	b,#0x00
   8CBE 69            [ 4] 7816 	ld	l, c
   8CBF 60            [ 4] 7817 	ld	h, b
   8CC0 29            [11] 7818 	add	hl, hl
   8CC1 09            [11] 7819 	add	hl, bc
   8CC2 29            [11] 7820 	add	hl, hl
   8CC3 09            [11] 7821 	add	hl, bc
   8CC4 29            [11] 7822 	add	hl, hl
   8CC5 09            [11] 7823 	add	hl, bc
   8CC6 11 0A 5F      [10] 7824 	ld	de, #_spr
   8CC9 19            [11] 7825 	add	hl, de
   8CCA 23            [ 6] 7826 	inc	hl
   8CCB 23            [ 6] 7827 	inc	hl
   8CCC 4E            [ 7] 7828 	ld	c, (hl)
   8CCD DD 6E F6      [19] 7829 	ld	l,-10 (ix)
   8CD0 DD 66 F7      [19] 7830 	ld	h,-9 (ix)
   8CD3 7E            [ 7] 7831 	ld	a, (hl)
   8CD4 91            [ 4] 7832 	sub	a, c
   8CD5 30 0A         [12] 7833 	jr	NC,00119$
   8CD7 DD 6E F3      [19] 7834 	ld	l,-13 (ix)
   8CDA DD 66 F4      [19] 7835 	ld	h,-12 (ix)
   8CDD 36 03         [10] 7836 	ld	(hl), #0x03
   8CDF 18 08         [12] 7837 	jr	00120$
   8CE1                    7838 00119$:
                           7839 ;src/main.c:1818: else pSpr->dir = D_left;
   8CE1 DD 6E F3      [19] 7840 	ld	l,-13 (ix)
   8CE4 DD 66 F4      [19] 7841 	ld	h,-12 (ix)
   8CE7 36 02         [10] 7842 	ld	(hl), #0x02
   8CE9                    7843 00120$:
                           7844 ;src/main.c:1819: MakeShot(pSpr->x, pSpr->y, pSpr->dir);
   8CE9 DD 6E F3      [19] 7845 	ld	l,-13 (ix)
   8CEC DD 66 F4      [19] 7846 	ld	h,-12 (ix)
   8CEF 7E            [ 7] 7847 	ld	a, (hl)
   8CF0 DD 6E FE      [19] 7848 	ld	l,-2 (ix)
   8CF3 DD 66 FF      [19] 7849 	ld	h,-1 (ix)
   8CF6 56            [ 7] 7850 	ld	d, (hl)
   8CF7 DD 6E F6      [19] 7851 	ld	l,-10 (ix)
   8CFA DD 66 F7      [19] 7852 	ld	h,-9 (ix)
   8CFD 46            [ 7] 7853 	ld	b, (hl)
   8CFE F5            [11] 7854 	push	af
   8CFF 33            [ 6] 7855 	inc	sp
   8D00 58            [ 4] 7856 	ld	e, b
   8D01 D5            [11] 7857 	push	de
   8D02 CD BB 88      [17] 7858 	call	_MakeShot
   8D05 F1            [10] 7859 	pop	af
   8D06 33            [ 6] 7860 	inc	sp
                           7861 ;src/main.c:1822: break;
   8D07 C3 C0 8F      [10] 7862 	jp	00168$
                           7863 ;src/main.c:1825: case M_linear_Y:
   8D0A                    7864 00125$:
                           7865 ;src/main.c:1826: if (pSpr->dir == D_down) {
   8D0A DD 6E F3      [19] 7866 	ld	l,-13 (ix)
   8D0D DD 66 F4      [19] 7867 	ld	h,-12 (ix)
   8D10 46            [ 7] 7868 	ld	b, (hl)
                           7869 ;src/main.c:1814: if (pSpr->y > (spr[0].y - SHT_H) && pSpr->y < (spr[0].y + SHT_H)) z = 0; // P1
   8D11 DD 6E FE      [19] 7870 	ld	l,-2 (ix)
   8D14 DD 66 FF      [19] 7871 	ld	h,-1 (ix)
   8D17 4E            [ 7] 7872 	ld	c, (hl)
                           7873 ;src/main.c:1826: if (pSpr->dir == D_down) {
   8D18 10 2B         [13] 7874 	djnz	00133$
                           7875 ;src/main.c:1828: if (pSpr->y < pSpr->power_maxV)
   8D1A DD 6E FA      [19] 7876 	ld	l,-6 (ix)
   8D1D DD 66 FB      [19] 7877 	ld	h,-5 (ix)
   8D20 46            [ 7] 7878 	ld	b, (hl)
   8D21 79            [ 4] 7879 	ld	a, c
   8D22 90            [ 4] 7880 	sub	a, b
   8D23 30 15         [12] 7881 	jr	NC,00127$
                           7882 ;src/main.c:1829: pSpr->y = pSpr->y + (pSpr->lives_speed*2);
   8D25 DD 6E F8      [19] 7883 	ld	l,-8 (ix)
   8D28 DD 66 F9      [19] 7884 	ld	h,-7 (ix)
   8D2B 46            [ 7] 7885 	ld	b, (hl)
   8D2C CB 20         [ 8] 7886 	sla	b
   8D2E 79            [ 4] 7887 	ld	a, c
   8D2F 80            [ 4] 7888 	add	a, b
   8D30 DD 6E FE      [19] 7889 	ld	l,-2 (ix)
   8D33 DD 66 FF      [19] 7890 	ld	h,-1 (ix)
   8D36 77            [ 7] 7891 	ld	(hl), a
   8D37 C3 C0 8F      [10] 7892 	jp	00168$
   8D3A                    7893 00127$:
                           7894 ;src/main.c:1831: pSpr->dir = D_up;
   8D3A DD 6E F3      [19] 7895 	ld	l,-13 (ix)
   8D3D DD 66 F4      [19] 7896 	ld	h,-12 (ix)
   8D40 36 00         [10] 7897 	ld	(hl), #0x00
   8D42 C3 C0 8F      [10] 7898 	jp	00168$
   8D45                    7899 00133$:
                           7900 ;src/main.c:1835: if (pSpr->y > pSpr->print_minV) 
   8D45 DD 6E FC      [19] 7901 	ld	l,-4 (ix)
   8D48 DD 66 FD      [19] 7902 	ld	h,-3 (ix)
   8D4B 7E            [ 7] 7903 	ld	a, (hl)
   8D4C 91            [ 4] 7904 	sub	a, c
   8D4D 30 15         [12] 7905 	jr	NC,00130$
                           7906 ;src/main.c:1836: pSpr->y = pSpr->y - (pSpr->lives_speed*2);
   8D4F DD 6E F8      [19] 7907 	ld	l,-8 (ix)
   8D52 DD 66 F9      [19] 7908 	ld	h,-7 (ix)
   8D55 46            [ 7] 7909 	ld	b, (hl)
   8D56 CB 20         [ 8] 7910 	sla	b
   8D58 79            [ 4] 7911 	ld	a, c
   8D59 90            [ 4] 7912 	sub	a, b
   8D5A DD 6E FE      [19] 7913 	ld	l,-2 (ix)
   8D5D DD 66 FF      [19] 7914 	ld	h,-1 (ix)
   8D60 77            [ 7] 7915 	ld	(hl), a
   8D61 C3 C0 8F      [10] 7916 	jp	00168$
   8D64                    7917 00130$:
                           7918 ;src/main.c:1838: pSpr->dir = D_down; 
   8D64 DD 6E F3      [19] 7919 	ld	l,-13 (ix)
   8D67 DD 66 F4      [19] 7920 	ld	h,-12 (ix)
   8D6A 36 01         [10] 7921 	ld	(hl), #0x01
                           7922 ;src/main.c:1840: break;
   8D6C C3 C0 8F      [10] 7923 	jp	00168$
                           7924 ;src/main.c:1843: case M_linear_XY:		
   8D6F                    7925 00135$:
                           7926 ;src/main.c:1845: if (pSpr->dir == D_up && OnBackground(pSpr->x, pSpr->y - (pSpr->lives_speed*2)-8))
   8D6F DD 6E F3      [19] 7927 	ld	l,-13 (ix)
   8D72 DD 66 F4      [19] 7928 	ld	h,-12 (ix)
   8D75 7E            [ 7] 7929 	ld	a, (hl)
   8D76 B7            [ 4] 7930 	or	a, a
   8D77 20 41         [12] 7931 	jr	NZ,00149$
   8D79 DD 6E FE      [19] 7932 	ld	l,-2 (ix)
   8D7C DD 66 FF      [19] 7933 	ld	h,-1 (ix)
   8D7F 4E            [ 7] 7934 	ld	c, (hl)
   8D80 DD 6E F8      [19] 7935 	ld	l,-8 (ix)
   8D83 DD 66 F9      [19] 7936 	ld	h,-7 (ix)
   8D86 46            [ 7] 7937 	ld	b, (hl)
   8D87 CB 20         [ 8] 7938 	sla	b
   8D89 79            [ 4] 7939 	ld	a, c
   8D8A 90            [ 4] 7940 	sub	a, b
   8D8B C6 F8         [ 7] 7941 	add	a, #0xf8
   8D8D 57            [ 4] 7942 	ld	d, a
   8D8E DD 6E F6      [19] 7943 	ld	l,-10 (ix)
   8D91 DD 66 F7      [19] 7944 	ld	h,-9 (ix)
   8D94 5E            [ 7] 7945 	ld	e, (hl)
   8D95 D5            [11] 7946 	push	de
   8D96 CD 0A 62      [17] 7947 	call	_OnBackground
   8D99 F1            [10] 7948 	pop	af
   8D9A 7D            [ 4] 7949 	ld	a, l
   8D9B B7            [ 4] 7950 	or	a, a
   8D9C 28 1C         [12] 7951 	jr	Z,00149$
                           7952 ;src/main.c:1846: pSpr->y = pSpr->y - (pSpr->lives_speed*2);			
   8D9E DD 6E FE      [19] 7953 	ld	l,-2 (ix)
   8DA1 DD 66 FF      [19] 7954 	ld	h,-1 (ix)
   8DA4 4E            [ 7] 7955 	ld	c, (hl)
   8DA5 DD 6E F8      [19] 7956 	ld	l,-8 (ix)
   8DA8 DD 66 F9      [19] 7957 	ld	h,-7 (ix)
   8DAB 46            [ 7] 7958 	ld	b, (hl)
   8DAC CB 20         [ 8] 7959 	sla	b
   8DAE 79            [ 4] 7960 	ld	a, c
   8DAF 90            [ 4] 7961 	sub	a, b
   8DB0 DD 6E FE      [19] 7962 	ld	l,-2 (ix)
   8DB3 DD 66 FF      [19] 7963 	ld	h,-1 (ix)
   8DB6 77            [ 7] 7964 	ld	(hl), a
   8DB7 C3 C0 8F      [10] 7965 	jp	00168$
   8DBA                    7966 00149$:
                           7967 ;src/main.c:1848: else if (pSpr->dir == D_down && OnBackground(pSpr->x, pSpr->y + (pSpr->lives_speed*2)+2))
   8DBA DD 6E F3      [19] 7968 	ld	l,-13 (ix)
   8DBD DD 66 F4      [19] 7969 	ld	h,-12 (ix)
   8DC0 4E            [ 7] 7970 	ld	c, (hl)
   8DC1 0D            [ 4] 7971 	dec	c
   8DC2 20 40         [12] 7972 	jr	NZ,00145$
   8DC4 DD 6E FE      [19] 7973 	ld	l,-2 (ix)
   8DC7 DD 66 FF      [19] 7974 	ld	h,-1 (ix)
   8DCA 4E            [ 7] 7975 	ld	c, (hl)
   8DCB DD 6E F8      [19] 7976 	ld	l,-8 (ix)
   8DCE DD 66 F9      [19] 7977 	ld	h,-7 (ix)
   8DD1 6E            [ 7] 7978 	ld	l, (hl)
   8DD2 CB 25         [ 8] 7979 	sla	l
   8DD4 09            [11] 7980 	add	hl, bc
   8DD5 55            [ 4] 7981 	ld	d, l
   8DD6 14            [ 4] 7982 	inc	d
   8DD7 14            [ 4] 7983 	inc	d
   8DD8 DD 6E F6      [19] 7984 	ld	l,-10 (ix)
   8DDB DD 66 F7      [19] 7985 	ld	h,-9 (ix)
   8DDE 5E            [ 7] 7986 	ld	e, (hl)
   8DDF D5            [11] 7987 	push	de
   8DE0 CD 0A 62      [17] 7988 	call	_OnBackground
   8DE3 F1            [10] 7989 	pop	af
   8DE4 7D            [ 4] 7990 	ld	a, l
   8DE5 B7            [ 4] 7991 	or	a, a
   8DE6 28 1C         [12] 7992 	jr	Z,00145$
                           7993 ;src/main.c:1849: pSpr->y = pSpr->y + (pSpr->lives_speed*2);
   8DE8 DD 6E FE      [19] 7994 	ld	l,-2 (ix)
   8DEB DD 66 FF      [19] 7995 	ld	h,-1 (ix)
   8DEE 4E            [ 7] 7996 	ld	c, (hl)
   8DEF DD 6E F8      [19] 7997 	ld	l,-8 (ix)
   8DF2 DD 66 F9      [19] 7998 	ld	h,-7 (ix)
   8DF5 46            [ 7] 7999 	ld	b, (hl)
   8DF6 CB 20         [ 8] 8000 	sla	b
   8DF8 79            [ 4] 8001 	ld	a, c
   8DF9 80            [ 4] 8002 	add	a, b
   8DFA DD 6E FE      [19] 8003 	ld	l,-2 (ix)
   8DFD DD 66 FF      [19] 8004 	ld	h,-1 (ix)
   8E00 77            [ 7] 8005 	ld	(hl), a
   8E01 C3 C0 8F      [10] 8006 	jp	00168$
   8E04                    8007 00145$:
                           8008 ;src/main.c:1851: else if (pSpr->dir == D_left && OnBackground((pSpr->x - pSpr->lives_speed)-3, pSpr->y))
   8E04 DD 6E F3      [19] 8009 	ld	l,-13 (ix)
   8E07 DD 66 F4      [19] 8010 	ld	h,-12 (ix)
   8E0A 7E            [ 7] 8011 	ld	a, (hl)
   8E0B D6 02         [ 7] 8012 	sub	a, #0x02
   8E0D 20 3D         [12] 8013 	jr	NZ,00141$
   8E0F DD 6E FE      [19] 8014 	ld	l,-2 (ix)
   8E12 DD 66 FF      [19] 8015 	ld	h,-1 (ix)
   8E15 56            [ 7] 8016 	ld	d, (hl)
   8E16 DD 6E F6      [19] 8017 	ld	l,-10 (ix)
   8E19 DD 66 F7      [19] 8018 	ld	h,-9 (ix)
   8E1C 4E            [ 7] 8019 	ld	c, (hl)
   8E1D DD 6E F8      [19] 8020 	ld	l,-8 (ix)
   8E20 DD 66 F9      [19] 8021 	ld	h,-7 (ix)
   8E23 5E            [ 7] 8022 	ld	e, (hl)
   8E24 79            [ 4] 8023 	ld	a, c
   8E25 93            [ 4] 8024 	sub	a, e
   8E26 C6 FD         [ 7] 8025 	add	a, #0xfd
   8E28 5F            [ 4] 8026 	ld	e,a
   8E29 D5            [11] 8027 	push	de
   8E2A CD 0A 62      [17] 8028 	call	_OnBackground
   8E2D F1            [10] 8029 	pop	af
   8E2E 7D            [ 4] 8030 	ld	a, l
   8E2F B7            [ 4] 8031 	or	a, a
   8E30 28 1A         [12] 8032 	jr	Z,00141$
                           8033 ;src/main.c:1852: pSpr->x = pSpr->x - pSpr->lives_speed;
   8E32 DD 6E F6      [19] 8034 	ld	l,-10 (ix)
   8E35 DD 66 F7      [19] 8035 	ld	h,-9 (ix)
   8E38 4E            [ 7] 8036 	ld	c, (hl)
   8E39 DD 6E F8      [19] 8037 	ld	l,-8 (ix)
   8E3C DD 66 F9      [19] 8038 	ld	h,-7 (ix)
   8E3F 46            [ 7] 8039 	ld	b, (hl)
   8E40 79            [ 4] 8040 	ld	a, c
   8E41 90            [ 4] 8041 	sub	a, b
   8E42 DD 6E F6      [19] 8042 	ld	l,-10 (ix)
   8E45 DD 66 F7      [19] 8043 	ld	h,-9 (ix)
   8E48 77            [ 7] 8044 	ld	(hl), a
   8E49 C3 C0 8F      [10] 8045 	jp	00168$
   8E4C                    8046 00141$:
                           8047 ;src/main.c:1854: else if (pSpr->dir == D_right && OnBackground((pSpr->x + pSpr->lives_speed)+1, pSpr->y))
   8E4C DD 6E F3      [19] 8048 	ld	l,-13 (ix)
   8E4F DD 66 F4      [19] 8049 	ld	h,-12 (ix)
   8E52 7E            [ 7] 8050 	ld	a, (hl)
   8E53 D6 03         [ 7] 8051 	sub	a, #0x03
   8E55 20 3C         [12] 8052 	jr	NZ,00137$
   8E57 DD 6E FE      [19] 8053 	ld	l,-2 (ix)
   8E5A DD 66 FF      [19] 8054 	ld	h,-1 (ix)
   8E5D 56            [ 7] 8055 	ld	d, (hl)
   8E5E DD 6E F6      [19] 8056 	ld	l,-10 (ix)
   8E61 DD 66 F7      [19] 8057 	ld	h,-9 (ix)
   8E64 4E            [ 7] 8058 	ld	c, (hl)
   8E65 DD 6E F8      [19] 8059 	ld	l,-8 (ix)
   8E68 DD 66 F9      [19] 8060 	ld	h,-7 (ix)
   8E6B 6E            [ 7] 8061 	ld	l, (hl)
   8E6C 09            [11] 8062 	add	hl, bc
   8E6D 45            [ 4] 8063 	ld	b, l
   8E6E 04            [ 4] 8064 	inc	b
   8E6F 58            [ 4] 8065 	ld	e, b
   8E70 D5            [11] 8066 	push	de
   8E71 CD 0A 62      [17] 8067 	call	_OnBackground
   8E74 F1            [10] 8068 	pop	af
   8E75 7D            [ 4] 8069 	ld	a, l
   8E76 B7            [ 4] 8070 	or	a, a
   8E77 28 1A         [12] 8071 	jr	Z,00137$
                           8072 ;src/main.c:1855: pSpr->x = pSpr->x + pSpr->lives_speed;
   8E79 DD 6E F6      [19] 8073 	ld	l,-10 (ix)
   8E7C DD 66 F7      [19] 8074 	ld	h,-9 (ix)
   8E7F 4E            [ 7] 8075 	ld	c, (hl)
   8E80 DD 6E F8      [19] 8076 	ld	l,-8 (ix)
   8E83 DD 66 F9      [19] 8077 	ld	h,-7 (ix)
   8E86 46            [ 7] 8078 	ld	b, (hl)
   8E87 79            [ 4] 8079 	ld	a, c
   8E88 80            [ 4] 8080 	add	a, b
   8E89 DD 6E F6      [19] 8081 	ld	l,-10 (ix)
   8E8C DD 66 F7      [19] 8082 	ld	h,-9 (ix)
   8E8F 77            [ 7] 8083 	ld	(hl), a
   8E90 C3 C0 8F      [10] 8084 	jp	00168$
   8E93                    8085 00137$:
                           8086 ;src/main.c:1857: else pSpr->dir = cpct_getRandom_lcg_u8(0) / 65; // 0-1-2-3			
   8E93 2E 00         [ 7] 8087 	ld	l, #0x00
   8E95 CD D4 5B      [17] 8088 	call	_cpct_getRandom_lcg_u8
   8E98 45            [ 4] 8089 	ld	b, l
   8E99 3E 41         [ 7] 8090 	ld	a, #0x41
   8E9B F5            [11] 8091 	push	af
   8E9C 33            [ 6] 8092 	inc	sp
   8E9D C5            [11] 8093 	push	bc
   8E9E 33            [ 6] 8094 	inc	sp
   8E9F CD 71 51      [17] 8095 	call	__divuchar
   8EA2 F1            [10] 8096 	pop	af
   8EA3 4D            [ 4] 8097 	ld	c, l
   8EA4 DD 6E F3      [19] 8098 	ld	l,-13 (ix)
   8EA7 DD 66 F4      [19] 8099 	ld	h,-12 (ix)
   8EAA 71            [ 7] 8100 	ld	(hl), c
                           8101 ;src/main.c:1858: break;
   8EAB C3 C0 8F      [10] 8102 	jp	00168$
                           8103 ;src/main.c:1861: case M_chaser:
   8EAE                    8104 00152$:
                           8105 ;src/main.c:1862: if (ctMainLoop % pSpr->lives_speed == 0) {
   8EAE DD 6E F8      [19] 8106 	ld	l,-8 (ix)
   8EB1 DD 66 F9      [19] 8107 	ld	h,-7 (ix)
   8EB4 4E            [ 7] 8108 	ld	c, (hl)
   8EB5 06 00         [ 7] 8109 	ld	b, #0x00
   8EB7 C5            [11] 8110 	push	bc
   8EB8 2A F2 5E      [16] 8111 	ld	hl, (_ctMainLoop)
   8EBB E5            [11] 8112 	push	hl
   8EBC CD C2 5D      [17] 8113 	call	__modsint
   8EBF F1            [10] 8114 	pop	af
   8EC0 F1            [10] 8115 	pop	af
   8EC1 7C            [ 4] 8116 	ld	a, h
                           8117 ;src/main.c:1863: z = 0;
   8EC2 B5            [ 4] 8118 	or	a,l
   8EC3 C2 C0 8F      [10] 8119 	jp	NZ,00168$
   8EC6 4F            [ 4] 8120 	ld	c,a
                           8121 ;src/main.c:1865: if (TwoPlayers)
   8EC7 3A D4 5E      [13] 8122 	ld	a,(#_TwoPlayers + 0)
   8ECA B7            [ 4] 8123 	or	a, a
   8ECB CA 51 8F      [10] 8124 	jp	Z, 00154$
                           8125 ;src/main.c:1866: z = Abs(pSpr->x - spr[1].x)*2 + Abs(pSpr->y - spr[1].y) <
   8ECE DD 6E F6      [19] 8126 	ld	l,-10 (ix)
   8ED1 DD 66 F7      [19] 8127 	ld	h,-9 (ix)
   8ED4 4E            [ 7] 8128 	ld	c, (hl)
   8ED5 06 00         [ 7] 8129 	ld	b, #0x00
   8ED7 21 1B 5F      [10] 8130 	ld	hl, #_spr + 17
   8EDA 5E            [ 7] 8131 	ld	e, (hl)
   8EDB 16 00         [ 7] 8132 	ld	d, #0x00
   8EDD 79            [ 4] 8133 	ld	a, c
   8EDE 93            [ 4] 8134 	sub	a, e
   8EDF 6F            [ 4] 8135 	ld	l, a
   8EE0 78            [ 4] 8136 	ld	a, b
   8EE1 9A            [ 4] 8137 	sbc	a, d
   8EE2 67            [ 4] 8138 	ld	h, a
   8EE3 CD 83 5F      [17] 8139 	call	_Abs
   8EE6 29            [11] 8140 	add	hl, hl
   8EE7 4D            [ 4] 8141 	ld	c, l
   8EE8 44            [ 4] 8142 	ld	b, h
   8EE9 DD 6E FE      [19] 8143 	ld	l,-2 (ix)
   8EEC DD 66 FF      [19] 8144 	ld	h,-1 (ix)
   8EEF 5E            [ 7] 8145 	ld	e, (hl)
   8EF0 16 00         [ 7] 8146 	ld	d, #0x00
   8EF2 21 1C 5F      [10] 8147 	ld	hl, #_spr + 18
   8EF5 6E            [ 7] 8148 	ld	l, (hl)
   8EF6 26 00         [ 7] 8149 	ld	h, #0x00
   8EF8 7B            [ 4] 8150 	ld	a, e
   8EF9 95            [ 4] 8151 	sub	a, l
   8EFA 6F            [ 4] 8152 	ld	l, a
   8EFB 7A            [ 4] 8153 	ld	a, d
   8EFC 9C            [ 4] 8154 	sbc	a, h
   8EFD 67            [ 4] 8155 	ld	h, a
   8EFE C5            [11] 8156 	push	bc
   8EFF CD 83 5F      [17] 8157 	call	_Abs
   8F02 C1            [10] 8158 	pop	bc
   8F03 09            [11] 8159 	add	hl,bc
   8F04 DD 75 FC      [19] 8160 	ld	-4 (ix), l
   8F07 DD 74 FD      [19] 8161 	ld	-3 (ix), h
                           8162 ;src/main.c:1867: Abs(pSpr->x - spr[0].x)*2 + Abs(pSpr->y - spr[0].y);
   8F0A DD 6E F6      [19] 8163 	ld	l,-10 (ix)
   8F0D DD 66 F7      [19] 8164 	ld	h,-9 (ix)
   8F10 4E            [ 7] 8165 	ld	c, (hl)
   8F11 06 00         [ 7] 8166 	ld	b, #0x00
   8F13 21 0C 5F      [10] 8167 	ld	hl, #_spr + 2
   8F16 5E            [ 7] 8168 	ld	e, (hl)
   8F17 16 00         [ 7] 8169 	ld	d, #0x00
   8F19 79            [ 4] 8170 	ld	a, c
   8F1A 93            [ 4] 8171 	sub	a, e
   8F1B 6F            [ 4] 8172 	ld	l, a
   8F1C 78            [ 4] 8173 	ld	a, b
   8F1D 9A            [ 4] 8174 	sbc	a, d
   8F1E 67            [ 4] 8175 	ld	h, a
   8F1F CD 83 5F      [17] 8176 	call	_Abs
   8F22 29            [11] 8177 	add	hl, hl
   8F23 4D            [ 4] 8178 	ld	c, l
   8F24 44            [ 4] 8179 	ld	b, h
   8F25 DD 6E FE      [19] 8180 	ld	l,-2 (ix)
   8F28 DD 66 FF      [19] 8181 	ld	h,-1 (ix)
   8F2B 5E            [ 7] 8182 	ld	e, (hl)
   8F2C 16 00         [ 7] 8183 	ld	d, #0x00
   8F2E 21 0D 5F      [10] 8184 	ld	hl, #_spr + 3
   8F31 6E            [ 7] 8185 	ld	l, (hl)
   8F32 26 00         [ 7] 8186 	ld	h, #0x00
   8F34 7B            [ 4] 8187 	ld	a, e
   8F35 95            [ 4] 8188 	sub	a, l
   8F36 6F            [ 4] 8189 	ld	l, a
   8F37 7A            [ 4] 8190 	ld	a, d
   8F38 9C            [ 4] 8191 	sbc	a, h
   8F39 67            [ 4] 8192 	ld	h, a
   8F3A C5            [11] 8193 	push	bc
   8F3B CD 83 5F      [17] 8194 	call	_Abs
   8F3E C1            [10] 8195 	pop	bc
   8F3F 09            [11] 8196 	add	hl, bc
   8F40 DD 7E FC      [19] 8197 	ld	a, -4 (ix)
   8F43 95            [ 4] 8198 	sub	a, l
   8F44 DD 7E FD      [19] 8199 	ld	a, -3 (ix)
   8F47 9C            [ 4] 8200 	sbc	a, h
   8F48 E2 4D 8F      [10] 8201 	jp	PO, 00314$
   8F4B EE 80         [ 7] 8202 	xor	a, #0x80
   8F4D                    8203 00314$:
   8F4D 07            [ 4] 8204 	rlca
   8F4E E6 01         [ 7] 8205 	and	a,#0x01
   8F50 4F            [ 4] 8206 	ld	c, a
   8F51                    8207 00154$:
                           8208 ;src/main.c:1869: if (pSpr->x < spr[z].x) {
   8F51 DD 6E F6      [19] 8209 	ld	l,-10 (ix)
   8F54 DD 66 F7      [19] 8210 	ld	h,-9 (ix)
   8F57 46            [ 7] 8211 	ld	b, (hl)
   8F58 11 0A 5F      [10] 8212 	ld	de, #_spr+0
   8F5B D5            [11] 8213 	push	de
   8F5C 59            [ 4] 8214 	ld	e,c
   8F5D 16 00         [ 7] 8215 	ld	d,#0x00
   8F5F 6B            [ 4] 8216 	ld	l, e
   8F60 62            [ 4] 8217 	ld	h, d
   8F61 29            [11] 8218 	add	hl, hl
   8F62 19            [11] 8219 	add	hl, de
   8F63 29            [11] 8220 	add	hl, hl
   8F64 19            [11] 8221 	add	hl, de
   8F65 29            [11] 8222 	add	hl, hl
   8F66 19            [11] 8223 	add	hl, de
   8F67 D1            [10] 8224 	pop	de
   8F68 19            [11] 8225 	add	hl,de
   8F69 5D            [ 4] 8226 	ld	e,l
   8F6A 54            [ 4] 8227 	ld	d,h
   8F6B 23            [ 6] 8228 	inc	hl
   8F6C 23            [ 6] 8229 	inc	hl
   8F6D 4E            [ 7] 8230 	ld	c, (hl)
   8F6E 78            [ 4] 8231 	ld	a, b
   8F6F 91            [ 4] 8232 	sub	a, c
   8F70 30 12         [12] 8233 	jr	NC,00158$
                           8234 ;src/main.c:1870: pSpr->x++;
   8F72 04            [ 4] 8235 	inc	b
   8F73 DD 6E F6      [19] 8236 	ld	l,-10 (ix)
   8F76 DD 66 F7      [19] 8237 	ld	h,-9 (ix)
   8F79 70            [ 7] 8238 	ld	(hl), b
                           8239 ;src/main.c:1871: pSpr->dir = D_right;
   8F7A DD 6E F3      [19] 8240 	ld	l,-13 (ix)
   8F7D DD 66 F4      [19] 8241 	ld	h,-12 (ix)
   8F80 36 03         [10] 8242 	ld	(hl), #0x03
   8F82 18 14         [12] 8243 	jr	00159$
   8F84                    8244 00158$:
                           8245 ;src/main.c:1874: else if (pSpr->x > spr[z].x) {
   8F84 79            [ 4] 8246 	ld	a, c
   8F85 90            [ 4] 8247 	sub	a, b
   8F86 30 10         [12] 8248 	jr	NC,00159$
                           8249 ;src/main.c:1875: pSpr->x--;
   8F88 05            [ 4] 8250 	dec	b
   8F89 DD 6E F6      [19] 8251 	ld	l,-10 (ix)
   8F8C DD 66 F7      [19] 8252 	ld	h,-9 (ix)
   8F8F 70            [ 7] 8253 	ld	(hl), b
                           8254 ;src/main.c:1876: pSpr->dir = D_left;
   8F90 DD 6E F3      [19] 8255 	ld	l,-13 (ix)
   8F93 DD 66 F4      [19] 8256 	ld	h,-12 (ix)
   8F96 36 02         [10] 8257 	ld	(hl), #0x02
   8F98                    8258 00159$:
                           8259 ;src/main.c:1879: if (pSpr->y < spr[z].y) {
   8F98 DD 6E FE      [19] 8260 	ld	l,-2 (ix)
   8F9B DD 66 FF      [19] 8261 	ld	h,-1 (ix)
   8F9E 4E            [ 7] 8262 	ld	c, (hl)
   8F9F EB            [ 4] 8263 	ex	de,hl
   8FA0 23            [ 6] 8264 	inc	hl
   8FA1 23            [ 6] 8265 	inc	hl
   8FA2 23            [ 6] 8266 	inc	hl
   8FA3 46            [ 7] 8267 	ld	b, (hl)
   8FA4 79            [ 4] 8268 	ld	a, c
   8FA5 90            [ 4] 8269 	sub	a, b
   8FA6 30 0B         [12] 8270 	jr	NC,00163$
                           8271 ;src/main.c:1880: pSpr->y+=2;
   8FA8 0C            [ 4] 8272 	inc	c
   8FA9 0C            [ 4] 8273 	inc	c
   8FAA DD 6E FE      [19] 8274 	ld	l,-2 (ix)
   8FAD DD 66 FF      [19] 8275 	ld	h,-1 (ix)
   8FB0 71            [ 7] 8276 	ld	(hl), c
   8FB1 18 0D         [12] 8277 	jr	00168$
   8FB3                    8278 00163$:
                           8279 ;src/main.c:1883: else if (pSpr->y > spr[z].y) {
   8FB3 78            [ 4] 8280 	ld	a, b
   8FB4 91            [ 4] 8281 	sub	a, c
   8FB5 30 09         [12] 8282 	jr	NC,00168$
                           8283 ;src/main.c:1884: pSpr->y-=2;
   8FB7 0D            [ 4] 8284 	dec	c
   8FB8 0D            [ 4] 8285 	dec	c
   8FB9 DD 6E FE      [19] 8286 	ld	l,-2 (ix)
   8FBC DD 66 FF      [19] 8287 	ld	h,-1 (ix)
   8FBF 71            [ 7] 8288 	ld	(hl), c
                           8289 ;src/main.c:1888: }
   8FC0                    8290 00168$:
   8FC0 DD F9         [10] 8291 	ld	sp, ix
   8FC2 DD E1         [14] 8292 	pop	ix
   8FC4 C9            [10] 8293 	ret
                           8294 ;src/main.c:1893: void SetEnemyParams(u8 i, u8 ident, u8 mov, u8 dir, u8 speed, u8 x, u8 y, u8 minV, u8 maxV) {
                           8295 ;	---------------------------------
                           8296 ; Function SetEnemyParams
                           8297 ; ---------------------------------
   8FC5                    8298 _SetEnemyParams::
   8FC5 DD E5         [15] 8299 	push	ix
   8FC7 DD 21 00 00   [14] 8300 	ld	ix,#0
   8FCB DD 39         [15] 8301 	add	ix,sp
                           8302 ;src/main.c:1894: spr[i].num = i;
   8FCD 01 0A 5F      [10] 8303 	ld	bc, #_spr+0
   8FD0 DD 5E 04      [19] 8304 	ld	e,4 (ix)
   8FD3 16 00         [ 7] 8305 	ld	d,#0x00
   8FD5 6B            [ 4] 8306 	ld	l, e
   8FD6 62            [ 4] 8307 	ld	h, d
   8FD7 29            [11] 8308 	add	hl, hl
   8FD8 19            [11] 8309 	add	hl, de
   8FD9 29            [11] 8310 	add	hl, hl
   8FDA 19            [11] 8311 	add	hl, de
   8FDB 29            [11] 8312 	add	hl, hl
   8FDC 19            [11] 8313 	add	hl, de
   8FDD 09            [11] 8314 	add	hl,bc
   8FDE 4D            [ 4] 8315 	ld	c, l
   8FDF 44            [ 4] 8316 	ld	b, h
   8FE0 DD 7E 04      [19] 8317 	ld	a, 4 (ix)
   8FE3 02            [ 7] 8318 	ld	(bc), a
                           8319 ;src/main.c:1895: spr[i].ident = ident; 
   8FE4 59            [ 4] 8320 	ld	e, c
   8FE5 50            [ 4] 8321 	ld	d, b
   8FE6 13            [ 6] 8322 	inc	de
   8FE7 DD 7E 05      [19] 8323 	ld	a, 5 (ix)
   8FEA 12            [ 7] 8324 	ld	(de), a
                           8325 ;src/main.c:1896: spr[i].objNum_mov = mov;	 
   8FEB 21 0C 00      [10] 8326 	ld	hl, #0x000c
   8FEE 09            [11] 8327 	add	hl, bc
   8FEF DD 7E 06      [19] 8328 	ld	a, 6 (ix)
   8FF2 77            [ 7] 8329 	ld	(hl), a
                           8330 ;src/main.c:1897: spr[i].dir = dir; 
   8FF3 21 07 00      [10] 8331 	ld	hl, #0x0007
   8FF6 09            [11] 8332 	add	hl, bc
   8FF7 DD 7E 07      [19] 8333 	ld	a, 7 (ix)
   8FFA 77            [ 7] 8334 	ld	(hl), a
                           8335 ;src/main.c:1898: spr[i].lives_speed = speed;
   8FFB 21 0B 00      [10] 8336 	ld	hl, #0x000b
   8FFE 09            [11] 8337 	add	hl, bc
   8FFF DD 7E 08      [19] 8338 	ld	a, 8 (ix)
   9002 77            [ 7] 8339 	ld	(hl), a
                           8340 ;src/main.c:1899: spr[i].x = spr[i].px = x;
   9003 59            [ 4] 8341 	ld	e, c
   9004 50            [ 4] 8342 	ld	d, b
   9005 13            [ 6] 8343 	inc	de
   9006 13            [ 6] 8344 	inc	de
   9007 21 04 00      [10] 8345 	ld	hl, #0x0004
   900A 09            [11] 8346 	add	hl, bc
   900B DD 7E 09      [19] 8347 	ld	a, 9 (ix)
   900E 77            [ 7] 8348 	ld	(hl), a
   900F DD 7E 09      [19] 8349 	ld	a, 9 (ix)
   9012 12            [ 7] 8350 	ld	(de), a
                           8351 ;src/main.c:1900: spr[i].y = spr[i].py = y;
   9013 59            [ 4] 8352 	ld	e, c
   9014 50            [ 4] 8353 	ld	d, b
   9015 13            [ 6] 8354 	inc	de
   9016 13            [ 6] 8355 	inc	de
   9017 13            [ 6] 8356 	inc	de
   9018 21 05 00      [10] 8357 	ld	hl, #0x0005
   901B 09            [11] 8358 	add	hl, bc
   901C DD 7E 0A      [19] 8359 	ld	a, 10 (ix)
   901F 77            [ 7] 8360 	ld	(hl), a
   9020 DD 7E 0A      [19] 8361 	ld	a, 10 (ix)
   9023 12            [ 7] 8362 	ld	(de), a
                           8363 ;src/main.c:1901: spr[i].print_minV = minV;
   9024 21 0D 00      [10] 8364 	ld	hl, #0x000d
   9027 09            [11] 8365 	add	hl, bc
   9028 DD 7E 0B      [19] 8366 	ld	a, 11 (ix)
   902B 77            [ 7] 8367 	ld	(hl), a
                           8368 ;src/main.c:1902: spr[i].power_maxV = maxV;
   902C 21 0E 00      [10] 8369 	ld	hl, #0x000e
   902F 09            [11] 8370 	add	hl, bc
   9030 DD 7E 0C      [19] 8371 	ld	a, 12 (ix)
   9033 77            [ 7] 8372 	ld	(hl), a
   9034 DD E1         [14] 8373 	pop	ix
   9036 C9            [10] 8374 	ret
                           8375 ;src/main.c:1912: void SetEnemies() {
                           8376 ;	---------------------------------
                           8377 ; Function SetEnemies
                           8378 ; ---------------------------------
   9037                    8379 _SetEnemies::
                           8380 ;src/main.c:1913: switch (nMap) {
   9037 3E 0B         [ 7] 8381 	ld	a, #0x0b
   9039 FD 21 D0 5E   [14] 8382 	ld	iy, #_nMap
   903D FD 96 00      [19] 8383 	sub	a, 0 (iy)
   9040 DA 16 99      [10] 8384 	jp	C, 00113$
   9043 FD 4E 00      [19] 8385 	ld	c, 0 (iy)
   9046 06 00         [ 7] 8386 	ld	b, #0x00
   9048 21 4F 90      [10] 8387 	ld	hl, #00126$
   904B 09            [11] 8388 	add	hl, bc
   904C 09            [11] 8389 	add	hl, bc
   904D 09            [11] 8390 	add	hl, bc
   904E E9            [ 4] 8391 	jp	(hl)
   904F                    8392 00126$:
   904F C3 73 90      [10] 8393 	jp	00101$
   9052 C3 2A 91      [10] 8394 	jp	00102$
   9055 C3 E2 91      [10] 8395 	jp	00103$
   9058 C3 9B 92      [10] 8396 	jp	00104$
   905B C3 54 93      [10] 8397 	jp	00105$
   905E C3 0E 94      [10] 8398 	jp	00106$
   9061 C3 C7 94      [10] 8399 	jp	00107$
   9064 C3 81 95      [10] 8400 	jp	00108$
   9067 C3 39 96      [10] 8401 	jp	00109$
   906A C3 F2 96      [10] 8402 	jp	00110$
   906D C3 AA 97      [10] 8403 	jp	00111$
   9070 C3 60 98      [10] 8404 	jp	00112$
                           8405 ;src/main.c:1915: case 0: {			 
   9073                    8406 00101$:
                           8407 ;src/main.c:1917: SetEnemyParams(2, SENTINEL,	M_linear_X, 	D_left,     1, 73, 158,   2,  73);						
   9073 21 02 49      [10] 8408 	ld	hl, #0x4902
   9076 E5            [11] 8409 	push	hl
   9077 21 49 9E      [10] 8410 	ld	hl, #0x9e49
   907A E5            [11] 8411 	push	hl
   907B 21 02 01      [10] 8412 	ld	hl, #0x0102
   907E E5            [11] 8413 	push	hl
   907F 26 00         [ 7] 8414 	ld	h, #0x00
   9081 E5            [11] 8415 	push	hl
   9082 3E 02         [ 7] 8416 	ld	a, #0x02
   9084 F5            [11] 8417 	push	af
   9085 33            [ 6] 8418 	inc	sp
   9086 CD C5 8F      [17] 8419 	call	_SetEnemyParams
   9089 21 09 00      [10] 8420 	ld	hl, #9
   908C 39            [11] 8421 	add	hl, sp
   908D F9            [ 6] 8422 	ld	sp, hl
                           8423 ;src/main.c:1918: SetEnemyParams(3, SENTINEL,	M_linear_X, 	D_right,    1,  3, 110,   2,  73);
   908E 21 02 49      [10] 8424 	ld	hl, #0x4902
   9091 E5            [11] 8425 	push	hl
   9092 21 03 6E      [10] 8426 	ld	hl, #0x6e03
   9095 E5            [11] 8427 	push	hl
   9096 26 01         [ 7] 8428 	ld	h, #0x01
   9098 E5            [11] 8429 	push	hl
   9099 21 02 00      [10] 8430 	ld	hl, #0x0002
   909C E5            [11] 8431 	push	hl
   909D 3E 03         [ 7] 8432 	ld	a, #0x03
   909F F5            [11] 8433 	push	af
   90A0 33            [ 6] 8434 	inc	sp
   90A1 CD C5 8F      [17] 8435 	call	_SetEnemyParams
   90A4 21 09 00      [10] 8436 	ld	hl, #9
   90A7 39            [11] 8437 	add	hl, sp
   90A8 F9            [ 6] 8438 	ld	sp, hl
                           8439 ;src/main.c:1919: SetEnemyParams(4, SENTINEL,	M_linear_X, 	D_left,     1, 73,  62,  40,  73);
   90A9 21 28 49      [10] 8440 	ld	hl, #0x4928
   90AC E5            [11] 8441 	push	hl
   90AD 21 49 3E      [10] 8442 	ld	hl, #0x3e49
   90B0 E5            [11] 8443 	push	hl
   90B1 21 02 01      [10] 8444 	ld	hl, #0x0102
   90B4 E5            [11] 8445 	push	hl
   90B5 26 00         [ 7] 8446 	ld	h, #0x00
   90B7 E5            [11] 8447 	push	hl
   90B8 3E 04         [ 7] 8448 	ld	a, #0x04
   90BA F5            [11] 8449 	push	af
   90BB 33            [ 6] 8450 	inc	sp
   90BC CD C5 8F      [17] 8451 	call	_SetEnemyParams
   90BF 21 09 00      [10] 8452 	ld	hl, #9
   90C2 39            [11] 8453 	add	hl, sp
   90C3 F9            [ 6] 8454 	ld	sp, hl
                           8455 ;src/main.c:1920: SetEnemyParams(5, SENTINEL,	M_linear_X, 	D_right,    1,  2,  62,   2,  35);
   90C4 21 02 23      [10] 8456 	ld	hl, #0x2302
   90C7 E5            [11] 8457 	push	hl
   90C8 26 3E         [ 7] 8458 	ld	h, #0x3e
   90CA E5            [11] 8459 	push	hl
   90CB 21 03 01      [10] 8460 	ld	hl, #0x0103
   90CE E5            [11] 8461 	push	hl
   90CF 21 02 00      [10] 8462 	ld	hl, #0x0002
   90D2 E5            [11] 8463 	push	hl
   90D3 3E 05         [ 7] 8464 	ld	a, #0x05
   90D5 F5            [11] 8465 	push	af
   90D6 33            [ 6] 8466 	inc	sp
   90D7 CD C5 8F      [17] 8467 	call	_SetEnemyParams
   90DA 21 09 00      [10] 8468 	ld	hl, #9
   90DD 39            [11] 8469 	add	hl, sp
   90DE F9            [ 6] 8470 	ld	sp, hl
                           8471 ;src/main.c:1922: spr[0].x = spr[0].px = 6; 
   90DF 21 0E 5F      [10] 8472 	ld	hl, #(_spr + 0x0004)
   90E2 36 06         [10] 8473 	ld	(hl), #0x06
   90E4 21 0C 5F      [10] 8474 	ld	hl, #(_spr + 0x0002)
   90E7 36 06         [10] 8475 	ld	(hl), #0x06
                           8476 ;src/main.c:1923: spr[0].y = spr[0].py = 178;			
   90E9 21 0F 5F      [10] 8477 	ld	hl, #(_spr + 0x0005)
   90EC 36 B2         [10] 8478 	ld	(hl), #0xb2
   90EE 21 0D 5F      [10] 8479 	ld	hl, #(_spr + 0x0003)
   90F1 36 B2         [10] 8480 	ld	(hl), #0xb2
                           8481 ;src/main.c:1925: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk0_end);
   90F3 21 48 4A      [10] 8482 	ld	hl, #(_mappk0 + 0x0279)
   90F6 E5            [11] 8483 	push	hl
   90F7 21 00 16      [10] 8484 	ld	hl, #0x1600
   90FA E5            [11] 8485 	push	hl
   90FB CD 5A 5C      [17] 8486 	call	_cpct_zx7b_decrunch_s
                           8487 ;src/main.c:1927: lName = "1;1@@GARDENS";
   90FE 21 34 99      [10] 8488 	ld	hl, #___str_35+0
   9101 22 D2 5E      [16] 8489 	ld	(_lName), hl
                           8490 ;src/main.c:1929: doorKey[0] = 4;	// toad snot
   9104 21 DF 5E      [10] 8491 	ld	hl, #_doorKey
   9107 36 04         [10] 8492 	ld	(hl), #0x04
                           8493 ;src/main.c:1930: doorKey[1] = 5;	// diamond dust
   9109 21 E0 5E      [10] 8494 	ld	hl, #(_doorKey + 0x0001)
   910C 36 05         [10] 8495 	ld	(hl), #0x05
                           8496 ;src/main.c:1931: doorKey[2] = 4;	// toad snot
   910E 21 E1 5E      [10] 8497 	ld	hl, #(_doorKey + 0x0002)
   9111 36 04         [10] 8498 	ld	(hl), #0x04
                           8499 ;src/main.c:1932: doorKey[3] = 5;	// diamond dust
   9113 21 E2 5E      [10] 8500 	ld	hl, #(_doorKey + 0x0003)
   9116 36 05         [10] 8501 	ld	(hl), #0x05
                           8502 ;src/main.c:1933: doorKey[4] = 4; // toad snot
   9118 21 E3 5E      [10] 8503 	ld	hl, #(_doorKey + 0x0004)
   911B 36 04         [10] 8504 	ld	(hl), #0x04
                           8505 ;src/main.c:1935: storeX = 51;
   911D 21 E9 5E      [10] 8506 	ld	hl,#_storeX + 0
   9120 36 33         [10] 8507 	ld	(hl), #0x33
                           8508 ;src/main.c:1936: storeY = 11;
   9122 21 EA 5E      [10] 8509 	ld	hl,#_storeY + 0
   9125 36 0B         [10] 8510 	ld	(hl), #0x0b
                           8511 ;src/main.c:1937: break;
   9127 C3 16 99      [10] 8512 	jp	00113$
                           8513 ;src/main.c:1940: case 1: {
   912A                    8514 00102$:
                           8515 ;src/main.c:1942: SetEnemyParams(2, NOBODY,	M_linear_X, 	D_left,     1,  0,   0,   0,   0);
   912A 21 00 00      [10] 8516 	ld	hl, #0x0000
   912D E5            [11] 8517 	push	hl
   912E 2E 00         [ 7] 8518 	ld	l, #0x00
   9130 E5            [11] 8519 	push	hl
   9131 21 02 01      [10] 8520 	ld	hl, #0x0102
   9134 E5            [11] 8521 	push	hl
   9135 21 09 00      [10] 8522 	ld	hl, #0x0009
   9138 E5            [11] 8523 	push	hl
   9139 3E 02         [ 7] 8524 	ld	a, #0x02
   913B F5            [11] 8525 	push	af
   913C 33            [ 6] 8526 	inc	sp
   913D CD C5 8F      [17] 8527 	call	_SetEnemyParams
   9140 21 09 00      [10] 8528 	ld	hl, #9
   9143 39            [11] 8529 	add	hl, sp
   9144 F9            [ 6] 8530 	ld	sp, hl
                           8531 ;src/main.c:1943: SetEnemyParams(3, SENTINEL,	M_linear_X, 	D_right,    1,  2, 114,   2,  73);						
   9145 21 02 49      [10] 8532 	ld	hl, #0x4902
   9148 E5            [11] 8533 	push	hl
   9149 26 72         [ 7] 8534 	ld	h, #0x72
   914B E5            [11] 8535 	push	hl
   914C 21 03 01      [10] 8536 	ld	hl, #0x0103
   914F E5            [11] 8537 	push	hl
   9150 21 02 00      [10] 8538 	ld	hl, #0x0002
   9153 E5            [11] 8539 	push	hl
   9154 3E 03         [ 7] 8540 	ld	a, #0x03
   9156 F5            [11] 8541 	push	af
   9157 33            [ 6] 8542 	inc	sp
   9158 CD C5 8F      [17] 8543 	call	_SetEnemyParams
   915B 21 09 00      [10] 8544 	ld	hl, #9
   915E 39            [11] 8545 	add	hl, sp
   915F F9            [ 6] 8546 	ld	sp, hl
                           8547 ;src/main.c:1944: SetEnemyParams(4, KNIGHT, 	M_linear_XY,    D_right,    1, 10,  62,   0,   0);
   9160 21 00 00      [10] 8548 	ld	hl, #0x0000
   9163 E5            [11] 8549 	push	hl
   9164 21 0A 3E      [10] 8550 	ld	hl, #0x3e0a
   9167 E5            [11] 8551 	push	hl
   9168 21 03 01      [10] 8552 	ld	hl, #0x0103
   916B E5            [11] 8553 	push	hl
   916C 26 02         [ 7] 8554 	ld	h, #0x02
   916E E5            [11] 8555 	push	hl
   916F 3E 04         [ 7] 8556 	ld	a, #0x04
   9171 F5            [11] 8557 	push	af
   9172 33            [ 6] 8558 	inc	sp
   9173 CD C5 8F      [17] 8559 	call	_SetEnemyParams
   9176 21 09 00      [10] 8560 	ld	hl, #9
   9179 39            [11] 8561 	add	hl, sp
   917A F9            [ 6] 8562 	ld	sp, hl
                           8563 ;src/main.c:1945: SetEnemyParams(5, KNIGHT,	M_linear_XY,	D_down,     1,  2,  38,   0,   0);
   917B 21 00 00      [10] 8564 	ld	hl, #0x0000
   917E E5            [11] 8565 	push	hl
   917F 21 02 26      [10] 8566 	ld	hl, #0x2602
   9182 E5            [11] 8567 	push	hl
   9183 21 01 01      [10] 8568 	ld	hl, #0x0101
   9186 E5            [11] 8569 	push	hl
   9187 21 03 02      [10] 8570 	ld	hl, #0x0203
   918A E5            [11] 8571 	push	hl
   918B 3E 05         [ 7] 8572 	ld	a, #0x05
   918D F5            [11] 8573 	push	af
   918E 33            [ 6] 8574 	inc	sp
   918F CD C5 8F      [17] 8575 	call	_SetEnemyParams
   9192 21 09 00      [10] 8576 	ld	hl, #9
   9195 39            [11] 8577 	add	hl, sp
   9196 F9            [ 6] 8578 	ld	sp, hl
                           8579 ;src/main.c:1947: spr[0].x = spr[0].px = 58; 
   9197 21 0E 5F      [10] 8580 	ld	hl, #(_spr + 0x0004)
   919A 36 3A         [10] 8581 	ld	(hl), #0x3a
   919C 21 0C 5F      [10] 8582 	ld	hl, #(_spr + 0x0002)
   919F 36 3A         [10] 8583 	ld	(hl), #0x3a
                           8584 ;src/main.c:1948: spr[0].y = spr[0].py = 178;	
   91A1 21 0F 5F      [10] 8585 	ld	hl, #(_spr + 0x0005)
   91A4 36 B2         [10] 8586 	ld	(hl), #0xb2
   91A6 21 0D 5F      [10] 8587 	ld	hl, #(_spr + 0x0003)
   91A9 36 B2         [10] 8588 	ld	(hl), #0xb2
                           8589 ;src/main.c:1950: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk1_end);
   91AB 21 CE 47      [10] 8590 	ld	hl, #(_mappk1 + 0x02a0)
   91AE E5            [11] 8591 	push	hl
   91AF 21 00 16      [10] 8592 	ld	hl, #0x1600
   91B2 E5            [11] 8593 	push	hl
   91B3 CD 5A 5C      [17] 8594 	call	_cpct_zx7b_decrunch_s
                           8595 ;src/main.c:1952: lName = "1;2@@GARDENS";
   91B6 21 41 99      [10] 8596 	ld	hl, #___str_36+0
   91B9 22 D2 5E      [16] 8597 	ld	(_lName), hl
                           8598 ;src/main.c:1954: doorKey[0] = 4;	// toad snot
   91BC 21 DF 5E      [10] 8599 	ld	hl, #_doorKey
   91BF 36 04         [10] 8600 	ld	(hl), #0x04
                           8601 ;src/main.c:1955: doorKey[1] = 6;	// newt eye
   91C1 21 E0 5E      [10] 8602 	ld	hl, #(_doorKey + 0x0001)
   91C4 36 06         [10] 8603 	ld	(hl), #0x06
                           8604 ;src/main.c:1956: doorKey[2] = 5; // diamond dust
   91C6 21 E1 5E      [10] 8605 	ld	hl, #(_doorKey + 0x0002)
   91C9 36 05         [10] 8606 	ld	(hl), #0x05
                           8607 ;src/main.c:1957: doorKey[3] = 6; // newt eye
   91CB 21 E2 5E      [10] 8608 	ld	hl, #(_doorKey + 0x0003)
   91CE 36 06         [10] 8609 	ld	(hl), #0x06
                           8610 ;src/main.c:1958: doorKey[4] = 4; // toad snot
   91D0 21 E3 5E      [10] 8611 	ld	hl, #(_doorKey + 0x0004)
   91D3 36 04         [10] 8612 	ld	(hl), #0x04
                           8613 ;src/main.c:1960: storeX = 51;
   91D5 21 E9 5E      [10] 8614 	ld	hl,#_storeX + 0
   91D8 36 33         [10] 8615 	ld	(hl), #0x33
                           8616 ;src/main.c:1961: storeY = 55;
   91DA 21 EA 5E      [10] 8617 	ld	hl,#_storeY + 0
   91DD 36 37         [10] 8618 	ld	(hl), #0x37
                           8619 ;src/main.c:1962: break;
   91DF C3 16 99      [10] 8620 	jp	00113$
                           8621 ;src/main.c:1965: case 2: {			 
   91E2                    8622 00103$:
                           8623 ;src/main.c:1967: SetEnemyParams(2, GHOST,	M_linear_XY, 	D_right,    1,  3, 120,   0,   0);						
   91E2 21 00 00      [10] 8624 	ld	hl, #0x0000
   91E5 E5            [11] 8625 	push	hl
   91E6 21 03 78      [10] 8626 	ld	hl, #0x7803
   91E9 E5            [11] 8627 	push	hl
   91EA 26 01         [ 7] 8628 	ld	h, #0x01
   91EC E5            [11] 8629 	push	hl
   91ED 21 04 02      [10] 8630 	ld	hl, #0x0204
   91F0 E5            [11] 8631 	push	hl
   91F1 3E 02         [ 7] 8632 	ld	a, #0x02
   91F3 F5            [11] 8633 	push	af
   91F4 33            [ 6] 8634 	inc	sp
   91F5 CD C5 8F      [17] 8635 	call	_SetEnemyParams
   91F8 21 09 00      [10] 8636 	ld	hl, #9
   91FB 39            [11] 8637 	add	hl, sp
   91FC F9            [ 6] 8638 	ld	sp, hl
                           8639 ;src/main.c:1968: SetEnemyParams(3, GHOST,	M_linear_XY, 	D_left,     1, 73,  99,   0,   0);
   91FD 21 00 00      [10] 8640 	ld	hl, #0x0000
   9200 E5            [11] 8641 	push	hl
   9201 21 49 63      [10] 8642 	ld	hl, #0x6349
   9204 E5            [11] 8643 	push	hl
   9205 21 02 01      [10] 8644 	ld	hl, #0x0102
   9208 E5            [11] 8645 	push	hl
   9209 21 04 02      [10] 8646 	ld	hl, #0x0204
   920C E5            [11] 8647 	push	hl
   920D 3E 03         [ 7] 8648 	ld	a, #0x03
   920F F5            [11] 8649 	push	af
   9210 33            [ 6] 8650 	inc	sp
   9211 CD C5 8F      [17] 8651 	call	_SetEnemyParams
   9214 21 09 00      [10] 8652 	ld	hl, #9
   9217 39            [11] 8653 	add	hl, sp
   9218 F9            [ 6] 8654 	ld	sp, hl
                           8655 ;src/main.c:1969: SetEnemyParams(4, BAT,	 	M_linear_X,    	D_right,    1, 22,  58,  22,  60);																		
   9219 21 16 3C      [10] 8656 	ld	hl, #0x3c16
   921C E5            [11] 8657 	push	hl
   921D 26 3A         [ 7] 8658 	ld	h, #0x3a
   921F E5            [11] 8659 	push	hl
   9220 21 03 01      [10] 8660 	ld	hl, #0x0103
   9223 E5            [11] 8661 	push	hl
   9224 21 05 00      [10] 8662 	ld	hl, #0x0005
   9227 E5            [11] 8663 	push	hl
   9228 3E 04         [ 7] 8664 	ld	a, #0x04
   922A F5            [11] 8665 	push	af
   922B 33            [ 6] 8666 	inc	sp
   922C CD C5 8F      [17] 8667 	call	_SetEnemyParams
   922F 21 09 00      [10] 8668 	ld	hl, #9
   9232 39            [11] 8669 	add	hl, sp
   9233 F9            [ 6] 8670 	ld	sp, hl
                           8671 ;src/main.c:1970: SetEnemyParams(5, WITCH,	M_linear_X,		D_left,     1,  3,  78,   2,  73);
   9234 21 02 49      [10] 8672 	ld	hl, #0x4902
   9237 E5            [11] 8673 	push	hl
   9238 21 03 4E      [10] 8674 	ld	hl, #0x4e03
   923B E5            [11] 8675 	push	hl
   923C 21 02 01      [10] 8676 	ld	hl, #0x0102
   923F E5            [11] 8677 	push	hl
   9240 21 06 00      [10] 8678 	ld	hl, #0x0006
   9243 E5            [11] 8679 	push	hl
   9244 3E 05         [ 7] 8680 	ld	a, #0x05
   9246 F5            [11] 8681 	push	af
   9247 33            [ 6] 8682 	inc	sp
   9248 CD C5 8F      [17] 8683 	call	_SetEnemyParams
   924B 21 09 00      [10] 8684 	ld	hl, #9
   924E 39            [11] 8685 	add	hl, sp
   924F F9            [ 6] 8686 	ld	sp, hl
                           8687 ;src/main.c:1972: spr[0].x = spr[0].px = 58; 
   9250 21 0E 5F      [10] 8688 	ld	hl, #(_spr + 0x0004)
   9253 36 3A         [10] 8689 	ld	(hl), #0x3a
   9255 21 0C 5F      [10] 8690 	ld	hl, #(_spr + 0x0002)
   9258 36 3A         [10] 8691 	ld	(hl), #0x3a
                           8692 ;src/main.c:1973: spr[0].y = spr[0].py = 178;			
   925A 21 0F 5F      [10] 8693 	ld	hl, #(_spr + 0x0005)
   925D 36 B2         [10] 8694 	ld	(hl), #0xb2
   925F 21 0D 5F      [10] 8695 	ld	hl, #(_spr + 0x0003)
   9262 36 B2         [10] 8696 	ld	(hl), #0xb2
                           8697 ;src/main.c:1975: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk2_end);
   9264 21 2D 45      [10] 8698 	ld	hl, #(_mappk2 + 0x01f4)
   9267 E5            [11] 8699 	push	hl
   9268 21 00 16      [10] 8700 	ld	hl, #0x1600
   926B E5            [11] 8701 	push	hl
   926C CD 5A 5C      [17] 8702 	call	_cpct_zx7b_decrunch_s
                           8703 ;src/main.c:1977: lName = "2;1@CEMETERY";
   926F 21 4E 99      [10] 8704 	ld	hl, #___str_37+0
   9272 22 D2 5E      [16] 8705 	ld	(_lName), hl
                           8706 ;src/main.c:1979: doorKey[0] = 4;	// toad snot
   9275 21 DF 5E      [10] 8707 	ld	hl, #_doorKey
   9278 36 04         [10] 8708 	ld	(hl), #0x04
                           8709 ;src/main.c:1980: doorKey[1] = 5;	// diamond dust
   927A 21 E0 5E      [10] 8710 	ld	hl, #(_doorKey + 0x0001)
   927D 36 05         [10] 8711 	ld	(hl), #0x05
                           8712 ;src/main.c:1981: doorKey[2] = 6; // newt eye
   927F 21 E1 5E      [10] 8713 	ld	hl, #(_doorKey + 0x0002)
   9282 36 06         [10] 8714 	ld	(hl), #0x06
                           8715 ;src/main.c:1982: doorKey[3] = 7;	// mammoth poop
   9284 21 E2 5E      [10] 8716 	ld	hl, #(_doorKey + 0x0003)
   9287 36 07         [10] 8717 	ld	(hl), #0x07
                           8718 ;src/main.c:1983: doorKey[4] = 8; // kraken ink
   9289 21 E3 5E      [10] 8719 	ld	hl, #(_doorKey + 0x0004)
   928C 36 08         [10] 8720 	ld	(hl), #0x08
                           8721 ;src/main.c:1985: storeX = 3;
   928E 21 E9 5E      [10] 8722 	ld	hl,#_storeX + 0
   9291 36 03         [10] 8723 	ld	(hl), #0x03
                           8724 ;src/main.c:1986: storeY = 11;
   9293 21 EA 5E      [10] 8725 	ld	hl,#_storeY + 0
   9296 36 0B         [10] 8726 	ld	(hl), #0x0b
                           8727 ;src/main.c:1987: break;
   9298 C3 16 99      [10] 8728 	jp	00113$
                           8729 ;src/main.c:1990: case 3: {			 
   929B                    8730 00104$:
                           8731 ;src/main.c:1992: SetEnemyParams(2, GHOST,	M_linear_XY, 	D_left,     1,  2, 180,   0,   0);
   929B 21 00 00      [10] 8732 	ld	hl, #0x0000
   929E E5            [11] 8733 	push	hl
   929F 21 02 B4      [10] 8734 	ld	hl, #0xb402
   92A2 E5            [11] 8735 	push	hl
   92A3 26 01         [ 7] 8736 	ld	h, #0x01
   92A5 E5            [11] 8737 	push	hl
   92A6 21 04 02      [10] 8738 	ld	hl, #0x0204
   92A9 E5            [11] 8739 	push	hl
   92AA 3E 02         [ 7] 8740 	ld	a, #0x02
   92AC F5            [11] 8741 	push	af
   92AD 33            [ 6] 8742 	inc	sp
   92AE CD C5 8F      [17] 8743 	call	_SetEnemyParams
   92B1 21 09 00      [10] 8744 	ld	hl, #9
   92B4 39            [11] 8745 	add	hl, sp
   92B5 F9            [ 6] 8746 	ld	sp, hl
                           8747 ;src/main.c:1993: SetEnemyParams(3, GHOST,	M_linear_XY, 	D_right,    1,  2, 136,   0,   0);
   92B6 21 00 00      [10] 8748 	ld	hl, #0x0000
   92B9 E5            [11] 8749 	push	hl
   92BA 21 02 88      [10] 8750 	ld	hl, #0x8802
   92BD E5            [11] 8751 	push	hl
   92BE 21 03 01      [10] 8752 	ld	hl, #0x0103
   92C1 E5            [11] 8753 	push	hl
   92C2 21 04 02      [10] 8754 	ld	hl, #0x0204
   92C5 E5            [11] 8755 	push	hl
   92C6 3E 03         [ 7] 8756 	ld	a, #0x03
   92C8 F5            [11] 8757 	push	af
   92C9 33            [ 6] 8758 	inc	sp
   92CA CD C5 8F      [17] 8759 	call	_SetEnemyParams
   92CD 21 09 00      [10] 8760 	ld	hl, #9
   92D0 39            [11] 8761 	add	hl, sp
   92D1 F9            [ 6] 8762 	ld	sp, hl
                           8763 ;src/main.c:1994: SetEnemyParams(4, GHOST,	M_linear_XY, 	D_left,     1, 70,  40,   0,   0);
   92D2 21 00 00      [10] 8764 	ld	hl, #0x0000
   92D5 E5            [11] 8765 	push	hl
   92D6 21 46 28      [10] 8766 	ld	hl, #0x2846
   92D9 E5            [11] 8767 	push	hl
   92DA 21 02 01      [10] 8768 	ld	hl, #0x0102
   92DD E5            [11] 8769 	push	hl
   92DE 21 04 02      [10] 8770 	ld	hl, #0x0204
   92E1 E5            [11] 8771 	push	hl
   92E2 3E 04         [ 7] 8772 	ld	a, #0x04
   92E4 F5            [11] 8773 	push	af
   92E5 33            [ 6] 8774 	inc	sp
   92E6 CD C5 8F      [17] 8775 	call	_SetEnemyParams
   92E9 21 09 00      [10] 8776 	ld	hl, #9
   92EC 39            [11] 8777 	add	hl, sp
   92ED F9            [ 6] 8778 	ld	sp, hl
                           8779 ;src/main.c:1995: SetEnemyParams(5, GHOST,	M_linear_XY,	D_left,     1,  2,  40,   0,   0);
   92EE 21 00 00      [10] 8780 	ld	hl, #0x0000
   92F1 E5            [11] 8781 	push	hl
   92F2 21 02 28      [10] 8782 	ld	hl, #0x2802
   92F5 E5            [11] 8783 	push	hl
   92F6 26 01         [ 7] 8784 	ld	h, #0x01
   92F8 E5            [11] 8785 	push	hl
   92F9 21 04 02      [10] 8786 	ld	hl, #0x0204
   92FC E5            [11] 8787 	push	hl
   92FD 3E 05         [ 7] 8788 	ld	a, #0x05
   92FF F5            [11] 8789 	push	af
   9300 33            [ 6] 8790 	inc	sp
   9301 CD C5 8F      [17] 8791 	call	_SetEnemyParams
   9304 21 09 00      [10] 8792 	ld	hl, #9
   9307 39            [11] 8793 	add	hl, sp
   9308 F9            [ 6] 8794 	ld	sp, hl
                           8795 ;src/main.c:1997: spr[0].x = spr[0].px = 36; 
   9309 21 0E 5F      [10] 8796 	ld	hl, #(_spr + 0x0004)
   930C 36 24         [10] 8797 	ld	(hl), #0x24
   930E 21 0C 5F      [10] 8798 	ld	hl, #(_spr + 0x0002)
   9311 36 24         [10] 8799 	ld	(hl), #0x24
                           8800 ;src/main.c:1998: spr[0].y = spr[0].py = 178;			
   9313 21 0F 5F      [10] 8801 	ld	hl, #(_spr + 0x0005)
   9316 36 B2         [10] 8802 	ld	(hl), #0xb2
   9318 21 0D 5F      [10] 8803 	ld	hl, #(_spr + 0x0003)
   931B 36 B2         [10] 8804 	ld	(hl), #0xb2
                           8805 ;src/main.c:2000: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk3_end);
   931D 21 38 43      [10] 8806 	ld	hl, #(_mappk3 + 0x020f)
   9320 E5            [11] 8807 	push	hl
   9321 21 00 16      [10] 8808 	ld	hl, #0x1600
   9324 E5            [11] 8809 	push	hl
   9325 CD 5A 5C      [17] 8810 	call	_cpct_zx7b_decrunch_s
                           8811 ;src/main.c:2002: lName = "2;2@CEMETERY";
   9328 21 5B 99      [10] 8812 	ld	hl, #___str_38+0
   932B 22 D2 5E      [16] 8813 	ld	(_lName), hl
                           8814 ;src/main.c:2004: doorKey[0] = 5;	// diamond dust
   932E 21 DF 5E      [10] 8815 	ld	hl, #_doorKey
   9331 36 05         [10] 8816 	ld	(hl), #0x05
                           8817 ;src/main.c:2005: doorKey[1] = 7; // mammooth poop
   9333 21 E0 5E      [10] 8818 	ld	hl, #(_doorKey + 0x0001)
   9336 36 07         [10] 8819 	ld	(hl), #0x07
                           8820 ;src/main.c:2006: doorKey[2] = 6; // newt eye
   9338 21 E1 5E      [10] 8821 	ld	hl, #(_doorKey + 0x0002)
   933B 36 06         [10] 8822 	ld	(hl), #0x06
                           8823 ;src/main.c:2007: doorKey[3] = 7; // mammooth poop
   933D 21 E2 5E      [10] 8824 	ld	hl, #(_doorKey + 0x0003)
   9340 36 07         [10] 8825 	ld	(hl), #0x07
                           8826 ;src/main.c:2008: doorKey[4] = 5; // diamond dust
   9342 21 E3 5E      [10] 8827 	ld	hl, #(_doorKey + 0x0004)
   9345 36 05         [10] 8828 	ld	(hl), #0x05
                           8829 ;src/main.c:2010: storeX = 41;
   9347 21 E9 5E      [10] 8830 	ld	hl,#_storeX + 0
   934A 36 29         [10] 8831 	ld	(hl), #0x29
                           8832 ;src/main.c:2011: storeY = 71;
   934C 21 EA 5E      [10] 8833 	ld	hl,#_storeY + 0
   934F 36 47         [10] 8834 	ld	(hl), #0x47
                           8835 ;src/main.c:2012: break;
   9351 C3 16 99      [10] 8836 	jp	00113$
                           8837 ;src/main.c:2015: case 4: {			 
   9354                    8838 00105$:
                           8839 ;src/main.c:2017: SetEnemyParams(2, BAT,		M_linear_X, 	D_left,     1, 73, 134,  16,  73);							
   9354 21 10 49      [10] 8840 	ld	hl, #0x4910
   9357 E5            [11] 8841 	push	hl
   9358 21 49 86      [10] 8842 	ld	hl, #0x8649
   935B E5            [11] 8843 	push	hl
   935C 21 02 01      [10] 8844 	ld	hl, #0x0102
   935F E5            [11] 8845 	push	hl
   9360 21 05 00      [10] 8846 	ld	hl, #0x0005
   9363 E5            [11] 8847 	push	hl
   9364 3E 02         [ 7] 8848 	ld	a, #0x02
   9366 F5            [11] 8849 	push	af
   9367 33            [ 6] 8850 	inc	sp
   9368 CD C5 8F      [17] 8851 	call	_SetEnemyParams
   936B 21 09 00      [10] 8852 	ld	hl, #9
   936E 39            [11] 8853 	add	hl, sp
   936F F9            [ 6] 8854 	ld	sp, hl
                           8855 ;src/main.c:2018: SetEnemyParams(3, BAT,		M_linear_X, 	D_right,    1,  3,  94,   2,  73);		
   9370 21 02 49      [10] 8856 	ld	hl, #0x4902
   9373 E5            [11] 8857 	push	hl
   9374 21 03 5E      [10] 8858 	ld	hl, #0x5e03
   9377 E5            [11] 8859 	push	hl
   9378 26 01         [ 7] 8860 	ld	h, #0x01
   937A E5            [11] 8861 	push	hl
   937B 21 05 00      [10] 8862 	ld	hl, #0x0005
   937E E5            [11] 8863 	push	hl
   937F 3E 03         [ 7] 8864 	ld	a, #0x03
   9381 F5            [11] 8865 	push	af
   9382 33            [ 6] 8866 	inc	sp
   9383 CD C5 8F      [17] 8867 	call	_SetEnemyParams
   9386 21 09 00      [10] 8868 	ld	hl, #9
   9389 39            [11] 8869 	add	hl, sp
   938A F9            [ 6] 8870 	ld	sp, hl
                           8871 ;src/main.c:2019: SetEnemyParams(4, KNIGHT,	M_linear_XY, 	D_down,    	1, 17,  50,   0,   0);
   938B 21 00 00      [10] 8872 	ld	hl, #0x0000
   938E E5            [11] 8873 	push	hl
   938F 21 11 32      [10] 8874 	ld	hl, #0x3211
   9392 E5            [11] 8875 	push	hl
   9393 21 01 01      [10] 8876 	ld	hl, #0x0101
   9396 E5            [11] 8877 	push	hl
   9397 21 03 02      [10] 8878 	ld	hl, #0x0203
   939A E5            [11] 8879 	push	hl
   939B 3E 04         [ 7] 8880 	ld	a, #0x04
   939D F5            [11] 8881 	push	af
   939E 33            [ 6] 8882 	inc	sp
   939F CD C5 8F      [17] 8883 	call	_SetEnemyParams
   93A2 21 09 00      [10] 8884 	ld	hl, #9
   93A5 39            [11] 8885 	add	hl, sp
   93A6 F9            [ 6] 8886 	ld	sp, hl
                           8887 ;src/main.c:2020: SetEnemyParams(5, KNIGHT,	M_linear_XY, 	D_up,     	1, 57, 156,   0,   0);
   93A7 21 00 00      [10] 8888 	ld	hl, #0x0000
   93AA E5            [11] 8889 	push	hl
   93AB 21 39 9C      [10] 8890 	ld	hl, #0x9c39
   93AE E5            [11] 8891 	push	hl
   93AF 21 00 01      [10] 8892 	ld	hl, #0x0100
   93B2 E5            [11] 8893 	push	hl
   93B3 21 03 02      [10] 8894 	ld	hl, #0x0203
   93B6 E5            [11] 8895 	push	hl
   93B7 3E 05         [ 7] 8896 	ld	a, #0x05
   93B9 F5            [11] 8897 	push	af
   93BA 33            [ 6] 8898 	inc	sp
   93BB CD C5 8F      [17] 8899 	call	_SetEnemyParams
   93BE 21 09 00      [10] 8900 	ld	hl, #9
   93C1 39            [11] 8901 	add	hl, sp
   93C2 F9            [ 6] 8902 	ld	sp, hl
                           8903 ;src/main.c:2022: spr[0].x = spr[0].px = 6; 
   93C3 21 0E 5F      [10] 8904 	ld	hl, #(_spr + 0x0004)
   93C6 36 06         [10] 8905 	ld	(hl), #0x06
   93C8 21 0C 5F      [10] 8906 	ld	hl, #(_spr + 0x0002)
   93CB 36 06         [10] 8907 	ld	(hl), #0x06
                           8908 ;src/main.c:2023: spr[0].y = spr[0].py = 175;			
   93CD 21 0F 5F      [10] 8909 	ld	hl, #(_spr + 0x0005)
   93D0 36 AF         [10] 8910 	ld	(hl), #0xaf
   93D2 21 0D 5F      [10] 8911 	ld	hl, #(_spr + 0x0003)
   93D5 36 AF         [10] 8912 	ld	(hl), #0xaf
                           8913 ;src/main.c:2025: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk4_end);
   93D7 21 28 41      [10] 8914 	ld	hl, #(_mappk4 + 0x0179)
   93DA E5            [11] 8915 	push	hl
   93DB 21 00 16      [10] 8916 	ld	hl, #0x1600
   93DE E5            [11] 8917 	push	hl
   93DF CD 5A 5C      [17] 8918 	call	_cpct_zx7b_decrunch_s
                           8919 ;src/main.c:2027: lName = "3;1@@CELLARS";	
   93E2 21 68 99      [10] 8920 	ld	hl, #___str_39+0
   93E5 22 D2 5E      [16] 8921 	ld	(_lName), hl
                           8922 ;src/main.c:2029: doorKey[0] = 4; // toad snot
   93E8 21 DF 5E      [10] 8923 	ld	hl, #_doorKey
   93EB 36 04         [10] 8924 	ld	(hl), #0x04
                           8925 ;src/main.c:2030: doorKey[1] = 9; // mermaid tear
   93ED 21 E0 5E      [10] 8926 	ld	hl, #(_doorKey + 0x0001)
   93F0 36 09         [10] 8927 	ld	(hl), #0x09
                           8928 ;src/main.c:2031: doorKey[2] = 10;// martian mushroom
   93F2 21 E1 5E      [10] 8929 	ld	hl, #(_doorKey + 0x0002)
   93F5 36 0A         [10] 8930 	ld	(hl), #0x0a
                           8931 ;src/main.c:2032: doorKey[3] = 9; // mermaid tear
   93F7 21 E2 5E      [10] 8932 	ld	hl, #(_doorKey + 0x0003)
   93FA 36 09         [10] 8933 	ld	(hl), #0x09
                           8934 ;src/main.c:2033: doorKey[4] = 4; // toad snot
   93FC 21 E3 5E      [10] 8935 	ld	hl, #(_doorKey + 0x0004)
   93FF 36 04         [10] 8936 	ld	(hl), #0x04
                           8937 ;src/main.c:2035: storeX = 5;
   9401 21 E9 5E      [10] 8938 	ld	hl,#_storeX + 0
   9404 36 05         [10] 8939 	ld	(hl), #0x05
                           8940 ;src/main.c:2036: storeY = 103;		
   9406 21 EA 5E      [10] 8941 	ld	hl,#_storeY + 0
   9409 36 67         [10] 8942 	ld	(hl), #0x67
                           8943 ;src/main.c:2037: break;
   940B C3 16 99      [10] 8944 	jp	00113$
                           8945 ;src/main.c:2040: case 5: {			 
   940E                    8946 00106$:
                           8947 ;src/main.c:2042: SetEnemyParams(2, SENTINEL,	M_linear_X, 	D_left,     1,  3, 142,   2,  73);
   940E 21 02 49      [10] 8948 	ld	hl, #0x4902
   9411 E5            [11] 8949 	push	hl
   9412 21 03 8E      [10] 8950 	ld	hl, #0x8e03
   9415 E5            [11] 8951 	push	hl
   9416 21 02 01      [10] 8952 	ld	hl, #0x0102
   9419 E5            [11] 8953 	push	hl
   941A 26 00         [ 7] 8954 	ld	h, #0x00
   941C E5            [11] 8955 	push	hl
   941D 3E 02         [ 7] 8956 	ld	a, #0x02
   941F F5            [11] 8957 	push	af
   9420 33            [ 6] 8958 	inc	sp
   9421 CD C5 8F      [17] 8959 	call	_SetEnemyParams
   9424 21 09 00      [10] 8960 	ld	hl, #9
   9427 39            [11] 8961 	add	hl, sp
   9428 F9            [ 6] 8962 	ld	sp, hl
                           8963 ;src/main.c:2043: SetEnemyParams(3, SENTINEL,	M_linear_X, 	D_right,    1, 73, 102,   2,  73);						
   9429 21 02 49      [10] 8964 	ld	hl, #0x4902
   942C E5            [11] 8965 	push	hl
   942D 21 49 66      [10] 8966 	ld	hl, #0x6649
   9430 E5            [11] 8967 	push	hl
   9431 21 03 01      [10] 8968 	ld	hl, #0x0103
   9434 E5            [11] 8969 	push	hl
   9435 21 02 00      [10] 8970 	ld	hl, #0x0002
   9438 E5            [11] 8971 	push	hl
   9439 3E 03         [ 7] 8972 	ld	a, #0x03
   943B F5            [11] 8973 	push	af
   943C 33            [ 6] 8974 	inc	sp
   943D CD C5 8F      [17] 8975 	call	_SetEnemyParams
   9440 21 09 00      [10] 8976 	ld	hl, #9
   9443 39            [11] 8977 	add	hl, sp
   9444 F9            [ 6] 8978 	ld	sp, hl
                           8979 ;src/main.c:2044: SetEnemyParams(4, KNIGHT,	M_linear_Y, 	D_down,     1, 38,  50,  50, 178);
   9445 21 32 B2      [10] 8980 	ld	hl, #0xb232
   9448 E5            [11] 8981 	push	hl
   9449 21 26 32      [10] 8982 	ld	hl, #0x3226
   944C E5            [11] 8983 	push	hl
   944D 21 01 01      [10] 8984 	ld	hl, #0x0101
   9450 E5            [11] 8985 	push	hl
   9451 2E 03         [ 7] 8986 	ld	l, #0x03
   9453 E5            [11] 8987 	push	hl
   9454 3E 04         [ 7] 8988 	ld	a, #0x04
   9456 F5            [11] 8989 	push	af
   9457 33            [ 6] 8990 	inc	sp
   9458 CD C5 8F      [17] 8991 	call	_SetEnemyParams
   945B 21 09 00      [10] 8992 	ld	hl, #9
   945E 39            [11] 8993 	add	hl, sp
   945F F9            [ 6] 8994 	ld	sp, hl
                           8995 ;src/main.c:2045: SetEnemyParams(5, WITCH,	M_linear_X,		D_left,     1,  3,  62,   2,  73);
   9460 21 02 49      [10] 8996 	ld	hl, #0x4902
   9463 E5            [11] 8997 	push	hl
   9464 21 03 3E      [10] 8998 	ld	hl, #0x3e03
   9467 E5            [11] 8999 	push	hl
   9468 21 02 01      [10] 9000 	ld	hl, #0x0102
   946B E5            [11] 9001 	push	hl
   946C 21 06 00      [10] 9002 	ld	hl, #0x0006
   946F E5            [11] 9003 	push	hl
   9470 3E 05         [ 7] 9004 	ld	a, #0x05
   9472 F5            [11] 9005 	push	af
   9473 33            [ 6] 9006 	inc	sp
   9474 CD C5 8F      [17] 9007 	call	_SetEnemyParams
   9477 21 09 00      [10] 9008 	ld	hl, #9
   947A 39            [11] 9009 	add	hl, sp
   947B F9            [ 6] 9010 	ld	sp, hl
                           9011 ;src/main.c:2047: spr[0].x = spr[0].px = 34; 
   947C 21 0E 5F      [10] 9012 	ld	hl, #(_spr + 0x0004)
   947F 36 22         [10] 9013 	ld	(hl), #0x22
   9481 21 0C 5F      [10] 9014 	ld	hl, #(_spr + 0x0002)
   9484 36 22         [10] 9015 	ld	(hl), #0x22
                           9016 ;src/main.c:2048: spr[0].y = spr[0].py = 176;			
   9486 21 0F 5F      [10] 9017 	ld	hl, #(_spr + 0x0005)
   9489 36 B0         [10] 9018 	ld	(hl), #0xb0
   948B 21 0D 5F      [10] 9019 	ld	hl, #(_spr + 0x0003)
   948E 36 B0         [10] 9020 	ld	(hl), #0xb0
                           9021 ;src/main.c:2050: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk5_end);
   9490 21 AE 3F      [10] 9022 	ld	hl, #(_mappk5 + 0x0199)
   9493 E5            [11] 9023 	push	hl
   9494 21 00 16      [10] 9024 	ld	hl, #0x1600
   9497 E5            [11] 9025 	push	hl
   9498 CD 5A 5C      [17] 9026 	call	_cpct_zx7b_decrunch_s
                           9027 ;src/main.c:2052: lName = "3;2@@CELLARS";
   949B 21 75 99      [10] 9028 	ld	hl, #___str_40+0
   949E 22 D2 5E      [16] 9029 	ld	(_lName), hl
                           9030 ;src/main.c:2054: doorKey[0] = 7; // mammooth poop
   94A1 21 DF 5E      [10] 9031 	ld	hl, #_doorKey
   94A4 36 07         [10] 9032 	ld	(hl), #0x07
                           9033 ;src/main.c:2055: doorKey[1] = 8; // kraken ink
   94A6 21 E0 5E      [10] 9034 	ld	hl, #(_doorKey + 0x0001)
   94A9 36 08         [10] 9035 	ld	(hl), #0x08
                           9036 ;src/main.c:2056: doorKey[2] = 9; // mermaid tear
   94AB 21 E1 5E      [10] 9037 	ld	hl, #(_doorKey + 0x0002)
   94AE 36 09         [10] 9038 	ld	(hl), #0x09
                           9039 ;src/main.c:2057: doorKey[3] = 6; // newt eye
   94B0 21 E2 5E      [10] 9040 	ld	hl, #(_doorKey + 0x0003)
   94B3 36 06         [10] 9041 	ld	(hl), #0x06
                           9042 ;src/main.c:2058: doorKey[4] = 5; // diamond dust
   94B5 21 E3 5E      [10] 9043 	ld	hl, #(_doorKey + 0x0004)
   94B8 36 05         [10] 9044 	ld	(hl), #0x05
                           9045 ;src/main.c:2060: storeX = 3;
   94BA 21 E9 5E      [10] 9046 	ld	hl,#_storeX + 0
   94BD 36 03         [10] 9047 	ld	(hl), #0x03
                           9048 ;src/main.c:2061: storeY = 143;
   94BF 21 EA 5E      [10] 9049 	ld	hl,#_storeY + 0
   94C2 36 8F         [10] 9050 	ld	(hl), #0x8f
                           9051 ;src/main.c:2062: break;
   94C4 C3 16 99      [10] 9052 	jp	00113$
                           9053 ;src/main.c:2065: case 6: {			 
   94C7                    9054 00107$:
                           9055 ;src/main.c:2067: SetEnemyParams(2, KNIGHT,	M_linear_XY, 	D_up,     	1,  2, 174,   0,   0);
   94C7 21 00 00      [10] 9056 	ld	hl, #0x0000
   94CA E5            [11] 9057 	push	hl
   94CB 21 02 AE      [10] 9058 	ld	hl, #0xae02
   94CE E5            [11] 9059 	push	hl
   94CF 21 00 01      [10] 9060 	ld	hl, #0x0100
   94D2 E5            [11] 9061 	push	hl
   94D3 21 03 02      [10] 9062 	ld	hl, #0x0203
   94D6 E5            [11] 9063 	push	hl
   94D7 3E 02         [ 7] 9064 	ld	a, #0x02
   94D9 F5            [11] 9065 	push	af
   94DA 33            [ 6] 9066 	inc	sp
   94DB CD C5 8F      [17] 9067 	call	_SetEnemyParams
   94DE 21 09 00      [10] 9068 	ld	hl, #9
   94E1 39            [11] 9069 	add	hl, sp
   94E2 F9            [ 6] 9070 	ld	sp, hl
                           9071 ;src/main.c:2068: SetEnemyParams(3, KNIGHT,	M_linear_XY, 	D_left,    	1, 60, 116,   0,   0);
   94E3 21 00 00      [10] 9072 	ld	hl, #0x0000
   94E6 E5            [11] 9073 	push	hl
   94E7 21 3C 74      [10] 9074 	ld	hl, #0x743c
   94EA E5            [11] 9075 	push	hl
   94EB 21 02 01      [10] 9076 	ld	hl, #0x0102
   94EE E5            [11] 9077 	push	hl
   94EF 21 03 02      [10] 9078 	ld	hl, #0x0203
   94F2 E5            [11] 9079 	push	hl
   94F3 3E 03         [ 7] 9080 	ld	a, #0x03
   94F5 F5            [11] 9081 	push	af
   94F6 33            [ 6] 9082 	inc	sp
   94F7 CD C5 8F      [17] 9083 	call	_SetEnemyParams
   94FA 21 09 00      [10] 9084 	ld	hl, #9
   94FD 39            [11] 9085 	add	hl, sp
   94FE F9            [ 6] 9086 	ld	sp, hl
                           9087 ;src/main.c:2069: SetEnemyParams(4, SENTINEL,	M_linear_XY, 	D_left,     1, 73,  96,   0,   0);
   94FF 21 00 00      [10] 9088 	ld	hl, #0x0000
   9502 E5            [11] 9089 	push	hl
   9503 21 49 60      [10] 9090 	ld	hl, #0x6049
   9506 E5            [11] 9091 	push	hl
   9507 21 02 01      [10] 9092 	ld	hl, #0x0102
   950A E5            [11] 9093 	push	hl
   950B 26 02         [ 7] 9094 	ld	h, #0x02
   950D E5            [11] 9095 	push	hl
   950E 3E 04         [ 7] 9096 	ld	a, #0x04
   9510 F5            [11] 9097 	push	af
   9511 33            [ 6] 9098 	inc	sp
   9512 CD C5 8F      [17] 9099 	call	_SetEnemyParams
   9515 21 09 00      [10] 9100 	ld	hl, #9
   9518 39            [11] 9101 	add	hl, sp
   9519 F9            [ 6] 9102 	ld	sp, hl
                           9103 ;src/main.c:2070: SetEnemyParams(5, WITCH,	M_linear_X,		D_left,     1,  3,  60,   2,  73);
   951A 21 02 49      [10] 9104 	ld	hl, #0x4902
   951D E5            [11] 9105 	push	hl
   951E 21 03 3C      [10] 9106 	ld	hl, #0x3c03
   9521 E5            [11] 9107 	push	hl
   9522 21 02 01      [10] 9108 	ld	hl, #0x0102
   9525 E5            [11] 9109 	push	hl
   9526 21 06 00      [10] 9110 	ld	hl, #0x0006
   9529 E5            [11] 9111 	push	hl
   952A 3E 05         [ 7] 9112 	ld	a, #0x05
   952C F5            [11] 9113 	push	af
   952D 33            [ 6] 9114 	inc	sp
   952E CD C5 8F      [17] 9115 	call	_SetEnemyParams
   9531 21 09 00      [10] 9116 	ld	hl, #9
   9534 39            [11] 9117 	add	hl, sp
   9535 F9            [ 6] 9118 	ld	sp, hl
                           9119 ;src/main.c:2072: spr[0].x = spr[0].px = 67; 
   9536 21 0E 5F      [10] 9120 	ld	hl, #(_spr + 0x0004)
   9539 36 43         [10] 9121 	ld	(hl), #0x43
   953B 21 0C 5F      [10] 9122 	ld	hl, #(_spr + 0x0002)
   953E 36 43         [10] 9123 	ld	(hl), #0x43
                           9124 ;src/main.c:2073: spr[0].y = spr[0].py = 176;			
   9540 21 0F 5F      [10] 9125 	ld	hl, #(_spr + 0x0005)
   9543 36 B0         [10] 9126 	ld	(hl), #0xb0
   9545 21 0D 5F      [10] 9127 	ld	hl, #(_spr + 0x0003)
   9548 36 B0         [10] 9128 	ld	(hl), #0xb0
                           9129 ;src/main.c:2075: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk6_end);
   954A 21 14 3E      [10] 9130 	ld	hl, #(_mappk6 + 0x01bb)
   954D E5            [11] 9131 	push	hl
   954E 21 00 16      [10] 9132 	ld	hl, #0x1600
   9551 E5            [11] 9133 	push	hl
   9552 CD 5A 5C      [17] 9134 	call	_cpct_zx7b_decrunch_s
                           9135 ;src/main.c:2077: lName = "4;1@@@CASTLE";	
   9555 21 82 99      [10] 9136 	ld	hl, #___str_41+0
   9558 22 D2 5E      [16] 9137 	ld	(_lName), hl
                           9138 ;src/main.c:2079: doorKey[0] = 10; // martian mushroom
   955B 21 DF 5E      [10] 9139 	ld	hl, #_doorKey
   955E 36 0A         [10] 9140 	ld	(hl), #0x0a
                           9141 ;src/main.c:2080: doorKey[1] = 6; // newt eye
   9560 21 E0 5E      [10] 9142 	ld	hl, #(_doorKey + 0x0001)
   9563 36 06         [10] 9143 	ld	(hl), #0x06
                           9144 ;src/main.c:2081: doorKey[2] = 11; // dragon blood
   9565 21 E1 5E      [10] 9145 	ld	hl, #(_doorKey + 0x0002)
   9568 36 0B         [10] 9146 	ld	(hl), #0x0b
                           9147 ;src/main.c:2082: doorKey[3] = 6; // newt eye
   956A 21 E2 5E      [10] 9148 	ld	hl, #(_doorKey + 0x0003)
   956D 36 06         [10] 9149 	ld	(hl), #0x06
                           9150 ;src/main.c:2083: doorKey[4] = 10; // martian mushroom
   956F 21 E3 5E      [10] 9151 	ld	hl, #(_doorKey + 0x0004)
   9572 36 0A         [10] 9152 	ld	(hl), #0x0a
                           9153 ;src/main.c:2085: storeX = 3;
   9574 21 E9 5E      [10] 9154 	ld	hl,#_storeX + 0
   9577 36 03         [10] 9155 	ld	(hl), #0x03
                           9156 ;src/main.c:2086: storeY = 11;		
   9579 21 EA 5E      [10] 9157 	ld	hl,#_storeY + 0
   957C 36 0B         [10] 9158 	ld	(hl), #0x0b
                           9159 ;src/main.c:2087: break;
   957E C3 16 99      [10] 9160 	jp	00113$
                           9161 ;src/main.c:2090: case 7: {			 
   9581                    9162 00108$:
                           9163 ;src/main.c:2092: SetEnemyParams(2, NOBODY,	M_linear_XY, 	D_left,     1,  0,   0,   0,   0);
   9581 21 00 00      [10] 9164 	ld	hl, #0x0000
   9584 E5            [11] 9165 	push	hl
   9585 2E 00         [ 7] 9166 	ld	l, #0x00
   9587 E5            [11] 9167 	push	hl
   9588 21 02 01      [10] 9168 	ld	hl, #0x0102
   958B E5            [11] 9169 	push	hl
   958C 21 09 02      [10] 9170 	ld	hl, #0x0209
   958F E5            [11] 9171 	push	hl
   9590 3E 02         [ 7] 9172 	ld	a, #0x02
   9592 F5            [11] 9173 	push	af
   9593 33            [ 6] 9174 	inc	sp
   9594 CD C5 8F      [17] 9175 	call	_SetEnemyParams
   9597 21 09 00      [10] 9176 	ld	hl, #9
   959A 39            [11] 9177 	add	hl, sp
   959B F9            [ 6] 9178 	ld	sp, hl
                           9179 ;src/main.c:2093: SetEnemyParams(3, GHOST,	M_linear_XY, 	D_up,       1,  3, 176,   0,   0);
   959C 21 00 00      [10] 9180 	ld	hl, #0x0000
   959F E5            [11] 9181 	push	hl
   95A0 21 03 B0      [10] 9182 	ld	hl, #0xb003
   95A3 E5            [11] 9183 	push	hl
   95A4 21 00 01      [10] 9184 	ld	hl, #0x0100
   95A7 E5            [11] 9185 	push	hl
   95A8 21 04 02      [10] 9186 	ld	hl, #0x0204
   95AB E5            [11] 9187 	push	hl
   95AC 3E 03         [ 7] 9188 	ld	a, #0x03
   95AE F5            [11] 9189 	push	af
   95AF 33            [ 6] 9190 	inc	sp
   95B0 CD C5 8F      [17] 9191 	call	_SetEnemyParams
   95B3 21 09 00      [10] 9192 	ld	hl, #9
   95B6 39            [11] 9193 	add	hl, sp
   95B7 F9            [ 6] 9194 	ld	sp, hl
                           9195 ;src/main.c:2094: SetEnemyParams(4, KNIGHT,	M_linear_XY, 	D_right,    1,  3,  44,   0,   0);
   95B8 21 00 00      [10] 9196 	ld	hl, #0x0000
   95BB E5            [11] 9197 	push	hl
   95BC 21 03 2C      [10] 9198 	ld	hl, #0x2c03
   95BF E5            [11] 9199 	push	hl
   95C0 26 01         [ 7] 9200 	ld	h, #0x01
   95C2 E5            [11] 9201 	push	hl
   95C3 26 02         [ 7] 9202 	ld	h, #0x02
   95C5 E5            [11] 9203 	push	hl
   95C6 3E 04         [ 7] 9204 	ld	a, #0x04
   95C8 F5            [11] 9205 	push	af
   95C9 33            [ 6] 9206 	inc	sp
   95CA CD C5 8F      [17] 9207 	call	_SetEnemyParams
   95CD 21 09 00      [10] 9208 	ld	hl, #9
   95D0 39            [11] 9209 	add	hl, sp
   95D1 F9            [ 6] 9210 	ld	sp, hl
                           9211 ;src/main.c:2095: SetEnemyParams(5, KNIGHT,	M_linear_XY, 	D_down,     1, 73,  44,   0,   0);
   95D2 21 00 00      [10] 9212 	ld	hl, #0x0000
   95D5 E5            [11] 9213 	push	hl
   95D6 21 49 2C      [10] 9214 	ld	hl, #0x2c49
   95D9 E5            [11] 9215 	push	hl
   95DA 21 01 01      [10] 9216 	ld	hl, #0x0101
   95DD E5            [11] 9217 	push	hl
   95DE 21 03 02      [10] 9218 	ld	hl, #0x0203
   95E1 E5            [11] 9219 	push	hl
   95E2 3E 05         [ 7] 9220 	ld	a, #0x05
   95E4 F5            [11] 9221 	push	af
   95E5 33            [ 6] 9222 	inc	sp
   95E6 CD C5 8F      [17] 9223 	call	_SetEnemyParams
   95E9 21 09 00      [10] 9224 	ld	hl, #9
   95EC 39            [11] 9225 	add	hl, sp
   95ED F9            [ 6] 9226 	ld	sp, hl
                           9227 ;src/main.c:2097: spr[0].x = spr[0].px = 36; 
   95EE 21 0E 5F      [10] 9228 	ld	hl, #(_spr + 0x0004)
   95F1 36 24         [10] 9229 	ld	(hl), #0x24
   95F3 21 0C 5F      [10] 9230 	ld	hl, #(_spr + 0x0002)
   95F6 36 24         [10] 9231 	ld	(hl), #0x24
                           9232 ;src/main.c:2098: spr[0].y = spr[0].py = 176;			
   95F8 21 0F 5F      [10] 9233 	ld	hl, #(_spr + 0x0005)
   95FB 36 B0         [10] 9234 	ld	(hl), #0xb0
   95FD 21 0D 5F      [10] 9235 	ld	hl, #(_spr + 0x0003)
   9600 36 B0         [10] 9236 	ld	(hl), #0xb0
                           9237 ;src/main.c:2100: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk7_end);
   9602 21 58 3C      [10] 9238 	ld	hl, #(_mappk7 + 0x021b)
   9605 E5            [11] 9239 	push	hl
   9606 21 00 16      [10] 9240 	ld	hl, #0x1600
   9609 E5            [11] 9241 	push	hl
   960A CD 5A 5C      [17] 9242 	call	_cpct_zx7b_decrunch_s
                           9243 ;src/main.c:2102: lName = "4;2@@@CASTLE";
   960D 21 8F 99      [10] 9244 	ld	hl, #___str_42+0
   9610 22 D2 5E      [16] 9245 	ld	(_lName), hl
                           9246 ;src/main.c:2104: doorKey[0] = 5; // diamond dust
   9613 21 DF 5E      [10] 9247 	ld	hl, #_doorKey
   9616 36 05         [10] 9248 	ld	(hl), #0x05
                           9249 ;src/main.c:2105: doorKey[1] = 11; // dragon blood
   9618 21 E0 5E      [10] 9250 	ld	hl, #(_doorKey + 0x0001)
   961B 36 0B         [10] 9251 	ld	(hl), #0x0b
                           9252 ;src/main.c:2106: doorKey[2] = 7; // mammooth poop
   961D 21 E1 5E      [10] 9253 	ld	hl, #(_doorKey + 0x0002)
   9620 36 07         [10] 9254 	ld	(hl), #0x07
                           9255 ;src/main.c:2107: doorKey[3] = 11; // dragon blood
   9622 21 E2 5E      [10] 9256 	ld	hl, #(_doorKey + 0x0003)
   9625 36 0B         [10] 9257 	ld	(hl), #0x0b
                           9258 ;src/main.c:2108: doorKey[4] = 5; // diamond dust
   9627 21 E3 5E      [10] 9259 	ld	hl, #(_doorKey + 0x0004)
   962A 36 05         [10] 9260 	ld	(hl), #0x05
                           9261 ;src/main.c:2110: storeX = 33;
   962C 21 E9 5E      [10] 9262 	ld	hl,#_storeX + 0
   962F 36 21         [10] 9263 	ld	(hl), #0x21
                           9264 ;src/main.c:2111: storeY = 95;
   9631 21 EA 5E      [10] 9265 	ld	hl,#_storeY + 0
   9634 36 5F         [10] 9266 	ld	(hl), #0x5f
                           9267 ;src/main.c:2112: break;
   9636 C3 16 99      [10] 9268 	jp	00113$
                           9269 ;src/main.c:2115: case 8: {			 
   9639                    9270 00109$:
                           9271 ;src/main.c:2117: SetEnemyParams(2, NOBODY,	M_linear_X, 	D_left,     1,  0,   0,   0,   0);
   9639 21 00 00      [10] 9272 	ld	hl, #0x0000
   963C E5            [11] 9273 	push	hl
   963D 2E 00         [ 7] 9274 	ld	l, #0x00
   963F E5            [11] 9275 	push	hl
   9640 21 02 01      [10] 9276 	ld	hl, #0x0102
   9643 E5            [11] 9277 	push	hl
   9644 21 09 00      [10] 9278 	ld	hl, #0x0009
   9647 E5            [11] 9279 	push	hl
   9648 3E 02         [ 7] 9280 	ld	a, #0x02
   964A F5            [11] 9281 	push	af
   964B 33            [ 6] 9282 	inc	sp
   964C CD C5 8F      [17] 9283 	call	_SetEnemyParams
   964F 21 09 00      [10] 9284 	ld	hl, #9
   9652 39            [11] 9285 	add	hl, sp
   9653 F9            [ 6] 9286 	ld	sp, hl
                           9287 ;src/main.c:2118: SetEnemyParams(3, GHOST,	M_chaser,		D_right,    7,  2, 114,   0,   0);						
   9654 21 00 00      [10] 9288 	ld	hl, #0x0000
   9657 E5            [11] 9289 	push	hl
   9658 21 02 72      [10] 9290 	ld	hl, #0x7202
   965B E5            [11] 9291 	push	hl
   965C 21 03 07      [10] 9292 	ld	hl, #0x0703
   965F E5            [11] 9293 	push	hl
   9660 21 04 03      [10] 9294 	ld	hl, #0x0304
   9663 E5            [11] 9295 	push	hl
   9664 3E 03         [ 7] 9296 	ld	a, #0x03
   9666 F5            [11] 9297 	push	af
   9667 33            [ 6] 9298 	inc	sp
   9668 CD C5 8F      [17] 9299 	call	_SetEnemyParams
   966B 21 09 00      [10] 9300 	ld	hl, #9
   966E 39            [11] 9301 	add	hl, sp
   966F F9            [ 6] 9302 	ld	sp, hl
                           9303 ;src/main.c:2119: SetEnemyParams(4, KNIGHT, 	M_linear_XY,    D_right,    1, 10,  68,   0,   0);
   9670 21 00 00      [10] 9304 	ld	hl, #0x0000
   9673 E5            [11] 9305 	push	hl
   9674 21 0A 44      [10] 9306 	ld	hl, #0x440a
   9677 E5            [11] 9307 	push	hl
   9678 21 03 01      [10] 9308 	ld	hl, #0x0103
   967B E5            [11] 9309 	push	hl
   967C 26 02         [ 7] 9310 	ld	h, #0x02
   967E E5            [11] 9311 	push	hl
   967F 3E 04         [ 7] 9312 	ld	a, #0x04
   9681 F5            [11] 9313 	push	af
   9682 33            [ 6] 9314 	inc	sp
   9683 CD C5 8F      [17] 9315 	call	_SetEnemyParams
   9686 21 09 00      [10] 9316 	ld	hl, #9
   9689 39            [11] 9317 	add	hl, sp
   968A F9            [ 6] 9318 	ld	sp, hl
                           9319 ;src/main.c:2120: SetEnemyParams(5, KNIGHT,	M_linear_XY,	D_down,     1,  2,  38,   0,   0);
   968B 21 00 00      [10] 9320 	ld	hl, #0x0000
   968E E5            [11] 9321 	push	hl
   968F 21 02 26      [10] 9322 	ld	hl, #0x2602
   9692 E5            [11] 9323 	push	hl
   9693 21 01 01      [10] 9324 	ld	hl, #0x0101
   9696 E5            [11] 9325 	push	hl
   9697 21 03 02      [10] 9326 	ld	hl, #0x0203
   969A E5            [11] 9327 	push	hl
   969B 3E 05         [ 7] 9328 	ld	a, #0x05
   969D F5            [11] 9329 	push	af
   969E 33            [ 6] 9330 	inc	sp
   969F CD C5 8F      [17] 9331 	call	_SetEnemyParams
   96A2 21 09 00      [10] 9332 	ld	hl, #9
   96A5 39            [11] 9333 	add	hl, sp
   96A6 F9            [ 6] 9334 	ld	sp, hl
                           9335 ;src/main.c:2122: spr[0].x = spr[0].px = 34; 
   96A7 21 0E 5F      [10] 9336 	ld	hl, #(_spr + 0x0004)
   96AA 36 22         [10] 9337 	ld	(hl), #0x22
   96AC 21 0C 5F      [10] 9338 	ld	hl, #(_spr + 0x0002)
   96AF 36 22         [10] 9339 	ld	(hl), #0x22
                           9340 ;src/main.c:2123: spr[0].y = spr[0].py = 176;			
   96B1 21 0F 5F      [10] 9341 	ld	hl, #(_spr + 0x0005)
   96B4 36 B0         [10] 9342 	ld	(hl), #0xb0
   96B6 21 0D 5F      [10] 9343 	ld	hl, #(_spr + 0x0003)
   96B9 36 B0         [10] 9344 	ld	(hl), #0xb0
                           9345 ;src/main.c:2125: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk8_end);
   96BB 21 3C 3A      [10] 9346 	ld	hl, #(_mappk8 + 0x014e)
   96BE E5            [11] 9347 	push	hl
   96BF 21 00 16      [10] 9348 	ld	hl, #0x1600
   96C2 E5            [11] 9349 	push	hl
   96C3 CD 5A 5C      [17] 9350 	call	_cpct_zx7b_decrunch_s
                           9351 ;src/main.c:2127: lName = "5;1@@@TOWER";	
   96C6 21 9C 99      [10] 9352 	ld	hl, #___str_43+0
   96C9 22 D2 5E      [16] 9353 	ld	(_lName), hl
                           9354 ;src/main.c:2129: doorKey[0] = 8; // kraken ink
   96CC 21 DF 5E      [10] 9355 	ld	hl, #_doorKey
   96CF 36 08         [10] 9356 	ld	(hl), #0x08
                           9357 ;src/main.c:2130: doorKey[1] = 9; // mermaid tear
   96D1 21 E0 5E      [10] 9358 	ld	hl, #(_doorKey + 0x0001)
   96D4 36 09         [10] 9359 	ld	(hl), #0x09
                           9360 ;src/main.c:2131: doorKey[2] = 10; // martian mushroom
   96D6 21 E1 5E      [10] 9361 	ld	hl, #(_doorKey + 0x0002)
   96D9 36 0A         [10] 9362 	ld	(hl), #0x0a
                           9363 ;src/main.c:2132: doorKey[3] = 11; // dragon blood
   96DB 21 E2 5E      [10] 9364 	ld	hl, #(_doorKey + 0x0003)
   96DE 36 0B         [10] 9365 	ld	(hl), #0x0b
                           9366 ;src/main.c:2133: doorKey[4] = 12; // dodo egg
   96E0 21 E3 5E      [10] 9367 	ld	hl, #(_doorKey + 0x0004)
   96E3 36 0C         [10] 9368 	ld	(hl), #0x0c
                           9369 ;src/main.c:2135: storeX = 25;
   96E5 21 E9 5E      [10] 9370 	ld	hl,#_storeX + 0
   96E8 36 19         [10] 9371 	ld	(hl), #0x19
                           9372 ;src/main.c:2136: storeY = 95;		
   96EA 21 EA 5E      [10] 9373 	ld	hl,#_storeY + 0
   96ED 36 5F         [10] 9374 	ld	(hl), #0x5f
                           9375 ;src/main.c:2137: break;
   96EF C3 16 99      [10] 9376 	jp	00113$
                           9377 ;src/main.c:2140: case 9: {			 
   96F2                    9378 00110$:
                           9379 ;src/main.c:2142: SetEnemyParams(2, BAT,		M_linear_X, 	D_left,     1, 73, 111,  41,  73);
   96F2 21 29 49      [10] 9380 	ld	hl, #0x4929
   96F5 E5            [11] 9381 	push	hl
   96F6 21 49 6F      [10] 9382 	ld	hl, #0x6f49
   96F9 E5            [11] 9383 	push	hl
   96FA 21 02 01      [10] 9384 	ld	hl, #0x0102
   96FD E5            [11] 9385 	push	hl
   96FE 21 05 00      [10] 9386 	ld	hl, #0x0005
   9701 E5            [11] 9387 	push	hl
   9702 3E 02         [ 7] 9388 	ld	a, #0x02
   9704 F5            [11] 9389 	push	af
   9705 33            [ 6] 9390 	inc	sp
   9706 CD C5 8F      [17] 9391 	call	_SetEnemyParams
   9709 21 09 00      [10] 9392 	ld	hl, #9
   970C 39            [11] 9393 	add	hl, sp
   970D F9            [ 6] 9394 	ld	sp, hl
                           9395 ;src/main.c:2143: SetEnemyParams(3, BAT,		M_linear_X,		D_right,    1,  2, 111,   2,  34);				
   970E 21 02 22      [10] 9396 	ld	hl, #0x2202
   9711 E5            [11] 9397 	push	hl
   9712 26 6F         [ 7] 9398 	ld	h, #0x6f
   9714 E5            [11] 9399 	push	hl
   9715 21 03 01      [10] 9400 	ld	hl, #0x0103
   9718 E5            [11] 9401 	push	hl
   9719 21 05 00      [10] 9402 	ld	hl, #0x0005
   971C E5            [11] 9403 	push	hl
   971D 3E 03         [ 7] 9404 	ld	a, #0x03
   971F F5            [11] 9405 	push	af
   9720 33            [ 6] 9406 	inc	sp
   9721 CD C5 8F      [17] 9407 	call	_SetEnemyParams
   9724 21 09 00      [10] 9408 	ld	hl, #9
   9727 39            [11] 9409 	add	hl, sp
   9728 F9            [ 6] 9410 	ld	sp, hl
                           9411 ;src/main.c:2144: SetEnemyParams(4, SENTINEL, M_linear_Y,    	D_down,     1, 27,  44,  44, 175);
   9729 21 2C AF      [10] 9412 	ld	hl, #0xaf2c
   972C E5            [11] 9413 	push	hl
   972D 21 1B 2C      [10] 9414 	ld	hl, #0x2c1b
   9730 E5            [11] 9415 	push	hl
   9731 21 01 01      [10] 9416 	ld	hl, #0x0101
   9734 E5            [11] 9417 	push	hl
   9735 2E 02         [ 7] 9418 	ld	l, #0x02
   9737 E5            [11] 9419 	push	hl
   9738 3E 04         [ 7] 9420 	ld	a, #0x04
   973A F5            [11] 9421 	push	af
   973B 33            [ 6] 9422 	inc	sp
   973C CD C5 8F      [17] 9423 	call	_SetEnemyParams
   973F 21 09 00      [10] 9424 	ld	hl, #9
   9742 39            [11] 9425 	add	hl, sp
   9743 F9            [ 6] 9426 	ld	sp, hl
                           9427 ;src/main.c:2145: SetEnemyParams(5, SENTINEL,	M_linear_Y,		D_up,       1, 49, 160,  44, 175);
   9744 21 2C AF      [10] 9428 	ld	hl, #0xaf2c
   9747 E5            [11] 9429 	push	hl
   9748 21 31 A0      [10] 9430 	ld	hl, #0xa031
   974B E5            [11] 9431 	push	hl
   974C 21 00 01      [10] 9432 	ld	hl, #0x0100
   974F E5            [11] 9433 	push	hl
   9750 2E 02         [ 7] 9434 	ld	l, #0x02
   9752 E5            [11] 9435 	push	hl
   9753 3E 05         [ 7] 9436 	ld	a, #0x05
   9755 F5            [11] 9437 	push	af
   9756 33            [ 6] 9438 	inc	sp
   9757 CD C5 8F      [17] 9439 	call	_SetEnemyParams
   975A 21 09 00      [10] 9440 	ld	hl, #9
   975D 39            [11] 9441 	add	hl, sp
   975E F9            [ 6] 9442 	ld	sp, hl
                           9443 ;src/main.c:2147: spr[0].x = spr[0].px = 34; 
   975F 21 0E 5F      [10] 9444 	ld	hl, #(_spr + 0x0004)
   9762 36 22         [10] 9445 	ld	(hl), #0x22
   9764 21 0C 5F      [10] 9446 	ld	hl, #(_spr + 0x0002)
   9767 36 22         [10] 9447 	ld	(hl), #0x22
                           9448 ;src/main.c:2148: spr[0].y = spr[0].py = 176;			
   9769 21 0F 5F      [10] 9449 	ld	hl, #(_spr + 0x0005)
   976C 36 B0         [10] 9450 	ld	(hl), #0xb0
   976E 21 0D 5F      [10] 9451 	ld	hl, #(_spr + 0x0003)
   9771 36 B0         [10] 9452 	ld	(hl), #0xb0
                           9453 ;src/main.c:2150: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk9_end);
   9773 21 ED 38      [10] 9454 	ld	hl, #(_mappk9 + 0x01ac)
   9776 E5            [11] 9455 	push	hl
   9777 21 00 16      [10] 9456 	ld	hl, #0x1600
   977A E5            [11] 9457 	push	hl
   977B CD 5A 5C      [17] 9458 	call	_cpct_zx7b_decrunch_s
                           9459 ;src/main.c:2152: lName = "5;2@@@TOWER";	
   977E 21 A8 99      [10] 9460 	ld	hl, #___str_44+0
   9781 22 D2 5E      [16] 9461 	ld	(_lName), hl
                           9462 ;src/main.c:2154: doorKey[0] = 10; // martian mushroom
   9784 21 DF 5E      [10] 9463 	ld	hl, #_doorKey
   9787 36 0A         [10] 9464 	ld	(hl), #0x0a
                           9465 ;src/main.c:2155: doorKey[1] = 5; // diamond dust
   9789 21 E0 5E      [10] 9466 	ld	hl, #(_doorKey + 0x0001)
   978C 36 05         [10] 9467 	ld	(hl), #0x05
                           9468 ;src/main.c:2156: doorKey[2] = 12; // dodo egg
   978E 21 E1 5E      [10] 9469 	ld	hl, #(_doorKey + 0x0002)
   9791 36 0C         [10] 9470 	ld	(hl), #0x0c
                           9471 ;src/main.c:2157: doorKey[3] = 4; // toad snot
   9793 21 E2 5E      [10] 9472 	ld	hl, #(_doorKey + 0x0003)
   9796 36 04         [10] 9473 	ld	(hl), #0x04
                           9474 ;src/main.c:2158: doorKey[4] = 13; // unicorn blood
   9798 21 E3 5E      [10] 9475 	ld	hl, #(_doorKey + 0x0004)
   979B 36 0D         [10] 9476 	ld	(hl), #0x0d
                           9477 ;src/main.c:2160: storeX = 41;
   979D 21 E9 5E      [10] 9478 	ld	hl,#_storeX + 0
   97A0 36 29         [10] 9479 	ld	(hl), #0x29
                           9480 ;src/main.c:2161: storeY = 43;		
   97A2 21 EA 5E      [10] 9481 	ld	hl,#_storeY + 0
   97A5 36 2B         [10] 9482 	ld	(hl), #0x2b
                           9483 ;src/main.c:2162: break;
   97A7 C3 16 99      [10] 9484 	jp	00113$
                           9485 ;src/main.c:2165: case 10: {			 
   97AA                    9486 00111$:
                           9487 ;src/main.c:2167: SetEnemyParams(2, SENTINEL,	M_linear_X, 	D_left,     1,  2, 156,   2,  73);
   97AA 21 02 49      [10] 9488 	ld	hl, #0x4902
   97AD E5            [11] 9489 	push	hl
   97AE 26 9C         [ 7] 9490 	ld	h, #0x9c
   97B0 E5            [11] 9491 	push	hl
   97B1 26 01         [ 7] 9492 	ld	h, #0x01
   97B3 E5            [11] 9493 	push	hl
   97B4 26 00         [ 7] 9494 	ld	h, #0x00
   97B6 E5            [11] 9495 	push	hl
   97B7 3E 02         [ 7] 9496 	ld	a, #0x02
   97B9 F5            [11] 9497 	push	af
   97BA 33            [ 6] 9498 	inc	sp
   97BB CD C5 8F      [17] 9499 	call	_SetEnemyParams
   97BE 21 09 00      [10] 9500 	ld	hl, #9
   97C1 39            [11] 9501 	add	hl, sp
   97C2 F9            [ 6] 9502 	ld	sp, hl
                           9503 ;src/main.c:2168: SetEnemyParams(3, GHOST,	M_chaser, 		D_right,    4,  2, 114,   0,   0);
   97C3 21 00 00      [10] 9504 	ld	hl, #0x0000
   97C6 E5            [11] 9505 	push	hl
   97C7 21 02 72      [10] 9506 	ld	hl, #0x7202
   97CA E5            [11] 9507 	push	hl
   97CB 21 03 04      [10] 9508 	ld	hl, #0x0403
   97CE E5            [11] 9509 	push	hl
   97CF 21 04 03      [10] 9510 	ld	hl, #0x0304
   97D2 E5            [11] 9511 	push	hl
   97D3 3E 03         [ 7] 9512 	ld	a, #0x03
   97D5 F5            [11] 9513 	push	af
   97D6 33            [ 6] 9514 	inc	sp
   97D7 CD C5 8F      [17] 9515 	call	_SetEnemyParams
   97DA 21 09 00      [10] 9516 	ld	hl, #9
   97DD 39            [11] 9517 	add	hl, sp
   97DE F9            [ 6] 9518 	ld	sp, hl
                           9519 ;src/main.c:2169: SetEnemyParams(4, KNIGHT,	M_linear_Y, 	D_right,    1, 17,  40,  40, 145);
   97DF 21 28 91      [10] 9520 	ld	hl, #0x9128
   97E2 E5            [11] 9521 	push	hl
   97E3 21 11 28      [10] 9522 	ld	hl, #0x2811
   97E6 E5            [11] 9523 	push	hl
   97E7 21 03 01      [10] 9524 	ld	hl, #0x0103
   97EA E5            [11] 9525 	push	hl
   97EB 2E 03         [ 7] 9526 	ld	l, #0x03
   97ED E5            [11] 9527 	push	hl
   97EE 3E 04         [ 7] 9528 	ld	a, #0x04
   97F0 F5            [11] 9529 	push	af
   97F1 33            [ 6] 9530 	inc	sp
   97F2 CD C5 8F      [17] 9531 	call	_SetEnemyParams
   97F5 21 09 00      [10] 9532 	ld	hl, #9
   97F8 39            [11] 9533 	add	hl, sp
   97F9 F9            [ 6] 9534 	ld	sp, hl
                           9535 ;src/main.c:2170: SetEnemyParams(5, KNIGHT,	M_linear_Y, 	D_left,     1, 59,  40,  40, 145);
   97FA 21 28 91      [10] 9536 	ld	hl, #0x9128
   97FD E5            [11] 9537 	push	hl
   97FE 21 3B 28      [10] 9538 	ld	hl, #0x283b
   9801 E5            [11] 9539 	push	hl
   9802 21 02 01      [10] 9540 	ld	hl, #0x0102
   9805 E5            [11] 9541 	push	hl
   9806 2E 03         [ 7] 9542 	ld	l, #0x03
   9808 E5            [11] 9543 	push	hl
   9809 3E 05         [ 7] 9544 	ld	a, #0x05
   980B F5            [11] 9545 	push	af
   980C 33            [ 6] 9546 	inc	sp
   980D CD C5 8F      [17] 9547 	call	_SetEnemyParams
   9810 21 09 00      [10] 9548 	ld	hl, #9
   9813 39            [11] 9549 	add	hl, sp
   9814 F9            [ 6] 9550 	ld	sp, hl
                           9551 ;src/main.c:2172: spr[0].x = spr[0].px = 54; 
   9815 21 0E 5F      [10] 9552 	ld	hl, #(_spr + 0x0004)
   9818 36 36         [10] 9553 	ld	(hl), #0x36
   981A 21 0C 5F      [10] 9554 	ld	hl, #(_spr + 0x0002)
   981D 36 36         [10] 9555 	ld	(hl), #0x36
                           9556 ;src/main.c:2173: spr[0].y = spr[0].py = 176;			
   981F 21 0F 5F      [10] 9557 	ld	hl, #(_spr + 0x0005)
   9822 36 B0         [10] 9558 	ld	(hl), #0xb0
   9824 21 0D 5F      [10] 9559 	ld	hl, #(_spr + 0x0003)
   9827 36 B0         [10] 9560 	ld	(hl), #0xb0
                           9561 ;src/main.c:2175: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk10_end);
   9829 21 40 37      [10] 9562 	ld	hl, #(_mappk10 + 0x01ad)
   982C E5            [11] 9563 	push	hl
   982D 21 00 16      [10] 9564 	ld	hl, #0x1600
   9830 E5            [11] 9565 	push	hl
   9831 CD 5A 5C      [17] 9566 	call	_cpct_zx7b_decrunch_s
                           9567 ;src/main.c:2177: lName = "6;1@@LIBRARY";
   9834 21 B4 99      [10] 9568 	ld	hl, #___str_45+0
   9837 22 D2 5E      [16] 9569 	ld	(_lName), hl
                           9570 ;src/main.c:2179: doorKey[0] = 11; // dragon blood
   983A 21 DF 5E      [10] 9571 	ld	hl, #_doorKey
   983D 36 0B         [10] 9572 	ld	(hl), #0x0b
                           9573 ;src/main.c:2180: doorKey[1] = 8; // kraken ink
   983F 21 E0 5E      [10] 9574 	ld	hl, #(_doorKey + 0x0001)
   9842 36 08         [10] 9575 	ld	(hl), #0x08
                           9576 ;src/main.c:2181: doorKey[2] = 9; // dodo egg
   9844 21 E1 5E      [10] 9577 	ld	hl, #(_doorKey + 0x0002)
   9847 36 09         [10] 9578 	ld	(hl), #0x09
                           9579 ;src/main.c:2182: doorKey[3] = 10; // martian mushroom
   9849 21 E2 5E      [10] 9580 	ld	hl, #(_doorKey + 0x0003)
   984C 36 0A         [10] 9581 	ld	(hl), #0x0a
                           9582 ;src/main.c:2183: doorKey[4] = 15; // mordor lava
   984E 21 E3 5E      [10] 9583 	ld	hl, #(_doorKey + 0x0004)
   9851 36 0F         [10] 9584 	ld	(hl), #0x0f
                           9585 ;src/main.c:2185: storeX = 3;
   9853 21 E9 5E      [10] 9586 	ld	hl,#_storeX + 0
   9856 36 03         [10] 9587 	ld	(hl), #0x03
                           9588 ;src/main.c:2186: storeY = 143;
   9858 21 EA 5E      [10] 9589 	ld	hl,#_storeY + 0
   985B 36 8F         [10] 9590 	ld	(hl), #0x8f
                           9591 ;src/main.c:2187: break;
   985D C3 16 99      [10] 9592 	jp	00113$
                           9593 ;src/main.c:2190: case 11: {			 
   9860                    9594 00112$:
                           9595 ;src/main.c:2192: SetEnemyParams(2, GHOST,	M_linear_X, 	D_left,     1,  2, 132,   2,  72);
   9860 21 02 48      [10] 9596 	ld	hl, #0x4802
   9863 E5            [11] 9597 	push	hl
   9864 26 84         [ 7] 9598 	ld	h, #0x84
   9866 E5            [11] 9599 	push	hl
   9867 26 01         [ 7] 9600 	ld	h, #0x01
   9869 E5            [11] 9601 	push	hl
   986A 21 04 00      [10] 9602 	ld	hl, #0x0004
   986D E5            [11] 9603 	push	hl
   986E 3E 02         [ 7] 9604 	ld	a, #0x02
   9870 F5            [11] 9605 	push	af
   9871 33            [ 6] 9606 	inc	sp
   9872 CD C5 8F      [17] 9607 	call	_SetEnemyParams
   9875 21 09 00      [10] 9608 	ld	hl, #9
   9878 39            [11] 9609 	add	hl, sp
   9879 F9            [ 6] 9610 	ld	sp, hl
                           9611 ;src/main.c:2193: SetEnemyParams(3, GHOST,	M_chaser, 		D_right,    5,  2, 114,   0,   0);
   987A 21 00 00      [10] 9612 	ld	hl, #0x0000
   987D E5            [11] 9613 	push	hl
   987E 21 02 72      [10] 9614 	ld	hl, #0x7202
   9881 E5            [11] 9615 	push	hl
   9882 21 03 05      [10] 9616 	ld	hl, #0x0503
   9885 E5            [11] 9617 	push	hl
   9886 21 04 03      [10] 9618 	ld	hl, #0x0304
   9889 E5            [11] 9619 	push	hl
   988A 3E 03         [ 7] 9620 	ld	a, #0x03
   988C F5            [11] 9621 	push	af
   988D 33            [ 6] 9622 	inc	sp
   988E CD C5 8F      [17] 9623 	call	_SetEnemyParams
   9891 21 09 00      [10] 9624 	ld	hl, #9
   9894 39            [11] 9625 	add	hl, sp
   9895 F9            [ 6] 9626 	ld	sp, hl
                           9627 ;src/main.c:2194: SetEnemyParams(4, KNIGHT,	M_linear_XY, 	D_down,     1, 21,  38,   0,   0);
   9896 21 00 00      [10] 9628 	ld	hl, #0x0000
   9899 E5            [11] 9629 	push	hl
   989A 21 15 26      [10] 9630 	ld	hl, #0x2615
   989D E5            [11] 9631 	push	hl
   989E 21 01 01      [10] 9632 	ld	hl, #0x0101
   98A1 E5            [11] 9633 	push	hl
   98A2 21 03 02      [10] 9634 	ld	hl, #0x0203
   98A5 E5            [11] 9635 	push	hl
   98A6 3E 04         [ 7] 9636 	ld	a, #0x04
   98A8 F5            [11] 9637 	push	af
   98A9 33            [ 6] 9638 	inc	sp
   98AA CD C5 8F      [17] 9639 	call	_SetEnemyParams
   98AD 21 09 00      [10] 9640 	ld	hl, #9
   98B0 39            [11] 9641 	add	hl, sp
   98B1 F9            [ 6] 9642 	ld	sp, hl
                           9643 ;src/main.c:2195: SetEnemyParams(5, KNIGHT,	M_linear_XY, 	D_down,     1, 55,  38,   0,   0);
   98B2 21 00 00      [10] 9644 	ld	hl, #0x0000
   98B5 E5            [11] 9645 	push	hl
   98B6 21 37 26      [10] 9646 	ld	hl, #0x2637
   98B9 E5            [11] 9647 	push	hl
   98BA 21 01 01      [10] 9648 	ld	hl, #0x0101
   98BD E5            [11] 9649 	push	hl
   98BE 21 03 02      [10] 9650 	ld	hl, #0x0203
   98C1 E5            [11] 9651 	push	hl
   98C2 3E 05         [ 7] 9652 	ld	a, #0x05
   98C4 F5            [11] 9653 	push	af
   98C5 33            [ 6] 9654 	inc	sp
   98C6 CD C5 8F      [17] 9655 	call	_SetEnemyParams
   98C9 21 09 00      [10] 9656 	ld	hl, #9
   98CC 39            [11] 9657 	add	hl, sp
   98CD F9            [ 6] 9658 	ld	sp, hl
                           9659 ;src/main.c:2197: spr[0].x = spr[0].px = 34; 
   98CE 21 0E 5F      [10] 9660 	ld	hl, #(_spr + 0x0004)
   98D1 36 22         [10] 9661 	ld	(hl), #0x22
   98D3 21 0C 5F      [10] 9662 	ld	hl, #(_spr + 0x0002)
   98D6 36 22         [10] 9663 	ld	(hl), #0x22
                           9664 ;src/main.c:2198: spr[0].y = spr[0].py = 176;			
   98D8 21 0F 5F      [10] 9665 	ld	hl, #(_spr + 0x0005)
   98DB 36 B0         [10] 9666 	ld	(hl), #0xb0
   98DD 21 0D 5F      [10] 9667 	ld	hl, #(_spr + 0x0003)
   98E0 36 B0         [10] 9668 	ld	(hl), #0xb0
                           9669 ;src/main.c:2200: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk11_end);
   98E2 21 92 35      [10] 9670 	ld	hl, #(_mappk11 + 0x020b)
   98E5 E5            [11] 9671 	push	hl
   98E6 21 00 16      [10] 9672 	ld	hl, #0x1600
   98E9 E5            [11] 9673 	push	hl
   98EA CD 5A 5C      [17] 9674 	call	_cpct_zx7b_decrunch_s
                           9675 ;src/main.c:2202: lName = "6;2@@LIBRARY";
   98ED 21 C1 99      [10] 9676 	ld	hl, #___str_46+0
   98F0 22 D2 5E      [16] 9677 	ld	(_lName), hl
                           9678 ;src/main.c:2204: doorKey[0] = 13; // unicorn blood
   98F3 21 DF 5E      [10] 9679 	ld	hl, #_doorKey
   98F6 36 0D         [10] 9680 	ld	(hl), #0x0d
                           9681 ;src/main.c:2205: doorKey[1] = 15; // mordor lava
   98F8 21 E0 5E      [10] 9682 	ld	hl, #(_doorKey + 0x0001)
   98FB 36 0F         [10] 9683 	ld	(hl), #0x0f
                           9684 ;src/main.c:2206: doorKey[2] = 14; // troll fat
   98FD 21 E1 5E      [10] 9685 	ld	hl, #(_doorKey + 0x0002)
   9900 36 0E         [10] 9686 	ld	(hl), #0x0e
                           9687 ;src/main.c:2207: doorKey[3] = 15; // mordor lava
   9902 21 E2 5E      [10] 9688 	ld	hl, #(_doorKey + 0x0003)
   9905 36 0F         [10] 9689 	ld	(hl), #0x0f
                           9690 ;src/main.c:2208: doorKey[4] = 13; // unicorn blood
   9907 21 E3 5E      [10] 9691 	ld	hl, #(_doorKey + 0x0004)
   990A 36 0D         [10] 9692 	ld	(hl), #0x0d
                           9693 ;src/main.c:2210: storeX = 73;
   990C 21 E9 5E      [10] 9694 	ld	hl,#_storeX + 0
   990F 36 49         [10] 9695 	ld	(hl), #0x49
                           9696 ;src/main.c:2211: storeY = 11;
   9911 21 EA 5E      [10] 9697 	ld	hl,#_storeY + 0
   9914 36 0B         [10] 9698 	ld	(hl), #0x0b
                           9699 ;src/main.c:2214: }
   9916                    9700 00113$:
                           9701 ;src/main.c:2216: if (TwoPlayers) {
   9916 3A D4 5E      [13] 9702 	ld	a,(#_TwoPlayers + 0)
   9919 B7            [ 4] 9703 	or	a, a
   991A C8            [11] 9704 	ret	Z
                           9705 ;src/main.c:2217: spr[1].x = spr[1].px = spr[0].x + 6; 
   991B 01 1B 5F      [10] 9706 	ld	bc, #_spr + 17
   991E 11 1D 5F      [10] 9707 	ld	de, #_spr + 19
   9921 3A 0C 5F      [13] 9708 	ld	a, (#_spr + 2)
   9924 C6 06         [ 7] 9709 	add	a, #0x06
   9926 12            [ 7] 9710 	ld	(de), a
   9927 02            [ 7] 9711 	ld	(bc), a
                           9712 ;src/main.c:2218: spr[1].y = spr[1].py = spr[0].y;
   9928 01 1C 5F      [10] 9713 	ld	bc, #_spr + 18
   992B 11 1E 5F      [10] 9714 	ld	de, #_spr + 20
   992E 3A 0D 5F      [13] 9715 	ld	a, (#_spr + 3)
   9931 12            [ 7] 9716 	ld	(de), a
   9932 02            [ 7] 9717 	ld	(bc), a
   9933 C9            [10] 9718 	ret
   9934                    9719 ___str_35:
   9934 31 3B 31 40 40 47  9720 	.ascii "1;1@@GARDENS"
        41 52 44 45 4E 53
   9940 00                 9721 	.db 0x00
   9941                    9722 ___str_36:
   9941 31 3B 32 40 40 47  9723 	.ascii "1;2@@GARDENS"
        41 52 44 45 4E 53
   994D 00                 9724 	.db 0x00
   994E                    9725 ___str_37:
   994E 32 3B 31 40 43 45  9726 	.ascii "2;1@CEMETERY"
        4D 45 54 45 52 59
   995A 00                 9727 	.db 0x00
   995B                    9728 ___str_38:
   995B 32 3B 32 40 43 45  9729 	.ascii "2;2@CEMETERY"
        4D 45 54 45 52 59
   9967 00                 9730 	.db 0x00
   9968                    9731 ___str_39:
   9968 33 3B 31 40 40 43  9732 	.ascii "3;1@@CELLARS"
        45 4C 4C 41 52 53
   9974 00                 9733 	.db 0x00
   9975                    9734 ___str_40:
   9975 33 3B 32 40 40 43  9735 	.ascii "3;2@@CELLARS"
        45 4C 4C 41 52 53
   9981 00                 9736 	.db 0x00
   9982                    9737 ___str_41:
   9982 34 3B 31 40 40 40  9738 	.ascii "4;1@@@CASTLE"
        43 41 53 54 4C 45
   998E 00                 9739 	.db 0x00
   998F                    9740 ___str_42:
   998F 34 3B 32 40 40 40  9741 	.ascii "4;2@@@CASTLE"
        43 41 53 54 4C 45
   999B 00                 9742 	.db 0x00
   999C                    9743 ___str_43:
   999C 35 3B 31 40 40 40  9744 	.ascii "5;1@@@TOWER"
        54 4F 57 45 52
   99A7 00                 9745 	.db 0x00
   99A8                    9746 ___str_44:
   99A8 35 3B 32 40 40 40  9747 	.ascii "5;2@@@TOWER"
        54 4F 57 45 52
   99B3 00                 9748 	.db 0x00
   99B4                    9749 ___str_45:
   99B4 36 3B 31 40 40 4C  9750 	.ascii "6;1@@LIBRARY"
        49 42 52 41 52 59
   99C0 00                 9751 	.db 0x00
   99C1                    9752 ___str_46:
   99C1 36 3B 32 40 40 4C  9753 	.ascii "6;2@@LIBRARY"
        49 42 52 41 52 59
   99CD 00                 9754 	.db 0x00
                           9755 ;src/main.c:2224: void CheckEnemyCollision(u8 player, TSpr *pSpr) 
                           9756 ;	---------------------------------
                           9757 ; Function CheckEnemyCollision
                           9758 ; ---------------------------------
   99CE                    9759 _CheckEnemyCollision::
   99CE DD E5         [15] 9760 	push	ix
   99D0 DD 21 00 00   [14] 9761 	ld	ix,#0
   99D4 DD 39         [15] 9762 	add	ix,sp
   99D6 21 F8 FF      [10] 9763 	ld	hl, #-8
   99D9 39            [11] 9764 	add	hl, sp
   99DA F9            [ 6] 9765 	ld	sp, hl
                           9766 ;src/main.c:2226: if ((spr[player].x + SPR_W) > pSpr->x && spr[player].x < (pSpr->x + SPR_W) &&
   99DB 01 0A 5F      [10] 9767 	ld	bc, #_spr+0
   99DE DD 5E 04      [19] 9768 	ld	e,4 (ix)
   99E1 16 00         [ 7] 9769 	ld	d,#0x00
   99E3 6B            [ 4] 9770 	ld	l, e
   99E4 62            [ 4] 9771 	ld	h, d
   99E5 29            [11] 9772 	add	hl, hl
   99E6 19            [11] 9773 	add	hl, de
   99E7 29            [11] 9774 	add	hl, hl
   99E8 19            [11] 9775 	add	hl, de
   99E9 29            [11] 9776 	add	hl, hl
   99EA 19            [11] 9777 	add	hl, de
   99EB 09            [11] 9778 	add	hl,bc
   99EC 5D            [ 4] 9779 	ld	e,l
   99ED 54            [ 4] 9780 	ld	d,h
   99EE 23            [ 6] 9781 	inc	hl
   99EF 23            [ 6] 9782 	inc	hl
   99F0 4E            [ 7] 9783 	ld	c, (hl)
   99F1 06 00         [ 7] 9784 	ld	b, #0x00
   99F3 21 05 00      [10] 9785 	ld	hl, #0x0005
   99F6 09            [11] 9786 	add	hl,bc
   99F7 DD 75 FE      [19] 9787 	ld	-2 (ix), l
   99FA DD 74 FF      [19] 9788 	ld	-1 (ix), h
   99FD DD 7E 05      [19] 9789 	ld	a, 5 (ix)
   9A00 DD 77 FA      [19] 9790 	ld	-6 (ix), a
   9A03 DD 7E 06      [19] 9791 	ld	a, 6 (ix)
   9A06 DD 77 FB      [19] 9792 	ld	-5 (ix), a
   9A09 DD 6E FA      [19] 9793 	ld	l,-6 (ix)
   9A0C DD 66 FB      [19] 9794 	ld	h,-5 (ix)
   9A0F 23            [ 6] 9795 	inc	hl
   9A10 23            [ 6] 9796 	inc	hl
   9A11 6E            [ 7] 9797 	ld	l, (hl)
   9A12 26 00         [ 7] 9798 	ld	h, #0x00
                           9799 ;src/main.c:2227: (spr[player].y + SPR_H) > pSpr->y && spr[player].y < (pSpr->y + SPR_H)) {
   9A14 13            [ 6] 9800 	inc	de
   9A15 13            [ 6] 9801 	inc	de
   9A16 13            [ 6] 9802 	inc	de
   9A17 DD 73 FC      [19] 9803 	ld	-4 (ix), e
   9A1A DD 72 FD      [19] 9804 	ld	-3 (ix), d
                           9805 ;src/main.c:2226: if ((spr[player].x + SPR_W) > pSpr->x && spr[player].x < (pSpr->x + SPR_W) &&
   9A1D 7D            [ 4] 9806 	ld	a, l
   9A1E DD 96 FE      [19] 9807 	sub	a, -2 (ix)
   9A21 7C            [ 4] 9808 	ld	a, h
   9A22 DD 9E FF      [19] 9809 	sbc	a, -1 (ix)
   9A25 E2 2A 9A      [10] 9810 	jp	PO, 00153$
   9A28 EE 80         [ 7] 9811 	xor	a, #0x80
   9A2A                    9812 00153$:
   9A2A F2 96 9A      [10] 9813 	jp	P, 00110$
   9A2D 11 05 00      [10] 9814 	ld	de, #0x0005
   9A30 19            [11] 9815 	add	hl, de
   9A31 79            [ 4] 9816 	ld	a, c
   9A32 95            [ 4] 9817 	sub	a, l
   9A33 78            [ 4] 9818 	ld	a, b
   9A34 9C            [ 4] 9819 	sbc	a, h
   9A35 E2 3A 9A      [10] 9820 	jp	PO, 00154$
   9A38 EE 80         [ 7] 9821 	xor	a, #0x80
   9A3A                    9822 00154$:
   9A3A F2 96 9A      [10] 9823 	jp	P, 00110$
                           9824 ;src/main.c:2227: (spr[player].y + SPR_H) > pSpr->y && spr[player].y < (pSpr->y + SPR_H)) {
   9A3D DD 6E FC      [19] 9825 	ld	l,-4 (ix)
   9A40 DD 66 FD      [19] 9826 	ld	h,-3 (ix)
   9A43 5E            [ 7] 9827 	ld	e, (hl)
   9A44 16 00         [ 7] 9828 	ld	d, #0x00
   9A46 21 0C 00      [10] 9829 	ld	hl, #0x000c
   9A49 19            [11] 9830 	add	hl,de
   9A4A E3            [19] 9831 	ex	(sp), hl
   9A4B DD 6E FA      [19] 9832 	ld	l,-6 (ix)
   9A4E DD 66 FB      [19] 9833 	ld	h,-5 (ix)
   9A51 23            [ 6] 9834 	inc	hl
   9A52 23            [ 6] 9835 	inc	hl
   9A53 23            [ 6] 9836 	inc	hl
   9A54 6E            [ 7] 9837 	ld	l, (hl)
   9A55 26 00         [ 7] 9838 	ld	h, #0x00
   9A57 7D            [ 4] 9839 	ld	a, l
   9A58 DD 96 F8      [19] 9840 	sub	a, -8 (ix)
   9A5B 7C            [ 4] 9841 	ld	a, h
   9A5C DD 9E F9      [19] 9842 	sbc	a, -7 (ix)
   9A5F E2 64 9A      [10] 9843 	jp	PO, 00155$
   9A62 EE 80         [ 7] 9844 	xor	a, #0x80
   9A64                    9845 00155$:
   9A64 F2 96 9A      [10] 9846 	jp	P, 00110$
   9A67 D5            [11] 9847 	push	de
   9A68 11 0C 00      [10] 9848 	ld	de, #0x000c
   9A6B 19            [11] 9849 	add	hl, de
   9A6C D1            [10] 9850 	pop	de
   9A6D 7B            [ 4] 9851 	ld	a, e
   9A6E 95            [ 4] 9852 	sub	a, l
   9A6F 7A            [ 4] 9853 	ld	a, d
   9A70 9C            [ 4] 9854 	sbc	a, h
   9A71 E2 76 9A      [10] 9855 	jp	PO, 00156$
   9A74 EE 80         [ 7] 9856 	xor	a, #0x80
   9A76                    9857 00156$:
   9A76 F2 96 9A      [10] 9858 	jp	P, 00110$
                           9859 ;src/main.c:2229: ExplodeSprite(player, pSpr->num);			
   9A79 DD 6E FA      [19] 9860 	ld	l,-6 (ix)
   9A7C DD 66 FB      [19] 9861 	ld	h,-5 (ix)
   9A7F 46            [ 7] 9862 	ld	b, (hl)
   9A80 C5            [11] 9863 	push	bc
   9A81 33            [ 6] 9864 	inc	sp
   9A82 DD 7E 04      [19] 9865 	ld	a, 4 (ix)
   9A85 F5            [11] 9866 	push	af
   9A86 33            [ 6] 9867 	inc	sp
   9A87 CD A3 7C      [17] 9868 	call	_ExplodeSprite
   9A8A F1            [10] 9869 	pop	af
                           9870 ;src/main.c:2230: GameOver(player);
   9A8B DD 7E 04      [19] 9871 	ld	a, 4 (ix)
   9A8E F5            [11] 9872 	push	af
   9A8F 33            [ 6] 9873 	inc	sp
   9A90 CD 68 A2      [17] 9874 	call	_GameOver
   9A93 33            [ 6] 9875 	inc	sp
   9A94 18 7A         [12] 9876 	jr	00115$
   9A96                    9877 00110$:
                           9878 ;src/main.c:2233: else if (sht.active) {
   9A96 3A 77 5F      [13] 9879 	ld	a, (#_sht + 4)
   9A99 B7            [ 4] 9880 	or	a, a
   9A9A 28 74         [12] 9881 	jr	Z,00115$
                           9882 ;src/main.c:2234: if ((sht.x + SHT_W) > (spr[player].x) && sht.x < (spr[player].x + SPR_W))
   9A9C 21 73 5F      [10] 9883 	ld	hl, #_sht + 0
   9A9F 5E            [ 7] 9884 	ld	e, (hl)
   9AA0 16 00         [ 7] 9885 	ld	d, #0x00
   9AA2 21 04 00      [10] 9886 	ld	hl, #0x0004
   9AA5 19            [11] 9887 	add	hl, de
   9AA6 79            [ 4] 9888 	ld	a, c
   9AA7 95            [ 4] 9889 	sub	a, l
   9AA8 78            [ 4] 9890 	ld	a, b
   9AA9 9C            [ 4] 9891 	sbc	a, h
   9AAA E2 AF 9A      [10] 9892 	jp	PO, 00157$
   9AAD EE 80         [ 7] 9893 	xor	a, #0x80
   9AAF                    9894 00157$:
   9AAF F2 10 9B      [10] 9895 	jp	P, 00115$
   9AB2 7B            [ 4] 9896 	ld	a, e
   9AB3 DD 96 FE      [19] 9897 	sub	a, -2 (ix)
   9AB6 7A            [ 4] 9898 	ld	a, d
   9AB7 DD 9E FF      [19] 9899 	sbc	a, -1 (ix)
   9ABA E2 BF 9A      [10] 9900 	jp	PO, 00158$
   9ABD EE 80         [ 7] 9901 	xor	a, #0x80
   9ABF                    9902 00158$:
   9ABF F2 10 9B      [10] 9903 	jp	P, 00115$
                           9904 ;src/main.c:2235: if ((sht.y + SHT_H) > (spr[player].y) && (sht.y) < (spr[player].y + SPR_H))	{
   9AC2 21 74 5F      [10] 9905 	ld	hl, #_sht + 1
   9AC5 4E            [ 7] 9906 	ld	c, (hl)
   9AC6 06 00         [ 7] 9907 	ld	b, #0x00
   9AC8 21 08 00      [10] 9908 	ld	hl, #0x0008
   9ACB 09            [11] 9909 	add	hl,bc
   9ACC EB            [ 4] 9910 	ex	de,hl
   9ACD DD 6E FC      [19] 9911 	ld	l,-4 (ix)
   9AD0 DD 66 FD      [19] 9912 	ld	h,-3 (ix)
   9AD3 6E            [ 7] 9913 	ld	l, (hl)
   9AD4 26 00         [ 7] 9914 	ld	h, #0x00
   9AD6 7D            [ 4] 9915 	ld	a, l
   9AD7 93            [ 4] 9916 	sub	a, e
   9AD8 7C            [ 4] 9917 	ld	a, h
   9AD9 9A            [ 4] 9918 	sbc	a, d
   9ADA E2 DF 9A      [10] 9919 	jp	PO, 00159$
   9ADD EE 80         [ 7] 9920 	xor	a, #0x80
   9ADF                    9921 00159$:
   9ADF F2 10 9B      [10] 9922 	jp	P, 00115$
   9AE2 11 0C 00      [10] 9923 	ld	de, #0x000c
   9AE5 19            [11] 9924 	add	hl, de
   9AE6 79            [ 4] 9925 	ld	a, c
   9AE7 95            [ 4] 9926 	sub	a, l
   9AE8 78            [ 4] 9927 	ld	a, b
   9AE9 9C            [ 4] 9928 	sbc	a, h
   9AEA E2 EF 9A      [10] 9929 	jp	PO, 00160$
   9AED EE 80         [ 7] 9930 	xor	a, #0x80
   9AEF                    9931 00160$:
   9AEF F2 10 9B      [10] 9932 	jp	P, 00115$
                           9933 ;src/main.c:2237: DeleteShot();
   9AF2 CD 13 89      [17] 9934 	call	_DeleteShot
                           9935 ;src/main.c:2238: ExplodeSprite(player, pSpr->num);			
   9AF5 DD 6E FA      [19] 9936 	ld	l,-6 (ix)
   9AF8 DD 66 FB      [19] 9937 	ld	h,-5 (ix)
   9AFB 46            [ 7] 9938 	ld	b, (hl)
   9AFC C5            [11] 9939 	push	bc
   9AFD 33            [ 6] 9940 	inc	sp
   9AFE DD 7E 04      [19] 9941 	ld	a, 4 (ix)
   9B01 F5            [11] 9942 	push	af
   9B02 33            [ 6] 9943 	inc	sp
   9B03 CD A3 7C      [17] 9944 	call	_ExplodeSprite
   9B06 F1            [10] 9945 	pop	af
                           9946 ;src/main.c:2239: GameOver(player);
   9B07 DD 7E 04      [19] 9947 	ld	a, 4 (ix)
   9B0A F5            [11] 9948 	push	af
   9B0B 33            [ 6] 9949 	inc	sp
   9B0C CD 68 A2      [17] 9950 	call	_GameOver
   9B0F 33            [ 6] 9951 	inc	sp
   9B10                    9952 00115$:
   9B10 DD F9         [10] 9953 	ld	sp, ix
   9B12 DD E1         [14] 9954 	pop	ix
   9B14 C9            [10] 9955 	ret
                           9956 ;src/main.c:2246: void EnemyLoop(TSpr *pSpr) __z88dk_fastcall {
                           9957 ;	---------------------------------
                           9958 ; Function EnemyLoop
                           9959 ; ---------------------------------
   9B15                    9960 _EnemyLoop::
                           9961 ;src/main.c:2247: if (pSpr->ident == NOBODY) 
   9B15 4D            [ 4] 9962 	ld	c,l
   9B16 44            [ 4] 9963 	ld	b,h
   9B17 23            [ 6] 9964 	inc	hl
   9B18 7E            [ 7] 9965 	ld	a, (hl)
   9B19 D6 09         [ 7] 9966 	sub	a, #0x09
   9B1B C8            [11] 9967 	ret	Z
                           9968 ;src/main.c:2248: return; 
   9B1C 18 00         [12] 9969 	jr	00102$
   9B1E                    9970 00102$:
                           9971 ;src/main.c:2250: MoveEnemy(pSpr);
   9B1E C5            [11] 9972 	push	bc
   9B1F C5            [11] 9973 	push	bc
   9B20 CD 35 8B      [17] 9974 	call	_MoveEnemy
   9B23 F1            [10] 9975 	pop	af
   9B24 C1            [10] 9976 	pop	bc
                           9977 ;src/main.c:2252: SelectFrame(pSpr); 
   9B25 C5            [11] 9978 	push	bc
   9B26 69            [ 4] 9979 	ld	l, c
   9B27 60            [ 4] 9980 	ld	h, b
   9B28 CD E7 79      [17] 9981 	call	_SelectFrame
   9B2B C1            [10] 9982 	pop	bc
                           9983 ;src/main.c:2253: WalkAnim(pSpr, pSpr->dir);
   9B2C C5            [11] 9984 	push	bc
   9B2D FD E1         [14] 9985 	pop	iy
   9B2F FD 56 07      [19] 9986 	ld	d, 7 (iy)
   9B32 C5            [11] 9987 	push	bc
   9B33 D5            [11] 9988 	push	de
   9B34 33            [ 6] 9989 	inc	sp
   9B35 C5            [11] 9990 	push	bc
   9B36 CD 09 82      [17] 9991 	call	_WalkAnim
   9B39 F1            [10] 9992 	pop	af
   9B3A 33            [ 6] 9993 	inc	sp
   9B3B C1            [10] 9994 	pop	bc
                           9995 ;src/main.c:2255: DeleteSprite(pSpr);
   9B3C C5            [11] 9996 	push	bc
   9B3D 69            [ 4] 9997 	ld	l, c
   9B3E 60            [ 4] 9998 	ld	h, b
   9B3F CD 32 79      [17] 9999 	call	_DeleteSprite
   9B42 C1            [10]10000 	pop	bc
                          10001 ;src/main.c:2256: pSpr->px = pSpr->x; // save the current X coordinate
   9B43 21 04 00      [10]10002 	ld	hl, #0x0004
   9B46 09            [11]10003 	add	hl,bc
   9B47 EB            [ 4]10004 	ex	de,hl
   9B48 69            [ 4]10005 	ld	l, c
   9B49 60            [ 4]10006 	ld	h, b
   9B4A 23            [ 6]10007 	inc	hl
   9B4B 23            [ 6]10008 	inc	hl
   9B4C 7E            [ 7]10009 	ld	a, (hl)
   9B4D 12            [ 7]10010 	ld	(de), a
                          10011 ;src/main.c:2257: pSpr->py = pSpr->y; // save the current Y coordinate
   9B4E 21 05 00      [10]10012 	ld	hl, #0x0005
   9B51 09            [11]10013 	add	hl,bc
   9B52 EB            [ 4]10014 	ex	de,hl
   9B53 69            [ 4]10015 	ld	l, c
   9B54 60            [ 4]10016 	ld	h, b
   9B55 23            [ 6]10017 	inc	hl
   9B56 23            [ 6]10018 	inc	hl
   9B57 23            [ 6]10019 	inc	hl
   9B58 7E            [ 7]10020 	ld	a, (hl)
   9B59 12            [ 7]10021 	ld	(de), a
                          10022 ;src/main.c:2258: PrintSprite(pSpr);
   9B5A C5            [11]10023 	push	bc
   9B5B 69            [ 4]10024 	ld	l, c
   9B5C 60            [ 4]10025 	ld	h, b
   9B5D CD 03 79      [17]10026 	call	_PrintSprite
   9B60 C1            [10]10027 	pop	bc
                          10028 ;src/main.c:2260: CheckEnemyCollision(0, pSpr);
   9B61 C5            [11]10029 	push	bc
   9B62 C5            [11]10030 	push	bc
   9B63 AF            [ 4]10031 	xor	a, a
   9B64 F5            [11]10032 	push	af
   9B65 33            [ 6]10033 	inc	sp
   9B66 CD CE 99      [17]10034 	call	_CheckEnemyCollision
   9B69 F1            [10]10035 	pop	af
   9B6A 33            [ 6]10036 	inc	sp
   9B6B C1            [10]10037 	pop	bc
                          10038 ;src/main.c:2261: if (TwoPlayers)
   9B6C 3A D4 5E      [13]10039 	ld	a,(#_TwoPlayers + 0)
   9B6F B7            [ 4]10040 	or	a, a
   9B70 C8            [11]10041 	ret	Z
                          10042 ;src/main.c:2262: CheckEnemyCollision(1, pSpr);
   9B71 C5            [11]10043 	push	bc
   9B72 3E 01         [ 7]10044 	ld	a, #0x01
   9B74 F5            [11]10045 	push	af
   9B75 33            [ 6]10046 	inc	sp
   9B76 CD CE 99      [17]10047 	call	_CheckEnemyCollision
   9B79 F1            [10]10048 	pop	af
   9B7A 33            [ 6]10049 	inc	sp
   9B7B C9            [10]10050 	ret
                          10051 ;src/main.c:2278: void PrintStartMenu() {
                          10052 ;	---------------------------------
                          10053 ; Function PrintStartMenu
                          10054 ; ---------------------------------
   9B7C                   10055 _PrintStartMenu::
                          10056 ;src/main.c:2279: ClearScreen();
   9B7C CD B6 61      [17]10057 	call	_ClearScreen
                          10058 ;src/main.c:2282: cpct_drawSprite(g_logo_0, cpctm_screenPtr(CPCT_VMEM_START, 0, 0), G_LOGO_0_W, G_LOGO_0_H);
   9B7F 21 28 23      [10]10059 	ld	hl, #0x2328
   9B82 E5            [11]10060 	push	hl
   9B83 21 00 C0      [10]10061 	ld	hl, #0xc000
   9B86 E5            [11]10062 	push	hl
   9B87 21 B7 16      [10]10063 	ld	hl, #_g_logo_0
   9B8A E5            [11]10064 	push	hl
   9B8B CD 6C 5A      [17]10065 	call	_cpct_drawSprite
                          10066 ;src/main.c:2283: cpct_drawSprite(g_logo_1, cpctm_screenPtr(CPCT_VMEM_START, G_LOGO_0_W, 0), G_LOGO_0_W, G_LOGO_0_H);
   9B8E 21 28 23      [10]10067 	ld	hl, #0x2328
   9B91 E5            [11]10068 	push	hl
   9B92 26 C0         [ 7]10069 	ld	h, #0xc0
   9B94 E5            [11]10070 	push	hl
   9B95 21 2F 1C      [10]10071 	ld	hl, #_g_logo_1
   9B98 E5            [11]10072 	push	hl
   9B99 CD 6C 5A      [17]10073 	call	_cpct_drawSprite
                          10074 ;src/main.c:2285: PrintText("1@@1@PLAYER@GAME", 10, 50, 0);
   9B9C 21 32 00      [10]10075 	ld	hl, #0x0032
   9B9F E5            [11]10076 	push	hl
   9BA0 3E 0A         [ 7]10077 	ld	a, #0x0a
   9BA2 F5            [11]10078 	push	af
   9BA3 33            [ 6]10079 	inc	sp
   9BA4 21 AB 9C      [10]10080 	ld	hl, #___str_47
   9BA7 E5            [11]10081 	push	hl
   9BA8 CD 10 63      [17]10082 	call	_PrintText
   9BAB F1            [10]10083 	pop	af
                          10084 ;src/main.c:2286: PrintText("2@@2@PLAYER@GAME", 10, 60, 0);
   9BAC 33            [ 6]10085 	inc	sp
   9BAD 21 3C 00      [10]10086 	ld	hl,#0x003c
   9BB0 E3            [19]10087 	ex	(sp),hl
   9BB1 3E 0A         [ 7]10088 	ld	a, #0x0a
   9BB3 F5            [11]10089 	push	af
   9BB4 33            [ 6]10090 	inc	sp
   9BB5 21 BC 9C      [10]10091 	ld	hl, #___str_48
   9BB8 E5            [11]10092 	push	hl
   9BB9 CD 10 63      [17]10093 	call	_PrintText
   9BBC F1            [10]10094 	pop	af
                          10095 ;src/main.c:2287: PrintText("3@@REDEFINE@CONTROLS", 10, 70, 0);
   9BBD 33            [ 6]10096 	inc	sp
   9BBE 21 46 00      [10]10097 	ld	hl,#0x0046
   9BC1 E3            [19]10098 	ex	(sp),hl
   9BC2 3E 0A         [ 7]10099 	ld	a, #0x0a
   9BC4 F5            [11]10100 	push	af
   9BC5 33            [ 6]10101 	inc	sp
   9BC6 21 CD 9C      [10]10102 	ld	hl, #___str_49
   9BC9 E5            [11]10103 	push	hl
   9BCA CD 10 63      [17]10104 	call	_PrintText
   9BCD F1            [10]10105 	pop	af
   9BCE F1            [10]10106 	pop	af
   9BCF 33            [ 6]10107 	inc	sp
                          10108 ;src/main.c:2288: if (turboMode)
   9BD0 3A EF 5E      [13]10109 	ld	a,(#_turboMode + 0)
   9BD3 B7            [ 4]10110 	or	a, a
   9BD4 28 14         [12]10111 	jr	Z,00102$
                          10112 ;src/main.c:2289: PrintText("4@@TURBO@MODE:@ON", 10, 80, 0);
   9BD6 21 50 00      [10]10113 	ld	hl, #0x0050
   9BD9 E5            [11]10114 	push	hl
   9BDA 3E 0A         [ 7]10115 	ld	a, #0x0a
   9BDC F5            [11]10116 	push	af
   9BDD 33            [ 6]10117 	inc	sp
   9BDE 21 E2 9C      [10]10118 	ld	hl, #___str_50
   9BE1 E5            [11]10119 	push	hl
   9BE2 CD 10 63      [17]10120 	call	_PrintText
   9BE5 F1            [10]10121 	pop	af
   9BE6 F1            [10]10122 	pop	af
   9BE7 33            [ 6]10123 	inc	sp
   9BE8 18 12         [12]10124 	jr	00103$
   9BEA                   10125 00102$:
                          10126 ;src/main.c:2291: PrintText("4@@TURBO@MODE:@OFF", 10, 80, 0);
   9BEA 21 50 00      [10]10127 	ld	hl, #0x0050
   9BED E5            [11]10128 	push	hl
   9BEE 3E 0A         [ 7]10129 	ld	a, #0x0a
   9BF0 F5            [11]10130 	push	af
   9BF1 33            [ 6]10131 	inc	sp
   9BF2 21 F4 9C      [10]10132 	ld	hl, #___str_51
   9BF5 E5            [11]10133 	push	hl
   9BF6 CD 10 63      [17]10134 	call	_PrintText
   9BF9 F1            [10]10135 	pop	af
   9BFA F1            [10]10136 	pop	af
   9BFB 33            [ 6]10137 	inc	sp
   9BFC                   10138 00103$:
                          10139 ;src/main.c:2295: cpct_getScreenPtr(CPCT_VMEM_START, 6, 187), SPR_W, SPR_H, g_maskTable);
   9BFC 21 06 BB      [10]10140 	ld	hl, #0xbb06
   9BFF E5            [11]10141 	push	hl
   9C00 21 00 C0      [10]10142 	ld	hl, #0xc000
   9C03 E5            [11]10143 	push	hl
   9C04 CD CF 5D      [17]10144 	call	_cpct_getScreenPtr
                          10145 ;src/main.c:2294: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06, 
   9C07 01 D7 2D      [10]10146 	ld	bc, #_g_sorcerer1_06+0
   9C0A 11 00 01      [10]10147 	ld	de, #_g_maskTable
   9C0D D5            [11]10148 	push	de
   9C0E 11 05 0C      [10]10149 	ld	de, #0x0c05
   9C11 D5            [11]10150 	push	de
   9C12 E5            [11]10151 	push	hl
   9C13 C5            [11]10152 	push	bc
   9C14 CD E5 5D      [17]10153 	call	_cpct_drawSpriteMaskedAlignedTable
                          10154 ;src/main.c:2297: cpct_getScreenPtr(CPCT_VMEM_START, 68, 187), SPR_W, SPR_H, g_maskTable);
   9C17 21 44 BB      [10]10155 	ld	hl, #0xbb44
   9C1A E5            [11]10156 	push	hl
   9C1B 21 00 C0      [10]10157 	ld	hl, #0xc000
   9C1E E5            [11]10158 	push	hl
   9C1F CD CF 5D      [17]10159 	call	_cpct_getScreenPtr
                          10160 ;src/main.c:2296: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_04, 
   9C22 01 07 2B      [10]10161 	ld	bc, #_g_sorcerer2_04+0
   9C25 11 00 01      [10]10162 	ld	de, #_g_maskTable
   9C28 D5            [11]10163 	push	de
   9C29 11 05 0C      [10]10164 	ld	de, #0x0c05
   9C2C D5            [11]10165 	push	de
   9C2D E5            [11]10166 	push	hl
   9C2E C5            [11]10167 	push	bc
   9C2F CD E5 5D      [17]10168 	call	_cpct_drawSpriteMaskedAlignedTable
                          10169 ;src/main.c:2299: PrintText("CODE@=@GFX", 25, 110, 0);
   9C32 21 6E 00      [10]10170 	ld	hl, #0x006e
   9C35 E5            [11]10171 	push	hl
   9C36 3E 19         [ 7]10172 	ld	a, #0x19
   9C38 F5            [11]10173 	push	af
   9C39 33            [ 6]10174 	inc	sp
   9C3A 21 07 9D      [10]10175 	ld	hl, #___str_52
   9C3D E5            [11]10176 	push	hl
   9C3E CD 10 63      [17]10177 	call	_PrintText
   9C41 F1            [10]10178 	pop	af
                          10179 ;src/main.c:2300: PrintText("SALVAKANTERO", 22, 120, 0);
   9C42 33            [ 6]10180 	inc	sp
   9C43 21 78 00      [10]10181 	ld	hl,#0x0078
   9C46 E3            [19]10182 	ex	(sp),hl
   9C47 3E 16         [ 7]10183 	ld	a, #0x16
   9C49 F5            [11]10184 	push	af
   9C4A 33            [ 6]10185 	inc	sp
   9C4B 21 12 9D      [10]10186 	ld	hl, #___str_53
   9C4E E5            [11]10187 	push	hl
   9C4F CD 10 63      [17]10188 	call	_PrintText
   9C52 F1            [10]10189 	pop	af
                          10190 ;src/main.c:2301: PrintText("MUSIC@=@FX", 25, 135, 0);
   9C53 33            [ 6]10191 	inc	sp
   9C54 21 87 00      [10]10192 	ld	hl,#0x0087
   9C57 E3            [19]10193 	ex	(sp),hl
   9C58 3E 19         [ 7]10194 	ld	a, #0x19
   9C5A F5            [11]10195 	push	af
   9C5B 33            [ 6]10196 	inc	sp
   9C5C 21 1F 9D      [10]10197 	ld	hl, #___str_54
   9C5F E5            [11]10198 	push	hl
   9C60 CD 10 63      [17]10199 	call	_PrintText
   9C63 F1            [10]10200 	pop	af
                          10201 ;src/main.c:2302: PrintText("MCKLAIN", 30, 145, 0);
   9C64 33            [ 6]10202 	inc	sp
   9C65 21 91 00      [10]10203 	ld	hl,#0x0091
   9C68 E3            [19]10204 	ex	(sp),hl
   9C69 3E 1E         [ 7]10205 	ld	a, #0x1e
   9C6B F5            [11]10206 	push	af
   9C6C 33            [ 6]10207 	inc	sp
   9C6D 21 2A 9D      [10]10208 	ld	hl, #___str_55
   9C70 E5            [11]10209 	push	hl
   9C71 CD 10 63      [17]10210 	call	_PrintText
   9C74 F1            [10]10211 	pop	af
                          10212 ;src/main.c:2303: PrintText("BETA@TESTING", 22, 160, 0);
   9C75 33            [ 6]10213 	inc	sp
   9C76 21 A0 00      [10]10214 	ld	hl,#0x00a0
   9C79 E3            [19]10215 	ex	(sp),hl
   9C7A 3E 16         [ 7]10216 	ld	a, #0x16
   9C7C F5            [11]10217 	push	af
   9C7D 33            [ 6]10218 	inc	sp
   9C7E 21 32 9D      [10]10219 	ld	hl, #___str_56
   9C81 E5            [11]10220 	push	hl
   9C82 CD 10 63      [17]10221 	call	_PrintText
   9C85 F1            [10]10222 	pop	af
                          10223 ;src/main.c:2304: PrintText("BLACKMORES", 25, 170, 0);
   9C86 33            [ 6]10224 	inc	sp
   9C87 21 AA 00      [10]10225 	ld	hl,#0x00aa
   9C8A E3            [19]10226 	ex	(sp),hl
   9C8B 3E 19         [ 7]10227 	ld	a, #0x19
   9C8D F5            [11]10228 	push	af
   9C8E 33            [ 6]10229 	inc	sp
   9C8F 21 3F 9D      [10]10230 	ld	hl, #___str_57
   9C92 E5            [11]10231 	push	hl
   9C93 CD 10 63      [17]10232 	call	_PrintText
   9C96 F1            [10]10233 	pop	af
                          10234 ;src/main.c:2306: PrintText("PLAY@ON@RETRO@2020", 13, 190, 0);
   9C97 33            [ 6]10235 	inc	sp
   9C98 21 BE 00      [10]10236 	ld	hl,#0x00be
   9C9B E3            [19]10237 	ex	(sp),hl
   9C9C 3E 0D         [ 7]10238 	ld	a, #0x0d
   9C9E F5            [11]10239 	push	af
   9C9F 33            [ 6]10240 	inc	sp
   9CA0 21 4A 9D      [10]10241 	ld	hl, #___str_58
   9CA3 E5            [11]10242 	push	hl
   9CA4 CD 10 63      [17]10243 	call	_PrintText
   9CA7 F1            [10]10244 	pop	af
   9CA8 F1            [10]10245 	pop	af
   9CA9 33            [ 6]10246 	inc	sp
   9CAA C9            [10]10247 	ret
   9CAB                   10248 ___str_47:
   9CAB 31 40 40 31 40 50 10249 	.ascii "1@@1@PLAYER@GAME"
        4C 41 59 45 52 40
        47 41 4D 45
   9CBB 00                10250 	.db 0x00
   9CBC                   10251 ___str_48:
   9CBC 32 40 40 32 40 50 10252 	.ascii "2@@2@PLAYER@GAME"
        4C 41 59 45 52 40
        47 41 4D 45
   9CCC 00                10253 	.db 0x00
   9CCD                   10254 ___str_49:
   9CCD 33 40 40 52 45 44 10255 	.ascii "3@@REDEFINE@CONTROLS"
        45 46 49 4E 45 40
        43 4F 4E 54 52 4F
        4C 53
   9CE1 00                10256 	.db 0x00
   9CE2                   10257 ___str_50:
   9CE2 34 40 40 54 55 52 10258 	.ascii "4@@TURBO@MODE:@ON"
        42 4F 40 4D 4F 44
        45 3A 40 4F 4E
   9CF3 00                10259 	.db 0x00
   9CF4                   10260 ___str_51:
   9CF4 34 40 40 54 55 52 10261 	.ascii "4@@TURBO@MODE:@OFF"
        42 4F 40 4D 4F 44
        45 3A 40 4F 46 46
   9D06 00                10262 	.db 0x00
   9D07                   10263 ___str_52:
   9D07 43 4F 44 45 40 3D 10264 	.ascii "CODE@=@GFX"
        40 47 46 58
   9D11 00                10265 	.db 0x00
   9D12                   10266 ___str_53:
   9D12 53 41 4C 56 41 4B 10267 	.ascii "SALVAKANTERO"
        41 4E 54 45 52 4F
   9D1E 00                10268 	.db 0x00
   9D1F                   10269 ___str_54:
   9D1F 4D 55 53 49 43 40 10270 	.ascii "MUSIC@=@FX"
        3D 40 46 58
   9D29 00                10271 	.db 0x00
   9D2A                   10272 ___str_55:
   9D2A 4D 43 4B 4C 41 49 10273 	.ascii "MCKLAIN"
        4E
   9D31 00                10274 	.db 0x00
   9D32                   10275 ___str_56:
   9D32 42 45 54 41 40 54 10276 	.ascii "BETA@TESTING"
        45 53 54 49 4E 47
   9D3E 00                10277 	.db 0x00
   9D3F                   10278 ___str_57:
   9D3F 42 4C 41 43 4B 4D 10279 	.ascii "BLACKMORES"
        4F 52 45 53
   9D49 00                10280 	.db 0x00
   9D4A                   10281 ___str_58:
   9D4A 50 4C 41 59 40 4F 10282 	.ascii "PLAY@ON@RETRO@2020"
        4E 40 52 45 54 52
        4F 40 32 30 32 30
   9D5C 00                10283 	.db 0x00
                          10284 ;src/main.c:2311: void PrintObjInfo() {
                          10285 ;	---------------------------------
                          10286 ; Function PrintObjInfo
                          10287 ; ---------------------------------
   9D5D                   10288 _PrintObjInfo::
                          10289 ;src/main.c:2314: ClearScreen();
   9D5D CD B6 61      [17]10290 	call	_ClearScreen
                          10291 ;src/main.c:2315: PrintText("INGREDIENT@VALUES", 13, 0, 0);
   9D60 21 00 00      [10]10292 	ld	hl, #0x0000
   9D63 E5            [11]10293 	push	hl
   9D64 3E 0D         [ 7]10294 	ld	a, #0x0d
   9D66 F5            [11]10295 	push	af
   9D67 33            [ 6]10296 	inc	sp
   9D68 21 C3 9E      [10]10297 	ld	hl, #___str_59
   9D6B E5            [11]10298 	push	hl
   9D6C CD 10 63      [17]10299 	call	_PrintText
   9D6F F1            [10]10300 	pop	af
                          10301 ;src/main.c:2317: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 3, 12), cpct_px2byteM0(4, 4), 37, 188);
   9D70 33            [ 6]10302 	inc	sp
   9D71 21 04 04      [10]10303 	ld	hl,#0x0404
   9D74 E3            [19]10304 	ex	(sp),hl
   9D75 CD B3 5C      [17]10305 	call	_cpct_px2byteM0
   9D78 26 00         [ 7]10306 	ld	h, #0x00
   9D7A 01 25 BC      [10]10307 	ld	bc, #0xbc25
   9D7D C5            [11]10308 	push	bc
   9D7E E5            [11]10309 	push	hl
   9D7F 21 53 E0      [10]10310 	ld	hl, #0xe053
   9D82 E5            [11]10311 	push	hl
   9D83 CD ED 5C      [17]10312 	call	_cpct_drawSolidBox
                          10313 ;src/main.c:2318: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 40, 12), cpct_px2byteM0(4, 4), 35, 188);	
   9D86 21 04 04      [10]10314 	ld	hl, #0x0404
   9D89 E5            [11]10315 	push	hl
   9D8A CD B3 5C      [17]10316 	call	_cpct_px2byteM0
   9D8D 26 00         [ 7]10317 	ld	h, #0x00
   9D8F 01 23 BC      [10]10318 	ld	bc, #0xbc23
   9D92 C5            [11]10319 	push	bc
   9D93 E5            [11]10320 	push	hl
   9D94 21 78 E0      [10]10321 	ld	hl, #0xe078
   9D97 E5            [11]10322 	push	hl
   9D98 CD ED 5C      [17]10323 	call	_cpct_drawSolidBox
                          10324 ;src/main.c:2319: PrintFrame(3,12,72,194);
   9D9B 21 48 C2      [10]10325 	ld	hl, #0xc248
   9D9E E5            [11]10326 	push	hl
   9D9F 21 03 0C      [10]10327 	ld	hl, #0x0c03
   9DA2 E5            [11]10328 	push	hl
   9DA3 CD B3 63      [17]10329 	call	_PrintFrame
   9DA6 F1            [10]10330 	pop	af
   9DA7 F1            [10]10331 	pop	af
                          10332 ;src/main.c:2321: for (obj=4; obj<16; obj++) {
   9DA8 01 04 19      [10]10333 	ld	bc,#0x1904
   9DAB                   10334 00102$:
                          10335 ;src/main.c:2322: PrintObject(obj, 7, yPos);
   9DAB C5            [11]10336 	push	bc
   9DAC C5            [11]10337 	push	bc
   9DAD 33            [ 6]10338 	inc	sp
   9DAE 06 07         [ 7]10339 	ld	b, #0x07
   9DB0 C5            [11]10340 	push	bc
   9DB1 CD BA 6D      [17]10341 	call	_PrintObject
   9DB4 F1            [10]10342 	pop	af
   9DB5 33            [ 6]10343 	inc	sp
   9DB6 C1            [10]10344 	pop	bc
                          10345 ;src/main.c:2323: PrintNumber(obj-3, 2, 62, yPos, 0); PrintText("<", 68, yPos, 0);
   9DB7 59            [ 4]10346 	ld	e, c
   9DB8 16 00         [ 7]10347 	ld	d, #0x00
   9DBA 7B            [ 4]10348 	ld	a, e
   9DBB C6 FD         [ 7]10349 	add	a, #0xfd
   9DBD 5F            [ 4]10350 	ld	e, a
   9DBE 7A            [ 4]10351 	ld	a, d
   9DBF CE FF         [ 7]10352 	adc	a, #0xff
   9DC1 57            [ 4]10353 	ld	d, a
   9DC2 C5            [11]10354 	push	bc
   9DC3 AF            [ 4]10355 	xor	a, a
   9DC4 F5            [11]10356 	push	af
   9DC5 33            [ 6]10357 	inc	sp
   9DC6 C5            [11]10358 	push	bc
   9DC7 33            [ 6]10359 	inc	sp
   9DC8 21 02 3E      [10]10360 	ld	hl, #0x3e02
   9DCB E5            [11]10361 	push	hl
   9DCC D5            [11]10362 	push	de
   9DCD CD 41 62      [17]10363 	call	_PrintNumber
   9DD0 21 06 00      [10]10364 	ld	hl, #6
   9DD3 39            [11]10365 	add	hl, sp
   9DD4 F9            [ 6]10366 	ld	sp, hl
   9DD5 C1            [10]10367 	pop	bc
   9DD6 C5            [11]10368 	push	bc
   9DD7 AF            [ 4]10369 	xor	a, a
   9DD8 F5            [11]10370 	push	af
   9DD9 33            [ 6]10371 	inc	sp
   9DDA C5            [11]10372 	push	bc
   9DDB 33            [ 6]10373 	inc	sp
   9DDC 3E 44         [ 7]10374 	ld	a, #0x44
   9DDE F5            [11]10375 	push	af
   9DDF 33            [ 6]10376 	inc	sp
   9DE0 21 D5 9E      [10]10377 	ld	hl, #___str_60
   9DE3 E5            [11]10378 	push	hl
   9DE4 CD 10 63      [17]10379 	call	_PrintText
   9DE7 F1            [10]10380 	pop	af
   9DE8 F1            [10]10381 	pop	af
   9DE9 33            [ 6]10382 	inc	sp
   9DEA C1            [10]10383 	pop	bc
                          10384 ;src/main.c:2324: yPos += 14;
   9DEB 78            [ 4]10385 	ld	a, b
   9DEC C6 0E         [ 7]10386 	add	a, #0x0e
   9DEE 47            [ 4]10387 	ld	b, a
                          10388 ;src/main.c:2321: for (obj=4; obj<16; obj++) {
   9DEF 0C            [ 4]10389 	inc	c
   9DF0 79            [ 4]10390 	ld	a, c
   9DF1 D6 10         [ 7]10391 	sub	a, #0x10
   9DF3 38 B6         [12]10392 	jr	C,00102$
                          10393 ;src/main.c:2327: PrintText("TOAD@SNOT", 14, 25, 0);
   9DF5 21 19 00      [10]10394 	ld	hl, #0x0019
   9DF8 E5            [11]10395 	push	hl
   9DF9 3E 0E         [ 7]10396 	ld	a, #0x0e
   9DFB F5            [11]10397 	push	af
   9DFC 33            [ 6]10398 	inc	sp
   9DFD 21 D7 9E      [10]10399 	ld	hl, #___str_61
   9E00 E5            [11]10400 	push	hl
   9E01 CD 10 63      [17]10401 	call	_PrintText
   9E04 F1            [10]10402 	pop	af
                          10403 ;src/main.c:2328: PrintText("DIAMOND@DUST", 14, 39, 0);
   9E05 33            [ 6]10404 	inc	sp
   9E06 21 27 00      [10]10405 	ld	hl,#0x0027
   9E09 E3            [19]10406 	ex	(sp),hl
   9E0A 3E 0E         [ 7]10407 	ld	a, #0x0e
   9E0C F5            [11]10408 	push	af
   9E0D 33            [ 6]10409 	inc	sp
   9E0E 21 E1 9E      [10]10410 	ld	hl, #___str_62
   9E11 E5            [11]10411 	push	hl
   9E12 CD 10 63      [17]10412 	call	_PrintText
   9E15 F1            [10]10413 	pop	af
                          10414 ;src/main.c:2329: PrintText("NEWT@EYE", 14, 53, 0);
   9E16 33            [ 6]10415 	inc	sp
   9E17 21 35 00      [10]10416 	ld	hl,#0x0035
   9E1A E3            [19]10417 	ex	(sp),hl
   9E1B 3E 0E         [ 7]10418 	ld	a, #0x0e
   9E1D F5            [11]10419 	push	af
   9E1E 33            [ 6]10420 	inc	sp
   9E1F 21 EE 9E      [10]10421 	ld	hl, #___str_63
   9E22 E5            [11]10422 	push	hl
   9E23 CD 10 63      [17]10423 	call	_PrintText
   9E26 F1            [10]10424 	pop	af
                          10425 ;src/main.c:2330: PrintText("MAMMOTH@POOP", 14, 67, 0);
   9E27 33            [ 6]10426 	inc	sp
   9E28 21 43 00      [10]10427 	ld	hl,#0x0043
   9E2B E3            [19]10428 	ex	(sp),hl
   9E2C 3E 0E         [ 7]10429 	ld	a, #0x0e
   9E2E F5            [11]10430 	push	af
   9E2F 33            [ 6]10431 	inc	sp
   9E30 21 F7 9E      [10]10432 	ld	hl, #___str_64
   9E33 E5            [11]10433 	push	hl
   9E34 CD 10 63      [17]10434 	call	_PrintText
   9E37 F1            [10]10435 	pop	af
                          10436 ;src/main.c:2331: PrintText("KRAKEN@INK", 14, 81, 0); 
   9E38 33            [ 6]10437 	inc	sp
   9E39 21 51 00      [10]10438 	ld	hl,#0x0051
   9E3C E3            [19]10439 	ex	(sp),hl
   9E3D 3E 0E         [ 7]10440 	ld	a, #0x0e
   9E3F F5            [11]10441 	push	af
   9E40 33            [ 6]10442 	inc	sp
   9E41 21 04 9F      [10]10443 	ld	hl, #___str_65
   9E44 E5            [11]10444 	push	hl
   9E45 CD 10 63      [17]10445 	call	_PrintText
   9E48 F1            [10]10446 	pop	af
                          10447 ;src/main.c:2332: PrintText("MERMAID@TEAR", 14, 95, 0);
   9E49 33            [ 6]10448 	inc	sp
   9E4A 21 5F 00      [10]10449 	ld	hl,#0x005f
   9E4D E3            [19]10450 	ex	(sp),hl
   9E4E 3E 0E         [ 7]10451 	ld	a, #0x0e
   9E50 F5            [11]10452 	push	af
   9E51 33            [ 6]10453 	inc	sp
   9E52 21 0F 9F      [10]10454 	ld	hl, #___str_66
   9E55 E5            [11]10455 	push	hl
   9E56 CD 10 63      [17]10456 	call	_PrintText
   9E59 F1            [10]10457 	pop	af
                          10458 ;src/main.c:2333: PrintText("MARTIAN@MUSHROOM", 14, 109, 0);
   9E5A 33            [ 6]10459 	inc	sp
   9E5B 21 6D 00      [10]10460 	ld	hl,#0x006d
   9E5E E3            [19]10461 	ex	(sp),hl
   9E5F 3E 0E         [ 7]10462 	ld	a, #0x0e
   9E61 F5            [11]10463 	push	af
   9E62 33            [ 6]10464 	inc	sp
   9E63 21 1C 9F      [10]10465 	ld	hl, #___str_67
   9E66 E5            [11]10466 	push	hl
   9E67 CD 10 63      [17]10467 	call	_PrintText
   9E6A F1            [10]10468 	pop	af
                          10469 ;src/main.c:2334: PrintText("DRAGON@BLOOD", 14, 123, 0);
   9E6B 33            [ 6]10470 	inc	sp
   9E6C 21 7B 00      [10]10471 	ld	hl,#0x007b
   9E6F E3            [19]10472 	ex	(sp),hl
   9E70 3E 0E         [ 7]10473 	ld	a, #0x0e
   9E72 F5            [11]10474 	push	af
   9E73 33            [ 6]10475 	inc	sp
   9E74 21 2D 9F      [10]10476 	ld	hl, #___str_68
   9E77 E5            [11]10477 	push	hl
   9E78 CD 10 63      [17]10478 	call	_PrintText
   9E7B F1            [10]10479 	pop	af
                          10480 ;src/main.c:2335: PrintText("DODO@EGG", 14, 137, 0); 
   9E7C 33            [ 6]10481 	inc	sp
   9E7D 21 89 00      [10]10482 	ld	hl,#0x0089
   9E80 E3            [19]10483 	ex	(sp),hl
   9E81 3E 0E         [ 7]10484 	ld	a, #0x0e
   9E83 F5            [11]10485 	push	af
   9E84 33            [ 6]10486 	inc	sp
   9E85 21 3A 9F      [10]10487 	ld	hl, #___str_69
   9E88 E5            [11]10488 	push	hl
   9E89 CD 10 63      [17]10489 	call	_PrintText
   9E8C F1            [10]10490 	pop	af
                          10491 ;src/main.c:2336: PrintText("UNICORN@BLOOD", 14, 151, 0);
   9E8D 33            [ 6]10492 	inc	sp
   9E8E 21 97 00      [10]10493 	ld	hl,#0x0097
   9E91 E3            [19]10494 	ex	(sp),hl
   9E92 3E 0E         [ 7]10495 	ld	a, #0x0e
   9E94 F5            [11]10496 	push	af
   9E95 33            [ 6]10497 	inc	sp
   9E96 21 43 9F      [10]10498 	ld	hl, #___str_70
   9E99 E5            [11]10499 	push	hl
   9E9A CD 10 63      [17]10500 	call	_PrintText
   9E9D F1            [10]10501 	pop	af
                          10502 ;src/main.c:2337: PrintText("TROLL@FAT", 14, 165, 0); 
   9E9E 33            [ 6]10503 	inc	sp
   9E9F 21 A5 00      [10]10504 	ld	hl,#0x00a5
   9EA2 E3            [19]10505 	ex	(sp),hl
   9EA3 3E 0E         [ 7]10506 	ld	a, #0x0e
   9EA5 F5            [11]10507 	push	af
   9EA6 33            [ 6]10508 	inc	sp
   9EA7 21 51 9F      [10]10509 	ld	hl, #___str_71
   9EAA E5            [11]10510 	push	hl
   9EAB CD 10 63      [17]10511 	call	_PrintText
   9EAE F1            [10]10512 	pop	af
                          10513 ;src/main.c:2338: PrintText("MORDOR@LAVA", 14, 179, 0);
   9EAF 33            [ 6]10514 	inc	sp
   9EB0 21 B3 00      [10]10515 	ld	hl,#0x00b3
   9EB3 E3            [19]10516 	ex	(sp),hl
   9EB4 3E 0E         [ 7]10517 	ld	a, #0x0e
   9EB6 F5            [11]10518 	push	af
   9EB7 33            [ 6]10519 	inc	sp
   9EB8 21 5B 9F      [10]10520 	ld	hl, #___str_72
   9EBB E5            [11]10521 	push	hl
   9EBC CD 10 63      [17]10522 	call	_PrintText
   9EBF F1            [10]10523 	pop	af
   9EC0 F1            [10]10524 	pop	af
   9EC1 33            [ 6]10525 	inc	sp
   9EC2 C9            [10]10526 	ret
   9EC3                   10527 ___str_59:
   9EC3 49 4E 47 52 45 44 10528 	.ascii "INGREDIENT@VALUES"
        49 45 4E 54 40 56
        41 4C 55 45 53
   9ED4 00                10529 	.db 0x00
   9ED5                   10530 ___str_60:
   9ED5 3C                10531 	.ascii "<"
   9ED6 00                10532 	.db 0x00
   9ED7                   10533 ___str_61:
   9ED7 54 4F 41 44 40 53 10534 	.ascii "TOAD@SNOT"
        4E 4F 54
   9EE0 00                10535 	.db 0x00
   9EE1                   10536 ___str_62:
   9EE1 44 49 41 4D 4F 4E 10537 	.ascii "DIAMOND@DUST"
        44 40 44 55 53 54
   9EED 00                10538 	.db 0x00
   9EEE                   10539 ___str_63:
   9EEE 4E 45 57 54 40 45 10540 	.ascii "NEWT@EYE"
        59 45
   9EF6 00                10541 	.db 0x00
   9EF7                   10542 ___str_64:
   9EF7 4D 41 4D 4D 4F 54 10543 	.ascii "MAMMOTH@POOP"
        48 40 50 4F 4F 50
   9F03 00                10544 	.db 0x00
   9F04                   10545 ___str_65:
   9F04 4B 52 41 4B 45 4E 10546 	.ascii "KRAKEN@INK"
        40 49 4E 4B
   9F0E 00                10547 	.db 0x00
   9F0F                   10548 ___str_66:
   9F0F 4D 45 52 4D 41 49 10549 	.ascii "MERMAID@TEAR"
        44 40 54 45 41 52
   9F1B 00                10550 	.db 0x00
   9F1C                   10551 ___str_67:
   9F1C 4D 41 52 54 49 41 10552 	.ascii "MARTIAN@MUSHROOM"
        4E 40 4D 55 53 48
        52 4F 4F 4D
   9F2C 00                10553 	.db 0x00
   9F2D                   10554 ___str_68:
   9F2D 44 52 41 47 4F 4E 10555 	.ascii "DRAGON@BLOOD"
        40 42 4C 4F 4F 44
   9F39 00                10556 	.db 0x00
   9F3A                   10557 ___str_69:
   9F3A 44 4F 44 4F 40 45 10558 	.ascii "DODO@EGG"
        47 47
   9F42 00                10559 	.db 0x00
   9F43                   10560 ___str_70:
   9F43 55 4E 49 43 4F 52 10561 	.ascii "UNICORN@BLOOD"
        4E 40 42 4C 4F 4F
        44
   9F50 00                10562 	.db 0x00
   9F51                   10563 ___str_71:
   9F51 54 52 4F 4C 4C 40 10564 	.ascii "TROLL@FAT"
        46 41 54
   9F5A 00                10565 	.db 0x00
   9F5B                   10566 ___str_72:
   9F5B 4D 4F 52 44 4F 52 10567 	.ascii "MORDOR@LAVA"
        40 4C 41 56 41
   9F66 00                10568 	.db 0x00
                          10569 ;src/main.c:2364: void StartMenu() {
                          10570 ;	---------------------------------
                          10571 ; Function StartMenu
                          10572 ; ---------------------------------
   9F67                   10573 _StartMenu::
   9F67 DD E5         [15]10574 	push	ix
   9F69 DD 21 00 00   [14]10575 	ld	ix,#0
   9F6D DD 39         [15]10576 	add	ix,sp
   9F6F F5            [11]10577 	push	af
                          10578 ;src/main.c:2365: u8 randSeed = 254;
   9F70 DD 36 FE FE   [19]10579 	ld	-2 (ix), #0xfe
                          10580 ;src/main.c:2366: u8 page = 0;
   9F74 DD 36 FF 00   [19]10581 	ld	-1 (ix), #0x00
                          10582 ;src/main.c:2367: cpct_akp_musicInit(g_menu); // initialize music. Main theme
   9F78 21 07 0E      [10]10583 	ld	hl, #_g_menu
   9F7B E5            [11]10584 	push	hl
   9F7C CD 48 59      [17]10585 	call	_cpct_akp_musicInit
   9F7F F1            [10]10586 	pop	af
                          10587 ;src/main.c:2369: while(1) {
   9F80                   10588 00122$:
                          10589 ;src/main.c:2372: if (++randSeed == 255) {					
   9F80 DD 34 FE      [23]10590 	inc	-2 (ix)
   9F83 DD 7E FE      [19]10591 	ld	a, -2 (ix)
   9F86 3C            [ 4]10592 	inc	a
   9F87 20 27         [12]10593 	jr	NZ,00109$
                          10594 ;src/main.c:2373: if (page == 0) 		PrintStartMenu();	// page 1; menu
   9F89 DD 7E FF      [19]10595 	ld	a, -1 (ix)
   9F8C B7            [ 4]10596 	or	a, a
   9F8D 20 05         [12]10597 	jr	NZ,00104$
   9F8F CD 7C 9B      [17]10598 	call	_PrintStartMenu
   9F92 18 0A         [12]10599 	jr	00105$
   9F94                   10600 00104$:
                          10601 ;src/main.c:2374: else if(page == 4)	PrintObjInfo();		// page 2; ingredients info
   9F94 DD 7E FF      [19]10602 	ld	a, -1 (ix)
   9F97 D6 04         [ 7]10603 	sub	a, #0x04
   9F99 20 03         [12]10604 	jr	NZ,00105$
   9F9B CD 5D 9D      [17]10605 	call	_PrintObjInfo
   9F9E                   10606 00105$:
                          10607 ;src/main.c:2376: randSeed = 0;
   9F9E DD 36 FE 00   [19]10608 	ld	-2 (ix), #0x00
                          10609 ;src/main.c:2377: if (++page == 8) //12
   9FA2 DD 34 FF      [23]10610 	inc	-1 (ix)
   9FA5 DD 7E FF      [19]10611 	ld	a, -1 (ix)
   9FA8 D6 08         [ 7]10612 	sub	a, #0x08
   9FAA 20 04         [12]10613 	jr	NZ,00109$
                          10614 ;src/main.c:2378: page = 0;		
   9FAC DD 36 FF 00   [19]10615 	ld	-1 (ix), #0x00
   9FB0                   10616 00109$:
                          10617 ;src/main.c:2381: cpct_scanKeyboard_f();
   9FB0 CD CD 51      [17]10618 	call	_cpct_scanKeyboard_f
                          10619 ;src/main.c:2382: if(cpct_isKeyPressed(Key_1)) { // 1 player
   9FB3 21 08 01      [10]10620 	ld	hl, #0x0108
   9FB6 CD C1 51      [17]10621 	call	_cpct_isKeyPressed
   9FB9 7D            [ 4]10622 	ld	a, l
   9FBA B7            [ 4]10623 	or	a, a
   9FBB 28 08         [12]10624 	jr	Z,00119$
                          10625 ;src/main.c:2383: TwoPlayers = FALSE;	
   9FBD 21 D4 5E      [10]10626 	ld	hl,#_TwoPlayers + 0
   9FC0 36 00         [10]10627 	ld	(hl), #0x00
                          10628 ;src/main.c:2384: break;
   9FC2 C3 CD A0      [10]10629 	jp	00123$
   9FC5                   10630 00119$:
                          10631 ;src/main.c:2386: else if(cpct_isKeyPressed(Key_2)) {	// 2 players
   9FC5 21 08 02      [10]10632 	ld	hl, #0x0208
   9FC8 CD C1 51      [17]10633 	call	_cpct_isKeyPressed
   9FCB 7D            [ 4]10634 	ld	a, l
   9FCC B7            [ 4]10635 	or	a, a
   9FCD 28 08         [12]10636 	jr	Z,00116$
                          10637 ;src/main.c:2387: TwoPlayers = TRUE;
   9FCF 21 D4 5E      [10]10638 	ld	hl,#_TwoPlayers + 0
   9FD2 36 01         [10]10639 	ld	(hl), #0x01
                          10640 ;src/main.c:2388: break;
   9FD4 C3 CD A0      [10]10641 	jp	00123$
   9FD7                   10642 00116$:
                          10643 ;src/main.c:2390: else if(cpct_isKeyPressed(Key_3)){ // redefine keys
   9FD7 21 07 02      [10]10644 	ld	hl, #0x0207
   9FDA CD C1 51      [17]10645 	call	_cpct_isKeyPressed
   9FDD 7D            [ 4]10646 	ld	a, l
   9FDE B7            [ 4]10647 	or	a, a
   9FDF CA A0 A0      [10]10648 	jp	Z, 00113$
                          10649 ;src/main.c:2391: Wait4Key(Key_3);
   9FE2 21 07 02      [10]10650 	ld	hl, #0x0207
   9FE5 E5            [11]10651 	push	hl
   9FE6 CD 6C 6A      [17]10652 	call	_Wait4Key
   9FE9 F1            [10]10653 	pop	af
                          10654 ;src/main.c:2392: randSeed = 0; page = 1;
   9FEA DD 36 FE 00   [19]10655 	ld	-2 (ix), #0x00
   9FEE DD 36 FF 01   [19]10656 	ld	-1 (ix), #0x01
                          10657 ;src/main.c:2393: PrintStartMenu();
   9FF2 CD 7C 9B      [17]10658 	call	_PrintStartMenu
                          10659 ;src/main.c:2395: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 22, 110), cpct_px2byteM0(1, 1), 45, 70);
   9FF5 21 01 01      [10]10660 	ld	hl, #0x0101
   9FF8 E5            [11]10661 	push	hl
   9FF9 CD B3 5C      [17]10662 	call	_cpct_px2byteM0
   9FFC 26 00         [ 7]10663 	ld	h, #0x00
   9FFE 01 2D 46      [10]10664 	ld	bc, #0x462d
   A001 C5            [11]10665 	push	bc
   A002 E5            [11]10666 	push	hl
   A003 21 26 F4      [10]10667 	ld	hl, #0xf426
   A006 E5            [11]10668 	push	hl
   A007 CD ED 5C      [17]10669 	call	_cpct_drawSolidBox
                          10670 ;src/main.c:2398: ctlUp[0] = 		RedefineKey("@P1@UP");
   A00A 21 E3 A0      [10]10671 	ld	hl, #___str_73
   A00D E5            [11]10672 	push	hl
   A00E CD 89 6A      [17]10673 	call	_RedefineKey
   A011 F1            [10]10674 	pop	af
   A012 4D            [ 4]10675 	ld	c, l
   A013 44            [ 4]10676 	ld	b, h
   A014 ED 43 F4 5E   [20]10677 	ld	(_ctlUp), bc
                          10678 ;src/main.c:2399: ctlDown[0] = 	RedefineKey("P1@DOWN");
   A018 21 EA A0      [10]10679 	ld	hl, #___str_74
   A01B E5            [11]10680 	push	hl
   A01C CD 89 6A      [17]10681 	call	_RedefineKey
   A01F F1            [10]10682 	pop	af
   A020 4D            [ 4]10683 	ld	c, l
   A021 44            [ 4]10684 	ld	b, h
   A022 ED 43 F8 5E   [20]10685 	ld	(_ctlDown), bc
                          10686 ;src/main.c:2400: ctlLeft[0] = 	RedefineKey("P1@LEFT");
   A026 21 F2 A0      [10]10687 	ld	hl, #___str_75
   A029 E5            [11]10688 	push	hl
   A02A CD 89 6A      [17]10689 	call	_RedefineKey
   A02D F1            [10]10690 	pop	af
   A02E 4D            [ 4]10691 	ld	c, l
   A02F 44            [ 4]10692 	ld	b, h
   A030 ED 43 FC 5E   [20]10693 	ld	(_ctlLeft), bc
                          10694 ;src/main.c:2401: ctlRight[0] = 	RedefineKey("P1@RIGHT");
   A034 21 FA A0      [10]10695 	ld	hl, #___str_76
   A037 E5            [11]10696 	push	hl
   A038 CD 89 6A      [17]10697 	call	_RedefineKey
   A03B F1            [10]10698 	pop	af
   A03C 4D            [ 4]10699 	ld	c, l
   A03D 44            [ 4]10700 	ld	b, h
   A03E ED 43 00 5F   [20]10701 	ld	(_ctlRight), bc
                          10702 ;src/main.c:2403: ctlUp[1] = 		RedefineKey("@P2@UP@@");
   A042 21 03 A1      [10]10703 	ld	hl, #___str_77
   A045 E5            [11]10704 	push	hl
   A046 CD 89 6A      [17]10705 	call	_RedefineKey
   A049 F1            [10]10706 	pop	af
   A04A 4D            [ 4]10707 	ld	c, l
   A04B 44            [ 4]10708 	ld	b, h
   A04C ED 43 F6 5E   [20]10709 	ld	((_ctlUp + 0x0002)), bc
                          10710 ;src/main.c:2404: ctlDown[1] = 	RedefineKey("P2@DOWN");
   A050 21 0C A1      [10]10711 	ld	hl, #___str_78
   A053 E5            [11]10712 	push	hl
   A054 CD 89 6A      [17]10713 	call	_RedefineKey
   A057 F1            [10]10714 	pop	af
   A058 4D            [ 4]10715 	ld	c, l
   A059 44            [ 4]10716 	ld	b, h
   A05A ED 43 FA 5E   [20]10717 	ld	((_ctlDown + 0x0002)), bc
                          10718 ;src/main.c:2405: ctlLeft[1] = 	RedefineKey("P2@LEFT");
   A05E 21 14 A1      [10]10719 	ld	hl, #___str_79
   A061 E5            [11]10720 	push	hl
   A062 CD 89 6A      [17]10721 	call	_RedefineKey
   A065 F1            [10]10722 	pop	af
   A066 4D            [ 4]10723 	ld	c, l
   A067 44            [ 4]10724 	ld	b, h
   A068 ED 43 FE 5E   [20]10725 	ld	((_ctlLeft + 0x0002)), bc
                          10726 ;src/main.c:2406: ctlRight[1] = 	RedefineKey("P2@RIGHT");	
   A06C 21 1C A1      [10]10727 	ld	hl, #___str_80
   A06F E5            [11]10728 	push	hl
   A070 CD 89 6A      [17]10729 	call	_RedefineKey
   A073 F1            [10]10730 	pop	af
   A074 4D            [ 4]10731 	ld	c, l
   A075 44            [ 4]10732 	ld	b, h
   A076 ED 43 02 5F   [20]10733 	ld	((_ctlRight + 0x0002)), bc
                          10734 ;src/main.c:2408: ctlAbort = 		RedefineKey("@ABORT@@");
   A07A 21 25 A1      [10]10735 	ld	hl, #___str_81
   A07D E5            [11]10736 	push	hl
   A07E CD 89 6A      [17]10737 	call	_RedefineKey
   A081 F1            [10]10738 	pop	af
   A082 22 04 5F      [16]10739 	ld	(_ctlAbort), hl
                          10740 ;src/main.c:2409: ctlMusic = 		RedefineKey("@MUSIC");
   A085 21 2E A1      [10]10741 	ld	hl, #___str_82
   A088 E5            [11]10742 	push	hl
   A089 CD 89 6A      [17]10743 	call	_RedefineKey
   A08C F1            [10]10744 	pop	af
   A08D 22 06 5F      [16]10745 	ld	(_ctlMusic), hl
                          10746 ;src/main.c:2410: ctlPause =		RedefineKey("@PAUSE");		
   A090 21 35 A1      [10]10747 	ld	hl, #___str_83
   A093 E5            [11]10748 	push	hl
   A094 CD 89 6A      [17]10749 	call	_RedefineKey
   A097 F1            [10]10750 	pop	af
   A098 22 08 5F      [16]10751 	ld	(_ctlPause), hl
                          10752 ;src/main.c:2411: PrintStartMenu();
   A09B CD 7C 9B      [17]10753 	call	_PrintStartMenu
   A09E 18 24         [12]10754 	jr	00120$
   A0A0                   10755 00113$:
                          10756 ;src/main.c:2413: else if(cpct_isKeyPressed(Key_4)) {	// turbo mode
   A0A0 21 07 01      [10]10757 	ld	hl, #0x0107
   A0A3 CD C1 51      [17]10758 	call	_cpct_isKeyPressed
   A0A6 7D            [ 4]10759 	ld	a, l
   A0A7 B7            [ 4]10760 	or	a, a
   A0A8 28 1A         [12]10761 	jr	Z,00120$
                          10762 ;src/main.c:2414: turboMode = !turboMode;
   A0AA FD 21 EF 5E   [14]10763 	ld	iy, #_turboMode
   A0AE FD 7E 00      [19]10764 	ld	a, 0 (iy)
   A0B1 D6 01         [ 7]10765 	sub	a,#0x01
   A0B3 3E 00         [ 7]10766 	ld	a, #0x00
   A0B5 17            [ 4]10767 	rla
   A0B6 FD 77 00      [19]10768 	ld	0 (iy), a
                          10769 ;src/main.c:2415: randSeed = 0; page = 1;
   A0B9 DD 36 FE 00   [19]10770 	ld	-2 (ix), #0x00
   A0BD DD 36 FF 01   [19]10771 	ld	-1 (ix), #0x01
                          10772 ;src/main.c:2416: PrintStartMenu();
   A0C1 CD 7C 9B      [17]10773 	call	_PrintStartMenu
   A0C4                   10774 00120$:
                          10775 ;src/main.c:2418: Pause(3);
   A0C4 21 03 00      [10]10776 	ld	hl, #0x0003
   A0C7 CD 81 61      [17]10777 	call	_Pause
   A0CA C3 80 9F      [10]10778 	jp	00122$
   A0CD                   10779 00123$:
                          10780 ;src/main.c:2420: cpct_setSeed_lcg_u8(randSeed); // set the seed
   A0CD DD 6E FE      [19]10781 	ld	l, -2 (ix)
   A0D0 CD A4 5B      [17]10782 	call	_cpct_setSeed_lcg_u8
                          10783 ;src/main.c:2421: cpct_akp_musicInit(g_fx); // mute the music
   A0D3 21 C4 05      [10]10784 	ld	hl, #_g_fx
   A0D6 E5            [11]10785 	push	hl
   A0D7 CD 48 59      [17]10786 	call	_cpct_akp_musicInit
   A0DA F1            [10]10787 	pop	af
                          10788 ;src/main.c:2422: ClearScreen();
   A0DB CD B6 61      [17]10789 	call	_ClearScreen
   A0DE DD F9         [10]10790 	ld	sp, ix
   A0E0 DD E1         [14]10791 	pop	ix
   A0E2 C9            [10]10792 	ret
   A0E3                   10793 ___str_73:
   A0E3 40 50 31 40 55 50 10794 	.ascii "@P1@UP"
   A0E9 00                10795 	.db 0x00
   A0EA                   10796 ___str_74:
   A0EA 50 31 40 44 4F 57 10797 	.ascii "P1@DOWN"
        4E
   A0F1 00                10798 	.db 0x00
   A0F2                   10799 ___str_75:
   A0F2 50 31 40 4C 45 46 10800 	.ascii "P1@LEFT"
        54
   A0F9 00                10801 	.db 0x00
   A0FA                   10802 ___str_76:
   A0FA 50 31 40 52 49 47 10803 	.ascii "P1@RIGHT"
        48 54
   A102 00                10804 	.db 0x00
   A103                   10805 ___str_77:
   A103 40 50 32 40 55 50 10806 	.ascii "@P2@UP@@"
        40 40
   A10B 00                10807 	.db 0x00
   A10C                   10808 ___str_78:
   A10C 50 32 40 44 4F 57 10809 	.ascii "P2@DOWN"
        4E
   A113 00                10810 	.db 0x00
   A114                   10811 ___str_79:
   A114 50 32 40 4C 45 46 10812 	.ascii "P2@LEFT"
        54
   A11B 00                10813 	.db 0x00
   A11C                   10814 ___str_80:
   A11C 50 32 40 52 49 47 10815 	.ascii "P2@RIGHT"
        48 54
   A124 00                10816 	.db 0x00
   A125                   10817 ___str_81:
   A125 40 41 42 4F 52 54 10818 	.ascii "@ABORT@@"
        40 40
   A12D 00                10819 	.db 0x00
   A12E                   10820 ___str_82:
   A12E 40 4D 55 53 49 43 10821 	.ascii "@MUSIC"
   A134 00                10822 	.db 0x00
   A135                   10823 ___str_83:
   A135 40 50 41 55 53 45 10824 	.ascii "@PAUSE"
   A13B 00                10825 	.db 0x00
                          10826 ;src/main.c:2439: void InitValues() {	
                          10827 ;	---------------------------------
                          10828 ; Function InitValues
                          10829 ; ---------------------------------
   A13C                   10830 _InitValues::
                          10831 ;src/main.c:2442: ctlUp[0] = Key_W;
   A13C 21 07 08      [10]10832 	ld	hl, #0x0807
   A13F 22 F4 5E      [16]10833 	ld	(_ctlUp), hl
                          10834 ;src/main.c:2443: ctlDown[0] = Key_S;
   A142 26 10         [ 7]10835 	ld	h, #0x10
   A144 22 F8 5E      [16]10836 	ld	(_ctlDown), hl
                          10837 ;src/main.c:2444: ctlLeft[0] = Key_A;
   A147 21 08 20      [10]10838 	ld	hl, #0x2008
   A14A 22 FC 5E      [16]10839 	ld	(_ctlLeft), hl
                          10840 ;src/main.c:2445: ctlRight[0] = Key_D;
   A14D 2E 07         [ 7]10841 	ld	l, #0x07
   A14F 22 00 5F      [16]10842 	ld	(_ctlRight), hl
                          10843 ;src/main.c:2447: ctlUp[1] = Key_F5;
   A152 21 01 10      [10]10844 	ld	hl, #0x1001
   A155 22 F6 5E      [16]10845 	ld	((_ctlUp + 0x0002)), hl
                          10846 ;src/main.c:2448: ctlDown[1] = Key_F2;
   A158 26 40         [ 7]10847 	ld	h, #0x40
   A15A 22 FA 5E      [16]10848 	ld	((_ctlDown + 0x0002)), hl
                          10849 ;src/main.c:2449: ctlLeft[1] = Key_F1;
   A15D 26 20         [ 7]10850 	ld	h, #0x20
   A15F 22 FE 5E      [16]10851 	ld	((_ctlLeft + 0x0002)), hl
                          10852 ;src/main.c:2450: ctlRight[1] = Key_F3;
   A162 2E 00         [ 7]10853 	ld	l, #0x00
   A164 22 02 5F      [16]10854 	ld	((_ctlRight + 0x0002)), hl
                          10855 ;src/main.c:2452: ctlAbort = Key_X;
   A167 21 07 80      [10]10856 	ld	hl, #0x8007
   A16A 22 04 5F      [16]10857 	ld	(_ctlAbort), hl
                          10858 ;src/main.c:2453: ctlMusic = Key_M;
   A16D 21 04 40      [10]10859 	ld	hl, #0x4004
   A170 22 06 5F      [16]10860 	ld	(_ctlMusic), hl
                          10861 ;src/main.c:2454: ctlPause = Key_H;	
   A173 21 05 10      [10]10862 	ld	hl, #0x1005
   A176 22 08 5F      [16]10863 	ld	(_ctlPause), hl
                          10864 ;src/main.c:2456: turboMode = FALSE;
   A179 21 EF 5E      [10]10865 	ld	hl,#_turboMode + 0
   A17C 36 00         [10]10866 	ld	(hl), #0x00
                          10867 ;src/main.c:2457: nTip = 0;
   A17E 21 F0 5E      [10]10868 	ld	hl,#_nTip + 0
   A181 36 00         [10]10869 	ld	(hl), #0x00
   A183 C9            [10]10870 	ret
                          10871 ;src/main.c:2462: void ResetData() {
                          10872 ;	---------------------------------
                          10873 ; Function ResetData
                          10874 ; ---------------------------------
   A184                   10875 _ResetData::
                          10876 ;src/main.c:2463: ctMainLoop = 0;
   A184 21 00 00      [10]10877 	ld	hl, #0x0000
   A187 22 F2 5E      [16]10878 	ld	(_ctMainLoop), hl
                          10879 ;src/main.c:2464: nObj[0] = -1;
   A18A 21 78 5F      [10]10880 	ld	hl, #_nObj+0
   A18D 36 FF         [10]10881 	ld	(hl), #0xff
                          10882 ;src/main.c:2465: nObj[1] = -1;
   A18F 23            [ 6]10883 	inc	hl
   A190 36 FF         [10]10884 	ld	(hl), #0xff
                          10885 ;src/main.c:2466: sht.active = FALSE;
   A192 21 77 5F      [10]10886 	ld	hl, #(_sht + 0x0004)
   A195 36 00         [10]10887 	ld	(hl), #0x00
                          10888 ;src/main.c:2467: ctWizardAnim = 0;
   A197 21 F1 5E      [10]10889 	ld	hl,#_ctWizardAnim + 0
   A19A 36 00         [10]10890 	ld	(hl), #0x00
                          10891 ;src/main.c:2470: spr[0].dir = D_right; 
   A19C 21 11 5F      [10]10892 	ld	hl, #(_spr + 0x0007)
   A19F 36 03         [10]10893 	ld	(hl), #0x03
                          10894 ;src/main.c:2471: spr[0].status = S_stopped;
   A1A1 21 10 5F      [10]10895 	ld	hl, #(_spr + 0x0006)
   A1A4 36 04         [10]10896 	ld	(hl), #0x04
                          10897 ;src/main.c:2472: spr[0].print_minV = TRUE; // the first time must be printed on screen
   A1A6 21 17 5F      [10]10898 	ld	hl, #(_spr + 0x000d)
   A1A9 36 01         [10]10899 	ld	(hl), #0x01
                          10900 ;src/main.c:2473: spr[0].power_maxV = 0;
   A1AB 21 18 5F      [10]10901 	ld	hl, #(_spr + 0x000e)
   A1AE 36 00         [10]10902 	ld	(hl), #0x00
                          10903 ;src/main.c:2474: ctInactivity[0] = 0;
   A1B0 01 ED 5E      [10]10904 	ld	bc, #_ctInactivity+0
   A1B3 AF            [ 4]10905 	xor	a, a
   A1B4 02            [ 7]10906 	ld	(bc), a
                          10907 ;src/main.c:2476: spr[1].dir = D_left; 
   A1B5 21 20 5F      [10]10908 	ld	hl, #(_spr + 0x0016)
   A1B8 36 02         [10]10909 	ld	(hl), #0x02
                          10910 ;src/main.c:2477: spr[1].status = S_stopped;	
   A1BA 21 1F 5F      [10]10911 	ld	hl, #(_spr + 0x0015)
   A1BD 36 04         [10]10912 	ld	(hl), #0x04
                          10913 ;src/main.c:2478: spr[1].print_minV = TRUE; // the first time must be printed on screen
   A1BF 21 26 5F      [10]10914 	ld	hl, #(_spr + 0x001c)
   A1C2 36 01         [10]10915 	ld	(hl), #0x01
                          10916 ;src/main.c:2479: spr[1].power_maxV = 0;
   A1C4 21 27 5F      [10]10917 	ld	hl, #(_spr + 0x001d)
   A1C7 36 00         [10]10918 	ld	(hl), #0x00
                          10919 ;src/main.c:2480: ctInactivity[1] = 0;
   A1C9 03            [ 6]10920 	inc	bc
   A1CA AF            [ 4]10921 	xor	a, a
   A1CB 02            [ 7]10922 	ld	(bc), a
                          10923 ;src/main.c:2482: SetEnemies();
   A1CC CD 37 90      [17]10924 	call	_SetEnemies
                          10925 ;src/main.c:2483: PrintMap();
   A1CF CD 2B 62      [17]10926 	call	_PrintMap
                          10927 ;src/main.c:2484: RefreshScoreboard();
   A1D2 CD 4A 6C      [17]10928 	call	_RefreshScoreboard
                          10929 ;src/main.c:2485: DeleteObjectInStore();
   A1D5 CD EE 6E      [17]10930 	call	_DeleteObjectInStore
                          10931 ;src/main.c:2488: if (nMap != lastNMap) {
   A1D8 3A D0 5E      [13]10932 	ld	a,(#_nMap + 0)
   A1DB FD 21 D1 5E   [14]10933 	ld	iy, #_lastNMap
   A1DF FD 96 00      [19]10934 	sub	a, 0 (iy)
   A1E2 C8            [11]10935 	ret	Z
                          10936 ;src/main.c:2489: if (!TwoPlayers) {
   A1E3 3A D4 5E      [13]10937 	ld	a,(#_TwoPlayers + 0)
   A1E6 B7            [ 4]10938 	or	a, a
   A1E7 20 1C         [12]10939 	jr	NZ,00102$
                          10940 ;src/main.c:2490: PrintKey();
   A1E9 CD 3B 76      [17]10941 	call	_PrintKey
                          10942 ;src/main.c:2492: playerKey[0] = 0;
   A1EC 21 E4 5E      [10]10943 	ld	hl, #_playerKey
   A1EF 36 00         [10]10944 	ld	(hl), #0x00
                          10945 ;src/main.c:2493: playerKey[1] = 0;
   A1F1 21 E5 5E      [10]10946 	ld	hl, #(_playerKey + 0x0001)
   A1F4 36 00         [10]10947 	ld	(hl), #0x00
                          10948 ;src/main.c:2494: playerKey[2] = 0;
   A1F6 21 E6 5E      [10]10949 	ld	hl, #(_playerKey + 0x0002)
   A1F9 36 00         [10]10950 	ld	(hl), #0x00
                          10951 ;src/main.c:2495: playerKey[3] = 0;
   A1FB 21 E7 5E      [10]10952 	ld	hl, #(_playerKey + 0x0003)
   A1FE 36 00         [10]10953 	ld	(hl), #0x00
                          10954 ;src/main.c:2496: playerKey[4] = 0;
   A200 21 E8 5E      [10]10955 	ld	hl, #(_playerKey + 0x0004)
   A203 36 00         [10]10956 	ld	(hl), #0x00
   A205                   10957 00102$:
                          10958 ;src/main.c:2498: PrintLevelInfo();	
   A205 CD 2A 66      [17]10959 	call	_PrintLevelInfo
                          10960 ;src/main.c:2499: PrintMap();	
   A208 CD 2B 62      [17]10961 	call	_PrintMap
                          10962 ;src/main.c:2500: lastNMap = nMap;
   A20B 3A D0 5E      [13]10963 	ld	a,(#_nMap + 0)
   A20E 32 D1 5E      [13]10964 	ld	(#_lastNMap + 0),a
   A211 C9            [10]10965 	ret
                          10966 ;src/main.c:2506: void InitGame() {
                          10967 ;	---------------------------------
                          10968 ; Function InitGame
                          10969 ; ---------------------------------
   A212                   10970 _InitGame::
                          10971 ;src/main.c:2507: StartMenu(); // run the start menu
   A212 CD 67 9F      [17]10972 	call	_StartMenu
                          10973 ;src/main.c:2508: music = TRUE;
   A215 21 EB 5E      [10]10974 	ld	hl,#_music + 0
   A218 36 01         [10]10975 	ld	(hl), #0x01
                          10976 ;src/main.c:2509: nMap = 0; // initial map number
   A21A 21 D0 5E      [10]10977 	ld	hl,#_nMap + 0
   A21D 36 00         [10]10978 	ld	(hl), #0x00
                          10979 ;src/main.c:2510: lastNMap = 255;
   A21F 21 D1 5E      [10]10980 	ld	hl,#_lastNMap + 0
   A222 36 FF         [10]10981 	ld	(hl), #0xff
                          10982 ;src/main.c:2513: spr[0].num = 0; // sprite number
   A224 21 0A 5F      [10]10983 	ld	hl, #_spr
   A227 36 00         [10]10984 	ld	(hl), #0x00
                          10985 ;src/main.c:2514: spr[0].ident = SORCERER1; // identity
   A229 21 0B 5F      [10]10986 	ld	hl, #(_spr + 0x0001)
   A22C 36 00         [10]10987 	ld	(hl), #0x00
                          10988 ;src/main.c:2515: spr[0].lives_speed = 3; // lives
   A22E 21 15 5F      [10]10989 	ld	hl, #(_spr + 0x000b)
   A231 36 03         [10]10990 	ld	(hl), #0x03
                          10991 ;src/main.c:2516: score[0] = 0; // score
   A233 21 00 00      [10]10992 	ld	hl, #0x0000
   A236 22 D5 5E      [16]10993 	ld	(_score), hl
                          10994 ;src/main.c:2517: ResetObjData(0);
   A239 2E 00         [ 7]10995 	ld	l, #0x00
   A23B CD 63 6D      [17]10996 	call	_ResetObjData
                          10997 ;src/main.c:2520: spr[1].num = 1; // sprite number
   A23E 21 19 5F      [10]10998 	ld	hl, #(_spr + 0x000f)
   A241 36 01         [10]10999 	ld	(hl), #0x01
                          11000 ;src/main.c:2521: spr[1].ident = SORCERER2; // identity
   A243 21 1A 5F      [10]11001 	ld	hl, #(_spr + 0x0010)
   A246 36 01         [10]11002 	ld	(hl), #0x01
                          11003 ;src/main.c:2522: spr[1].lives_speed = 3; // lives
   A248 21 24 5F      [10]11004 	ld	hl, #(_spr + 0x001a)
   A24B 36 03         [10]11005 	ld	(hl), #0x03
                          11006 ;src/main.c:2523: score[1] = 0; // score
   A24D 21 00 00      [10]11007 	ld	hl, #0x0000
   A250 22 D7 5E      [16]11008 	ld	((_score + 0x0002)), hl
                          11009 ;src/main.c:2524: ResetObjData(1);
   A253 2E 01         [ 7]11010 	ld	l, #0x01
   A255 CD 63 6D      [17]11011 	call	_ResetObjData
                          11012 ;src/main.c:2527: spr[6].num = 6; // sprite number
   A258 21 64 5F      [10]11013 	ld	hl, #(_spr + 0x005a)
   A25B 36 06         [10]11014 	ld	(hl), #0x06
                          11015 ;src/main.c:2528: spr[6].ident = WIZARD; // identity
   A25D 21 65 5F      [10]11016 	ld	hl, #(_spr + 0x005b)
   A260 36 07         [10]11017 	ld	(hl), #0x07
                          11018 ;src/main.c:2530: InitScoreboard();		
   A262 CD DF 6A      [17]11019 	call	_InitScoreboard
                          11020 ;src/main.c:2531: ResetData();
   A265 C3 84 A1      [10]11021 	jp  _ResetData
                          11022 ;src/main.c:2536: void GameOver(u8 player) {
                          11023 ;	---------------------------------
                          11024 ; Function GameOver
                          11025 ; ---------------------------------
   A268                   11026 _GameOver::
   A268 DD E5         [15]11027 	push	ix
   A26A DD 21 00 00   [14]11028 	ld	ix,#0
   A26E DD 39         [15]11029 	add	ix,sp
   A270 F5            [11]11030 	push	af
                          11031 ;src/main.c:2538: if (spr[player].lives_speed > 1 && player != 2) {
   A271 01 0A 5F      [10]11032 	ld	bc, #_spr+0
   A274 DD 5E 04      [19]11033 	ld	e,4 (ix)
   A277 16 00         [ 7]11034 	ld	d,#0x00
   A279 6B            [ 4]11035 	ld	l, e
   A27A 62            [ 4]11036 	ld	h, d
   A27B 29            [11]11037 	add	hl, hl
   A27C 19            [11]11038 	add	hl, de
   A27D 29            [11]11039 	add	hl, hl
   A27E 19            [11]11040 	add	hl, de
   A27F 29            [11]11041 	add	hl, hl
   A280 19            [11]11042 	add	hl, de
   A281 09            [11]11043 	add	hl,bc
   A282 01 0B 00      [10]11044 	ld	bc,#0x000b
   A285 09            [11]11045 	add	hl,bc
   A286 E3            [19]11046 	ex	(sp), hl
   A287 E1            [10]11047 	pop	hl
   A288 E5            [11]11048 	push	hl
   A289 4E            [ 7]11049 	ld	c, (hl)
   A28A 3E 01         [ 7]11050 	ld	a, #0x01
   A28C 91            [ 4]11051 	sub	a, c
   A28D 30 11         [12]11052 	jr	NC,00113$
   A28F DD 7E 04      [19]11053 	ld	a, 4 (ix)
   A292 D6 02         [ 7]11054 	sub	a, #0x02
   A294 28 0A         [12]11055 	jr	Z,00113$
                          11056 ;src/main.c:2539: spr[player].lives_speed--;
   A296 0D            [ 4]11057 	dec	c
   A297 E1            [10]11058 	pop	hl
   A298 E5            [11]11059 	push	hl
   A299 71            [ 7]11060 	ld	(hl), c
                          11061 ;src/main.c:2540: ResetData();
   A29A CD 84 A1      [17]11062 	call	_ResetData
   A29D C3 79 A3      [10]11063 	jp	00116$
   A2A0                   11064 00113$:
                          11065 ;src/main.c:2543: cpct_akp_musicInit(g_end); // game over music
   A2A0 21 2C 03      [10]11066 	ld	hl, #_g_end
   A2A3 E5            [11]11067 	push	hl
   A2A4 CD 48 59      [17]11068 	call	_cpct_akp_musicInit
   A2A7 F1            [10]11069 	pop	af
                          11070 ;src/main.c:2545: spr[player].lives_speed = 0;
   A2A8 E1            [10]11071 	pop	hl
   A2A9 E5            [11]11072 	push	hl
   A2AA 36 00         [10]11073 	ld	(hl), #0x00
                          11074 ;src/main.c:2546: RefreshScoreboard();
   A2AC CD 4A 6C      [17]11075 	call	_RefreshScoreboard
                          11076 ;src/main.c:2548: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START,  6, 80), cpct_px2byteM0(4, 4), 34, 60);
   A2AF 21 04 04      [10]11077 	ld	hl, #0x0404
   A2B2 E5            [11]11078 	push	hl
   A2B3 CD B3 5C      [17]11079 	call	_cpct_px2byteM0
   A2B6 26 00         [ 7]11080 	ld	h, #0x00
   A2B8 01 22 3C      [10]11081 	ld	bc, #0x3c22
   A2BB C5            [11]11082 	push	bc
   A2BC E5            [11]11083 	push	hl
   A2BD 21 26 C3      [10]11084 	ld	hl, #0xc326
   A2C0 E5            [11]11085 	push	hl
   A2C1 CD ED 5C      [17]11086 	call	_cpct_drawSolidBox
                          11087 ;src/main.c:2549: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 40, 80), cpct_px2byteM0(4, 4), 34, 60);
   A2C4 21 04 04      [10]11088 	ld	hl, #0x0404
   A2C7 E5            [11]11089 	push	hl
   A2C8 CD B3 5C      [17]11090 	call	_cpct_px2byteM0
   A2CB 26 00         [ 7]11091 	ld	h, #0x00
   A2CD 01 22 3C      [10]11092 	ld	bc, #0x3c22
   A2D0 C5            [11]11093 	push	bc
   A2D1 E5            [11]11094 	push	hl
   A2D2 21 48 C3      [10]11095 	ld	hl, #0xc348
   A2D5 E5            [11]11096 	push	hl
   A2D6 CD ED 5C      [17]11097 	call	_cpct_drawSolidBox
                          11098 ;src/main.c:2550: PrintFrame(6,80,71,134);
   A2D9 21 47 86      [10]11099 	ld	hl, #0x8647
   A2DC E5            [11]11100 	push	hl
   A2DD 21 06 50      [10]11101 	ld	hl, #0x5006
   A2E0 E5            [11]11102 	push	hl
   A2E1 CD B3 63      [17]11103 	call	_PrintFrame
   A2E4 F1            [10]11104 	pop	af
   A2E5 F1            [10]11105 	pop	af
                          11106 ;src/main.c:2551: if (TwoPlayers) {
   A2E6 3A D4 5E      [13]11107 	ld	a,(#_TwoPlayers + 0)
   A2E9 B7            [ 4]11108 	or	a, a
   A2EA 28 6B         [12]11109 	jr	Z,00107$
                          11110 ;src/main.c:2552: PrintText("G@A@M@E@@O@V@E@R", 16, 91, 0);
   A2EC 21 5B 00      [10]11111 	ld	hl, #0x005b
   A2EF E5            [11]11112 	push	hl
   A2F0 3E 10         [ 7]11113 	ld	a, #0x10
   A2F2 F5            [11]11114 	push	af
   A2F3 33            [ 6]11115 	inc	sp
   A2F4 21 7E A3      [10]11116 	ld	hl, #___str_84
   A2F7 E5            [11]11117 	push	hl
   A2F8 CD 10 63      [17]11118 	call	_PrintText
   A2FB F1            [10]11119 	pop	af
   A2FC F1            [10]11120 	pop	af
   A2FD 33            [ 6]11121 	inc	sp
                          11122 ;src/main.c:2553: if (player == 0) PrintText("PLAYER@2@WINS>", 19, 106, 0);
   A2FE DD 7E 04      [19]11123 	ld	a, 4 (ix)
   A301 B7            [ 4]11124 	or	a, a
   A302 20 14         [12]11125 	jr	NZ,00104$
   A304 21 6A 00      [10]11126 	ld	hl, #0x006a
   A307 E5            [11]11127 	push	hl
   A308 3E 13         [ 7]11128 	ld	a, #0x13
   A30A F5            [11]11129 	push	af
   A30B 33            [ 6]11130 	inc	sp
   A30C 21 8F A3      [10]11131 	ld	hl, #___str_85
   A30F E5            [11]11132 	push	hl
   A310 CD 10 63      [17]11133 	call	_PrintText
   A313 F1            [10]11134 	pop	af
   A314 F1            [10]11135 	pop	af
   A315 33            [ 6]11136 	inc	sp
   A316 18 18         [12]11137 	jr	00105$
   A318                   11138 00104$:
                          11139 ;src/main.c:2554: else if (player == 1) PrintText("PLAYER@1@WINS>", 19, 106, 0);
   A318 DD 7E 04      [19]11140 	ld	a, 4 (ix)
   A31B 3D            [ 4]11141 	dec	a
   A31C 20 12         [12]11142 	jr	NZ,00105$
   A31E 21 6A 00      [10]11143 	ld	hl, #0x006a
   A321 E5            [11]11144 	push	hl
   A322 3E 13         [ 7]11145 	ld	a, #0x13
   A324 F5            [11]11146 	push	af
   A325 33            [ 6]11147 	inc	sp
   A326 21 9E A3      [10]11148 	ld	hl, #___str_86
   A329 E5            [11]11149 	push	hl
   A32A CD 10 63      [17]11150 	call	_PrintText
   A32D F1            [10]11151 	pop	af
   A32E F1            [10]11152 	pop	af
   A32F 33            [ 6]11153 	inc	sp
   A330                   11154 00105$:
                          11155 ;src/main.c:2555: PrintText("HIGH@SCORE:", 16, 122, 0);
   A330 21 7A 00      [10]11156 	ld	hl, #0x007a
   A333 E5            [11]11157 	push	hl
   A334 3E 10         [ 7]11158 	ld	a, #0x10
   A336 F5            [11]11159 	push	af
   A337 33            [ 6]11160 	inc	sp
   A338 21 AD A3      [10]11161 	ld	hl, #___str_87
   A33B E5            [11]11162 	push	hl
   A33C CD 10 63      [17]11163 	call	_PrintText
   A33F F1            [10]11164 	pop	af
                          11165 ;src/main.c:2556: PrintNumber(highScore, 4, 52, 122, 0);			
   A340 33            [ 6]11166 	inc	sp
   A341 21 7A 00      [10]11167 	ld	hl,#0x007a
   A344 E3            [19]11168 	ex	(sp),hl
   A345 21 04 34      [10]11169 	ld	hl, #0x3404
   A348 E5            [11]11170 	push	hl
   A349 2A D9 5E      [16]11171 	ld	hl, (_highScore)
   A34C E5            [11]11172 	push	hl
   A34D CD 41 62      [17]11173 	call	_PrintNumber
   A350 21 06 00      [10]11174 	ld	hl, #6
   A353 39            [11]11175 	add	hl, sp
   A354 F9            [ 6]11176 	ld	sp, hl
   A355 18 12         [12]11177 	jr	00108$
   A357                   11178 00107$:
                          11179 ;src/main.c:2559: PrintText("G@A@M@E@@O@V@E@R", 16, 107, 0);
   A357 21 6B 00      [10]11180 	ld	hl, #0x006b
   A35A E5            [11]11181 	push	hl
   A35B 3E 10         [ 7]11182 	ld	a, #0x10
   A35D F5            [11]11183 	push	af
   A35E 33            [ 6]11184 	inc	sp
   A35F 21 7E A3      [10]11185 	ld	hl, #___str_84
   A362 E5            [11]11186 	push	hl
   A363 CD 10 63      [17]11187 	call	_PrintText
   A366 F1            [10]11188 	pop	af
   A367 F1            [10]11189 	pop	af
   A368 33            [ 6]11190 	inc	sp
   A369                   11191 00108$:
                          11192 ;src/main.c:2560: Pause(500);	
   A369 21 F4 01      [10]11193 	ld	hl, #0x01f4
   A36C CD 81 61      [17]11194 	call	_Pause
                          11195 ;src/main.c:2562: while (!cpct_isAnyKeyPressed());
   A36F                   11196 00109$:
   A36F CD E5 5B      [17]11197 	call	_cpct_isAnyKeyPressed
   A372 7D            [ 4]11198 	ld	a, l
   A373 B7            [ 4]11199 	or	a, a
   A374 28 F9         [12]11200 	jr	Z,00109$
                          11201 ;src/main.c:2563: InitGame();
   A376 CD 12 A2      [17]11202 	call	_InitGame
   A379                   11203 00116$:
   A379 DD F9         [10]11204 	ld	sp, ix
   A37B DD E1         [14]11205 	pop	ix
   A37D C9            [10]11206 	ret
   A37E                   11207 ___str_84:
   A37E 47 40 41 40 4D 40 11208 	.ascii "G@A@M@E@@O@V@E@R"
        45 40 40 4F 40 56
        40 45 40 52
   A38E 00                11209 	.db 0x00
   A38F                   11210 ___str_85:
   A38F 50 4C 41 59 45 52 11211 	.ascii "PLAYER@2@WINS>"
        40 32 40 57 49 4E
        53 3E
   A39D 00                11212 	.db 0x00
   A39E                   11213 ___str_86:
   A39E 50 4C 41 59 45 52 11214 	.ascii "PLAYER@1@WINS>"
        40 31 40 57 49 4E
        53 3E
   A3AC 00                11215 	.db 0x00
   A3AD                   11216 ___str_87:
   A3AD 48 49 47 48 40 53 11217 	.ascii "HIGH@SCORE:"
        43 4F 52 45 3A
   A3B8 00                11218 	.db 0x00
                          11219 ;src/main.c:2568: void main(void) {
                          11220 ;	---------------------------------
                          11221 ; Function main
                          11222 ; ---------------------------------
   A3B9                   11223 _main::
                          11224 ;src/main.c:2570: cpct_disableFirmware();
   A3B9 CD DD 5C      [17]11225 	call	_cpct_disableFirmware
                          11226 ;src/main.c:2572: cpct_akp_SFXInit(g_fx);
   A3BC 21 C4 05      [10]11227 	ld	hl, #_g_fx
   A3BF E5            [11]11228 	push	hl
   A3C0 CD D4 59      [17]11229 	call	_cpct_akp_SFXInit
   A3C3 F1            [10]11230 	pop	af
                          11231 ;src/main.c:2574: cpct_setInterruptHandler(Interrupt); 
   A3C4 21 9D 61      [10]11232 	ld	hl, #_Interrupt
   A3C7 CD 51 5E      [17]11233 	call	_cpct_setInterruptHandler
                          11234 ;src/main.c:2576: cpct_setVideoMode(0);
   A3CA 2E 00         [ 7]11235 	ld	l, #0x00
   A3CC CD A5 5C      [17]11236 	call	_cpct_setVideoMode
                          11237 ;src/main.c:2578: cpct_setPalette(g_palette, 16);
   A3CF 21 10 00      [10]11238 	ld	hl, #0x0010
   A3D2 E5            [11]11239 	push	hl
   A3D3 21 C7 2E      [10]11240 	ld	hl, #_g_palette
   A3D6 E5            [11]11241 	push	hl
   A3D7 CD AA 51      [17]11242 	call	_cpct_setPalette
                          11243 ;src/main.c:2580: cpct_setBorder(g_palette[BG_COLOR]);
   A3DA 21 C8 2E      [10]11244 	ld	hl, #_g_palette + 1
   A3DD 46            [ 7]11245 	ld	b, (hl)
   A3DE C5            [11]11246 	push	bc
   A3DF 33            [ 6]11247 	inc	sp
   A3E0 3E 10         [ 7]11248 	ld	a, #0x10
   A3E2 F5            [11]11249 	push	af
   A3E3 33            [ 6]11250 	inc	sp
   A3E4 CD 37 52      [17]11251 	call	_cpct_setPALColour
                          11252 ;src/main.c:2582: cpct_etm_setTileset2x4(g_tileset);	
   A3E7 21 D7 2E      [10]11253 	ld	hl, #_g_tileset
   A3EA CD A0 5B      [17]11254 	call	_cpct_etm_setTileset2x4
                          11255 ;src/main.c:2584: InitValues();
   A3ED CD 3C A1      [17]11256 	call	_InitValues
                          11257 ;src/main.c:2586: InitGame();
   A3F0 CD 12 A2      [17]11258 	call	_InitGame
                          11259 ;src/main.c:2589: while (1) {
   A3F3                   11260 00140$:
                          11261 ;src/main.c:2591: if (ctMainLoop % 8 == 0) {
   A3F3 21 08 00      [10]11262 	ld	hl, #0x0008
   A3F6 E5            [11]11263 	push	hl
   A3F7 2A F2 5E      [16]11264 	ld	hl, (_ctMainLoop)
   A3FA E5            [11]11265 	push	hl
   A3FB CD C2 5D      [17]11266 	call	__modsint
   A3FE F1            [10]11267 	pop	af
   A3FF F1            [10]11268 	pop	af
   A400 7C            [ 4]11269 	ld	a, h
   A401 B5            [ 4]11270 	or	a,l
   A402 20 46         [12]11271 	jr	NZ,00108$
                          11272 ;src/main.c:2592: ReprintObject(); // reprint the active object
   A404 CD 0A 72      [17]11273 	call	_ReprintObject
                          11274 ;src/main.c:2593: PrintObjectInStore(); // reprint the object into the store
   A407 CD 2A 6F      [17]11275 	call	_PrintObjectInStore
                          11276 ;src/main.c:2594: CheckObject(0); // verify collection of object 1
   A40A AF            [ 4]11277 	xor	a, a
   A40B F5            [11]11278 	push	af
   A40C 33            [ 6]11279 	inc	sp
   A40D CD 5D 6F      [17]11280 	call	_CheckObject
   A410 33            [ 6]11281 	inc	sp
                          11282 ;src/main.c:2595: CheckObject(1); // verify collection of object 2
   A411 3E 01         [ 7]11283 	ld	a, #0x01
   A413 F5            [11]11284 	push	af
   A414 33            [ 6]11285 	inc	sp
   A415 CD 5D 6F      [17]11286 	call	_CheckObject
   A418 33            [ 6]11287 	inc	sp
                          11288 ;src/main.c:2596: MakeWizardAnim(0); // activates the wizard's shot if the player 1 is inactive		
   A419 2E 00         [ 7]11289 	ld	l, #0x00
   A41B CD D9 8A      [17]11290 	call	_MakeWizardAnim
                          11291 ;src/main.c:2597: if (spr[0].print_minV) CheckActiveTile(0); // check entry into store, door or well of player 1
   A41E 3A 17 5F      [13]11292 	ld	a, (#_spr + 13)
   A421 B7            [ 4]11293 	or	a, a
   A422 28 07         [12]11294 	jr	Z,00102$
   A424 AF            [ 4]11295 	xor	a, a
   A425 F5            [11]11296 	push	af
   A426 33            [ 6]11297 	inc	sp
   A427 CD 97 76      [17]11298 	call	_CheckActiveTile
   A42A 33            [ 6]11299 	inc	sp
   A42B                   11300 00102$:
                          11301 ;src/main.c:2599: if (TwoPlayers) {
   A42B 3A D4 5E      [13]11302 	ld	a,(#_TwoPlayers + 0)
   A42E B7            [ 4]11303 	or	a, a
   A42F 28 16         [12]11304 	jr	Z,00106$
                          11305 ;src/main.c:2600: CheckDuel(); // check that both players collide and have potions
   A431 CD 6A 88      [17]11306 	call	_CheckDuel
                          11307 ;src/main.c:2601: MakeWizardAnim(1); // activates the wizard's shot if the player 2 is inactive		
   A434 2E 01         [ 7]11308 	ld	l, #0x01
   A436 CD D9 8A      [17]11309 	call	_MakeWizardAnim
                          11310 ;src/main.c:2602: if (spr[1].print_minV) CheckActiveTile(1); // check entry into store, door or well of player 2
   A439 3A 26 5F      [13]11311 	ld	a, (#_spr + 28)
   A43C B7            [ 4]11312 	or	a, a
   A43D 28 08         [12]11313 	jr	Z,00106$
   A43F 3E 01         [ 7]11314 	ld	a, #0x01
   A441 F5            [11]11315 	push	af
   A442 33            [ 6]11316 	inc	sp
   A443 CD 97 76      [17]11317 	call	_CheckActiveTile
   A446 33            [ 6]11318 	inc	sp
   A447                   11319 00106$:
                          11320 ;src/main.c:2604: WizardAnim(); // print the wizard if active
   A447 CD 20 8A      [17]11321 	call	_WizardAnim
   A44A                   11322 00108$:
                          11323 ;src/main.c:2607: if (!turboMode) cpct_waitVSYNC(); // wait for vertical retrace	
   A44A 3A EF 5E      [13]11324 	ld	a,(#_turboMode + 0)
   A44D B7            [ 4]11325 	or	a, a
   A44E 20 03         [12]11326 	jr	NZ,00110$
   A450 CD 9D 5C      [17]11327 	call	_cpct_waitVSYNC
   A453                   11328 00110$:
                          11329 ;src/main.c:2610: switch (ctMainLoop % 3) {
   A453 21 03 00      [10]11330 	ld	hl, #0x0003
   A456 E5            [11]11331 	push	hl
   A457 2A F2 5E      [16]11332 	ld	hl, (_ctMainLoop)
   A45A E5            [11]11333 	push	hl
   A45B CD C2 5D      [17]11334 	call	__modsint
   A45E F1            [10]11335 	pop	af
   A45F F1            [10]11336 	pop	af
   A460 4D            [ 4]11337 	ld	c, l
   A461 44            [ 4]11338 	ld	b, h
   A462 79            [ 4]11339 	ld	a, c
   A463 B7            [ 4]11340 	or	a, a
   A464 B0            [ 4]11341 	or	a, b
   A465 28 0E         [12]11342 	jr	Z,00111$
   A467 79            [ 4]11343 	ld	a, c
   A468 3D            [ 4]11344 	dec	a
   A469 B0            [ 4]11345 	or	a, b
   A46A 28 18         [12]11346 	jr	Z,00112$
   A46C 79            [ 4]11347 	ld	a, c
   A46D D6 02         [ 7]11348 	sub	a, #0x02
   A46F B0            [ 4]11349 	or	a, b
   A470 28 2F         [12]11350 	jr	Z,00117$
   A472 C3 FB A4      [10]11351 	jp	00129$
                          11352 ;src/main.c:2612: case 0: {							
   A475                   11353 00111$:
                          11354 ;src/main.c:2613: PlayerLoop(&spr[0]); // player 1
   A475 21 0A 5F      [10]11355 	ld	hl, #_spr
   A478 CD C0 83      [17]11356 	call	_PlayerLoop
                          11357 ;src/main.c:2614: EnemyLoop(&spr[2]);	 // enemy sprite 2 is always processed (fast)
   A47B 21 28 5F      [10]11358 	ld	hl, #(_spr + 0x001e)
   A47E CD 15 9B      [17]11359 	call	_EnemyLoop
                          11360 ;src/main.c:2615: break;
   A481 C3 FB A4      [10]11361 	jp	00129$
                          11362 ;src/main.c:2618: case 1:	{			
   A484                   11363 00112$:
                          11364 ;src/main.c:2619: if (TwoPlayers) {
   A484 3A D4 5E      [13]11365 	ld	a,(#_TwoPlayers + 0)
   A487 B7            [ 4]11366 	or	a, a
   A488 28 0F         [12]11367 	jr	Z,00116$
                          11368 ;src/main.c:2620: PlayerLoop(&spr[1]); // player 2
   A48A 21 19 5F      [10]11369 	ld	hl, #(_spr + 0x000f)
   A48D CD C0 83      [17]11370 	call	_PlayerLoop
                          11371 ;src/main.c:2621: if (!turboMode) cpct_waitVSYNC(); // additional wait for vertical retrace (avoid flickering)
   A490 3A EF 5E      [13]11372 	ld	a,(#_turboMode + 0)
   A493 B7            [ 4]11373 	or	a, a
   A494 20 03         [12]11374 	jr	NZ,00116$
   A496 CD 9D 5C      [17]11375 	call	_cpct_waitVSYNC
   A499                   11376 00116$:
                          11377 ;src/main.c:2623: EnemyLoop(&spr[3]);	 // enemy sprite 3 is always processed (fast)
   A499 21 37 5F      [10]11378 	ld	hl, #(_spr + 0x002d)
   A49C CD 15 9B      [17]11379 	call	_EnemyLoop
                          11380 ;src/main.c:2624: break;
   A49F 18 5A         [12]11381 	jr	00129$
                          11382 ;src/main.c:2627: case 2:	{
   A4A1                   11383 00117$:
                          11384 ;src/main.c:2628: EnemyLoop(&spr[enemyTurn+4]); // enemy sprites 4 and 5 take turns processing (slow)				
   A4A1 3A EC 5E      [13]11385 	ld	a,(#_enemyTurn + 0)
   A4A4 C6 04         [ 7]11386 	add	a, #0x04
   A4A6 4F            [ 4]11387 	ld	c,a
   A4A7 06 00         [ 7]11388 	ld	b,#0x00
   A4A9 69            [ 4]11389 	ld	l, c
   A4AA 60            [ 4]11390 	ld	h, b
   A4AB 29            [11]11391 	add	hl, hl
   A4AC 09            [11]11392 	add	hl, bc
   A4AD 29            [11]11393 	add	hl, hl
   A4AE 09            [11]11394 	add	hl, bc
   A4AF 29            [11]11395 	add	hl, hl
   A4B0 09            [11]11396 	add	hl, bc
   A4B1 11 0A 5F      [10]11397 	ld	de, #_spr
   A4B4 19            [11]11398 	add	hl, de
   A4B5 CD 15 9B      [17]11399 	call	_EnemyLoop
                          11400 ;src/main.c:2629: if (++enemyTurn > 1) enemyTurn = 0;
   A4B8 FD 21 EC 5E   [14]11401 	ld	iy, #_enemyTurn
   A4BC FD 34 00      [23]11402 	inc	0 (iy)
   A4BF 3E 01         [ 7]11403 	ld	a, #0x01
   A4C1 FD 96 00      [19]11404 	sub	a, 0 (iy)
   A4C4 30 04         [12]11405 	jr	NC,00119$
   A4C6 FD 36 00 00   [19]11406 	ld	0 (iy), #0x00
   A4CA                   11407 00119$:
                          11408 ;src/main.c:2632: if (sht.active) {				
   A4CA 3A 77 5F      [13]11409 	ld	a, (#(_sht + 0x0004) + 0)
   A4CD B7            [ 4]11410 	or	a, a
   A4CE 28 17         [12]11411 	jr	Z,00124$
                          11412 ;src/main.c:2633: MoveShot(); // update the shot's XY coordinates	
   A4D0 CD A6 89      [17]11413 	call	_MoveShot
                          11414 ;src/main.c:2636: if (ctWizardAnim > 0) 	
   A4D3 3A F1 5E      [13]11415 	ld	a,(#_ctWizardAnim + 0)
   A4D6 B7            [ 4]11416 	or	a, a
   A4D7 28 08         [12]11417 	jr	Z,00121$
                          11418 ;src/main.c:2637: PrintShot(g_magic_3);	// wizard
   A4D9 21 61 16      [10]11419 	ld	hl, #_g_magic_3
   A4DC CD 7C 89      [17]11420 	call	_PrintShot
   A4DF 18 06         [12]11421 	jr	00124$
   A4E1                   11422 00121$:
                          11423 ;src/main.c:2639: PrintShot(g_magic_2);	// witch
   A4E1 21 41 16      [10]11424 	ld	hl, #_g_magic_2
   A4E4 CD 7C 89      [17]11425 	call	_PrintShot
   A4E7                   11426 00124$:
                          11427 ;src/main.c:2643: if (spr[0].power_maxV > 0) spr[0].power_maxV--;
   A4E7 01 18 5F      [10]11428 	ld	bc, #_spr + 14
   A4EA 0A            [ 7]11429 	ld	a, (bc)
   A4EB B7            [ 4]11430 	or	a, a
   A4EC 28 03         [12]11431 	jr	Z,00126$
   A4EE C6 FF         [ 7]11432 	add	a, #0xff
   A4F0 02            [ 7]11433 	ld	(bc), a
   A4F1                   11434 00126$:
                          11435 ;src/main.c:2644: if (spr[1].power_maxV > 0) spr[1].power_maxV--;			
   A4F1 01 27 5F      [10]11436 	ld	bc, #_spr + 29
   A4F4 0A            [ 7]11437 	ld	a, (bc)
   A4F5 B7            [ 4]11438 	or	a, a
   A4F6 28 03         [12]11439 	jr	Z,00129$
   A4F8 C6 FF         [ 7]11440 	add	a, #0xff
   A4FA 02            [ 7]11441 	ld	(bc), a
                          11442 ;src/main.c:2646: }
   A4FB                   11443 00129$:
                          11444 ;src/main.c:2649: ctMainLoop++;
   A4FB ED 4B F2 5E   [20]11445 	ld	bc, (_ctMainLoop)
   A4FF 03            [ 6]11446 	inc	bc
                          11447 ;src/main.c:2648: if (ctMainLoop == 174) {
   A500 FD 21 F2 5E   [14]11448 	ld	iy, #_ctMainLoop
   A504 FD 7E 00      [19]11449 	ld	a, 0 (iy)
   A507 D6 AE         [ 7]11450 	sub	a, #0xae
   A509 FD B6 01      [19]11451 	or	a, 1 (iy)
   A50C 20 25         [12]11452 	jr	NZ,00137$
                          11453 ;src/main.c:2649: ctMainLoop++;
   A50E ED 43 F2 5E   [20]11454 	ld	(_ctMainLoop), bc
                          11455 ;src/main.c:2650: SetObject(1); // set the second object
   A512 2E 01         [ 7]11456 	ld	l, #0x01
   A514 CD A4 74      [17]11457 	call	_SetObject
                          11458 ;src/main.c:2652: if (nMap == 0 && !TwoPlayers && nTip<1) 
   A517 3A D0 5E      [13]11459 	ld	a,(#_nMap + 0)
   A51A B7            [ 4]11460 	or	a, a
   A51B C2 F3 A3      [10]11461 	jp	NZ, 00140$
   A51E 3A D4 5E      [13]11462 	ld	a,(#_TwoPlayers + 0)
   A521 B7            [ 4]11463 	or	a, a
   A522 C2 F3 A3      [10]11464 	jp	NZ, 00140$
   A525 3A F0 5E      [13]11465 	ld	a,(#_nTip + 0)
   A528 D6 01         [ 7]11466 	sub	a, #0x01
   A52A D2 F3 A3      [10]11467 	jp	NC, 00140$
                          11468 ;src/main.c:2653: PrintTip(); // novice help
   A52D CD 2C 68      [17]11469 	call	_PrintTip
   A530 C3 F3 A3      [10]11470 	jp	00140$
   A533                   11471 00137$:
                          11472 ;src/main.c:2655: else if (ctMainLoop++ == 350) {			
   A533 ED 5B F2 5E   [20]11473 	ld	de, (_ctMainLoop)
   A537 ED 43 F2 5E   [20]11474 	ld	(_ctMainLoop), bc
   A53B 7B            [ 4]11475 	ld	a, e
   A53C D6 5E         [ 7]11476 	sub	a, #0x5e
   A53E C2 F3 A3      [10]11477 	jp	NZ,00140$
   A541 15            [ 4]11478 	dec	d
   A542 C2 F3 A3      [10]11479 	jp	NZ,00140$
                          11480 ;src/main.c:2656: SetObject(0); // set the first object			
   A545 2E 00         [ 7]11481 	ld	l, #0x00
   A547 CD A4 74      [17]11482 	call	_SetObject
                          11483 ;src/main.c:2657: ctMainLoop = 0; // reset counter
   A54A 21 00 00      [10]11484 	ld	hl, #0x0000
   A54D 22 F2 5E      [16]11485 	ld	(_ctMainLoop), hl
   A550 C3 F3 A3      [10]11486 	jp	00140$
                          11487 	.area _CODE
                          11488 	.area _INITIALIZER
                          11489 	.area _CABS (ABS)
