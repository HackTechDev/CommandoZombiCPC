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
   67B3 CD 01 A0      [17] 1628 	call	_InitGame
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
   76E2 CD 98 82      [17] 4104 	call	_MakeDuel
   76E5                    4105 00138$:
   76E5 DD F9         [10] 4106 	ld	sp, ix
   76E7 DD E1         [14] 4107 	pop	ix
   76E9 C9            [10] 4108 	ret
                           4109 ;src/main.c:1087: void PrintSprite(TSpr *pSpr) __z88dk_fastcall {
                           4110 ;	---------------------------------
                           4111 ; Function PrintSprite
                           4112 ; ---------------------------------
   76EA                    4113 _PrintSprite::
                           4114 ;src/main.c:1090: SPR_W, SPR_H, g_maskTable);
                           4115 ;src/main.c:1089: cpct_getScreenPtr(CPCT_VMEM_START, pSpr->x, pSpr->y), 
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
                           4148 ;src/main.c:1095: void DeleteSprite(TSpr *pSpr) __z88dk_fastcall {	
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
                           4160 ;src/main.c:1097: 3 + (pSpr->px & 1), 3 + (pSpr->py & 3 ? 1 : 0),	
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
                           4183 ;src/main.c:1096: cpct_etm_drawTileBox2x4(pSpr->px / 2, (pSpr->py - ORIG_MAP_Y) / 4, 
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
                           4222 ;src/main.c:1103: void AssignFrame(TSpr *pSpr, TFrm **anim) {
                           4223 ;	---------------------------------
                           4224 ; Function AssignFrame
                           4225 ; ---------------------------------
   778A                    4226 _AssignFrame::
   778A DD E5         [15] 4227 	push	ix
   778C DD 21 00 00   [14] 4228 	ld	ix,#0
   7790 DD 39         [15] 4229 	add	ix,sp
                           4230 ;src/main.c:1104: u8 animPause = 2;
   7792 16 02         [ 7] 4231 	ld	d, #0x02
                           4232 ;src/main.c:1105: if (pSpr->num > 3) animPause = 1; // slow enemies (4 and 5) have no pause in animation
   7794 DD 6E 04      [19] 4233 	ld	l,4 (ix)
   7797 DD 66 05      [19] 4234 	ld	h,5 (ix)
   779A 4E            [ 7] 4235 	ld	c, (hl)
   779B 3E 03         [ 7] 4236 	ld	a, #0x03
   779D 91            [ 4] 4237 	sub	a, c
   779E 30 02         [12] 4238 	jr	NC,00102$
   77A0 16 01         [ 7] 4239 	ld	d, #0x01
   77A2                    4240 00102$:
                           4241 ;src/main.c:1106: pSpr->frm = anim[pSpr->nFrm / animPause];	
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
                           4273 ;src/main.c:1111: void SelectFrame(TSpr *pSpr) __z88dk_fastcall {
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
                           4284 ;src/main.c:1113: if(pSpr->ident == SORCERER1) {
   77DD E1            [10] 4285 	pop	hl
   77DE E5            [11] 4286 	push	hl
   77DF 23            [ 6] 4287 	inc	hl
   77E0 4E            [ 7] 4288 	ld	c, (hl)
                           4289 ;src/main.c:1114: switch(pSpr->status) {
   77E1 DD 7E FE      [19] 4290 	ld	a, -2 (ix)
   77E4 C6 06         [ 7] 4291 	add	a, #0x06
   77E6 5F            [ 4] 4292 	ld	e, a
   77E7 DD 7E FF      [19] 4293 	ld	a, -1 (ix)
   77EA CE 00         [ 7] 4294 	adc	a, #0x00
   77EC 57            [ 4] 4295 	ld	d, a
                           4296 ;src/main.c:1113: if(pSpr->ident == SORCERER1) {
   77ED 79            [ 4] 4297 	ld	a, c
   77EE B7            [ 4] 4298 	or	a, a
   77EF 20 75         [12] 4299 	jr	NZ,00149$
                           4300 ;src/main.c:1114: switch(pSpr->status) {
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
                           4318 ;src/main.c:1115: case S_walkingUp: 		{AssignFrame(&spr[0], animUp_Sorcerer1); break;}
   7811                    4319 00101$:
   7811 21 9E 5F      [10] 4320 	ld	hl, #_animUp_Sorcerer1
   7814 E5            [11] 4321 	push	hl
   7815 21 0A 5F      [10] 4322 	ld	hl, #_spr
   7818 E5            [11] 4323 	push	hl
   7819 CD 8A 77      [17] 4324 	call	_AssignFrame
   781C F1            [10] 4325 	pop	af
   781D F1            [10] 4326 	pop	af
   781E C3 3F 7A      [10] 4327 	jp	00151$
                           4328 ;src/main.c:1116: case S_walkingDown:		{AssignFrame(&spr[0], animDown_Sorcerer1); break;}
   7821                    4329 00102$:
   7821 21 A2 5F      [10] 4330 	ld	hl, #_animDown_Sorcerer1
   7824 E5            [11] 4331 	push	hl
   7825 21 0A 5F      [10] 4332 	ld	hl, #_spr
   7828 E5            [11] 4333 	push	hl
   7829 CD 8A 77      [17] 4334 	call	_AssignFrame
   782C F1            [10] 4335 	pop	af
   782D F1            [10] 4336 	pop	af
   782E C3 3F 7A      [10] 4337 	jp	00151$
                           4338 ;src/main.c:1117: case S_walkingLeft:		{AssignFrame(&spr[0], animLeft_Sorcerer1); break;}
   7831                    4339 00103$:
   7831 21 A6 5F      [10] 4340 	ld	hl, #_animLeft_Sorcerer1
   7834 E5            [11] 4341 	push	hl
   7835 21 0A 5F      [10] 4342 	ld	hl, #_spr
   7838 E5            [11] 4343 	push	hl
   7839 CD 8A 77      [17] 4344 	call	_AssignFrame
   783C F1            [10] 4345 	pop	af
   783D F1            [10] 4346 	pop	af
   783E C3 3F 7A      [10] 4347 	jp	00151$
                           4348 ;src/main.c:1118: case S_walkingRight:	{AssignFrame(&spr[0], animRight_Sorcerer1); break;}
   7841                    4349 00104$:
   7841 21 AA 5F      [10] 4350 	ld	hl, #_animRight_Sorcerer1
   7844 E5            [11] 4351 	push	hl
   7845 21 0A 5F      [10] 4352 	ld	hl, #_spr
   7848 E5            [11] 4353 	push	hl
   7849 CD 8A 77      [17] 4354 	call	_AssignFrame
   784C F1            [10] 4355 	pop	af
   784D F1            [10] 4356 	pop	af
   784E C3 3F 7A      [10] 4357 	jp	00151$
                           4358 ;src/main.c:1119: case S_stopped:			{spr[0].frm = &frmSorcerer1[spr[0].dir*2];}		
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
                           4370 ;src/main.c:1120: }
   7863 C3 3F 7A      [10] 4371 	jp	00151$
   7866                    4372 00149$:
                           4373 ;src/main.c:1123: else if(pSpr->ident == SORCERER2) {
   7866 79            [ 4] 4374 	ld	a, c
   7867 3D            [ 4] 4375 	dec	a
   7868 20 75         [12] 4376 	jr	NZ,00146$
                           4377 ;src/main.c:1124: switch(pSpr->status) {
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
                           4395 ;src/main.c:1125: case S_walkingUp: 		{AssignFrame(&spr[1], animUp_Sorcerer2); break;}
   788A                    4396 00107$:
   788A 21 BE 5F      [10] 4397 	ld	hl, #_animUp_Sorcerer2
   788D E5            [11] 4398 	push	hl
   788E 21 19 5F      [10] 4399 	ld	hl, #(_spr + 0x000f)
   7891 E5            [11] 4400 	push	hl
   7892 CD 8A 77      [17] 4401 	call	_AssignFrame
   7895 F1            [10] 4402 	pop	af
   7896 F1            [10] 4403 	pop	af
   7897 C3 3F 7A      [10] 4404 	jp	00151$
                           4405 ;src/main.c:1126: case S_walkingDown:		{AssignFrame(&spr[1], animDown_Sorcerer2); break;}
   789A                    4406 00108$:
   789A 21 C2 5F      [10] 4407 	ld	hl, #_animDown_Sorcerer2
   789D E5            [11] 4408 	push	hl
   789E 21 19 5F      [10] 4409 	ld	hl, #(_spr + 0x000f)
   78A1 E5            [11] 4410 	push	hl
   78A2 CD 8A 77      [17] 4411 	call	_AssignFrame
   78A5 F1            [10] 4412 	pop	af
   78A6 F1            [10] 4413 	pop	af
   78A7 C3 3F 7A      [10] 4414 	jp	00151$
                           4415 ;src/main.c:1127: case S_walkingLeft:		{AssignFrame(&spr[1], animLeft_Sorcerer2); break;}
   78AA                    4416 00109$:
   78AA 21 C6 5F      [10] 4417 	ld	hl, #_animLeft_Sorcerer2
   78AD E5            [11] 4418 	push	hl
   78AE 21 19 5F      [10] 4419 	ld	hl, #(_spr + 0x000f)
   78B1 E5            [11] 4420 	push	hl
   78B2 CD 8A 77      [17] 4421 	call	_AssignFrame
   78B5 F1            [10] 4422 	pop	af
   78B6 F1            [10] 4423 	pop	af
   78B7 C3 3F 7A      [10] 4424 	jp	00151$
                           4425 ;src/main.c:1128: case S_walkingRight:	{AssignFrame(&spr[1], animRight_Sorcerer2); break;}
   78BA                    4426 00110$:
   78BA 21 CA 5F      [10] 4427 	ld	hl, #_animRight_Sorcerer2
   78BD E5            [11] 4428 	push	hl
   78BE 21 19 5F      [10] 4429 	ld	hl, #(_spr + 0x000f)
   78C1 E5            [11] 4430 	push	hl
   78C2 CD 8A 77      [17] 4431 	call	_AssignFrame
   78C5 F1            [10] 4432 	pop	af
   78C6 F1            [10] 4433 	pop	af
   78C7 C3 3F 7A      [10] 4434 	jp	00151$
                           4435 ;src/main.c:1129: case S_stopped:			{spr[1].frm = &frmSorcerer2[spr[1].dir*2];}	
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
                           4447 ;src/main.c:1130: }
   78DC C3 3F 7A      [10] 4448 	jp	00151$
   78DF                    4449 00146$:
                           4450 ;src/main.c:1134: switch(pSpr->dir) {
   78DF DD 7E FE      [19] 4451 	ld	a, -2 (ix)
   78E2 C6 07         [ 7] 4452 	add	a, #0x07
   78E4 5F            [ 4] 4453 	ld	e, a
   78E5 DD 7E FF      [19] 4454 	ld	a, -1 (ix)
   78E8 CE 00         [ 7] 4455 	adc	a, #0x00
   78EA 57            [ 4] 4456 	ld	d, a
                           4457 ;src/main.c:1133: else if(pSpr->ident == SENTINEL) {
   78EB 79            [ 4] 4458 	ld	a, c
   78EC D6 02         [ 7] 4459 	sub	a, #0x02
   78EE 20 57         [12] 4460 	jr	NZ,00143$
                           4461 ;src/main.c:1134: switch(pSpr->dir) {
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
                           4472 ;src/main.c:1135: case D_up:				{AssignFrame(pSpr, animUp_Sentinel); break;}
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
                           4485 ;src/main.c:1136: case D_down:			{AssignFrame(pSpr, animDown_Sentinel); break;}
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
                           4498 ;src/main.c:1137: case D_left:			{AssignFrame(pSpr, animLeft_Sentinel); break;}
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
                           4511 ;src/main.c:1138: case D_right:			{AssignFrame(pSpr, animRight_Sentinel);}
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
                           4523 ;src/main.c:1139: }
   7944 C3 3F 7A      [10] 4524 	jp	00151$
   7947                    4525 00143$:
                           4526 ;src/main.c:1142: else if(pSpr->ident == KNIGHT) {
   7947 79            [ 4] 4527 	ld	a, c
   7948 D6 03         [ 7] 4528 	sub	a, #0x03
   794A 20 57         [12] 4529 	jr	NZ,00140$
                           4530 ;src/main.c:1143: switch(pSpr->dir) {
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
                           4541 ;src/main.c:1144: case D_up:				{AssignFrame(pSpr, animUp_Knight); break;}
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
                           4554 ;src/main.c:1145: case D_down:			{AssignFrame(pSpr, animDown_Knight); break;}
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
                           4567 ;src/main.c:1146: case D_left:			{AssignFrame(pSpr, animLeft_Knight); break;}
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
                           4580 ;src/main.c:1147: case D_right:			{AssignFrame(pSpr, animRight_Knight);}
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
                           4592 ;src/main.c:1148: }
   79A0 C3 3F 7A      [10] 4593 	jp	00151$
   79A3                    4594 00140$:
                           4595 ;src/main.c:1151: else if(pSpr->ident == GHOST) {
   79A3 79            [ 4] 4596 	ld	a, c
   79A4 D6 04         [ 7] 4597 	sub	a, #0x04
   79A6 20 54         [12] 4598 	jr	NZ,00137$
                           4599 ;src/main.c:1152: switch(pSpr->dir) {
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
                           4610 ;src/main.c:1153: case D_up:				{AssignFrame(pSpr, animUp_Ghost); break;}
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
                           4623 ;src/main.c:1154: case D_down:			{AssignFrame(pSpr, animDown_Ghost); break;}
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
                           4636 ;src/main.c:1155: case D_left:			{AssignFrame(pSpr, animLeft_Ghost); break;}
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
                           4649 ;src/main.c:1156: case D_right:			{AssignFrame(pSpr, animRight_Ghost);}
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
                           4661 ;src/main.c:1157: }
   79FA 18 43         [12] 4662 	jr	00151$
   79FC                    4663 00137$:
                           4664 ;src/main.c:1160: else if(pSpr->ident == WITCH) {
   79FC 79            [ 4] 4665 	ld	a, c
   79FD D6 06         [ 7] 4666 	sub	a, #0x06
   79FF 20 2B         [12] 4667 	jr	NZ,00134$
                           4668 ;src/main.c:1161: switch(pSpr->dir) {
   7A01 1A            [ 7] 4669 	ld	a, (de)
   7A02 FE 02         [ 7] 4670 	cp	a, #0x02
   7A04 28 06         [12] 4671 	jr	Z,00128$
   7A06 D6 03         [ 7] 4672 	sub	a, #0x03
   7A08 28 12         [12] 4673 	jr	Z,00129$
   7A0A 18 33         [12] 4674 	jr	00151$
                           4675 ;src/main.c:1162: case D_left:			{AssignFrame(pSpr, animLeft_Witch); break;}
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
                           4688 ;src/main.c:1163: case D_right:			{AssignFrame(pSpr, animRight_Witch);}
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
                           4700 ;src/main.c:1164: }
   7A2A 18 13         [12] 4701 	jr	00151$
   7A2C                    4702 00134$:
                           4703 ;src/main.c:1167: else if(pSpr->ident == BAT)	AssignFrame(pSpr, anim_Bat);
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
                           4721 ;src/main.c:1172: void PrintExplosion(TSpr *pSpr, u8 nFrame)
                           4722 ;	---------------------------------
                           4723 ; Function PrintExplosion
                           4724 ; ---------------------------------
   7A44                    4725 _PrintExplosion::
   7A44 DD E5         [15] 4726 	push	ix
   7A46 DD 21 00 00   [14] 4727 	ld	ix,#0
   7A4A DD 39         [15] 4728 	add	ix,sp
                           4729 ;src/main.c:1176: SPR_W, SPR_H, g_maskTable);
                           4730 ;src/main.c:1175: cpct_getScreenPtr(CPCT_VMEM_START, pSpr->x, pSpr->y), 
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
                           4750 ;src/main.c:1174: cpct_drawSpriteMaskedAlignedTable(g_explosion[nFrame], 
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
                           4774 ;src/main.c:1181: void ExplodeSprite(u8 player, u8 deleteSpr)
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
                           4785 ;src/main.c:1185: cpct_akp_SFXPlay (4, 12, 48, 0, 0, AY_CHANNEL_B); // explosion
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
                           4799 ;src/main.c:1186: while (ct++ < 2) {	
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
   7AC1 DD 71 FE      [19] 4814 	ld	-2 (ix), c
   7AC4 DD 70 FF      [19] 4815 	ld	-1 (ix), b
   7AC7 DD 71 FC      [19] 4816 	ld	-4 (ix), c
   7ACA DD 70 FD      [19] 4817 	ld	-3 (ix), b
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
   7ADD DD 75 FA      [19] 4831 	ld	-6 (ix), l
   7AE0 DD 74 FB      [19] 4832 	ld	-5 (ix), h
   7AE3 DD 36 F9 00   [19] 4833 	ld	-7 (ix), #0x00
   7AE7                    4834 00103$:
   7AE7 DD 7E F9      [19] 4835 	ld	a, -7 (ix)
   7AEA DD 34 F9      [23] 4836 	inc	-7 (ix)
   7AED D6 02         [ 7] 4837 	sub	a, #0x02
   7AEF 30 49         [12] 4838 	jr	NC,00105$
                           4839 ;src/main.c:1187: PrintExplosion(&spr[player], 0); Pause(40);
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
                           4853 ;src/main.c:1188: PrintExplosion(&spr[player], 1); Pause(40);
   7B04 DD 5E FE      [19] 4854 	ld	e,-2 (ix)
   7B07 DD 56 FF      [19] 4855 	ld	d,-1 (ix)
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
                           4867 ;src/main.c:1189: if (deleteSpr > FALSE) {
   7B1C DD 7E 05      [19] 4868 	ld	a, 5 (ix)
   7B1F B7            [ 4] 4869 	or	a, a
   7B20 28 C5         [12] 4870 	jr	Z,00103$
                           4871 ;src/main.c:1190: DeleteSprite(&spr[player]); // delete player
   7B22 DD 6E FC      [19] 4872 	ld	l,-4 (ix)
   7B25 DD 66 FD      [19] 4873 	ld	h,-3 (ix)
   7B28 C5            [11] 4874 	push	bc
   7B29 CD 19 77      [17] 4875 	call	_DeleteSprite
   7B2C C1            [10] 4876 	pop	bc
                           4877 ;src/main.c:1191: PrintSprite(&spr[deleteSpr]); // reprint enemy, which may have been partially erased
   7B2D DD 6E FA      [19] 4878 	ld	l,-6 (ix)
   7B30 DD 66 FB      [19] 4879 	ld	h,-5 (ix)
   7B33 C5            [11] 4880 	push	bc
   7B34 CD EA 76      [17] 4881 	call	_PrintSprite
   7B37 C1            [10] 4882 	pop	bc
   7B38 18 AD         [12] 4883 	jr	00103$
   7B3A                    4884 00105$:
                           4885 ;src/main.c:1194: PrintExplosion(&spr[player], 0); Pause(40);
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
                           4899 ;src/main.c:1195: if (deleteSpr > FALSE) {
   7B4D DD 7E 05      [19] 4900 	ld	a, 5 (ix)
   7B50 B7            [ 4] 4901 	or	a, a
   7B51 28 0E         [12] 4902 	jr	Z,00108$
                           4903 ;src/main.c:1196: DeleteSprite(&spr[player]);
   7B53 69            [ 4] 4904 	ld	l, c
   7B54 60            [ 4] 4905 	ld	h, b
   7B55 CD 19 77      [17] 4906 	call	_DeleteSprite
                           4907 ;src/main.c:1197: PrintSprite(&spr[deleteSpr]);
   7B58 DD 6E FA      [19] 4908 	ld	l,-6 (ix)
   7B5B DD 66 FB      [19] 4909 	ld	h,-5 (ix)
   7B5E CD EA 76      [17] 4910 	call	_PrintSprite
   7B61                    4911 00108$:
   7B61 DD F9         [10] 4912 	ld	sp, ix
   7B63 DD E1         [14] 4913 	pop	ix
   7B65 C9            [10] 4914 	ret
                           4915 ;src/main.c:1203: u8 SpriteCollision(u8 x, u8 y, TSpr *pSpr, u8 marginX) {
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
                           4926 ;src/main.c:1204: u8 marginY = marginX+marginX;	
   7B73 DD 7E 08      [19] 4927 	ld	a, 8 (ix)
   7B76 87            [ 4] 4928 	add	a, a
   7B77 DD 77 F9      [19] 4929 	ld	-7 (ix), a
                           4930 ;src/main.c:1205: if (x+OBJ_W > pSpr->x-marginX && x-marginX < pSpr->x+SPR_W) // check the X coordinate with the sprite		
   7B7A DD 4E 04      [19] 4931 	ld	c, 4 (ix)
   7B7D 06 00         [ 7] 4932 	ld	b, #0x00
   7B7F 21 04 00      [10] 4933 	ld	hl, #0x0004
   7B82 09            [11] 4934 	add	hl,bc
   7B83 DD 75 FC      [19] 4935 	ld	-4 (ix), l
   7B86 DD 74 FD      [19] 4936 	ld	-3 (ix), h
   7B89 DD 5E 06      [19] 4937 	ld	e,6 (ix)
   7B8C DD 56 07      [19] 4938 	ld	d,7 (ix)
   7B8F 6B            [ 4] 4939 	ld	l, e
   7B90 62            [ 4] 4940 	ld	h, d
   7B91 23            [ 6] 4941 	inc	hl
   7B92 23            [ 6] 4942 	inc	hl
   7B93 6E            [ 7] 4943 	ld	l, (hl)
   7B94 26 00         [ 7] 4944 	ld	h, #0x00
   7B96 DD 7E 08      [19] 4945 	ld	a, 8 (ix)
   7B99 DD 77 FA      [19] 4946 	ld	-6 (ix), a
   7B9C DD 36 FB 00   [19] 4947 	ld	-5 (ix), #0x00
   7BA0 7D            [ 4] 4948 	ld	a, l
   7BA1 DD 96 FA      [19] 4949 	sub	a, -6 (ix)
   7BA4 DD 77 FE      [19] 4950 	ld	-2 (ix), a
   7BA7 7C            [ 4] 4951 	ld	a, h
   7BA8 DD 9E FB      [19] 4952 	sbc	a, -5 (ix)
   7BAB DD 77 FF      [19] 4953 	ld	-1 (ix), a
   7BAE DD 7E FE      [19] 4954 	ld	a, -2 (ix)
   7BB1 DD 96 FC      [19] 4955 	sub	a, -4 (ix)
   7BB4 DD 7E FF      [19] 4956 	ld	a, -1 (ix)
   7BB7 DD 9E FD      [19] 4957 	sbc	a, -3 (ix)
   7BBA E2 BF 7B      [10] 4958 	jp	PO, 00125$
   7BBD EE 80         [ 7] 4959 	xor	a, #0x80
   7BBF                    4960 00125$:
   7BBF F2 30 7C      [10] 4961 	jp	P, 00105$
   7BC2 79            [ 4] 4962 	ld	a, c
   7BC3 DD 96 FA      [19] 4963 	sub	a, -6 (ix)
   7BC6 4F            [ 4] 4964 	ld	c, a
   7BC7 78            [ 4] 4965 	ld	a, b
   7BC8 DD 9E FB      [19] 4966 	sbc	a, -5 (ix)
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
                           4981 ;src/main.c:1206: if (y+OBJ_H > pSpr->y-marginY && y-marginY < pSpr->y+SPR_H) // check the Y coordinate with the sprite
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
   7BFA DD 77 FA      [19] 4998 	ld	-6 (ix), a
   7BFD 7A            [ 4] 4999 	ld	a, d
   7BFE 9C            [ 4] 5000 	sbc	a, h
   7BFF DD 77 FB      [19] 5001 	ld	-5 (ix), a
   7C02 DD 7E FA      [19] 5002 	ld	a, -6 (ix)
   7C05 DD 96 FE      [19] 5003 	sub	a, -2 (ix)
   7C08 DD 7E FB      [19] 5004 	ld	a, -5 (ix)
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
                           5026 ;src/main.c:1207: return TRUE;	
   7C2C 2E 01         [ 7] 5027 	ld	l, #0x01
   7C2E 18 02         [12] 5028 	jr	00107$
   7C30                    5029 00105$:
                           5030 ;src/main.c:1208: return FALSE;
   7C30 2E 00         [ 7] 5031 	ld	l, #0x00
   7C32                    5032 00107$:
   7C32 DD F9         [10] 5033 	ld	sp, ix
   7C34 DD E1         [14] 5034 	pop	ix
   7C36 C9            [10] 5035 	ret
                           5036 ;src/main.c:1216: void MoveUp(TSpr *pSpr) __z88dk_fastcall { 
                           5037 ;	---------------------------------
                           5038 ; Function MoveUp
                           5039 ; ---------------------------------
   7C37                    5040 _MoveUp::
   7C37 DD E5         [15] 5041 	push	ix
   7C39 DD 21 00 00   [14] 5042 	ld	ix,#0
   7C3D DD 39         [15] 5043 	add	ix,sp
   7C3F F5            [11] 5044 	push	af
   7C40 F5            [11] 5045 	push	af
                           5046 ;src/main.c:1218: if (pSpr->y > ORIG_MAP_Y && OnBackground(pSpr->x-1, pSpr->y-2)) {
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
                           5083 ;src/main.c:1219: pSpr->y -= 2;
   7C78 0A            [ 7] 5084 	ld	a, (bc)
   7C79 C6 FE         [ 7] 5085 	add	a, #0xfe
   7C7B 02            [ 7] 5086 	ld	(bc), a
                           5087 ;src/main.c:1220: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x-1, pSpr->y-2))
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
                           5117 ;src/main.c:1221: pSpr->y -= 2; // powerUp speed*2
   7C9F 0A            [ 7] 5118 	ld	a, (bc)
   7CA0 C6 FE         [ 7] 5119 	add	a, #0xfe
   7CA2 02            [ 7] 5120 	ld	(bc), a
   7CA3                    5121 00102$:
                           5122 ;src/main.c:1223: pSpr->dir = D_up;
   7CA3 DD 7E FE      [19] 5123 	ld	a, -2 (ix)
   7CA6 C6 07         [ 7] 5124 	add	a, #0x07
   7CA8 4F            [ 4] 5125 	ld	c, a
   7CA9 DD 7E FF      [19] 5126 	ld	a, -1 (ix)
   7CAC CE 00         [ 7] 5127 	adc	a, #0x00
   7CAE 47            [ 4] 5128 	ld	b, a
   7CAF AF            [ 4] 5129 	xor	a, a
   7CB0 02            [ 7] 5130 	ld	(bc), a
                           5131 ;src/main.c:1224: pSpr->status = S_walkingUp;
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
                           5144 ;src/main.c:1229: void MoveDown(TSpr *pSpr) __z88dk_fastcall {
                           5145 ;	---------------------------------
                           5146 ; Function MoveDown
                           5147 ; ---------------------------------
   7CC4                    5148 _MoveDown::
   7CC4 DD E5         [15] 5149 	push	ix
   7CC6 DD 21 00 00   [14] 5150 	ld	ix,#0
   7CCA DD 39         [15] 5151 	add	ix,sp
   7CCC F5            [11] 5152 	push	af
   7CCD F5            [11] 5153 	push	af
   7CCE DD 75 FC      [19] 5154 	ld	-4 (ix), l
   7CD1 DD 74 FD      [19] 5155 	ld	-3 (ix), h
                           5156 ;src/main.c:1231: if (pSpr->y + SPR_H < GLOBAL_MAX_Y && OnBackground(pSpr->x-1, pSpr->y+4)) {
   7CD4 C1            [10] 5157 	pop	bc
   7CD5 C5            [11] 5158 	push	bc
   7CD6 03            [ 6] 5159 	inc	bc
   7CD7 03            [ 6] 5160 	inc	bc
   7CD8 03            [ 6] 5161 	inc	bc
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
   7CED 30 76         [12] 5177 	jr	NC,00107$
   7CEF 1C            [ 4] 5178 	inc	e
   7CF0 1C            [ 4] 5179 	inc	e
   7CF1 1C            [ 4] 5180 	inc	e
   7CF2 1C            [ 4] 5181 	inc	e
   7CF3 DD 7E FC      [19] 5182 	ld	a, -4 (ix)
   7CF6 C6 02         [ 7] 5183 	add	a, #0x02
   7CF8 DD 77 FE      [19] 5184 	ld	-2 (ix), a
   7CFB DD 7E FD      [19] 5185 	ld	a, -3 (ix)
   7CFE CE 00         [ 7] 5186 	adc	a, #0x00
   7D00 DD 77 FF      [19] 5187 	ld	-1 (ix), a
   7D03 DD 6E FE      [19] 5188 	ld	l,-2 (ix)
   7D06 DD 66 FF      [19] 5189 	ld	h,-1 (ix)
   7D09 56            [ 7] 5190 	ld	d, (hl)
   7D0A 15            [ 4] 5191 	dec	d
   7D0B C5            [11] 5192 	push	bc
   7D0C 7B            [ 4] 5193 	ld	a, e
   7D0D F5            [11] 5194 	push	af
   7D0E 33            [ 6] 5195 	inc	sp
   7D0F D5            [11] 5196 	push	de
   7D10 33            [ 6] 5197 	inc	sp
   7D11 CD 0A 62      [17] 5198 	call	_OnBackground
   7D14 F1            [10] 5199 	pop	af
   7D15 C1            [10] 5200 	pop	bc
   7D16 7D            [ 4] 5201 	ld	a, l
   7D17 B7            [ 4] 5202 	or	a, a
   7D18 28 4B         [12] 5203 	jr	Z,00107$
                           5204 ;src/main.c:1232: pSpr->y += 2;
   7D1A 0A            [ 7] 5205 	ld	a, (bc)
   7D1B C6 02         [ 7] 5206 	add	a, #0x02
   7D1D 02            [ 7] 5207 	ld	(bc), a
                           5208 ;src/main.c:1233: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x-1, pSpr->y+4))
   7D1E E1            [10] 5209 	pop	hl
   7D1F E5            [11] 5210 	push	hl
   7D20 11 0E 00      [10] 5211 	ld	de, #0x000e
   7D23 19            [11] 5212 	add	hl, de
   7D24 7E            [ 7] 5213 	ld	a, (hl)
   7D25 B7            [ 4] 5214 	or	a, a
   7D26 28 21         [12] 5215 	jr	Z,00102$
   7D28 0A            [ 7] 5216 	ld	a, (bc)
   7D29 5F            [ 4] 5217 	ld	e, a
   7D2A 1C            [ 4] 5218 	inc	e
   7D2B 1C            [ 4] 5219 	inc	e
   7D2C 1C            [ 4] 5220 	inc	e
   7D2D 1C            [ 4] 5221 	inc	e
   7D2E DD 6E FE      [19] 5222 	ld	l,-2 (ix)
   7D31 DD 66 FF      [19] 5223 	ld	h,-1 (ix)
   7D34 56            [ 7] 5224 	ld	d, (hl)
   7D35 15            [ 4] 5225 	dec	d
   7D36 C5            [11] 5226 	push	bc
   7D37 7B            [ 4] 5227 	ld	a, e
   7D38 F5            [11] 5228 	push	af
   7D39 33            [ 6] 5229 	inc	sp
   7D3A D5            [11] 5230 	push	de
   7D3B 33            [ 6] 5231 	inc	sp
   7D3C CD 0A 62      [17] 5232 	call	_OnBackground
   7D3F F1            [10] 5233 	pop	af
   7D40 C1            [10] 5234 	pop	bc
   7D41 7D            [ 4] 5235 	ld	a, l
   7D42 B7            [ 4] 5236 	or	a, a
   7D43 28 04         [12] 5237 	jr	Z,00102$
                           5238 ;src/main.c:1234: pSpr->y += 2; // powerUp speed*2
   7D45 0A            [ 7] 5239 	ld	a, (bc)
   7D46 C6 02         [ 7] 5240 	add	a, #0x02
   7D48 02            [ 7] 5241 	ld	(bc), a
   7D49                    5242 00102$:
                           5243 ;src/main.c:1236: pSpr->dir = D_down;
   7D49 DD 7E FC      [19] 5244 	ld	a, -4 (ix)
   7D4C C6 07         [ 7] 5245 	add	a, #0x07
   7D4E 6F            [ 4] 5246 	ld	l, a
   7D4F DD 7E FD      [19] 5247 	ld	a, -3 (ix)
   7D52 CE 00         [ 7] 5248 	adc	a, #0x00
   7D54 67            [ 4] 5249 	ld	h, a
   7D55 36 01         [10] 5250 	ld	(hl), #0x01
                           5251 ;src/main.c:1237: pSpr->status = S_walkingDown;
   7D57 DD 7E FC      [19] 5252 	ld	a, -4 (ix)
   7D5A C6 06         [ 7] 5253 	add	a, #0x06
   7D5C 6F            [ 4] 5254 	ld	l, a
   7D5D DD 7E FD      [19] 5255 	ld	a, -3 (ix)
   7D60 CE 00         [ 7] 5256 	adc	a, #0x00
   7D62 67            [ 4] 5257 	ld	h, a
   7D63 36 01         [10] 5258 	ld	(hl), #0x01
   7D65                    5259 00107$:
   7D65 DD F9         [10] 5260 	ld	sp, ix
   7D67 DD E1         [14] 5261 	pop	ix
   7D69 C9            [10] 5262 	ret
                           5263 ;src/main.c:1242: void MoveLeft(TSpr *pSpr) __z88dk_fastcall {
                           5264 ;	---------------------------------
                           5265 ; Function MoveLeft
                           5266 ; ---------------------------------
   7D6A                    5267 _MoveLeft::
   7D6A DD E5         [15] 5268 	push	ix
   7D6C DD 21 00 00   [14] 5269 	ld	ix,#0
   7D70 DD 39         [15] 5270 	add	ix,sp
   7D72 F5            [11] 5271 	push	af
   7D73 F5            [11] 5272 	push	af
                           5273 ;src/main.c:1244: if (OnBackground(pSpr->x-3, pSpr->y+1)) {
   7D74 DD 75 FE      [19] 5274 	ld	-2 (ix), l
   7D77 DD 74 FF      [19] 5275 	ld	-1 (ix), h
   7D7A 23            [ 6] 5276 	inc	hl
   7D7B 23            [ 6] 5277 	inc	hl
   7D7C 23            [ 6] 5278 	inc	hl
   7D7D 4D            [ 4] 5279 	ld	c,l
   7D7E 44            [ 4] 5280 	ld	b,h
   7D7F 0A            [ 7] 5281 	ld	a, (bc)
   7D80 57            [ 4] 5282 	ld	d, a
   7D81 14            [ 4] 5283 	inc	d
   7D82 DD 7E FE      [19] 5284 	ld	a, -2 (ix)
   7D85 C6 02         [ 7] 5285 	add	a, #0x02
   7D87 DD 77 FC      [19] 5286 	ld	-4 (ix), a
   7D8A DD 7E FF      [19] 5287 	ld	a, -1 (ix)
   7D8D CE 00         [ 7] 5288 	adc	a, #0x00
   7D8F DD 77 FD      [19] 5289 	ld	-3 (ix), a
   7D92 E1            [10] 5290 	pop	hl
   7D93 E5            [11] 5291 	push	hl
   7D94 7E            [ 7] 5292 	ld	a, (hl)
   7D95 C6 FD         [ 7] 5293 	add	a, #0xfd
   7D97 C5            [11] 5294 	push	bc
   7D98 5F            [ 4] 5295 	ld	e, a
   7D99 D5            [11] 5296 	push	de
   7D9A CD 0A 62      [17] 5297 	call	_OnBackground
   7D9D F1            [10] 5298 	pop	af
   7D9E C1            [10] 5299 	pop	bc
   7D9F 7D            [ 4] 5300 	ld	a, l
   7DA0 B7            [ 4] 5301 	or	a, a
   7DA1 28 4C         [12] 5302 	jr	Z,00106$
                           5303 ;src/main.c:1245: pSpr->x--;
   7DA3 E1            [10] 5304 	pop	hl
   7DA4 E5            [11] 5305 	push	hl
   7DA5 5E            [ 7] 5306 	ld	e, (hl)
   7DA6 1D            [ 4] 5307 	dec	e
   7DA7 E1            [10] 5308 	pop	hl
   7DA8 E5            [11] 5309 	push	hl
   7DA9 73            [ 7] 5310 	ld	(hl), e
                           5311 ;src/main.c:1246: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x-3, pSpr->y+1))
   7DAA D1            [10] 5312 	pop	de
   7DAB E1            [10] 5313 	pop	hl
   7DAC E5            [11] 5314 	push	hl
   7DAD D5            [11] 5315 	push	de
   7DAE 11 0E 00      [10] 5316 	ld	de, #0x000e
   7DB1 19            [11] 5317 	add	hl, de
   7DB2 7E            [ 7] 5318 	ld	a, (hl)
   7DB3 B7            [ 4] 5319 	or	a, a
   7DB4 28 1D         [12] 5320 	jr	Z,00102$
   7DB6 0A            [ 7] 5321 	ld	a, (bc)
   7DB7 4F            [ 4] 5322 	ld	c, a
   7DB8 0C            [ 4] 5323 	inc	c
   7DB9 E1            [10] 5324 	pop	hl
   7DBA E5            [11] 5325 	push	hl
   7DBB 7E            [ 7] 5326 	ld	a, (hl)
   7DBC C6 FD         [ 7] 5327 	add	a, #0xfd
   7DBE 47            [ 4] 5328 	ld	b, a
   7DBF 79            [ 4] 5329 	ld	a, c
   7DC0 F5            [11] 5330 	push	af
   7DC1 33            [ 6] 5331 	inc	sp
   7DC2 C5            [11] 5332 	push	bc
   7DC3 33            [ 6] 5333 	inc	sp
   7DC4 CD 0A 62      [17] 5334 	call	_OnBackground
   7DC7 F1            [10] 5335 	pop	af
   7DC8 7D            [ 4] 5336 	ld	a, l
   7DC9 B7            [ 4] 5337 	or	a, a
   7DCA 28 07         [12] 5338 	jr	Z,00102$
                           5339 ;src/main.c:1247: pSpr->x--; // powerUp speed*2
   7DCC E1            [10] 5340 	pop	hl
   7DCD E5            [11] 5341 	push	hl
   7DCE 4E            [ 7] 5342 	ld	c, (hl)
   7DCF 0D            [ 4] 5343 	dec	c
   7DD0 E1            [10] 5344 	pop	hl
   7DD1 E5            [11] 5345 	push	hl
   7DD2 71            [ 7] 5346 	ld	(hl), c
   7DD3                    5347 00102$:
                           5348 ;src/main.c:1249: pSpr->dir = D_left;
   7DD3 DD 7E FE      [19] 5349 	ld	a, -2 (ix)
   7DD6 C6 07         [ 7] 5350 	add	a, #0x07
   7DD8 6F            [ 4] 5351 	ld	l, a
   7DD9 DD 7E FF      [19] 5352 	ld	a, -1 (ix)
   7DDC CE 00         [ 7] 5353 	adc	a, #0x00
   7DDE 67            [ 4] 5354 	ld	h, a
   7DDF 36 02         [10] 5355 	ld	(hl), #0x02
                           5356 ;src/main.c:1250: pSpr->status = S_walkingLeft;
   7DE1 DD 7E FE      [19] 5357 	ld	a, -2 (ix)
   7DE4 C6 06         [ 7] 5358 	add	a, #0x06
   7DE6 6F            [ 4] 5359 	ld	l, a
   7DE7 DD 7E FF      [19] 5360 	ld	a, -1 (ix)
   7DEA CE 00         [ 7] 5361 	adc	a, #0x00
   7DEC 67            [ 4] 5362 	ld	h, a
   7DED 36 02         [10] 5363 	ld	(hl), #0x02
   7DEF                    5364 00106$:
   7DEF DD F9         [10] 5365 	ld	sp, ix
   7DF1 DD E1         [14] 5366 	pop	ix
   7DF3 C9            [10] 5367 	ret
                           5368 ;src/main.c:1255: void MoveRight(TSpr *pSpr) __z88dk_fastcall { 
                           5369 ;	---------------------------------
                           5370 ; Function MoveRight
                           5371 ; ---------------------------------
   7DF4                    5372 _MoveRight::
   7DF4 DD E5         [15] 5373 	push	ix
   7DF6 DD 21 00 00   [14] 5374 	ld	ix,#0
   7DFA DD 39         [15] 5375 	add	ix,sp
   7DFC F5            [11] 5376 	push	af
   7DFD F5            [11] 5377 	push	af
                           5378 ;src/main.c:1257: if (OnBackground(pSpr->x+1, pSpr->y+1)) {
   7DFE DD 75 FE      [19] 5379 	ld	-2 (ix), l
   7E01 DD 74 FF      [19] 5380 	ld	-1 (ix), h
   7E04 23            [ 6] 5381 	inc	hl
   7E05 23            [ 6] 5382 	inc	hl
   7E06 23            [ 6] 5383 	inc	hl
   7E07 4D            [ 4] 5384 	ld	c,l
   7E08 44            [ 4] 5385 	ld	b,h
   7E09 0A            [ 7] 5386 	ld	a, (bc)
   7E0A 57            [ 4] 5387 	ld	d, a
   7E0B 14            [ 4] 5388 	inc	d
   7E0C DD 7E FE      [19] 5389 	ld	a, -2 (ix)
   7E0F C6 02         [ 7] 5390 	add	a, #0x02
   7E11 DD 77 FC      [19] 5391 	ld	-4 (ix), a
   7E14 DD 7E FF      [19] 5392 	ld	a, -1 (ix)
   7E17 CE 00         [ 7] 5393 	adc	a, #0x00
   7E19 DD 77 FD      [19] 5394 	ld	-3 (ix), a
   7E1C E1            [10] 5395 	pop	hl
   7E1D E5            [11] 5396 	push	hl
   7E1E 7E            [ 7] 5397 	ld	a, (hl)
   7E1F 3C            [ 4] 5398 	inc	a
   7E20 C5            [11] 5399 	push	bc
   7E21 5F            [ 4] 5400 	ld	e, a
   7E22 D5            [11] 5401 	push	de
   7E23 CD 0A 62      [17] 5402 	call	_OnBackground
   7E26 F1            [10] 5403 	pop	af
   7E27 C1            [10] 5404 	pop	bc
   7E28 7D            [ 4] 5405 	ld	a, l
   7E29 B7            [ 4] 5406 	or	a, a
   7E2A 28 4A         [12] 5407 	jr	Z,00106$
                           5408 ;src/main.c:1258: pSpr->x++;
   7E2C E1            [10] 5409 	pop	hl
   7E2D E5            [11] 5410 	push	hl
   7E2E 5E            [ 7] 5411 	ld	e, (hl)
   7E2F 1C            [ 4] 5412 	inc	e
   7E30 E1            [10] 5413 	pop	hl
   7E31 E5            [11] 5414 	push	hl
   7E32 73            [ 7] 5415 	ld	(hl), e
                           5416 ;src/main.c:1259: if (pSpr->power_maxV > 0 && OnBackground(pSpr->x+1, pSpr->y+1)) 
   7E33 D1            [10] 5417 	pop	de
   7E34 E1            [10] 5418 	pop	hl
   7E35 E5            [11] 5419 	push	hl
   7E36 D5            [11] 5420 	push	de
   7E37 11 0E 00      [10] 5421 	ld	de, #0x000e
   7E3A 19            [11] 5422 	add	hl, de
   7E3B 7E            [ 7] 5423 	ld	a, (hl)
   7E3C B7            [ 4] 5424 	or	a, a
   7E3D 28 1B         [12] 5425 	jr	Z,00102$
   7E3F 0A            [ 7] 5426 	ld	a, (bc)
   7E40 4F            [ 4] 5427 	ld	c, a
   7E41 0C            [ 4] 5428 	inc	c
   7E42 E1            [10] 5429 	pop	hl
   7E43 E5            [11] 5430 	push	hl
   7E44 46            [ 7] 5431 	ld	b, (hl)
   7E45 04            [ 4] 5432 	inc	b
   7E46 79            [ 4] 5433 	ld	a, c
   7E47 F5            [11] 5434 	push	af
   7E48 33            [ 6] 5435 	inc	sp
   7E49 C5            [11] 5436 	push	bc
   7E4A 33            [ 6] 5437 	inc	sp
   7E4B CD 0A 62      [17] 5438 	call	_OnBackground
   7E4E F1            [10] 5439 	pop	af
   7E4F 7D            [ 4] 5440 	ld	a, l
   7E50 B7            [ 4] 5441 	or	a, a
   7E51 28 07         [12] 5442 	jr	Z,00102$
                           5443 ;src/main.c:1260: pSpr->x++; // powerUp speed*2
   7E53 E1            [10] 5444 	pop	hl
   7E54 E5            [11] 5445 	push	hl
   7E55 4E            [ 7] 5446 	ld	c, (hl)
   7E56 0C            [ 4] 5447 	inc	c
   7E57 E1            [10] 5448 	pop	hl
   7E58 E5            [11] 5449 	push	hl
   7E59 71            [ 7] 5450 	ld	(hl), c
   7E5A                    5451 00102$:
                           5452 ;src/main.c:1262: pSpr->dir = D_right;
   7E5A DD 7E FE      [19] 5453 	ld	a, -2 (ix)
   7E5D C6 07         [ 7] 5454 	add	a, #0x07
   7E5F 6F            [ 4] 5455 	ld	l, a
   7E60 DD 7E FF      [19] 5456 	ld	a, -1 (ix)
   7E63 CE 00         [ 7] 5457 	adc	a, #0x00
   7E65 67            [ 4] 5458 	ld	h, a
   7E66 36 03         [10] 5459 	ld	(hl), #0x03
                           5460 ;src/main.c:1263: pSpr->status = S_walkingRight;
   7E68 DD 7E FE      [19] 5461 	ld	a, -2 (ix)
   7E6B C6 06         [ 7] 5462 	add	a, #0x06
   7E6D 6F            [ 4] 5463 	ld	l, a
   7E6E DD 7E FF      [19] 5464 	ld	a, -1 (ix)
   7E71 CE 00         [ 7] 5465 	adc	a, #0x00
   7E73 67            [ 4] 5466 	ld	h, a
   7E74 36 03         [10] 5467 	ld	(hl), #0x03
   7E76                    5468 00106$:
   7E76 DD F9         [10] 5469 	ld	sp, ix
   7E78 DD E1         [14] 5470 	pop	ix
   7E7A C9            [10] 5471 	ret
                           5472 ;src/main.c:1269: void WalkIn(TSpr *pSpr, u8 dir) {
                           5473 ;	---------------------------------
                           5474 ; Function WalkIn
                           5475 ; ---------------------------------
   7E7B                    5476 _WalkIn::
                           5477 ;src/main.c:1270: pSpr->nFrm = 0;
   7E7B D1            [10] 5478 	pop	de
   7E7C C1            [10] 5479 	pop	bc
   7E7D C5            [11] 5480 	push	bc
   7E7E D5            [11] 5481 	push	de
   7E7F 21 0A 00      [10] 5482 	ld	hl, #0x000a
   7E82 09            [11] 5483 	add	hl, bc
   7E83 36 00         [10] 5484 	ld	(hl), #0x00
                           5485 ;src/main.c:1271: pSpr->dir = dir;
   7E85 21 07 00      [10] 5486 	ld	hl, #0x0007
   7E88 09            [11] 5487 	add	hl, bc
   7E89 FD 21 04 00   [14] 5488 	ld	iy, #4
   7E8D FD 39         [15] 5489 	add	iy, sp
   7E8F FD 7E 00      [19] 5490 	ld	a, 0 (iy)
   7E92 77            [ 7] 5491 	ld	(hl), a
                           5492 ;src/main.c:1272: pSpr->status = dir;
   7E93 21 06 00      [10] 5493 	ld	hl, #0x0006
   7E96 09            [11] 5494 	add	hl, bc
   7E97 FD 7E 00      [19] 5495 	ld	a, 0 (iy)
   7E9A 77            [ 7] 5496 	ld	(hl), a
                           5497 ;src/main.c:1273: pSpr->print_minV = TRUE; // the sprite must be printed, it will move
   7E9B 21 0D 00      [10] 5498 	ld	hl, #0x000d
   7E9E 09            [11] 5499 	add	hl, bc
   7E9F 36 01         [10] 5500 	ld	(hl), #0x01
   7EA1 C9            [10] 5501 	ret
                           5502 ;src/main.c:1278: void Stop(TSpr *pSpr) __z88dk_fastcall {
                           5503 ;	---------------------------------
                           5504 ; Function Stop
                           5505 ; ---------------------------------
   7EA2                    5506 _Stop::
   7EA2 DD E5         [15] 5507 	push	ix
   7EA4 DD 21 00 00   [14] 5508 	ld	ix,#0
   7EA8 DD 39         [15] 5509 	add	ix,sp
   7EAA F5            [11] 5510 	push	af
   7EAB F5            [11] 5511 	push	af
   7EAC DD 75 FE      [19] 5512 	ld	-2 (ix), l
   7EAF DD 74 FF      [19] 5513 	ld	-1 (ix), h
                           5514 ;src/main.c:1279: cpct_scanKeyboard_f(); // check the pressed keys
   7EB2 CD CD 51      [17] 5515 	call	_cpct_scanKeyboard_f
                           5516 ;src/main.c:1280: if(cpct_isKeyPressed(ctlUp[pSpr->ident]))			WalkIn(pSpr, D_up);
   7EB5 01 F4 5E      [10] 5517 	ld	bc, #_ctlUp+0
   7EB8 DD 7E FE      [19] 5518 	ld	a, -2 (ix)
   7EBB C6 01         [ 7] 5519 	add	a, #0x01
   7EBD DD 77 FC      [19] 5520 	ld	-4 (ix), a
   7EC0 DD 7E FF      [19] 5521 	ld	a, -1 (ix)
   7EC3 CE 00         [ 7] 5522 	adc	a, #0x00
   7EC5 DD 77 FD      [19] 5523 	ld	-3 (ix), a
   7EC8 E1            [10] 5524 	pop	hl
   7EC9 E5            [11] 5525 	push	hl
   7ECA 6E            [ 7] 5526 	ld	l, (hl)
   7ECB 26 00         [ 7] 5527 	ld	h, #0x00
   7ECD 29            [11] 5528 	add	hl, hl
   7ECE 09            [11] 5529 	add	hl, bc
   7ECF 4E            [ 7] 5530 	ld	c, (hl)
   7ED0 23            [ 6] 5531 	inc	hl
   7ED1 66            [ 7] 5532 	ld	h, (hl)
   7ED2 69            [ 4] 5533 	ld	l, c
   7ED3 CD C1 51      [17] 5534 	call	_cpct_isKeyPressed
   7ED6 7D            [ 4] 5535 	ld	a, l
   7ED7 B7            [ 4] 5536 	or	a, a
   7ED8 28 12         [12] 5537 	jr	Z,00127$
   7EDA AF            [ 4] 5538 	xor	a, a
   7EDB F5            [11] 5539 	push	af
   7EDC 33            [ 6] 5540 	inc	sp
   7EDD DD 6E FE      [19] 5541 	ld	l,-2 (ix)
   7EE0 DD 66 FF      [19] 5542 	ld	h,-1 (ix)
   7EE3 E5            [11] 5543 	push	hl
   7EE4 CD 7B 7E      [17] 5544 	call	_WalkIn
   7EE7 F1            [10] 5545 	pop	af
   7EE8 33            [ 6] 5546 	inc	sp
   7EE9 C3 F1 7F      [10] 5547 	jp	00129$
   7EEC                    5548 00127$:
                           5549 ;src/main.c:1281: else if(cpct_isKeyPressed(ctlDown[pSpr->ident]))	WalkIn(pSpr, D_down);
   7EEC E1            [10] 5550 	pop	hl
   7EED E5            [11] 5551 	push	hl
   7EEE 6E            [ 7] 5552 	ld	l, (hl)
   7EEF 26 00         [ 7] 5553 	ld	h, #0x00
   7EF1 29            [11] 5554 	add	hl, hl
   7EF2 11 F8 5E      [10] 5555 	ld	de, #_ctlDown
   7EF5 19            [11] 5556 	add	hl, de
   7EF6 7E            [ 7] 5557 	ld	a, (hl)
   7EF7 23            [ 6] 5558 	inc	hl
   7EF8 66            [ 7] 5559 	ld	h, (hl)
   7EF9 6F            [ 4] 5560 	ld	l, a
   7EFA CD C1 51      [17] 5561 	call	_cpct_isKeyPressed
   7EFD 7D            [ 4] 5562 	ld	a, l
   7EFE B7            [ 4] 5563 	or	a, a
   7EFF 28 13         [12] 5564 	jr	Z,00124$
   7F01 3E 01         [ 7] 5565 	ld	a, #0x01
   7F03 F5            [11] 5566 	push	af
   7F04 33            [ 6] 5567 	inc	sp
   7F05 DD 6E FE      [19] 5568 	ld	l,-2 (ix)
   7F08 DD 66 FF      [19] 5569 	ld	h,-1 (ix)
   7F0B E5            [11] 5570 	push	hl
   7F0C CD 7B 7E      [17] 5571 	call	_WalkIn
   7F0F F1            [10] 5572 	pop	af
   7F10 33            [ 6] 5573 	inc	sp
   7F11 C3 F1 7F      [10] 5574 	jp	00129$
   7F14                    5575 00124$:
                           5576 ;src/main.c:1282: else if(cpct_isKeyPressed(ctlLeft[pSpr->ident]))	WalkIn(pSpr, D_left);
   7F14 E1            [10] 5577 	pop	hl
   7F15 E5            [11] 5578 	push	hl
   7F16 6E            [ 7] 5579 	ld	l, (hl)
   7F17 26 00         [ 7] 5580 	ld	h, #0x00
   7F19 29            [11] 5581 	add	hl, hl
   7F1A 11 FC 5E      [10] 5582 	ld	de, #_ctlLeft
   7F1D 19            [11] 5583 	add	hl, de
   7F1E 7E            [ 7] 5584 	ld	a, (hl)
   7F1F 23            [ 6] 5585 	inc	hl
   7F20 66            [ 7] 5586 	ld	h, (hl)
   7F21 6F            [ 4] 5587 	ld	l, a
   7F22 CD C1 51      [17] 5588 	call	_cpct_isKeyPressed
   7F25 7D            [ 4] 5589 	ld	a, l
   7F26 B7            [ 4] 5590 	or	a, a
   7F27 28 13         [12] 5591 	jr	Z,00121$
   7F29 3E 02         [ 7] 5592 	ld	a, #0x02
   7F2B F5            [11] 5593 	push	af
   7F2C 33            [ 6] 5594 	inc	sp
   7F2D DD 6E FE      [19] 5595 	ld	l,-2 (ix)
   7F30 DD 66 FF      [19] 5596 	ld	h,-1 (ix)
   7F33 E5            [11] 5597 	push	hl
   7F34 CD 7B 7E      [17] 5598 	call	_WalkIn
   7F37 F1            [10] 5599 	pop	af
   7F38 33            [ 6] 5600 	inc	sp
   7F39 C3 F1 7F      [10] 5601 	jp	00129$
   7F3C                    5602 00121$:
                           5603 ;src/main.c:1283: else if(cpct_isKeyPressed(ctlRight[pSpr->ident]))	WalkIn(pSpr, D_right);	
   7F3C E1            [10] 5604 	pop	hl
   7F3D E5            [11] 5605 	push	hl
   7F3E 6E            [ 7] 5606 	ld	l, (hl)
   7F3F 26 00         [ 7] 5607 	ld	h, #0x00
   7F41 29            [11] 5608 	add	hl, hl
   7F42 11 00 5F      [10] 5609 	ld	de, #_ctlRight
   7F45 19            [11] 5610 	add	hl, de
   7F46 7E            [ 7] 5611 	ld	a, (hl)
   7F47 23            [ 6] 5612 	inc	hl
   7F48 66            [ 7] 5613 	ld	h, (hl)
   7F49 6F            [ 4] 5614 	ld	l, a
   7F4A CD C1 51      [17] 5615 	call	_cpct_isKeyPressed
   7F4D 7D            [ 4] 5616 	ld	a, l
   7F4E B7            [ 4] 5617 	or	a, a
   7F4F 28 13         [12] 5618 	jr	Z,00118$
   7F51 3E 03         [ 7] 5619 	ld	a, #0x03
   7F53 F5            [11] 5620 	push	af
   7F54 33            [ 6] 5621 	inc	sp
   7F55 DD 6E FE      [19] 5622 	ld	l,-2 (ix)
   7F58 DD 66 FF      [19] 5623 	ld	h,-1 (ix)
   7F5B E5            [11] 5624 	push	hl
   7F5C CD 7B 7E      [17] 5625 	call	_WalkIn
   7F5F F1            [10] 5626 	pop	af
   7F60 33            [ 6] 5627 	inc	sp
   7F61 C3 F1 7F      [10] 5628 	jp	00129$
   7F64                    5629 00118$:
                           5630 ;src/main.c:1285: else if(cpct_isKeyPressed(ctlAbort)) {
   7F64 2A 04 5F      [16] 5631 	ld	hl, (_ctlAbort)
   7F67 CD C1 51      [17] 5632 	call	_cpct_isKeyPressed
   7F6A 7D            [ 4] 5633 	ld	a, l
   7F6B B7            [ 4] 5634 	or	a, a
   7F6C 28 14         [12] 5635 	jr	Z,00115$
                           5636 ;src/main.c:1286: spr[0].lives_speed = 0;
   7F6E 21 15 5F      [10] 5637 	ld	hl, #(_spr + 0x000b)
   7F71 36 00         [10] 5638 	ld	(hl), #0x00
                           5639 ;src/main.c:1287: spr[1].lives_speed = 0;
   7F73 21 24 5F      [10] 5640 	ld	hl, #(_spr + 0x001a)
   7F76 36 00         [10] 5641 	ld	(hl), #0x00
                           5642 ;src/main.c:1288: GameOver(2);
   7F78 3E 02         [ 7] 5643 	ld	a, #0x02
   7F7A F5            [11] 5644 	push	af
   7F7B 33            [ 6] 5645 	inc	sp
   7F7C CD 57 A0      [17] 5646 	call	_GameOver
   7F7F 33            [ 6] 5647 	inc	sp
   7F80 18 6F         [12] 5648 	jr	00129$
   7F82                    5649 00115$:
                           5650 ;src/main.c:1291: else if(cpct_isKeyPressed(ctlMusic)) {
   7F82 2A 06 5F      [16] 5651 	ld	hl, (_ctlMusic)
   7F85 CD C1 51      [17] 5652 	call	_cpct_isKeyPressed
   7F88 7D            [ 4] 5653 	ld	a, l
   7F89 B7            [ 4] 5654 	or	a, a
   7F8A 28 2F         [12] 5655 	jr	Z,00112$
                           5656 ;src/main.c:1292: Wait4Key(ctlMusic);
   7F8C 2A 06 5F      [16] 5657 	ld	hl, (_ctlMusic)
   7F8F E5            [11] 5658 	push	hl
   7F90 CD 6F 68      [17] 5659 	call	_Wait4Key
   7F93 F1            [10] 5660 	pop	af
                           5661 ;src/main.c:1293: if (music == TRUE) { // if the music is playing ...
   7F94 FD 21 EB 5E   [14] 5662 	ld	iy, #_music
   7F98 FD 7E 00      [19] 5663 	ld	a, 0 (iy)
   7F9B 3D            [ 4] 5664 	dec	a
   7F9C 20 0E         [12] 5665 	jr	NZ,00102$
                           5666 ;src/main.c:1294: music = FALSE;
   7F9E FD 36 00 00   [19] 5667 	ld	0 (iy), #0x00
                           5668 ;src/main.c:1295: cpct_akp_musicInit(g_fx);
   7FA2 21 C4 05      [10] 5669 	ld	hl, #_g_fx
   7FA5 E5            [11] 5670 	push	hl
   7FA6 CD 48 59      [17] 5671 	call	_cpct_akp_musicInit
   7FA9 F1            [10] 5672 	pop	af
   7FAA 18 45         [12] 5673 	jr	00129$
   7FAC                    5674 00102$:
                           5675 ;src/main.c:1298: music = TRUE;			
   7FAC 21 EB 5E      [10] 5676 	ld	hl,#_music + 0
   7FAF 36 01         [10] 5677 	ld	(hl), #0x01
                           5678 ;src/main.c:1299: cpct_akp_musicInit(g_ingame); // music ingame
   7FB1 21 91 07      [10] 5679 	ld	hl, #_g_ingame
   7FB4 E5            [11] 5680 	push	hl
   7FB5 CD 48 59      [17] 5681 	call	_cpct_akp_musicInit
   7FB8 F1            [10] 5682 	pop	af
   7FB9 18 36         [12] 5683 	jr	00129$
   7FBB                    5684 00112$:
                           5685 ;src/main.c:1303: else if(cpct_isKeyPressed(ctlPause)) {
   7FBB 2A 08 5F      [16] 5686 	ld	hl, (_ctlPause)
   7FBE CD C1 51      [17] 5687 	call	_cpct_isKeyPressed
   7FC1 7D            [ 4] 5688 	ld	a, l
   7FC2 B7            [ 4] 5689 	or	a, a
   7FC3 28 2C         [12] 5690 	jr	Z,00129$
                           5691 ;src/main.c:1304: Wait4Key(ctlPause);
   7FC5 2A 08 5F      [16] 5692 	ld	hl, (_ctlPause)
   7FC8 E5            [11] 5693 	push	hl
   7FC9 CD 6F 68      [17] 5694 	call	_Wait4Key
                           5695 ;src/main.c:1305: cpct_akp_musicInit(g_fx);
   7FCC 21 C4 05      [10] 5696 	ld	hl, #_g_fx
   7FCF E3            [19] 5697 	ex	(sp),hl
   7FD0 CD 48 59      [17] 5698 	call	_cpct_akp_musicInit
   7FD3 F1            [10] 5699 	pop	af
                           5700 ;src/main.c:1306: while (!cpct_isAnyKeyPressed());
   7FD4                    5701 00104$:
   7FD4 CD E5 5B      [17] 5702 	call	_cpct_isAnyKeyPressed
   7FD7 7D            [ 4] 5703 	ld	a, l
   7FD8 B7            [ 4] 5704 	or	a, a
   7FD9 28 F9         [12] 5705 	jr	Z,00104$
                           5706 ;src/main.c:1307: Wait4Key(ctlPause);
   7FDB 2A 08 5F      [16] 5707 	ld	hl, (_ctlPause)
   7FDE E5            [11] 5708 	push	hl
   7FDF CD 6F 68      [17] 5709 	call	_Wait4Key
   7FE2 F1            [10] 5710 	pop	af
                           5711 ;src/main.c:1308: if (music)
   7FE3 3A EB 5E      [13] 5712 	ld	a,(#_music + 0)
   7FE6 B7            [ 4] 5713 	or	a, a
   7FE7 28 08         [12] 5714 	jr	Z,00129$
                           5715 ;src/main.c:1309: cpct_akp_musicInit(g_ingame); // music ingame
   7FE9 01 91 07      [10] 5716 	ld	bc, #_g_ingame
   7FEC C5            [11] 5717 	push	bc
   7FED CD 48 59      [17] 5718 	call	_cpct_akp_musicInit
   7FF0 F1            [10] 5719 	pop	af
   7FF1                    5720 00129$:
   7FF1 DD F9         [10] 5721 	ld	sp, ix
   7FF3 DD E1         [14] 5722 	pop	ix
   7FF5 C9            [10] 5723 	ret
                           5724 ;src/main.c:1333: void WalkAnim(TSpr *pSpr, u8 dir) {
                           5725 ;	---------------------------------
                           5726 ; Function WalkAnim
                           5727 ; ---------------------------------
   7FF6                    5728 _WalkAnim::
   7FF6 DD E5         [15] 5729 	push	ix
   7FF8 DD 21 00 00   [14] 5730 	ld	ix,#0
   7FFC DD 39         [15] 5731 	add	ix,sp
                           5732 ;src/main.c:1334: u8 animPause = 2;
   7FFE 0E 02         [ 7] 5733 	ld	c, #0x02
                           5734 ;src/main.c:1335: if (pSpr->num > 3) animPause = 1; // slow enemies (4 and 5) have no pause in animation
   8000 DD 5E 04      [19] 5735 	ld	e,4 (ix)
   8003 DD 56 05      [19] 5736 	ld	d,5 (ix)
   8006 1A            [ 7] 5737 	ld	a, (de)
   8007 47            [ 4] 5738 	ld	b, a
   8008 3E 03         [ 7] 5739 	ld	a, #0x03
   800A 90            [ 4] 5740 	sub	a, b
   800B 30 02         [12] 5741 	jr	NC,00102$
   800D 0E 01         [ 7] 5742 	ld	c, #0x01
   800F                    5743 00102$:
                           5744 ;src/main.c:1336: pSpr->dir = dir;
   800F 21 07 00      [10] 5745 	ld	hl, #0x0007
   8012 19            [11] 5746 	add	hl, de
   8013 DD 7E 06      [19] 5747 	ld	a, 6 (ix)
   8016 77            [ 7] 5748 	ld	(hl), a
                           5749 ;src/main.c:1337: if(++pSpr->nFrm == animPause*2) pSpr->nFrm = 0;
   8017 FD 21 0A 00   [14] 5750 	ld	iy, #0x000a
   801B FD 19         [15] 5751 	add	iy, de
   801D FD 34 00      [23] 5752 	inc	0 (iy)
   8020 FD 5E 00      [19] 5753 	ld	e, 0 (iy)
   8023 06 00         [ 7] 5754 	ld	b, #0x00
   8025 CB 21         [ 8] 5755 	sla	c
   8027 CB 10         [ 8] 5756 	rl	b
   8029 16 00         [ 7] 5757 	ld	d, #0x00
   802B 79            [ 4] 5758 	ld	a, c
   802C 93            [ 4] 5759 	sub	a, e
   802D 20 08         [12] 5760 	jr	NZ,00105$
   802F 78            [ 4] 5761 	ld	a, b
   8030 92            [ 4] 5762 	sub	a, d
   8031 20 04         [12] 5763 	jr	NZ,00105$
   8033 FD 36 00 00   [19] 5764 	ld	0 (iy), #0x00
   8037                    5765 00105$:
   8037 DD E1         [14] 5766 	pop	ix
   8039 C9            [10] 5767 	ret
                           5768 ;src/main.c:1342: void Walk(TSpr *pSpr) __z88dk_fastcall {
                           5769 ;	---------------------------------
                           5770 ; Function Walk
                           5771 ; ---------------------------------
   803A                    5772 _Walk::
   803A DD E5         [15] 5773 	push	ix
   803C DD 21 00 00   [14] 5774 	ld	ix,#0
   8040 DD 39         [15] 5775 	add	ix,sp
   8042 F5            [11] 5776 	push	af
   8043 F5            [11] 5777 	push	af
   8044 DD 75 FE      [19] 5778 	ld	-2 (ix), l
   8047 DD 74 FF      [19] 5779 	ld	-1 (ix), h
                           5780 ;src/main.c:1343: cpct_scanKeyboard_f(); // check the pressed keys
   804A CD CD 51      [17] 5781 	call	_cpct_scanKeyboard_f
                           5782 ;src/main.c:1345: if(cpct_isKeyPressed(ctlRight[pSpr->ident])) {	
   804D 11 00 5F      [10] 5783 	ld	de, #_ctlRight+0
   8050 DD 4E FE      [19] 5784 	ld	c,-2 (ix)
   8053 DD 46 FF      [19] 5785 	ld	b,-1 (ix)
   8056 03            [ 6] 5786 	inc	bc
   8057 0A            [ 7] 5787 	ld	a, (bc)
   8058 6F            [ 4] 5788 	ld	l, a
   8059 26 00         [ 7] 5789 	ld	h, #0x00
   805B 29            [11] 5790 	add	hl, hl
   805C 19            [11] 5791 	add	hl, de
   805D 5E            [ 7] 5792 	ld	e, (hl)
   805E 23            [ 6] 5793 	inc	hl
   805F 66            [ 7] 5794 	ld	h, (hl)
   8060 C5            [11] 5795 	push	bc
   8061 6B            [ 4] 5796 	ld	l, e
   8062 CD C1 51      [17] 5797 	call	_cpct_isKeyPressed
   8065 5D            [ 4] 5798 	ld	e, l
   8066 C1            [10] 5799 	pop	bc
   8067 0A            [ 7] 5800 	ld	a, (bc)
   8068 6F            [ 4] 5801 	ld	l, a
                           5802 ;src/main.c:1346: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr);  // diagonal derecha-arriba
   8069 26 00         [ 7] 5803 	ld	h, #0x00
   806B 29            [11] 5804 	add	hl, hl
   806C E3            [19] 5805 	ex	(sp), hl
                           5806 ;src/main.c:1345: if(cpct_isKeyPressed(ctlRight[pSpr->ident])) {	
   806D 7B            [ 4] 5807 	ld	a, e
   806E B7            [ 4] 5808 	or	a, a
   806F 28 51         [12] 5809 	jr	Z,00121$
                           5810 ;src/main.c:1346: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr);  // diagonal derecha-arriba
   8071 11 F4 5E      [10] 5811 	ld	de, #_ctlUp+0
   8074 E1            [10] 5812 	pop	hl
   8075 E5            [11] 5813 	push	hl
   8076 19            [11] 5814 	add	hl, de
   8077 5E            [ 7] 5815 	ld	e, (hl)
   8078 23            [ 6] 5816 	inc	hl
   8079 66            [ 7] 5817 	ld	h, (hl)
   807A C5            [11] 5818 	push	bc
   807B 6B            [ 4] 5819 	ld	l, e
   807C CD C1 51      [17] 5820 	call	_cpct_isKeyPressed
   807F C1            [10] 5821 	pop	bc
   8080 7D            [ 4] 5822 	ld	a, l
   8081 B7            [ 4] 5823 	or	a, a
   8082 28 09         [12] 5824 	jr	Z,00104$
   8084 C1            [10] 5825 	pop	bc
   8085 E1            [10] 5826 	pop	hl
   8086 E5            [11] 5827 	push	hl
   8087 C5            [11] 5828 	push	bc
   8088 CD 37 7C      [17] 5829 	call	_MoveUp
   808B 18 1B         [12] 5830 	jr	00105$
   808D                    5831 00104$:
                           5832 ;src/main.c:1347: else if(cpct_isKeyPressed(ctlDown[pSpr->ident]))	MoveDown(pSpr); // diagonal derecha-abajo
   808D 11 F8 5E      [10] 5833 	ld	de, #_ctlDown+0
   8090 0A            [ 7] 5834 	ld	a, (bc)
   8091 6F            [ 4] 5835 	ld	l, a
   8092 26 00         [ 7] 5836 	ld	h, #0x00
   8094 29            [11] 5837 	add	hl, hl
   8095 19            [11] 5838 	add	hl, de
   8096 4E            [ 7] 5839 	ld	c, (hl)
   8097 23            [ 6] 5840 	inc	hl
   8098 66            [ 7] 5841 	ld	h, (hl)
   8099 69            [ 4] 5842 	ld	l, c
   809A CD C1 51      [17] 5843 	call	_cpct_isKeyPressed
   809D 7D            [ 4] 5844 	ld	a, l
   809E B7            [ 4] 5845 	or	a, a
   809F 28 07         [12] 5846 	jr	Z,00105$
   80A1 C1            [10] 5847 	pop	bc
   80A2 E1            [10] 5848 	pop	hl
   80A3 E5            [11] 5849 	push	hl
   80A4 C5            [11] 5850 	push	bc
   80A5 CD C4 7C      [17] 5851 	call	_MoveDown
   80A8                    5852 00105$:
                           5853 ;src/main.c:1348: MoveRight(pSpr);
   80A8 C1            [10] 5854 	pop	bc
   80A9 E1            [10] 5855 	pop	hl
   80AA E5            [11] 5856 	push	hl
   80AB C5            [11] 5857 	push	bc
   80AC CD F4 7D      [17] 5858 	call	_MoveRight
                           5859 ;src/main.c:1349: WalkAnim(pSpr, D_right);
   80AF 3E 03         [ 7] 5860 	ld	a, #0x03
   80B1 F5            [11] 5861 	push	af
   80B2 33            [ 6] 5862 	inc	sp
   80B3 DD 6E FE      [19] 5863 	ld	l,-2 (ix)
   80B6 DD 66 FF      [19] 5864 	ld	h,-1 (ix)
   80B9 E5            [11] 5865 	push	hl
   80BA CD F6 7F      [17] 5866 	call	_WalkAnim
   80BD F1            [10] 5867 	pop	af
   80BE 33            [ 6] 5868 	inc	sp
   80BF C3 92 81      [10] 5869 	jp	00123$
   80C2                    5870 00121$:
                           5871 ;src/main.c:1352: else if(cpct_isKeyPressed(ctlLeft[pSpr->ident])) {	
   80C2 11 FC 5E      [10] 5872 	ld	de, #_ctlLeft+0
   80C5 E1            [10] 5873 	pop	hl
   80C6 E5            [11] 5874 	push	hl
   80C7 19            [11] 5875 	add	hl, de
   80C8 5E            [ 7] 5876 	ld	e, (hl)
   80C9 23            [ 6] 5877 	inc	hl
   80CA 66            [ 7] 5878 	ld	h, (hl)
   80CB C5            [11] 5879 	push	bc
   80CC 6B            [ 4] 5880 	ld	l, e
   80CD CD C1 51      [17] 5881 	call	_cpct_isKeyPressed
   80D0 5D            [ 4] 5882 	ld	e, l
   80D1 C1            [10] 5883 	pop	bc
                           5884 ;src/main.c:1345: if(cpct_isKeyPressed(ctlRight[pSpr->ident])) {	
   80D2 0A            [ 7] 5885 	ld	a, (bc)
   80D3 6F            [ 4] 5886 	ld	l, a
                           5887 ;src/main.c:1346: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr);  // diagonal derecha-arriba
   80D4 26 00         [ 7] 5888 	ld	h, #0x00
   80D6 29            [11] 5889 	add	hl, hl
   80D7 E3            [19] 5890 	ex	(sp), hl
                           5891 ;src/main.c:1352: else if(cpct_isKeyPressed(ctlLeft[pSpr->ident])) {	
   80D8 7B            [ 4] 5892 	ld	a, e
   80D9 B7            [ 4] 5893 	or	a, a
   80DA 28 50         [12] 5894 	jr	Z,00118$
                           5895 ;src/main.c:1353: if (cpct_isKeyPressed(ctlUp[pSpr->ident])) 			MoveUp(pSpr); // diagonal izda-arriba
   80DC 11 F4 5E      [10] 5896 	ld	de, #_ctlUp+0
   80DF E1            [10] 5897 	pop	hl
   80E0 E5            [11] 5898 	push	hl
   80E1 19            [11] 5899 	add	hl, de
   80E2 5E            [ 7] 5900 	ld	e, (hl)
   80E3 23            [ 6] 5901 	inc	hl
   80E4 66            [ 7] 5902 	ld	h, (hl)
   80E5 C5            [11] 5903 	push	bc
   80E6 6B            [ 4] 5904 	ld	l, e
   80E7 CD C1 51      [17] 5905 	call	_cpct_isKeyPressed
   80EA C1            [10] 5906 	pop	bc
   80EB 7D            [ 4] 5907 	ld	a, l
   80EC B7            [ 4] 5908 	or	a, a
   80ED 28 09         [12] 5909 	jr	Z,00109$
   80EF C1            [10] 5910 	pop	bc
   80F0 E1            [10] 5911 	pop	hl
   80F1 E5            [11] 5912 	push	hl
   80F2 C5            [11] 5913 	push	bc
   80F3 CD 37 7C      [17] 5914 	call	_MoveUp
   80F6 18 1B         [12] 5915 	jr	00110$
   80F8                    5916 00109$:
                           5917 ;src/main.c:1354: else if(cpct_isKeyPressed(ctlDown[pSpr->ident]))	MoveDown(pSpr); // diagonal izda-abajo
   80F8 0A            [ 7] 5918 	ld	a, (bc)
   80F9 6F            [ 4] 5919 	ld	l, a
   80FA 26 00         [ 7] 5920 	ld	h, #0x00
   80FC 29            [11] 5921 	add	hl, hl
   80FD 11 F8 5E      [10] 5922 	ld	de, #_ctlDown
   8100 19            [11] 5923 	add	hl, de
   8101 4E            [ 7] 5924 	ld	c, (hl)
   8102 23            [ 6] 5925 	inc	hl
   8103 66            [ 7] 5926 	ld	h, (hl)
   8104 69            [ 4] 5927 	ld	l, c
   8105 CD C1 51      [17] 5928 	call	_cpct_isKeyPressed
   8108 7D            [ 4] 5929 	ld	a, l
   8109 B7            [ 4] 5930 	or	a, a
   810A 28 07         [12] 5931 	jr	Z,00110$
   810C C1            [10] 5932 	pop	bc
   810D E1            [10] 5933 	pop	hl
   810E E5            [11] 5934 	push	hl
   810F C5            [11] 5935 	push	bc
   8110 CD C4 7C      [17] 5936 	call	_MoveDown
   8113                    5937 00110$:
                           5938 ;src/main.c:1355: MoveLeft(pSpr); 
   8113 C1            [10] 5939 	pop	bc
   8114 E1            [10] 5940 	pop	hl
   8115 E5            [11] 5941 	push	hl
   8116 C5            [11] 5942 	push	bc
   8117 CD 6A 7D      [17] 5943 	call	_MoveLeft
                           5944 ;src/main.c:1356: WalkAnim(pSpr, D_left);
   811A 3E 02         [ 7] 5945 	ld	a, #0x02
   811C F5            [11] 5946 	push	af
   811D 33            [ 6] 5947 	inc	sp
   811E DD 6E FE      [19] 5948 	ld	l,-2 (ix)
   8121 DD 66 FF      [19] 5949 	ld	h,-1 (ix)
   8124 E5            [11] 5950 	push	hl
   8125 CD F6 7F      [17] 5951 	call	_WalkAnim
   8128 F1            [10] 5952 	pop	af
   8129 33            [ 6] 5953 	inc	sp
   812A 18 66         [12] 5954 	jr	00123$
   812C                    5955 00118$:
                           5956 ;src/main.c:1359: else if(cpct_isKeyPressed(ctlUp[pSpr->ident])) {
   812C 11 F4 5E      [10] 5957 	ld	de, #_ctlUp+0
   812F E1            [10] 5958 	pop	hl
   8130 E5            [11] 5959 	push	hl
   8131 19            [11] 5960 	add	hl, de
   8132 5E            [ 7] 5961 	ld	e, (hl)
   8133 23            [ 6] 5962 	inc	hl
   8134 66            [ 7] 5963 	ld	h, (hl)
   8135 C5            [11] 5964 	push	bc
   8136 6B            [ 4] 5965 	ld	l, e
   8137 CD C1 51      [17] 5966 	call	_cpct_isKeyPressed
   813A C1            [10] 5967 	pop	bc
   813B 7D            [ 4] 5968 	ld	a, l
   813C B7            [ 4] 5969 	or	a, a
   813D 28 18         [12] 5970 	jr	Z,00115$
                           5971 ;src/main.c:1360: MoveUp(pSpr); 
   813F C1            [10] 5972 	pop	bc
   8140 E1            [10] 5973 	pop	hl
   8141 E5            [11] 5974 	push	hl
   8142 C5            [11] 5975 	push	bc
   8143 CD 37 7C      [17] 5976 	call	_MoveUp
                           5977 ;src/main.c:1361: WalkAnim(pSpr, D_up);
   8146 AF            [ 4] 5978 	xor	a, a
   8147 F5            [11] 5979 	push	af
   8148 33            [ 6] 5980 	inc	sp
   8149 DD 6E FE      [19] 5981 	ld	l,-2 (ix)
   814C DD 66 FF      [19] 5982 	ld	h,-1 (ix)
   814F E5            [11] 5983 	push	hl
   8150 CD F6 7F      [17] 5984 	call	_WalkAnim
   8153 F1            [10] 5985 	pop	af
   8154 33            [ 6] 5986 	inc	sp
   8155 18 3B         [12] 5987 	jr	00123$
   8157                    5988 00115$:
                           5989 ;src/main.c:1364: else if(cpct_isKeyPressed(ctlDown[pSpr->ident])) {
   8157 0A            [ 7] 5990 	ld	a, (bc)
   8158 6F            [ 4] 5991 	ld	l, a
   8159 26 00         [ 7] 5992 	ld	h, #0x00
   815B 29            [11] 5993 	add	hl, hl
   815C 11 F8 5E      [10] 5994 	ld	de, #_ctlDown
   815F 19            [11] 5995 	add	hl, de
   8160 7E            [ 7] 5996 	ld	a, (hl)
   8161 23            [ 6] 5997 	inc	hl
   8162 66            [ 7] 5998 	ld	h, (hl)
   8163 6F            [ 4] 5999 	ld	l, a
   8164 CD C1 51      [17] 6000 	call	_cpct_isKeyPressed
   8167 7D            [ 4] 6001 	ld	a, l
   8168 B7            [ 4] 6002 	or	a, a
   8169 28 19         [12] 6003 	jr	Z,00112$
                           6004 ;src/main.c:1365: MoveDown(pSpr); 
   816B C1            [10] 6005 	pop	bc
   816C E1            [10] 6006 	pop	hl
   816D E5            [11] 6007 	push	hl
   816E C5            [11] 6008 	push	bc
   816F CD C4 7C      [17] 6009 	call	_MoveDown
                           6010 ;src/main.c:1366: WalkAnim(pSpr, D_down);
   8172 3E 01         [ 7] 6011 	ld	a, #0x01
   8174 F5            [11] 6012 	push	af
   8175 33            [ 6] 6013 	inc	sp
   8176 DD 6E FE      [19] 6014 	ld	l,-2 (ix)
   8179 DD 66 FF      [19] 6015 	ld	h,-1 (ix)
   817C E5            [11] 6016 	push	hl
   817D CD F6 7F      [17] 6017 	call	_WalkAnim
   8180 F1            [10] 6018 	pop	af
   8181 33            [ 6] 6019 	inc	sp
   8182 18 0E         [12] 6020 	jr	00123$
   8184                    6021 00112$:
                           6022 ;src/main.c:1369: pSpr->status = S_stopped;
   8184 DD 7E FE      [19] 6023 	ld	a, -2 (ix)
   8187 C6 06         [ 7] 6024 	add	a, #0x06
   8189 6F            [ 4] 6025 	ld	l, a
   818A DD 7E FF      [19] 6026 	ld	a, -1 (ix)
   818D CE 00         [ 7] 6027 	adc	a, #0x00
   818F 67            [ 4] 6028 	ld	h, a
   8190 36 04         [10] 6029 	ld	(hl), #0x04
   8192                    6030 00123$:
   8192 DD F9         [10] 6031 	ld	sp, ix
   8194 DD E1         [14] 6032 	pop	ix
   8196 C9            [10] 6033 	ret
                           6034 ;src/main.c:1374: void RunStatus(TSpr *pSpr) __z88dk_fastcall {
                           6035 ;	---------------------------------
                           6036 ; Function RunStatus
                           6037 ; ---------------------------------
   8197                    6038 _RunStatus::
   8197 4D            [ 4] 6039 	ld	c, l
   8198 44            [ 4] 6040 	ld	b, h
                           6041 ;src/main.c:1375: if (pSpr->status == S_stopped)
   8199 C5            [11] 6042 	push	bc
   819A FD E1         [14] 6043 	pop	iy
   819C FD 7E 06      [19] 6044 	ld	a, 6 (iy)
   819F D6 04         [ 7] 6045 	sub	a, #0x04
   81A1 20 05         [12] 6046 	jr	NZ,00102$
                           6047 ;src/main.c:1376: Stop(pSpr);
   81A3 69            [ 4] 6048 	ld	l, c
   81A4 60            [ 4] 6049 	ld	h, b
   81A5 C3 A2 7E      [10] 6050 	jp  _Stop
   81A8                    6051 00102$:
                           6052 ;src/main.c:1378: Walk(pSpr);	
   81A8 69            [ 4] 6053 	ld	l, c
   81A9 60            [ 4] 6054 	ld	h, b
   81AA C3 3A 80      [10] 6055 	jp  _Walk
                           6056 ;src/main.c:1383: void PlayerLoop(TSpr *pSpr) __z88dk_fastcall {
                           6057 ;	---------------------------------
                           6058 ; Function PlayerLoop
                           6059 ; ---------------------------------
   81AD                    6060 _PlayerLoop::
   81AD DD E5         [15] 6061 	push	ix
   81AF DD 21 00 00   [14] 6062 	ld	ix,#0
   81B3 DD 39         [15] 6063 	add	ix,sp
   81B5 F5            [11] 6064 	push	af
   81B6 4D            [ 4] 6065 	ld	c, l
   81B7 44            [ 4] 6066 	ld	b, h
                           6067 ;src/main.c:1384: RunStatus(pSpr); // calls the appropriate function based on the status of the main sprites
   81B8 C5            [11] 6068 	push	bc
   81B9 69            [ 4] 6069 	ld	l, c
   81BA 60            [ 4] 6070 	ld	h, b
   81BB CD 97 81      [17] 6071 	call	_RunStatus
   81BE C1            [10] 6072 	pop	bc
                           6073 ;src/main.c:1385: if (pSpr->print_minV) { // does the sprite have to be reprinted?
   81BF 21 0D 00      [10] 6074 	ld	hl, #0x000d
   81C2 09            [11] 6075 	add	hl,bc
   81C3 E3            [19] 6076 	ex	(sp), hl
   81C4 E1            [10] 6077 	pop	hl
   81C5 E5            [11] 6078 	push	hl
   81C6 7E            [ 7] 6079 	ld	a, (hl)
   81C7 B7            [ 4] 6080 	or	a, a
   81C8 28 46         [12] 6081 	jr	Z,00106$
                           6082 ;src/main.c:1386: SelectFrame(pSpr); // we assign the next frame of the animation to the sprite
   81CA C5            [11] 6083 	push	bc
   81CB 69            [ 4] 6084 	ld	l, c
   81CC 60            [ 4] 6085 	ld	h, b
   81CD CD CE 77      [17] 6086 	call	_SelectFrame
   81D0 C1            [10] 6087 	pop	bc
                           6088 ;src/main.c:1387: DeleteSprite(pSpr); // delete the sprite
   81D1 C5            [11] 6089 	push	bc
   81D2 69            [ 4] 6090 	ld	l, c
   81D3 60            [ 4] 6091 	ld	h, b
   81D4 CD 19 77      [17] 6092 	call	_DeleteSprite
   81D7 C1            [10] 6093 	pop	bc
                           6094 ;src/main.c:1388: pSpr->px = pSpr->x; // save the current X coordinate
   81D8 21 04 00      [10] 6095 	ld	hl, #0x0004
   81DB 09            [11] 6096 	add	hl,bc
   81DC EB            [ 4] 6097 	ex	de,hl
   81DD 69            [ 4] 6098 	ld	l, c
   81DE 60            [ 4] 6099 	ld	h, b
   81DF 23            [ 6] 6100 	inc	hl
   81E0 23            [ 6] 6101 	inc	hl
   81E1 7E            [ 7] 6102 	ld	a, (hl)
   81E2 12            [ 7] 6103 	ld	(de), a
                           6104 ;src/main.c:1389: pSpr->py = pSpr->y; // save the current Y coordinate
   81E3 21 05 00      [10] 6105 	ld	hl, #0x0005
   81E6 09            [11] 6106 	add	hl,bc
   81E7 EB            [ 4] 6107 	ex	de,hl
   81E8 69            [ 4] 6108 	ld	l, c
   81E9 60            [ 4] 6109 	ld	h, b
   81EA 23            [ 6] 6110 	inc	hl
   81EB 23            [ 6] 6111 	inc	hl
   81EC 23            [ 6] 6112 	inc	hl
   81ED 7E            [ 7] 6113 	ld	a, (hl)
   81EE 12            [ 7] 6114 	ld	(de), a
                           6115 ;src/main.c:1390: PrintSprite(pSpr); // paint the sprite in the new XY position
   81EF C5            [11] 6116 	push	bc
   81F0 69            [ 4] 6117 	ld	l, c
   81F1 60            [ 4] 6118 	ld	h, b
   81F2 CD EA 76      [17] 6119 	call	_PrintSprite
   81F5 C1            [10] 6120 	pop	bc
                           6121 ;src/main.c:1391: ctInactivity[pSpr->num] = 0; // on the move
   81F6 11 ED 5E      [10] 6122 	ld	de, #_ctInactivity+0
   81F9 0A            [ 7] 6123 	ld	a, (bc)
   81FA 6F            [ 4] 6124 	ld	l, a
   81FB 26 00         [ 7] 6125 	ld	h,#0x00
   81FD 19            [11] 6126 	add	hl, de
   81FE 36 00         [10] 6127 	ld	(hl), #0x00
                           6128 ;src/main.c:1392: if (pSpr->status == S_stopped) 
   8200 C5            [11] 6129 	push	bc
   8201 FD E1         [14] 6130 	pop	iy
   8203 FD 7E 06      [19] 6131 	ld	a, 6 (iy)
   8206 D6 04         [ 7] 6132 	sub	a, #0x04
   8208 20 1E         [12] 6133 	jr	NZ,00108$
                           6134 ;src/main.c:1393: pSpr->print_minV = FALSE; // if it is stopped it is no longer necessary to continue printing the sprite
   820A E1            [10] 6135 	pop	hl
   820B E5            [11] 6136 	push	hl
   820C 36 00         [10] 6137 	ld	(hl), #0x00
   820E 18 18         [12] 6138 	jr	00108$
   8210                    6139 00106$:
                           6140 ;src/main.c:1396: else if (ctMainLoop % 5 == 0)
   8210 C5            [11] 6141 	push	bc
   8211 21 05 00      [10] 6142 	ld	hl, #0x0005
   8214 E5            [11] 6143 	push	hl
   8215 2A F2 5E      [16] 6144 	ld	hl, (_ctMainLoop)
   8218 E5            [11] 6145 	push	hl
   8219 CD C2 5D      [17] 6146 	call	__modsint
   821C F1            [10] 6147 	pop	af
   821D F1            [10] 6148 	pop	af
   821E C1            [10] 6149 	pop	bc
   821F 7C            [ 4] 6150 	ld	a, h
   8220 B5            [ 4] 6151 	or	a,l
   8221 20 05         [12] 6152 	jr	NZ,00108$
                           6153 ;src/main.c:1397: PrintSprite(pSpr);
   8223 69            [ 4] 6154 	ld	l, c
   8224 60            [ 4] 6155 	ld	h, b
   8225 CD EA 76      [17] 6156 	call	_PrintSprite
   8228                    6157 00108$:
   8228 DD F9         [10] 6158 	ld	sp, ix
   822A DD E1         [14] 6159 	pop	ix
   822C C9            [10] 6160 	ret
                           6161 ;src/main.c:1406: void ExplodePlayerInDuel(u8 player) __z88dk_fastcall {
                           6162 ;	---------------------------------
                           6163 ; Function ExplodePlayerInDuel
                           6164 ; ---------------------------------
   822D                    6165 _ExplodePlayerInDuel::
   822D DD E5         [15] 6166 	push	ix
   822F DD 21 00 00   [14] 6167 	ld	ix,#0
   8233 DD 39         [15] 6168 	add	ix,sp
   8235 3B            [ 6] 6169 	dec	sp
   8236 DD 75 FF      [19] 6170 	ld	-1 (ix), l
                           6171 ;src/main.c:1407: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, spr[player].x, 122), cpct_px2byteM0(4, 4), SPR_W, SPR_H);
   8239 21 04 04      [10] 6172 	ld	hl, #0x0404
   823C E5            [11] 6173 	push	hl
   823D CD B3 5C      [17] 6174 	call	_cpct_px2byteM0
   8240 4D            [ 4] 6175 	ld	c, l
   8241 06 00         [ 7] 6176 	ld	b, #0x00
   8243 DD 5E FF      [19] 6177 	ld	e,-1 (ix)
   8246 16 00         [ 7] 6178 	ld	d,#0x00
   8248 6B            [ 4] 6179 	ld	l, e
   8249 62            [ 4] 6180 	ld	h, d
   824A 29            [11] 6181 	add	hl, hl
   824B 19            [11] 6182 	add	hl, de
   824C 29            [11] 6183 	add	hl, hl
   824D 19            [11] 6184 	add	hl, de
   824E 29            [11] 6185 	add	hl, hl
   824F 19            [11] 6186 	add	hl, de
   8250 11 0A 5F      [10] 6187 	ld	de, #_spr
   8253 19            [11] 6188 	add	hl, de
   8254 23            [ 6] 6189 	inc	hl
   8255 23            [ 6] 6190 	inc	hl
   8256 7E            [ 7] 6191 	ld	a, (hl)
   8257 C6 B0         [ 7] 6192 	add	a, #0xb0
   8259 5F            [ 4] 6193 	ld	e, a
   825A 3E 00         [ 7] 6194 	ld	a, #0x00
   825C CE D4         [ 7] 6195 	adc	a, #0xd4
   825E 57            [ 4] 6196 	ld	d, a
   825F D5            [11] 6197 	push	de
   8260 FD E1         [14] 6198 	pop	iy
   8262 E5            [11] 6199 	push	hl
   8263 11 05 0C      [10] 6200 	ld	de, #0x0c05
   8266 D5            [11] 6201 	push	de
   8267 C5            [11] 6202 	push	bc
   8268 FD E5         [15] 6203 	push	iy
   826A CD ED 5C      [17] 6204 	call	_cpct_drawSolidBox
   826D AF            [ 4] 6205 	xor	a, a
   826E F5            [11] 6206 	push	af
   826F 33            [ 6] 6207 	inc	sp
   8270 DD 7E FF      [19] 6208 	ld	a, -1 (ix)
   8273 F5            [11] 6209 	push	af
   8274 33            [ 6] 6210 	inc	sp
   8275 CD 8A 7A      [17] 6211 	call	_ExplodeSprite
   8278 F1            [10] 6212 	pop	af
   8279 01 04 04      [10] 6213 	ld	bc, #0x0404
   827C C5            [11] 6214 	push	bc
   827D CD B3 5C      [17] 6215 	call	_cpct_px2byteM0
   8280 4D            [ 4] 6216 	ld	c, l
   8281 E1            [10] 6217 	pop	hl
   8282 06 00         [ 7] 6218 	ld	b, #0x00
   8284 5E            [ 7] 6219 	ld	e, (hl)
   8285 21 B0 D4      [10] 6220 	ld	hl, #0xd4b0
   8288 16 00         [ 7] 6221 	ld	d, #0x00
   828A 19            [11] 6222 	add	hl, de
   828B 11 05 0C      [10] 6223 	ld	de, #0x0c05
   828E D5            [11] 6224 	push	de
   828F C5            [11] 6225 	push	bc
   8290 E5            [11] 6226 	push	hl
   8291 CD ED 5C      [17] 6227 	call	_cpct_drawSolidBox
   8294 33            [ 6] 6228 	inc	sp
   8295 DD E1         [14] 6229 	pop	ix
   8297 C9            [10] 6230 	ret
                           6231 ;src/main.c:1414: void MakeDuel() {
                           6232 ;	---------------------------------
                           6233 ; Function MakeDuel
                           6234 ; ---------------------------------
   8298                    6235 _MakeDuel::
   8298 DD E5         [15] 6236 	push	ix
   829A DD 21 00 00   [14] 6237 	ld	ix,#0
   829E DD 39         [15] 6238 	add	ix,sp
   82A0 F5            [11] 6239 	push	af
   82A1 3B            [ 6] 6240 	dec	sp
                           6241 ;src/main.c:1417: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 18, 80), cpct_px2byteM0(4, 4), 45, 60);
   82A2 21 04 04      [10] 6242 	ld	hl, #0x0404
   82A5 E5            [11] 6243 	push	hl
   82A6 CD B3 5C      [17] 6244 	call	_cpct_px2byteM0
   82A9 26 00         [ 7] 6245 	ld	h, #0x00
   82AB 01 2D 3C      [10] 6246 	ld	bc, #0x3c2d
   82AE C5            [11] 6247 	push	bc
   82AF E5            [11] 6248 	push	hl
   82B0 21 32 C3      [10] 6249 	ld	hl, #0xc332
   82B3 E5            [11] 6250 	push	hl
   82B4 CD ED 5C      [17] 6251 	call	_cpct_drawSolidBox
                           6252 ;src/main.c:1418: PrintFrame(18,80,60,134);
   82B7 21 3C 86      [10] 6253 	ld	hl, #0x863c
   82BA E5            [11] 6254 	push	hl
   82BB 21 12 50      [10] 6255 	ld	hl, #0x5012
   82BE E5            [11] 6256 	push	hl
   82BF CD B3 63      [17] 6257 	call	_PrintFrame
   82C2 F1            [10] 6258 	pop	af
   82C3 F1            [10] 6259 	pop	af
                           6260 ;src/main.c:1420: spr[0].x = 23; spr[0].y = 122;
   82C4 21 0C 5F      [10] 6261 	ld	hl, #(_spr + 0x0002)
   82C7 36 17         [10] 6262 	ld	(hl), #0x17
   82C9 21 0D 5F      [10] 6263 	ld	hl, #(_spr + 0x0003)
   82CC 36 7A         [10] 6264 	ld	(hl), #0x7a
                           6265 ;src/main.c:1422: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   82CE 21 0D 5F      [10] 6266 	ld	hl, #(_spr + 0x0003) + 0
   82D1 56            [ 7] 6267 	ld	d, (hl)
   82D2 21 0C 5F      [10] 6268 	ld	hl, #(_spr + 0x0002) + 0
   82D5 5E            [ 7] 6269 	ld	e, (hl)
   82D6 D5            [11] 6270 	push	de
   82D7 21 00 C0      [10] 6271 	ld	hl, #0xc000
   82DA E5            [11] 6272 	push	hl
   82DB CD CF 5D      [17] 6273 	call	_cpct_getScreenPtr
   82DE 4D            [ 4] 6274 	ld	c, l
   82DF 44            [ 4] 6275 	ld	b, h
                           6276 ;src/main.c:1421: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06,
   82E0 21 00 01      [10] 6277 	ld	hl, #_g_maskTable
   82E3 E5            [11] 6278 	push	hl
   82E4 21 05 0C      [10] 6279 	ld	hl, #0x0c05
   82E7 E5            [11] 6280 	push	hl
   82E8 C5            [11] 6281 	push	bc
   82E9 21 D7 2D      [10] 6282 	ld	hl, #_g_sorcerer1_06
   82EC E5            [11] 6283 	push	hl
   82ED CD E5 5D      [17] 6284 	call	_cpct_drawSpriteMaskedAlignedTable
                           6285 ;src/main.c:1424: spr[1].x = 53; spr[1].y = 122;
   82F0 21 1B 5F      [10] 6286 	ld	hl, #(_spr + 0x0011)
   82F3 36 35         [10] 6287 	ld	(hl), #0x35
   82F5 21 1C 5F      [10] 6288 	ld	hl, #(_spr + 0x0012)
   82F8 36 7A         [10] 6289 	ld	(hl), #0x7a
                           6290 ;src/main.c:1427: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   82FA 3A 1C 5F      [13] 6291 	ld	a,(#(_spr + 0x0012) + 0)
   82FD DD 77 FF      [19] 6292 	ld	-1 (ix), a
   8300 3A 1B 5F      [13] 6293 	ld	a,(#(_spr + 0x0011) + 0)
   8303 DD 77 FE      [19] 6294 	ld	-2 (ix), a
                           6295 ;src/main.c:1425: if (TwoPlayers) {
   8306 3A D4 5E      [13] 6296 	ld	a,(#_TwoPlayers + 0)
   8309 B7            [ 4] 6297 	or	a, a
   830A 28 20         [12] 6298 	jr	Z,00102$
                           6299 ;src/main.c:1427: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   830C DD 66 FF      [19] 6300 	ld	h, -1 (ix)
   830F DD 6E FE      [19] 6301 	ld	l, -2 (ix)
   8312 E5            [11] 6302 	push	hl
   8313 21 00 C0      [10] 6303 	ld	hl, #0xc000
   8316 E5            [11] 6304 	push	hl
   8317 CD CF 5D      [17] 6305 	call	_cpct_getScreenPtr
                           6306 ;src/main.c:1426: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_04, 
   831A 01 07 2B      [10] 6307 	ld	bc, #_g_sorcerer2_04+0
   831D 11 00 01      [10] 6308 	ld	de, #_g_maskTable
   8320 D5            [11] 6309 	push	de
   8321 11 05 0C      [10] 6310 	ld	de, #0x0c05
   8324 D5            [11] 6311 	push	de
   8325 E5            [11] 6312 	push	hl
   8326 C5            [11] 6313 	push	bc
   8327 CD E5 5D      [17] 6314 	call	_cpct_drawSpriteMaskedAlignedTable
   832A 18 1E         [12] 6315 	jr	00103$
   832C                    6316 00102$:
                           6317 ;src/main.c:1432: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   832C DD 66 FF      [19] 6318 	ld	h, -1 (ix)
   832F DD 6E FE      [19] 6319 	ld	l, -2 (ix)
   8332 E5            [11] 6320 	push	hl
   8333 21 00 C0      [10] 6321 	ld	hl, #0xc000
   8336 E5            [11] 6322 	push	hl
   8337 CD CF 5D      [17] 6323 	call	_cpct_getScreenPtr
                           6324 ;src/main.c:1431: cpct_drawSpriteMaskedAlignedTable(g_door_0, 
   833A 01 87 23      [10] 6325 	ld	bc, #_g_door_0+0
   833D 11 00 01      [10] 6326 	ld	de, #_g_maskTable
   8340 D5            [11] 6327 	push	de
   8341 11 05 0C      [10] 6328 	ld	de, #0x0c05
   8344 D5            [11] 6329 	push	de
   8345 E5            [11] 6330 	push	hl
   8346 C5            [11] 6331 	push	bc
   8347 CD E5 5D      [17] 6332 	call	_cpct_drawSpriteMaskedAlignedTable
   834A                    6333 00103$:
                           6334 ;src/main.c:1434: Pause(400);
   834A 21 90 01      [10] 6335 	ld	hl, #0x0190
   834D CD 81 61      [17] 6336 	call	_Pause
                           6337 ;src/main.c:1438: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   8350 21 0D 5F      [10] 6338 	ld	hl, #(_spr + 0x0003) + 0
   8353 56            [ 7] 6339 	ld	d, (hl)
   8354 21 0C 5F      [10] 6340 	ld	hl, #(_spr + 0x0002) + 0
   8357 5E            [ 7] 6341 	ld	e, (hl)
   8358 D5            [11] 6342 	push	de
   8359 21 00 C0      [10] 6343 	ld	hl, #0xc000
   835C E5            [11] 6344 	push	hl
   835D CD CF 5D      [17] 6345 	call	_cpct_getScreenPtr
                           6346 ;src/main.c:1437: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_08, 
   8360 01 4F 2E      [10] 6347 	ld	bc, #_g_sorcerer1_08+0
   8363 11 00 01      [10] 6348 	ld	de, #_g_maskTable
   8366 D5            [11] 6349 	push	de
   8367 11 05 0C      [10] 6350 	ld	de, #0x0c05
   836A D5            [11] 6351 	push	de
   836B E5            [11] 6352 	push	hl
   836C C5            [11] 6353 	push	bc
   836D CD E5 5D      [17] 6354 	call	_cpct_drawSpriteMaskedAlignedTable
                           6355 ;src/main.c:1439: spr[0].x += OBJ_W;
   8370 3A 0C 5F      [13] 6356 	ld	a, (#(_spr + 0x0002) + 0)
   8373 C6 04         [ 7] 6357 	add	a, #0x04
   8375 32 0C 5F      [13] 6358 	ld	(#(_spr + 0x0002)),a
                           6359 ;src/main.c:1440: if (TwoPlayers) {
   8378 3A D4 5E      [13] 6360 	ld	a,(#_TwoPlayers + 0)
   837B B7            [ 4] 6361 	or	a, a
   837C 28 28         [12] 6362 	jr	Z,00105$
                           6363 ;src/main.c:1442: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   837E 21 1C 5F      [10] 6364 	ld	hl, #(_spr + 0x0012) + 0
   8381 56            [ 7] 6365 	ld	d, (hl)
   8382 21 1B 5F      [10] 6366 	ld	hl, #(_spr + 0x0011) + 0
   8385 5E            [ 7] 6367 	ld	e, (hl)
   8386 D5            [11] 6368 	push	de
   8387 21 00 C0      [10] 6369 	ld	hl, #0xc000
   838A E5            [11] 6370 	push	hl
   838B CD CF 5D      [17] 6371 	call	_cpct_getScreenPtr
                           6372 ;src/main.c:1441: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_08, 
   838E 01 F7 2B      [10] 6373 	ld	bc, #_g_sorcerer2_08+0
   8391 11 00 01      [10] 6374 	ld	de, #_g_maskTable
   8394 D5            [11] 6375 	push	de
   8395 11 05 0C      [10] 6376 	ld	de, #0x0c05
   8398 D5            [11] 6377 	push	de
   8399 E5            [11] 6378 	push	hl
   839A C5            [11] 6379 	push	bc
   839B CD E5 5D      [17] 6380 	call	_cpct_drawSpriteMaskedAlignedTable
                           6381 ;src/main.c:1443: spr[1].x -= OBJ_W;
   839E 3A 1B 5F      [13] 6382 	ld	a, (#(_spr + 0x0011) + 0)
   83A1 C6 FC         [ 7] 6383 	add	a, #0xfc
   83A3 32 1B 5F      [13] 6384 	ld	(#(_spr + 0x0011)),a
   83A6                    6385 00105$:
                           6386 ;src/main.c:1445: cpct_akp_SFXPlay (5, 12, 60, 0, 0, AY_CHANNEL_B); // shot sound
   83A6 3E 02         [ 7] 6387 	ld	a, #0x02
   83A8 F5            [11] 6388 	push	af
   83A9 33            [ 6] 6389 	inc	sp
   83AA 21 00 00      [10] 6390 	ld	hl, #0x0000
   83AD E5            [11] 6391 	push	hl
   83AE 2E 3C         [ 7] 6392 	ld	l, #0x3c
   83B0 E5            [11] 6393 	push	hl
   83B1 21 05 0C      [10] 6394 	ld	hl, #0x0c05
   83B4 E5            [11] 6395 	push	hl
   83B5 CD EF 59      [17] 6396 	call	_cpct_akp_SFXPlay
   83B8 21 07 00      [10] 6397 	ld	hl, #7
   83BB 39            [11] 6398 	add	hl, sp
   83BC F9            [ 6] 6399 	ld	sp, hl
                           6400 ;src/main.c:1448: while (spr[0].x < 50)
   83BD                    6401 00110$:
                           6402 ;src/main.c:1422: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   83BD 21 0C 5F      [10] 6403 	ld	hl, #(_spr + 0x0002) + 0
   83C0 4E            [ 7] 6404 	ld	c, (hl)
                           6405 ;src/main.c:1448: while (spr[0].x < 50)
   83C1 79            [ 4] 6406 	ld	a, c
   83C2 D6 32         [ 7] 6407 	sub	a, #0x32
   83C4 D2 60 84      [10] 6408 	jp	NC, 00112$
                           6409 ;src/main.c:1451: spr[0].x ++;
   83C7 41            [ 4] 6410 	ld	b, c
   83C8 04            [ 4] 6411 	inc	b
   83C9 21 0C 5F      [10] 6412 	ld	hl, #(_spr + 0x0002)
   83CC 70            [ 7] 6413 	ld	(hl), b
                           6414 ;src/main.c:1453: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, 125), SHT_W, SHT_H, g_maskTable);
   83CD 3E 7D         [ 7] 6415 	ld	a, #0x7d
   83CF F5            [11] 6416 	push	af
   83D0 33            [ 6] 6417 	inc	sp
   83D1 C5            [11] 6418 	push	bc
   83D2 33            [ 6] 6419 	inc	sp
   83D3 21 00 C0      [10] 6420 	ld	hl, #0xc000
   83D6 E5            [11] 6421 	push	hl
   83D7 CD CF 5D      [17] 6422 	call	_cpct_getScreenPtr
                           6423 ;src/main.c:1452: cpct_drawSpriteMaskedAlignedTable(g_magic_0, 
   83DA 01 00 01      [10] 6424 	ld	bc, #_g_maskTable
   83DD C5            [11] 6425 	push	bc
   83DE 01 04 08      [10] 6426 	ld	bc, #0x0804
   83E1 C5            [11] 6427 	push	bc
   83E2 E5            [11] 6428 	push	hl
   83E3 21 01 16      [10] 6429 	ld	hl, #_g_magic_0
   83E6 E5            [11] 6430 	push	hl
   83E7 CD E5 5D      [17] 6431 	call	_cpct_drawSpriteMaskedAlignedTable
                           6432 ;src/main.c:1454: if (TwoPlayers) {
   83EA 3A D4 5E      [13] 6433 	ld	a,(#_TwoPlayers + 0)
   83ED B7            [ 4] 6434 	or	a, a
   83EE 28 26         [12] 6435 	jr	Z,00107$
                           6436 ;src/main.c:1455: spr[1].x --;
   83F0 21 1B 5F      [10] 6437 	ld	hl, #(_spr + 0x0011) + 0
   83F3 46            [ 7] 6438 	ld	b, (hl)
   83F4 05            [ 4] 6439 	dec	b
   83F5 21 1B 5F      [10] 6440 	ld	hl, #(_spr + 0x0011)
   83F8 70            [ 7] 6441 	ld	(hl), b
                           6442 ;src/main.c:1457: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, 125), SHT_W, SHT_H, g_maskTable);
   83F9 3E 7D         [ 7] 6443 	ld	a, #0x7d
   83FB F5            [11] 6444 	push	af
   83FC 33            [ 6] 6445 	inc	sp
   83FD C5            [11] 6446 	push	bc
   83FE 33            [ 6] 6447 	inc	sp
   83FF 21 00 C0      [10] 6448 	ld	hl, #0xc000
   8402 E5            [11] 6449 	push	hl
   8403 CD CF 5D      [17] 6450 	call	_cpct_getScreenPtr
                           6451 ;src/main.c:1456: cpct_drawSpriteMaskedAlignedTable(g_magic_1, 
   8406 01 00 01      [10] 6452 	ld	bc, #_g_maskTable
   8409 C5            [11] 6453 	push	bc
   840A 01 04 08      [10] 6454 	ld	bc, #0x0804
   840D C5            [11] 6455 	push	bc
   840E E5            [11] 6456 	push	hl
   840F 21 21 16      [10] 6457 	ld	hl, #_g_magic_1
   8412 E5            [11] 6458 	push	hl
   8413 CD E5 5D      [17] 6459 	call	_cpct_drawSpriteMaskedAlignedTable
   8416                    6460 00107$:
                           6461 ;src/main.c:1459: Pause(12);
   8416 21 0C 00      [10] 6462 	ld	hl, #0x000c
   8419 CD 81 61      [17] 6463 	call	_Pause
                           6464 ;src/main.c:1462: cpct_px2byteM0(4, 4), OBJ_W, OBJ_H);
   841C 21 04 04      [10] 6465 	ld	hl, #0x0404
   841F E5            [11] 6466 	push	hl
   8420 CD B3 5C      [17] 6467 	call	_cpct_px2byteM0
   8423 4D            [ 4] 6468 	ld	c, l
   8424 06 00         [ 7] 6469 	ld	b, #0x00
                           6470 ;src/main.c:1461: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, spr[0].x, 125), 
   8426 21 0C 5F      [10] 6471 	ld	hl, #(_spr + 0x0002) + 0
   8429 5E            [ 7] 6472 	ld	e, (hl)
   842A 21 B0 EC      [10] 6473 	ld	hl, #0xecb0
   842D 16 00         [ 7] 6474 	ld	d, #0x00
   842F 19            [11] 6475 	add	hl, de
   8430 11 04 08      [10] 6476 	ld	de, #0x0804
   8433 D5            [11] 6477 	push	de
   8434 C5            [11] 6478 	push	bc
   8435 E5            [11] 6479 	push	hl
   8436 CD ED 5C      [17] 6480 	call	_cpct_drawSolidBox
                           6481 ;src/main.c:1463: if (TwoPlayers)
   8439 3A D4 5E      [13] 6482 	ld	a,(#_TwoPlayers + 0)
   843C B7            [ 4] 6483 	or	a, a
   843D CA BD 83      [10] 6484 	jp	Z, 00110$
                           6485 ;src/main.c:1465: cpct_px2byteM0(4, 4), OBJ_W, OBJ_H);
   8440 21 04 04      [10] 6486 	ld	hl, #0x0404
   8443 E5            [11] 6487 	push	hl
   8444 CD B3 5C      [17] 6488 	call	_cpct_px2byteM0
   8447 4D            [ 4] 6489 	ld	c, l
   8448 06 00         [ 7] 6490 	ld	b, #0x00
                           6491 ;src/main.c:1464: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, spr[1].x, 125), 
   844A 21 1B 5F      [10] 6492 	ld	hl, #(_spr + 0x0011) + 0
   844D 5E            [ 7] 6493 	ld	e, (hl)
   844E 21 B0 EC      [10] 6494 	ld	hl, #0xecb0
   8451 16 00         [ 7] 6495 	ld	d, #0x00
   8453 19            [11] 6496 	add	hl, de
   8454 11 04 08      [10] 6497 	ld	de, #0x0804
   8457 D5            [11] 6498 	push	de
   8458 C5            [11] 6499 	push	bc
   8459 E5            [11] 6500 	push	hl
   845A CD ED 5C      [17] 6501 	call	_cpct_drawSolidBox
   845D C3 BD 83      [10] 6502 	jp	00110$
   8460                    6503 00112$:
                           6504 ;src/main.c:1469: spr[0].x = 23;
   8460 21 0C 5F      [10] 6505 	ld	hl, #(_spr + 0x0002)
   8463 36 17         [10] 6506 	ld	(hl), #0x17
                           6507 ;src/main.c:1471: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   8465 21 0D 5F      [10] 6508 	ld	hl, #(_spr + 0x0003) + 0
   8468 46            [ 7] 6509 	ld	b, (hl)
   8469 21 0C 5F      [10] 6510 	ld	hl, #(_spr + 0x0002) + 0
   846C 4E            [ 7] 6511 	ld	c, (hl)
   846D C5            [11] 6512 	push	bc
   846E 21 00 C0      [10] 6513 	ld	hl, #0xc000
   8471 E5            [11] 6514 	push	hl
   8472 CD CF 5D      [17] 6515 	call	_cpct_getScreenPtr
                           6516 ;src/main.c:1470: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06, 
   8475 01 00 01      [10] 6517 	ld	bc, #_g_maskTable
   8478 C5            [11] 6518 	push	bc
   8479 01 05 0C      [10] 6519 	ld	bc, #0x0c05
   847C C5            [11] 6520 	push	bc
   847D E5            [11] 6521 	push	hl
   847E 21 D7 2D      [10] 6522 	ld	hl, #_g_sorcerer1_06
   8481 E5            [11] 6523 	push	hl
   8482 CD E5 5D      [17] 6524 	call	_cpct_drawSpriteMaskedAlignedTable
                           6525 ;src/main.c:1472: spr[1].x = 53;
   8485 21 1B 5F      [10] 6526 	ld	hl, #(_spr + 0x0011)
   8488 36 35         [10] 6527 	ld	(hl), #0x35
                           6528 ;src/main.c:1474: if (TwoPlayers) {
   848A 3A D4 5E      [13] 6529 	ld	a,(#_TwoPlayers + 0)
   848D B7            [ 4] 6530 	or	a, a
   848E 28 20         [12] 6531 	jr	Z,00114$
                           6532 ;src/main.c:1476: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   8490 21 1C 5F      [10] 6533 	ld	hl, #(_spr + 0x0012) + 0
   8493 46            [ 7] 6534 	ld	b, (hl)
   8494 21 1B 5F      [10] 6535 	ld	hl, #(_spr + 0x0011) + 0
   8497 4E            [ 7] 6536 	ld	c, (hl)
   8498 C5            [11] 6537 	push	bc
   8499 21 00 C0      [10] 6538 	ld	hl, #0xc000
   849C E5            [11] 6539 	push	hl
   849D CD CF 5D      [17] 6540 	call	_cpct_getScreenPtr
                           6541 ;src/main.c:1475: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_04, 
   84A0 01 07 2B      [10] 6542 	ld	bc, #_g_sorcerer2_04+0
   84A3 11 00 01      [10] 6543 	ld	de, #_g_maskTable
   84A6 D5            [11] 6544 	push	de
   84A7 11 05 0C      [10] 6545 	ld	de, #0x0c05
   84AA D5            [11] 6546 	push	de
   84AB E5            [11] 6547 	push	hl
   84AC C5            [11] 6548 	push	bc
   84AD CD E5 5D      [17] 6549 	call	_cpct_drawSpriteMaskedAlignedTable
   84B0                    6550 00114$:
                           6551 ;src/main.c:1480: if (potScore[0] > potScore[1]) {
   84B0 21 DB 5E      [10] 6552 	ld	hl, #_potScore+0
   84B3 4E            [ 7] 6553 	ld	c, (hl)
   84B4 23            [ 6] 6554 	inc	hl
   84B5 5E            [ 7] 6555 	ld	e, (hl)
   84B6 7B            [ 4] 6556 	ld	a, e
   84B7 91            [ 4] 6557 	sub	a, c
   84B8 D2 38 85      [10] 6558 	jp	NC, 00126$
                           6559 ;src/main.c:1481: loser = 1;
   84BB DD 36 FD 01   [19] 6560 	ld	-3 (ix), #0x01
                           6561 ;src/main.c:1482: ExplodePlayerInDuel(loser);
   84BF 2E 01         [ 7] 6562 	ld	l, #0x01
   84C1 CD 2D 82      [17] 6563 	call	_ExplodePlayerInDuel
                           6564 ;src/main.c:1427: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   84C4 21 1C 5F      [10] 6565 	ld	hl, #(_spr + 0x0012) + 0
   84C7 4E            [ 7] 6566 	ld	c, (hl)
   84C8 21 1B 5F      [10] 6567 	ld	hl, #(_spr + 0x0011) + 0
   84CB 5E            [ 7] 6568 	ld	e, (hl)
                           6569 ;src/main.c:1483: if (TwoPlayers) {
   84CC 3A D4 5E      [13] 6570 	ld	a,(#_TwoPlayers + 0)
   84CF B7            [ 4] 6571 	or	a, a
   84D0 28 39         [12] 6572 	jr	Z,00118$
                           6573 ;src/main.c:1486: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   84D2 51            [ 4] 6574 	ld	d, c
   84D3 D5            [11] 6575 	push	de
   84D4 21 00 C0      [10] 6576 	ld	hl, #0xc000
   84D7 E5            [11] 6577 	push	hl
   84D8 CD CF 5D      [17] 6578 	call	_cpct_getScreenPtr
                           6579 ;src/main.c:1485: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_09, 
   84DB 01 33 2C      [10] 6580 	ld	bc, #_g_sorcerer2_09+0
   84DE 11 00 01      [10] 6581 	ld	de, #_g_maskTable
   84E1 D5            [11] 6582 	push	de
   84E2 11 05 0C      [10] 6583 	ld	de, #0x0c05
   84E5 D5            [11] 6584 	push	de
   84E6 E5            [11] 6585 	push	hl
   84E7 C5            [11] 6586 	push	bc
   84E8 CD E5 5D      [17] 6587 	call	_cpct_drawSpriteMaskedAlignedTable
                           6588 ;src/main.c:1487: PrintText("PLAYER1", 30, 90, 0);
   84EB 21 5A 00      [10] 6589 	ld	hl, #0x005a
   84EE E5            [11] 6590 	push	hl
   84EF 3E 1E         [ 7] 6591 	ld	a, #0x1e
   84F1 F5            [11] 6592 	push	af
   84F2 33            [ 6] 6593 	inc	sp
   84F3 21 2A 86      [10] 6594 	ld	hl, #___str_17
   84F6 E5            [11] 6595 	push	hl
   84F7 CD 10 63      [17] 6596 	call	_PrintText
   84FA F1            [10] 6597 	pop	af
   84FB F1            [10] 6598 	pop	af
   84FC 33            [ 6] 6599 	inc	sp
                           6600 ;src/main.c:1490: if (spr[0].lives_speed < 9) spr[0].lives_speed++;
   84FD 01 15 5F      [10] 6601 	ld	bc, #_spr + 11
   8500 0A            [ 7] 6602 	ld	a, (bc)
   8501 FE 09         [ 7] 6603 	cp	a, #0x09
   8503 D2 99 85      [10] 6604 	jp	NC, 00127$
   8506 3C            [ 4] 6605 	inc	a
   8507 02            [ 7] 6606 	ld	(bc), a
   8508 C3 99 85      [10] 6607 	jp	00127$
   850B                    6608 00118$:
                           6609 ;src/main.c:1495: cpct_getScreenPtr(CPCT_VMEM_START, spr[1].x, spr[1].y), SPR_W, SPR_H, g_maskTable);
   850B 51            [ 4] 6610 	ld	d, c
   850C D5            [11] 6611 	push	de
   850D 21 00 C0      [10] 6612 	ld	hl, #0xc000
   8510 E5            [11] 6613 	push	hl
   8511 CD CF 5D      [17] 6614 	call	_cpct_getScreenPtr
                           6615 ;src/main.c:1494: cpct_drawSpriteMaskedAlignedTable(g_door_1, 
   8514 01 C3 23      [10] 6616 	ld	bc, #_g_door_1+0
   8517 11 00 01      [10] 6617 	ld	de, #_g_maskTable
   851A D5            [11] 6618 	push	de
   851B 11 05 0C      [10] 6619 	ld	de, #0x0c05
   851E D5            [11] 6620 	push	de
   851F E5            [11] 6621 	push	hl
   8520 C5            [11] 6622 	push	bc
   8521 CD E5 5D      [17] 6623 	call	_cpct_drawSpriteMaskedAlignedTable
                           6624 ;src/main.c:1496: PrintText("LEVEL", 33, 90, 0);
   8524 21 5A 00      [10] 6625 	ld	hl, #0x005a
   8527 E5            [11] 6626 	push	hl
   8528 3E 21         [ 7] 6627 	ld	a, #0x21
   852A F5            [11] 6628 	push	af
   852B 33            [ 6] 6629 	inc	sp
   852C 21 32 86      [10] 6630 	ld	hl, #___str_18
   852F E5            [11] 6631 	push	hl
   8530 CD 10 63      [17] 6632 	call	_PrintText
   8533 F1            [10] 6633 	pop	af
   8534 F1            [10] 6634 	pop	af
   8535 33            [ 6] 6635 	inc	sp
   8536 18 61         [12] 6636 	jr	00127$
   8538                    6637 00126$:
                           6638 ;src/main.c:1500: else if (potScore[0] < potScore[1]) {
   8538 79            [ 4] 6639 	ld	a, c
   8539 93            [ 4] 6640 	sub	a, e
   853A 30 47         [12] 6641 	jr	NC,00123$
                           6642 ;src/main.c:1501: loser = 0;
   853C DD 36 FD 00   [19] 6643 	ld	-3 (ix), #0x00
                           6644 ;src/main.c:1502: ExplodePlayerInDuel(loser);
   8540 2E 00         [ 7] 6645 	ld	l, #0x00
   8542 CD 2D 82      [17] 6646 	call	_ExplodePlayerInDuel
                           6647 ;src/main.c:1505: cpct_getScreenPtr(CPCT_VMEM_START, spr[0].x, spr[0].y), SPR_W, SPR_H, g_maskTable);
   8545 21 0D 5F      [10] 6648 	ld	hl, #(_spr + 0x0003) + 0
   8548 56            [ 7] 6649 	ld	d, (hl)
   8549 21 0C 5F      [10] 6650 	ld	hl, #(_spr + 0x0002) + 0
   854C 5E            [ 7] 6651 	ld	e, (hl)
   854D D5            [11] 6652 	push	de
   854E 21 00 C0      [10] 6653 	ld	hl, #0xc000
   8551 E5            [11] 6654 	push	hl
   8552 CD CF 5D      [17] 6655 	call	_cpct_getScreenPtr
                           6656 ;src/main.c:1504: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_09, 
   8555 01 8B 2E      [10] 6657 	ld	bc, #_g_sorcerer1_09+0
   8558 11 00 01      [10] 6658 	ld	de, #_g_maskTable
   855B D5            [11] 6659 	push	de
   855C 11 05 0C      [10] 6660 	ld	de, #0x0c05
   855F D5            [11] 6661 	push	de
   8560 E5            [11] 6662 	push	hl
   8561 C5            [11] 6663 	push	bc
   8562 CD E5 5D      [17] 6664 	call	_cpct_drawSpriteMaskedAlignedTable
                           6665 ;src/main.c:1506: PrintText("PLAYER2", 30, 90, 0);
   8565 21 5A 00      [10] 6666 	ld	hl, #0x005a
   8568 E5            [11] 6667 	push	hl
   8569 3E 1E         [ 7] 6668 	ld	a, #0x1e
   856B F5            [11] 6669 	push	af
   856C 33            [ 6] 6670 	inc	sp
   856D 21 38 86      [10] 6671 	ld	hl, #___str_19
   8570 E5            [11] 6672 	push	hl
   8571 CD 10 63      [17] 6673 	call	_PrintText
   8574 F1            [10] 6674 	pop	af
   8575 F1            [10] 6675 	pop	af
   8576 33            [ 6] 6676 	inc	sp
                           6677 ;src/main.c:1509: if (spr[1].lives_speed < 9) spr[1].lives_speed++;
   8577 01 24 5F      [10] 6678 	ld	bc, #_spr + 26
   857A 0A            [ 7] 6679 	ld	a, (bc)
   857B FE 09         [ 7] 6680 	cp	a, #0x09
   857D 30 1A         [12] 6681 	jr	NC,00127$
   857F 3C            [ 4] 6682 	inc	a
   8580 02            [ 7] 6683 	ld	(bc), a
   8581 18 16         [12] 6684 	jr	00127$
   8583                    6685 00123$:
                           6686 ;src/main.c:1513: PrintText("NOBODY", 32, 90, 0);
   8583 01 40 86      [10] 6687 	ld	bc, #___str_20
   8586 21 5A 00      [10] 6688 	ld	hl, #0x005a
   8589 E5            [11] 6689 	push	hl
   858A 3E 20         [ 7] 6690 	ld	a, #0x20
   858C F5            [11] 6691 	push	af
   858D 33            [ 6] 6692 	inc	sp
   858E C5            [11] 6693 	push	bc
   858F CD 10 63      [17] 6694 	call	_PrintText
   8592 F1            [10] 6695 	pop	af
   8593 F1            [10] 6696 	pop	af
   8594 33            [ 6] 6697 	inc	sp
                           6698 ;src/main.c:1514: loser = 2;
   8595 DD 36 FD 02   [19] 6699 	ld	-3 (ix), #0x02
   8599                    6700 00127$:
                           6701 ;src/main.c:1516: if (TwoPlayers)
   8599 3A D4 5E      [13] 6702 	ld	a,(#_TwoPlayers + 0)
   859C B7            [ 4] 6703 	or	a, a
   859D 28 14         [12] 6704 	jr	Z,00129$
                           6705 ;src/main.c:1517: PrintText("WINS>", 33, 101, 0);
   859F 21 65 00      [10] 6706 	ld	hl, #0x0065
   85A2 E5            [11] 6707 	push	hl
   85A3 3E 21         [ 7] 6708 	ld	a, #0x21
   85A5 F5            [11] 6709 	push	af
   85A6 33            [ 6] 6710 	inc	sp
   85A7 21 47 86      [10] 6711 	ld	hl, #___str_21
   85AA E5            [11] 6712 	push	hl
   85AB CD 10 63      [17] 6713 	call	_PrintText
   85AE F1            [10] 6714 	pop	af
   85AF F1            [10] 6715 	pop	af
   85B0 33            [ 6] 6716 	inc	sp
   85B1 18 12         [12] 6717 	jr	00130$
   85B3                    6718 00129$:
                           6719 ;src/main.c:1519: PrintText("COMPLETED", 27, 101, 0);	
   85B3 21 65 00      [10] 6720 	ld	hl, #0x0065
   85B6 E5            [11] 6721 	push	hl
   85B7 3E 1B         [ 7] 6722 	ld	a, #0x1b
   85B9 F5            [11] 6723 	push	af
   85BA 33            [ 6] 6724 	inc	sp
   85BB 21 4D 86      [10] 6725 	ld	hl, #___str_22
   85BE E5            [11] 6726 	push	hl
   85BF CD 10 63      [17] 6727 	call	_PrintText
   85C2 F1            [10] 6728 	pop	af
   85C3 F1            [10] 6729 	pop	af
   85C4 33            [ 6] 6730 	inc	sp
   85C5                    6731 00130$:
                           6732 ;src/main.c:1521: cpct_akp_musicInit(g_completed); // level completed music
   85C5 21 9E 04      [10] 6733 	ld	hl, #_g_completed
   85C8 E5            [11] 6734 	push	hl
   85C9 CD 48 59      [17] 6735 	call	_cpct_akp_musicInit
   85CC F1            [10] 6736 	pop	af
                           6737 ;src/main.c:1522: Pause(1000);
   85CD 21 E8 03      [10] 6738 	ld	hl, #0x03e8
   85D0 CD 81 61      [17] 6739 	call	_Pause
                           6740 ;src/main.c:1524: if (loser < 2) // if there is no tie
   85D3 DD 7E FD      [19] 6741 	ld	a, -3 (ix)
   85D6 D6 02         [ 7] 6742 	sub	a, #0x02
   85D8 3E 00         [ 7] 6743 	ld	a, #0x00
   85DA 17            [ 4] 6744 	rla
   85DB DD 77 FE      [19] 6745 	ld	-2 (ix), a
   85DE B7            [ 4] 6746 	or	a, a
   85DF 28 04         [12] 6747 	jr	Z,00132$
                           6748 ;src/main.c:1525: nMap++; // go to the next screen on the map
   85E1 21 D0 5E      [10] 6749 	ld	hl, #_nMap+0
   85E4 34            [11] 6750 	inc	(hl)
   85E5                    6751 00132$:
                           6752 ;src/main.c:1527: if (nMap == 12) { // screens are over. End of the game
   85E5 3A D0 5E      [13] 6753 	ld	a,(#_nMap + 0)
   85E8 D6 0C         [ 7] 6754 	sub	a, #0x0c
   85EA 20 12         [12] 6755 	jr	NZ,00137$
                           6756 ;src/main.c:1528: if (loser == 0)		
   85EC DD 7E FD      [19] 6757 	ld	a, -3 (ix)
   85EF B7            [ 4] 6758 	or	a, a
   85F0 20 07         [12] 6759 	jr	NZ,00134$
                           6760 ;src/main.c:1529: PrintEndGame(1); // player 2 wins
   85F2 2E 01         [ 7] 6761 	ld	l, #0x01
   85F4 CD CD 66      [17] 6762 	call	_PrintEndGame
   85F7 18 05         [12] 6763 	jr	00137$
   85F9                    6764 00134$:
                           6765 ;src/main.c:1531: PrintEndGame(0); // player 1 wins
   85F9 2E 00         [ 7] 6766 	ld	l, #0x00
   85FB CD CD 66      [17] 6767 	call	_PrintEndGame
   85FE                    6768 00137$:
                           6769 ;src/main.c:1535: ResetObjData(0);
   85FE 2E 00         [ 7] 6770 	ld	l, #0x00
   8600 CD 66 6B      [17] 6771 	call	_ResetObjData
                           6772 ;src/main.c:1536: ResetObjData(1);
   8603 2E 01         [ 7] 6773 	ld	l, #0x01
   8605 CD 66 6B      [17] 6774 	call	_ResetObjData
                           6775 ;src/main.c:1537: InitScoreboard();
   8608 CD E2 68      [17] 6776 	call	_InitScoreboard
                           6777 ;src/main.c:1539: if (loser < 2 && TwoPlayers)
   860B DD 7E FE      [19] 6778 	ld	a, -2 (ix)
   860E B7            [ 4] 6779 	or	a, a
   860F 28 11         [12] 6780 	jr	Z,00139$
   8611 3A D4 5E      [13] 6781 	ld	a,(#_TwoPlayers + 0)
   8614 B7            [ 4] 6782 	or	a, a
   8615 28 0B         [12] 6783 	jr	Z,00139$
                           6784 ;src/main.c:1540: GameOver(loser); // the player who loses a duel loses a life
   8617 DD 7E FD      [19] 6785 	ld	a, -3 (ix)
   861A F5            [11] 6786 	push	af
   861B 33            [ 6] 6787 	inc	sp
   861C CD 57 A0      [17] 6788 	call	_GameOver
   861F 33            [ 6] 6789 	inc	sp
   8620 18 03         [12] 6790 	jr	00142$
   8622                    6791 00139$:
                           6792 ;src/main.c:1542: ResetData();
   8622 CD 73 9F      [17] 6793 	call	_ResetData
   8625                    6794 00142$:
   8625 DD F9         [10] 6795 	ld	sp, ix
   8627 DD E1         [14] 6796 	pop	ix
   8629 C9            [10] 6797 	ret
   862A                    6798 ___str_17:
   862A 50 4C 41 59 45 52  6799 	.ascii "PLAYER1"
        31
   8631 00                 6800 	.db 0x00
   8632                    6801 ___str_18:
   8632 4C 45 56 45 4C     6802 	.ascii "LEVEL"
   8637 00                 6803 	.db 0x00
   8638                    6804 ___str_19:
   8638 50 4C 41 59 45 52  6805 	.ascii "PLAYER2"
        32
   863F 00                 6806 	.db 0x00
   8640                    6807 ___str_20:
   8640 4E 4F 42 4F 44 59  6808 	.ascii "NOBODY"
   8646 00                 6809 	.db 0x00
   8647                    6810 ___str_21:
   8647 57 49 4E 53 3E     6811 	.ascii "WINS>"
   864C 00                 6812 	.db 0x00
   864D                    6813 ___str_22:
   864D 43 4F 4D 50 4C 45  6814 	.ascii "COMPLETED"
        54 45 44
   8656 00                 6815 	.db 0x00
                           6816 ;src/main.c:1547: void CheckDuel() {
                           6817 ;	---------------------------------
                           6818 ; Function CheckDuel
                           6819 ; ---------------------------------
   8657                    6820 _CheckDuel::
                           6821 ;src/main.c:1548: if ((spr[0].objNum_mov == 5 || spr[1].objNum_mov == 5) && 
   8657 3A 16 5F      [13] 6822 	ld	a, (#_spr + 12)
   865A D6 05         [ 7] 6823 	sub	a, #0x05
   865C 28 06         [12] 6824 	jr	Z,00105$
   865E 3A 25 5F      [13] 6825 	ld	a, (#_spr + 27)
   8661 D6 05         [ 7] 6826 	sub	a, #0x05
   8663 C0            [11] 6827 	ret	NZ
   8664                    6828 00105$:
                           6829 ;src/main.c:1549: SpriteCollision(spr[0].x, spr[0].y, &spr[1], 0)) {				
   8664 21 0D 5F      [10] 6830 	ld	hl, #_spr + 3
   8667 56            [ 7] 6831 	ld	d, (hl)
   8668 21 0C 5F      [10] 6832 	ld	hl, #_spr + 2
   866B 46            [ 7] 6833 	ld	b, (hl)
   866C AF            [ 4] 6834 	xor	a, a
   866D F5            [11] 6835 	push	af
   866E 33            [ 6] 6836 	inc	sp
   866F 21 19 5F      [10] 6837 	ld	hl, #(_spr + 0x000f)
   8672 E5            [11] 6838 	push	hl
   8673 58            [ 4] 6839 	ld	e, b
   8674 D5            [11] 6840 	push	de
   8675 CD 66 7B      [17] 6841 	call	_SpriteCollision
   8678 F1            [10] 6842 	pop	af
   8679 F1            [10] 6843 	pop	af
   867A 33            [ 6] 6844 	inc	sp
   867B 7D            [ 4] 6845 	ld	a, l
   867C B7            [ 4] 6846 	or	a, a
   867D C8            [11] 6847 	ret	Z
                           6848 ;src/main.c:1551: for(u8 i=0;i<6;i++)
   867E 0E 00         [ 7] 6849 	ld	c, #0x00
   8680                    6850 00107$:
   8680 79            [ 4] 6851 	ld	a, c
   8681 D6 06         [ 7] 6852 	sub	a, #0x06
   8683 30 16         [12] 6853 	jr	NC,00101$
                           6854 ;src/main.c:1552: DeleteSprite(&spr[i]);
   8685 06 00         [ 7] 6855 	ld	b,#0x00
   8687 69            [ 4] 6856 	ld	l, c
   8688 60            [ 4] 6857 	ld	h, b
   8689 29            [11] 6858 	add	hl, hl
   868A 09            [11] 6859 	add	hl, bc
   868B 29            [11] 6860 	add	hl, hl
   868C 09            [11] 6861 	add	hl, bc
   868D 29            [11] 6862 	add	hl, hl
   868E 09            [11] 6863 	add	hl, bc
   868F 11 0A 5F      [10] 6864 	ld	de, #_spr
   8692 19            [11] 6865 	add	hl, de
   8693 C5            [11] 6866 	push	bc
   8694 CD 19 77      [17] 6867 	call	_DeleteSprite
   8697 C1            [10] 6868 	pop	bc
                           6869 ;src/main.c:1551: for(u8 i=0;i<6;i++)
   8698 0C            [ 4] 6870 	inc	c
   8699 18 E5         [12] 6871 	jr	00107$
   869B                    6872 00101$:
                           6873 ;src/main.c:1553: DeleteObject(0);
   869B 2E 00         [ 7] 6874 	ld	l, #0x00
   869D CD F3 6B      [17] 6875 	call	_DeleteObject
                           6876 ;src/main.c:1554: DeleteObject(1);
   86A0 2E 01         [ 7] 6877 	ld	l, #0x01
   86A2 CD F3 6B      [17] 6878 	call	_DeleteObject
                           6879 ;src/main.c:1556: MakeDuel();
   86A5 C3 98 82      [10] 6880 	jp  _MakeDuel
                           6881 ;src/main.c:1566: void MakeShot(u8 x, u8 y, u8 dir) {	
                           6882 ;	---------------------------------
                           6883 ; Function MakeShot
                           6884 ; ---------------------------------
   86A8                    6885 _MakeShot::
                           6886 ;src/main.c:1567: if (sht.active == FALSE) { // if there is no active shot...
   86A8 01 73 5F      [10] 6887 	ld	bc, #_sht+0
   86AB 3A 77 5F      [13] 6888 	ld	a, (#(_sht + 0x0004) + 0)
   86AE B7            [ 4] 6889 	or	a, a
   86AF C0            [11] 6890 	ret	NZ
                           6891 ;src/main.c:1568: sht.active = TRUE; // activate it
   86B0 21 77 5F      [10] 6892 	ld	hl, #(_sht + 0x0004)
   86B3 36 01         [10] 6893 	ld	(hl), #0x01
                           6894 ;src/main.c:1569: sht.dir = dir; // the direction of the shot is that of the sprite that shoots
   86B5 21 76 5F      [10] 6895 	ld	hl, #(_sht + 0x0003)
   86B8 FD 21 04 00   [14] 6896 	ld	iy, #4
   86BC FD 39         [15] 6897 	add	iy, sp
   86BE FD 7E 00      [19] 6898 	ld	a, 0 (iy)
   86C1 77            [ 7] 6899 	ld	(hl), a
                           6900 ;src/main.c:1570: sht.y = y + 5; // adjusts to the height of the gun (hand)
   86C2 59            [ 4] 6901 	ld	e, c
   86C3 50            [ 4] 6902 	ld	d, b
   86C4 13            [ 6] 6903 	inc	de
   86C5 21 03 00      [10] 6904 	ld	hl, #3+0
   86C8 39            [11] 6905 	add	hl, sp
   86C9 7E            [ 7] 6906 	ld	a, (hl)
   86CA C6 05         [ 7] 6907 	add	a, #0x05
   86CC 12            [ 7] 6908 	ld	(de), a
                           6909 ;src/main.c:1572: if (sht.dir == D_right) sht.x = x + SPR_W;
   86CD 21 04 00      [10] 6910 	ld	hl, #4+0
   86D0 39            [11] 6911 	add	hl, sp
   86D1 7E            [ 7] 6912 	ld	a, (hl)
   86D2 D6 03         [ 7] 6913 	sub	a, #0x03
   86D4 20 0A         [12] 6914 	jr	NZ,00102$
   86D6 21 02 00      [10] 6915 	ld	hl, #2+0
   86D9 39            [11] 6916 	add	hl, sp
   86DA 7E            [ 7] 6917 	ld	a, (hl)
   86DB C6 05         [ 7] 6918 	add	a, #0x05
   86DD 02            [ 7] 6919 	ld	(bc), a
   86DE 18 08         [12] 6920 	jr	00103$
   86E0                    6921 00102$:
                           6922 ;src/main.c:1573: else sht.x = x - SHT_W;
   86E0 21 02 00      [10] 6923 	ld	hl, #2+0
   86E3 39            [11] 6924 	add	hl, sp
   86E4 7E            [ 7] 6925 	ld	a, (hl)
   86E5 C6 FC         [ 7] 6926 	add	a, #0xfc
   86E7 02            [ 7] 6927 	ld	(bc), a
   86E8                    6928 00103$:
                           6929 ;src/main.c:1574: cpct_akp_SFXPlay (6, 12, 65, 0, 0, AY_CHANNEL_B); // shot sound
   86E8 3E 02         [ 7] 6930 	ld	a, #0x02
   86EA F5            [11] 6931 	push	af
   86EB 33            [ 6] 6932 	inc	sp
   86EC 21 00 00      [10] 6933 	ld	hl, #0x0000
   86EF E5            [11] 6934 	push	hl
   86F0 2E 41         [ 7] 6935 	ld	l, #0x41
   86F2 E5            [11] 6936 	push	hl
   86F3 21 06 0C      [10] 6937 	ld	hl, #0x0c06
   86F6 E5            [11] 6938 	push	hl
   86F7 CD EF 59      [17] 6939 	call	_cpct_akp_SFXPlay
   86FA 21 07 00      [10] 6940 	ld	hl, #7
   86FD 39            [11] 6941 	add	hl, sp
   86FE F9            [ 6] 6942 	ld	sp, hl
   86FF C9            [10] 6943 	ret
                           6944 ;src/main.c:1580: void DeleteShot() {
                           6945 ;	---------------------------------
                           6946 ; Function DeleteShot
                           6947 ; ---------------------------------
   8700                    6948 _DeleteShot::
   8700 DD E5         [15] 6949 	push	ix
   8702 DD 21 00 00   [14] 6950 	ld	ix,#0
   8706 DD 39         [15] 6951 	add	ix,sp
   8708 F5            [11] 6952 	push	af
   8709 3B            [ 6] 6953 	dec	sp
                           6954 ;src/main.c:1582: 2 + (sht.px & 1), 2 + (sht.y & 3 ? 1 : 0), 
   870A 21 74 5F      [10] 6955 	ld	hl, #_sht + 1
   870D 4E            [ 7] 6956 	ld	c, (hl)
   870E 79            [ 4] 6957 	ld	a, c
   870F E6 03         [ 7] 6958 	and	a, #0x03
   8711 28 04         [12] 6959 	jr	Z,00103$
   8713 16 01         [ 7] 6960 	ld	d, #0x01
   8715 18 02         [12] 6961 	jr	00104$
   8717                    6962 00103$:
   8717 16 00         [ 7] 6963 	ld	d, #0x00
   8719                    6964 00104$:
   8719 14            [ 4] 6965 	inc	d
   871A 14            [ 4] 6966 	inc	d
   871B 21 75 5F      [10] 6967 	ld	hl, #_sht + 2
   871E 5E            [ 7] 6968 	ld	e, (hl)
   871F 7B            [ 4] 6969 	ld	a, e
   8720 E6 01         [ 7] 6970 	and	a, #0x01
   8722 C6 02         [ 7] 6971 	add	a, #0x02
   8724 DD 77 FF      [19] 6972 	ld	-1 (ix), a
                           6973 ;src/main.c:1581: cpct_etm_drawTileBox2x4(sht.px / 2, (sht.y - ORIG_MAP_Y) / 4, 
   8727 06 00         [ 7] 6974 	ld	b, #0x00
   8729 79            [ 4] 6975 	ld	a, c
   872A C6 E0         [ 7] 6976 	add	a, #0xe0
   872C DD 77 FD      [19] 6977 	ld	-3 (ix), a
   872F 78            [ 4] 6978 	ld	a, b
   8730 CE FF         [ 7] 6979 	adc	a, #0xff
   8732 DD 77 FE      [19] 6980 	ld	-2 (ix), a
   8735 E1            [10] 6981 	pop	hl
   8736 E5            [11] 6982 	push	hl
   8737 DD CB FE 7E   [20] 6983 	bit	7, -2 (ix)
   873B 28 04         [12] 6984 	jr	Z,00105$
   873D 21 E3 FF      [10] 6985 	ld	hl, #0xffe3
   8740 09            [11] 6986 	add	hl, bc
   8741                    6987 00105$:
   8741 CB 2C         [ 8] 6988 	sra	h
   8743 CB 1D         [ 8] 6989 	rr	l
   8745 CB 2C         [ 8] 6990 	sra	h
   8747 CB 1D         [ 8] 6991 	rr	l
   8749 4D            [ 4] 6992 	ld	c, l
   874A CB 3B         [ 8] 6993 	srl	e
   874C 21 71 0F      [10] 6994 	ld	hl, #0x0f71
   874F E5            [11] 6995 	push	hl
   8750 21 40 C1      [10] 6996 	ld	hl, #0xc140
   8753 E5            [11] 6997 	push	hl
   8754 3E 28         [ 7] 6998 	ld	a, #0x28
   8756 F5            [11] 6999 	push	af
   8757 33            [ 6] 7000 	inc	sp
   8758 D5            [11] 7001 	push	de
   8759 33            [ 6] 7002 	inc	sp
   875A DD 7E FF      [19] 7003 	ld	a, -1 (ix)
   875D F5            [11] 7004 	push	af
   875E 33            [ 6] 7005 	inc	sp
   875F 51            [ 4] 7006 	ld	d, c
   8760 D5            [11] 7007 	push	de
   8761 CD 11 5B      [17] 7008 	call	_cpct_etm_drawTileBox2x4
   8764 DD F9         [10] 7009 	ld	sp, ix
   8766 DD E1         [14] 7010 	pop	ix
   8768 C9            [10] 7011 	ret
                           7012 ;src/main.c:1587: void PrintShot(u8* magic) __z88dk_fastcall {
                           7013 ;	---------------------------------
                           7014 ; Function PrintShot
                           7015 ; ---------------------------------
   8769                    7016 _PrintShot::
                           7017 ;src/main.c:1588: DeleteShot(); // delete the previous shot
   8769 E5            [11] 7018 	push	hl
   876A CD 00 87      [17] 7019 	call	_DeleteShot
   876D C1            [10] 7020 	pop	bc
                           7021 ;src/main.c:1589: if (!sht.active) return; // outside the margins. no need to print
   876E 3A 77 5F      [13] 7022 	ld	a, (#_sht + 4)
   8771 B7            [ 4] 7023 	or	a, a
   8772 C8            [11] 7024 	ret	Z
                           7025 ;src/main.c:1591: SHT_W, SHT_H, g_maskTable);
                           7026 ;src/main.c:1590: cpct_drawSpriteMaskedAlignedTable(magic, cpct_getScreenPtr(CPCT_VMEM_START, sht.x, sht.y), 
   8773 21 74 5F      [10] 7027 	ld	hl, #_sht + 1
   8776 56            [ 7] 7028 	ld	d, (hl)
   8777 3A 73 5F      [13] 7029 	ld	a, (#_sht + 0)
   877A C5            [11] 7030 	push	bc
   877B 5F            [ 4] 7031 	ld	e, a
   877C D5            [11] 7032 	push	de
   877D 21 00 C0      [10] 7033 	ld	hl, #0xc000
   8780 E5            [11] 7034 	push	hl
   8781 CD CF 5D      [17] 7035 	call	_cpct_getScreenPtr
   8784 C1            [10] 7036 	pop	bc
   8785 11 00 01      [10] 7037 	ld	de, #_g_maskTable
   8788 D5            [11] 7038 	push	de
   8789 11 04 08      [10] 7039 	ld	de, #0x0804
   878C D5            [11] 7040 	push	de
   878D E5            [11] 7041 	push	hl
   878E C5            [11] 7042 	push	bc
   878F CD E5 5D      [17] 7043 	call	_cpct_drawSpriteMaskedAlignedTable
   8792 C9            [10] 7044 	ret
                           7045 ;src/main.c:1596: void MoveShot() {
                           7046 ;	---------------------------------
                           7047 ; Function MoveShot
                           7048 ; ---------------------------------
   8793                    7049 _MoveShot::
                           7050 ;src/main.c:1597: sht.px = sht.x; // save the current X coordinate
   8793 01 73 5F      [10] 7051 	ld	bc, #_sht+0
   8796 0A            [ 7] 7052 	ld	a, (bc)
   8797 32 75 5F      [13] 7053 	ld	(#(_sht + 0x0002)),a
                           7054 ;src/main.c:1599: if (sht.dir == D_right)	sht.x++; else sht.x--;
   879A 21 76 5F      [10] 7055 	ld	hl, #_sht + 3
   879D 56            [ 7] 7056 	ld	d, (hl)
                           7057 ;src/main.c:1597: sht.px = sht.x; // save the current X coordinate
   879E 0A            [ 7] 7058 	ld	a, (bc)
   879F 5F            [ 4] 7059 	ld	e, a
                           7060 ;src/main.c:1599: if (sht.dir == D_right)	sht.x++; else sht.x--;
   87A0 7A            [ 4] 7061 	ld	a, d
   87A1 D6 03         [ 7] 7062 	sub	a, #0x03
   87A3 20 05         [12] 7063 	jr	NZ,00102$
   87A5 1C            [ 4] 7064 	inc	e
   87A6 7B            [ 4] 7065 	ld	a, e
   87A7 02            [ 7] 7066 	ld	(bc), a
   87A8 18 03         [12] 7067 	jr	00103$
   87AA                    7068 00102$:
   87AA 1D            [ 4] 7069 	dec	e
   87AB 7B            [ 4] 7070 	ld	a, e
   87AC 02            [ 7] 7071 	ld	(bc), a
   87AD                    7072 00103$:
                           7073 ;src/main.c:1597: sht.px = sht.x; // save the current X coordinate
   87AD 0A            [ 7] 7074 	ld	a, (bc)
   87AE 5F            [ 4] 7075 	ld	e, a
                           7076 ;src/main.c:1601: if (sht.x + SHT_W >= GLOBAL_MAX_X || sht.x <= 0) {
   87AF 6B            [ 4] 7077 	ld	l, e
   87B0 26 00         [ 7] 7078 	ld	h, #0x00
   87B2 23            [ 6] 7079 	inc	hl
   87B3 23            [ 6] 7080 	inc	hl
   87B4 23            [ 6] 7081 	inc	hl
   87B5 23            [ 6] 7082 	inc	hl
   87B6 7D            [ 4] 7083 	ld	a, l
   87B7 D6 50         [ 7] 7084 	sub	a, #0x50
   87B9 7C            [ 4] 7085 	ld	a, h
   87BA 17            [ 4] 7086 	rla
   87BB 3F            [ 4] 7087 	ccf
   87BC 1F            [ 4] 7088 	rra
   87BD DE 80         [ 7] 7089 	sbc	a, #0x80
   87BF 30 03         [12] 7090 	jr	NC,00104$
   87C1 7B            [ 4] 7091 	ld	a, e
   87C2 B7            [ 4] 7092 	or	a, a
   87C3 C0            [11] 7093 	ret	NZ
   87C4                    7094 00104$:
                           7095 ;src/main.c:1602: sht.active = FALSE;
   87C4 21 77 5F      [10] 7096 	ld	hl, #(_sht + 0x0004)
   87C7 36 00         [10] 7097 	ld	(hl), #0x00
                           7098 ;src/main.c:1603: DeleteShot();
   87C9 C3 00 87      [10] 7099 	jp  _DeleteShot
                           7100 ;src/main.c:1613: void PrintWizard(u8 shooting) __z88dk_fastcall {
                           7101 ;	---------------------------------
                           7102 ; Function PrintWizard
                           7103 ; ---------------------------------
   87CC                    7104 _PrintWizard::
   87CC 4D            [ 4] 7105 	ld	c, l
                           7106 ;src/main.c:1615: u8 x = 0;
   87CD 1E 00         [ 7] 7107 	ld	e, #0x00
                           7108 ;src/main.c:1617: if (spr[6].dir == D_left) { // on the right bank facing left
   87CF 3A 6B 5F      [13] 7109 	ld	a, (#_spr + 97)
                           7110 ;src/main.c:1618: if (shooting) wizard = g_wizard_1;
   87D2 D6 02         [ 7] 7111 	sub	a,#0x02
   87D4 20 0F         [12] 7112 	jr	NZ,00108$
   87D6 B1            [ 4] 7113 	or	a,c
   87D7 28 05         [12] 7114 	jr	Z,00102$
   87D9 01 E3 21      [10] 7115 	ld	bc, #_g_wizard_1+0
   87DC 18 03         [12] 7116 	jr	00103$
   87DE                    7117 00102$:
                           7118 ;src/main.c:1619: else wizard = g_wizard_0;
   87DE 01 A7 21      [10] 7119 	ld	bc, #_g_wizard_0
   87E1                    7120 00103$:
                           7121 ;src/main.c:1620: x = 75;
   87E1 1E 4B         [ 7] 7122 	ld	e, #0x4b
   87E3 18 0C         [12] 7123 	jr	00109$
   87E5                    7124 00108$:
                           7125 ;src/main.c:1623: if (shooting) wizard = g_wizard_3; 
   87E5 79            [ 4] 7126 	ld	a, c
   87E6 B7            [ 4] 7127 	or	a, a
   87E7 28 05         [12] 7128 	jr	Z,00105$
   87E9 01 5B 22      [10] 7129 	ld	bc, #_g_wizard_3
   87EC 18 03         [12] 7130 	jr	00109$
   87EE                    7131 00105$:
                           7132 ;src/main.c:1624: else wizard = g_wizard_2;
   87EE 01 1F 22      [10] 7133 	ld	bc, #_g_wizard_2
   87F1                    7134 00109$:
                           7135 ;src/main.c:1628: SPR_W, SPR_H, g_maskTable); 							
                           7136 ;src/main.c:1627: cpct_drawSpriteMaskedAlignedTable(wizard, cpct_getScreenPtr(CPCT_VMEM_START, x, spr[6].y), 
   87F1 21 67 5F      [10] 7137 	ld	hl, #_spr + 93
   87F4 56            [ 7] 7138 	ld	d, (hl)
   87F5 C5            [11] 7139 	push	bc
   87F6 D5            [11] 7140 	push	de
   87F7 21 00 C0      [10] 7141 	ld	hl, #0xc000
   87FA E5            [11] 7142 	push	hl
   87FB CD CF 5D      [17] 7143 	call	_cpct_getScreenPtr
   87FE C1            [10] 7144 	pop	bc
   87FF 11 00 01      [10] 7145 	ld	de, #_g_maskTable
   8802 D5            [11] 7146 	push	de
   8803 11 05 0C      [10] 7147 	ld	de, #0x0c05
   8806 D5            [11] 7148 	push	de
   8807 E5            [11] 7149 	push	hl
   8808 C5            [11] 7150 	push	bc
   8809 CD E5 5D      [17] 7151 	call	_cpct_drawSpriteMaskedAlignedTable
   880C C9            [10] 7152 	ret
                           7153 ;src/main.c:1633: void WizardAnim() {
                           7154 ;	---------------------------------
                           7155 ; Function WizardAnim
                           7156 ; ---------------------------------
   880D                    7157 _WizardAnim::
                           7158 ;src/main.c:1634: if (ctWizardAnim > 0) {
   880D FD 21 F1 5E   [14] 7159 	ld	iy, #_ctWizardAnim
   8811 FD 7E 00      [19] 7160 	ld	a, 0 (iy)
   8814 B7            [ 4] 7161 	or	a, a
   8815 C8            [11] 7162 	ret	Z
                           7163 ;src/main.c:1635: switch(ctWizardAnim++) {			
   8816 FD 4E 00      [19] 7164 	ld	c, 0 (iy)
   8819 FD 34 00      [23] 7165 	inc	0 (iy)
   881C 79            [ 4] 7166 	ld	a, c
   881D 3D            [ 4] 7167 	dec	a
   881E 28 39         [12] 7168 	jr	Z,00102$
   8820 79            [ 4] 7169 	ld	a,c
   8821 FE 02         [ 7] 7170 	cp	a,#0x02
   8823 28 41         [12] 7171 	jr	Z,00104$
   8825 FE 03         [ 7] 7172 	cp	a,#0x03
   8827 28 4B         [12] 7173 	jr	Z,00106$
   8829 FE 04         [ 7] 7174 	cp	a,#0x04
   882B 28 5A         [12] 7175 	jr	Z,00107$
   882D FE 05         [ 7] 7176 	cp	a,#0x05
   882F 28 61         [12] 7177 	jr	Z,00108$
   8831 FE 06         [ 7] 7178 	cp	a,#0x06
   8833 C8            [11] 7179 	ret	Z
   8834 FE 07         [ 7] 7180 	cp	a,#0x07
   8836 C8            [11] 7181 	ret	Z
   8837 FE 08         [ 7] 7182 	cp	a,#0x08
   8839 C8            [11] 7183 	ret	Z
   883A FE 09         [ 7] 7184 	cp	a,#0x09
   883C C8            [11] 7185 	ret	Z
   883D FE 0A         [ 7] 7186 	cp	a,#0x0a
   883F C8            [11] 7187 	ret	Z
   8840 FE 0B         [ 7] 7188 	cp	a,#0x0b
   8842 C8            [11] 7189 	ret	Z
   8843 FE 0C         [ 7] 7190 	cp	a,#0x0c
   8845 28 63         [12] 7191 	jr	Z,00115$
   8847 FE 1D         [ 7] 7192 	cp	a,#0x1d
   8849 28 0E         [12] 7193 	jr	Z,00102$
   884B FE 1E         [ 7] 7194 	cp	a,#0x1e
   884D 28 17         [12] 7195 	jr	Z,00104$
   884F FE 1F         [ 7] 7196 	cp	a,#0x1f
   8851 28 21         [12] 7197 	jr	Z,00106$
   8853 D6 20         [ 7] 7198 	sub	a, #0x20
   8855 28 5E         [12] 7199 	jr	Z,00116$
   8857 18 68         [12] 7200 	jr	00117$
                           7201 ;src/main.c:1638: case 29:	{ PrintExplosion(&spr[6], 0); break; }
   8859                    7202 00102$:
   8859 AF            [ 4] 7203 	xor	a, a
   885A F5            [11] 7204 	push	af
   885B 33            [ 6] 7205 	inc	sp
   885C 21 64 5F      [10] 7206 	ld	hl, #(_spr + 0x005a)
   885F E5            [11] 7207 	push	hl
   8860 CD 44 7A      [17] 7208 	call	_PrintExplosion
   8863 F1            [10] 7209 	pop	af
   8864 33            [ 6] 7210 	inc	sp
   8865 C9            [10] 7211 	ret
                           7212 ;src/main.c:1640: case 30:	{ PrintExplosion(&spr[6], 1); break; }
   8866                    7213 00104$:
   8866 3E 01         [ 7] 7214 	ld	a, #0x01
   8868 F5            [11] 7215 	push	af
   8869 33            [ 6] 7216 	inc	sp
   886A 21 64 5F      [10] 7217 	ld	hl, #(_spr + 0x005a)
   886D E5            [11] 7218 	push	hl
   886E CD 44 7A      [17] 7219 	call	_PrintExplosion
   8871 F1            [10] 7220 	pop	af
   8872 33            [ 6] 7221 	inc	sp
   8873 C9            [10] 7222 	ret
                           7223 ;src/main.c:1642: case 31:	{ DeleteSprite(&spr[6]); PrintExplosion(&spr[6], 0); break; }						
   8874                    7224 00106$:
   8874 21 64 5F      [10] 7225 	ld	hl, #(_spr + 0x005a)
   8877 CD 19 77      [17] 7226 	call	_DeleteSprite
   887A AF            [ 4] 7227 	xor	a, a
   887B F5            [11] 7228 	push	af
   887C 33            [ 6] 7229 	inc	sp
   887D 21 64 5F      [10] 7230 	ld	hl, #(_spr + 0x005a)
   8880 E5            [11] 7231 	push	hl
   8881 CD 44 7A      [17] 7232 	call	_PrintExplosion
   8884 F1            [10] 7233 	pop	af
   8885 33            [ 6] 7234 	inc	sp
   8886 C9            [10] 7235 	ret
                           7236 ;src/main.c:1644: case 4:		{ DeleteSprite(&spr[6]); PrintWizard(TRUE); break; }		
   8887                    7237 00107$:
   8887 21 64 5F      [10] 7238 	ld	hl, #(_spr + 0x005a)
   888A CD 19 77      [17] 7239 	call	_DeleteSprite
   888D 2E 01         [ 7] 7240 	ld	l, #0x01
   888F C3 CC 87      [10] 7241 	jp  _PrintWizard
                           7242 ;src/main.c:1646: case 5:		{ MakeShot(spr[6].x, spr[6].y-3, spr[6].dir); break; }			
   8892                    7243 00108$:
   8892 21 6B 5F      [10] 7244 	ld	hl, #_spr + 97
   8895 56            [ 7] 7245 	ld	d, (hl)
   8896 3A 67 5F      [13] 7246 	ld	a, (#_spr + 93)
   8899 C6 FD         [ 7] 7247 	add	a, #0xfd
   889B 4F            [ 4] 7248 	ld	c, a
   889C 21 66 5F      [10] 7249 	ld	hl, #_spr + 92
   889F 46            [ 7] 7250 	ld	b, (hl)
   88A0 59            [ 4] 7251 	ld	e, c
   88A1 D5            [11] 7252 	push	de
   88A2 C5            [11] 7253 	push	bc
   88A3 33            [ 6] 7254 	inc	sp
   88A4 CD A8 86      [17] 7255 	call	_MakeShot
   88A7 F1            [10] 7256 	pop	af
   88A8 33            [ 6] 7257 	inc	sp
   88A9 C9            [10] 7258 	ret
                           7259 ;src/main.c:1655: case 12:    { DeleteSprite(&spr[6]); PrintWizard(FALSE); break;}
   88AA                    7260 00115$:
   88AA 21 64 5F      [10] 7261 	ld	hl, #(_spr + 0x005a)
   88AD CD 19 77      [17] 7262 	call	_DeleteSprite
   88B0 2E 00         [ 7] 7263 	ld	l, #0x00
   88B2 C3 CC 87      [10] 7264 	jp  _PrintWizard
                           7265 ;src/main.c:1657: case 32:    { DeleteSprite(&spr[6]); ctWizardAnim = 0; return; }
   88B5                    7266 00116$:
   88B5 21 64 5F      [10] 7267 	ld	hl, #(_spr + 0x005a)
   88B8 CD 19 77      [17] 7268 	call	_DeleteSprite
   88BB 21 F1 5E      [10] 7269 	ld	hl,#_ctWizardAnim + 0
   88BE 36 00         [10] 7270 	ld	(hl), #0x00
   88C0 C9            [10] 7271 	ret
                           7272 ;src/main.c:1659: default:	{ PrintWizard(FALSE); break;	}			
   88C1                    7273 00117$:
   88C1 2E 00         [ 7] 7274 	ld	l, #0x00
                           7275 ;src/main.c:1660: }		
   88C3 C3 CC 87      [10] 7276 	jp  _PrintWizard
                           7277 ;src/main.c:1666: void MakeWizardAnim(u8 player) __z88dk_fastcall {
                           7278 ;	---------------------------------
                           7279 ; Function MakeWizardAnim
                           7280 ; ---------------------------------
   88C6                    7281 _MakeWizardAnim::
   88C6 4D            [ 4] 7282 	ld	c, l
                           7283 ;src/main.c:1667: if (ctInactivity[player]++ == 80 && !sht.active) {	
   88C7 11 ED 5E      [10] 7284 	ld	de, #_ctInactivity+0
   88CA 69            [ 4] 7285 	ld	l,c
   88CB 26 00         [ 7] 7286 	ld	h,#0x00
   88CD 19            [11] 7287 	add	hl, de
   88CE 46            [ 7] 7288 	ld	b, (hl)
   88CF 58            [ 4] 7289 	ld	e, b
   88D0 1C            [ 4] 7290 	inc	e
   88D1 73            [ 7] 7291 	ld	(hl), e
   88D2 78            [ 4] 7292 	ld	a, b
   88D3 D6 50         [ 7] 7293 	sub	a, #0x50
   88D5 C0            [11] 7294 	ret	NZ
   88D6 3A 77 5F      [13] 7295 	ld	a, (#(_sht + 0x0004) + 0)
   88D9 B7            [ 4] 7296 	or	a, a
   88DA C0            [11] 7297 	ret	NZ
                           7298 ;src/main.c:1668: spr[6].y = spr[6].py = spr[player].y;
   88DB 11 0A 5F      [10] 7299 	ld	de, #_spr+0
   88DE 06 00         [ 7] 7300 	ld	b,#0x00
   88E0 69            [ 4] 7301 	ld	l, c
   88E1 60            [ 4] 7302 	ld	h, b
   88E2 29            [11] 7303 	add	hl, hl
   88E3 09            [11] 7304 	add	hl, bc
   88E4 29            [11] 7305 	add	hl, hl
   88E5 09            [11] 7306 	add	hl, bc
   88E6 29            [11] 7307 	add	hl, hl
   88E7 09            [11] 7308 	add	hl, bc
   88E8 19            [11] 7309 	add	hl,de
   88E9 4D            [ 4] 7310 	ld	c,l
   88EA 44            [ 4] 7311 	ld	b,h
   88EB 23            [ 6] 7312 	inc	hl
   88EC 23            [ 6] 7313 	inc	hl
   88ED 23            [ 6] 7314 	inc	hl
   88EE 7E            [ 7] 7315 	ld	a, (hl)
   88EF 32 69 5F      [13] 7316 	ld	(#(_spr + 0x005f)),a
   88F2 32 67 5F      [13] 7317 	ld	(#(_spr + 0x005d)),a
                           7318 ;src/main.c:1670: if (spr[player].x < 40) {
   88F5 69            [ 4] 7319 	ld	l, c
   88F6 60            [ 4] 7320 	ld	h, b
   88F7 23            [ 6] 7321 	inc	hl
   88F8 23            [ 6] 7322 	inc	hl
   88F9 4E            [ 7] 7323 	ld	c, (hl)
                           7324 ;src/main.c:1671: spr[6].x = spr[6].px = 74;		
   88FA 21 5E 00      [10] 7325 	ld	hl, #0x005e
   88FD 19            [11] 7326 	add	hl, de
                           7327 ;src/main.c:1672: spr[6].dir = D_left;
                           7328 ;src/main.c:1670: if (spr[player].x < 40) {
   88FE 79            [ 4] 7329 	ld	a, c
   88FF D6 28         [ 7] 7330 	sub	a, #0x28
   8901 30 0E         [12] 7331 	jr	NC,00102$
                           7332 ;src/main.c:1671: spr[6].x = spr[6].px = 74;		
   8903 36 4A         [10] 7333 	ld	(hl), #0x4a
   8905 21 66 5F      [10] 7334 	ld	hl, #(_spr + 0x005c)
   8908 36 4A         [10] 7335 	ld	(hl), #0x4a
                           7336 ;src/main.c:1672: spr[6].dir = D_left;
   890A 21 6B 5F      [10] 7337 	ld	hl, #(_spr + 0x0061)
   890D 36 02         [10] 7338 	ld	(hl), #0x02
   890F 18 0C         [12] 7339 	jr	00103$
   8911                    7340 00102$:
                           7341 ;src/main.c:1675: spr[6].x = spr[6].px = 1;
   8911 36 01         [10] 7342 	ld	(hl), #0x01
   8913 21 66 5F      [10] 7343 	ld	hl, #(_spr + 0x005c)
   8916 36 01         [10] 7344 	ld	(hl), #0x01
                           7345 ;src/main.c:1676: spr[6].dir = D_right;
   8918 21 6B 5F      [10] 7346 	ld	hl, #(_spr + 0x0061)
   891B 36 03         [10] 7347 	ld	(hl), #0x03
   891D                    7348 00103$:
                           7349 ;src/main.c:1678: ctWizardAnim++; // makes the wizard shooting animation start
   891D 21 F1 5E      [10] 7350 	ld	hl, #_ctWizardAnim+0
   8920 34            [11] 7351 	inc	(hl)
   8921 C9            [10] 7352 	ret
                           7353 ;src/main.c:1696: void MoveEnemy(TSpr *pSpr) {
                           7354 ;	---------------------------------
                           7355 ; Function MoveEnemy
                           7356 ; ---------------------------------
   8922                    7357 _MoveEnemy::
   8922 DD E5         [15] 7358 	push	ix
   8924 DD 21 00 00   [14] 7359 	ld	ix,#0
   8928 DD 39         [15] 7360 	add	ix,sp
   892A 21 F0 FF      [10] 7361 	ld	hl, #-16
   892D 39            [11] 7362 	add	hl, sp
   892E F9            [ 6] 7363 	ld	sp, hl
                           7364 ;src/main.c:1697: u8 z = 255;	// multipurpose variable
   892F DD 36 F0 FF   [19] 7365 	ld	-16 (ix), #0xff
                           7366 ;src/main.c:1698: switch(pSpr->objNum_mov) {
   8933 DD 7E 04      [19] 7367 	ld	a, 4 (ix)
   8936 DD 77 F1      [19] 7368 	ld	-15 (ix), a
   8939 DD 7E 05      [19] 7369 	ld	a, 5 (ix)
   893C DD 77 F2      [19] 7370 	ld	-14 (ix), a
   893F DD 6E F1      [19] 7371 	ld	l,-15 (ix)
   8942 DD 66 F2      [19] 7372 	ld	h,-14 (ix)
   8945 11 0C 00      [10] 7373 	ld	de, #0x000c
   8948 19            [11] 7374 	add	hl, de
   8949 7E            [ 7] 7375 	ld	a, (hl)
   894A DD 77 F5      [19] 7376 	ld	-11 (ix), a
                           7377 ;src/main.c:1701: if (pSpr->dir == D_right) {
   894D DD 7E F1      [19] 7378 	ld	a, -15 (ix)
   8950 C6 07         [ 7] 7379 	add	a, #0x07
   8952 DD 77 F3      [19] 7380 	ld	-13 (ix), a
   8955 DD 7E F2      [19] 7381 	ld	a, -14 (ix)
   8958 CE 00         [ 7] 7382 	adc	a, #0x00
   895A DD 77 F4      [19] 7383 	ld	-12 (ix), a
                           7384 ;src/main.c:1703: if (pSpr->x < pSpr->power_maxV) 
   895D DD 7E F1      [19] 7385 	ld	a, -15 (ix)
   8960 C6 02         [ 7] 7386 	add	a, #0x02
   8962 DD 77 F6      [19] 7387 	ld	-10 (ix), a
   8965 DD 7E F2      [19] 7388 	ld	a, -14 (ix)
   8968 CE 00         [ 7] 7389 	adc	a, #0x00
   896A DD 77 F7      [19] 7390 	ld	-9 (ix), a
   896D DD 7E F1      [19] 7391 	ld	a, -15 (ix)
   8970 C6 0E         [ 7] 7392 	add	a, #0x0e
   8972 DD 77 FA      [19] 7393 	ld	-6 (ix), a
   8975 DD 7E F2      [19] 7394 	ld	a, -14 (ix)
   8978 CE 00         [ 7] 7395 	adc	a, #0x00
   897A DD 77 FB      [19] 7396 	ld	-5 (ix), a
                           7397 ;src/main.c:1704: pSpr->x = pSpr->x + pSpr->lives_speed;
   897D DD 7E F1      [19] 7398 	ld	a, -15 (ix)
   8980 C6 0B         [ 7] 7399 	add	a, #0x0b
   8982 DD 77 F8      [19] 7400 	ld	-8 (ix), a
   8985 DD 7E F2      [19] 7401 	ld	a, -14 (ix)
   8988 CE 00         [ 7] 7402 	adc	a, #0x00
   898A DD 77 F9      [19] 7403 	ld	-7 (ix), a
                           7404 ;src/main.c:1710: if (pSpr->x > pSpr->print_minV)  
   898D DD 7E F1      [19] 7405 	ld	a, -15 (ix)
   8990 C6 0D         [ 7] 7406 	add	a, #0x0d
   8992 DD 77 FC      [19] 7407 	ld	-4 (ix), a
   8995 DD 7E F2      [19] 7408 	ld	a, -14 (ix)
   8998 CE 00         [ 7] 7409 	adc	a, #0x00
   899A DD 77 FD      [19] 7410 	ld	-3 (ix), a
                           7411 ;src/main.c:1717: if (pSpr->y > (spr[0].y - SHT_H) && pSpr->y < (spr[0].y + SHT_H)) z = 0; // P1
   899D DD 7E F1      [19] 7412 	ld	a, -15 (ix)
   89A0 C6 03         [ 7] 7413 	add	a, #0x03
   89A2 DD 77 FE      [19] 7414 	ld	-2 (ix), a
   89A5 DD 7E F2      [19] 7415 	ld	a, -14 (ix)
   89A8 CE 00         [ 7] 7416 	adc	a, #0x00
   89AA DD 77 FF      [19] 7417 	ld	-1 (ix), a
                           7418 ;src/main.c:1698: switch(pSpr->objNum_mov) {
   89AD DD 7E F5      [19] 7419 	ld	a, -11 (ix)
   89B0 B7            [ 4] 7420 	or	a, a
   89B1 28 1A         [12] 7421 	jr	Z,00101$
   89B3 DD 7E F5      [19] 7422 	ld	a, -11 (ix)
   89B6 3D            [ 4] 7423 	dec	a
   89B7 CA F7 8A      [10] 7424 	jp	Z,00125$
   89BA DD 7E F5      [19] 7425 	ld	a, -11 (ix)
   89BD D6 02         [ 7] 7426 	sub	a, #0x02
   89BF CA 5C 8B      [10] 7427 	jp	Z,00135$
   89C2 DD 7E F5      [19] 7428 	ld	a, -11 (ix)
   89C5 D6 03         [ 7] 7429 	sub	a, #0x03
   89C7 CA 9B 8C      [10] 7430 	jp	Z,00152$
   89CA C3 AD 8D      [10] 7431 	jp	00168$
                           7432 ;src/main.c:1700: case M_linear_X:
   89CD                    7433 00101$:
                           7434 ;src/main.c:1701: if (pSpr->dir == D_right) {
   89CD DD 6E F3      [19] 7435 	ld	l,-13 (ix)
   89D0 DD 66 F4      [19] 7436 	ld	h,-12 (ix)
   89D3 7E            [ 7] 7437 	ld	a, (hl)
                           7438 ;src/main.c:1720: if (spr[z].x > pSpr->x) pSpr->dir = D_right; 
   89D4 DD 6E F6      [19] 7439 	ld	l,-10 (ix)
   89D7 DD 66 F7      [19] 7440 	ld	h,-9 (ix)
   89DA 4E            [ 7] 7441 	ld	c, (hl)
                           7442 ;src/main.c:1701: if (pSpr->dir == D_right) {
   89DB D6 03         [ 7] 7443 	sub	a, #0x03
   89DD 20 27         [12] 7444 	jr	NZ,00109$
                           7445 ;src/main.c:1703: if (pSpr->x < pSpr->power_maxV) 
   89DF DD 6E FA      [19] 7446 	ld	l,-6 (ix)
   89E2 DD 66 FB      [19] 7447 	ld	h,-5 (ix)
   89E5 46            [ 7] 7448 	ld	b, (hl)
   89E6 79            [ 4] 7449 	ld	a, c
   89E7 90            [ 4] 7450 	sub	a, b
   89E8 30 12         [12] 7451 	jr	NC,00103$
                           7452 ;src/main.c:1704: pSpr->x = pSpr->x + pSpr->lives_speed;
   89EA DD 6E F8      [19] 7453 	ld	l,-8 (ix)
   89ED DD 66 F9      [19] 7454 	ld	h,-7 (ix)
   89F0 46            [ 7] 7455 	ld	b, (hl)
   89F1 79            [ 4] 7456 	ld	a, c
   89F2 80            [ 4] 7457 	add	a, b
   89F3 DD 6E F6      [19] 7458 	ld	l,-10 (ix)
   89F6 DD 66 F7      [19] 7459 	ld	h,-9 (ix)
   89F9 77            [ 7] 7460 	ld	(hl), a
   89FA 18 2E         [12] 7461 	jr	00110$
   89FC                    7462 00103$:
                           7463 ;src/main.c:1706: pSpr->dir = D_left;
   89FC DD 6E F3      [19] 7464 	ld	l,-13 (ix)
   89FF DD 66 F4      [19] 7465 	ld	h,-12 (ix)
   8A02 36 02         [10] 7466 	ld	(hl), #0x02
   8A04 18 24         [12] 7467 	jr	00110$
   8A06                    7468 00109$:
                           7469 ;src/main.c:1710: if (pSpr->x > pSpr->print_minV)  
   8A06 DD 6E FC      [19] 7470 	ld	l,-4 (ix)
   8A09 DD 66 FD      [19] 7471 	ld	h,-3 (ix)
   8A0C 7E            [ 7] 7472 	ld	a, (hl)
   8A0D 91            [ 4] 7473 	sub	a, c
   8A0E 30 12         [12] 7474 	jr	NC,00106$
                           7475 ;src/main.c:1711: pSpr->x = pSpr->x - pSpr->lives_speed;
   8A10 DD 6E F8      [19] 7476 	ld	l,-8 (ix)
   8A13 DD 66 F9      [19] 7477 	ld	h,-7 (ix)
   8A16 46            [ 7] 7478 	ld	b, (hl)
   8A17 79            [ 4] 7479 	ld	a, c
   8A18 90            [ 4] 7480 	sub	a, b
   8A19 DD 6E F6      [19] 7481 	ld	l,-10 (ix)
   8A1C DD 66 F7      [19] 7482 	ld	h,-9 (ix)
   8A1F 77            [ 7] 7483 	ld	(hl), a
   8A20 18 08         [12] 7484 	jr	00110$
   8A22                    7485 00106$:
                           7486 ;src/main.c:1713: pSpr->dir = D_right; 
   8A22 DD 6E F3      [19] 7487 	ld	l,-13 (ix)
   8A25 DD 66 F4      [19] 7488 	ld	h,-12 (ix)
   8A28 36 03         [10] 7489 	ld	(hl), #0x03
   8A2A                    7490 00110$:
                           7491 ;src/main.c:1716: if (pSpr->ident == WITCH) {
   8A2A DD 6E F1      [19] 7492 	ld	l,-15 (ix)
   8A2D DD 66 F2      [19] 7493 	ld	h,-14 (ix)
   8A30 23            [ 6] 7494 	inc	hl
   8A31 7E            [ 7] 7495 	ld	a, (hl)
   8A32 D6 06         [ 7] 7496 	sub	a, #0x06
   8A34 C2 AD 8D      [10] 7497 	jp	NZ,00168$
                           7498 ;src/main.c:1717: if (pSpr->y > (spr[0].y - SHT_H) && pSpr->y < (spr[0].y + SHT_H)) z = 0; // P1
   8A37 DD 6E FE      [19] 7499 	ld	l,-2 (ix)
   8A3A DD 66 FF      [19] 7500 	ld	h,-1 (ix)
   8A3D 5E            [ 7] 7501 	ld	e, (hl)
   8A3E 21 0D 5F      [10] 7502 	ld	hl, #_spr + 3
   8A41 4E            [ 7] 7503 	ld	c, (hl)
   8A42 06 00         [ 7] 7504 	ld	b, #0x00
   8A44 79            [ 4] 7505 	ld	a, c
   8A45 C6 F8         [ 7] 7506 	add	a, #0xf8
   8A47 6F            [ 4] 7507 	ld	l, a
   8A48 78            [ 4] 7508 	ld	a, b
   8A49 CE FF         [ 7] 7509 	adc	a, #0xff
   8A4B 67            [ 4] 7510 	ld	h, a
   8A4C 16 00         [ 7] 7511 	ld	d, #0x00
   8A4E 7D            [ 4] 7512 	ld	a, l
   8A4F 93            [ 4] 7513 	sub	a, e
   8A50 7C            [ 4] 7514 	ld	a, h
   8A51 9A            [ 4] 7515 	sbc	a, d
   8A52 E2 57 8A      [10] 7516 	jp	PO, 00302$
   8A55 EE 80         [ 7] 7517 	xor	a, #0x80
   8A57                    7518 00302$:
   8A57 F2 70 8A      [10] 7519 	jp	P, 00115$
   8A5A 21 08 00      [10] 7520 	ld	hl, #0x0008
   8A5D 09            [11] 7521 	add	hl, bc
   8A5E 7B            [ 4] 7522 	ld	a, e
   8A5F 95            [ 4] 7523 	sub	a, l
   8A60 7A            [ 4] 7524 	ld	a, d
   8A61 9C            [ 4] 7525 	sbc	a, h
   8A62 E2 67 8A      [10] 7526 	jp	PO, 00303$
   8A65 EE 80         [ 7] 7527 	xor	a, #0x80
   8A67                    7528 00303$:
   8A67 F2 70 8A      [10] 7529 	jp	P, 00115$
   8A6A DD 36 F0 00   [19] 7530 	ld	-16 (ix), #0x00
   8A6E 18 2E         [12] 7531 	jr	00116$
   8A70                    7532 00115$:
                           7533 ;src/main.c:1718: else if (pSpr->y > (spr[1].y - SHT_H) && pSpr->y < (spr[1].y + SHT_H)) z = 1; // P2
   8A70 21 1C 5F      [10] 7534 	ld	hl, #_spr + 18
   8A73 4E            [ 7] 7535 	ld	c, (hl)
   8A74 06 00         [ 7] 7536 	ld	b, #0x00
   8A76 79            [ 4] 7537 	ld	a, c
   8A77 C6 F8         [ 7] 7538 	add	a, #0xf8
   8A79 6F            [ 4] 7539 	ld	l, a
   8A7A 78            [ 4] 7540 	ld	a, b
   8A7B CE FF         [ 7] 7541 	adc	a, #0xff
   8A7D 67            [ 4] 7542 	ld	h, a
   8A7E 7D            [ 4] 7543 	ld	a, l
   8A7F 93            [ 4] 7544 	sub	a, e
   8A80 7C            [ 4] 7545 	ld	a, h
   8A81 9A            [ 4] 7546 	sbc	a, d
   8A82 E2 87 8A      [10] 7547 	jp	PO, 00304$
   8A85 EE 80         [ 7] 7548 	xor	a, #0x80
   8A87                    7549 00304$:
   8A87 F2 9E 8A      [10] 7550 	jp	P, 00116$
   8A8A 21 08 00      [10] 7551 	ld	hl, #0x0008
   8A8D 09            [11] 7552 	add	hl, bc
   8A8E 7B            [ 4] 7553 	ld	a, e
   8A8F 95            [ 4] 7554 	sub	a, l
   8A90 7A            [ 4] 7555 	ld	a, d
   8A91 9C            [ 4] 7556 	sbc	a, h
   8A92 E2 97 8A      [10] 7557 	jp	PO, 00305$
   8A95 EE 80         [ 7] 7558 	xor	a, #0x80
   8A97                    7559 00305$:
   8A97 F2 9E 8A      [10] 7560 	jp	P, 00116$
   8A9A DD 36 F0 01   [19] 7561 	ld	-16 (ix), #0x01
   8A9E                    7562 00116$:
                           7563 ;src/main.c:1719: if (z < 255) {
   8A9E DD 7E F0      [19] 7564 	ld	a, -16 (ix)
   8AA1 D6 FF         [ 7] 7565 	sub	a, #0xff
   8AA3 D2 AD 8D      [10] 7566 	jp	NC, 00168$
                           7567 ;src/main.c:1720: if (spr[z].x > pSpr->x) pSpr->dir = D_right; 
   8AA6 DD 4E F0      [19] 7568 	ld	c,-16 (ix)
   8AA9 06 00         [ 7] 7569 	ld	b,#0x00
   8AAB 69            [ 4] 7570 	ld	l, c
   8AAC 60            [ 4] 7571 	ld	h, b
   8AAD 29            [11] 7572 	add	hl, hl
   8AAE 09            [11] 7573 	add	hl, bc
   8AAF 29            [11] 7574 	add	hl, hl
   8AB0 09            [11] 7575 	add	hl, bc
   8AB1 29            [11] 7576 	add	hl, hl
   8AB2 09            [11] 7577 	add	hl, bc
   8AB3 11 0A 5F      [10] 7578 	ld	de, #_spr
   8AB6 19            [11] 7579 	add	hl, de
   8AB7 23            [ 6] 7580 	inc	hl
   8AB8 23            [ 6] 7581 	inc	hl
   8AB9 4E            [ 7] 7582 	ld	c, (hl)
   8ABA DD 6E F6      [19] 7583 	ld	l,-10 (ix)
   8ABD DD 66 F7      [19] 7584 	ld	h,-9 (ix)
   8AC0 7E            [ 7] 7585 	ld	a, (hl)
   8AC1 91            [ 4] 7586 	sub	a, c
   8AC2 30 0A         [12] 7587 	jr	NC,00119$
   8AC4 DD 6E F3      [19] 7588 	ld	l,-13 (ix)
   8AC7 DD 66 F4      [19] 7589 	ld	h,-12 (ix)
   8ACA 36 03         [10] 7590 	ld	(hl), #0x03
   8ACC 18 08         [12] 7591 	jr	00120$
   8ACE                    7592 00119$:
                           7593 ;src/main.c:1721: else pSpr->dir = D_left;
   8ACE DD 6E F3      [19] 7594 	ld	l,-13 (ix)
   8AD1 DD 66 F4      [19] 7595 	ld	h,-12 (ix)
   8AD4 36 02         [10] 7596 	ld	(hl), #0x02
   8AD6                    7597 00120$:
                           7598 ;src/main.c:1722: MakeShot(pSpr->x, pSpr->y, pSpr->dir);
   8AD6 DD 6E F3      [19] 7599 	ld	l,-13 (ix)
   8AD9 DD 66 F4      [19] 7600 	ld	h,-12 (ix)
   8ADC 7E            [ 7] 7601 	ld	a, (hl)
   8ADD DD 6E FE      [19] 7602 	ld	l,-2 (ix)
   8AE0 DD 66 FF      [19] 7603 	ld	h,-1 (ix)
   8AE3 56            [ 7] 7604 	ld	d, (hl)
   8AE4 DD 6E F6      [19] 7605 	ld	l,-10 (ix)
   8AE7 DD 66 F7      [19] 7606 	ld	h,-9 (ix)
   8AEA 46            [ 7] 7607 	ld	b, (hl)
   8AEB F5            [11] 7608 	push	af
   8AEC 33            [ 6] 7609 	inc	sp
   8AED 58            [ 4] 7610 	ld	e, b
   8AEE D5            [11] 7611 	push	de
   8AEF CD A8 86      [17] 7612 	call	_MakeShot
   8AF2 F1            [10] 7613 	pop	af
   8AF3 33            [ 6] 7614 	inc	sp
                           7615 ;src/main.c:1725: break;
   8AF4 C3 AD 8D      [10] 7616 	jp	00168$
                           7617 ;src/main.c:1728: case M_linear_Y:
   8AF7                    7618 00125$:
                           7619 ;src/main.c:1729: if (pSpr->dir == D_down) {
   8AF7 DD 6E F3      [19] 7620 	ld	l,-13 (ix)
   8AFA DD 66 F4      [19] 7621 	ld	h,-12 (ix)
   8AFD 46            [ 7] 7622 	ld	b, (hl)
                           7623 ;src/main.c:1717: if (pSpr->y > (spr[0].y - SHT_H) && pSpr->y < (spr[0].y + SHT_H)) z = 0; // P1
   8AFE DD 6E FE      [19] 7624 	ld	l,-2 (ix)
   8B01 DD 66 FF      [19] 7625 	ld	h,-1 (ix)
   8B04 4E            [ 7] 7626 	ld	c, (hl)
                           7627 ;src/main.c:1729: if (pSpr->dir == D_down) {
   8B05 10 2B         [13] 7628 	djnz	00133$
                           7629 ;src/main.c:1731: if (pSpr->y < pSpr->power_maxV)
   8B07 DD 6E FA      [19] 7630 	ld	l,-6 (ix)
   8B0A DD 66 FB      [19] 7631 	ld	h,-5 (ix)
   8B0D 46            [ 7] 7632 	ld	b, (hl)
   8B0E 79            [ 4] 7633 	ld	a, c
   8B0F 90            [ 4] 7634 	sub	a, b
   8B10 30 15         [12] 7635 	jr	NC,00127$
                           7636 ;src/main.c:1732: pSpr->y = pSpr->y + (pSpr->lives_speed*2);
   8B12 DD 6E F8      [19] 7637 	ld	l,-8 (ix)
   8B15 DD 66 F9      [19] 7638 	ld	h,-7 (ix)
   8B18 46            [ 7] 7639 	ld	b, (hl)
   8B19 CB 20         [ 8] 7640 	sla	b
   8B1B 79            [ 4] 7641 	ld	a, c
   8B1C 80            [ 4] 7642 	add	a, b
   8B1D DD 6E FE      [19] 7643 	ld	l,-2 (ix)
   8B20 DD 66 FF      [19] 7644 	ld	h,-1 (ix)
   8B23 77            [ 7] 7645 	ld	(hl), a
   8B24 C3 AD 8D      [10] 7646 	jp	00168$
   8B27                    7647 00127$:
                           7648 ;src/main.c:1734: pSpr->dir = D_up;
   8B27 DD 6E F3      [19] 7649 	ld	l,-13 (ix)
   8B2A DD 66 F4      [19] 7650 	ld	h,-12 (ix)
   8B2D 36 00         [10] 7651 	ld	(hl), #0x00
   8B2F C3 AD 8D      [10] 7652 	jp	00168$
   8B32                    7653 00133$:
                           7654 ;src/main.c:1738: if (pSpr->y > pSpr->print_minV) 
   8B32 DD 6E FC      [19] 7655 	ld	l,-4 (ix)
   8B35 DD 66 FD      [19] 7656 	ld	h,-3 (ix)
   8B38 7E            [ 7] 7657 	ld	a, (hl)
   8B39 91            [ 4] 7658 	sub	a, c
   8B3A 30 15         [12] 7659 	jr	NC,00130$
                           7660 ;src/main.c:1739: pSpr->y = pSpr->y - (pSpr->lives_speed*2);
   8B3C DD 6E F8      [19] 7661 	ld	l,-8 (ix)
   8B3F DD 66 F9      [19] 7662 	ld	h,-7 (ix)
   8B42 46            [ 7] 7663 	ld	b, (hl)
   8B43 CB 20         [ 8] 7664 	sla	b
   8B45 79            [ 4] 7665 	ld	a, c
   8B46 90            [ 4] 7666 	sub	a, b
   8B47 DD 6E FE      [19] 7667 	ld	l,-2 (ix)
   8B4A DD 66 FF      [19] 7668 	ld	h,-1 (ix)
   8B4D 77            [ 7] 7669 	ld	(hl), a
   8B4E C3 AD 8D      [10] 7670 	jp	00168$
   8B51                    7671 00130$:
                           7672 ;src/main.c:1741: pSpr->dir = D_down; 
   8B51 DD 6E F3      [19] 7673 	ld	l,-13 (ix)
   8B54 DD 66 F4      [19] 7674 	ld	h,-12 (ix)
   8B57 36 01         [10] 7675 	ld	(hl), #0x01
                           7676 ;src/main.c:1743: break;
   8B59 C3 AD 8D      [10] 7677 	jp	00168$
                           7678 ;src/main.c:1746: case M_linear_XY:		
   8B5C                    7679 00135$:
                           7680 ;src/main.c:1748: if (pSpr->dir == D_up && OnBackground(pSpr->x, pSpr->y - (pSpr->lives_speed*2)-8))
   8B5C DD 6E F3      [19] 7681 	ld	l,-13 (ix)
   8B5F DD 66 F4      [19] 7682 	ld	h,-12 (ix)
   8B62 7E            [ 7] 7683 	ld	a, (hl)
   8B63 B7            [ 4] 7684 	or	a, a
   8B64 20 41         [12] 7685 	jr	NZ,00149$
   8B66 DD 6E FE      [19] 7686 	ld	l,-2 (ix)
   8B69 DD 66 FF      [19] 7687 	ld	h,-1 (ix)
   8B6C 4E            [ 7] 7688 	ld	c, (hl)
   8B6D DD 6E F8      [19] 7689 	ld	l,-8 (ix)
   8B70 DD 66 F9      [19] 7690 	ld	h,-7 (ix)
   8B73 46            [ 7] 7691 	ld	b, (hl)
   8B74 CB 20         [ 8] 7692 	sla	b
   8B76 79            [ 4] 7693 	ld	a, c
   8B77 90            [ 4] 7694 	sub	a, b
   8B78 C6 F8         [ 7] 7695 	add	a, #0xf8
   8B7A 57            [ 4] 7696 	ld	d, a
   8B7B DD 6E F6      [19] 7697 	ld	l,-10 (ix)
   8B7E DD 66 F7      [19] 7698 	ld	h,-9 (ix)
   8B81 5E            [ 7] 7699 	ld	e, (hl)
   8B82 D5            [11] 7700 	push	de
   8B83 CD 0A 62      [17] 7701 	call	_OnBackground
   8B86 F1            [10] 7702 	pop	af
   8B87 7D            [ 4] 7703 	ld	a, l
   8B88 B7            [ 4] 7704 	or	a, a
   8B89 28 1C         [12] 7705 	jr	Z,00149$
                           7706 ;src/main.c:1749: pSpr->y = pSpr->y - (pSpr->lives_speed*2);			
   8B8B DD 6E FE      [19] 7707 	ld	l,-2 (ix)
   8B8E DD 66 FF      [19] 7708 	ld	h,-1 (ix)
   8B91 4E            [ 7] 7709 	ld	c, (hl)
   8B92 DD 6E F8      [19] 7710 	ld	l,-8 (ix)
   8B95 DD 66 F9      [19] 7711 	ld	h,-7 (ix)
   8B98 46            [ 7] 7712 	ld	b, (hl)
   8B99 CB 20         [ 8] 7713 	sla	b
   8B9B 79            [ 4] 7714 	ld	a, c
   8B9C 90            [ 4] 7715 	sub	a, b
   8B9D DD 6E FE      [19] 7716 	ld	l,-2 (ix)
   8BA0 DD 66 FF      [19] 7717 	ld	h,-1 (ix)
   8BA3 77            [ 7] 7718 	ld	(hl), a
   8BA4 C3 AD 8D      [10] 7719 	jp	00168$
   8BA7                    7720 00149$:
                           7721 ;src/main.c:1751: else if (pSpr->dir == D_down && OnBackground(pSpr->x, pSpr->y + (pSpr->lives_speed*2)+2))
   8BA7 DD 6E F3      [19] 7722 	ld	l,-13 (ix)
   8BAA DD 66 F4      [19] 7723 	ld	h,-12 (ix)
   8BAD 4E            [ 7] 7724 	ld	c, (hl)
   8BAE 0D            [ 4] 7725 	dec	c
   8BAF 20 40         [12] 7726 	jr	NZ,00145$
   8BB1 DD 6E FE      [19] 7727 	ld	l,-2 (ix)
   8BB4 DD 66 FF      [19] 7728 	ld	h,-1 (ix)
   8BB7 4E            [ 7] 7729 	ld	c, (hl)
   8BB8 DD 6E F8      [19] 7730 	ld	l,-8 (ix)
   8BBB DD 66 F9      [19] 7731 	ld	h,-7 (ix)
   8BBE 6E            [ 7] 7732 	ld	l, (hl)
   8BBF CB 25         [ 8] 7733 	sla	l
   8BC1 09            [11] 7734 	add	hl, bc
   8BC2 55            [ 4] 7735 	ld	d, l
   8BC3 14            [ 4] 7736 	inc	d
   8BC4 14            [ 4] 7737 	inc	d
   8BC5 DD 6E F6      [19] 7738 	ld	l,-10 (ix)
   8BC8 DD 66 F7      [19] 7739 	ld	h,-9 (ix)
   8BCB 5E            [ 7] 7740 	ld	e, (hl)
   8BCC D5            [11] 7741 	push	de
   8BCD CD 0A 62      [17] 7742 	call	_OnBackground
   8BD0 F1            [10] 7743 	pop	af
   8BD1 7D            [ 4] 7744 	ld	a, l
   8BD2 B7            [ 4] 7745 	or	a, a
   8BD3 28 1C         [12] 7746 	jr	Z,00145$
                           7747 ;src/main.c:1752: pSpr->y = pSpr->y + (pSpr->lives_speed*2);
   8BD5 DD 6E FE      [19] 7748 	ld	l,-2 (ix)
   8BD8 DD 66 FF      [19] 7749 	ld	h,-1 (ix)
   8BDB 4E            [ 7] 7750 	ld	c, (hl)
   8BDC DD 6E F8      [19] 7751 	ld	l,-8 (ix)
   8BDF DD 66 F9      [19] 7752 	ld	h,-7 (ix)
   8BE2 46            [ 7] 7753 	ld	b, (hl)
   8BE3 CB 20         [ 8] 7754 	sla	b
   8BE5 79            [ 4] 7755 	ld	a, c
   8BE6 80            [ 4] 7756 	add	a, b
   8BE7 DD 6E FE      [19] 7757 	ld	l,-2 (ix)
   8BEA DD 66 FF      [19] 7758 	ld	h,-1 (ix)
   8BED 77            [ 7] 7759 	ld	(hl), a
   8BEE C3 AD 8D      [10] 7760 	jp	00168$
   8BF1                    7761 00145$:
                           7762 ;src/main.c:1754: else if (pSpr->dir == D_left && OnBackground((pSpr->x - pSpr->lives_speed)-3, pSpr->y))
   8BF1 DD 6E F3      [19] 7763 	ld	l,-13 (ix)
   8BF4 DD 66 F4      [19] 7764 	ld	h,-12 (ix)
   8BF7 7E            [ 7] 7765 	ld	a, (hl)
   8BF8 D6 02         [ 7] 7766 	sub	a, #0x02
   8BFA 20 3D         [12] 7767 	jr	NZ,00141$
   8BFC DD 6E FE      [19] 7768 	ld	l,-2 (ix)
   8BFF DD 66 FF      [19] 7769 	ld	h,-1 (ix)
   8C02 56            [ 7] 7770 	ld	d, (hl)
   8C03 DD 6E F6      [19] 7771 	ld	l,-10 (ix)
   8C06 DD 66 F7      [19] 7772 	ld	h,-9 (ix)
   8C09 4E            [ 7] 7773 	ld	c, (hl)
   8C0A DD 6E F8      [19] 7774 	ld	l,-8 (ix)
   8C0D DD 66 F9      [19] 7775 	ld	h,-7 (ix)
   8C10 5E            [ 7] 7776 	ld	e, (hl)
   8C11 79            [ 4] 7777 	ld	a, c
   8C12 93            [ 4] 7778 	sub	a, e
   8C13 C6 FD         [ 7] 7779 	add	a, #0xfd
   8C15 5F            [ 4] 7780 	ld	e,a
   8C16 D5            [11] 7781 	push	de
   8C17 CD 0A 62      [17] 7782 	call	_OnBackground
   8C1A F1            [10] 7783 	pop	af
   8C1B 7D            [ 4] 7784 	ld	a, l
   8C1C B7            [ 4] 7785 	or	a, a
   8C1D 28 1A         [12] 7786 	jr	Z,00141$
                           7787 ;src/main.c:1755: pSpr->x = pSpr->x - pSpr->lives_speed;
   8C1F DD 6E F6      [19] 7788 	ld	l,-10 (ix)
   8C22 DD 66 F7      [19] 7789 	ld	h,-9 (ix)
   8C25 4E            [ 7] 7790 	ld	c, (hl)
   8C26 DD 6E F8      [19] 7791 	ld	l,-8 (ix)
   8C29 DD 66 F9      [19] 7792 	ld	h,-7 (ix)
   8C2C 46            [ 7] 7793 	ld	b, (hl)
   8C2D 79            [ 4] 7794 	ld	a, c
   8C2E 90            [ 4] 7795 	sub	a, b
   8C2F DD 6E F6      [19] 7796 	ld	l,-10 (ix)
   8C32 DD 66 F7      [19] 7797 	ld	h,-9 (ix)
   8C35 77            [ 7] 7798 	ld	(hl), a
   8C36 C3 AD 8D      [10] 7799 	jp	00168$
   8C39                    7800 00141$:
                           7801 ;src/main.c:1757: else if (pSpr->dir == D_right && OnBackground((pSpr->x + pSpr->lives_speed)+1, pSpr->y))
   8C39 DD 6E F3      [19] 7802 	ld	l,-13 (ix)
   8C3C DD 66 F4      [19] 7803 	ld	h,-12 (ix)
   8C3F 7E            [ 7] 7804 	ld	a, (hl)
   8C40 D6 03         [ 7] 7805 	sub	a, #0x03
   8C42 20 3C         [12] 7806 	jr	NZ,00137$
   8C44 DD 6E FE      [19] 7807 	ld	l,-2 (ix)
   8C47 DD 66 FF      [19] 7808 	ld	h,-1 (ix)
   8C4A 56            [ 7] 7809 	ld	d, (hl)
   8C4B DD 6E F6      [19] 7810 	ld	l,-10 (ix)
   8C4E DD 66 F7      [19] 7811 	ld	h,-9 (ix)
   8C51 4E            [ 7] 7812 	ld	c, (hl)
   8C52 DD 6E F8      [19] 7813 	ld	l,-8 (ix)
   8C55 DD 66 F9      [19] 7814 	ld	h,-7 (ix)
   8C58 6E            [ 7] 7815 	ld	l, (hl)
   8C59 09            [11] 7816 	add	hl, bc
   8C5A 45            [ 4] 7817 	ld	b, l
   8C5B 04            [ 4] 7818 	inc	b
   8C5C 58            [ 4] 7819 	ld	e, b
   8C5D D5            [11] 7820 	push	de
   8C5E CD 0A 62      [17] 7821 	call	_OnBackground
   8C61 F1            [10] 7822 	pop	af
   8C62 7D            [ 4] 7823 	ld	a, l
   8C63 B7            [ 4] 7824 	or	a, a
   8C64 28 1A         [12] 7825 	jr	Z,00137$
                           7826 ;src/main.c:1758: pSpr->x = pSpr->x + pSpr->lives_speed;
   8C66 DD 6E F6      [19] 7827 	ld	l,-10 (ix)
   8C69 DD 66 F7      [19] 7828 	ld	h,-9 (ix)
   8C6C 4E            [ 7] 7829 	ld	c, (hl)
   8C6D DD 6E F8      [19] 7830 	ld	l,-8 (ix)
   8C70 DD 66 F9      [19] 7831 	ld	h,-7 (ix)
   8C73 46            [ 7] 7832 	ld	b, (hl)
   8C74 79            [ 4] 7833 	ld	a, c
   8C75 80            [ 4] 7834 	add	a, b
   8C76 DD 6E F6      [19] 7835 	ld	l,-10 (ix)
   8C79 DD 66 F7      [19] 7836 	ld	h,-9 (ix)
   8C7C 77            [ 7] 7837 	ld	(hl), a
   8C7D C3 AD 8D      [10] 7838 	jp	00168$
   8C80                    7839 00137$:
                           7840 ;src/main.c:1760: else pSpr->dir = cpct_getRandom_lcg_u8(0) / 65; // 0-1-2-3			
   8C80 2E 00         [ 7] 7841 	ld	l, #0x00
   8C82 CD D4 5B      [17] 7842 	call	_cpct_getRandom_lcg_u8
   8C85 45            [ 4] 7843 	ld	b, l
   8C86 3E 41         [ 7] 7844 	ld	a, #0x41
   8C88 F5            [11] 7845 	push	af
   8C89 33            [ 6] 7846 	inc	sp
   8C8A C5            [11] 7847 	push	bc
   8C8B 33            [ 6] 7848 	inc	sp
   8C8C CD 71 51      [17] 7849 	call	__divuchar
   8C8F F1            [10] 7850 	pop	af
   8C90 4D            [ 4] 7851 	ld	c, l
   8C91 DD 6E F3      [19] 7852 	ld	l,-13 (ix)
   8C94 DD 66 F4      [19] 7853 	ld	h,-12 (ix)
   8C97 71            [ 7] 7854 	ld	(hl), c
                           7855 ;src/main.c:1761: break;
   8C98 C3 AD 8D      [10] 7856 	jp	00168$
                           7857 ;src/main.c:1764: case M_chaser:
   8C9B                    7858 00152$:
                           7859 ;src/main.c:1765: if (ctMainLoop % pSpr->lives_speed == 0) {
   8C9B DD 6E F8      [19] 7860 	ld	l,-8 (ix)
   8C9E DD 66 F9      [19] 7861 	ld	h,-7 (ix)
   8CA1 4E            [ 7] 7862 	ld	c, (hl)
   8CA2 06 00         [ 7] 7863 	ld	b, #0x00
   8CA4 C5            [11] 7864 	push	bc
   8CA5 2A F2 5E      [16] 7865 	ld	hl, (_ctMainLoop)
   8CA8 E5            [11] 7866 	push	hl
   8CA9 CD C2 5D      [17] 7867 	call	__modsint
   8CAC F1            [10] 7868 	pop	af
   8CAD F1            [10] 7869 	pop	af
   8CAE 7C            [ 4] 7870 	ld	a, h
                           7871 ;src/main.c:1766: z = 0;
   8CAF B5            [ 4] 7872 	or	a,l
   8CB0 C2 AD 8D      [10] 7873 	jp	NZ,00168$
   8CB3 4F            [ 4] 7874 	ld	c,a
                           7875 ;src/main.c:1768: if (TwoPlayers)
   8CB4 3A D4 5E      [13] 7876 	ld	a,(#_TwoPlayers + 0)
   8CB7 B7            [ 4] 7877 	or	a, a
   8CB8 CA 3E 8D      [10] 7878 	jp	Z, 00154$
                           7879 ;src/main.c:1769: z = Abs(pSpr->x - spr[1].x)*2 + Abs(pSpr->y - spr[1].y) <
   8CBB DD 6E F6      [19] 7880 	ld	l,-10 (ix)
   8CBE DD 66 F7      [19] 7881 	ld	h,-9 (ix)
   8CC1 4E            [ 7] 7882 	ld	c, (hl)
   8CC2 06 00         [ 7] 7883 	ld	b, #0x00
   8CC4 21 1B 5F      [10] 7884 	ld	hl, #_spr + 17
   8CC7 5E            [ 7] 7885 	ld	e, (hl)
   8CC8 16 00         [ 7] 7886 	ld	d, #0x00
   8CCA 79            [ 4] 7887 	ld	a, c
   8CCB 93            [ 4] 7888 	sub	a, e
   8CCC 6F            [ 4] 7889 	ld	l, a
   8CCD 78            [ 4] 7890 	ld	a, b
   8CCE 9A            [ 4] 7891 	sbc	a, d
   8CCF 67            [ 4] 7892 	ld	h, a
   8CD0 CD 83 5F      [17] 7893 	call	_Abs
   8CD3 29            [11] 7894 	add	hl, hl
   8CD4 4D            [ 4] 7895 	ld	c, l
   8CD5 44            [ 4] 7896 	ld	b, h
   8CD6 DD 6E FE      [19] 7897 	ld	l,-2 (ix)
   8CD9 DD 66 FF      [19] 7898 	ld	h,-1 (ix)
   8CDC 5E            [ 7] 7899 	ld	e, (hl)
   8CDD 16 00         [ 7] 7900 	ld	d, #0x00
   8CDF 21 1C 5F      [10] 7901 	ld	hl, #_spr + 18
   8CE2 6E            [ 7] 7902 	ld	l, (hl)
   8CE3 26 00         [ 7] 7903 	ld	h, #0x00
   8CE5 7B            [ 4] 7904 	ld	a, e
   8CE6 95            [ 4] 7905 	sub	a, l
   8CE7 6F            [ 4] 7906 	ld	l, a
   8CE8 7A            [ 4] 7907 	ld	a, d
   8CE9 9C            [ 4] 7908 	sbc	a, h
   8CEA 67            [ 4] 7909 	ld	h, a
   8CEB C5            [11] 7910 	push	bc
   8CEC CD 83 5F      [17] 7911 	call	_Abs
   8CEF C1            [10] 7912 	pop	bc
   8CF0 09            [11] 7913 	add	hl,bc
   8CF1 DD 75 FC      [19] 7914 	ld	-4 (ix), l
   8CF4 DD 74 FD      [19] 7915 	ld	-3 (ix), h
                           7916 ;src/main.c:1770: Abs(pSpr->x - spr[0].x)*2 + Abs(pSpr->y - spr[0].y);
   8CF7 DD 6E F6      [19] 7917 	ld	l,-10 (ix)
   8CFA DD 66 F7      [19] 7918 	ld	h,-9 (ix)
   8CFD 4E            [ 7] 7919 	ld	c, (hl)
   8CFE 06 00         [ 7] 7920 	ld	b, #0x00
   8D00 21 0C 5F      [10] 7921 	ld	hl, #_spr + 2
   8D03 5E            [ 7] 7922 	ld	e, (hl)
   8D04 16 00         [ 7] 7923 	ld	d, #0x00
   8D06 79            [ 4] 7924 	ld	a, c
   8D07 93            [ 4] 7925 	sub	a, e
   8D08 6F            [ 4] 7926 	ld	l, a
   8D09 78            [ 4] 7927 	ld	a, b
   8D0A 9A            [ 4] 7928 	sbc	a, d
   8D0B 67            [ 4] 7929 	ld	h, a
   8D0C CD 83 5F      [17] 7930 	call	_Abs
   8D0F 29            [11] 7931 	add	hl, hl
   8D10 4D            [ 4] 7932 	ld	c, l
   8D11 44            [ 4] 7933 	ld	b, h
   8D12 DD 6E FE      [19] 7934 	ld	l,-2 (ix)
   8D15 DD 66 FF      [19] 7935 	ld	h,-1 (ix)
   8D18 5E            [ 7] 7936 	ld	e, (hl)
   8D19 16 00         [ 7] 7937 	ld	d, #0x00
   8D1B 21 0D 5F      [10] 7938 	ld	hl, #_spr + 3
   8D1E 6E            [ 7] 7939 	ld	l, (hl)
   8D1F 26 00         [ 7] 7940 	ld	h, #0x00
   8D21 7B            [ 4] 7941 	ld	a, e
   8D22 95            [ 4] 7942 	sub	a, l
   8D23 6F            [ 4] 7943 	ld	l, a
   8D24 7A            [ 4] 7944 	ld	a, d
   8D25 9C            [ 4] 7945 	sbc	a, h
   8D26 67            [ 4] 7946 	ld	h, a
   8D27 C5            [11] 7947 	push	bc
   8D28 CD 83 5F      [17] 7948 	call	_Abs
   8D2B C1            [10] 7949 	pop	bc
   8D2C 09            [11] 7950 	add	hl, bc
   8D2D DD 7E FC      [19] 7951 	ld	a, -4 (ix)
   8D30 95            [ 4] 7952 	sub	a, l
   8D31 DD 7E FD      [19] 7953 	ld	a, -3 (ix)
   8D34 9C            [ 4] 7954 	sbc	a, h
   8D35 E2 3A 8D      [10] 7955 	jp	PO, 00314$
   8D38 EE 80         [ 7] 7956 	xor	a, #0x80
   8D3A                    7957 00314$:
   8D3A 07            [ 4] 7958 	rlca
   8D3B E6 01         [ 7] 7959 	and	a,#0x01
   8D3D 4F            [ 4] 7960 	ld	c, a
   8D3E                    7961 00154$:
                           7962 ;src/main.c:1772: if (pSpr->x < spr[z].x) {
   8D3E DD 6E F6      [19] 7963 	ld	l,-10 (ix)
   8D41 DD 66 F7      [19] 7964 	ld	h,-9 (ix)
   8D44 46            [ 7] 7965 	ld	b, (hl)
   8D45 11 0A 5F      [10] 7966 	ld	de, #_spr+0
   8D48 D5            [11] 7967 	push	de
   8D49 59            [ 4] 7968 	ld	e,c
   8D4A 16 00         [ 7] 7969 	ld	d,#0x00
   8D4C 6B            [ 4] 7970 	ld	l, e
   8D4D 62            [ 4] 7971 	ld	h, d
   8D4E 29            [11] 7972 	add	hl, hl
   8D4F 19            [11] 7973 	add	hl, de
   8D50 29            [11] 7974 	add	hl, hl
   8D51 19            [11] 7975 	add	hl, de
   8D52 29            [11] 7976 	add	hl, hl
   8D53 19            [11] 7977 	add	hl, de
   8D54 D1            [10] 7978 	pop	de
   8D55 19            [11] 7979 	add	hl,de
   8D56 5D            [ 4] 7980 	ld	e,l
   8D57 54            [ 4] 7981 	ld	d,h
   8D58 23            [ 6] 7982 	inc	hl
   8D59 23            [ 6] 7983 	inc	hl
   8D5A 4E            [ 7] 7984 	ld	c, (hl)
   8D5B 78            [ 4] 7985 	ld	a, b
   8D5C 91            [ 4] 7986 	sub	a, c
   8D5D 30 12         [12] 7987 	jr	NC,00158$
                           7988 ;src/main.c:1773: pSpr->x++;
   8D5F 04            [ 4] 7989 	inc	b
   8D60 DD 6E F6      [19] 7990 	ld	l,-10 (ix)
   8D63 DD 66 F7      [19] 7991 	ld	h,-9 (ix)
   8D66 70            [ 7] 7992 	ld	(hl), b
                           7993 ;src/main.c:1774: pSpr->dir = D_right;
   8D67 DD 6E F3      [19] 7994 	ld	l,-13 (ix)
   8D6A DD 66 F4      [19] 7995 	ld	h,-12 (ix)
   8D6D 36 03         [10] 7996 	ld	(hl), #0x03
   8D6F 18 14         [12] 7997 	jr	00159$
   8D71                    7998 00158$:
                           7999 ;src/main.c:1777: else if (pSpr->x > spr[z].x) {
   8D71 79            [ 4] 8000 	ld	a, c
   8D72 90            [ 4] 8001 	sub	a, b
   8D73 30 10         [12] 8002 	jr	NC,00159$
                           8003 ;src/main.c:1778: pSpr->x--;
   8D75 05            [ 4] 8004 	dec	b
   8D76 DD 6E F6      [19] 8005 	ld	l,-10 (ix)
   8D79 DD 66 F7      [19] 8006 	ld	h,-9 (ix)
   8D7C 70            [ 7] 8007 	ld	(hl), b
                           8008 ;src/main.c:1779: pSpr->dir = D_left;
   8D7D DD 6E F3      [19] 8009 	ld	l,-13 (ix)
   8D80 DD 66 F4      [19] 8010 	ld	h,-12 (ix)
   8D83 36 02         [10] 8011 	ld	(hl), #0x02
   8D85                    8012 00159$:
                           8013 ;src/main.c:1782: if (pSpr->y < spr[z].y) {
   8D85 DD 6E FE      [19] 8014 	ld	l,-2 (ix)
   8D88 DD 66 FF      [19] 8015 	ld	h,-1 (ix)
   8D8B 4E            [ 7] 8016 	ld	c, (hl)
   8D8C EB            [ 4] 8017 	ex	de,hl
   8D8D 23            [ 6] 8018 	inc	hl
   8D8E 23            [ 6] 8019 	inc	hl
   8D8F 23            [ 6] 8020 	inc	hl
   8D90 46            [ 7] 8021 	ld	b, (hl)
   8D91 79            [ 4] 8022 	ld	a, c
   8D92 90            [ 4] 8023 	sub	a, b
   8D93 30 0B         [12] 8024 	jr	NC,00163$
                           8025 ;src/main.c:1783: pSpr->y+=2;
   8D95 0C            [ 4] 8026 	inc	c
   8D96 0C            [ 4] 8027 	inc	c
   8D97 DD 6E FE      [19] 8028 	ld	l,-2 (ix)
   8D9A DD 66 FF      [19] 8029 	ld	h,-1 (ix)
   8D9D 71            [ 7] 8030 	ld	(hl), c
   8D9E 18 0D         [12] 8031 	jr	00168$
   8DA0                    8032 00163$:
                           8033 ;src/main.c:1786: else if (pSpr->y > spr[z].y) {
   8DA0 78            [ 4] 8034 	ld	a, b
   8DA1 91            [ 4] 8035 	sub	a, c
   8DA2 30 09         [12] 8036 	jr	NC,00168$
                           8037 ;src/main.c:1787: pSpr->y-=2;
   8DA4 0D            [ 4] 8038 	dec	c
   8DA5 0D            [ 4] 8039 	dec	c
   8DA6 DD 6E FE      [19] 8040 	ld	l,-2 (ix)
   8DA9 DD 66 FF      [19] 8041 	ld	h,-1 (ix)
   8DAC 71            [ 7] 8042 	ld	(hl), c
                           8043 ;src/main.c:1791: }
   8DAD                    8044 00168$:
   8DAD DD F9         [10] 8045 	ld	sp, ix
   8DAF DD E1         [14] 8046 	pop	ix
   8DB1 C9            [10] 8047 	ret
                           8048 ;src/main.c:1796: void SetEnemyParams(u8 i, u8 ident, u8 mov, u8 dir, u8 speed, u8 x, u8 y, u8 minV, u8 maxV) {
                           8049 ;	---------------------------------
                           8050 ; Function SetEnemyParams
                           8051 ; ---------------------------------
   8DB2                    8052 _SetEnemyParams::
   8DB2 DD E5         [15] 8053 	push	ix
   8DB4 DD 21 00 00   [14] 8054 	ld	ix,#0
   8DB8 DD 39         [15] 8055 	add	ix,sp
                           8056 ;src/main.c:1797: spr[i].num = i;
   8DBA 01 0A 5F      [10] 8057 	ld	bc, #_spr+0
   8DBD DD 5E 04      [19] 8058 	ld	e,4 (ix)
   8DC0 16 00         [ 7] 8059 	ld	d,#0x00
   8DC2 6B            [ 4] 8060 	ld	l, e
   8DC3 62            [ 4] 8061 	ld	h, d
   8DC4 29            [11] 8062 	add	hl, hl
   8DC5 19            [11] 8063 	add	hl, de
   8DC6 29            [11] 8064 	add	hl, hl
   8DC7 19            [11] 8065 	add	hl, de
   8DC8 29            [11] 8066 	add	hl, hl
   8DC9 19            [11] 8067 	add	hl, de
   8DCA 09            [11] 8068 	add	hl,bc
   8DCB 4D            [ 4] 8069 	ld	c, l
   8DCC 44            [ 4] 8070 	ld	b, h
   8DCD DD 7E 04      [19] 8071 	ld	a, 4 (ix)
   8DD0 02            [ 7] 8072 	ld	(bc), a
                           8073 ;src/main.c:1798: spr[i].ident = ident; 
   8DD1 59            [ 4] 8074 	ld	e, c
   8DD2 50            [ 4] 8075 	ld	d, b
   8DD3 13            [ 6] 8076 	inc	de
   8DD4 DD 7E 05      [19] 8077 	ld	a, 5 (ix)
   8DD7 12            [ 7] 8078 	ld	(de), a
                           8079 ;src/main.c:1799: spr[i].objNum_mov = mov;	 
   8DD8 21 0C 00      [10] 8080 	ld	hl, #0x000c
   8DDB 09            [11] 8081 	add	hl, bc
   8DDC DD 7E 06      [19] 8082 	ld	a, 6 (ix)
   8DDF 77            [ 7] 8083 	ld	(hl), a
                           8084 ;src/main.c:1800: spr[i].dir = dir; 
   8DE0 21 07 00      [10] 8085 	ld	hl, #0x0007
   8DE3 09            [11] 8086 	add	hl, bc
   8DE4 DD 7E 07      [19] 8087 	ld	a, 7 (ix)
   8DE7 77            [ 7] 8088 	ld	(hl), a
                           8089 ;src/main.c:1801: spr[i].lives_speed = speed;
   8DE8 21 0B 00      [10] 8090 	ld	hl, #0x000b
   8DEB 09            [11] 8091 	add	hl, bc
   8DEC DD 7E 08      [19] 8092 	ld	a, 8 (ix)
   8DEF 77            [ 7] 8093 	ld	(hl), a
                           8094 ;src/main.c:1802: spr[i].x = spr[i].px = x;
   8DF0 59            [ 4] 8095 	ld	e, c
   8DF1 50            [ 4] 8096 	ld	d, b
   8DF2 13            [ 6] 8097 	inc	de
   8DF3 13            [ 6] 8098 	inc	de
   8DF4 21 04 00      [10] 8099 	ld	hl, #0x0004
   8DF7 09            [11] 8100 	add	hl, bc
   8DF8 DD 7E 09      [19] 8101 	ld	a, 9 (ix)
   8DFB 77            [ 7] 8102 	ld	(hl), a
   8DFC DD 7E 09      [19] 8103 	ld	a, 9 (ix)
   8DFF 12            [ 7] 8104 	ld	(de), a
                           8105 ;src/main.c:1803: spr[i].y = spr[i].py = y;
   8E00 59            [ 4] 8106 	ld	e, c
   8E01 50            [ 4] 8107 	ld	d, b
   8E02 13            [ 6] 8108 	inc	de
   8E03 13            [ 6] 8109 	inc	de
   8E04 13            [ 6] 8110 	inc	de
   8E05 21 05 00      [10] 8111 	ld	hl, #0x0005
   8E08 09            [11] 8112 	add	hl, bc
   8E09 DD 7E 0A      [19] 8113 	ld	a, 10 (ix)
   8E0C 77            [ 7] 8114 	ld	(hl), a
   8E0D DD 7E 0A      [19] 8115 	ld	a, 10 (ix)
   8E10 12            [ 7] 8116 	ld	(de), a
                           8117 ;src/main.c:1804: spr[i].print_minV = minV;
   8E11 21 0D 00      [10] 8118 	ld	hl, #0x000d
   8E14 09            [11] 8119 	add	hl, bc
   8E15 DD 7E 0B      [19] 8120 	ld	a, 11 (ix)
   8E18 77            [ 7] 8121 	ld	(hl), a
                           8122 ;src/main.c:1805: spr[i].power_maxV = maxV;
   8E19 21 0E 00      [10] 8123 	ld	hl, #0x000e
   8E1C 09            [11] 8124 	add	hl, bc
   8E1D DD 7E 0C      [19] 8125 	ld	a, 12 (ix)
   8E20 77            [ 7] 8126 	ld	(hl), a
   8E21 DD E1         [14] 8127 	pop	ix
   8E23 C9            [10] 8128 	ret
                           8129 ;src/main.c:1815: void SetEnemies() {
                           8130 ;	---------------------------------
                           8131 ; Function SetEnemies
                           8132 ; ---------------------------------
   8E24                    8133 _SetEnemies::
                           8134 ;src/main.c:1816: switch (nMap) {
   8E24 3E 0B         [ 7] 8135 	ld	a, #0x0b
   8E26 FD 21 D0 5E   [14] 8136 	ld	iy, #_nMap
   8E2A FD 96 00      [19] 8137 	sub	a, 0 (iy)
   8E2D DA 03 97      [10] 8138 	jp	C, 00113$
   8E30 FD 4E 00      [19] 8139 	ld	c, 0 (iy)
   8E33 06 00         [ 7] 8140 	ld	b, #0x00
   8E35 21 3C 8E      [10] 8141 	ld	hl, #00126$
   8E38 09            [11] 8142 	add	hl, bc
   8E39 09            [11] 8143 	add	hl, bc
   8E3A 09            [11] 8144 	add	hl, bc
   8E3B E9            [ 4] 8145 	jp	(hl)
   8E3C                    8146 00126$:
   8E3C C3 60 8E      [10] 8147 	jp	00101$
   8E3F C3 17 8F      [10] 8148 	jp	00102$
   8E42 C3 CF 8F      [10] 8149 	jp	00103$
   8E45 C3 88 90      [10] 8150 	jp	00104$
   8E48 C3 41 91      [10] 8151 	jp	00105$
   8E4B C3 FB 91      [10] 8152 	jp	00106$
   8E4E C3 B4 92      [10] 8153 	jp	00107$
   8E51 C3 6E 93      [10] 8154 	jp	00108$
   8E54 C3 26 94      [10] 8155 	jp	00109$
   8E57 C3 DF 94      [10] 8156 	jp	00110$
   8E5A C3 97 95      [10] 8157 	jp	00111$
   8E5D C3 4D 96      [10] 8158 	jp	00112$
                           8159 ;src/main.c:1818: case 0: {			 
   8E60                    8160 00101$:
                           8161 ;src/main.c:1820: SetEnemyParams(2, SENTINEL,	M_linear_X, 	D_left,     1, 73, 158,   2,  73);						
   8E60 21 02 49      [10] 8162 	ld	hl, #0x4902
   8E63 E5            [11] 8163 	push	hl
   8E64 21 49 9E      [10] 8164 	ld	hl, #0x9e49
   8E67 E5            [11] 8165 	push	hl
   8E68 21 02 01      [10] 8166 	ld	hl, #0x0102
   8E6B E5            [11] 8167 	push	hl
   8E6C 26 00         [ 7] 8168 	ld	h, #0x00
   8E6E E5            [11] 8169 	push	hl
   8E6F 3E 02         [ 7] 8170 	ld	a, #0x02
   8E71 F5            [11] 8171 	push	af
   8E72 33            [ 6] 8172 	inc	sp
   8E73 CD B2 8D      [17] 8173 	call	_SetEnemyParams
   8E76 21 09 00      [10] 8174 	ld	hl, #9
   8E79 39            [11] 8175 	add	hl, sp
   8E7A F9            [ 6] 8176 	ld	sp, hl
                           8177 ;src/main.c:1821: SetEnemyParams(3, SENTINEL,	M_linear_X, 	D_right,    1,  3, 110,   2,  73);
   8E7B 21 02 49      [10] 8178 	ld	hl, #0x4902
   8E7E E5            [11] 8179 	push	hl
   8E7F 21 03 6E      [10] 8180 	ld	hl, #0x6e03
   8E82 E5            [11] 8181 	push	hl
   8E83 26 01         [ 7] 8182 	ld	h, #0x01
   8E85 E5            [11] 8183 	push	hl
   8E86 21 02 00      [10] 8184 	ld	hl, #0x0002
   8E89 E5            [11] 8185 	push	hl
   8E8A 3E 03         [ 7] 8186 	ld	a, #0x03
   8E8C F5            [11] 8187 	push	af
   8E8D 33            [ 6] 8188 	inc	sp
   8E8E CD B2 8D      [17] 8189 	call	_SetEnemyParams
   8E91 21 09 00      [10] 8190 	ld	hl, #9
   8E94 39            [11] 8191 	add	hl, sp
   8E95 F9            [ 6] 8192 	ld	sp, hl
                           8193 ;src/main.c:1822: SetEnemyParams(4, SENTINEL,	M_linear_X, 	D_left,     1, 73,  62,  40,  73);
   8E96 21 28 49      [10] 8194 	ld	hl, #0x4928
   8E99 E5            [11] 8195 	push	hl
   8E9A 21 49 3E      [10] 8196 	ld	hl, #0x3e49
   8E9D E5            [11] 8197 	push	hl
   8E9E 21 02 01      [10] 8198 	ld	hl, #0x0102
   8EA1 E5            [11] 8199 	push	hl
   8EA2 26 00         [ 7] 8200 	ld	h, #0x00
   8EA4 E5            [11] 8201 	push	hl
   8EA5 3E 04         [ 7] 8202 	ld	a, #0x04
   8EA7 F5            [11] 8203 	push	af
   8EA8 33            [ 6] 8204 	inc	sp
   8EA9 CD B2 8D      [17] 8205 	call	_SetEnemyParams
   8EAC 21 09 00      [10] 8206 	ld	hl, #9
   8EAF 39            [11] 8207 	add	hl, sp
   8EB0 F9            [ 6] 8208 	ld	sp, hl
                           8209 ;src/main.c:1823: SetEnemyParams(5, SENTINEL,	M_linear_X, 	D_right,    1,  2,  62,   2,  35);
   8EB1 21 02 23      [10] 8210 	ld	hl, #0x2302
   8EB4 E5            [11] 8211 	push	hl
   8EB5 26 3E         [ 7] 8212 	ld	h, #0x3e
   8EB7 E5            [11] 8213 	push	hl
   8EB8 21 03 01      [10] 8214 	ld	hl, #0x0103
   8EBB E5            [11] 8215 	push	hl
   8EBC 21 02 00      [10] 8216 	ld	hl, #0x0002
   8EBF E5            [11] 8217 	push	hl
   8EC0 3E 05         [ 7] 8218 	ld	a, #0x05
   8EC2 F5            [11] 8219 	push	af
   8EC3 33            [ 6] 8220 	inc	sp
   8EC4 CD B2 8D      [17] 8221 	call	_SetEnemyParams
   8EC7 21 09 00      [10] 8222 	ld	hl, #9
   8ECA 39            [11] 8223 	add	hl, sp
   8ECB F9            [ 6] 8224 	ld	sp, hl
                           8225 ;src/main.c:1825: spr[0].x = spr[0].px = 6; 
   8ECC 21 0E 5F      [10] 8226 	ld	hl, #(_spr + 0x0004)
   8ECF 36 06         [10] 8227 	ld	(hl), #0x06
   8ED1 21 0C 5F      [10] 8228 	ld	hl, #(_spr + 0x0002)
   8ED4 36 06         [10] 8229 	ld	(hl), #0x06
                           8230 ;src/main.c:1826: spr[0].y = spr[0].py = 178;			
   8ED6 21 0F 5F      [10] 8231 	ld	hl, #(_spr + 0x0005)
   8ED9 36 B2         [10] 8232 	ld	(hl), #0xb2
   8EDB 21 0D 5F      [10] 8233 	ld	hl, #(_spr + 0x0003)
   8EDE 36 B2         [10] 8234 	ld	(hl), #0xb2
                           8235 ;src/main.c:1828: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk0_end);
   8EE0 21 48 4A      [10] 8236 	ld	hl, #(_mappk0 + 0x0279)
   8EE3 E5            [11] 8237 	push	hl
   8EE4 21 00 16      [10] 8238 	ld	hl, #0x1600
   8EE7 E5            [11] 8239 	push	hl
   8EE8 CD 5A 5C      [17] 8240 	call	_cpct_zx7b_decrunch_s
                           8241 ;src/main.c:1830: lName = "1;1@@GARDENS";
   8EEB 21 21 97      [10] 8242 	ld	hl, #___str_23+0
   8EEE 22 D2 5E      [16] 8243 	ld	(_lName), hl
                           8244 ;src/main.c:1832: doorKey[0] = 4;	// toad snot
   8EF1 21 DF 5E      [10] 8245 	ld	hl, #_doorKey
   8EF4 36 04         [10] 8246 	ld	(hl), #0x04
                           8247 ;src/main.c:1833: doorKey[1] = 5;	// diamond dust
   8EF6 21 E0 5E      [10] 8248 	ld	hl, #(_doorKey + 0x0001)
   8EF9 36 05         [10] 8249 	ld	(hl), #0x05
                           8250 ;src/main.c:1834: doorKey[2] = 4;	// toad snot
   8EFB 21 E1 5E      [10] 8251 	ld	hl, #(_doorKey + 0x0002)
   8EFE 36 04         [10] 8252 	ld	(hl), #0x04
                           8253 ;src/main.c:1835: doorKey[3] = 5;	// diamond dust
   8F00 21 E2 5E      [10] 8254 	ld	hl, #(_doorKey + 0x0003)
   8F03 36 05         [10] 8255 	ld	(hl), #0x05
                           8256 ;src/main.c:1836: doorKey[4] = 4; // toad snot
   8F05 21 E3 5E      [10] 8257 	ld	hl, #(_doorKey + 0x0004)
   8F08 36 04         [10] 8258 	ld	(hl), #0x04
                           8259 ;src/main.c:1838: storeX = 51;
   8F0A 21 E9 5E      [10] 8260 	ld	hl,#_storeX + 0
   8F0D 36 33         [10] 8261 	ld	(hl), #0x33
                           8262 ;src/main.c:1839: storeY = 11;
   8F0F 21 EA 5E      [10] 8263 	ld	hl,#_storeY + 0
   8F12 36 0B         [10] 8264 	ld	(hl), #0x0b
                           8265 ;src/main.c:1840: break;
   8F14 C3 03 97      [10] 8266 	jp	00113$
                           8267 ;src/main.c:1843: case 1: {
   8F17                    8268 00102$:
                           8269 ;src/main.c:1845: SetEnemyParams(2, NOBODY,	M_linear_X, 	D_left,     1,  0,   0,   0,   0);
   8F17 21 00 00      [10] 8270 	ld	hl, #0x0000
   8F1A E5            [11] 8271 	push	hl
   8F1B 2E 00         [ 7] 8272 	ld	l, #0x00
   8F1D E5            [11] 8273 	push	hl
   8F1E 21 02 01      [10] 8274 	ld	hl, #0x0102
   8F21 E5            [11] 8275 	push	hl
   8F22 21 09 00      [10] 8276 	ld	hl, #0x0009
   8F25 E5            [11] 8277 	push	hl
   8F26 3E 02         [ 7] 8278 	ld	a, #0x02
   8F28 F5            [11] 8279 	push	af
   8F29 33            [ 6] 8280 	inc	sp
   8F2A CD B2 8D      [17] 8281 	call	_SetEnemyParams
   8F2D 21 09 00      [10] 8282 	ld	hl, #9
   8F30 39            [11] 8283 	add	hl, sp
   8F31 F9            [ 6] 8284 	ld	sp, hl
                           8285 ;src/main.c:1846: SetEnemyParams(3, SENTINEL,	M_linear_X, 	D_right,    1,  2, 114,   2,  73);						
   8F32 21 02 49      [10] 8286 	ld	hl, #0x4902
   8F35 E5            [11] 8287 	push	hl
   8F36 26 72         [ 7] 8288 	ld	h, #0x72
   8F38 E5            [11] 8289 	push	hl
   8F39 21 03 01      [10] 8290 	ld	hl, #0x0103
   8F3C E5            [11] 8291 	push	hl
   8F3D 21 02 00      [10] 8292 	ld	hl, #0x0002
   8F40 E5            [11] 8293 	push	hl
   8F41 3E 03         [ 7] 8294 	ld	a, #0x03
   8F43 F5            [11] 8295 	push	af
   8F44 33            [ 6] 8296 	inc	sp
   8F45 CD B2 8D      [17] 8297 	call	_SetEnemyParams
   8F48 21 09 00      [10] 8298 	ld	hl, #9
   8F4B 39            [11] 8299 	add	hl, sp
   8F4C F9            [ 6] 8300 	ld	sp, hl
                           8301 ;src/main.c:1847: SetEnemyParams(4, KNIGHT, 	M_linear_XY,    D_right,    1, 10,  62,   0,   0);
   8F4D 21 00 00      [10] 8302 	ld	hl, #0x0000
   8F50 E5            [11] 8303 	push	hl
   8F51 21 0A 3E      [10] 8304 	ld	hl, #0x3e0a
   8F54 E5            [11] 8305 	push	hl
   8F55 21 03 01      [10] 8306 	ld	hl, #0x0103
   8F58 E5            [11] 8307 	push	hl
   8F59 26 02         [ 7] 8308 	ld	h, #0x02
   8F5B E5            [11] 8309 	push	hl
   8F5C 3E 04         [ 7] 8310 	ld	a, #0x04
   8F5E F5            [11] 8311 	push	af
   8F5F 33            [ 6] 8312 	inc	sp
   8F60 CD B2 8D      [17] 8313 	call	_SetEnemyParams
   8F63 21 09 00      [10] 8314 	ld	hl, #9
   8F66 39            [11] 8315 	add	hl, sp
   8F67 F9            [ 6] 8316 	ld	sp, hl
                           8317 ;src/main.c:1848: SetEnemyParams(5, KNIGHT,	M_linear_XY,	D_down,     1,  2,  38,   0,   0);
   8F68 21 00 00      [10] 8318 	ld	hl, #0x0000
   8F6B E5            [11] 8319 	push	hl
   8F6C 21 02 26      [10] 8320 	ld	hl, #0x2602
   8F6F E5            [11] 8321 	push	hl
   8F70 21 01 01      [10] 8322 	ld	hl, #0x0101
   8F73 E5            [11] 8323 	push	hl
   8F74 21 03 02      [10] 8324 	ld	hl, #0x0203
   8F77 E5            [11] 8325 	push	hl
   8F78 3E 05         [ 7] 8326 	ld	a, #0x05
   8F7A F5            [11] 8327 	push	af
   8F7B 33            [ 6] 8328 	inc	sp
   8F7C CD B2 8D      [17] 8329 	call	_SetEnemyParams
   8F7F 21 09 00      [10] 8330 	ld	hl, #9
   8F82 39            [11] 8331 	add	hl, sp
   8F83 F9            [ 6] 8332 	ld	sp, hl
                           8333 ;src/main.c:1850: spr[0].x = spr[0].px = 58; 
   8F84 21 0E 5F      [10] 8334 	ld	hl, #(_spr + 0x0004)
   8F87 36 3A         [10] 8335 	ld	(hl), #0x3a
   8F89 21 0C 5F      [10] 8336 	ld	hl, #(_spr + 0x0002)
   8F8C 36 3A         [10] 8337 	ld	(hl), #0x3a
                           8338 ;src/main.c:1851: spr[0].y = spr[0].py = 178;	
   8F8E 21 0F 5F      [10] 8339 	ld	hl, #(_spr + 0x0005)
   8F91 36 B2         [10] 8340 	ld	(hl), #0xb2
   8F93 21 0D 5F      [10] 8341 	ld	hl, #(_spr + 0x0003)
   8F96 36 B2         [10] 8342 	ld	(hl), #0xb2
                           8343 ;src/main.c:1853: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk1_end);
   8F98 21 CE 47      [10] 8344 	ld	hl, #(_mappk1 + 0x02a0)
   8F9B E5            [11] 8345 	push	hl
   8F9C 21 00 16      [10] 8346 	ld	hl, #0x1600
   8F9F E5            [11] 8347 	push	hl
   8FA0 CD 5A 5C      [17] 8348 	call	_cpct_zx7b_decrunch_s
                           8349 ;src/main.c:1855: lName = "1;2@@GARDENS";
   8FA3 21 2E 97      [10] 8350 	ld	hl, #___str_24+0
   8FA6 22 D2 5E      [16] 8351 	ld	(_lName), hl
                           8352 ;src/main.c:1857: doorKey[0] = 4;	// toad snot
   8FA9 21 DF 5E      [10] 8353 	ld	hl, #_doorKey
   8FAC 36 04         [10] 8354 	ld	(hl), #0x04
                           8355 ;src/main.c:1858: doorKey[1] = 6;	// newt eye
   8FAE 21 E0 5E      [10] 8356 	ld	hl, #(_doorKey + 0x0001)
   8FB1 36 06         [10] 8357 	ld	(hl), #0x06
                           8358 ;src/main.c:1859: doorKey[2] = 5; // diamond dust
   8FB3 21 E1 5E      [10] 8359 	ld	hl, #(_doorKey + 0x0002)
   8FB6 36 05         [10] 8360 	ld	(hl), #0x05
                           8361 ;src/main.c:1860: doorKey[3] = 6; // newt eye
   8FB8 21 E2 5E      [10] 8362 	ld	hl, #(_doorKey + 0x0003)
   8FBB 36 06         [10] 8363 	ld	(hl), #0x06
                           8364 ;src/main.c:1861: doorKey[4] = 4; // toad snot
   8FBD 21 E3 5E      [10] 8365 	ld	hl, #(_doorKey + 0x0004)
   8FC0 36 04         [10] 8366 	ld	(hl), #0x04
                           8367 ;src/main.c:1863: storeX = 51;
   8FC2 21 E9 5E      [10] 8368 	ld	hl,#_storeX + 0
   8FC5 36 33         [10] 8369 	ld	(hl), #0x33
                           8370 ;src/main.c:1864: storeY = 55;
   8FC7 21 EA 5E      [10] 8371 	ld	hl,#_storeY + 0
   8FCA 36 37         [10] 8372 	ld	(hl), #0x37
                           8373 ;src/main.c:1865: break;
   8FCC C3 03 97      [10] 8374 	jp	00113$
                           8375 ;src/main.c:1868: case 2: {			 
   8FCF                    8376 00103$:
                           8377 ;src/main.c:1870: SetEnemyParams(2, GHOST,	M_linear_XY, 	D_right,    1,  3, 120,   0,   0);						
   8FCF 21 00 00      [10] 8378 	ld	hl, #0x0000
   8FD2 E5            [11] 8379 	push	hl
   8FD3 21 03 78      [10] 8380 	ld	hl, #0x7803
   8FD6 E5            [11] 8381 	push	hl
   8FD7 26 01         [ 7] 8382 	ld	h, #0x01
   8FD9 E5            [11] 8383 	push	hl
   8FDA 21 04 02      [10] 8384 	ld	hl, #0x0204
   8FDD E5            [11] 8385 	push	hl
   8FDE 3E 02         [ 7] 8386 	ld	a, #0x02
   8FE0 F5            [11] 8387 	push	af
   8FE1 33            [ 6] 8388 	inc	sp
   8FE2 CD B2 8D      [17] 8389 	call	_SetEnemyParams
   8FE5 21 09 00      [10] 8390 	ld	hl, #9
   8FE8 39            [11] 8391 	add	hl, sp
   8FE9 F9            [ 6] 8392 	ld	sp, hl
                           8393 ;src/main.c:1871: SetEnemyParams(3, GHOST,	M_linear_XY, 	D_left,     1, 73,  99,   0,   0);
   8FEA 21 00 00      [10] 8394 	ld	hl, #0x0000
   8FED E5            [11] 8395 	push	hl
   8FEE 21 49 63      [10] 8396 	ld	hl, #0x6349
   8FF1 E5            [11] 8397 	push	hl
   8FF2 21 02 01      [10] 8398 	ld	hl, #0x0102
   8FF5 E5            [11] 8399 	push	hl
   8FF6 21 04 02      [10] 8400 	ld	hl, #0x0204
   8FF9 E5            [11] 8401 	push	hl
   8FFA 3E 03         [ 7] 8402 	ld	a, #0x03
   8FFC F5            [11] 8403 	push	af
   8FFD 33            [ 6] 8404 	inc	sp
   8FFE CD B2 8D      [17] 8405 	call	_SetEnemyParams
   9001 21 09 00      [10] 8406 	ld	hl, #9
   9004 39            [11] 8407 	add	hl, sp
   9005 F9            [ 6] 8408 	ld	sp, hl
                           8409 ;src/main.c:1872: SetEnemyParams(4, BAT,	 	M_linear_X,    	D_right,    1, 22,  58,  22,  60);																		
   9006 21 16 3C      [10] 8410 	ld	hl, #0x3c16
   9009 E5            [11] 8411 	push	hl
   900A 26 3A         [ 7] 8412 	ld	h, #0x3a
   900C E5            [11] 8413 	push	hl
   900D 21 03 01      [10] 8414 	ld	hl, #0x0103
   9010 E5            [11] 8415 	push	hl
   9011 21 05 00      [10] 8416 	ld	hl, #0x0005
   9014 E5            [11] 8417 	push	hl
   9015 3E 04         [ 7] 8418 	ld	a, #0x04
   9017 F5            [11] 8419 	push	af
   9018 33            [ 6] 8420 	inc	sp
   9019 CD B2 8D      [17] 8421 	call	_SetEnemyParams
   901C 21 09 00      [10] 8422 	ld	hl, #9
   901F 39            [11] 8423 	add	hl, sp
   9020 F9            [ 6] 8424 	ld	sp, hl
                           8425 ;src/main.c:1873: SetEnemyParams(5, WITCH,	M_linear_X,		D_left,     1,  3,  78,   2,  73);
   9021 21 02 49      [10] 8426 	ld	hl, #0x4902
   9024 E5            [11] 8427 	push	hl
   9025 21 03 4E      [10] 8428 	ld	hl, #0x4e03
   9028 E5            [11] 8429 	push	hl
   9029 21 02 01      [10] 8430 	ld	hl, #0x0102
   902C E5            [11] 8431 	push	hl
   902D 21 06 00      [10] 8432 	ld	hl, #0x0006
   9030 E5            [11] 8433 	push	hl
   9031 3E 05         [ 7] 8434 	ld	a, #0x05
   9033 F5            [11] 8435 	push	af
   9034 33            [ 6] 8436 	inc	sp
   9035 CD B2 8D      [17] 8437 	call	_SetEnemyParams
   9038 21 09 00      [10] 8438 	ld	hl, #9
   903B 39            [11] 8439 	add	hl, sp
   903C F9            [ 6] 8440 	ld	sp, hl
                           8441 ;src/main.c:1875: spr[0].x = spr[0].px = 58; 
   903D 21 0E 5F      [10] 8442 	ld	hl, #(_spr + 0x0004)
   9040 36 3A         [10] 8443 	ld	(hl), #0x3a
   9042 21 0C 5F      [10] 8444 	ld	hl, #(_spr + 0x0002)
   9045 36 3A         [10] 8445 	ld	(hl), #0x3a
                           8446 ;src/main.c:1876: spr[0].y = spr[0].py = 178;			
   9047 21 0F 5F      [10] 8447 	ld	hl, #(_spr + 0x0005)
   904A 36 B2         [10] 8448 	ld	(hl), #0xb2
   904C 21 0D 5F      [10] 8449 	ld	hl, #(_spr + 0x0003)
   904F 36 B2         [10] 8450 	ld	(hl), #0xb2
                           8451 ;src/main.c:1878: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk2_end);
   9051 21 2D 45      [10] 8452 	ld	hl, #(_mappk2 + 0x01f4)
   9054 E5            [11] 8453 	push	hl
   9055 21 00 16      [10] 8454 	ld	hl, #0x1600
   9058 E5            [11] 8455 	push	hl
   9059 CD 5A 5C      [17] 8456 	call	_cpct_zx7b_decrunch_s
                           8457 ;src/main.c:1880: lName = "2;1@CEMETERY";
   905C 21 3B 97      [10] 8458 	ld	hl, #___str_25+0
   905F 22 D2 5E      [16] 8459 	ld	(_lName), hl
                           8460 ;src/main.c:1882: doorKey[0] = 4;	// toad snot
   9062 21 DF 5E      [10] 8461 	ld	hl, #_doorKey
   9065 36 04         [10] 8462 	ld	(hl), #0x04
                           8463 ;src/main.c:1883: doorKey[1] = 5;	// diamond dust
   9067 21 E0 5E      [10] 8464 	ld	hl, #(_doorKey + 0x0001)
   906A 36 05         [10] 8465 	ld	(hl), #0x05
                           8466 ;src/main.c:1884: doorKey[2] = 6; // newt eye
   906C 21 E1 5E      [10] 8467 	ld	hl, #(_doorKey + 0x0002)
   906F 36 06         [10] 8468 	ld	(hl), #0x06
                           8469 ;src/main.c:1885: doorKey[3] = 7;	// mammoth poop
   9071 21 E2 5E      [10] 8470 	ld	hl, #(_doorKey + 0x0003)
   9074 36 07         [10] 8471 	ld	(hl), #0x07
                           8472 ;src/main.c:1886: doorKey[4] = 8; // kraken ink
   9076 21 E3 5E      [10] 8473 	ld	hl, #(_doorKey + 0x0004)
   9079 36 08         [10] 8474 	ld	(hl), #0x08
                           8475 ;src/main.c:1888: storeX = 3;
   907B 21 E9 5E      [10] 8476 	ld	hl,#_storeX + 0
   907E 36 03         [10] 8477 	ld	(hl), #0x03
                           8478 ;src/main.c:1889: storeY = 11;
   9080 21 EA 5E      [10] 8479 	ld	hl,#_storeY + 0
   9083 36 0B         [10] 8480 	ld	(hl), #0x0b
                           8481 ;src/main.c:1890: break;
   9085 C3 03 97      [10] 8482 	jp	00113$
                           8483 ;src/main.c:1893: case 3: {			 
   9088                    8484 00104$:
                           8485 ;src/main.c:1895: SetEnemyParams(2, GHOST,	M_linear_XY, 	D_left,     1,  2, 180,   0,   0);
   9088 21 00 00      [10] 8486 	ld	hl, #0x0000
   908B E5            [11] 8487 	push	hl
   908C 21 02 B4      [10] 8488 	ld	hl, #0xb402
   908F E5            [11] 8489 	push	hl
   9090 26 01         [ 7] 8490 	ld	h, #0x01
   9092 E5            [11] 8491 	push	hl
   9093 21 04 02      [10] 8492 	ld	hl, #0x0204
   9096 E5            [11] 8493 	push	hl
   9097 3E 02         [ 7] 8494 	ld	a, #0x02
   9099 F5            [11] 8495 	push	af
   909A 33            [ 6] 8496 	inc	sp
   909B CD B2 8D      [17] 8497 	call	_SetEnemyParams
   909E 21 09 00      [10] 8498 	ld	hl, #9
   90A1 39            [11] 8499 	add	hl, sp
   90A2 F9            [ 6] 8500 	ld	sp, hl
                           8501 ;src/main.c:1896: SetEnemyParams(3, GHOST,	M_linear_XY, 	D_right,    1,  2, 136,   0,   0);
   90A3 21 00 00      [10] 8502 	ld	hl, #0x0000
   90A6 E5            [11] 8503 	push	hl
   90A7 21 02 88      [10] 8504 	ld	hl, #0x8802
   90AA E5            [11] 8505 	push	hl
   90AB 21 03 01      [10] 8506 	ld	hl, #0x0103
   90AE E5            [11] 8507 	push	hl
   90AF 21 04 02      [10] 8508 	ld	hl, #0x0204
   90B2 E5            [11] 8509 	push	hl
   90B3 3E 03         [ 7] 8510 	ld	a, #0x03
   90B5 F5            [11] 8511 	push	af
   90B6 33            [ 6] 8512 	inc	sp
   90B7 CD B2 8D      [17] 8513 	call	_SetEnemyParams
   90BA 21 09 00      [10] 8514 	ld	hl, #9
   90BD 39            [11] 8515 	add	hl, sp
   90BE F9            [ 6] 8516 	ld	sp, hl
                           8517 ;src/main.c:1897: SetEnemyParams(4, GHOST,	M_linear_XY, 	D_left,     1, 70,  40,   0,   0);
   90BF 21 00 00      [10] 8518 	ld	hl, #0x0000
   90C2 E5            [11] 8519 	push	hl
   90C3 21 46 28      [10] 8520 	ld	hl, #0x2846
   90C6 E5            [11] 8521 	push	hl
   90C7 21 02 01      [10] 8522 	ld	hl, #0x0102
   90CA E5            [11] 8523 	push	hl
   90CB 21 04 02      [10] 8524 	ld	hl, #0x0204
   90CE E5            [11] 8525 	push	hl
   90CF 3E 04         [ 7] 8526 	ld	a, #0x04
   90D1 F5            [11] 8527 	push	af
   90D2 33            [ 6] 8528 	inc	sp
   90D3 CD B2 8D      [17] 8529 	call	_SetEnemyParams
   90D6 21 09 00      [10] 8530 	ld	hl, #9
   90D9 39            [11] 8531 	add	hl, sp
   90DA F9            [ 6] 8532 	ld	sp, hl
                           8533 ;src/main.c:1898: SetEnemyParams(5, GHOST,	M_linear_XY,	D_left,     1,  2,  40,   0,   0);
   90DB 21 00 00      [10] 8534 	ld	hl, #0x0000
   90DE E5            [11] 8535 	push	hl
   90DF 21 02 28      [10] 8536 	ld	hl, #0x2802
   90E2 E5            [11] 8537 	push	hl
   90E3 26 01         [ 7] 8538 	ld	h, #0x01
   90E5 E5            [11] 8539 	push	hl
   90E6 21 04 02      [10] 8540 	ld	hl, #0x0204
   90E9 E5            [11] 8541 	push	hl
   90EA 3E 05         [ 7] 8542 	ld	a, #0x05
   90EC F5            [11] 8543 	push	af
   90ED 33            [ 6] 8544 	inc	sp
   90EE CD B2 8D      [17] 8545 	call	_SetEnemyParams
   90F1 21 09 00      [10] 8546 	ld	hl, #9
   90F4 39            [11] 8547 	add	hl, sp
   90F5 F9            [ 6] 8548 	ld	sp, hl
                           8549 ;src/main.c:1900: spr[0].x = spr[0].px = 36; 
   90F6 21 0E 5F      [10] 8550 	ld	hl, #(_spr + 0x0004)
   90F9 36 24         [10] 8551 	ld	(hl), #0x24
   90FB 21 0C 5F      [10] 8552 	ld	hl, #(_spr + 0x0002)
   90FE 36 24         [10] 8553 	ld	(hl), #0x24
                           8554 ;src/main.c:1901: spr[0].y = spr[0].py = 178;			
   9100 21 0F 5F      [10] 8555 	ld	hl, #(_spr + 0x0005)
   9103 36 B2         [10] 8556 	ld	(hl), #0xb2
   9105 21 0D 5F      [10] 8557 	ld	hl, #(_spr + 0x0003)
   9108 36 B2         [10] 8558 	ld	(hl), #0xb2
                           8559 ;src/main.c:1903: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk3_end);
   910A 21 38 43      [10] 8560 	ld	hl, #(_mappk3 + 0x020f)
   910D E5            [11] 8561 	push	hl
   910E 21 00 16      [10] 8562 	ld	hl, #0x1600
   9111 E5            [11] 8563 	push	hl
   9112 CD 5A 5C      [17] 8564 	call	_cpct_zx7b_decrunch_s
                           8565 ;src/main.c:1905: lName = "2;2@CEMETERY";
   9115 21 48 97      [10] 8566 	ld	hl, #___str_26+0
   9118 22 D2 5E      [16] 8567 	ld	(_lName), hl
                           8568 ;src/main.c:1907: doorKey[0] = 5;	// diamond dust
   911B 21 DF 5E      [10] 8569 	ld	hl, #_doorKey
   911E 36 05         [10] 8570 	ld	(hl), #0x05
                           8571 ;src/main.c:1908: doorKey[1] = 7; // mammooth poop
   9120 21 E0 5E      [10] 8572 	ld	hl, #(_doorKey + 0x0001)
   9123 36 07         [10] 8573 	ld	(hl), #0x07
                           8574 ;src/main.c:1909: doorKey[2] = 6; // newt eye
   9125 21 E1 5E      [10] 8575 	ld	hl, #(_doorKey + 0x0002)
   9128 36 06         [10] 8576 	ld	(hl), #0x06
                           8577 ;src/main.c:1910: doorKey[3] = 7; // mammooth poop
   912A 21 E2 5E      [10] 8578 	ld	hl, #(_doorKey + 0x0003)
   912D 36 07         [10] 8579 	ld	(hl), #0x07
                           8580 ;src/main.c:1911: doorKey[4] = 5; // diamond dust
   912F 21 E3 5E      [10] 8581 	ld	hl, #(_doorKey + 0x0004)
   9132 36 05         [10] 8582 	ld	(hl), #0x05
                           8583 ;src/main.c:1913: storeX = 41;
   9134 21 E9 5E      [10] 8584 	ld	hl,#_storeX + 0
   9137 36 29         [10] 8585 	ld	(hl), #0x29
                           8586 ;src/main.c:1914: storeY = 71;
   9139 21 EA 5E      [10] 8587 	ld	hl,#_storeY + 0
   913C 36 47         [10] 8588 	ld	(hl), #0x47
                           8589 ;src/main.c:1915: break;
   913E C3 03 97      [10] 8590 	jp	00113$
                           8591 ;src/main.c:1918: case 4: {			 
   9141                    8592 00105$:
                           8593 ;src/main.c:1920: SetEnemyParams(2, BAT,		M_linear_X, 	D_left,     1, 73, 134,  16,  73);							
   9141 21 10 49      [10] 8594 	ld	hl, #0x4910
   9144 E5            [11] 8595 	push	hl
   9145 21 49 86      [10] 8596 	ld	hl, #0x8649
   9148 E5            [11] 8597 	push	hl
   9149 21 02 01      [10] 8598 	ld	hl, #0x0102
   914C E5            [11] 8599 	push	hl
   914D 21 05 00      [10] 8600 	ld	hl, #0x0005
   9150 E5            [11] 8601 	push	hl
   9151 3E 02         [ 7] 8602 	ld	a, #0x02
   9153 F5            [11] 8603 	push	af
   9154 33            [ 6] 8604 	inc	sp
   9155 CD B2 8D      [17] 8605 	call	_SetEnemyParams
   9158 21 09 00      [10] 8606 	ld	hl, #9
   915B 39            [11] 8607 	add	hl, sp
   915C F9            [ 6] 8608 	ld	sp, hl
                           8609 ;src/main.c:1921: SetEnemyParams(3, BAT,		M_linear_X, 	D_right,    1,  3,  94,   2,  73);		
   915D 21 02 49      [10] 8610 	ld	hl, #0x4902
   9160 E5            [11] 8611 	push	hl
   9161 21 03 5E      [10] 8612 	ld	hl, #0x5e03
   9164 E5            [11] 8613 	push	hl
   9165 26 01         [ 7] 8614 	ld	h, #0x01
   9167 E5            [11] 8615 	push	hl
   9168 21 05 00      [10] 8616 	ld	hl, #0x0005
   916B E5            [11] 8617 	push	hl
   916C 3E 03         [ 7] 8618 	ld	a, #0x03
   916E F5            [11] 8619 	push	af
   916F 33            [ 6] 8620 	inc	sp
   9170 CD B2 8D      [17] 8621 	call	_SetEnemyParams
   9173 21 09 00      [10] 8622 	ld	hl, #9
   9176 39            [11] 8623 	add	hl, sp
   9177 F9            [ 6] 8624 	ld	sp, hl
                           8625 ;src/main.c:1922: SetEnemyParams(4, KNIGHT,	M_linear_XY, 	D_down,    	1, 17,  50,   0,   0);
   9178 21 00 00      [10] 8626 	ld	hl, #0x0000
   917B E5            [11] 8627 	push	hl
   917C 21 11 32      [10] 8628 	ld	hl, #0x3211
   917F E5            [11] 8629 	push	hl
   9180 21 01 01      [10] 8630 	ld	hl, #0x0101
   9183 E5            [11] 8631 	push	hl
   9184 21 03 02      [10] 8632 	ld	hl, #0x0203
   9187 E5            [11] 8633 	push	hl
   9188 3E 04         [ 7] 8634 	ld	a, #0x04
   918A F5            [11] 8635 	push	af
   918B 33            [ 6] 8636 	inc	sp
   918C CD B2 8D      [17] 8637 	call	_SetEnemyParams
   918F 21 09 00      [10] 8638 	ld	hl, #9
   9192 39            [11] 8639 	add	hl, sp
   9193 F9            [ 6] 8640 	ld	sp, hl
                           8641 ;src/main.c:1923: SetEnemyParams(5, KNIGHT,	M_linear_XY, 	D_up,     	1, 57, 156,   0,   0);
   9194 21 00 00      [10] 8642 	ld	hl, #0x0000
   9197 E5            [11] 8643 	push	hl
   9198 21 39 9C      [10] 8644 	ld	hl, #0x9c39
   919B E5            [11] 8645 	push	hl
   919C 21 00 01      [10] 8646 	ld	hl, #0x0100
   919F E5            [11] 8647 	push	hl
   91A0 21 03 02      [10] 8648 	ld	hl, #0x0203
   91A3 E5            [11] 8649 	push	hl
   91A4 3E 05         [ 7] 8650 	ld	a, #0x05
   91A6 F5            [11] 8651 	push	af
   91A7 33            [ 6] 8652 	inc	sp
   91A8 CD B2 8D      [17] 8653 	call	_SetEnemyParams
   91AB 21 09 00      [10] 8654 	ld	hl, #9
   91AE 39            [11] 8655 	add	hl, sp
   91AF F9            [ 6] 8656 	ld	sp, hl
                           8657 ;src/main.c:1925: spr[0].x = spr[0].px = 6; 
   91B0 21 0E 5F      [10] 8658 	ld	hl, #(_spr + 0x0004)
   91B3 36 06         [10] 8659 	ld	(hl), #0x06
   91B5 21 0C 5F      [10] 8660 	ld	hl, #(_spr + 0x0002)
   91B8 36 06         [10] 8661 	ld	(hl), #0x06
                           8662 ;src/main.c:1926: spr[0].y = spr[0].py = 175;			
   91BA 21 0F 5F      [10] 8663 	ld	hl, #(_spr + 0x0005)
   91BD 36 AF         [10] 8664 	ld	(hl), #0xaf
   91BF 21 0D 5F      [10] 8665 	ld	hl, #(_spr + 0x0003)
   91C2 36 AF         [10] 8666 	ld	(hl), #0xaf
                           8667 ;src/main.c:1928: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk4_end);
   91C4 21 28 41      [10] 8668 	ld	hl, #(_mappk4 + 0x0179)
   91C7 E5            [11] 8669 	push	hl
   91C8 21 00 16      [10] 8670 	ld	hl, #0x1600
   91CB E5            [11] 8671 	push	hl
   91CC CD 5A 5C      [17] 8672 	call	_cpct_zx7b_decrunch_s
                           8673 ;src/main.c:1930: lName = "3;1@@CELLARS";	
   91CF 21 55 97      [10] 8674 	ld	hl, #___str_27+0
   91D2 22 D2 5E      [16] 8675 	ld	(_lName), hl
                           8676 ;src/main.c:1932: doorKey[0] = 4; // toad snot
   91D5 21 DF 5E      [10] 8677 	ld	hl, #_doorKey
   91D8 36 04         [10] 8678 	ld	(hl), #0x04
                           8679 ;src/main.c:1933: doorKey[1] = 9; // mermaid tear
   91DA 21 E0 5E      [10] 8680 	ld	hl, #(_doorKey + 0x0001)
   91DD 36 09         [10] 8681 	ld	(hl), #0x09
                           8682 ;src/main.c:1934: doorKey[2] = 10;// martian mushroom
   91DF 21 E1 5E      [10] 8683 	ld	hl, #(_doorKey + 0x0002)
   91E2 36 0A         [10] 8684 	ld	(hl), #0x0a
                           8685 ;src/main.c:1935: doorKey[3] = 9; // mermaid tear
   91E4 21 E2 5E      [10] 8686 	ld	hl, #(_doorKey + 0x0003)
   91E7 36 09         [10] 8687 	ld	(hl), #0x09
                           8688 ;src/main.c:1936: doorKey[4] = 4; // toad snot
   91E9 21 E3 5E      [10] 8689 	ld	hl, #(_doorKey + 0x0004)
   91EC 36 04         [10] 8690 	ld	(hl), #0x04
                           8691 ;src/main.c:1938: storeX = 5;
   91EE 21 E9 5E      [10] 8692 	ld	hl,#_storeX + 0
   91F1 36 05         [10] 8693 	ld	(hl), #0x05
                           8694 ;src/main.c:1939: storeY = 103;		
   91F3 21 EA 5E      [10] 8695 	ld	hl,#_storeY + 0
   91F6 36 67         [10] 8696 	ld	(hl), #0x67
                           8697 ;src/main.c:1940: break;
   91F8 C3 03 97      [10] 8698 	jp	00113$
                           8699 ;src/main.c:1943: case 5: {			 
   91FB                    8700 00106$:
                           8701 ;src/main.c:1945: SetEnemyParams(2, SENTINEL,	M_linear_X, 	D_left,     1,  3, 142,   2,  73);
   91FB 21 02 49      [10] 8702 	ld	hl, #0x4902
   91FE E5            [11] 8703 	push	hl
   91FF 21 03 8E      [10] 8704 	ld	hl, #0x8e03
   9202 E5            [11] 8705 	push	hl
   9203 21 02 01      [10] 8706 	ld	hl, #0x0102
   9206 E5            [11] 8707 	push	hl
   9207 26 00         [ 7] 8708 	ld	h, #0x00
   9209 E5            [11] 8709 	push	hl
   920A 3E 02         [ 7] 8710 	ld	a, #0x02
   920C F5            [11] 8711 	push	af
   920D 33            [ 6] 8712 	inc	sp
   920E CD B2 8D      [17] 8713 	call	_SetEnemyParams
   9211 21 09 00      [10] 8714 	ld	hl, #9
   9214 39            [11] 8715 	add	hl, sp
   9215 F9            [ 6] 8716 	ld	sp, hl
                           8717 ;src/main.c:1946: SetEnemyParams(3, SENTINEL,	M_linear_X, 	D_right,    1, 73, 102,   2,  73);						
   9216 21 02 49      [10] 8718 	ld	hl, #0x4902
   9219 E5            [11] 8719 	push	hl
   921A 21 49 66      [10] 8720 	ld	hl, #0x6649
   921D E5            [11] 8721 	push	hl
   921E 21 03 01      [10] 8722 	ld	hl, #0x0103
   9221 E5            [11] 8723 	push	hl
   9222 21 02 00      [10] 8724 	ld	hl, #0x0002
   9225 E5            [11] 8725 	push	hl
   9226 3E 03         [ 7] 8726 	ld	a, #0x03
   9228 F5            [11] 8727 	push	af
   9229 33            [ 6] 8728 	inc	sp
   922A CD B2 8D      [17] 8729 	call	_SetEnemyParams
   922D 21 09 00      [10] 8730 	ld	hl, #9
   9230 39            [11] 8731 	add	hl, sp
   9231 F9            [ 6] 8732 	ld	sp, hl
                           8733 ;src/main.c:1947: SetEnemyParams(4, KNIGHT,	M_linear_Y, 	D_down,     1, 38,  50,  50, 178);
   9232 21 32 B2      [10] 8734 	ld	hl, #0xb232
   9235 E5            [11] 8735 	push	hl
   9236 21 26 32      [10] 8736 	ld	hl, #0x3226
   9239 E5            [11] 8737 	push	hl
   923A 21 01 01      [10] 8738 	ld	hl, #0x0101
   923D E5            [11] 8739 	push	hl
   923E 2E 03         [ 7] 8740 	ld	l, #0x03
   9240 E5            [11] 8741 	push	hl
   9241 3E 04         [ 7] 8742 	ld	a, #0x04
   9243 F5            [11] 8743 	push	af
   9244 33            [ 6] 8744 	inc	sp
   9245 CD B2 8D      [17] 8745 	call	_SetEnemyParams
   9248 21 09 00      [10] 8746 	ld	hl, #9
   924B 39            [11] 8747 	add	hl, sp
   924C F9            [ 6] 8748 	ld	sp, hl
                           8749 ;src/main.c:1948: SetEnemyParams(5, WITCH,	M_linear_X,		D_left,     1,  3,  62,   2,  73);
   924D 21 02 49      [10] 8750 	ld	hl, #0x4902
   9250 E5            [11] 8751 	push	hl
   9251 21 03 3E      [10] 8752 	ld	hl, #0x3e03
   9254 E5            [11] 8753 	push	hl
   9255 21 02 01      [10] 8754 	ld	hl, #0x0102
   9258 E5            [11] 8755 	push	hl
   9259 21 06 00      [10] 8756 	ld	hl, #0x0006
   925C E5            [11] 8757 	push	hl
   925D 3E 05         [ 7] 8758 	ld	a, #0x05
   925F F5            [11] 8759 	push	af
   9260 33            [ 6] 8760 	inc	sp
   9261 CD B2 8D      [17] 8761 	call	_SetEnemyParams
   9264 21 09 00      [10] 8762 	ld	hl, #9
   9267 39            [11] 8763 	add	hl, sp
   9268 F9            [ 6] 8764 	ld	sp, hl
                           8765 ;src/main.c:1950: spr[0].x = spr[0].px = 34; 
   9269 21 0E 5F      [10] 8766 	ld	hl, #(_spr + 0x0004)
   926C 36 22         [10] 8767 	ld	(hl), #0x22
   926E 21 0C 5F      [10] 8768 	ld	hl, #(_spr + 0x0002)
   9271 36 22         [10] 8769 	ld	(hl), #0x22
                           8770 ;src/main.c:1951: spr[0].y = spr[0].py = 176;			
   9273 21 0F 5F      [10] 8771 	ld	hl, #(_spr + 0x0005)
   9276 36 B0         [10] 8772 	ld	(hl), #0xb0
   9278 21 0D 5F      [10] 8773 	ld	hl, #(_spr + 0x0003)
   927B 36 B0         [10] 8774 	ld	(hl), #0xb0
                           8775 ;src/main.c:1953: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk5_end);
   927D 21 AE 3F      [10] 8776 	ld	hl, #(_mappk5 + 0x0199)
   9280 E5            [11] 8777 	push	hl
   9281 21 00 16      [10] 8778 	ld	hl, #0x1600
   9284 E5            [11] 8779 	push	hl
   9285 CD 5A 5C      [17] 8780 	call	_cpct_zx7b_decrunch_s
                           8781 ;src/main.c:1955: lName = "3;2@@CELLARS";
   9288 21 62 97      [10] 8782 	ld	hl, #___str_28+0
   928B 22 D2 5E      [16] 8783 	ld	(_lName), hl
                           8784 ;src/main.c:1957: doorKey[0] = 7; // mammooth poop
   928E 21 DF 5E      [10] 8785 	ld	hl, #_doorKey
   9291 36 07         [10] 8786 	ld	(hl), #0x07
                           8787 ;src/main.c:1958: doorKey[1] = 8; // kraken ink
   9293 21 E0 5E      [10] 8788 	ld	hl, #(_doorKey + 0x0001)
   9296 36 08         [10] 8789 	ld	(hl), #0x08
                           8790 ;src/main.c:1959: doorKey[2] = 9; // mermaid tear
   9298 21 E1 5E      [10] 8791 	ld	hl, #(_doorKey + 0x0002)
   929B 36 09         [10] 8792 	ld	(hl), #0x09
                           8793 ;src/main.c:1960: doorKey[3] = 6; // newt eye
   929D 21 E2 5E      [10] 8794 	ld	hl, #(_doorKey + 0x0003)
   92A0 36 06         [10] 8795 	ld	(hl), #0x06
                           8796 ;src/main.c:1961: doorKey[4] = 5; // diamond dust
   92A2 21 E3 5E      [10] 8797 	ld	hl, #(_doorKey + 0x0004)
   92A5 36 05         [10] 8798 	ld	(hl), #0x05
                           8799 ;src/main.c:1963: storeX = 3;
   92A7 21 E9 5E      [10] 8800 	ld	hl,#_storeX + 0
   92AA 36 03         [10] 8801 	ld	(hl), #0x03
                           8802 ;src/main.c:1964: storeY = 143;
   92AC 21 EA 5E      [10] 8803 	ld	hl,#_storeY + 0
   92AF 36 8F         [10] 8804 	ld	(hl), #0x8f
                           8805 ;src/main.c:1965: break;
   92B1 C3 03 97      [10] 8806 	jp	00113$
                           8807 ;src/main.c:1968: case 6: {			 
   92B4                    8808 00107$:
                           8809 ;src/main.c:1970: SetEnemyParams(2, KNIGHT,	M_linear_XY, 	D_up,     	1,  2, 174,   0,   0);
   92B4 21 00 00      [10] 8810 	ld	hl, #0x0000
   92B7 E5            [11] 8811 	push	hl
   92B8 21 02 AE      [10] 8812 	ld	hl, #0xae02
   92BB E5            [11] 8813 	push	hl
   92BC 21 00 01      [10] 8814 	ld	hl, #0x0100
   92BF E5            [11] 8815 	push	hl
   92C0 21 03 02      [10] 8816 	ld	hl, #0x0203
   92C3 E5            [11] 8817 	push	hl
   92C4 3E 02         [ 7] 8818 	ld	a, #0x02
   92C6 F5            [11] 8819 	push	af
   92C7 33            [ 6] 8820 	inc	sp
   92C8 CD B2 8D      [17] 8821 	call	_SetEnemyParams
   92CB 21 09 00      [10] 8822 	ld	hl, #9
   92CE 39            [11] 8823 	add	hl, sp
   92CF F9            [ 6] 8824 	ld	sp, hl
                           8825 ;src/main.c:1971: SetEnemyParams(3, KNIGHT,	M_linear_XY, 	D_left,    	1, 60, 116,   0,   0);
   92D0 21 00 00      [10] 8826 	ld	hl, #0x0000
   92D3 E5            [11] 8827 	push	hl
   92D4 21 3C 74      [10] 8828 	ld	hl, #0x743c
   92D7 E5            [11] 8829 	push	hl
   92D8 21 02 01      [10] 8830 	ld	hl, #0x0102
   92DB E5            [11] 8831 	push	hl
   92DC 21 03 02      [10] 8832 	ld	hl, #0x0203
   92DF E5            [11] 8833 	push	hl
   92E0 3E 03         [ 7] 8834 	ld	a, #0x03
   92E2 F5            [11] 8835 	push	af
   92E3 33            [ 6] 8836 	inc	sp
   92E4 CD B2 8D      [17] 8837 	call	_SetEnemyParams
   92E7 21 09 00      [10] 8838 	ld	hl, #9
   92EA 39            [11] 8839 	add	hl, sp
   92EB F9            [ 6] 8840 	ld	sp, hl
                           8841 ;src/main.c:1972: SetEnemyParams(4, SENTINEL,	M_linear_XY, 	D_left,     1, 73,  96,   0,   0);
   92EC 21 00 00      [10] 8842 	ld	hl, #0x0000
   92EF E5            [11] 8843 	push	hl
   92F0 21 49 60      [10] 8844 	ld	hl, #0x6049
   92F3 E5            [11] 8845 	push	hl
   92F4 21 02 01      [10] 8846 	ld	hl, #0x0102
   92F7 E5            [11] 8847 	push	hl
   92F8 26 02         [ 7] 8848 	ld	h, #0x02
   92FA E5            [11] 8849 	push	hl
   92FB 3E 04         [ 7] 8850 	ld	a, #0x04
   92FD F5            [11] 8851 	push	af
   92FE 33            [ 6] 8852 	inc	sp
   92FF CD B2 8D      [17] 8853 	call	_SetEnemyParams
   9302 21 09 00      [10] 8854 	ld	hl, #9
   9305 39            [11] 8855 	add	hl, sp
   9306 F9            [ 6] 8856 	ld	sp, hl
                           8857 ;src/main.c:1973: SetEnemyParams(5, WITCH,	M_linear_X,		D_left,     1,  3,  60,   2,  73);
   9307 21 02 49      [10] 8858 	ld	hl, #0x4902
   930A E5            [11] 8859 	push	hl
   930B 21 03 3C      [10] 8860 	ld	hl, #0x3c03
   930E E5            [11] 8861 	push	hl
   930F 21 02 01      [10] 8862 	ld	hl, #0x0102
   9312 E5            [11] 8863 	push	hl
   9313 21 06 00      [10] 8864 	ld	hl, #0x0006
   9316 E5            [11] 8865 	push	hl
   9317 3E 05         [ 7] 8866 	ld	a, #0x05
   9319 F5            [11] 8867 	push	af
   931A 33            [ 6] 8868 	inc	sp
   931B CD B2 8D      [17] 8869 	call	_SetEnemyParams
   931E 21 09 00      [10] 8870 	ld	hl, #9
   9321 39            [11] 8871 	add	hl, sp
   9322 F9            [ 6] 8872 	ld	sp, hl
                           8873 ;src/main.c:1975: spr[0].x = spr[0].px = 67; 
   9323 21 0E 5F      [10] 8874 	ld	hl, #(_spr + 0x0004)
   9326 36 43         [10] 8875 	ld	(hl), #0x43
   9328 21 0C 5F      [10] 8876 	ld	hl, #(_spr + 0x0002)
   932B 36 43         [10] 8877 	ld	(hl), #0x43
                           8878 ;src/main.c:1976: spr[0].y = spr[0].py = 176;			
   932D 21 0F 5F      [10] 8879 	ld	hl, #(_spr + 0x0005)
   9330 36 B0         [10] 8880 	ld	(hl), #0xb0
   9332 21 0D 5F      [10] 8881 	ld	hl, #(_spr + 0x0003)
   9335 36 B0         [10] 8882 	ld	(hl), #0xb0
                           8883 ;src/main.c:1978: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk6_end);
   9337 21 14 3E      [10] 8884 	ld	hl, #(_mappk6 + 0x01bb)
   933A E5            [11] 8885 	push	hl
   933B 21 00 16      [10] 8886 	ld	hl, #0x1600
   933E E5            [11] 8887 	push	hl
   933F CD 5A 5C      [17] 8888 	call	_cpct_zx7b_decrunch_s
                           8889 ;src/main.c:1980: lName = "4;1@@@CASTLE";	
   9342 21 6F 97      [10] 8890 	ld	hl, #___str_29+0
   9345 22 D2 5E      [16] 8891 	ld	(_lName), hl
                           8892 ;src/main.c:1982: doorKey[0] = 10; // martian mushroom
   9348 21 DF 5E      [10] 8893 	ld	hl, #_doorKey
   934B 36 0A         [10] 8894 	ld	(hl), #0x0a
                           8895 ;src/main.c:1983: doorKey[1] = 6; // newt eye
   934D 21 E0 5E      [10] 8896 	ld	hl, #(_doorKey + 0x0001)
   9350 36 06         [10] 8897 	ld	(hl), #0x06
                           8898 ;src/main.c:1984: doorKey[2] = 11; // dragon blood
   9352 21 E1 5E      [10] 8899 	ld	hl, #(_doorKey + 0x0002)
   9355 36 0B         [10] 8900 	ld	(hl), #0x0b
                           8901 ;src/main.c:1985: doorKey[3] = 6; // newt eye
   9357 21 E2 5E      [10] 8902 	ld	hl, #(_doorKey + 0x0003)
   935A 36 06         [10] 8903 	ld	(hl), #0x06
                           8904 ;src/main.c:1986: doorKey[4] = 10; // martian mushroom
   935C 21 E3 5E      [10] 8905 	ld	hl, #(_doorKey + 0x0004)
   935F 36 0A         [10] 8906 	ld	(hl), #0x0a
                           8907 ;src/main.c:1988: storeX = 3;
   9361 21 E9 5E      [10] 8908 	ld	hl,#_storeX + 0
   9364 36 03         [10] 8909 	ld	(hl), #0x03
                           8910 ;src/main.c:1989: storeY = 11;		
   9366 21 EA 5E      [10] 8911 	ld	hl,#_storeY + 0
   9369 36 0B         [10] 8912 	ld	(hl), #0x0b
                           8913 ;src/main.c:1990: break;
   936B C3 03 97      [10] 8914 	jp	00113$
                           8915 ;src/main.c:1993: case 7: {			 
   936E                    8916 00108$:
                           8917 ;src/main.c:1995: SetEnemyParams(2, NOBODY,	M_linear_XY, 	D_left,     1,  0,   0,   0,   0);
   936E 21 00 00      [10] 8918 	ld	hl, #0x0000
   9371 E5            [11] 8919 	push	hl
   9372 2E 00         [ 7] 8920 	ld	l, #0x00
   9374 E5            [11] 8921 	push	hl
   9375 21 02 01      [10] 8922 	ld	hl, #0x0102
   9378 E5            [11] 8923 	push	hl
   9379 21 09 02      [10] 8924 	ld	hl, #0x0209
   937C E5            [11] 8925 	push	hl
   937D 3E 02         [ 7] 8926 	ld	a, #0x02
   937F F5            [11] 8927 	push	af
   9380 33            [ 6] 8928 	inc	sp
   9381 CD B2 8D      [17] 8929 	call	_SetEnemyParams
   9384 21 09 00      [10] 8930 	ld	hl, #9
   9387 39            [11] 8931 	add	hl, sp
   9388 F9            [ 6] 8932 	ld	sp, hl
                           8933 ;src/main.c:1996: SetEnemyParams(3, GHOST,	M_linear_XY, 	D_up,       1,  3, 176,   0,   0);
   9389 21 00 00      [10] 8934 	ld	hl, #0x0000
   938C E5            [11] 8935 	push	hl
   938D 21 03 B0      [10] 8936 	ld	hl, #0xb003
   9390 E5            [11] 8937 	push	hl
   9391 21 00 01      [10] 8938 	ld	hl, #0x0100
   9394 E5            [11] 8939 	push	hl
   9395 21 04 02      [10] 8940 	ld	hl, #0x0204
   9398 E5            [11] 8941 	push	hl
   9399 3E 03         [ 7] 8942 	ld	a, #0x03
   939B F5            [11] 8943 	push	af
   939C 33            [ 6] 8944 	inc	sp
   939D CD B2 8D      [17] 8945 	call	_SetEnemyParams
   93A0 21 09 00      [10] 8946 	ld	hl, #9
   93A3 39            [11] 8947 	add	hl, sp
   93A4 F9            [ 6] 8948 	ld	sp, hl
                           8949 ;src/main.c:1997: SetEnemyParams(4, KNIGHT,	M_linear_XY, 	D_right,    1,  3,  44,   0,   0);
   93A5 21 00 00      [10] 8950 	ld	hl, #0x0000
   93A8 E5            [11] 8951 	push	hl
   93A9 21 03 2C      [10] 8952 	ld	hl, #0x2c03
   93AC E5            [11] 8953 	push	hl
   93AD 26 01         [ 7] 8954 	ld	h, #0x01
   93AF E5            [11] 8955 	push	hl
   93B0 26 02         [ 7] 8956 	ld	h, #0x02
   93B2 E5            [11] 8957 	push	hl
   93B3 3E 04         [ 7] 8958 	ld	a, #0x04
   93B5 F5            [11] 8959 	push	af
   93B6 33            [ 6] 8960 	inc	sp
   93B7 CD B2 8D      [17] 8961 	call	_SetEnemyParams
   93BA 21 09 00      [10] 8962 	ld	hl, #9
   93BD 39            [11] 8963 	add	hl, sp
   93BE F9            [ 6] 8964 	ld	sp, hl
                           8965 ;src/main.c:1998: SetEnemyParams(5, KNIGHT,	M_linear_XY, 	D_down,     1, 73,  44,   0,   0);
   93BF 21 00 00      [10] 8966 	ld	hl, #0x0000
   93C2 E5            [11] 8967 	push	hl
   93C3 21 49 2C      [10] 8968 	ld	hl, #0x2c49
   93C6 E5            [11] 8969 	push	hl
   93C7 21 01 01      [10] 8970 	ld	hl, #0x0101
   93CA E5            [11] 8971 	push	hl
   93CB 21 03 02      [10] 8972 	ld	hl, #0x0203
   93CE E5            [11] 8973 	push	hl
   93CF 3E 05         [ 7] 8974 	ld	a, #0x05
   93D1 F5            [11] 8975 	push	af
   93D2 33            [ 6] 8976 	inc	sp
   93D3 CD B2 8D      [17] 8977 	call	_SetEnemyParams
   93D6 21 09 00      [10] 8978 	ld	hl, #9
   93D9 39            [11] 8979 	add	hl, sp
   93DA F9            [ 6] 8980 	ld	sp, hl
                           8981 ;src/main.c:2000: spr[0].x = spr[0].px = 36; 
   93DB 21 0E 5F      [10] 8982 	ld	hl, #(_spr + 0x0004)
   93DE 36 24         [10] 8983 	ld	(hl), #0x24
   93E0 21 0C 5F      [10] 8984 	ld	hl, #(_spr + 0x0002)
   93E3 36 24         [10] 8985 	ld	(hl), #0x24
                           8986 ;src/main.c:2001: spr[0].y = spr[0].py = 176;			
   93E5 21 0F 5F      [10] 8987 	ld	hl, #(_spr + 0x0005)
   93E8 36 B0         [10] 8988 	ld	(hl), #0xb0
   93EA 21 0D 5F      [10] 8989 	ld	hl, #(_spr + 0x0003)
   93ED 36 B0         [10] 8990 	ld	(hl), #0xb0
                           8991 ;src/main.c:2003: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk7_end);
   93EF 21 58 3C      [10] 8992 	ld	hl, #(_mappk7 + 0x021b)
   93F2 E5            [11] 8993 	push	hl
   93F3 21 00 16      [10] 8994 	ld	hl, #0x1600
   93F6 E5            [11] 8995 	push	hl
   93F7 CD 5A 5C      [17] 8996 	call	_cpct_zx7b_decrunch_s
                           8997 ;src/main.c:2005: lName = "4;2@@@CASTLE";
   93FA 21 7C 97      [10] 8998 	ld	hl, #___str_30+0
   93FD 22 D2 5E      [16] 8999 	ld	(_lName), hl
                           9000 ;src/main.c:2007: doorKey[0] = 5; // diamond dust
   9400 21 DF 5E      [10] 9001 	ld	hl, #_doorKey
   9403 36 05         [10] 9002 	ld	(hl), #0x05
                           9003 ;src/main.c:2008: doorKey[1] = 11; // dragon blood
   9405 21 E0 5E      [10] 9004 	ld	hl, #(_doorKey + 0x0001)
   9408 36 0B         [10] 9005 	ld	(hl), #0x0b
                           9006 ;src/main.c:2009: doorKey[2] = 7; // mammooth poop
   940A 21 E1 5E      [10] 9007 	ld	hl, #(_doorKey + 0x0002)
   940D 36 07         [10] 9008 	ld	(hl), #0x07
                           9009 ;src/main.c:2010: doorKey[3] = 11; // dragon blood
   940F 21 E2 5E      [10] 9010 	ld	hl, #(_doorKey + 0x0003)
   9412 36 0B         [10] 9011 	ld	(hl), #0x0b
                           9012 ;src/main.c:2011: doorKey[4] = 5; // diamond dust
   9414 21 E3 5E      [10] 9013 	ld	hl, #(_doorKey + 0x0004)
   9417 36 05         [10] 9014 	ld	(hl), #0x05
                           9015 ;src/main.c:2013: storeX = 33;
   9419 21 E9 5E      [10] 9016 	ld	hl,#_storeX + 0
   941C 36 21         [10] 9017 	ld	(hl), #0x21
                           9018 ;src/main.c:2014: storeY = 95;
   941E 21 EA 5E      [10] 9019 	ld	hl,#_storeY + 0
   9421 36 5F         [10] 9020 	ld	(hl), #0x5f
                           9021 ;src/main.c:2015: break;
   9423 C3 03 97      [10] 9022 	jp	00113$
                           9023 ;src/main.c:2018: case 8: {			 
   9426                    9024 00109$:
                           9025 ;src/main.c:2020: SetEnemyParams(2, NOBODY,	M_linear_X, 	D_left,     1,  0,   0,   0,   0);
   9426 21 00 00      [10] 9026 	ld	hl, #0x0000
   9429 E5            [11] 9027 	push	hl
   942A 2E 00         [ 7] 9028 	ld	l, #0x00
   942C E5            [11] 9029 	push	hl
   942D 21 02 01      [10] 9030 	ld	hl, #0x0102
   9430 E5            [11] 9031 	push	hl
   9431 21 09 00      [10] 9032 	ld	hl, #0x0009
   9434 E5            [11] 9033 	push	hl
   9435 3E 02         [ 7] 9034 	ld	a, #0x02
   9437 F5            [11] 9035 	push	af
   9438 33            [ 6] 9036 	inc	sp
   9439 CD B2 8D      [17] 9037 	call	_SetEnemyParams
   943C 21 09 00      [10] 9038 	ld	hl, #9
   943F 39            [11] 9039 	add	hl, sp
   9440 F9            [ 6] 9040 	ld	sp, hl
                           9041 ;src/main.c:2021: SetEnemyParams(3, GHOST,	M_chaser,		D_right,    7,  2, 114,   0,   0);						
   9441 21 00 00      [10] 9042 	ld	hl, #0x0000
   9444 E5            [11] 9043 	push	hl
   9445 21 02 72      [10] 9044 	ld	hl, #0x7202
   9448 E5            [11] 9045 	push	hl
   9449 21 03 07      [10] 9046 	ld	hl, #0x0703
   944C E5            [11] 9047 	push	hl
   944D 21 04 03      [10] 9048 	ld	hl, #0x0304
   9450 E5            [11] 9049 	push	hl
   9451 3E 03         [ 7] 9050 	ld	a, #0x03
   9453 F5            [11] 9051 	push	af
   9454 33            [ 6] 9052 	inc	sp
   9455 CD B2 8D      [17] 9053 	call	_SetEnemyParams
   9458 21 09 00      [10] 9054 	ld	hl, #9
   945B 39            [11] 9055 	add	hl, sp
   945C F9            [ 6] 9056 	ld	sp, hl
                           9057 ;src/main.c:2022: SetEnemyParams(4, KNIGHT, 	M_linear_XY,    D_right,    1, 10,  68,   0,   0);
   945D 21 00 00      [10] 9058 	ld	hl, #0x0000
   9460 E5            [11] 9059 	push	hl
   9461 21 0A 44      [10] 9060 	ld	hl, #0x440a
   9464 E5            [11] 9061 	push	hl
   9465 21 03 01      [10] 9062 	ld	hl, #0x0103
   9468 E5            [11] 9063 	push	hl
   9469 26 02         [ 7] 9064 	ld	h, #0x02
   946B E5            [11] 9065 	push	hl
   946C 3E 04         [ 7] 9066 	ld	a, #0x04
   946E F5            [11] 9067 	push	af
   946F 33            [ 6] 9068 	inc	sp
   9470 CD B2 8D      [17] 9069 	call	_SetEnemyParams
   9473 21 09 00      [10] 9070 	ld	hl, #9
   9476 39            [11] 9071 	add	hl, sp
   9477 F9            [ 6] 9072 	ld	sp, hl
                           9073 ;src/main.c:2023: SetEnemyParams(5, KNIGHT,	M_linear_XY,	D_down,     1,  2,  38,   0,   0);
   9478 21 00 00      [10] 9074 	ld	hl, #0x0000
   947B E5            [11] 9075 	push	hl
   947C 21 02 26      [10] 9076 	ld	hl, #0x2602
   947F E5            [11] 9077 	push	hl
   9480 21 01 01      [10] 9078 	ld	hl, #0x0101
   9483 E5            [11] 9079 	push	hl
   9484 21 03 02      [10] 9080 	ld	hl, #0x0203
   9487 E5            [11] 9081 	push	hl
   9488 3E 05         [ 7] 9082 	ld	a, #0x05
   948A F5            [11] 9083 	push	af
   948B 33            [ 6] 9084 	inc	sp
   948C CD B2 8D      [17] 9085 	call	_SetEnemyParams
   948F 21 09 00      [10] 9086 	ld	hl, #9
   9492 39            [11] 9087 	add	hl, sp
   9493 F9            [ 6] 9088 	ld	sp, hl
                           9089 ;src/main.c:2025: spr[0].x = spr[0].px = 34; 
   9494 21 0E 5F      [10] 9090 	ld	hl, #(_spr + 0x0004)
   9497 36 22         [10] 9091 	ld	(hl), #0x22
   9499 21 0C 5F      [10] 9092 	ld	hl, #(_spr + 0x0002)
   949C 36 22         [10] 9093 	ld	(hl), #0x22
                           9094 ;src/main.c:2026: spr[0].y = spr[0].py = 176;			
   949E 21 0F 5F      [10] 9095 	ld	hl, #(_spr + 0x0005)
   94A1 36 B0         [10] 9096 	ld	(hl), #0xb0
   94A3 21 0D 5F      [10] 9097 	ld	hl, #(_spr + 0x0003)
   94A6 36 B0         [10] 9098 	ld	(hl), #0xb0
                           9099 ;src/main.c:2028: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk8_end);
   94A8 21 3C 3A      [10] 9100 	ld	hl, #(_mappk8 + 0x014e)
   94AB E5            [11] 9101 	push	hl
   94AC 21 00 16      [10] 9102 	ld	hl, #0x1600
   94AF E5            [11] 9103 	push	hl
   94B0 CD 5A 5C      [17] 9104 	call	_cpct_zx7b_decrunch_s
                           9105 ;src/main.c:2030: lName = "5;1@@@TOWER";	
   94B3 21 89 97      [10] 9106 	ld	hl, #___str_31+0
   94B6 22 D2 5E      [16] 9107 	ld	(_lName), hl
                           9108 ;src/main.c:2032: doorKey[0] = 8; // kraken ink
   94B9 21 DF 5E      [10] 9109 	ld	hl, #_doorKey
   94BC 36 08         [10] 9110 	ld	(hl), #0x08
                           9111 ;src/main.c:2033: doorKey[1] = 9; // mermaid tear
   94BE 21 E0 5E      [10] 9112 	ld	hl, #(_doorKey + 0x0001)
   94C1 36 09         [10] 9113 	ld	(hl), #0x09
                           9114 ;src/main.c:2034: doorKey[2] = 10; // martian mushroom
   94C3 21 E1 5E      [10] 9115 	ld	hl, #(_doorKey + 0x0002)
   94C6 36 0A         [10] 9116 	ld	(hl), #0x0a
                           9117 ;src/main.c:2035: doorKey[3] = 11; // dragon blood
   94C8 21 E2 5E      [10] 9118 	ld	hl, #(_doorKey + 0x0003)
   94CB 36 0B         [10] 9119 	ld	(hl), #0x0b
                           9120 ;src/main.c:2036: doorKey[4] = 12; // dodo egg
   94CD 21 E3 5E      [10] 9121 	ld	hl, #(_doorKey + 0x0004)
   94D0 36 0C         [10] 9122 	ld	(hl), #0x0c
                           9123 ;src/main.c:2038: storeX = 25;
   94D2 21 E9 5E      [10] 9124 	ld	hl,#_storeX + 0
   94D5 36 19         [10] 9125 	ld	(hl), #0x19
                           9126 ;src/main.c:2039: storeY = 95;		
   94D7 21 EA 5E      [10] 9127 	ld	hl,#_storeY + 0
   94DA 36 5F         [10] 9128 	ld	(hl), #0x5f
                           9129 ;src/main.c:2040: break;
   94DC C3 03 97      [10] 9130 	jp	00113$
                           9131 ;src/main.c:2043: case 9: {			 
   94DF                    9132 00110$:
                           9133 ;src/main.c:2045: SetEnemyParams(2, BAT,		M_linear_X, 	D_left,     1, 73, 111,  41,  73);
   94DF 21 29 49      [10] 9134 	ld	hl, #0x4929
   94E2 E5            [11] 9135 	push	hl
   94E3 21 49 6F      [10] 9136 	ld	hl, #0x6f49
   94E6 E5            [11] 9137 	push	hl
   94E7 21 02 01      [10] 9138 	ld	hl, #0x0102
   94EA E5            [11] 9139 	push	hl
   94EB 21 05 00      [10] 9140 	ld	hl, #0x0005
   94EE E5            [11] 9141 	push	hl
   94EF 3E 02         [ 7] 9142 	ld	a, #0x02
   94F1 F5            [11] 9143 	push	af
   94F2 33            [ 6] 9144 	inc	sp
   94F3 CD B2 8D      [17] 9145 	call	_SetEnemyParams
   94F6 21 09 00      [10] 9146 	ld	hl, #9
   94F9 39            [11] 9147 	add	hl, sp
   94FA F9            [ 6] 9148 	ld	sp, hl
                           9149 ;src/main.c:2046: SetEnemyParams(3, BAT,		M_linear_X,		D_right,    1,  2, 111,   2,  34);				
   94FB 21 02 22      [10] 9150 	ld	hl, #0x2202
   94FE E5            [11] 9151 	push	hl
   94FF 26 6F         [ 7] 9152 	ld	h, #0x6f
   9501 E5            [11] 9153 	push	hl
   9502 21 03 01      [10] 9154 	ld	hl, #0x0103
   9505 E5            [11] 9155 	push	hl
   9506 21 05 00      [10] 9156 	ld	hl, #0x0005
   9509 E5            [11] 9157 	push	hl
   950A 3E 03         [ 7] 9158 	ld	a, #0x03
   950C F5            [11] 9159 	push	af
   950D 33            [ 6] 9160 	inc	sp
   950E CD B2 8D      [17] 9161 	call	_SetEnemyParams
   9511 21 09 00      [10] 9162 	ld	hl, #9
   9514 39            [11] 9163 	add	hl, sp
   9515 F9            [ 6] 9164 	ld	sp, hl
                           9165 ;src/main.c:2047: SetEnemyParams(4, SENTINEL, M_linear_Y,    	D_down,     1, 27,  44,  44, 175);
   9516 21 2C AF      [10] 9166 	ld	hl, #0xaf2c
   9519 E5            [11] 9167 	push	hl
   951A 21 1B 2C      [10] 9168 	ld	hl, #0x2c1b
   951D E5            [11] 9169 	push	hl
   951E 21 01 01      [10] 9170 	ld	hl, #0x0101
   9521 E5            [11] 9171 	push	hl
   9522 2E 02         [ 7] 9172 	ld	l, #0x02
   9524 E5            [11] 9173 	push	hl
   9525 3E 04         [ 7] 9174 	ld	a, #0x04
   9527 F5            [11] 9175 	push	af
   9528 33            [ 6] 9176 	inc	sp
   9529 CD B2 8D      [17] 9177 	call	_SetEnemyParams
   952C 21 09 00      [10] 9178 	ld	hl, #9
   952F 39            [11] 9179 	add	hl, sp
   9530 F9            [ 6] 9180 	ld	sp, hl
                           9181 ;src/main.c:2048: SetEnemyParams(5, SENTINEL,	M_linear_Y,		D_up,       1, 49, 160,  44, 175);
   9531 21 2C AF      [10] 9182 	ld	hl, #0xaf2c
   9534 E5            [11] 9183 	push	hl
   9535 21 31 A0      [10] 9184 	ld	hl, #0xa031
   9538 E5            [11] 9185 	push	hl
   9539 21 00 01      [10] 9186 	ld	hl, #0x0100
   953C E5            [11] 9187 	push	hl
   953D 2E 02         [ 7] 9188 	ld	l, #0x02
   953F E5            [11] 9189 	push	hl
   9540 3E 05         [ 7] 9190 	ld	a, #0x05
   9542 F5            [11] 9191 	push	af
   9543 33            [ 6] 9192 	inc	sp
   9544 CD B2 8D      [17] 9193 	call	_SetEnemyParams
   9547 21 09 00      [10] 9194 	ld	hl, #9
   954A 39            [11] 9195 	add	hl, sp
   954B F9            [ 6] 9196 	ld	sp, hl
                           9197 ;src/main.c:2050: spr[0].x = spr[0].px = 34; 
   954C 21 0E 5F      [10] 9198 	ld	hl, #(_spr + 0x0004)
   954F 36 22         [10] 9199 	ld	(hl), #0x22
   9551 21 0C 5F      [10] 9200 	ld	hl, #(_spr + 0x0002)
   9554 36 22         [10] 9201 	ld	(hl), #0x22
                           9202 ;src/main.c:2051: spr[0].y = spr[0].py = 176;			
   9556 21 0F 5F      [10] 9203 	ld	hl, #(_spr + 0x0005)
   9559 36 B0         [10] 9204 	ld	(hl), #0xb0
   955B 21 0D 5F      [10] 9205 	ld	hl, #(_spr + 0x0003)
   955E 36 B0         [10] 9206 	ld	(hl), #0xb0
                           9207 ;src/main.c:2053: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk9_end);
   9560 21 ED 38      [10] 9208 	ld	hl, #(_mappk9 + 0x01ac)
   9563 E5            [11] 9209 	push	hl
   9564 21 00 16      [10] 9210 	ld	hl, #0x1600
   9567 E5            [11] 9211 	push	hl
   9568 CD 5A 5C      [17] 9212 	call	_cpct_zx7b_decrunch_s
                           9213 ;src/main.c:2055: lName = "5;2@@@TOWER";	
   956B 21 95 97      [10] 9214 	ld	hl, #___str_32+0
   956E 22 D2 5E      [16] 9215 	ld	(_lName), hl
                           9216 ;src/main.c:2057: doorKey[0] = 10; // martian mushroom
   9571 21 DF 5E      [10] 9217 	ld	hl, #_doorKey
   9574 36 0A         [10] 9218 	ld	(hl), #0x0a
                           9219 ;src/main.c:2058: doorKey[1] = 5; // diamond dust
   9576 21 E0 5E      [10] 9220 	ld	hl, #(_doorKey + 0x0001)
   9579 36 05         [10] 9221 	ld	(hl), #0x05
                           9222 ;src/main.c:2059: doorKey[2] = 12; // dodo egg
   957B 21 E1 5E      [10] 9223 	ld	hl, #(_doorKey + 0x0002)
   957E 36 0C         [10] 9224 	ld	(hl), #0x0c
                           9225 ;src/main.c:2060: doorKey[3] = 4; // toad snot
   9580 21 E2 5E      [10] 9226 	ld	hl, #(_doorKey + 0x0003)
   9583 36 04         [10] 9227 	ld	(hl), #0x04
                           9228 ;src/main.c:2061: doorKey[4] = 13; // unicorn blood
   9585 21 E3 5E      [10] 9229 	ld	hl, #(_doorKey + 0x0004)
   9588 36 0D         [10] 9230 	ld	(hl), #0x0d
                           9231 ;src/main.c:2063: storeX = 41;
   958A 21 E9 5E      [10] 9232 	ld	hl,#_storeX + 0
   958D 36 29         [10] 9233 	ld	(hl), #0x29
                           9234 ;src/main.c:2064: storeY = 43;		
   958F 21 EA 5E      [10] 9235 	ld	hl,#_storeY + 0
   9592 36 2B         [10] 9236 	ld	(hl), #0x2b
                           9237 ;src/main.c:2065: break;
   9594 C3 03 97      [10] 9238 	jp	00113$
                           9239 ;src/main.c:2068: case 10: {			 
   9597                    9240 00111$:
                           9241 ;src/main.c:2070: SetEnemyParams(2, SENTINEL,	M_linear_X, 	D_left,     1,  2, 156,   2,  73);
   9597 21 02 49      [10] 9242 	ld	hl, #0x4902
   959A E5            [11] 9243 	push	hl
   959B 26 9C         [ 7] 9244 	ld	h, #0x9c
   959D E5            [11] 9245 	push	hl
   959E 26 01         [ 7] 9246 	ld	h, #0x01
   95A0 E5            [11] 9247 	push	hl
   95A1 26 00         [ 7] 9248 	ld	h, #0x00
   95A3 E5            [11] 9249 	push	hl
   95A4 3E 02         [ 7] 9250 	ld	a, #0x02
   95A6 F5            [11] 9251 	push	af
   95A7 33            [ 6] 9252 	inc	sp
   95A8 CD B2 8D      [17] 9253 	call	_SetEnemyParams
   95AB 21 09 00      [10] 9254 	ld	hl, #9
   95AE 39            [11] 9255 	add	hl, sp
   95AF F9            [ 6] 9256 	ld	sp, hl
                           9257 ;src/main.c:2071: SetEnemyParams(3, GHOST,	M_chaser, 		D_right,    4,  2, 114,   0,   0);
   95B0 21 00 00      [10] 9258 	ld	hl, #0x0000
   95B3 E5            [11] 9259 	push	hl
   95B4 21 02 72      [10] 9260 	ld	hl, #0x7202
   95B7 E5            [11] 9261 	push	hl
   95B8 21 03 04      [10] 9262 	ld	hl, #0x0403
   95BB E5            [11] 9263 	push	hl
   95BC 21 04 03      [10] 9264 	ld	hl, #0x0304
   95BF E5            [11] 9265 	push	hl
   95C0 3E 03         [ 7] 9266 	ld	a, #0x03
   95C2 F5            [11] 9267 	push	af
   95C3 33            [ 6] 9268 	inc	sp
   95C4 CD B2 8D      [17] 9269 	call	_SetEnemyParams
   95C7 21 09 00      [10] 9270 	ld	hl, #9
   95CA 39            [11] 9271 	add	hl, sp
   95CB F9            [ 6] 9272 	ld	sp, hl
                           9273 ;src/main.c:2072: SetEnemyParams(4, KNIGHT,	M_linear_Y, 	D_right,    1, 17,  40,  40, 145);
   95CC 21 28 91      [10] 9274 	ld	hl, #0x9128
   95CF E5            [11] 9275 	push	hl
   95D0 21 11 28      [10] 9276 	ld	hl, #0x2811
   95D3 E5            [11] 9277 	push	hl
   95D4 21 03 01      [10] 9278 	ld	hl, #0x0103
   95D7 E5            [11] 9279 	push	hl
   95D8 2E 03         [ 7] 9280 	ld	l, #0x03
   95DA E5            [11] 9281 	push	hl
   95DB 3E 04         [ 7] 9282 	ld	a, #0x04
   95DD F5            [11] 9283 	push	af
   95DE 33            [ 6] 9284 	inc	sp
   95DF CD B2 8D      [17] 9285 	call	_SetEnemyParams
   95E2 21 09 00      [10] 9286 	ld	hl, #9
   95E5 39            [11] 9287 	add	hl, sp
   95E6 F9            [ 6] 9288 	ld	sp, hl
                           9289 ;src/main.c:2073: SetEnemyParams(5, KNIGHT,	M_linear_Y, 	D_left,     1, 59,  40,  40, 145);
   95E7 21 28 91      [10] 9290 	ld	hl, #0x9128
   95EA E5            [11] 9291 	push	hl
   95EB 21 3B 28      [10] 9292 	ld	hl, #0x283b
   95EE E5            [11] 9293 	push	hl
   95EF 21 02 01      [10] 9294 	ld	hl, #0x0102
   95F2 E5            [11] 9295 	push	hl
   95F3 2E 03         [ 7] 9296 	ld	l, #0x03
   95F5 E5            [11] 9297 	push	hl
   95F6 3E 05         [ 7] 9298 	ld	a, #0x05
   95F8 F5            [11] 9299 	push	af
   95F9 33            [ 6] 9300 	inc	sp
   95FA CD B2 8D      [17] 9301 	call	_SetEnemyParams
   95FD 21 09 00      [10] 9302 	ld	hl, #9
   9600 39            [11] 9303 	add	hl, sp
   9601 F9            [ 6] 9304 	ld	sp, hl
                           9305 ;src/main.c:2075: spr[0].x = spr[0].px = 54; 
   9602 21 0E 5F      [10] 9306 	ld	hl, #(_spr + 0x0004)
   9605 36 36         [10] 9307 	ld	(hl), #0x36
   9607 21 0C 5F      [10] 9308 	ld	hl, #(_spr + 0x0002)
   960A 36 36         [10] 9309 	ld	(hl), #0x36
                           9310 ;src/main.c:2076: spr[0].y = spr[0].py = 176;			
   960C 21 0F 5F      [10] 9311 	ld	hl, #(_spr + 0x0005)
   960F 36 B0         [10] 9312 	ld	(hl), #0xb0
   9611 21 0D 5F      [10] 9313 	ld	hl, #(_spr + 0x0003)
   9614 36 B0         [10] 9314 	ld	(hl), #0xb0
                           9315 ;src/main.c:2078: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk10_end);
   9616 21 40 37      [10] 9316 	ld	hl, #(_mappk10 + 0x01ad)
   9619 E5            [11] 9317 	push	hl
   961A 21 00 16      [10] 9318 	ld	hl, #0x1600
   961D E5            [11] 9319 	push	hl
   961E CD 5A 5C      [17] 9320 	call	_cpct_zx7b_decrunch_s
                           9321 ;src/main.c:2080: lName = "6;1@@LIBRARY";
   9621 21 A1 97      [10] 9322 	ld	hl, #___str_33+0
   9624 22 D2 5E      [16] 9323 	ld	(_lName), hl
                           9324 ;src/main.c:2082: doorKey[0] = 11; // dragon blood
   9627 21 DF 5E      [10] 9325 	ld	hl, #_doorKey
   962A 36 0B         [10] 9326 	ld	(hl), #0x0b
                           9327 ;src/main.c:2083: doorKey[1] = 8; // kraken ink
   962C 21 E0 5E      [10] 9328 	ld	hl, #(_doorKey + 0x0001)
   962F 36 08         [10] 9329 	ld	(hl), #0x08
                           9330 ;src/main.c:2084: doorKey[2] = 9; // dodo egg
   9631 21 E1 5E      [10] 9331 	ld	hl, #(_doorKey + 0x0002)
   9634 36 09         [10] 9332 	ld	(hl), #0x09
                           9333 ;src/main.c:2085: doorKey[3] = 10; // martian mushroom
   9636 21 E2 5E      [10] 9334 	ld	hl, #(_doorKey + 0x0003)
   9639 36 0A         [10] 9335 	ld	(hl), #0x0a
                           9336 ;src/main.c:2086: doorKey[4] = 15; // mordor lava
   963B 21 E3 5E      [10] 9337 	ld	hl, #(_doorKey + 0x0004)
   963E 36 0F         [10] 9338 	ld	(hl), #0x0f
                           9339 ;src/main.c:2088: storeX = 3;
   9640 21 E9 5E      [10] 9340 	ld	hl,#_storeX + 0
   9643 36 03         [10] 9341 	ld	(hl), #0x03
                           9342 ;src/main.c:2089: storeY = 143;
   9645 21 EA 5E      [10] 9343 	ld	hl,#_storeY + 0
   9648 36 8F         [10] 9344 	ld	(hl), #0x8f
                           9345 ;src/main.c:2090: break;
   964A C3 03 97      [10] 9346 	jp	00113$
                           9347 ;src/main.c:2093: case 11: {			 
   964D                    9348 00112$:
                           9349 ;src/main.c:2095: SetEnemyParams(2, GHOST,	M_linear_X, 	D_left,     1,  2, 132,   2,  72);
   964D 21 02 48      [10] 9350 	ld	hl, #0x4802
   9650 E5            [11] 9351 	push	hl
   9651 26 84         [ 7] 9352 	ld	h, #0x84
   9653 E5            [11] 9353 	push	hl
   9654 26 01         [ 7] 9354 	ld	h, #0x01
   9656 E5            [11] 9355 	push	hl
   9657 21 04 00      [10] 9356 	ld	hl, #0x0004
   965A E5            [11] 9357 	push	hl
   965B 3E 02         [ 7] 9358 	ld	a, #0x02
   965D F5            [11] 9359 	push	af
   965E 33            [ 6] 9360 	inc	sp
   965F CD B2 8D      [17] 9361 	call	_SetEnemyParams
   9662 21 09 00      [10] 9362 	ld	hl, #9
   9665 39            [11] 9363 	add	hl, sp
   9666 F9            [ 6] 9364 	ld	sp, hl
                           9365 ;src/main.c:2096: SetEnemyParams(3, GHOST,	M_chaser, 		D_right,    5,  2, 114,   0,   0);
   9667 21 00 00      [10] 9366 	ld	hl, #0x0000
   966A E5            [11] 9367 	push	hl
   966B 21 02 72      [10] 9368 	ld	hl, #0x7202
   966E E5            [11] 9369 	push	hl
   966F 21 03 05      [10] 9370 	ld	hl, #0x0503
   9672 E5            [11] 9371 	push	hl
   9673 21 04 03      [10] 9372 	ld	hl, #0x0304
   9676 E5            [11] 9373 	push	hl
   9677 3E 03         [ 7] 9374 	ld	a, #0x03
   9679 F5            [11] 9375 	push	af
   967A 33            [ 6] 9376 	inc	sp
   967B CD B2 8D      [17] 9377 	call	_SetEnemyParams
   967E 21 09 00      [10] 9378 	ld	hl, #9
   9681 39            [11] 9379 	add	hl, sp
   9682 F9            [ 6] 9380 	ld	sp, hl
                           9381 ;src/main.c:2097: SetEnemyParams(4, KNIGHT,	M_linear_XY, 	D_down,     1, 21,  38,   0,   0);
   9683 21 00 00      [10] 9382 	ld	hl, #0x0000
   9686 E5            [11] 9383 	push	hl
   9687 21 15 26      [10] 9384 	ld	hl, #0x2615
   968A E5            [11] 9385 	push	hl
   968B 21 01 01      [10] 9386 	ld	hl, #0x0101
   968E E5            [11] 9387 	push	hl
   968F 21 03 02      [10] 9388 	ld	hl, #0x0203
   9692 E5            [11] 9389 	push	hl
   9693 3E 04         [ 7] 9390 	ld	a, #0x04
   9695 F5            [11] 9391 	push	af
   9696 33            [ 6] 9392 	inc	sp
   9697 CD B2 8D      [17] 9393 	call	_SetEnemyParams
   969A 21 09 00      [10] 9394 	ld	hl, #9
   969D 39            [11] 9395 	add	hl, sp
   969E F9            [ 6] 9396 	ld	sp, hl
                           9397 ;src/main.c:2098: SetEnemyParams(5, KNIGHT,	M_linear_XY, 	D_down,     1, 55,  38,   0,   0);
   969F 21 00 00      [10] 9398 	ld	hl, #0x0000
   96A2 E5            [11] 9399 	push	hl
   96A3 21 37 26      [10] 9400 	ld	hl, #0x2637
   96A6 E5            [11] 9401 	push	hl
   96A7 21 01 01      [10] 9402 	ld	hl, #0x0101
   96AA E5            [11] 9403 	push	hl
   96AB 21 03 02      [10] 9404 	ld	hl, #0x0203
   96AE E5            [11] 9405 	push	hl
   96AF 3E 05         [ 7] 9406 	ld	a, #0x05
   96B1 F5            [11] 9407 	push	af
   96B2 33            [ 6] 9408 	inc	sp
   96B3 CD B2 8D      [17] 9409 	call	_SetEnemyParams
   96B6 21 09 00      [10] 9410 	ld	hl, #9
   96B9 39            [11] 9411 	add	hl, sp
   96BA F9            [ 6] 9412 	ld	sp, hl
                           9413 ;src/main.c:2100: spr[0].x = spr[0].px = 34; 
   96BB 21 0E 5F      [10] 9414 	ld	hl, #(_spr + 0x0004)
   96BE 36 22         [10] 9415 	ld	(hl), #0x22
   96C0 21 0C 5F      [10] 9416 	ld	hl, #(_spr + 0x0002)
   96C3 36 22         [10] 9417 	ld	(hl), #0x22
                           9418 ;src/main.c:2101: spr[0].y = spr[0].py = 176;			
   96C5 21 0F 5F      [10] 9419 	ld	hl, #(_spr + 0x0005)
   96C8 36 B0         [10] 9420 	ld	(hl), #0xb0
   96CA 21 0D 5F      [10] 9421 	ld	hl, #(_spr + 0x0003)
   96CD 36 B0         [10] 9422 	ld	(hl), #0xb0
                           9423 ;src/main.c:2103: cpct_zx7b_decrunch_s(UNPACKED_MAP_END, mappk11_end);
   96CF 21 92 35      [10] 9424 	ld	hl, #(_mappk11 + 0x020b)
   96D2 E5            [11] 9425 	push	hl
   96D3 21 00 16      [10] 9426 	ld	hl, #0x1600
   96D6 E5            [11] 9427 	push	hl
   96D7 CD 5A 5C      [17] 9428 	call	_cpct_zx7b_decrunch_s
                           9429 ;src/main.c:2105: lName = "6;2@@LIBRARY";
   96DA 21 AE 97      [10] 9430 	ld	hl, #___str_34+0
   96DD 22 D2 5E      [16] 9431 	ld	(_lName), hl
                           9432 ;src/main.c:2107: doorKey[0] = 13; // unicorn blood
   96E0 21 DF 5E      [10] 9433 	ld	hl, #_doorKey
   96E3 36 0D         [10] 9434 	ld	(hl), #0x0d
                           9435 ;src/main.c:2108: doorKey[1] = 15; // mordor lava
   96E5 21 E0 5E      [10] 9436 	ld	hl, #(_doorKey + 0x0001)
   96E8 36 0F         [10] 9437 	ld	(hl), #0x0f
                           9438 ;src/main.c:2109: doorKey[2] = 14; // troll fat
   96EA 21 E1 5E      [10] 9439 	ld	hl, #(_doorKey + 0x0002)
   96ED 36 0E         [10] 9440 	ld	(hl), #0x0e
                           9441 ;src/main.c:2110: doorKey[3] = 15; // mordor lava
   96EF 21 E2 5E      [10] 9442 	ld	hl, #(_doorKey + 0x0003)
   96F2 36 0F         [10] 9443 	ld	(hl), #0x0f
                           9444 ;src/main.c:2111: doorKey[4] = 13; // unicorn blood
   96F4 21 E3 5E      [10] 9445 	ld	hl, #(_doorKey + 0x0004)
   96F7 36 0D         [10] 9446 	ld	(hl), #0x0d
                           9447 ;src/main.c:2113: storeX = 73;
   96F9 21 E9 5E      [10] 9448 	ld	hl,#_storeX + 0
   96FC 36 49         [10] 9449 	ld	(hl), #0x49
                           9450 ;src/main.c:2114: storeY = 11;
   96FE 21 EA 5E      [10] 9451 	ld	hl,#_storeY + 0
   9701 36 0B         [10] 9452 	ld	(hl), #0x0b
                           9453 ;src/main.c:2117: }
   9703                    9454 00113$:
                           9455 ;src/main.c:2119: if (TwoPlayers) {
   9703 3A D4 5E      [13] 9456 	ld	a,(#_TwoPlayers + 0)
   9706 B7            [ 4] 9457 	or	a, a
   9707 C8            [11] 9458 	ret	Z
                           9459 ;src/main.c:2120: spr[1].x = spr[1].px = spr[0].x + 6; 
   9708 01 1B 5F      [10] 9460 	ld	bc, #_spr + 17
   970B 11 1D 5F      [10] 9461 	ld	de, #_spr + 19
   970E 3A 0C 5F      [13] 9462 	ld	a, (#_spr + 2)
   9711 C6 06         [ 7] 9463 	add	a, #0x06
   9713 12            [ 7] 9464 	ld	(de), a
   9714 02            [ 7] 9465 	ld	(bc), a
                           9466 ;src/main.c:2121: spr[1].y = spr[1].py = spr[0].y;
   9715 01 1C 5F      [10] 9467 	ld	bc, #_spr + 18
   9718 11 1E 5F      [10] 9468 	ld	de, #_spr + 20
   971B 3A 0D 5F      [13] 9469 	ld	a, (#_spr + 3)
   971E 12            [ 7] 9470 	ld	(de), a
   971F 02            [ 7] 9471 	ld	(bc), a
   9720 C9            [10] 9472 	ret
   9721                    9473 ___str_23:
   9721 31 3B 31 40 40 47  9474 	.ascii "1;1@@GARDENS"
        41 52 44 45 4E 53
   972D 00                 9475 	.db 0x00
   972E                    9476 ___str_24:
   972E 31 3B 32 40 40 47  9477 	.ascii "1;2@@GARDENS"
        41 52 44 45 4E 53
   973A 00                 9478 	.db 0x00
   973B                    9479 ___str_25:
   973B 32 3B 31 40 43 45  9480 	.ascii "2;1@CEMETERY"
        4D 45 54 45 52 59
   9747 00                 9481 	.db 0x00
   9748                    9482 ___str_26:
   9748 32 3B 32 40 43 45  9483 	.ascii "2;2@CEMETERY"
        4D 45 54 45 52 59
   9754 00                 9484 	.db 0x00
   9755                    9485 ___str_27:
   9755 33 3B 31 40 40 43  9486 	.ascii "3;1@@CELLARS"
        45 4C 4C 41 52 53
   9761 00                 9487 	.db 0x00
   9762                    9488 ___str_28:
   9762 33 3B 32 40 40 43  9489 	.ascii "3;2@@CELLARS"
        45 4C 4C 41 52 53
   976E 00                 9490 	.db 0x00
   976F                    9491 ___str_29:
   976F 34 3B 31 40 40 40  9492 	.ascii "4;1@@@CASTLE"
        43 41 53 54 4C 45
   977B 00                 9493 	.db 0x00
   977C                    9494 ___str_30:
   977C 34 3B 32 40 40 40  9495 	.ascii "4;2@@@CASTLE"
        43 41 53 54 4C 45
   9788 00                 9496 	.db 0x00
   9789                    9497 ___str_31:
   9789 35 3B 31 40 40 40  9498 	.ascii "5;1@@@TOWER"
        54 4F 57 45 52
   9794 00                 9499 	.db 0x00
   9795                    9500 ___str_32:
   9795 35 3B 32 40 40 40  9501 	.ascii "5;2@@@TOWER"
        54 4F 57 45 52
   97A0 00                 9502 	.db 0x00
   97A1                    9503 ___str_33:
   97A1 36 3B 31 40 40 4C  9504 	.ascii "6;1@@LIBRARY"
        49 42 52 41 52 59
   97AD 00                 9505 	.db 0x00
   97AE                    9506 ___str_34:
   97AE 36 3B 32 40 40 4C  9507 	.ascii "6;2@@LIBRARY"
        49 42 52 41 52 59
   97BA 00                 9508 	.db 0x00
                           9509 ;src/main.c:2127: void CheckEnemyCollision(u8 player, TSpr *pSpr) 
                           9510 ;	---------------------------------
                           9511 ; Function CheckEnemyCollision
                           9512 ; ---------------------------------
   97BB                    9513 _CheckEnemyCollision::
   97BB DD E5         [15] 9514 	push	ix
   97BD DD 21 00 00   [14] 9515 	ld	ix,#0
   97C1 DD 39         [15] 9516 	add	ix,sp
   97C3 21 F8 FF      [10] 9517 	ld	hl, #-8
   97C6 39            [11] 9518 	add	hl, sp
   97C7 F9            [ 6] 9519 	ld	sp, hl
                           9520 ;src/main.c:2129: if ((spr[player].x + SPR_W) > pSpr->x && spr[player].x < (pSpr->x + SPR_W) &&
   97C8 01 0A 5F      [10] 9521 	ld	bc, #_spr+0
   97CB DD 5E 04      [19] 9522 	ld	e,4 (ix)
   97CE 16 00         [ 7] 9523 	ld	d,#0x00
   97D0 6B            [ 4] 9524 	ld	l, e
   97D1 62            [ 4] 9525 	ld	h, d
   97D2 29            [11] 9526 	add	hl, hl
   97D3 19            [11] 9527 	add	hl, de
   97D4 29            [11] 9528 	add	hl, hl
   97D5 19            [11] 9529 	add	hl, de
   97D6 29            [11] 9530 	add	hl, hl
   97D7 19            [11] 9531 	add	hl, de
   97D8 09            [11] 9532 	add	hl,bc
   97D9 5D            [ 4] 9533 	ld	e,l
   97DA 54            [ 4] 9534 	ld	d,h
   97DB 23            [ 6] 9535 	inc	hl
   97DC 23            [ 6] 9536 	inc	hl
   97DD 4E            [ 7] 9537 	ld	c, (hl)
   97DE 06 00         [ 7] 9538 	ld	b, #0x00
   97E0 21 05 00      [10] 9539 	ld	hl, #0x0005
   97E3 09            [11] 9540 	add	hl,bc
   97E4 DD 75 FE      [19] 9541 	ld	-2 (ix), l
   97E7 DD 74 FF      [19] 9542 	ld	-1 (ix), h
   97EA DD 7E 05      [19] 9543 	ld	a, 5 (ix)
   97ED DD 77 FA      [19] 9544 	ld	-6 (ix), a
   97F0 DD 7E 06      [19] 9545 	ld	a, 6 (ix)
   97F3 DD 77 FB      [19] 9546 	ld	-5 (ix), a
   97F6 DD 6E FA      [19] 9547 	ld	l,-6 (ix)
   97F9 DD 66 FB      [19] 9548 	ld	h,-5 (ix)
   97FC 23            [ 6] 9549 	inc	hl
   97FD 23            [ 6] 9550 	inc	hl
   97FE 6E            [ 7] 9551 	ld	l, (hl)
   97FF 26 00         [ 7] 9552 	ld	h, #0x00
                           9553 ;src/main.c:2130: (spr[player].y + SPR_H) > pSpr->y && spr[player].y < (pSpr->y + SPR_H)) {
   9801 13            [ 6] 9554 	inc	de
   9802 13            [ 6] 9555 	inc	de
   9803 13            [ 6] 9556 	inc	de
   9804 DD 73 FC      [19] 9557 	ld	-4 (ix), e
   9807 DD 72 FD      [19] 9558 	ld	-3 (ix), d
                           9559 ;src/main.c:2129: if ((spr[player].x + SPR_W) > pSpr->x && spr[player].x < (pSpr->x + SPR_W) &&
   980A 7D            [ 4] 9560 	ld	a, l
   980B DD 96 FE      [19] 9561 	sub	a, -2 (ix)
   980E 7C            [ 4] 9562 	ld	a, h
   980F DD 9E FF      [19] 9563 	sbc	a, -1 (ix)
   9812 E2 17 98      [10] 9564 	jp	PO, 00153$
   9815 EE 80         [ 7] 9565 	xor	a, #0x80
   9817                    9566 00153$:
   9817 F2 83 98      [10] 9567 	jp	P, 00110$
   981A 11 05 00      [10] 9568 	ld	de, #0x0005
   981D 19            [11] 9569 	add	hl, de
   981E 79            [ 4] 9570 	ld	a, c
   981F 95            [ 4] 9571 	sub	a, l
   9820 78            [ 4] 9572 	ld	a, b
   9821 9C            [ 4] 9573 	sbc	a, h
   9822 E2 27 98      [10] 9574 	jp	PO, 00154$
   9825 EE 80         [ 7] 9575 	xor	a, #0x80
   9827                    9576 00154$:
   9827 F2 83 98      [10] 9577 	jp	P, 00110$
                           9578 ;src/main.c:2130: (spr[player].y + SPR_H) > pSpr->y && spr[player].y < (pSpr->y + SPR_H)) {
   982A DD 6E FC      [19] 9579 	ld	l,-4 (ix)
   982D DD 66 FD      [19] 9580 	ld	h,-3 (ix)
   9830 5E            [ 7] 9581 	ld	e, (hl)
   9831 16 00         [ 7] 9582 	ld	d, #0x00
   9833 21 0C 00      [10] 9583 	ld	hl, #0x000c
   9836 19            [11] 9584 	add	hl,de
   9837 E3            [19] 9585 	ex	(sp), hl
   9838 DD 6E FA      [19] 9586 	ld	l,-6 (ix)
   983B DD 66 FB      [19] 9587 	ld	h,-5 (ix)
   983E 23            [ 6] 9588 	inc	hl
   983F 23            [ 6] 9589 	inc	hl
   9840 23            [ 6] 9590 	inc	hl
   9841 6E            [ 7] 9591 	ld	l, (hl)
   9842 26 00         [ 7] 9592 	ld	h, #0x00
   9844 7D            [ 4] 9593 	ld	a, l
   9845 DD 96 F8      [19] 9594 	sub	a, -8 (ix)
   9848 7C            [ 4] 9595 	ld	a, h
   9849 DD 9E F9      [19] 9596 	sbc	a, -7 (ix)
   984C E2 51 98      [10] 9597 	jp	PO, 00155$
   984F EE 80         [ 7] 9598 	xor	a, #0x80
   9851                    9599 00155$:
   9851 F2 83 98      [10] 9600 	jp	P, 00110$
   9854 D5            [11] 9601 	push	de
   9855 11 0C 00      [10] 9602 	ld	de, #0x000c
   9858 19            [11] 9603 	add	hl, de
   9859 D1            [10] 9604 	pop	de
   985A 7B            [ 4] 9605 	ld	a, e
   985B 95            [ 4] 9606 	sub	a, l
   985C 7A            [ 4] 9607 	ld	a, d
   985D 9C            [ 4] 9608 	sbc	a, h
   985E E2 63 98      [10] 9609 	jp	PO, 00156$
   9861 EE 80         [ 7] 9610 	xor	a, #0x80
   9863                    9611 00156$:
   9863 F2 83 98      [10] 9612 	jp	P, 00110$
                           9613 ;src/main.c:2132: ExplodeSprite(player, pSpr->num);			
   9866 DD 6E FA      [19] 9614 	ld	l,-6 (ix)
   9869 DD 66 FB      [19] 9615 	ld	h,-5 (ix)
   986C 46            [ 7] 9616 	ld	b, (hl)
   986D C5            [11] 9617 	push	bc
   986E 33            [ 6] 9618 	inc	sp
   986F DD 7E 04      [19] 9619 	ld	a, 4 (ix)
   9872 F5            [11] 9620 	push	af
   9873 33            [ 6] 9621 	inc	sp
   9874 CD 8A 7A      [17] 9622 	call	_ExplodeSprite
   9877 F1            [10] 9623 	pop	af
                           9624 ;src/main.c:2133: GameOver(player);
   9878 DD 7E 04      [19] 9625 	ld	a, 4 (ix)
   987B F5            [11] 9626 	push	af
   987C 33            [ 6] 9627 	inc	sp
   987D CD 57 A0      [17] 9628 	call	_GameOver
   9880 33            [ 6] 9629 	inc	sp
   9881 18 7A         [12] 9630 	jr	00115$
   9883                    9631 00110$:
                           9632 ;src/main.c:2136: else if (sht.active) {
   9883 3A 77 5F      [13] 9633 	ld	a, (#_sht + 4)
   9886 B7            [ 4] 9634 	or	a, a
   9887 28 74         [12] 9635 	jr	Z,00115$
                           9636 ;src/main.c:2137: if ((sht.x + SHT_W) > (spr[player].x) && sht.x < (spr[player].x + SPR_W))
   9889 21 73 5F      [10] 9637 	ld	hl, #_sht + 0
   988C 5E            [ 7] 9638 	ld	e, (hl)
   988D 16 00         [ 7] 9639 	ld	d, #0x00
   988F 21 04 00      [10] 9640 	ld	hl, #0x0004
   9892 19            [11] 9641 	add	hl, de
   9893 79            [ 4] 9642 	ld	a, c
   9894 95            [ 4] 9643 	sub	a, l
   9895 78            [ 4] 9644 	ld	a, b
   9896 9C            [ 4] 9645 	sbc	a, h
   9897 E2 9C 98      [10] 9646 	jp	PO, 00157$
   989A EE 80         [ 7] 9647 	xor	a, #0x80
   989C                    9648 00157$:
   989C F2 FD 98      [10] 9649 	jp	P, 00115$
   989F 7B            [ 4] 9650 	ld	a, e
   98A0 DD 96 FE      [19] 9651 	sub	a, -2 (ix)
   98A3 7A            [ 4] 9652 	ld	a, d
   98A4 DD 9E FF      [19] 9653 	sbc	a, -1 (ix)
   98A7 E2 AC 98      [10] 9654 	jp	PO, 00158$
   98AA EE 80         [ 7] 9655 	xor	a, #0x80
   98AC                    9656 00158$:
   98AC F2 FD 98      [10] 9657 	jp	P, 00115$
                           9658 ;src/main.c:2138: if ((sht.y + SHT_H) > (spr[player].y) && (sht.y) < (spr[player].y + SPR_H))	{
   98AF 21 74 5F      [10] 9659 	ld	hl, #_sht + 1
   98B2 4E            [ 7] 9660 	ld	c, (hl)
   98B3 06 00         [ 7] 9661 	ld	b, #0x00
   98B5 21 08 00      [10] 9662 	ld	hl, #0x0008
   98B8 09            [11] 9663 	add	hl,bc
   98B9 EB            [ 4] 9664 	ex	de,hl
   98BA DD 6E FC      [19] 9665 	ld	l,-4 (ix)
   98BD DD 66 FD      [19] 9666 	ld	h,-3 (ix)
   98C0 6E            [ 7] 9667 	ld	l, (hl)
   98C1 26 00         [ 7] 9668 	ld	h, #0x00
   98C3 7D            [ 4] 9669 	ld	a, l
   98C4 93            [ 4] 9670 	sub	a, e
   98C5 7C            [ 4] 9671 	ld	a, h
   98C6 9A            [ 4] 9672 	sbc	a, d
   98C7 E2 CC 98      [10] 9673 	jp	PO, 00159$
   98CA EE 80         [ 7] 9674 	xor	a, #0x80
   98CC                    9675 00159$:
   98CC F2 FD 98      [10] 9676 	jp	P, 00115$
   98CF 11 0C 00      [10] 9677 	ld	de, #0x000c
   98D2 19            [11] 9678 	add	hl, de
   98D3 79            [ 4] 9679 	ld	a, c
   98D4 95            [ 4] 9680 	sub	a, l
   98D5 78            [ 4] 9681 	ld	a, b
   98D6 9C            [ 4] 9682 	sbc	a, h
   98D7 E2 DC 98      [10] 9683 	jp	PO, 00160$
   98DA EE 80         [ 7] 9684 	xor	a, #0x80
   98DC                    9685 00160$:
   98DC F2 FD 98      [10] 9686 	jp	P, 00115$
                           9687 ;src/main.c:2140: DeleteShot();
   98DF CD 00 87      [17] 9688 	call	_DeleteShot
                           9689 ;src/main.c:2141: ExplodeSprite(player, pSpr->num);			
   98E2 DD 6E FA      [19] 9690 	ld	l,-6 (ix)
   98E5 DD 66 FB      [19] 9691 	ld	h,-5 (ix)
   98E8 46            [ 7] 9692 	ld	b, (hl)
   98E9 C5            [11] 9693 	push	bc
   98EA 33            [ 6] 9694 	inc	sp
   98EB DD 7E 04      [19] 9695 	ld	a, 4 (ix)
   98EE F5            [11] 9696 	push	af
   98EF 33            [ 6] 9697 	inc	sp
   98F0 CD 8A 7A      [17] 9698 	call	_ExplodeSprite
   98F3 F1            [10] 9699 	pop	af
                           9700 ;src/main.c:2142: GameOver(player);
   98F4 DD 7E 04      [19] 9701 	ld	a, 4 (ix)
   98F7 F5            [11] 9702 	push	af
   98F8 33            [ 6] 9703 	inc	sp
   98F9 CD 57 A0      [17] 9704 	call	_GameOver
   98FC 33            [ 6] 9705 	inc	sp
   98FD                    9706 00115$:
   98FD DD F9         [10] 9707 	ld	sp, ix
   98FF DD E1         [14] 9708 	pop	ix
   9901 C9            [10] 9709 	ret
                           9710 ;src/main.c:2149: void EnemyLoop(TSpr *pSpr) __z88dk_fastcall {
                           9711 ;	---------------------------------
                           9712 ; Function EnemyLoop
                           9713 ; ---------------------------------
   9902                    9714 _EnemyLoop::
                           9715 ;src/main.c:2150: if (pSpr->ident == NOBODY) 
   9902 4D            [ 4] 9716 	ld	c,l
   9903 44            [ 4] 9717 	ld	b,h
   9904 23            [ 6] 9718 	inc	hl
   9905 7E            [ 7] 9719 	ld	a, (hl)
   9906 D6 09         [ 7] 9720 	sub	a, #0x09
   9908 C8            [11] 9721 	ret	Z
                           9722 ;src/main.c:2151: return; 
   9909 18 00         [12] 9723 	jr	00102$
   990B                    9724 00102$:
                           9725 ;src/main.c:2153: MoveEnemy(pSpr);
   990B C5            [11] 9726 	push	bc
   990C C5            [11] 9727 	push	bc
   990D CD 22 89      [17] 9728 	call	_MoveEnemy
   9910 F1            [10] 9729 	pop	af
   9911 C1            [10] 9730 	pop	bc
                           9731 ;src/main.c:2155: SelectFrame(pSpr); 
   9912 C5            [11] 9732 	push	bc
   9913 69            [ 4] 9733 	ld	l, c
   9914 60            [ 4] 9734 	ld	h, b
   9915 CD CE 77      [17] 9735 	call	_SelectFrame
   9918 C1            [10] 9736 	pop	bc
                           9737 ;src/main.c:2156: WalkAnim(pSpr, pSpr->dir);
   9919 C5            [11] 9738 	push	bc
   991A FD E1         [14] 9739 	pop	iy
   991C FD 56 07      [19] 9740 	ld	d, 7 (iy)
   991F C5            [11] 9741 	push	bc
   9920 D5            [11] 9742 	push	de
   9921 33            [ 6] 9743 	inc	sp
   9922 C5            [11] 9744 	push	bc
   9923 CD F6 7F      [17] 9745 	call	_WalkAnim
   9926 F1            [10] 9746 	pop	af
   9927 33            [ 6] 9747 	inc	sp
   9928 C1            [10] 9748 	pop	bc
                           9749 ;src/main.c:2158: DeleteSprite(pSpr);
   9929 C5            [11] 9750 	push	bc
   992A 69            [ 4] 9751 	ld	l, c
   992B 60            [ 4] 9752 	ld	h, b
   992C CD 19 77      [17] 9753 	call	_DeleteSprite
   992F C1            [10] 9754 	pop	bc
                           9755 ;src/main.c:2159: pSpr->px = pSpr->x; // save the current X coordinate
   9930 21 04 00      [10] 9756 	ld	hl, #0x0004
   9933 09            [11] 9757 	add	hl,bc
   9934 EB            [ 4] 9758 	ex	de,hl
   9935 69            [ 4] 9759 	ld	l, c
   9936 60            [ 4] 9760 	ld	h, b
   9937 23            [ 6] 9761 	inc	hl
   9938 23            [ 6] 9762 	inc	hl
   9939 7E            [ 7] 9763 	ld	a, (hl)
   993A 12            [ 7] 9764 	ld	(de), a
                           9765 ;src/main.c:2160: pSpr->py = pSpr->y; // save the current Y coordinate
   993B 21 05 00      [10] 9766 	ld	hl, #0x0005
   993E 09            [11] 9767 	add	hl,bc
   993F EB            [ 4] 9768 	ex	de,hl
   9940 69            [ 4] 9769 	ld	l, c
   9941 60            [ 4] 9770 	ld	h, b
   9942 23            [ 6] 9771 	inc	hl
   9943 23            [ 6] 9772 	inc	hl
   9944 23            [ 6] 9773 	inc	hl
   9945 7E            [ 7] 9774 	ld	a, (hl)
   9946 12            [ 7] 9775 	ld	(de), a
                           9776 ;src/main.c:2161: PrintSprite(pSpr);
   9947 C5            [11] 9777 	push	bc
   9948 69            [ 4] 9778 	ld	l, c
   9949 60            [ 4] 9779 	ld	h, b
   994A CD EA 76      [17] 9780 	call	_PrintSprite
   994D C1            [10] 9781 	pop	bc
                           9782 ;src/main.c:2163: CheckEnemyCollision(0, pSpr);
   994E C5            [11] 9783 	push	bc
   994F C5            [11] 9784 	push	bc
   9950 AF            [ 4] 9785 	xor	a, a
   9951 F5            [11] 9786 	push	af
   9952 33            [ 6] 9787 	inc	sp
   9953 CD BB 97      [17] 9788 	call	_CheckEnemyCollision
   9956 F1            [10] 9789 	pop	af
   9957 33            [ 6] 9790 	inc	sp
   9958 C1            [10] 9791 	pop	bc
                           9792 ;src/main.c:2164: if (TwoPlayers)
   9959 3A D4 5E      [13] 9793 	ld	a,(#_TwoPlayers + 0)
   995C B7            [ 4] 9794 	or	a, a
   995D C8            [11] 9795 	ret	Z
                           9796 ;src/main.c:2165: CheckEnemyCollision(1, pSpr);
   995E C5            [11] 9797 	push	bc
   995F 3E 01         [ 7] 9798 	ld	a, #0x01
   9961 F5            [11] 9799 	push	af
   9962 33            [ 6] 9800 	inc	sp
   9963 CD BB 97      [17] 9801 	call	_CheckEnemyCollision
   9966 F1            [10] 9802 	pop	af
   9967 33            [ 6] 9803 	inc	sp
   9968 C9            [10] 9804 	ret
                           9805 ;src/main.c:2172: void PrintStartMenu() {
                           9806 ;	---------------------------------
                           9807 ; Function PrintStartMenu
                           9808 ; ---------------------------------
   9969                    9809 _PrintStartMenu::
                           9810 ;src/main.c:2173: ClearScreen();
   9969 CD B6 61      [17] 9811 	call	_ClearScreen
                           9812 ;src/main.c:2176: cpct_drawSprite(g_logo_0, cpctm_screenPtr(CPCT_VMEM_START, 0, 0), G_LOGO_0_W, G_LOGO_0_H);
   996C 21 28 23      [10] 9813 	ld	hl, #0x2328
   996F E5            [11] 9814 	push	hl
   9970 21 00 C0      [10] 9815 	ld	hl, #0xc000
   9973 E5            [11] 9816 	push	hl
   9974 21 B7 16      [10] 9817 	ld	hl, #_g_logo_0
   9977 E5            [11] 9818 	push	hl
   9978 CD 6C 5A      [17] 9819 	call	_cpct_drawSprite
                           9820 ;src/main.c:2177: cpct_drawSprite(g_logo_1, cpctm_screenPtr(CPCT_VMEM_START, G_LOGO_0_W, 0), G_LOGO_0_W, G_LOGO_0_H);
   997B 21 28 23      [10] 9821 	ld	hl, #0x2328
   997E E5            [11] 9822 	push	hl
   997F 26 C0         [ 7] 9823 	ld	h, #0xc0
   9981 E5            [11] 9824 	push	hl
   9982 21 2F 1C      [10] 9825 	ld	hl, #_g_logo_1
   9985 E5            [11] 9826 	push	hl
   9986 CD 6C 5A      [17] 9827 	call	_cpct_drawSprite
                           9828 ;src/main.c:2179: PrintText("1@@1@PLAYER@GAME", 10, 50, 0);
   9989 21 32 00      [10] 9829 	ld	hl, #0x0032
   998C E5            [11] 9830 	push	hl
   998D 3E 0A         [ 7] 9831 	ld	a, #0x0a
   998F F5            [11] 9832 	push	af
   9990 33            [ 6] 9833 	inc	sp
   9991 21 98 9A      [10] 9834 	ld	hl, #___str_35
   9994 E5            [11] 9835 	push	hl
   9995 CD 10 63      [17] 9836 	call	_PrintText
   9998 F1            [10] 9837 	pop	af
                           9838 ;src/main.c:2180: PrintText("2@@2@PLAYER@GAME", 10, 60, 0);
   9999 33            [ 6] 9839 	inc	sp
   999A 21 3C 00      [10] 9840 	ld	hl,#0x003c
   999D E3            [19] 9841 	ex	(sp),hl
   999E 3E 0A         [ 7] 9842 	ld	a, #0x0a
   99A0 F5            [11] 9843 	push	af
   99A1 33            [ 6] 9844 	inc	sp
   99A2 21 A9 9A      [10] 9845 	ld	hl, #___str_36
   99A5 E5            [11] 9846 	push	hl
   99A6 CD 10 63      [17] 9847 	call	_PrintText
   99A9 F1            [10] 9848 	pop	af
                           9849 ;src/main.c:2181: PrintText("3@@REDEFINE@CONTROLS", 10, 70, 0);
   99AA 33            [ 6] 9850 	inc	sp
   99AB 21 46 00      [10] 9851 	ld	hl,#0x0046
   99AE E3            [19] 9852 	ex	(sp),hl
   99AF 3E 0A         [ 7] 9853 	ld	a, #0x0a
   99B1 F5            [11] 9854 	push	af
   99B2 33            [ 6] 9855 	inc	sp
   99B3 21 BA 9A      [10] 9856 	ld	hl, #___str_37
   99B6 E5            [11] 9857 	push	hl
   99B7 CD 10 63      [17] 9858 	call	_PrintText
   99BA F1            [10] 9859 	pop	af
   99BB F1            [10] 9860 	pop	af
   99BC 33            [ 6] 9861 	inc	sp
                           9862 ;src/main.c:2182: if (turboMode)
   99BD 3A EF 5E      [13] 9863 	ld	a,(#_turboMode + 0)
   99C0 B7            [ 4] 9864 	or	a, a
   99C1 28 14         [12] 9865 	jr	Z,00102$
                           9866 ;src/main.c:2183: PrintText("4@@TURBO@MODE:@ON", 10, 80, 0);
   99C3 21 50 00      [10] 9867 	ld	hl, #0x0050
   99C6 E5            [11] 9868 	push	hl
   99C7 3E 0A         [ 7] 9869 	ld	a, #0x0a
   99C9 F5            [11] 9870 	push	af
   99CA 33            [ 6] 9871 	inc	sp
   99CB 21 CF 9A      [10] 9872 	ld	hl, #___str_38
   99CE E5            [11] 9873 	push	hl
   99CF CD 10 63      [17] 9874 	call	_PrintText
   99D2 F1            [10] 9875 	pop	af
   99D3 F1            [10] 9876 	pop	af
   99D4 33            [ 6] 9877 	inc	sp
   99D5 18 12         [12] 9878 	jr	00103$
   99D7                    9879 00102$:
                           9880 ;src/main.c:2185: PrintText("4@@TURBO@MODE:@OFF", 10, 80, 0);
   99D7 21 50 00      [10] 9881 	ld	hl, #0x0050
   99DA E5            [11] 9882 	push	hl
   99DB 3E 0A         [ 7] 9883 	ld	a, #0x0a
   99DD F5            [11] 9884 	push	af
   99DE 33            [ 6] 9885 	inc	sp
   99DF 21 E1 9A      [10] 9886 	ld	hl, #___str_39
   99E2 E5            [11] 9887 	push	hl
   99E3 CD 10 63      [17] 9888 	call	_PrintText
   99E6 F1            [10] 9889 	pop	af
   99E7 F1            [10] 9890 	pop	af
   99E8 33            [ 6] 9891 	inc	sp
   99E9                    9892 00103$:
                           9893 ;src/main.c:2189: cpct_getScreenPtr(CPCT_VMEM_START, 6, 187), SPR_W, SPR_H, g_maskTable);
   99E9 21 06 BB      [10] 9894 	ld	hl, #0xbb06
   99EC E5            [11] 9895 	push	hl
   99ED 21 00 C0      [10] 9896 	ld	hl, #0xc000
   99F0 E5            [11] 9897 	push	hl
   99F1 CD CF 5D      [17] 9898 	call	_cpct_getScreenPtr
                           9899 ;src/main.c:2188: cpct_drawSpriteMaskedAlignedTable(g_sorcerer1_06, 
   99F4 01 D7 2D      [10] 9900 	ld	bc, #_g_sorcerer1_06+0
   99F7 11 00 01      [10] 9901 	ld	de, #_g_maskTable
   99FA D5            [11] 9902 	push	de
   99FB 11 05 0C      [10] 9903 	ld	de, #0x0c05
   99FE D5            [11] 9904 	push	de
   99FF E5            [11] 9905 	push	hl
   9A00 C5            [11] 9906 	push	bc
   9A01 CD E5 5D      [17] 9907 	call	_cpct_drawSpriteMaskedAlignedTable
                           9908 ;src/main.c:2191: cpct_getScreenPtr(CPCT_VMEM_START, 68, 187), SPR_W, SPR_H, g_maskTable);
   9A04 21 44 BB      [10] 9909 	ld	hl, #0xbb44
   9A07 E5            [11] 9910 	push	hl
   9A08 21 00 C0      [10] 9911 	ld	hl, #0xc000
   9A0B E5            [11] 9912 	push	hl
   9A0C CD CF 5D      [17] 9913 	call	_cpct_getScreenPtr
                           9914 ;src/main.c:2190: cpct_drawSpriteMaskedAlignedTable(g_sorcerer2_04, 
   9A0F 01 07 2B      [10] 9915 	ld	bc, #_g_sorcerer2_04+0
   9A12 11 00 01      [10] 9916 	ld	de, #_g_maskTable
   9A15 D5            [11] 9917 	push	de
   9A16 11 05 0C      [10] 9918 	ld	de, #0x0c05
   9A19 D5            [11] 9919 	push	de
   9A1A E5            [11] 9920 	push	hl
   9A1B C5            [11] 9921 	push	bc
   9A1C CD E5 5D      [17] 9922 	call	_cpct_drawSpriteMaskedAlignedTable
                           9923 ;src/main.c:2193: PrintText("CODE@=@GFX", 25, 110, 0);
   9A1F 21 6E 00      [10] 9924 	ld	hl, #0x006e
   9A22 E5            [11] 9925 	push	hl
   9A23 3E 19         [ 7] 9926 	ld	a, #0x19
   9A25 F5            [11] 9927 	push	af
   9A26 33            [ 6] 9928 	inc	sp
   9A27 21 F4 9A      [10] 9929 	ld	hl, #___str_40
   9A2A E5            [11] 9930 	push	hl
   9A2B CD 10 63      [17] 9931 	call	_PrintText
   9A2E F1            [10] 9932 	pop	af
                           9933 ;src/main.c:2194: PrintText("SALVAKANTERO", 22, 120, 0);
   9A2F 33            [ 6] 9934 	inc	sp
   9A30 21 78 00      [10] 9935 	ld	hl,#0x0078
   9A33 E3            [19] 9936 	ex	(sp),hl
   9A34 3E 16         [ 7] 9937 	ld	a, #0x16
   9A36 F5            [11] 9938 	push	af
   9A37 33            [ 6] 9939 	inc	sp
   9A38 21 FF 9A      [10] 9940 	ld	hl, #___str_41
   9A3B E5            [11] 9941 	push	hl
   9A3C CD 10 63      [17] 9942 	call	_PrintText
   9A3F F1            [10] 9943 	pop	af
                           9944 ;src/main.c:2195: PrintText("MUSIC@=@FX", 25, 135, 0);
   9A40 33            [ 6] 9945 	inc	sp
   9A41 21 87 00      [10] 9946 	ld	hl,#0x0087
   9A44 E3            [19] 9947 	ex	(sp),hl
   9A45 3E 19         [ 7] 9948 	ld	a, #0x19
   9A47 F5            [11] 9949 	push	af
   9A48 33            [ 6] 9950 	inc	sp
   9A49 21 0C 9B      [10] 9951 	ld	hl, #___str_42
   9A4C E5            [11] 9952 	push	hl
   9A4D CD 10 63      [17] 9953 	call	_PrintText
   9A50 F1            [10] 9954 	pop	af
                           9955 ;src/main.c:2196: PrintText("MCKLAIN", 30, 145, 0);
   9A51 33            [ 6] 9956 	inc	sp
   9A52 21 91 00      [10] 9957 	ld	hl,#0x0091
   9A55 E3            [19] 9958 	ex	(sp),hl
   9A56 3E 1E         [ 7] 9959 	ld	a, #0x1e
   9A58 F5            [11] 9960 	push	af
   9A59 33            [ 6] 9961 	inc	sp
   9A5A 21 17 9B      [10] 9962 	ld	hl, #___str_43
   9A5D E5            [11] 9963 	push	hl
   9A5E CD 10 63      [17] 9964 	call	_PrintText
   9A61 F1            [10] 9965 	pop	af
                           9966 ;src/main.c:2197: PrintText("BETA@TESTING", 22, 160, 0);
   9A62 33            [ 6] 9967 	inc	sp
   9A63 21 A0 00      [10] 9968 	ld	hl,#0x00a0
   9A66 E3            [19] 9969 	ex	(sp),hl
   9A67 3E 16         [ 7] 9970 	ld	a, #0x16
   9A69 F5            [11] 9971 	push	af
   9A6A 33            [ 6] 9972 	inc	sp
   9A6B 21 1F 9B      [10] 9973 	ld	hl, #___str_44
   9A6E E5            [11] 9974 	push	hl
   9A6F CD 10 63      [17] 9975 	call	_PrintText
   9A72 F1            [10] 9976 	pop	af
                           9977 ;src/main.c:2198: PrintText("BLACKMORES", 25, 170, 0);
   9A73 33            [ 6] 9978 	inc	sp
   9A74 21 AA 00      [10] 9979 	ld	hl,#0x00aa
   9A77 E3            [19] 9980 	ex	(sp),hl
   9A78 3E 19         [ 7] 9981 	ld	a, #0x19
   9A7A F5            [11] 9982 	push	af
   9A7B 33            [ 6] 9983 	inc	sp
   9A7C 21 2C 9B      [10] 9984 	ld	hl, #___str_45
   9A7F E5            [11] 9985 	push	hl
   9A80 CD 10 63      [17] 9986 	call	_PrintText
   9A83 F1            [10] 9987 	pop	af
                           9988 ;src/main.c:2200: PrintText("PLAY@ON@RETRO@2020", 13, 190, 0);
   9A84 33            [ 6] 9989 	inc	sp
   9A85 21 BE 00      [10] 9990 	ld	hl,#0x00be
   9A88 E3            [19] 9991 	ex	(sp),hl
   9A89 3E 0D         [ 7] 9992 	ld	a, #0x0d
   9A8B F5            [11] 9993 	push	af
   9A8C 33            [ 6] 9994 	inc	sp
   9A8D 21 37 9B      [10] 9995 	ld	hl, #___str_46
   9A90 E5            [11] 9996 	push	hl
   9A91 CD 10 63      [17] 9997 	call	_PrintText
   9A94 F1            [10] 9998 	pop	af
   9A95 F1            [10] 9999 	pop	af
   9A96 33            [ 6]10000 	inc	sp
   9A97 C9            [10]10001 	ret
   9A98                   10002 ___str_35:
   9A98 31 40 40 31 40 50 10003 	.ascii "1@@1@PLAYER@GAME"
        4C 41 59 45 52 40
        47 41 4D 45
   9AA8 00                10004 	.db 0x00
   9AA9                   10005 ___str_36:
   9AA9 32 40 40 32 40 50 10006 	.ascii "2@@2@PLAYER@GAME"
        4C 41 59 45 52 40
        47 41 4D 45
   9AB9 00                10007 	.db 0x00
   9ABA                   10008 ___str_37:
   9ABA 33 40 40 52 45 44 10009 	.ascii "3@@REDEFINE@CONTROLS"
        45 46 49 4E 45 40
        43 4F 4E 54 52 4F
        4C 53
   9ACE 00                10010 	.db 0x00
   9ACF                   10011 ___str_38:
   9ACF 34 40 40 54 55 52 10012 	.ascii "4@@TURBO@MODE:@ON"
        42 4F 40 4D 4F 44
        45 3A 40 4F 4E
   9AE0 00                10013 	.db 0x00
   9AE1                   10014 ___str_39:
   9AE1 34 40 40 54 55 52 10015 	.ascii "4@@TURBO@MODE:@OFF"
        42 4F 40 4D 4F 44
        45 3A 40 4F 46 46
   9AF3 00                10016 	.db 0x00
   9AF4                   10017 ___str_40:
   9AF4 43 4F 44 45 40 3D 10018 	.ascii "CODE@=@GFX"
        40 47 46 58
   9AFE 00                10019 	.db 0x00
   9AFF                   10020 ___str_41:
   9AFF 53 41 4C 56 41 4B 10021 	.ascii "SALVAKANTERO"
        41 4E 54 45 52 4F
   9B0B 00                10022 	.db 0x00
   9B0C                   10023 ___str_42:
   9B0C 4D 55 53 49 43 40 10024 	.ascii "MUSIC@=@FX"
        3D 40 46 58
   9B16 00                10025 	.db 0x00
   9B17                   10026 ___str_43:
   9B17 4D 43 4B 4C 41 49 10027 	.ascii "MCKLAIN"
        4E
   9B1E 00                10028 	.db 0x00
   9B1F                   10029 ___str_44:
   9B1F 42 45 54 41 40 54 10030 	.ascii "BETA@TESTING"
        45 53 54 49 4E 47
   9B2B 00                10031 	.db 0x00
   9B2C                   10032 ___str_45:
   9B2C 42 4C 41 43 4B 4D 10033 	.ascii "BLACKMORES"
        4F 52 45 53
   9B36 00                10034 	.db 0x00
   9B37                   10035 ___str_46:
   9B37 50 4C 41 59 40 4F 10036 	.ascii "PLAY@ON@RETRO@2020"
        4E 40 52 45 54 52
        4F 40 32 30 32 30
   9B49 00                10037 	.db 0x00
                          10038 ;src/main.c:2205: void PrintObjInfo() {
                          10039 ;	---------------------------------
                          10040 ; Function PrintObjInfo
                          10041 ; ---------------------------------
   9B4A                   10042 _PrintObjInfo::
                          10043 ;src/main.c:2208: ClearScreen();
   9B4A CD B6 61      [17]10044 	call	_ClearScreen
                          10045 ;src/main.c:2209: PrintText("INGREDIENT@VALUES", 13, 0, 0);
   9B4D 21 00 00      [10]10046 	ld	hl, #0x0000
   9B50 E5            [11]10047 	push	hl
   9B51 3E 0D         [ 7]10048 	ld	a, #0x0d
   9B53 F5            [11]10049 	push	af
   9B54 33            [ 6]10050 	inc	sp
   9B55 21 B0 9C      [10]10051 	ld	hl, #___str_47
   9B58 E5            [11]10052 	push	hl
   9B59 CD 10 63      [17]10053 	call	_PrintText
   9B5C F1            [10]10054 	pop	af
                          10055 ;src/main.c:2211: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 3, 12), cpct_px2byteM0(4, 4), 37, 188);
   9B5D 33            [ 6]10056 	inc	sp
   9B5E 21 04 04      [10]10057 	ld	hl,#0x0404
   9B61 E3            [19]10058 	ex	(sp),hl
   9B62 CD B3 5C      [17]10059 	call	_cpct_px2byteM0
   9B65 26 00         [ 7]10060 	ld	h, #0x00
   9B67 01 25 BC      [10]10061 	ld	bc, #0xbc25
   9B6A C5            [11]10062 	push	bc
   9B6B E5            [11]10063 	push	hl
   9B6C 21 53 E0      [10]10064 	ld	hl, #0xe053
   9B6F E5            [11]10065 	push	hl
   9B70 CD ED 5C      [17]10066 	call	_cpct_drawSolidBox
                          10067 ;src/main.c:2212: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 40, 12), cpct_px2byteM0(4, 4), 35, 188);	
   9B73 21 04 04      [10]10068 	ld	hl, #0x0404
   9B76 E5            [11]10069 	push	hl
   9B77 CD B3 5C      [17]10070 	call	_cpct_px2byteM0
   9B7A 26 00         [ 7]10071 	ld	h, #0x00
   9B7C 01 23 BC      [10]10072 	ld	bc, #0xbc23
   9B7F C5            [11]10073 	push	bc
   9B80 E5            [11]10074 	push	hl
   9B81 21 78 E0      [10]10075 	ld	hl, #0xe078
   9B84 E5            [11]10076 	push	hl
   9B85 CD ED 5C      [17]10077 	call	_cpct_drawSolidBox
                          10078 ;src/main.c:2213: PrintFrame(3,12,72,194);
   9B88 21 48 C2      [10]10079 	ld	hl, #0xc248
   9B8B E5            [11]10080 	push	hl
   9B8C 21 03 0C      [10]10081 	ld	hl, #0x0c03
   9B8F E5            [11]10082 	push	hl
   9B90 CD B3 63      [17]10083 	call	_PrintFrame
   9B93 F1            [10]10084 	pop	af
   9B94 F1            [10]10085 	pop	af
                          10086 ;src/main.c:2215: for (obj=4; obj<16; obj++) {
   9B95 01 04 19      [10]10087 	ld	bc,#0x1904
   9B98                   10088 00102$:
                          10089 ;src/main.c:2216: PrintObject(obj, 7, yPos);
   9B98 C5            [11]10090 	push	bc
   9B99 C5            [11]10091 	push	bc
   9B9A 33            [ 6]10092 	inc	sp
   9B9B 06 07         [ 7]10093 	ld	b, #0x07
   9B9D C5            [11]10094 	push	bc
   9B9E CD BD 6B      [17]10095 	call	_PrintObject
   9BA1 F1            [10]10096 	pop	af
   9BA2 33            [ 6]10097 	inc	sp
   9BA3 C1            [10]10098 	pop	bc
                          10099 ;src/main.c:2217: PrintNumber(obj-3, 2, 62, yPos, 0); PrintText("<", 68, yPos, 0);
   9BA4 59            [ 4]10100 	ld	e, c
   9BA5 16 00         [ 7]10101 	ld	d, #0x00
   9BA7 7B            [ 4]10102 	ld	a, e
   9BA8 C6 FD         [ 7]10103 	add	a, #0xfd
   9BAA 5F            [ 4]10104 	ld	e, a
   9BAB 7A            [ 4]10105 	ld	a, d
   9BAC CE FF         [ 7]10106 	adc	a, #0xff
   9BAE 57            [ 4]10107 	ld	d, a
   9BAF C5            [11]10108 	push	bc
   9BB0 AF            [ 4]10109 	xor	a, a
   9BB1 F5            [11]10110 	push	af
   9BB2 33            [ 6]10111 	inc	sp
   9BB3 C5            [11]10112 	push	bc
   9BB4 33            [ 6]10113 	inc	sp
   9BB5 21 02 3E      [10]10114 	ld	hl, #0x3e02
   9BB8 E5            [11]10115 	push	hl
   9BB9 D5            [11]10116 	push	de
   9BBA CD 41 62      [17]10117 	call	_PrintNumber
   9BBD 21 06 00      [10]10118 	ld	hl, #6
   9BC0 39            [11]10119 	add	hl, sp
   9BC1 F9            [ 6]10120 	ld	sp, hl
   9BC2 C1            [10]10121 	pop	bc
   9BC3 C5            [11]10122 	push	bc
   9BC4 AF            [ 4]10123 	xor	a, a
   9BC5 F5            [11]10124 	push	af
   9BC6 33            [ 6]10125 	inc	sp
   9BC7 C5            [11]10126 	push	bc
   9BC8 33            [ 6]10127 	inc	sp
   9BC9 3E 44         [ 7]10128 	ld	a, #0x44
   9BCB F5            [11]10129 	push	af
   9BCC 33            [ 6]10130 	inc	sp
   9BCD 21 C2 9C      [10]10131 	ld	hl, #___str_48
   9BD0 E5            [11]10132 	push	hl
   9BD1 CD 10 63      [17]10133 	call	_PrintText
   9BD4 F1            [10]10134 	pop	af
   9BD5 F1            [10]10135 	pop	af
   9BD6 33            [ 6]10136 	inc	sp
   9BD7 C1            [10]10137 	pop	bc
                          10138 ;src/main.c:2218: yPos += 14;
   9BD8 78            [ 4]10139 	ld	a, b
   9BD9 C6 0E         [ 7]10140 	add	a, #0x0e
   9BDB 47            [ 4]10141 	ld	b, a
                          10142 ;src/main.c:2215: for (obj=4; obj<16; obj++) {
   9BDC 0C            [ 4]10143 	inc	c
   9BDD 79            [ 4]10144 	ld	a, c
   9BDE D6 10         [ 7]10145 	sub	a, #0x10
   9BE0 38 B6         [12]10146 	jr	C,00102$
                          10147 ;src/main.c:2221: PrintText("TOAD@SNOT", 14, 25, 0);
   9BE2 21 19 00      [10]10148 	ld	hl, #0x0019
   9BE5 E5            [11]10149 	push	hl
   9BE6 3E 0E         [ 7]10150 	ld	a, #0x0e
   9BE8 F5            [11]10151 	push	af
   9BE9 33            [ 6]10152 	inc	sp
   9BEA 21 C4 9C      [10]10153 	ld	hl, #___str_49
   9BED E5            [11]10154 	push	hl
   9BEE CD 10 63      [17]10155 	call	_PrintText
   9BF1 F1            [10]10156 	pop	af
                          10157 ;src/main.c:2222: PrintText("DIAMOND@DUST", 14, 39, 0);
   9BF2 33            [ 6]10158 	inc	sp
   9BF3 21 27 00      [10]10159 	ld	hl,#0x0027
   9BF6 E3            [19]10160 	ex	(sp),hl
   9BF7 3E 0E         [ 7]10161 	ld	a, #0x0e
   9BF9 F5            [11]10162 	push	af
   9BFA 33            [ 6]10163 	inc	sp
   9BFB 21 CE 9C      [10]10164 	ld	hl, #___str_50
   9BFE E5            [11]10165 	push	hl
   9BFF CD 10 63      [17]10166 	call	_PrintText
   9C02 F1            [10]10167 	pop	af
                          10168 ;src/main.c:2223: PrintText("NEWT@EYE", 14, 53, 0);
   9C03 33            [ 6]10169 	inc	sp
   9C04 21 35 00      [10]10170 	ld	hl,#0x0035
   9C07 E3            [19]10171 	ex	(sp),hl
   9C08 3E 0E         [ 7]10172 	ld	a, #0x0e
   9C0A F5            [11]10173 	push	af
   9C0B 33            [ 6]10174 	inc	sp
   9C0C 21 DB 9C      [10]10175 	ld	hl, #___str_51
   9C0F E5            [11]10176 	push	hl
   9C10 CD 10 63      [17]10177 	call	_PrintText
   9C13 F1            [10]10178 	pop	af
                          10179 ;src/main.c:2224: PrintText("MAMMOTH@POOP", 14, 67, 0);
   9C14 33            [ 6]10180 	inc	sp
   9C15 21 43 00      [10]10181 	ld	hl,#0x0043
   9C18 E3            [19]10182 	ex	(sp),hl
   9C19 3E 0E         [ 7]10183 	ld	a, #0x0e
   9C1B F5            [11]10184 	push	af
   9C1C 33            [ 6]10185 	inc	sp
   9C1D 21 E4 9C      [10]10186 	ld	hl, #___str_52
   9C20 E5            [11]10187 	push	hl
   9C21 CD 10 63      [17]10188 	call	_PrintText
   9C24 F1            [10]10189 	pop	af
                          10190 ;src/main.c:2225: PrintText("KRAKEN@INK", 14, 81, 0); 
   9C25 33            [ 6]10191 	inc	sp
   9C26 21 51 00      [10]10192 	ld	hl,#0x0051
   9C29 E3            [19]10193 	ex	(sp),hl
   9C2A 3E 0E         [ 7]10194 	ld	a, #0x0e
   9C2C F5            [11]10195 	push	af
   9C2D 33            [ 6]10196 	inc	sp
   9C2E 21 F1 9C      [10]10197 	ld	hl, #___str_53
   9C31 E5            [11]10198 	push	hl
   9C32 CD 10 63      [17]10199 	call	_PrintText
   9C35 F1            [10]10200 	pop	af
                          10201 ;src/main.c:2226: PrintText("MERMAID@TEAR", 14, 95, 0);
   9C36 33            [ 6]10202 	inc	sp
   9C37 21 5F 00      [10]10203 	ld	hl,#0x005f
   9C3A E3            [19]10204 	ex	(sp),hl
   9C3B 3E 0E         [ 7]10205 	ld	a, #0x0e
   9C3D F5            [11]10206 	push	af
   9C3E 33            [ 6]10207 	inc	sp
   9C3F 21 FC 9C      [10]10208 	ld	hl, #___str_54
   9C42 E5            [11]10209 	push	hl
   9C43 CD 10 63      [17]10210 	call	_PrintText
   9C46 F1            [10]10211 	pop	af
                          10212 ;src/main.c:2227: PrintText("MARTIAN@MUSHROOM", 14, 109, 0);
   9C47 33            [ 6]10213 	inc	sp
   9C48 21 6D 00      [10]10214 	ld	hl,#0x006d
   9C4B E3            [19]10215 	ex	(sp),hl
   9C4C 3E 0E         [ 7]10216 	ld	a, #0x0e
   9C4E F5            [11]10217 	push	af
   9C4F 33            [ 6]10218 	inc	sp
   9C50 21 09 9D      [10]10219 	ld	hl, #___str_55
   9C53 E5            [11]10220 	push	hl
   9C54 CD 10 63      [17]10221 	call	_PrintText
   9C57 F1            [10]10222 	pop	af
                          10223 ;src/main.c:2228: PrintText("DRAGON@BLOOD", 14, 123, 0);
   9C58 33            [ 6]10224 	inc	sp
   9C59 21 7B 00      [10]10225 	ld	hl,#0x007b
   9C5C E3            [19]10226 	ex	(sp),hl
   9C5D 3E 0E         [ 7]10227 	ld	a, #0x0e
   9C5F F5            [11]10228 	push	af
   9C60 33            [ 6]10229 	inc	sp
   9C61 21 1A 9D      [10]10230 	ld	hl, #___str_56
   9C64 E5            [11]10231 	push	hl
   9C65 CD 10 63      [17]10232 	call	_PrintText
   9C68 F1            [10]10233 	pop	af
                          10234 ;src/main.c:2229: PrintText("DODO@EGG", 14, 137, 0); 
   9C69 33            [ 6]10235 	inc	sp
   9C6A 21 89 00      [10]10236 	ld	hl,#0x0089
   9C6D E3            [19]10237 	ex	(sp),hl
   9C6E 3E 0E         [ 7]10238 	ld	a, #0x0e
   9C70 F5            [11]10239 	push	af
   9C71 33            [ 6]10240 	inc	sp
   9C72 21 27 9D      [10]10241 	ld	hl, #___str_57
   9C75 E5            [11]10242 	push	hl
   9C76 CD 10 63      [17]10243 	call	_PrintText
   9C79 F1            [10]10244 	pop	af
                          10245 ;src/main.c:2230: PrintText("UNICORN@BLOOD", 14, 151, 0);
   9C7A 33            [ 6]10246 	inc	sp
   9C7B 21 97 00      [10]10247 	ld	hl,#0x0097
   9C7E E3            [19]10248 	ex	(sp),hl
   9C7F 3E 0E         [ 7]10249 	ld	a, #0x0e
   9C81 F5            [11]10250 	push	af
   9C82 33            [ 6]10251 	inc	sp
   9C83 21 30 9D      [10]10252 	ld	hl, #___str_58
   9C86 E5            [11]10253 	push	hl
   9C87 CD 10 63      [17]10254 	call	_PrintText
   9C8A F1            [10]10255 	pop	af
                          10256 ;src/main.c:2231: PrintText("TROLL@FAT", 14, 165, 0); 
   9C8B 33            [ 6]10257 	inc	sp
   9C8C 21 A5 00      [10]10258 	ld	hl,#0x00a5
   9C8F E3            [19]10259 	ex	(sp),hl
   9C90 3E 0E         [ 7]10260 	ld	a, #0x0e
   9C92 F5            [11]10261 	push	af
   9C93 33            [ 6]10262 	inc	sp
   9C94 21 3E 9D      [10]10263 	ld	hl, #___str_59
   9C97 E5            [11]10264 	push	hl
   9C98 CD 10 63      [17]10265 	call	_PrintText
   9C9B F1            [10]10266 	pop	af
                          10267 ;src/main.c:2232: PrintText("MORDOR@LAVA", 14, 179, 0);
   9C9C 33            [ 6]10268 	inc	sp
   9C9D 21 B3 00      [10]10269 	ld	hl,#0x00b3
   9CA0 E3            [19]10270 	ex	(sp),hl
   9CA1 3E 0E         [ 7]10271 	ld	a, #0x0e
   9CA3 F5            [11]10272 	push	af
   9CA4 33            [ 6]10273 	inc	sp
   9CA5 21 48 9D      [10]10274 	ld	hl, #___str_60
   9CA8 E5            [11]10275 	push	hl
   9CA9 CD 10 63      [17]10276 	call	_PrintText
   9CAC F1            [10]10277 	pop	af
   9CAD F1            [10]10278 	pop	af
   9CAE 33            [ 6]10279 	inc	sp
   9CAF C9            [10]10280 	ret
   9CB0                   10281 ___str_47:
   9CB0 49 4E 47 52 45 44 10282 	.ascii "INGREDIENT@VALUES"
        49 45 4E 54 40 56
        41 4C 55 45 53
   9CC1 00                10283 	.db 0x00
   9CC2                   10284 ___str_48:
   9CC2 3C                10285 	.ascii "<"
   9CC3 00                10286 	.db 0x00
   9CC4                   10287 ___str_49:
   9CC4 54 4F 41 44 40 53 10288 	.ascii "TOAD@SNOT"
        4E 4F 54
   9CCD 00                10289 	.db 0x00
   9CCE                   10290 ___str_50:
   9CCE 44 49 41 4D 4F 4E 10291 	.ascii "DIAMOND@DUST"
        44 40 44 55 53 54
   9CDA 00                10292 	.db 0x00
   9CDB                   10293 ___str_51:
   9CDB 4E 45 57 54 40 45 10294 	.ascii "NEWT@EYE"
        59 45
   9CE3 00                10295 	.db 0x00
   9CE4                   10296 ___str_52:
   9CE4 4D 41 4D 4D 4F 54 10297 	.ascii "MAMMOTH@POOP"
        48 40 50 4F 4F 50
   9CF0 00                10298 	.db 0x00
   9CF1                   10299 ___str_53:
   9CF1 4B 52 41 4B 45 4E 10300 	.ascii "KRAKEN@INK"
        40 49 4E 4B
   9CFB 00                10301 	.db 0x00
   9CFC                   10302 ___str_54:
   9CFC 4D 45 52 4D 41 49 10303 	.ascii "MERMAID@TEAR"
        44 40 54 45 41 52
   9D08 00                10304 	.db 0x00
   9D09                   10305 ___str_55:
   9D09 4D 41 52 54 49 41 10306 	.ascii "MARTIAN@MUSHROOM"
        4E 40 4D 55 53 48
        52 4F 4F 4D
   9D19 00                10307 	.db 0x00
   9D1A                   10308 ___str_56:
   9D1A 44 52 41 47 4F 4E 10309 	.ascii "DRAGON@BLOOD"
        40 42 4C 4F 4F 44
   9D26 00                10310 	.db 0x00
   9D27                   10311 ___str_57:
   9D27 44 4F 44 4F 40 45 10312 	.ascii "DODO@EGG"
        47 47
   9D2F 00                10313 	.db 0x00
   9D30                   10314 ___str_58:
   9D30 55 4E 49 43 4F 52 10315 	.ascii "UNICORN@BLOOD"
        4E 40 42 4C 4F 4F
        44
   9D3D 00                10316 	.db 0x00
   9D3E                   10317 ___str_59:
   9D3E 54 52 4F 4C 4C 40 10318 	.ascii "TROLL@FAT"
        46 41 54
   9D47 00                10319 	.db 0x00
   9D48                   10320 ___str_60:
   9D48 4D 4F 52 44 4F 52 10321 	.ascii "MORDOR@LAVA"
        40 4C 41 56 41
   9D53 00                10322 	.db 0x00
                          10323 ;src/main.c:2235: void StartMenu() {
                          10324 ;	---------------------------------
                          10325 ; Function StartMenu
                          10326 ; ---------------------------------
   9D54                   10327 _StartMenu::
   9D54 DD E5         [15]10328 	push	ix
   9D56 DD 21 00 00   [14]10329 	ld	ix,#0
   9D5A DD 39         [15]10330 	add	ix,sp
   9D5C F5            [11]10331 	push	af
                          10332 ;src/main.c:2236: u8 randSeed = 254;
   9D5D DD 36 FE FE   [19]10333 	ld	-2 (ix), #0xfe
                          10334 ;src/main.c:2237: u8 page = 0;
   9D61 DD 36 FF 00   [19]10335 	ld	-1 (ix), #0x00
                          10336 ;src/main.c:2238: cpct_akp_musicInit(g_menu); // initialize music. Main theme
   9D65 21 07 0E      [10]10337 	ld	hl, #_g_menu
   9D68 E5            [11]10338 	push	hl
   9D69 CD 48 59      [17]10339 	call	_cpct_akp_musicInit
   9D6C F1            [10]10340 	pop	af
                          10341 ;src/main.c:2240: while(1) {
   9D6D                   10342 00122$:
                          10343 ;src/main.c:2243: if (++randSeed == 255) {					
   9D6D DD 34 FE      [23]10344 	inc	-2 (ix)
   9D70 DD 7E FE      [19]10345 	ld	a, -2 (ix)
   9D73 3C            [ 4]10346 	inc	a
   9D74 20 27         [12]10347 	jr	NZ,00109$
                          10348 ;src/main.c:2244: if (page == 0) 		PrintStartMenu();	// page 1; menu
   9D76 DD 7E FF      [19]10349 	ld	a, -1 (ix)
   9D79 B7            [ 4]10350 	or	a, a
   9D7A 20 05         [12]10351 	jr	NZ,00104$
   9D7C CD 69 99      [17]10352 	call	_PrintStartMenu
   9D7F 18 0A         [12]10353 	jr	00105$
   9D81                   10354 00104$:
                          10355 ;src/main.c:2245: else if(page == 4)	PrintObjInfo();		// page 2; ingredients info
   9D81 DD 7E FF      [19]10356 	ld	a, -1 (ix)
   9D84 D6 04         [ 7]10357 	sub	a, #0x04
   9D86 20 03         [12]10358 	jr	NZ,00105$
   9D88 CD 4A 9B      [17]10359 	call	_PrintObjInfo
   9D8B                   10360 00105$:
                          10361 ;src/main.c:2247: randSeed = 0;
   9D8B DD 36 FE 00   [19]10362 	ld	-2 (ix), #0x00
                          10363 ;src/main.c:2248: if (++page == 8) //12
   9D8F DD 34 FF      [23]10364 	inc	-1 (ix)
   9D92 DD 7E FF      [19]10365 	ld	a, -1 (ix)
   9D95 D6 08         [ 7]10366 	sub	a, #0x08
   9D97 20 04         [12]10367 	jr	NZ,00109$
                          10368 ;src/main.c:2249: page = 0;		
   9D99 DD 36 FF 00   [19]10369 	ld	-1 (ix), #0x00
   9D9D                   10370 00109$:
                          10371 ;src/main.c:2252: cpct_scanKeyboard_f();
   9D9D CD CD 51      [17]10372 	call	_cpct_scanKeyboard_f
                          10373 ;src/main.c:2253: if(cpct_isKeyPressed(Key_1)) { // 1 player
   9DA0 21 08 01      [10]10374 	ld	hl, #0x0108
   9DA3 CD C1 51      [17]10375 	call	_cpct_isKeyPressed
   9DA6 7D            [ 4]10376 	ld	a, l
   9DA7 B7            [ 4]10377 	or	a, a
   9DA8 28 08         [12]10378 	jr	Z,00119$
                          10379 ;src/main.c:2254: TwoPlayers = FALSE;	
   9DAA 21 D4 5E      [10]10380 	ld	hl,#_TwoPlayers + 0
   9DAD 36 00         [10]10381 	ld	(hl), #0x00
                          10382 ;src/main.c:2255: break;
   9DAF C3 BA 9E      [10]10383 	jp	00123$
   9DB2                   10384 00119$:
                          10385 ;src/main.c:2257: else if(cpct_isKeyPressed(Key_2)) {	// 2 players
   9DB2 21 08 02      [10]10386 	ld	hl, #0x0208
   9DB5 CD C1 51      [17]10387 	call	_cpct_isKeyPressed
   9DB8 7D            [ 4]10388 	ld	a, l
   9DB9 B7            [ 4]10389 	or	a, a
   9DBA 28 08         [12]10390 	jr	Z,00116$
                          10391 ;src/main.c:2258: TwoPlayers = TRUE;
   9DBC 21 D4 5E      [10]10392 	ld	hl,#_TwoPlayers + 0
   9DBF 36 01         [10]10393 	ld	(hl), #0x01
                          10394 ;src/main.c:2259: break;
   9DC1 C3 BA 9E      [10]10395 	jp	00123$
   9DC4                   10396 00116$:
                          10397 ;src/main.c:2261: else if(cpct_isKeyPressed(Key_3)){ // redefine keys
   9DC4 21 07 02      [10]10398 	ld	hl, #0x0207
   9DC7 CD C1 51      [17]10399 	call	_cpct_isKeyPressed
   9DCA 7D            [ 4]10400 	ld	a, l
   9DCB B7            [ 4]10401 	or	a, a
   9DCC CA 8D 9E      [10]10402 	jp	Z, 00113$
                          10403 ;src/main.c:2262: Wait4Key(Key_3);
   9DCF 21 07 02      [10]10404 	ld	hl, #0x0207
   9DD2 E5            [11]10405 	push	hl
   9DD3 CD 6F 68      [17]10406 	call	_Wait4Key
   9DD6 F1            [10]10407 	pop	af
                          10408 ;src/main.c:2263: randSeed = 0; page = 1;
   9DD7 DD 36 FE 00   [19]10409 	ld	-2 (ix), #0x00
   9DDB DD 36 FF 01   [19]10410 	ld	-1 (ix), #0x01
                          10411 ;src/main.c:2264: PrintStartMenu();
   9DDF CD 69 99      [17]10412 	call	_PrintStartMenu
                          10413 ;src/main.c:2266: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 22, 110), cpct_px2byteM0(1, 1), 45, 70);
   9DE2 21 01 01      [10]10414 	ld	hl, #0x0101
   9DE5 E5            [11]10415 	push	hl
   9DE6 CD B3 5C      [17]10416 	call	_cpct_px2byteM0
   9DE9 26 00         [ 7]10417 	ld	h, #0x00
   9DEB 01 2D 46      [10]10418 	ld	bc, #0x462d
   9DEE C5            [11]10419 	push	bc
   9DEF E5            [11]10420 	push	hl
   9DF0 21 26 F4      [10]10421 	ld	hl, #0xf426
   9DF3 E5            [11]10422 	push	hl
   9DF4 CD ED 5C      [17]10423 	call	_cpct_drawSolidBox
                          10424 ;src/main.c:2269: ctlUp[0] = 		RedefineKey("@P1@UP");
   9DF7 21 D0 9E      [10]10425 	ld	hl, #___str_61
   9DFA E5            [11]10426 	push	hl
   9DFB CD 8C 68      [17]10427 	call	_RedefineKey
   9DFE F1            [10]10428 	pop	af
   9DFF 4D            [ 4]10429 	ld	c, l
   9E00 44            [ 4]10430 	ld	b, h
   9E01 ED 43 F4 5E   [20]10431 	ld	(_ctlUp), bc
                          10432 ;src/main.c:2270: ctlDown[0] = 	RedefineKey("P1@DOWN");
   9E05 21 D7 9E      [10]10433 	ld	hl, #___str_62
   9E08 E5            [11]10434 	push	hl
   9E09 CD 8C 68      [17]10435 	call	_RedefineKey
   9E0C F1            [10]10436 	pop	af
   9E0D 4D            [ 4]10437 	ld	c, l
   9E0E 44            [ 4]10438 	ld	b, h
   9E0F ED 43 F8 5E   [20]10439 	ld	(_ctlDown), bc
                          10440 ;src/main.c:2271: ctlLeft[0] = 	RedefineKey("P1@LEFT");
   9E13 21 DF 9E      [10]10441 	ld	hl, #___str_63
   9E16 E5            [11]10442 	push	hl
   9E17 CD 8C 68      [17]10443 	call	_RedefineKey
   9E1A F1            [10]10444 	pop	af
   9E1B 4D            [ 4]10445 	ld	c, l
   9E1C 44            [ 4]10446 	ld	b, h
   9E1D ED 43 FC 5E   [20]10447 	ld	(_ctlLeft), bc
                          10448 ;src/main.c:2272: ctlRight[0] = 	RedefineKey("P1@RIGHT");
   9E21 21 E7 9E      [10]10449 	ld	hl, #___str_64
   9E24 E5            [11]10450 	push	hl
   9E25 CD 8C 68      [17]10451 	call	_RedefineKey
   9E28 F1            [10]10452 	pop	af
   9E29 4D            [ 4]10453 	ld	c, l
   9E2A 44            [ 4]10454 	ld	b, h
   9E2B ED 43 00 5F   [20]10455 	ld	(_ctlRight), bc
                          10456 ;src/main.c:2274: ctlUp[1] = 		RedefineKey("@P2@UP@@");
   9E2F 21 F0 9E      [10]10457 	ld	hl, #___str_65
   9E32 E5            [11]10458 	push	hl
   9E33 CD 8C 68      [17]10459 	call	_RedefineKey
   9E36 F1            [10]10460 	pop	af
   9E37 4D            [ 4]10461 	ld	c, l
   9E38 44            [ 4]10462 	ld	b, h
   9E39 ED 43 F6 5E   [20]10463 	ld	((_ctlUp + 0x0002)), bc
                          10464 ;src/main.c:2275: ctlDown[1] = 	RedefineKey("P2@DOWN");
   9E3D 21 F9 9E      [10]10465 	ld	hl, #___str_66
   9E40 E5            [11]10466 	push	hl
   9E41 CD 8C 68      [17]10467 	call	_RedefineKey
   9E44 F1            [10]10468 	pop	af
   9E45 4D            [ 4]10469 	ld	c, l
   9E46 44            [ 4]10470 	ld	b, h
   9E47 ED 43 FA 5E   [20]10471 	ld	((_ctlDown + 0x0002)), bc
                          10472 ;src/main.c:2276: ctlLeft[1] = 	RedefineKey("P2@LEFT");
   9E4B 21 01 9F      [10]10473 	ld	hl, #___str_67
   9E4E E5            [11]10474 	push	hl
   9E4F CD 8C 68      [17]10475 	call	_RedefineKey
   9E52 F1            [10]10476 	pop	af
   9E53 4D            [ 4]10477 	ld	c, l
   9E54 44            [ 4]10478 	ld	b, h
   9E55 ED 43 FE 5E   [20]10479 	ld	((_ctlLeft + 0x0002)), bc
                          10480 ;src/main.c:2277: ctlRight[1] = 	RedefineKey("P2@RIGHT");	
   9E59 21 09 9F      [10]10481 	ld	hl, #___str_68
   9E5C E5            [11]10482 	push	hl
   9E5D CD 8C 68      [17]10483 	call	_RedefineKey
   9E60 F1            [10]10484 	pop	af
   9E61 4D            [ 4]10485 	ld	c, l
   9E62 44            [ 4]10486 	ld	b, h
   9E63 ED 43 02 5F   [20]10487 	ld	((_ctlRight + 0x0002)), bc
                          10488 ;src/main.c:2279: ctlAbort = 		RedefineKey("@ABORT@@");
   9E67 21 12 9F      [10]10489 	ld	hl, #___str_69
   9E6A E5            [11]10490 	push	hl
   9E6B CD 8C 68      [17]10491 	call	_RedefineKey
   9E6E F1            [10]10492 	pop	af
   9E6F 22 04 5F      [16]10493 	ld	(_ctlAbort), hl
                          10494 ;src/main.c:2280: ctlMusic = 		RedefineKey("@MUSIC");
   9E72 21 1B 9F      [10]10495 	ld	hl, #___str_70
   9E75 E5            [11]10496 	push	hl
   9E76 CD 8C 68      [17]10497 	call	_RedefineKey
   9E79 F1            [10]10498 	pop	af
   9E7A 22 06 5F      [16]10499 	ld	(_ctlMusic), hl
                          10500 ;src/main.c:2281: ctlPause =		RedefineKey("@PAUSE");		
   9E7D 21 22 9F      [10]10501 	ld	hl, #___str_71
   9E80 E5            [11]10502 	push	hl
   9E81 CD 8C 68      [17]10503 	call	_RedefineKey
   9E84 F1            [10]10504 	pop	af
   9E85 22 08 5F      [16]10505 	ld	(_ctlPause), hl
                          10506 ;src/main.c:2282: PrintStartMenu();
   9E88 CD 69 99      [17]10507 	call	_PrintStartMenu
   9E8B 18 24         [12]10508 	jr	00120$
   9E8D                   10509 00113$:
                          10510 ;src/main.c:2284: else if(cpct_isKeyPressed(Key_4)) {	// turbo mode
   9E8D 21 07 01      [10]10511 	ld	hl, #0x0107
   9E90 CD C1 51      [17]10512 	call	_cpct_isKeyPressed
   9E93 7D            [ 4]10513 	ld	a, l
   9E94 B7            [ 4]10514 	or	a, a
   9E95 28 1A         [12]10515 	jr	Z,00120$
                          10516 ;src/main.c:2285: turboMode = !turboMode;
   9E97 FD 21 EF 5E   [14]10517 	ld	iy, #_turboMode
   9E9B FD 7E 00      [19]10518 	ld	a, 0 (iy)
   9E9E D6 01         [ 7]10519 	sub	a,#0x01
   9EA0 3E 00         [ 7]10520 	ld	a, #0x00
   9EA2 17            [ 4]10521 	rla
   9EA3 FD 77 00      [19]10522 	ld	0 (iy), a
                          10523 ;src/main.c:2286: randSeed = 0; page = 1;
   9EA6 DD 36 FE 00   [19]10524 	ld	-2 (ix), #0x00
   9EAA DD 36 FF 01   [19]10525 	ld	-1 (ix), #0x01
                          10526 ;src/main.c:2287: PrintStartMenu();
   9EAE CD 69 99      [17]10527 	call	_PrintStartMenu
   9EB1                   10528 00120$:
                          10529 ;src/main.c:2289: Pause(3);
   9EB1 21 03 00      [10]10530 	ld	hl, #0x0003
   9EB4 CD 81 61      [17]10531 	call	_Pause
   9EB7 C3 6D 9D      [10]10532 	jp	00122$
   9EBA                   10533 00123$:
                          10534 ;src/main.c:2291: cpct_setSeed_lcg_u8(randSeed); // set the seed
   9EBA DD 6E FE      [19]10535 	ld	l, -2 (ix)
   9EBD CD A4 5B      [17]10536 	call	_cpct_setSeed_lcg_u8
                          10537 ;src/main.c:2292: cpct_akp_musicInit(g_fx); // mute the music
   9EC0 21 C4 05      [10]10538 	ld	hl, #_g_fx
   9EC3 E5            [11]10539 	push	hl
   9EC4 CD 48 59      [17]10540 	call	_cpct_akp_musicInit
   9EC7 F1            [10]10541 	pop	af
                          10542 ;src/main.c:2293: ClearScreen();
   9EC8 CD B6 61      [17]10543 	call	_ClearScreen
   9ECB DD F9         [10]10544 	ld	sp, ix
   9ECD DD E1         [14]10545 	pop	ix
   9ECF C9            [10]10546 	ret
   9ED0                   10547 ___str_61:
   9ED0 40 50 31 40 55 50 10548 	.ascii "@P1@UP"
   9ED6 00                10549 	.db 0x00
   9ED7                   10550 ___str_62:
   9ED7 50 31 40 44 4F 57 10551 	.ascii "P1@DOWN"
        4E
   9EDE 00                10552 	.db 0x00
   9EDF                   10553 ___str_63:
   9EDF 50 31 40 4C 45 46 10554 	.ascii "P1@LEFT"
        54
   9EE6 00                10555 	.db 0x00
   9EE7                   10556 ___str_64:
   9EE7 50 31 40 52 49 47 10557 	.ascii "P1@RIGHT"
        48 54
   9EEF 00                10558 	.db 0x00
   9EF0                   10559 ___str_65:
   9EF0 40 50 32 40 55 50 10560 	.ascii "@P2@UP@@"
        40 40
   9EF8 00                10561 	.db 0x00
   9EF9                   10562 ___str_66:
   9EF9 50 32 40 44 4F 57 10563 	.ascii "P2@DOWN"
        4E
   9F00 00                10564 	.db 0x00
   9F01                   10565 ___str_67:
   9F01 50 32 40 4C 45 46 10566 	.ascii "P2@LEFT"
        54
   9F08 00                10567 	.db 0x00
   9F09                   10568 ___str_68:
   9F09 50 32 40 52 49 47 10569 	.ascii "P2@RIGHT"
        48 54
   9F11 00                10570 	.db 0x00
   9F12                   10571 ___str_69:
   9F12 40 41 42 4F 52 54 10572 	.ascii "@ABORT@@"
        40 40
   9F1A 00                10573 	.db 0x00
   9F1B                   10574 ___str_70:
   9F1B 40 4D 55 53 49 43 10575 	.ascii "@MUSIC"
   9F21 00                10576 	.db 0x00
   9F22                   10577 ___str_71:
   9F22 40 50 41 55 53 45 10578 	.ascii "@PAUSE"
   9F28 00                10579 	.db 0x00
                          10580 ;src/main.c:2301: void InitValues() {	
                          10581 ;	---------------------------------
                          10582 ; Function InitValues
                          10583 ; ---------------------------------
   9F29                   10584 _InitValues::
                          10585 ;src/main.c:2304: ctlUp[0] = Key_Z;
   9F29 21 08 80      [10]10586 	ld	hl, #0x8008
   9F2C 22 F4 5E      [16]10587 	ld	(_ctlUp), hl
                          10588 ;src/main.c:2305: ctlDown[0] = Key_S;
   9F2F 21 07 10      [10]10589 	ld	hl, #0x1007
   9F32 22 F8 5E      [16]10590 	ld	(_ctlDown), hl
                          10591 ;src/main.c:2306: ctlLeft[0] = Key_Q;
   9F35 21 08 08      [10]10592 	ld	hl, #0x0808
   9F38 22 FC 5E      [16]10593 	ld	(_ctlLeft), hl
                          10594 ;src/main.c:2307: ctlRight[0] = Key_D;
   9F3B 21 07 20      [10]10595 	ld	hl, #0x2007
   9F3E 22 00 5F      [16]10596 	ld	(_ctlRight), hl
                          10597 ;src/main.c:2309: ctlUp[1] = Key_F5;
   9F41 21 01 10      [10]10598 	ld	hl, #0x1001
   9F44 22 F6 5E      [16]10599 	ld	((_ctlUp + 0x0002)), hl
                          10600 ;src/main.c:2310: ctlDown[1] = Key_F2;
   9F47 26 40         [ 7]10601 	ld	h, #0x40
   9F49 22 FA 5E      [16]10602 	ld	((_ctlDown + 0x0002)), hl
                          10603 ;src/main.c:2311: ctlLeft[1] = Key_F1;
   9F4C 26 20         [ 7]10604 	ld	h, #0x20
   9F4E 22 FE 5E      [16]10605 	ld	((_ctlLeft + 0x0002)), hl
                          10606 ;src/main.c:2312: ctlRight[1] = Key_F3;
   9F51 2E 00         [ 7]10607 	ld	l, #0x00
   9F53 22 02 5F      [16]10608 	ld	((_ctlRight + 0x0002)), hl
                          10609 ;src/main.c:2314: ctlAbort = Key_X;
   9F56 21 07 80      [10]10610 	ld	hl, #0x8007
   9F59 22 04 5F      [16]10611 	ld	(_ctlAbort), hl
                          10612 ;src/main.c:2315: ctlMusic = Key_M;
   9F5C 21 04 40      [10]10613 	ld	hl, #0x4004
   9F5F 22 06 5F      [16]10614 	ld	(_ctlMusic), hl
                          10615 ;src/main.c:2316: ctlPause = Key_H;	
   9F62 21 05 10      [10]10616 	ld	hl, #0x1005
   9F65 22 08 5F      [16]10617 	ld	(_ctlPause), hl
                          10618 ;src/main.c:2318: turboMode = FALSE;
   9F68 21 EF 5E      [10]10619 	ld	hl,#_turboMode + 0
   9F6B 36 00         [10]10620 	ld	(hl), #0x00
                          10621 ;src/main.c:2319: nTip = 0;
   9F6D 21 F0 5E      [10]10622 	ld	hl,#_nTip + 0
   9F70 36 00         [10]10623 	ld	(hl), #0x00
   9F72 C9            [10]10624 	ret
                          10625 ;src/main.c:2324: void ResetData() {
                          10626 ;	---------------------------------
                          10627 ; Function ResetData
                          10628 ; ---------------------------------
   9F73                   10629 _ResetData::
                          10630 ;src/main.c:2325: ctMainLoop = 0;
   9F73 21 00 00      [10]10631 	ld	hl, #0x0000
   9F76 22 F2 5E      [16]10632 	ld	(_ctMainLoop), hl
                          10633 ;src/main.c:2326: nObj[0] = -1;
   9F79 21 78 5F      [10]10634 	ld	hl, #_nObj+0
   9F7C 36 FF         [10]10635 	ld	(hl), #0xff
                          10636 ;src/main.c:2327: nObj[1] = -1;
   9F7E 23            [ 6]10637 	inc	hl
   9F7F 36 FF         [10]10638 	ld	(hl), #0xff
                          10639 ;src/main.c:2328: sht.active = FALSE;
   9F81 21 77 5F      [10]10640 	ld	hl, #(_sht + 0x0004)
   9F84 36 00         [10]10641 	ld	(hl), #0x00
                          10642 ;src/main.c:2329: ctWizardAnim = 0;
   9F86 21 F1 5E      [10]10643 	ld	hl,#_ctWizardAnim + 0
   9F89 36 00         [10]10644 	ld	(hl), #0x00
                          10645 ;src/main.c:2332: spr[0].dir = D_right; 
   9F8B 21 11 5F      [10]10646 	ld	hl, #(_spr + 0x0007)
   9F8E 36 03         [10]10647 	ld	(hl), #0x03
                          10648 ;src/main.c:2333: spr[0].status = S_stopped;
   9F90 21 10 5F      [10]10649 	ld	hl, #(_spr + 0x0006)
   9F93 36 04         [10]10650 	ld	(hl), #0x04
                          10651 ;src/main.c:2334: spr[0].print_minV = TRUE; // the first time must be printed on screen
   9F95 21 17 5F      [10]10652 	ld	hl, #(_spr + 0x000d)
   9F98 36 01         [10]10653 	ld	(hl), #0x01
                          10654 ;src/main.c:2335: spr[0].power_maxV = 0;
   9F9A 21 18 5F      [10]10655 	ld	hl, #(_spr + 0x000e)
   9F9D 36 00         [10]10656 	ld	(hl), #0x00
                          10657 ;src/main.c:2336: ctInactivity[0] = 0;
   9F9F 01 ED 5E      [10]10658 	ld	bc, #_ctInactivity+0
   9FA2 AF            [ 4]10659 	xor	a, a
   9FA3 02            [ 7]10660 	ld	(bc), a
                          10661 ;src/main.c:2338: spr[1].dir = D_left; 
   9FA4 21 20 5F      [10]10662 	ld	hl, #(_spr + 0x0016)
   9FA7 36 02         [10]10663 	ld	(hl), #0x02
                          10664 ;src/main.c:2339: spr[1].status = S_stopped;	
   9FA9 21 1F 5F      [10]10665 	ld	hl, #(_spr + 0x0015)
   9FAC 36 04         [10]10666 	ld	(hl), #0x04
                          10667 ;src/main.c:2340: spr[1].print_minV = TRUE; // the first time must be printed on screen
   9FAE 21 26 5F      [10]10668 	ld	hl, #(_spr + 0x001c)
   9FB1 36 01         [10]10669 	ld	(hl), #0x01
                          10670 ;src/main.c:2341: spr[1].power_maxV = 0;
   9FB3 21 27 5F      [10]10671 	ld	hl, #(_spr + 0x001d)
   9FB6 36 00         [10]10672 	ld	(hl), #0x00
                          10673 ;src/main.c:2342: ctInactivity[1] = 0;
   9FB8 03            [ 6]10674 	inc	bc
   9FB9 AF            [ 4]10675 	xor	a, a
   9FBA 02            [ 7]10676 	ld	(bc), a
                          10677 ;src/main.c:2344: SetEnemies();
   9FBB CD 24 8E      [17]10678 	call	_SetEnemies
                          10679 ;src/main.c:2345: PrintMap();
   9FBE CD 2B 62      [17]10680 	call	_PrintMap
                          10681 ;src/main.c:2346: RefreshScoreboard();
   9FC1 CD 4D 6A      [17]10682 	call	_RefreshScoreboard
                          10683 ;src/main.c:2347: DeleteObjectInStore();
   9FC4 CD F1 6C      [17]10684 	call	_DeleteObjectInStore
                          10685 ;src/main.c:2350: if (nMap != lastNMap) {
   9FC7 3A D0 5E      [13]10686 	ld	a,(#_nMap + 0)
   9FCA FD 21 D1 5E   [14]10687 	ld	iy, #_lastNMap
   9FCE FD 96 00      [19]10688 	sub	a, 0 (iy)
   9FD1 C8            [11]10689 	ret	Z
                          10690 ;src/main.c:2351: if (!TwoPlayers) {
   9FD2 3A D4 5E      [13]10691 	ld	a,(#_TwoPlayers + 0)
   9FD5 B7            [ 4]10692 	or	a, a
   9FD6 20 1C         [12]10693 	jr	NZ,00102$
                          10694 ;src/main.c:2352: PrintKey();
   9FD8 CD 28 74      [17]10695 	call	_PrintKey
                          10696 ;src/main.c:2354: playerKey[0] = 0;
   9FDB 21 E4 5E      [10]10697 	ld	hl, #_playerKey
   9FDE 36 00         [10]10698 	ld	(hl), #0x00
                          10699 ;src/main.c:2355: playerKey[1] = 0;
   9FE0 21 E5 5E      [10]10700 	ld	hl, #(_playerKey + 0x0001)
   9FE3 36 00         [10]10701 	ld	(hl), #0x00
                          10702 ;src/main.c:2356: playerKey[2] = 0;
   9FE5 21 E6 5E      [10]10703 	ld	hl, #(_playerKey + 0x0002)
   9FE8 36 00         [10]10704 	ld	(hl), #0x00
                          10705 ;src/main.c:2357: playerKey[3] = 0;
   9FEA 21 E7 5E      [10]10706 	ld	hl, #(_playerKey + 0x0003)
   9FED 36 00         [10]10707 	ld	(hl), #0x00
                          10708 ;src/main.c:2358: playerKey[4] = 0;
   9FEF 21 E8 5E      [10]10709 	ld	hl, #(_playerKey + 0x0004)
   9FF2 36 00         [10]10710 	ld	(hl), #0x00
   9FF4                   10711 00102$:
                          10712 ;src/main.c:2360: PrintLevelInfo();	
   9FF4 CD 2A 66      [17]10713 	call	_PrintLevelInfo
                          10714 ;src/main.c:2361: PrintMap();	
   9FF7 CD 2B 62      [17]10715 	call	_PrintMap
                          10716 ;src/main.c:2362: lastNMap = nMap;
   9FFA 3A D0 5E      [13]10717 	ld	a,(#_nMap + 0)
   9FFD 32 D1 5E      [13]10718 	ld	(#_lastNMap + 0),a
   A000 C9            [10]10719 	ret
                          10720 ;src/main.c:2368: void InitGame() {
                          10721 ;	---------------------------------
                          10722 ; Function InitGame
                          10723 ; ---------------------------------
   A001                   10724 _InitGame::
                          10725 ;src/main.c:2369: StartMenu(); // run the start menu
   A001 CD 54 9D      [17]10726 	call	_StartMenu
                          10727 ;src/main.c:2370: music = TRUE;
   A004 21 EB 5E      [10]10728 	ld	hl,#_music + 0
   A007 36 01         [10]10729 	ld	(hl), #0x01
                          10730 ;src/main.c:2371: nMap = 0; // initial map number
   A009 21 D0 5E      [10]10731 	ld	hl,#_nMap + 0
   A00C 36 00         [10]10732 	ld	(hl), #0x00
                          10733 ;src/main.c:2372: lastNMap = 255;
   A00E 21 D1 5E      [10]10734 	ld	hl,#_lastNMap + 0
   A011 36 FF         [10]10735 	ld	(hl), #0xff
                          10736 ;src/main.c:2375: spr[0].num = 0; // sprite number
   A013 21 0A 5F      [10]10737 	ld	hl, #_spr
   A016 36 00         [10]10738 	ld	(hl), #0x00
                          10739 ;src/main.c:2376: spr[0].ident = SORCERER1; // identity
   A018 21 0B 5F      [10]10740 	ld	hl, #(_spr + 0x0001)
   A01B 36 00         [10]10741 	ld	(hl), #0x00
                          10742 ;src/main.c:2377: spr[0].lives_speed = 3; // lives
   A01D 21 15 5F      [10]10743 	ld	hl, #(_spr + 0x000b)
   A020 36 03         [10]10744 	ld	(hl), #0x03
                          10745 ;src/main.c:2378: score[0] = 0; // score
   A022 21 00 00      [10]10746 	ld	hl, #0x0000
   A025 22 D5 5E      [16]10747 	ld	(_score), hl
                          10748 ;src/main.c:2379: ResetObjData(0);
   A028 2E 00         [ 7]10749 	ld	l, #0x00
   A02A CD 66 6B      [17]10750 	call	_ResetObjData
                          10751 ;src/main.c:2382: spr[1].num = 1; // sprite number
   A02D 21 19 5F      [10]10752 	ld	hl, #(_spr + 0x000f)
   A030 36 01         [10]10753 	ld	(hl), #0x01
                          10754 ;src/main.c:2383: spr[1].ident = SORCERER2; // identity
   A032 21 1A 5F      [10]10755 	ld	hl, #(_spr + 0x0010)
   A035 36 01         [10]10756 	ld	(hl), #0x01
                          10757 ;src/main.c:2384: spr[1].lives_speed = 3; // lives
   A037 21 24 5F      [10]10758 	ld	hl, #(_spr + 0x001a)
   A03A 36 03         [10]10759 	ld	(hl), #0x03
                          10760 ;src/main.c:2385: score[1] = 0; // score
   A03C 21 00 00      [10]10761 	ld	hl, #0x0000
   A03F 22 D7 5E      [16]10762 	ld	((_score + 0x0002)), hl
                          10763 ;src/main.c:2386: ResetObjData(1);
   A042 2E 01         [ 7]10764 	ld	l, #0x01
   A044 CD 66 6B      [17]10765 	call	_ResetObjData
                          10766 ;src/main.c:2389: spr[6].num = 6; // sprite number
   A047 21 64 5F      [10]10767 	ld	hl, #(_spr + 0x005a)
   A04A 36 06         [10]10768 	ld	(hl), #0x06
                          10769 ;src/main.c:2390: spr[6].ident = WIZARD; // identity
   A04C 21 65 5F      [10]10770 	ld	hl, #(_spr + 0x005b)
   A04F 36 07         [10]10771 	ld	(hl), #0x07
                          10772 ;src/main.c:2392: InitScoreboard();		
   A051 CD E2 68      [17]10773 	call	_InitScoreboard
                          10774 ;src/main.c:2393: ResetData();
   A054 C3 73 9F      [10]10775 	jp  _ResetData
                          10776 ;src/main.c:2398: void GameOver(u8 player) {
                          10777 ;	---------------------------------
                          10778 ; Function GameOver
                          10779 ; ---------------------------------
   A057                   10780 _GameOver::
   A057 DD E5         [15]10781 	push	ix
   A059 DD 21 00 00   [14]10782 	ld	ix,#0
   A05D DD 39         [15]10783 	add	ix,sp
   A05F F5            [11]10784 	push	af
                          10785 ;src/main.c:2400: if (spr[player].lives_speed > 1 && player != 2) {
   A060 01 0A 5F      [10]10786 	ld	bc, #_spr+0
   A063 DD 5E 04      [19]10787 	ld	e,4 (ix)
   A066 16 00         [ 7]10788 	ld	d,#0x00
   A068 6B            [ 4]10789 	ld	l, e
   A069 62            [ 4]10790 	ld	h, d
   A06A 29            [11]10791 	add	hl, hl
   A06B 19            [11]10792 	add	hl, de
   A06C 29            [11]10793 	add	hl, hl
   A06D 19            [11]10794 	add	hl, de
   A06E 29            [11]10795 	add	hl, hl
   A06F 19            [11]10796 	add	hl, de
   A070 09            [11]10797 	add	hl,bc
   A071 01 0B 00      [10]10798 	ld	bc,#0x000b
   A074 09            [11]10799 	add	hl,bc
   A075 E3            [19]10800 	ex	(sp), hl
   A076 E1            [10]10801 	pop	hl
   A077 E5            [11]10802 	push	hl
   A078 4E            [ 7]10803 	ld	c, (hl)
   A079 3E 01         [ 7]10804 	ld	a, #0x01
   A07B 91            [ 4]10805 	sub	a, c
   A07C 30 11         [12]10806 	jr	NC,00113$
   A07E DD 7E 04      [19]10807 	ld	a, 4 (ix)
   A081 D6 02         [ 7]10808 	sub	a, #0x02
   A083 28 0A         [12]10809 	jr	Z,00113$
                          10810 ;src/main.c:2401: spr[player].lives_speed--;
   A085 0D            [ 4]10811 	dec	c
   A086 E1            [10]10812 	pop	hl
   A087 E5            [11]10813 	push	hl
   A088 71            [ 7]10814 	ld	(hl), c
                          10815 ;src/main.c:2402: ResetData();
   A089 CD 73 9F      [17]10816 	call	_ResetData
   A08C C3 68 A1      [10]10817 	jp	00116$
   A08F                   10818 00113$:
                          10819 ;src/main.c:2405: cpct_akp_musicInit(g_end); // game over music
   A08F 21 2C 03      [10]10820 	ld	hl, #_g_end
   A092 E5            [11]10821 	push	hl
   A093 CD 48 59      [17]10822 	call	_cpct_akp_musicInit
   A096 F1            [10]10823 	pop	af
                          10824 ;src/main.c:2407: spr[player].lives_speed = 0;
   A097 E1            [10]10825 	pop	hl
   A098 E5            [11]10826 	push	hl
   A099 36 00         [10]10827 	ld	(hl), #0x00
                          10828 ;src/main.c:2408: RefreshScoreboard();
   A09B CD 4D 6A      [17]10829 	call	_RefreshScoreboard
                          10830 ;src/main.c:2410: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START,  6, 80), cpct_px2byteM0(4, 4), 34, 60);
   A09E 21 04 04      [10]10831 	ld	hl, #0x0404
   A0A1 E5            [11]10832 	push	hl
   A0A2 CD B3 5C      [17]10833 	call	_cpct_px2byteM0
   A0A5 26 00         [ 7]10834 	ld	h, #0x00
   A0A7 01 22 3C      [10]10835 	ld	bc, #0x3c22
   A0AA C5            [11]10836 	push	bc
   A0AB E5            [11]10837 	push	hl
   A0AC 21 26 C3      [10]10838 	ld	hl, #0xc326
   A0AF E5            [11]10839 	push	hl
   A0B0 CD ED 5C      [17]10840 	call	_cpct_drawSolidBox
                          10841 ;src/main.c:2411: cpct_drawSolidBox(cpctm_screenPtr(CPCT_VMEM_START, 40, 80), cpct_px2byteM0(4, 4), 34, 60);
   A0B3 21 04 04      [10]10842 	ld	hl, #0x0404
   A0B6 E5            [11]10843 	push	hl
   A0B7 CD B3 5C      [17]10844 	call	_cpct_px2byteM0
   A0BA 26 00         [ 7]10845 	ld	h, #0x00
   A0BC 01 22 3C      [10]10846 	ld	bc, #0x3c22
   A0BF C5            [11]10847 	push	bc
   A0C0 E5            [11]10848 	push	hl
   A0C1 21 48 C3      [10]10849 	ld	hl, #0xc348
   A0C4 E5            [11]10850 	push	hl
   A0C5 CD ED 5C      [17]10851 	call	_cpct_drawSolidBox
                          10852 ;src/main.c:2412: PrintFrame(6,80,71,134);
   A0C8 21 47 86      [10]10853 	ld	hl, #0x8647
   A0CB E5            [11]10854 	push	hl
   A0CC 21 06 50      [10]10855 	ld	hl, #0x5006
   A0CF E5            [11]10856 	push	hl
   A0D0 CD B3 63      [17]10857 	call	_PrintFrame
   A0D3 F1            [10]10858 	pop	af
   A0D4 F1            [10]10859 	pop	af
                          10860 ;src/main.c:2413: if (TwoPlayers) {
   A0D5 3A D4 5E      [13]10861 	ld	a,(#_TwoPlayers + 0)
   A0D8 B7            [ 4]10862 	or	a, a
   A0D9 28 6B         [12]10863 	jr	Z,00107$
                          10864 ;src/main.c:2414: PrintText("G@A@M@E@@O@V@E@R", 16, 91, 0);
   A0DB 21 5B 00      [10]10865 	ld	hl, #0x005b
   A0DE E5            [11]10866 	push	hl
   A0DF 3E 10         [ 7]10867 	ld	a, #0x10
   A0E1 F5            [11]10868 	push	af
   A0E2 33            [ 6]10869 	inc	sp
   A0E3 21 6D A1      [10]10870 	ld	hl, #___str_72
   A0E6 E5            [11]10871 	push	hl
   A0E7 CD 10 63      [17]10872 	call	_PrintText
   A0EA F1            [10]10873 	pop	af
   A0EB F1            [10]10874 	pop	af
   A0EC 33            [ 6]10875 	inc	sp
                          10876 ;src/main.c:2415: if (player == 0) PrintText("PLAYER@2@WINS>", 19, 106, 0);
   A0ED DD 7E 04      [19]10877 	ld	a, 4 (ix)
   A0F0 B7            [ 4]10878 	or	a, a
   A0F1 20 14         [12]10879 	jr	NZ,00104$
   A0F3 21 6A 00      [10]10880 	ld	hl, #0x006a
   A0F6 E5            [11]10881 	push	hl
   A0F7 3E 13         [ 7]10882 	ld	a, #0x13
   A0F9 F5            [11]10883 	push	af
   A0FA 33            [ 6]10884 	inc	sp
   A0FB 21 7E A1      [10]10885 	ld	hl, #___str_73
   A0FE E5            [11]10886 	push	hl
   A0FF CD 10 63      [17]10887 	call	_PrintText
   A102 F1            [10]10888 	pop	af
   A103 F1            [10]10889 	pop	af
   A104 33            [ 6]10890 	inc	sp
   A105 18 18         [12]10891 	jr	00105$
   A107                   10892 00104$:
                          10893 ;src/main.c:2416: else if (player == 1) PrintText("PLAYER@1@WINS>", 19, 106, 0);
   A107 DD 7E 04      [19]10894 	ld	a, 4 (ix)
   A10A 3D            [ 4]10895 	dec	a
   A10B 20 12         [12]10896 	jr	NZ,00105$
   A10D 21 6A 00      [10]10897 	ld	hl, #0x006a
   A110 E5            [11]10898 	push	hl
   A111 3E 13         [ 7]10899 	ld	a, #0x13
   A113 F5            [11]10900 	push	af
   A114 33            [ 6]10901 	inc	sp
   A115 21 8D A1      [10]10902 	ld	hl, #___str_74
   A118 E5            [11]10903 	push	hl
   A119 CD 10 63      [17]10904 	call	_PrintText
   A11C F1            [10]10905 	pop	af
   A11D F1            [10]10906 	pop	af
   A11E 33            [ 6]10907 	inc	sp
   A11F                   10908 00105$:
                          10909 ;src/main.c:2417: PrintText("HIGH@SCORE:", 16, 122, 0);
   A11F 21 7A 00      [10]10910 	ld	hl, #0x007a
   A122 E5            [11]10911 	push	hl
   A123 3E 10         [ 7]10912 	ld	a, #0x10
   A125 F5            [11]10913 	push	af
   A126 33            [ 6]10914 	inc	sp
   A127 21 9C A1      [10]10915 	ld	hl, #___str_75
   A12A E5            [11]10916 	push	hl
   A12B CD 10 63      [17]10917 	call	_PrintText
   A12E F1            [10]10918 	pop	af
                          10919 ;src/main.c:2418: PrintNumber(highScore, 4, 52, 122, 0);			
   A12F 33            [ 6]10920 	inc	sp
   A130 21 7A 00      [10]10921 	ld	hl,#0x007a
   A133 E3            [19]10922 	ex	(sp),hl
   A134 21 04 34      [10]10923 	ld	hl, #0x3404
   A137 E5            [11]10924 	push	hl
   A138 2A D9 5E      [16]10925 	ld	hl, (_highScore)
   A13B E5            [11]10926 	push	hl
   A13C CD 41 62      [17]10927 	call	_PrintNumber
   A13F 21 06 00      [10]10928 	ld	hl, #6
   A142 39            [11]10929 	add	hl, sp
   A143 F9            [ 6]10930 	ld	sp, hl
   A144 18 12         [12]10931 	jr	00108$
   A146                   10932 00107$:
                          10933 ;src/main.c:2421: PrintText("G@A@M@E@@O@V@E@R", 16, 107, 0);
   A146 21 6B 00      [10]10934 	ld	hl, #0x006b
   A149 E5            [11]10935 	push	hl
   A14A 3E 10         [ 7]10936 	ld	a, #0x10
   A14C F5            [11]10937 	push	af
   A14D 33            [ 6]10938 	inc	sp
   A14E 21 6D A1      [10]10939 	ld	hl, #___str_72
   A151 E5            [11]10940 	push	hl
   A152 CD 10 63      [17]10941 	call	_PrintText
   A155 F1            [10]10942 	pop	af
   A156 F1            [10]10943 	pop	af
   A157 33            [ 6]10944 	inc	sp
   A158                   10945 00108$:
                          10946 ;src/main.c:2422: Pause(500);	
   A158 21 F4 01      [10]10947 	ld	hl, #0x01f4
   A15B CD 81 61      [17]10948 	call	_Pause
                          10949 ;src/main.c:2424: while (!cpct_isAnyKeyPressed());
   A15E                   10950 00109$:
   A15E CD E5 5B      [17]10951 	call	_cpct_isAnyKeyPressed
   A161 7D            [ 4]10952 	ld	a, l
   A162 B7            [ 4]10953 	or	a, a
   A163 28 F9         [12]10954 	jr	Z,00109$
                          10955 ;src/main.c:2425: InitGame();
   A165 CD 01 A0      [17]10956 	call	_InitGame
   A168                   10957 00116$:
   A168 DD F9         [10]10958 	ld	sp, ix
   A16A DD E1         [14]10959 	pop	ix
   A16C C9            [10]10960 	ret
   A16D                   10961 ___str_72:
   A16D 47 40 41 40 4D 40 10962 	.ascii "G@A@M@E@@O@V@E@R"
        45 40 40 4F 40 56
        40 45 40 52
   A17D 00                10963 	.db 0x00
   A17E                   10964 ___str_73:
   A17E 50 4C 41 59 45 52 10965 	.ascii "PLAYER@2@WINS>"
        40 32 40 57 49 4E
        53 3E
   A18C 00                10966 	.db 0x00
   A18D                   10967 ___str_74:
   A18D 50 4C 41 59 45 52 10968 	.ascii "PLAYER@1@WINS>"
        40 31 40 57 49 4E
        53 3E
   A19B 00                10969 	.db 0x00
   A19C                   10970 ___str_75:
   A19C 48 49 47 48 40 53 10971 	.ascii "HIGH@SCORE:"
        43 4F 52 45 3A
   A1A7 00                10972 	.db 0x00
                          10973 ;src/main.c:2430: void main(void) {
                          10974 ;	---------------------------------
                          10975 ; Function main
                          10976 ; ---------------------------------
   A1A8                   10977 _main::
                          10978 ;src/main.c:2432: cpct_disableFirmware();
   A1A8 CD DD 5C      [17]10979 	call	_cpct_disableFirmware
                          10980 ;src/main.c:2434: cpct_akp_SFXInit(g_fx);
   A1AB 21 C4 05      [10]10981 	ld	hl, #_g_fx
   A1AE E5            [11]10982 	push	hl
   A1AF CD D4 59      [17]10983 	call	_cpct_akp_SFXInit
   A1B2 F1            [10]10984 	pop	af
                          10985 ;src/main.c:2436: cpct_setInterruptHandler(Interrupt); 
   A1B3 21 9D 61      [10]10986 	ld	hl, #_Interrupt
   A1B6 CD 51 5E      [17]10987 	call	_cpct_setInterruptHandler
                          10988 ;src/main.c:2438: cpct_setVideoMode(0);
   A1B9 2E 00         [ 7]10989 	ld	l, #0x00
   A1BB CD A5 5C      [17]10990 	call	_cpct_setVideoMode
                          10991 ;src/main.c:2440: cpct_setPalette(g_palette, 16);
   A1BE 21 10 00      [10]10992 	ld	hl, #0x0010
   A1C1 E5            [11]10993 	push	hl
   A1C2 21 C7 2E      [10]10994 	ld	hl, #_g_palette
   A1C5 E5            [11]10995 	push	hl
   A1C6 CD AA 51      [17]10996 	call	_cpct_setPalette
                          10997 ;src/main.c:2442: cpct_setBorder(g_palette[BG_COLOR]);
   A1C9 21 C8 2E      [10]10998 	ld	hl, #_g_palette + 1
   A1CC 46            [ 7]10999 	ld	b, (hl)
   A1CD C5            [11]11000 	push	bc
   A1CE 33            [ 6]11001 	inc	sp
   A1CF 3E 10         [ 7]11002 	ld	a, #0x10
   A1D1 F5            [11]11003 	push	af
   A1D2 33            [ 6]11004 	inc	sp
   A1D3 CD 37 52      [17]11005 	call	_cpct_setPALColour
                          11006 ;src/main.c:2444: cpct_etm_setTileset2x4(g_tileset);	
   A1D6 21 D7 2E      [10]11007 	ld	hl, #_g_tileset
   A1D9 CD A0 5B      [17]11008 	call	_cpct_etm_setTileset2x4
                          11009 ;src/main.c:2446: InitValues();
   A1DC CD 29 9F      [17]11010 	call	_InitValues
                          11011 ;src/main.c:2448: InitGame();
   A1DF CD 01 A0      [17]11012 	call	_InitGame
                          11013 ;src/main.c:2451: while (1) {
   A1E2                   11014 00136$:
                          11015 ;src/main.c:2453: if (ctMainLoop % 8 == 0) {
   A1E2 21 08 00      [10]11016 	ld	hl, #0x0008
   A1E5 E5            [11]11017 	push	hl
   A1E6 2A F2 5E      [16]11018 	ld	hl, (_ctMainLoop)
   A1E9 E5            [11]11019 	push	hl
   A1EA CD C2 5D      [17]11020 	call	__modsint
   A1ED F1            [10]11021 	pop	af
   A1EE F1            [10]11022 	pop	af
   A1EF 7C            [ 4]11023 	ld	a, h
   A1F0 B5            [ 4]11024 	or	a,l
   A1F1 20 46         [12]11025 	jr	NZ,00108$
                          11026 ;src/main.c:2454: ReprintObject(); // reprint the active object
   A1F3 CD F7 6F      [17]11027 	call	_ReprintObject
                          11028 ;src/main.c:2455: PrintObjectInStore(); // reprint the object into the store
   A1F6 CD 2D 6D      [17]11029 	call	_PrintObjectInStore
                          11030 ;src/main.c:2456: CheckObject(0); // verify collection of object 1
   A1F9 AF            [ 4]11031 	xor	a, a
   A1FA F5            [11]11032 	push	af
   A1FB 33            [ 6]11033 	inc	sp
   A1FC CD 60 6D      [17]11034 	call	_CheckObject
   A1FF 33            [ 6]11035 	inc	sp
                          11036 ;src/main.c:2457: CheckObject(1); // verify collection of object 2
   A200 3E 01         [ 7]11037 	ld	a, #0x01
   A202 F5            [11]11038 	push	af
   A203 33            [ 6]11039 	inc	sp
   A204 CD 60 6D      [17]11040 	call	_CheckObject
   A207 33            [ 6]11041 	inc	sp
                          11042 ;src/main.c:2458: MakeWizardAnim(0); // activates the wizard's shot if the player 1 is inactive		
   A208 2E 00         [ 7]11043 	ld	l, #0x00
   A20A CD C6 88      [17]11044 	call	_MakeWizardAnim
                          11045 ;src/main.c:2459: if (spr[0].print_minV) CheckActiveTile(0); // check entry into store, door or well of player 1
   A20D 3A 17 5F      [13]11046 	ld	a, (#_spr + 13)
   A210 B7            [ 4]11047 	or	a, a
   A211 28 07         [12]11048 	jr	Z,00102$
   A213 AF            [ 4]11049 	xor	a, a
   A214 F5            [11]11050 	push	af
   A215 33            [ 6]11051 	inc	sp
   A216 CD 84 74      [17]11052 	call	_CheckActiveTile
   A219 33            [ 6]11053 	inc	sp
   A21A                   11054 00102$:
                          11055 ;src/main.c:2461: if (TwoPlayers) {
   A21A 3A D4 5E      [13]11056 	ld	a,(#_TwoPlayers + 0)
   A21D B7            [ 4]11057 	or	a, a
   A21E 28 16         [12]11058 	jr	Z,00106$
                          11059 ;src/main.c:2462: CheckDuel(); // check that both players collide and have potions
   A220 CD 57 86      [17]11060 	call	_CheckDuel
                          11061 ;src/main.c:2463: MakeWizardAnim(1); // activates the wizard's shot if the player 2 is inactive		
   A223 2E 01         [ 7]11062 	ld	l, #0x01
   A225 CD C6 88      [17]11063 	call	_MakeWizardAnim
                          11064 ;src/main.c:2464: if (spr[1].print_minV) CheckActiveTile(1); // check entry into store, door or well of player 2
   A228 3A 26 5F      [13]11065 	ld	a, (#_spr + 28)
   A22B B7            [ 4]11066 	or	a, a
   A22C 28 08         [12]11067 	jr	Z,00106$
   A22E 3E 01         [ 7]11068 	ld	a, #0x01
   A230 F5            [11]11069 	push	af
   A231 33            [ 6]11070 	inc	sp
   A232 CD 84 74      [17]11071 	call	_CheckActiveTile
   A235 33            [ 6]11072 	inc	sp
   A236                   11073 00106$:
                          11074 ;src/main.c:2466: WizardAnim(); // print the wizard if active
   A236 CD 0D 88      [17]11075 	call	_WizardAnim
   A239                   11076 00108$:
                          11077 ;src/main.c:2469: if (!turboMode) cpct_waitVSYNC(); // wait for vertical retrace	
   A239 3A EF 5E      [13]11078 	ld	a,(#_turboMode + 0)
   A23C B7            [ 4]11079 	or	a, a
   A23D 20 03         [12]11080 	jr	NZ,00110$
   A23F CD 9D 5C      [17]11081 	call	_cpct_waitVSYNC
   A242                   11082 00110$:
                          11083 ;src/main.c:2472: switch (ctMainLoop % 3) {
   A242 21 03 00      [10]11084 	ld	hl, #0x0003
   A245 E5            [11]11085 	push	hl
   A246 2A F2 5E      [16]11086 	ld	hl, (_ctMainLoop)
   A249 E5            [11]11087 	push	hl
   A24A CD C2 5D      [17]11088 	call	__modsint
   A24D F1            [10]11089 	pop	af
   A24E F1            [10]11090 	pop	af
   A24F 4D            [ 4]11091 	ld	c, l
   A250 44            [ 4]11092 	ld	b, h
   A251 79            [ 4]11093 	ld	a, c
   A252 B7            [ 4]11094 	or	a, a
   A253 B0            [ 4]11095 	or	a, b
   A254 28 0E         [12]11096 	jr	Z,00111$
   A256 79            [ 4]11097 	ld	a, c
   A257 3D            [ 4]11098 	dec	a
   A258 B0            [ 4]11099 	or	a, b
   A259 28 18         [12]11100 	jr	Z,00112$
   A25B 79            [ 4]11101 	ld	a, c
   A25C D6 02         [ 7]11102 	sub	a, #0x02
   A25E B0            [ 4]11103 	or	a, b
   A25F 28 2F         [12]11104 	jr	Z,00117$
   A261 C3 EA A2      [10]11105 	jp	00129$
                          11106 ;src/main.c:2474: case 0: {							
   A264                   11107 00111$:
                          11108 ;src/main.c:2475: PlayerLoop(&spr[0]); // player 1
   A264 21 0A 5F      [10]11109 	ld	hl, #_spr
   A267 CD AD 81      [17]11110 	call	_PlayerLoop
                          11111 ;src/main.c:2476: EnemyLoop(&spr[2]);	 // enemy sprite 2 is always processed (fast)
   A26A 21 28 5F      [10]11112 	ld	hl, #(_spr + 0x001e)
   A26D CD 02 99      [17]11113 	call	_EnemyLoop
                          11114 ;src/main.c:2477: break;
   A270 C3 EA A2      [10]11115 	jp	00129$
                          11116 ;src/main.c:2480: case 1:	{			
   A273                   11117 00112$:
                          11118 ;src/main.c:2481: if (TwoPlayers) {
   A273 3A D4 5E      [13]11119 	ld	a,(#_TwoPlayers + 0)
   A276 B7            [ 4]11120 	or	a, a
   A277 28 0F         [12]11121 	jr	Z,00116$
                          11122 ;src/main.c:2482: PlayerLoop(&spr[1]); // player 2
   A279 21 19 5F      [10]11123 	ld	hl, #(_spr + 0x000f)
   A27C CD AD 81      [17]11124 	call	_PlayerLoop
                          11125 ;src/main.c:2483: if (!turboMode) cpct_waitVSYNC(); // additional wait for vertical retrace (avoid flickering)
   A27F 3A EF 5E      [13]11126 	ld	a,(#_turboMode + 0)
   A282 B7            [ 4]11127 	or	a, a
   A283 20 03         [12]11128 	jr	NZ,00116$
   A285 CD 9D 5C      [17]11129 	call	_cpct_waitVSYNC
   A288                   11130 00116$:
                          11131 ;src/main.c:2485: EnemyLoop(&spr[3]);	 // enemy sprite 3 is always processed (fast)
   A288 21 37 5F      [10]11132 	ld	hl, #(_spr + 0x002d)
   A28B CD 02 99      [17]11133 	call	_EnemyLoop
                          11134 ;src/main.c:2486: break;
   A28E 18 5A         [12]11135 	jr	00129$
                          11136 ;src/main.c:2489: case 2:	{
   A290                   11137 00117$:
                          11138 ;src/main.c:2490: EnemyLoop(&spr[enemyTurn+4]); // enemy sprites 4 and 5 take turns processing (slow)				
   A290 3A EC 5E      [13]11139 	ld	a,(#_enemyTurn + 0)
   A293 C6 04         [ 7]11140 	add	a, #0x04
   A295 4F            [ 4]11141 	ld	c,a
   A296 06 00         [ 7]11142 	ld	b,#0x00
   A298 69            [ 4]11143 	ld	l, c
   A299 60            [ 4]11144 	ld	h, b
   A29A 29            [11]11145 	add	hl, hl
   A29B 09            [11]11146 	add	hl, bc
   A29C 29            [11]11147 	add	hl, hl
   A29D 09            [11]11148 	add	hl, bc
   A29E 29            [11]11149 	add	hl, hl
   A29F 09            [11]11150 	add	hl, bc
   A2A0 11 0A 5F      [10]11151 	ld	de, #_spr
   A2A3 19            [11]11152 	add	hl, de
   A2A4 CD 02 99      [17]11153 	call	_EnemyLoop
                          11154 ;src/main.c:2491: if (++enemyTurn > 1) enemyTurn = 0;
   A2A7 FD 21 EC 5E   [14]11155 	ld	iy, #_enemyTurn
   A2AB FD 34 00      [23]11156 	inc	0 (iy)
   A2AE 3E 01         [ 7]11157 	ld	a, #0x01
   A2B0 FD 96 00      [19]11158 	sub	a, 0 (iy)
   A2B3 30 04         [12]11159 	jr	NC,00119$
   A2B5 FD 36 00 00   [19]11160 	ld	0 (iy), #0x00
   A2B9                   11161 00119$:
                          11162 ;src/main.c:2494: if (sht.active) {				
   A2B9 3A 77 5F      [13]11163 	ld	a, (#(_sht + 0x0004) + 0)
   A2BC B7            [ 4]11164 	or	a, a
   A2BD 28 17         [12]11165 	jr	Z,00124$
                          11166 ;src/main.c:2495: MoveShot(); // update the shot's XY coordinates	
   A2BF CD 93 87      [17]11167 	call	_MoveShot
                          11168 ;src/main.c:2498: if (ctWizardAnim > 0) 	
   A2C2 3A F1 5E      [13]11169 	ld	a,(#_ctWizardAnim + 0)
   A2C5 B7            [ 4]11170 	or	a, a
   A2C6 28 08         [12]11171 	jr	Z,00121$
                          11172 ;src/main.c:2499: PrintShot(g_magic_3);	// wizard
   A2C8 21 61 16      [10]11173 	ld	hl, #_g_magic_3
   A2CB CD 69 87      [17]11174 	call	_PrintShot
   A2CE 18 06         [12]11175 	jr	00124$
   A2D0                   11176 00121$:
                          11177 ;src/main.c:2501: PrintShot(g_magic_2);	// witch
   A2D0 21 41 16      [10]11178 	ld	hl, #_g_magic_2
   A2D3 CD 69 87      [17]11179 	call	_PrintShot
   A2D6                   11180 00124$:
                          11181 ;src/main.c:2505: if (spr[0].power_maxV > 0) spr[0].power_maxV--;
   A2D6 01 18 5F      [10]11182 	ld	bc, #_spr + 14
   A2D9 0A            [ 7]11183 	ld	a, (bc)
   A2DA B7            [ 4]11184 	or	a, a
   A2DB 28 03         [12]11185 	jr	Z,00126$
   A2DD C6 FF         [ 7]11186 	add	a, #0xff
   A2DF 02            [ 7]11187 	ld	(bc), a
   A2E0                   11188 00126$:
                          11189 ;src/main.c:2506: if (spr[1].power_maxV > 0) spr[1].power_maxV--;			
   A2E0 01 27 5F      [10]11190 	ld	bc, #_spr + 29
   A2E3 0A            [ 7]11191 	ld	a, (bc)
   A2E4 B7            [ 4]11192 	or	a, a
   A2E5 28 03         [12]11193 	jr	Z,00129$
   A2E7 C6 FF         [ 7]11194 	add	a, #0xff
   A2E9 02            [ 7]11195 	ld	(bc), a
                          11196 ;src/main.c:2508: }
   A2EA                   11197 00129$:
                          11198 ;src/main.c:2511: ctMainLoop++;
   A2EA ED 4B F2 5E   [20]11199 	ld	bc, (_ctMainLoop)
   A2EE 03            [ 6]11200 	inc	bc
                          11201 ;src/main.c:2510: if (ctMainLoop == 174) {
   A2EF FD 21 F2 5E   [14]11202 	ld	iy, #_ctMainLoop
   A2F3 FD 7E 00      [19]11203 	ld	a, 0 (iy)
   A2F6 D6 AE         [ 7]11204 	sub	a, #0xae
   A2F8 FD B6 01      [19]11205 	or	a, 1 (iy)
   A2FB 20 0C         [12]11206 	jr	NZ,00133$
                          11207 ;src/main.c:2511: ctMainLoop++;
   A2FD ED 43 F2 5E   [20]11208 	ld	(_ctMainLoop), bc
                          11209 ;src/main.c:2512: SetObject(1); // set the second object
   A301 2E 01         [ 7]11210 	ld	l, #0x01
   A303 CD 91 72      [17]11211 	call	_SetObject
   A306 C3 E2 A1      [10]11212 	jp	00136$
   A309                   11213 00133$:
                          11214 ;src/main.c:2514: else if (ctMainLoop++ == 350) {			
   A309 ED 5B F2 5E   [20]11215 	ld	de, (_ctMainLoop)
   A30D ED 43 F2 5E   [20]11216 	ld	(_ctMainLoop), bc
   A311 7B            [ 4]11217 	ld	a, e
   A312 D6 5E         [ 7]11218 	sub	a, #0x5e
   A314 C2 E2 A1      [10]11219 	jp	NZ,00136$
   A317 15            [ 4]11220 	dec	d
   A318 C2 E2 A1      [10]11221 	jp	NZ,00136$
                          11222 ;src/main.c:2515: SetObject(0); // set the first object			
   A31B 2E 00         [ 7]11223 	ld	l, #0x00
   A31D CD 91 72      [17]11224 	call	_SetObject
                          11225 ;src/main.c:2516: ctMainLoop = 0; // reset counter
   A320 21 00 00      [10]11226 	ld	hl, #0x0000
   A323 22 F2 5E      [16]11227 	ld	(_ctMainLoop), hl
   A326 C3 E2 A1      [10]11228 	jp	00136$
                          11229 	.area _CODE
                          11230 	.area _INITIALIZER
                          11231 	.area _CABS (ABS)
