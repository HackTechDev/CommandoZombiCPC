                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : free open source ANSI-C Compiler
                              3 ; Version 3.6.8 #9946 (Linux)
                              4 ;--------------------------------------------------------
                              5 	.module font
                              6 	.optsdcc -mz80
                              7 	
                              8 ;--------------------------------------------------------
                              9 ; Public variables in this module
                             10 ;--------------------------------------------------------
                             11 	.globl _g_font
                             12 ;--------------------------------------------------------
                             13 ; special function registers
                             14 ;--------------------------------------------------------
                             15 ;--------------------------------------------------------
                             16 ; ram data
                             17 ;--------------------------------------------------------
                             18 	.area _DATA
                             19 ;--------------------------------------------------------
                             20 ; ram data
                             21 ;--------------------------------------------------------
                             22 	.area _INITIALIZED
                             23 ;--------------------------------------------------------
                             24 ; absolute external ram data
                             25 ;--------------------------------------------------------
                             26 	.area _DABS (ABS)
                             27 ;--------------------------------------------------------
                             28 ; global & static initialisations
                             29 ;--------------------------------------------------------
                             30 	.area _HOME
                             31 	.area _GSINIT
                             32 	.area _GSFINAL
                             33 	.area _GSINIT
                             34 ;--------------------------------------------------------
                             35 ; Home
                             36 ;--------------------------------------------------------
                             37 	.area _HOME
                             38 	.area _HOME
                             39 ;--------------------------------------------------------
                             40 ; code
                             41 ;--------------------------------------------------------
                             42 	.area _CODE
                             43 	.area _CODE
   4B49                      44 _g_font:
   4B49 44                   45 	.db #0x44	; 68	'D'
   4B4A CC                   46 	.db #0xcc	; 204
   4B4B 02                   47 	.db #0x02	; 2
   4B4C FF                   48 	.db #0xff	; 255
   4B4D FF                   49 	.db #0xff	; 255
   4B4E AB                   50 	.db #0xab	; 171
   4B4F FF                   51 	.db #0xff	; 255
   4B50 57                   52 	.db #0x57	; 87	'W'
   4B51 AB                   53 	.db #0xab	; 171
   4B52 FF                   54 	.db #0xff	; 255
   4B53 57                   55 	.db #0x57	; 87	'W'
   4B54 AB                   56 	.db #0xab	; 171
   4B55 0F                   57 	.db #0x0f	; 15
   4B56 07                   58 	.db #0x07	; 7
   4B57 0B                   59 	.db #0x0b	; 11
   4B58 0F                   60 	.db #0x0f	; 15
   4B59 07                   61 	.db #0x07	; 7
   4B5A 0B                   62 	.db #0x0b	; 11
   4B5B C3                   63 	.db #0xc3	; 195
   4B5C C3                   64 	.db #0xc3	; 195
   4B5D 83                   65 	.db #0x83	; 131
   4B5E 41                   66 	.db #0x41	; 65	'A'
   4B5F C3                   67 	.db #0xc3	; 195
   4B60 02                   68 	.db #0x02	; 2
   4B61 00                   69 	.db #0x00	; 0
   4B62 CC                   70 	.db #0xcc	; 204
   4B63 02                   71 	.db #0x02	; 2
   4B64 55                   72 	.db #0x55	; 85	'U'
   4B65 FF                   73 	.db #0xff	; 255
   4B66 02                   74 	.db #0x02	; 2
   4B67 00                   75 	.db #0x00	; 0
   4B68 FF                   76 	.db #0xff	; 255
   4B69 02                   77 	.db #0x02	; 2
   4B6A 00                   78 	.db #0x00	; 0
   4B6B FF                   79 	.db #0xff	; 255
   4B6C 02                   80 	.db #0x02	; 2
   4B6D 00                   81 	.db #0x00	; 0
   4B6E 0F                   82 	.db #0x0f	; 15
   4B6F 02                   83 	.db #0x02	; 2
   4B70 00                   84 	.db #0x00	; 0
   4B71 0F                   85 	.db #0x0f	; 15
   4B72 02                   86 	.db #0x02	; 2
   4B73 41                   87 	.db #0x41	; 65	'A'
   4B74 C3                   88 	.db #0xc3	; 195
   4B75 83                   89 	.db #0x83	; 131
   4B76 41                   90 	.db #0x41	; 65	'A'
   4B77 C3                   91 	.db #0xc3	; 195
   4B78 83                   92 	.db #0x83	; 131
   4B79 44                   93 	.db #0x44	; 68	'D'
   4B7A CC                   94 	.db #0xcc	; 204
   4B7B 02                   95 	.db #0x02	; 2
   4B7C FF                   96 	.db #0xff	; 255
   4B7D FF                   97 	.db #0xff	; 255
   4B7E AB                   98 	.db #0xab	; 171
   4B7F FF                   99 	.db #0xff	; 255
   4B80 57                  100 	.db #0x57	; 87	'W'
   4B81 AB                  101 	.db #0xab	; 171
   4B82 00                  102 	.db #0x00	; 0
   4B83 55                  103 	.db #0x55	; 85	'U'
   4B84 AB                  104 	.db #0xab	; 171
   4B85 05                  105 	.db #0x05	; 5
   4B86 0F                  106 	.db #0x0f	; 15
   4B87 02                  107 	.db #0x02	; 2
   4B88 0F                  108 	.db #0x0f	; 15
   4B89 02                  109 	.db #0x02	; 2
   4B8A 00                  110 	.db #0x00	; 0
   4B8B C3                  111 	.db #0xc3	; 195
   4B8C C3                  112 	.db #0xc3	; 195
   4B8D 83                  113 	.db #0x83	; 131
   4B8E C3                  114 	.db #0xc3	; 195
   4B8F C3                  115 	.db #0xc3	; 195
   4B90 83                  116 	.db #0x83	; 131
   4B91 44                  117 	.db #0x44	; 68	'D'
   4B92 CC                  118 	.db #0xcc	; 204
   4B93 02                  119 	.db #0x02	; 2
   4B94 FF                  120 	.db #0xff	; 255
   4B95 FF                  121 	.db #0xff	; 255
   4B96 AB                  122 	.db #0xab	; 171
   4B97 FF                  123 	.db #0xff	; 255
   4B98 57                  124 	.db #0x57	; 87	'W'
   4B99 AB                  125 	.db #0xab	; 171
   4B9A 00                  126 	.db #0x00	; 0
   4B9B FF                  127 	.db #0xff	; 255
   4B9C 02                  128 	.db #0x02	; 2
   4B9D 00                  129 	.db #0x00	; 0
   4B9E 05                  130 	.db #0x05	; 5
   4B9F 0B                  131 	.db #0x0b	; 11
   4BA0 0F                  132 	.db #0x0f	; 15
   4BA1 07                  133 	.db #0x07	; 7
   4BA2 0B                  134 	.db #0x0b	; 11
   4BA3 C3                  135 	.db #0xc3	; 195
   4BA4 C3                  136 	.db #0xc3	; 195
   4BA5 83                  137 	.db #0x83	; 131
   4BA6 41                  138 	.db #0x41	; 65	'A'
   4BA7 C3                  139 	.db #0xc3	; 195
   4BA8 02                  140 	.db #0x02	; 2
   4BA9 00                  141 	.db #0x00	; 0
   4BAA CC                  142 	.db #0xcc	; 204
   4BAB 02                  143 	.db #0x02	; 2
   4BAC AB                  144 	.db #0xab	; 171
   4BAD FF                  145 	.db #0xff	; 255
   4BAE 02                  146 	.db #0x02	; 2
   4BAF AB                  147 	.db #0xab	; 171
   4BB0 FF                  148 	.db #0xff	; 255
   4BB1 02                  149 	.db #0x02	; 2
   4BB2 AB                  150 	.db #0xab	; 171
   4BB3 FF                  151 	.db #0xff	; 255
   4BB4 02                  152 	.db #0x02	; 2
   4BB5 0F                  153 	.db #0x0f	; 15
   4BB6 0F                  154 	.db #0x0f	; 15
   4BB7 0B                  155 	.db #0x0b	; 11
   4BB8 0F                  156 	.db #0x0f	; 15
   4BB9 0F                  157 	.db #0x0f	; 15
   4BBA 0B                  158 	.db #0x0b	; 11
   4BBB 00                  159 	.db #0x00	; 0
   4BBC C3                  160 	.db #0xc3	; 195
   4BBD 02                  161 	.db #0x02	; 2
   4BBE 00                  162 	.db #0x00	; 0
   4BBF C3                  163 	.db #0xc3	; 195
   4BC0 02                  164 	.db #0x02	; 2
   4BC1 CC                  165 	.db #0xcc	; 204
   4BC2 CC                  166 	.db #0xcc	; 204
   4BC3 89                  167 	.db #0x89	; 137
   4BC4 FF                  168 	.db #0xff	; 255
   4BC5 FF                  169 	.db #0xff	; 255
   4BC6 AB                  170 	.db #0xab	; 171
   4BC7 FF                  171 	.db #0xff	; 255
   4BC8 02                  172 	.db #0x02	; 2
   4BC9 00                  173 	.db #0x00	; 0
   4BCA FF                  174 	.db #0xff	; 255
   4BCB FF                  175 	.db #0xff	; 255
   4BCC 02                  176 	.db #0x02	; 2
   4BCD 00                  177 	.db #0x00	; 0
   4BCE 05                  178 	.db #0x05	; 5
   4BCF 0B                  179 	.db #0x0b	; 11
   4BD0 0F                  180 	.db #0x0f	; 15
   4BD1 07                  181 	.db #0x07	; 7
   4BD2 0B                  182 	.db #0x0b	; 11
   4BD3 C3                  183 	.db #0xc3	; 195
   4BD4 C3                  184 	.db #0xc3	; 195
   4BD5 83                  185 	.db #0x83	; 131
   4BD6 41                  186 	.db #0x41	; 65	'A'
   4BD7 C3                  187 	.db #0xc3	; 195
   4BD8 02                  188 	.db #0x02	; 2
   4BD9 44                  189 	.db #0x44	; 68	'D'
   4BDA CC                  190 	.db #0xcc	; 204
   4BDB 02                  191 	.db #0x02	; 2
   4BDC FF                  192 	.db #0xff	; 255
   4BDD FF                  193 	.db #0xff	; 255
   4BDE 02                  194 	.db #0x02	; 2
   4BDF FF                  195 	.db #0xff	; 255
   4BE0 02                  196 	.db #0x02	; 2
   4BE1 00                  197 	.db #0x00	; 0
   4BE2 FF                  198 	.db #0xff	; 255
   4BE3 FF                  199 	.db #0xff	; 255
   4BE4 02                  200 	.db #0x02	; 2
   4BE5 0F                  201 	.db #0x0f	; 15
   4BE6 0F                  202 	.db #0x0f	; 15
   4BE7 0B                  203 	.db #0x0b	; 11
   4BE8 0F                  204 	.db #0x0f	; 15
   4BE9 07                  205 	.db #0x07	; 7
   4BEA 0B                  206 	.db #0x0b	; 11
   4BEB C3                  207 	.db #0xc3	; 195
   4BEC C3                  208 	.db #0xc3	; 195
   4BED 83                  209 	.db #0x83	; 131
   4BEE 41                  210 	.db #0x41	; 65	'A'
   4BEF C3                  211 	.db #0xc3	; 195
   4BF0 02                  212 	.db #0x02	; 2
   4BF1 CC                  213 	.db #0xcc	; 204
   4BF2 CC                  214 	.db #0xcc	; 204
   4BF3 89                  215 	.db #0x89	; 137
   4BF4 FF                  216 	.db #0xff	; 255
   4BF5 FF                  217 	.db #0xff	; 255
   4BF6 AB                  218 	.db #0xab	; 171
   4BF7 00                  219 	.db #0x00	; 0
   4BF8 55                  220 	.db #0x55	; 85	'U'
   4BF9 AB                  221 	.db #0xab	; 171
   4BFA 00                  222 	.db #0x00	; 0
   4BFB FF                  223 	.db #0xff	; 255
   4BFC 02                  224 	.db #0x02	; 2
   4BFD 05                  225 	.db #0x05	; 5
   4BFE 0B                  226 	.db #0x0b	; 11
   4BFF 00                  227 	.db #0x00	; 0
   4C00 05                  228 	.db #0x05	; 5
   4C01 0B                  229 	.db #0x0b	; 11
   4C02 00                  230 	.db #0x00	; 0
   4C03 41                  231 	.db #0x41	; 65	'A'
   4C04 83                  232 	.db #0x83	; 131
   4C05 00                  233 	.db #0x00	; 0
   4C06 41                  234 	.db #0x41	; 65	'A'
   4C07 83                  235 	.db #0x83	; 131
   4C08 00                  236 	.db #0x00	; 0
   4C09 44                  237 	.db #0x44	; 68	'D'
   4C0A CC                  238 	.db #0xcc	; 204
   4C0B 02                  239 	.db #0x02	; 2
   4C0C FF                  240 	.db #0xff	; 255
   4C0D FF                  241 	.db #0xff	; 255
   4C0E AB                  242 	.db #0xab	; 171
   4C0F FF                  243 	.db #0xff	; 255
   4C10 57                  244 	.db #0x57	; 87	'W'
   4C11 AB                  245 	.db #0xab	; 171
   4C12 55                  246 	.db #0x55	; 85	'U'
   4C13 FF                  247 	.db #0xff	; 255
   4C14 02                  248 	.db #0x02	; 2
   4C15 0F                  249 	.db #0x0f	; 15
   4C16 0F                  250 	.db #0x0f	; 15
   4C17 0B                  251 	.db #0x0b	; 11
   4C18 0F                  252 	.db #0x0f	; 15
   4C19 07                  253 	.db #0x07	; 7
   4C1A 0B                  254 	.db #0x0b	; 11
   4C1B C3                  255 	.db #0xc3	; 195
   4C1C C3                  256 	.db #0xc3	; 195
   4C1D 83                  257 	.db #0x83	; 131
   4C1E 41                  258 	.db #0x41	; 65	'A'
   4C1F C3                  259 	.db #0xc3	; 195
   4C20 02                  260 	.db #0x02	; 2
   4C21 44                  261 	.db #0x44	; 68	'D'
   4C22 CC                  262 	.db #0xcc	; 204
   4C23 02                  263 	.db #0x02	; 2
   4C24 FF                  264 	.db #0xff	; 255
   4C25 FF                  265 	.db #0xff	; 255
   4C26 AB                  266 	.db #0xab	; 171
   4C27 FF                  267 	.db #0xff	; 255
   4C28 57                  268 	.db #0x57	; 87	'W'
   4C29 AB                  269 	.db #0xab	; 171
   4C2A FF                  270 	.db #0xff	; 255
   4C2B FF                  271 	.db #0xff	; 255
   4C2C AB                  272 	.db #0xab	; 171
   4C2D 05                  273 	.db #0x05	; 5
   4C2E 0F                  274 	.db #0x0f	; 15
   4C2F 0B                  275 	.db #0x0b	; 11
   4C30 00                  276 	.db #0x00	; 0
   4C31 05                  277 	.db #0x05	; 5
   4C32 0B                  278 	.db #0x0b	; 11
   4C33 41                  279 	.db #0x41	; 65	'A'
   4C34 C3                  280 	.db #0xc3	; 195
   4C35 83                  281 	.db #0x83	; 131
   4C36 41                  282 	.db #0x41	; 65	'A'
   4C37 C3                  283 	.db #0xc3	; 195
   4C38 02                  284 	.db #0x02	; 2
   4C39 00                  285 	.db #0x00	; 0
   4C3A 00                  286 	.db #0x00	; 0
   4C3B 00                  287 	.db #0x00	; 0
   4C3C 55                  288 	.db #0x55	; 85	'U'
   4C3D AB                  289 	.db #0xab	; 171
   4C3E 00                  290 	.db #0x00	; 0
   4C3F 55                  291 	.db #0x55	; 85	'U'
   4C40 AB                  292 	.db #0xab	; 171
   4C41 00                  293 	.db #0x00	; 0
   4C42 01                  294 	.db #0x01	; 1
   4C43 03                  295 	.db #0x03	; 3
   4C44 00                  296 	.db #0x00	; 0
   4C45 00                  297 	.db #0x00	; 0
   4C46 00                  298 	.db #0x00	; 0
   4C47 00                  299 	.db #0x00	; 0
   4C48 05                  300 	.db #0x05	; 5
   4C49 0B                  301 	.db #0x0b	; 11
   4C4A 00                  302 	.db #0x00	; 0
   4C4B 41                  303 	.db #0x41	; 65	'A'
   4C4C 83                  304 	.db #0x83	; 131
   4C4D 00                  305 	.db #0x00	; 0
   4C4E 01                  306 	.db #0x01	; 1
   4C4F 03                  307 	.db #0x03	; 3
   4C50 00                  308 	.db #0x00	; 0
   4C51 00                  309 	.db #0x00	; 0
   4C52 00                  310 	.db #0x00	; 0
   4C53 00                  311 	.db #0x00	; 0
   4C54 00                  312 	.db #0x00	; 0
   4C55 00                  313 	.db #0x00	; 0
   4C56 00                  314 	.db #0x00	; 0
   4C57 00                  315 	.db #0x00	; 0
   4C58 00                  316 	.db #0x00	; 0
   4C59 00                  317 	.db #0x00	; 0
   4C5A FF                  318 	.db #0xff	; 255
   4C5B FF                  319 	.db #0xff	; 255
   4C5C AB                  320 	.db #0xab	; 171
   4C5D 0F                  321 	.db #0x0f	; 15
   4C5E 0F                  322 	.db #0x0f	; 15
   4C5F 0B                  323 	.db #0x0b	; 11
   4C60 03                  324 	.db #0x03	; 3
   4C61 03                  325 	.db #0x03	; 3
   4C62 03                  326 	.db #0x03	; 3
   4C63 00                  327 	.db #0x00	; 0
   4C64 00                  328 	.db #0x00	; 0
   4C65 00                  329 	.db #0x00	; 0
   4C66 00                  330 	.db #0x00	; 0
   4C67 00                  331 	.db #0x00	; 0
   4C68 00                  332 	.db #0x00	; 0
   4C69 07                  333 	.db #0x07	; 7
   4C6A DD                  334 	.db #0xdd	; 221
   4C6B EB                  335 	.db #0xeb	; 235
   4C6C 57                  336 	.db #0x57	; 87	'W'
   4C6D AF                  337 	.db #0xaf	; 175
   4C6E 83                  338 	.db #0x83	; 131
   4C6F 5F                  339 	.db #0x5f	; 95
   4C70 4B                  340 	.db #0x4b	; 75	'K'
   4C71 02                  341 	.db #0x02	; 2
   4C72 FF                  342 	.db #0xff	; 255
   4C73 FF                  343 	.db #0xff	; 255
   4C74 AF                  344 	.db #0xaf	; 175
   4C75 5F                  345 	.db #0x5f	; 95
   4C76 FF                  346 	.db #0xff	; 255
   4C77 4B                  347 	.db #0x4b	; 75	'K'
   4C78 01                  348 	.db #0x01	; 1
   4C79 AF                  349 	.db #0xaf	; 175
   4C7A 83                  350 	.db #0x83	; 131
   4C7B 57                  351 	.db #0x57	; 87	'W'
   4C7C 4B                  352 	.db #0x4b	; 75	'K'
   4C7D 02                  353 	.db #0x02	; 2
   4C7E AF                  354 	.db #0xaf	; 175
   4C7F 83                  355 	.db #0x83	; 131
   4C80 00                  356 	.db #0x00	; 0
   4C81 44                  357 	.db #0x44	; 68	'D'
   4C82 89                  358 	.db #0x89	; 137
   4C83 00                  359 	.db #0x00	; 0
   4C84 AB                  360 	.db #0xab	; 171
   4C85 FF                  361 	.db #0xff	; 255
   4C86 02                  362 	.db #0x02	; 2
   4C87 AB                  363 	.db #0xab	; 171
   4C88 FF                  364 	.db #0xff	; 255
   4C89 02                  365 	.db #0x02	; 2
   4C8A 55                  366 	.db #0x55	; 85	'U'
   4C8B AB                  367 	.db #0xab	; 171
   4C8C 05                  368 	.db #0x05	; 5
   4C8D 0B                  369 	.db #0x0b	; 11
   4C8E 0F                  370 	.db #0x0f	; 15
   4C8F 0B                  371 	.db #0x0b	; 11
   4C90 0B                  372 	.db #0x0b	; 11
   4C91 07                  373 	.db #0x07	; 7
   4C92 02                  374 	.db #0x02	; 2
   4C93 C3                  375 	.db #0xc3	; 195
   4C94 C3                  376 	.db #0xc3	; 195
   4C95 83                  377 	.db #0x83	; 131
   4C96 41                  378 	.db #0x41	; 65	'A'
   4C97 83                  379 	.db #0x83	; 131
   4C98 41                  380 	.db #0x41	; 65	'A'
   4C99 CC                  381 	.db #0xcc	; 204
   4C9A 46                  382 	.db #0x46	; 70	'F'
   4C9B 89                  383 	.db #0x89	; 137
   4C9C FF                  384 	.db #0xff	; 255
   4C9D 57                  385 	.db #0x57	; 87	'W'
   4C9E AB                  386 	.db #0xab	; 171
   4C9F FF                  387 	.db #0xff	; 255
   4CA0 57                  388 	.db #0x57	; 87	'W'
   4CA1 AB                  389 	.db #0xab	; 171
   4CA2 FF                  390 	.db #0xff	; 255
   4CA3 57                  391 	.db #0x57	; 87	'W'
   4CA4 AB                  392 	.db #0xab	; 171
   4CA5 0F                  393 	.db #0x0f	; 15
   4CA6 07                  394 	.db #0x07	; 7
   4CA7 0B                  395 	.db #0x0b	; 11
   4CA8 00                  396 	.db #0x00	; 0
   4CA9 00                  397 	.db #0x00	; 0
   4CAA 00                  398 	.db #0x00	; 0
   4CAB C3                  399 	.db #0xc3	; 195
   4CAC 43                  400 	.db #0x43	; 67	'C'
   4CAD 83                  401 	.db #0x83	; 131
   4CAE C3                  402 	.db #0xc3	; 195
   4CAF 43                  403 	.db #0x43	; 67	'C'
   4CB0 83                  404 	.db #0x83	; 131
   4CB1 44                  405 	.db #0x44	; 68	'D'
   4CB2 CC                  406 	.db #0xcc	; 204
   4CB3 02                  407 	.db #0x02	; 2
   4CB4 FF                  408 	.db #0xff	; 255
   4CB5 FF                  409 	.db #0xff	; 255
   4CB6 AB                  410 	.db #0xab	; 171
   4CB7 AB                  411 	.db #0xab	; 171
   4CB8 55                  412 	.db #0x55	; 85	'U'
   4CB9 AB                  413 	.db #0xab	; 171
   4CBA 00                  414 	.db #0x00	; 0
   4CBB 55                  415 	.db #0x55	; 85	'U'
   4CBC AB                  416 	.db #0xab	; 171
   4CBD 00                  417 	.db #0x00	; 0
   4CBE 0F                  418 	.db #0x0f	; 15
   4CBF 02                  419 	.db #0x02	; 2
   4CC0 05                  420 	.db #0x05	; 5
   4CC1 0B                  421 	.db #0x0b	; 11
   4CC2 00                  422 	.db #0x00	; 0
   4CC3 00                  423 	.db #0x00	; 0
   4CC4 00                  424 	.db #0x00	; 0
   4CC5 00                  425 	.db #0x00	; 0
   4CC6 41                  426 	.db #0x41	; 65	'A'
   4CC7 83                  427 	.db #0x83	; 131
   4CC8 00                  428 	.db #0x00	; 0
   4CC9 00                  429 	.db #0x00	; 0
   4CCA 00                  430 	.db #0x00	; 0
   4CCB 00                  431 	.db #0x00	; 0
   4CCC 00                  432 	.db #0x00	; 0
   4CCD 00                  433 	.db #0x00	; 0
   4CCE 00                  434 	.db #0x00	; 0
   4CCF 00                  435 	.db #0x00	; 0
   4CD0 00                  436 	.db #0x00	; 0
   4CD1 00                  437 	.db #0x00	; 0
   4CD2 00                  438 	.db #0x00	; 0
   4CD3 00                  439 	.db #0x00	; 0
   4CD4 00                  440 	.db #0x00	; 0
   4CD5 00                  441 	.db #0x00	; 0
   4CD6 00                  442 	.db #0x00	; 0
   4CD7 00                  443 	.db #0x00	; 0
   4CD8 00                  444 	.db #0x00	; 0
   4CD9 00                  445 	.db #0x00	; 0
   4CDA 00                  446 	.db #0x00	; 0
   4CDB 00                  447 	.db #0x00	; 0
   4CDC 00                  448 	.db #0x00	; 0
   4CDD 00                  449 	.db #0x00	; 0
   4CDE 00                  450 	.db #0x00	; 0
   4CDF 00                  451 	.db #0x00	; 0
   4CE0 00                  452 	.db #0x00	; 0
   4CE1 44                  453 	.db #0x44	; 68	'D'
   4CE2 CC                  454 	.db #0xcc	; 204
   4CE3 02                  455 	.db #0x02	; 2
   4CE4 FF                  456 	.db #0xff	; 255
   4CE5 FF                  457 	.db #0xff	; 255
   4CE6 AB                  458 	.db #0xab	; 171
   4CE7 FF                  459 	.db #0xff	; 255
   4CE8 57                  460 	.db #0x57	; 87	'W'
   4CE9 AB                  461 	.db #0xab	; 171
   4CEA FF                  462 	.db #0xff	; 255
   4CEB 57                  463 	.db #0x57	; 87	'W'
   4CEC AB                  464 	.db #0xab	; 171
   4CED 0F                  465 	.db #0x0f	; 15
   4CEE 0F                  466 	.db #0x0f	; 15
   4CEF 0B                  467 	.db #0x0b	; 11
   4CF0 0F                  468 	.db #0x0f	; 15
   4CF1 0F                  469 	.db #0x0f	; 15
   4CF2 0B                  470 	.db #0x0b	; 11
   4CF3 C3                  471 	.db #0xc3	; 195
   4CF4 43                  472 	.db #0x43	; 67	'C'
   4CF5 83                  473 	.db #0x83	; 131
   4CF6 C3                  474 	.db #0xc3	; 195
   4CF7 43                  475 	.db #0x43	; 67	'C'
   4CF8 83                  476 	.db #0x83	; 131
   4CF9 CC                  477 	.db #0xcc	; 204
   4CFA CC                  478 	.db #0xcc	; 204
   4CFB 02                  479 	.db #0x02	; 2
   4CFC FF                  480 	.db #0xff	; 255
   4CFD FF                  481 	.db #0xff	; 255
   4CFE AB                  482 	.db #0xab	; 171
   4CFF FF                  483 	.db #0xff	; 255
   4D00 57                  484 	.db #0x57	; 87	'W'
   4D01 AB                  485 	.db #0xab	; 171
   4D02 FF                  486 	.db #0xff	; 255
   4D03 FF                  487 	.db #0xff	; 255
   4D04 02                  488 	.db #0x02	; 2
   4D05 0F                  489 	.db #0x0f	; 15
   4D06 0F                  490 	.db #0x0f	; 15
   4D07 0B                  491 	.db #0x0b	; 11
   4D08 0F                  492 	.db #0x0f	; 15
   4D09 07                  493 	.db #0x07	; 7
   4D0A 0B                  494 	.db #0x0b	; 11
   4D0B C3                  495 	.db #0xc3	; 195
   4D0C C3                  496 	.db #0xc3	; 195
   4D0D 83                  497 	.db #0x83	; 131
   4D0E C3                  498 	.db #0xc3	; 195
   4D0F C3                  499 	.db #0xc3	; 195
   4D10 02                  500 	.db #0x02	; 2
   4D11 44                  501 	.db #0x44	; 68	'D'
   4D12 CC                  502 	.db #0xcc	; 204
   4D13 02                  503 	.db #0x02	; 2
   4D14 FF                  504 	.db #0xff	; 255
   4D15 FF                  505 	.db #0xff	; 255
   4D16 AB                  506 	.db #0xab	; 171
   4D17 FF                  507 	.db #0xff	; 255
   4D18 57                  508 	.db #0x57	; 87	'W'
   4D19 AB                  509 	.db #0xab	; 171
   4D1A FF                  510 	.db #0xff	; 255
   4D1B 02                  511 	.db #0x02	; 2
   4D1C 00                  512 	.db #0x00	; 0
   4D1D 0F                  513 	.db #0x0f	; 15
   4D1E 02                  514 	.db #0x02	; 2
   4D1F 00                  515 	.db #0x00	; 0
   4D20 0F                  516 	.db #0x0f	; 15
   4D21 07                  517 	.db #0x07	; 7
   4D22 0B                  518 	.db #0x0b	; 11
   4D23 C3                  519 	.db #0xc3	; 195
   4D24 C3                  520 	.db #0xc3	; 195
   4D25 83                  521 	.db #0x83	; 131
   4D26 41                  522 	.db #0x41	; 65	'A'
   4D27 C3                  523 	.db #0xc3	; 195
   4D28 02                  524 	.db #0x02	; 2
   4D29 CC                  525 	.db #0xcc	; 204
   4D2A 89                  526 	.db #0x89	; 137
   4D2B 00                  527 	.db #0x00	; 0
   4D2C FF                  528 	.db #0xff	; 255
   4D2D FF                  529 	.db #0xff	; 255
   4D2E 02                  530 	.db #0x02	; 2
   4D2F FF                  531 	.db #0xff	; 255
   4D30 57                  532 	.db #0x57	; 87	'W'
   4D31 AB                  533 	.db #0xab	; 171
   4D32 FF                  534 	.db #0xff	; 255
   4D33 57                  535 	.db #0x57	; 87	'W'
   4D34 AB                  536 	.db #0xab	; 171
   4D35 0F                  537 	.db #0x0f	; 15
   4D36 07                  538 	.db #0x07	; 7
   4D37 0B                  539 	.db #0x0b	; 11
   4D38 0F                  540 	.db #0x0f	; 15
   4D39 07                  541 	.db #0x07	; 7
   4D3A 0B                  542 	.db #0x0b	; 11
   4D3B C3                  543 	.db #0xc3	; 195
   4D3C C3                  544 	.db #0xc3	; 195
   4D3D 02                  545 	.db #0x02	; 2
   4D3E C3                  546 	.db #0xc3	; 195
   4D3F 83                  547 	.db #0x83	; 131
   4D40 00                  548 	.db #0x00	; 0
   4D41 CC                  549 	.db #0xcc	; 204
   4D42 CC                  550 	.db #0xcc	; 204
   4D43 89                  551 	.db #0x89	; 137
   4D44 FF                  552 	.db #0xff	; 255
   4D45 FF                  553 	.db #0xff	; 255
   4D46 AB                  554 	.db #0xab	; 171
   4D47 FF                  555 	.db #0xff	; 255
   4D48 02                  556 	.db #0x02	; 2
   4D49 00                  557 	.db #0x00	; 0
   4D4A FF                  558 	.db #0xff	; 255
   4D4B FF                  559 	.db #0xff	; 255
   4D4C 02                  560 	.db #0x02	; 2
   4D4D 0F                  561 	.db #0x0f	; 15
   4D4E 0F                  562 	.db #0x0f	; 15
   4D4F 02                  563 	.db #0x02	; 2
   4D50 0F                  564 	.db #0x0f	; 15
   4D51 02                  565 	.db #0x02	; 2
   4D52 00                  566 	.db #0x00	; 0
   4D53 C3                  567 	.db #0xc3	; 195
   4D54 C3                  568 	.db #0xc3	; 195
   4D55 83                  569 	.db #0x83	; 131
   4D56 C3                  570 	.db #0xc3	; 195
   4D57 C3                  571 	.db #0xc3	; 195
   4D58 83                  572 	.db #0x83	; 131
   4D59 CC                  573 	.db #0xcc	; 204
   4D5A CC                  574 	.db #0xcc	; 204
   4D5B 89                  575 	.db #0x89	; 137
   4D5C FF                  576 	.db #0xff	; 255
   4D5D FF                  577 	.db #0xff	; 255
   4D5E AB                  578 	.db #0xab	; 171
   4D5F FF                  579 	.db #0xff	; 255
   4D60 02                  580 	.db #0x02	; 2
   4D61 00                  581 	.db #0x00	; 0
   4D62 FF                  582 	.db #0xff	; 255
   4D63 FF                  583 	.db #0xff	; 255
   4D64 02                  584 	.db #0x02	; 2
   4D65 0F                  585 	.db #0x0f	; 15
   4D66 0F                  586 	.db #0x0f	; 15
   4D67 02                  587 	.db #0x02	; 2
   4D68 0F                  588 	.db #0x0f	; 15
   4D69 02                  589 	.db #0x02	; 2
   4D6A 00                  590 	.db #0x00	; 0
   4D6B C3                  591 	.db #0xc3	; 195
   4D6C 02                  592 	.db #0x02	; 2
   4D6D 00                  593 	.db #0x00	; 0
   4D6E C3                  594 	.db #0xc3	; 195
   4D6F 02                  595 	.db #0x02	; 2
   4D70 00                  596 	.db #0x00	; 0
   4D71 44                  597 	.db #0x44	; 68	'D'
   4D72 CC                  598 	.db #0xcc	; 204
   4D73 02                  599 	.db #0x02	; 2
   4D74 FF                  600 	.db #0xff	; 255
   4D75 FF                  601 	.db #0xff	; 255
   4D76 AB                  602 	.db #0xab	; 171
   4D77 FF                  603 	.db #0xff	; 255
   4D78 57                  604 	.db #0x57	; 87	'W'
   4D79 AB                  605 	.db #0xab	; 171
   4D7A FF                  606 	.db #0xff	; 255
   4D7B 02                  607 	.db #0x02	; 2
   4D7C 00                  608 	.db #0x00	; 0
   4D7D 0F                  609 	.db #0x0f	; 15
   4D7E 07                  610 	.db #0x07	; 7
   4D7F 0B                  611 	.db #0x0b	; 11
   4D80 0F                  612 	.db #0x0f	; 15
   4D81 02                  613 	.db #0x02	; 2
   4D82 0B                  614 	.db #0x0b	; 11
   4D83 C3                  615 	.db #0xc3	; 195
   4D84 C3                  616 	.db #0xc3	; 195
   4D85 83                  617 	.db #0x83	; 131
   4D86 41                  618 	.db #0x41	; 65	'A'
   4D87 C3                  619 	.db #0xc3	; 195
   4D88 02                  620 	.db #0x02	; 2
   4D89 CC                  621 	.db #0xcc	; 204
   4D8A 46                  622 	.db #0x46	; 70	'F'
   4D8B 89                  623 	.db #0x89	; 137
   4D8C FF                  624 	.db #0xff	; 255
   4D8D 57                  625 	.db #0x57	; 87	'W'
   4D8E AB                  626 	.db #0xab	; 171
   4D8F FF                  627 	.db #0xff	; 255
   4D90 57                  628 	.db #0x57	; 87	'W'
   4D91 AB                  629 	.db #0xab	; 171
   4D92 FF                  630 	.db #0xff	; 255
   4D93 FF                  631 	.db #0xff	; 255
   4D94 AB                  632 	.db #0xab	; 171
   4D95 0F                  633 	.db #0x0f	; 15
   4D96 0F                  634 	.db #0x0f	; 15
   4D97 0B                  635 	.db #0x0b	; 11
   4D98 0F                  636 	.db #0x0f	; 15
   4D99 03                  637 	.db #0x03	; 3
   4D9A 0B                  638 	.db #0x0b	; 11
   4D9B C3                  639 	.db #0xc3	; 195
   4D9C 43                  640 	.db #0x43	; 67	'C'
   4D9D 83                  641 	.db #0x83	; 131
   4D9E C3                  642 	.db #0xc3	; 195
   4D9F 43                  643 	.db #0x43	; 67	'C'
   4DA0 83                  644 	.db #0x83	; 131
   4DA1 44                  645 	.db #0x44	; 68	'D'
   4DA2 CC                  646 	.db #0xcc	; 204
   4DA3 89                  647 	.db #0x89	; 137
   4DA4 55                  648 	.db #0x55	; 85	'U'
   4DA5 FF                  649 	.db #0xff	; 255
   4DA6 AB                  650 	.db #0xab	; 171
   4DA7 00                  651 	.db #0x00	; 0
   4DA8 AB                  652 	.db #0xab	; 171
   4DA9 02                  653 	.db #0x02	; 2
   4DAA 00                  654 	.db #0x00	; 0
   4DAB FF                  655 	.db #0xff	; 255
   4DAC 02                  656 	.db #0x02	; 2
   4DAD 00                  657 	.db #0x00	; 0
   4DAE 0F                  658 	.db #0x0f	; 15
   4DAF 02                  659 	.db #0x02	; 2
   4DB0 00                  660 	.db #0x00	; 0
   4DB1 0F                  661 	.db #0x0f	; 15
   4DB2 02                  662 	.db #0x02	; 2
   4DB3 41                  663 	.db #0x41	; 65	'A'
   4DB4 C3                  664 	.db #0xc3	; 195
   4DB5 83                  665 	.db #0x83	; 131
   4DB6 41                  666 	.db #0x41	; 65	'A'
   4DB7 C3                  667 	.db #0xc3	; 195
   4DB8 83                  668 	.db #0x83	; 131
   4DB9 00                  669 	.db #0x00	; 0
   4DBA 44                  670 	.db #0x44	; 68	'D'
   4DBB 89                  671 	.db #0x89	; 137
   4DBC 00                  672 	.db #0x00	; 0
   4DBD 55                  673 	.db #0x55	; 85	'U'
   4DBE AB                  674 	.db #0xab	; 171
   4DBF 00                  675 	.db #0x00	; 0
   4DC0 55                  676 	.db #0x55	; 85	'U'
   4DC1 AB                  677 	.db #0xab	; 171
   4DC2 00                  678 	.db #0x00	; 0
   4DC3 55                  679 	.db #0x55	; 85	'U'
   4DC4 AB                  680 	.db #0xab	; 171
   4DC5 0F                  681 	.db #0x0f	; 15
   4DC6 07                  682 	.db #0x07	; 7
   4DC7 0B                  683 	.db #0x0b	; 11
   4DC8 0F                  684 	.db #0x0f	; 15
   4DC9 07                  685 	.db #0x07	; 7
   4DCA 0B                  686 	.db #0x0b	; 11
   4DCB C3                  687 	.db #0xc3	; 195
   4DCC C3                  688 	.db #0xc3	; 195
   4DCD 83                  689 	.db #0x83	; 131
   4DCE 41                  690 	.db #0x41	; 65	'A'
   4DCF C3                  691 	.db #0xc3	; 195
   4DD0 02                  692 	.db #0x02	; 2
   4DD1 CC                  693 	.db #0xcc	; 204
   4DD2 46                  694 	.db #0x46	; 70	'F'
   4DD3 89                  695 	.db #0x89	; 137
   4DD4 FF                  696 	.db #0xff	; 255
   4DD5 57                  697 	.db #0x57	; 87	'W'
   4DD6 AB                  698 	.db #0xab	; 171
   4DD7 FF                  699 	.db #0xff	; 255
   4DD8 57                  700 	.db #0x57	; 87	'W'
   4DD9 02                  701 	.db #0x02	; 2
   4DDA FF                  702 	.db #0xff	; 255
   4DDB AB                  703 	.db #0xab	; 171
   4DDC 00                  704 	.db #0x00	; 0
   4DDD 0F                  705 	.db #0x0f	; 15
   4DDE 0B                  706 	.db #0x0b	; 11
   4DDF 00                  707 	.db #0x00	; 0
   4DE0 0F                  708 	.db #0x0f	; 15
   4DE1 07                  709 	.db #0x07	; 7
   4DE2 02                  710 	.db #0x02	; 2
   4DE3 C3                  711 	.db #0xc3	; 195
   4DE4 43                  712 	.db #0x43	; 67	'C'
   4DE5 83                  713 	.db #0x83	; 131
   4DE6 C3                  714 	.db #0xc3	; 195
   4DE7 43                  715 	.db #0x43	; 67	'C'
   4DE8 83                  716 	.db #0x83	; 131
   4DE9 CC                  717 	.db #0xcc	; 204
   4DEA 02                  718 	.db #0x02	; 2
   4DEB 00                  719 	.db #0x00	; 0
   4DEC FF                  720 	.db #0xff	; 255
   4DED 02                  721 	.db #0x02	; 2
   4DEE 00                  722 	.db #0x00	; 0
   4DEF FF                  723 	.db #0xff	; 255
   4DF0 02                  724 	.db #0x02	; 2
   4DF1 00                  725 	.db #0x00	; 0
   4DF2 FF                  726 	.db #0xff	; 255
   4DF3 02                  727 	.db #0x02	; 2
   4DF4 00                  728 	.db #0x00	; 0
   4DF5 0F                  729 	.db #0x0f	; 15
   4DF6 02                  730 	.db #0x02	; 2
   4DF7 00                  731 	.db #0x00	; 0
   4DF8 0F                  732 	.db #0x0f	; 15
   4DF9 02                  733 	.db #0x02	; 2
   4DFA 00                  734 	.db #0x00	; 0
   4DFB C3                  735 	.db #0xc3	; 195
   4DFC C3                  736 	.db #0xc3	; 195
   4DFD 83                  737 	.db #0x83	; 131
   4DFE C3                  738 	.db #0xc3	; 195
   4DFF C3                  739 	.db #0xc3	; 195
   4E00 83                  740 	.db #0x83	; 131
   4E01 89                  741 	.db #0x89	; 137
   4E02 00                  742 	.db #0x00	; 0
   4E03 89                  743 	.db #0x89	; 137
   4E04 FF                  744 	.db #0xff	; 255
   4E05 57                  745 	.db #0x57	; 87	'W'
   4E06 AB                  746 	.db #0xab	; 171
   4E07 FF                  747 	.db #0xff	; 255
   4E08 FF                  748 	.db #0xff	; 255
   4E09 AB                  749 	.db #0xab	; 171
   4E0A AB                  750 	.db #0xab	; 171
   4E0B AB                  751 	.db #0xab	; 171
   4E0C AB                  752 	.db #0xab	; 171
   4E0D 0B                  753 	.db #0x0b	; 11
   4E0E 0B                  754 	.db #0x0b	; 11
   4E0F 0B                  755 	.db #0x0b	; 11
   4E10 0B                  756 	.db #0x0b	; 11
   4E11 00                  757 	.db #0x00	; 0
   4E12 0B                  758 	.db #0x0b	; 11
   4E13 83                  759 	.db #0x83	; 131
   4E14 00                  760 	.db #0x00	; 0
   4E15 83                  761 	.db #0x83	; 131
   4E16 83                  762 	.db #0x83	; 131
   4E17 00                  763 	.db #0x00	; 0
   4E18 83                  764 	.db #0x83	; 131
   4E19 89                  765 	.db #0x89	; 137
   4E1A 44                  766 	.db #0x44	; 68	'D'
   4E1B 89                  767 	.db #0x89	; 137
   4E1C AB                  768 	.db #0xab	; 171
   4E1D 55                  769 	.db #0x55	; 85	'U'
   4E1E AB                  770 	.db #0xab	; 171
   4E1F FF                  771 	.db #0xff	; 255
   4E20 57                  772 	.db #0x57	; 87	'W'
   4E21 AB                  773 	.db #0xab	; 171
   4E22 FF                  774 	.db #0xff	; 255
   4E23 FF                  775 	.db #0xff	; 255
   4E24 AB                  776 	.db #0xab	; 171
   4E25 0B                  777 	.db #0x0b	; 11
   4E26 0F                  778 	.db #0x0f	; 15
   4E27 0B                  779 	.db #0x0b	; 11
   4E28 0B                  780 	.db #0x0b	; 11
   4E29 05                  781 	.db #0x05	; 5
   4E2A 0B                  782 	.db #0x0b	; 11
   4E2B 83                  783 	.db #0x83	; 131
   4E2C 41                  784 	.db #0x41	; 65	'A'
   4E2D 83                  785 	.db #0x83	; 131
   4E2E 83                  786 	.db #0x83	; 131
   4E2F 41                  787 	.db #0x41	; 65	'A'
   4E30 83                  788 	.db #0x83	; 131
   4E31 44                  789 	.db #0x44	; 68	'D'
   4E32 CC                  790 	.db #0xcc	; 204
   4E33 02                  791 	.db #0x02	; 2
   4E34 FF                  792 	.db #0xff	; 255
   4E35 FF                  793 	.db #0xff	; 255
   4E36 AB                  794 	.db #0xab	; 171
   4E37 FF                  795 	.db #0xff	; 255
   4E38 57                  796 	.db #0x57	; 87	'W'
   4E39 AB                  797 	.db #0xab	; 171
   4E3A FF                  798 	.db #0xff	; 255
   4E3B 57                  799 	.db #0x57	; 87	'W'
   4E3C AB                  800 	.db #0xab	; 171
   4E3D 0F                  801 	.db #0x0f	; 15
   4E3E 07                  802 	.db #0x07	; 7
   4E3F 0B                  803 	.db #0x0b	; 11
   4E40 0F                  804 	.db #0x0f	; 15
   4E41 07                  805 	.db #0x07	; 7
   4E42 0B                  806 	.db #0x0b	; 11
   4E43 C3                  807 	.db #0xc3	; 195
   4E44 C3                  808 	.db #0xc3	; 195
   4E45 83                  809 	.db #0x83	; 131
   4E46 41                  810 	.db #0x41	; 65	'A'
   4E47 C3                  811 	.db #0xc3	; 195
   4E48 02                  812 	.db #0x02	; 2
   4E49 CC                  813 	.db #0xcc	; 204
   4E4A CC                  814 	.db #0xcc	; 204
   4E4B 02                  815 	.db #0x02	; 2
   4E4C FF                  816 	.db #0xff	; 255
   4E4D FF                  817 	.db #0xff	; 255
   4E4E AB                  818 	.db #0xab	; 171
   4E4F FF                  819 	.db #0xff	; 255
   4E50 57                  820 	.db #0x57	; 87	'W'
   4E51 AB                  821 	.db #0xab	; 171
   4E52 FF                  822 	.db #0xff	; 255
   4E53 FF                  823 	.db #0xff	; 255
   4E54 AB                  824 	.db #0xab	; 171
   4E55 0F                  825 	.db #0x0f	; 15
   4E56 0F                  826 	.db #0x0f	; 15
   4E57 02                  827 	.db #0x02	; 2
   4E58 0B                  828 	.db #0x0b	; 11
   4E59 02                  829 	.db #0x02	; 2
   4E5A 00                  830 	.db #0x00	; 0
   4E5B C3                  831 	.db #0xc3	; 195
   4E5C 02                  832 	.db #0x02	; 2
   4E5D 00                  833 	.db #0x00	; 0
   4E5E C3                  834 	.db #0xc3	; 195
   4E5F 02                  835 	.db #0x02	; 2
   4E60 00                  836 	.db #0x00	; 0
   4E61 44                  837 	.db #0x44	; 68	'D'
   4E62 CC                  838 	.db #0xcc	; 204
   4E63 02                  839 	.db #0x02	; 2
   4E64 FF                  840 	.db #0xff	; 255
   4E65 FF                  841 	.db #0xff	; 255
   4E66 AB                  842 	.db #0xab	; 171
   4E67 FF                  843 	.db #0xff	; 255
   4E68 02                  844 	.db #0x02	; 2
   4E69 AB                  845 	.db #0xab	; 171
   4E6A FF                  846 	.db #0xff	; 255
   4E6B 02                  847 	.db #0x02	; 2
   4E6C AB                  848 	.db #0xab	; 171
   4E6D 0F                  849 	.db #0x0f	; 15
   4E6E 02                  850 	.db #0x02	; 2
   4E6F 0B                  851 	.db #0x0b	; 11
   4E70 0F                  852 	.db #0x0f	; 15
   4E71 07                  853 	.db #0x07	; 7
   4E72 0B                  854 	.db #0x0b	; 11
   4E73 C3                  855 	.db #0xc3	; 195
   4E74 C3                  856 	.db #0xc3	; 195
   4E75 83                  857 	.db #0x83	; 131
   4E76 41                  858 	.db #0x41	; 65	'A'
   4E77 C3                  859 	.db #0xc3	; 195
   4E78 C3                  860 	.db #0xc3	; 195
   4E79 CC                  861 	.db #0xcc	; 204
   4E7A CC                  862 	.db #0xcc	; 204
   4E7B 02                  863 	.db #0x02	; 2
   4E7C FF                  864 	.db #0xff	; 255
   4E7D FF                  865 	.db #0xff	; 255
   4E7E AB                  866 	.db #0xab	; 171
   4E7F FF                  867 	.db #0xff	; 255
   4E80 57                  868 	.db #0x57	; 87	'W'
   4E81 AB                  869 	.db #0xab	; 171
   4E82 FF                  870 	.db #0xff	; 255
   4E83 FF                  871 	.db #0xff	; 255
   4E84 AB                  872 	.db #0xab	; 171
   4E85 0F                  873 	.db #0x0f	; 15
   4E86 0F                  874 	.db #0x0f	; 15
   4E87 02                  875 	.db #0x02	; 2
   4E88 0B                  876 	.db #0x0b	; 11
   4E89 0B                  877 	.db #0x0b	; 11
   4E8A 00                  878 	.db #0x00	; 0
   4E8B C3                  879 	.db #0xc3	; 195
   4E8C 43                  880 	.db #0x43	; 67	'C'
   4E8D 02                  881 	.db #0x02	; 2
   4E8E C3                  882 	.db #0xc3	; 195
   4E8F 43                  883 	.db #0x43	; 67	'C'
   4E90 83                  884 	.db #0x83	; 131
   4E91 44                  885 	.db #0x44	; 68	'D'
   4E92 CC                  886 	.db #0xcc	; 204
   4E93 89                  887 	.db #0x89	; 137
   4E94 FF                  888 	.db #0xff	; 255
   4E95 FF                  889 	.db #0xff	; 255
   4E96 AB                  890 	.db #0xab	; 171
   4E97 FF                  891 	.db #0xff	; 255
   4E98 02                  892 	.db #0x02	; 2
   4E99 00                  893 	.db #0x00	; 0
   4E9A FF                  894 	.db #0xff	; 255
   4E9B FF                  895 	.db #0xff	; 255
   4E9C 02                  896 	.db #0x02	; 2
   4E9D 05                  897 	.db #0x05	; 5
   4E9E 0F                  898 	.db #0x0f	; 15
   4E9F 0B                  899 	.db #0x0b	; 11
   4EA0 00                  900 	.db #0x00	; 0
   4EA1 05                  901 	.db #0x05	; 5
   4EA2 0B                  902 	.db #0x0b	; 11
   4EA3 C3                  903 	.db #0xc3	; 195
   4EA4 C3                  904 	.db #0xc3	; 195
   4EA5 83                  905 	.db #0x83	; 131
   4EA6 C3                  906 	.db #0xc3	; 195
   4EA7 C3                  907 	.db #0xc3	; 195
   4EA8 02                  908 	.db #0x02	; 2
   4EA9 CC                  909 	.db #0xcc	; 204
   4EAA CC                  910 	.db #0xcc	; 204
   4EAB 89                  911 	.db #0x89	; 137
   4EAC FF                  912 	.db #0xff	; 255
   4EAD FF                  913 	.db #0xff	; 255
   4EAE AB                  914 	.db #0xab	; 171
   4EAF 00                  915 	.db #0x00	; 0
   4EB0 AB                  916 	.db #0xab	; 171
   4EB1 02                  917 	.db #0x02	; 2
   4EB2 00                  918 	.db #0x00	; 0
   4EB3 FF                  919 	.db #0xff	; 255
   4EB4 02                  920 	.db #0x02	; 2
   4EB5 00                  921 	.db #0x00	; 0
   4EB6 0F                  922 	.db #0x0f	; 15
   4EB7 02                  923 	.db #0x02	; 2
   4EB8 00                  924 	.db #0x00	; 0
   4EB9 0F                  925 	.db #0x0f	; 15
   4EBA 02                  926 	.db #0x02	; 2
   4EBB 00                  927 	.db #0x00	; 0
   4EBC C3                  928 	.db #0xc3	; 195
   4EBD 02                  929 	.db #0x02	; 2
   4EBE 00                  930 	.db #0x00	; 0
   4EBF C3                  931 	.db #0xc3	; 195
   4EC0 02                  932 	.db #0x02	; 2
   4EC1 CC                  933 	.db #0xcc	; 204
   4EC2 46                  934 	.db #0x46	; 70	'F'
   4EC3 89                  935 	.db #0x89	; 137
   4EC4 FF                  936 	.db #0xff	; 255
   4EC5 57                  937 	.db #0x57	; 87	'W'
   4EC6 AB                  938 	.db #0xab	; 171
   4EC7 FF                  939 	.db #0xff	; 255
   4EC8 57                  940 	.db #0x57	; 87	'W'
   4EC9 AB                  941 	.db #0xab	; 171
   4ECA FF                  942 	.db #0xff	; 255
   4ECB 57                  943 	.db #0x57	; 87	'W'
   4ECC AB                  944 	.db #0xab	; 171
   4ECD 0F                  945 	.db #0x0f	; 15
   4ECE 07                  946 	.db #0x07	; 7
   4ECF 0B                  947 	.db #0x0b	; 11
   4ED0 0F                  948 	.db #0x0f	; 15
   4ED1 07                  949 	.db #0x07	; 7
   4ED2 0B                  950 	.db #0x0b	; 11
   4ED3 C3                  951 	.db #0xc3	; 195
   4ED4 C3                  952 	.db #0xc3	; 195
   4ED5 83                  953 	.db #0x83	; 131
   4ED6 41                  954 	.db #0x41	; 65	'A'
   4ED7 C3                  955 	.db #0xc3	; 195
   4ED8 02                  956 	.db #0x02	; 2
   4ED9 CC                  957 	.db #0xcc	; 204
   4EDA 46                  958 	.db #0x46	; 70	'F'
   4EDB 89                  959 	.db #0x89	; 137
   4EDC FF                  960 	.db #0xff	; 255
   4EDD 57                  961 	.db #0x57	; 87	'W'
   4EDE AB                  962 	.db #0xab	; 171
   4EDF FF                  963 	.db #0xff	; 255
   4EE0 57                  964 	.db #0x57	; 87	'W'
   4EE1 AB                  965 	.db #0xab	; 171
   4EE2 FF                  966 	.db #0xff	; 255
   4EE3 57                  967 	.db #0x57	; 87	'W'
   4EE4 AB                  968 	.db #0xab	; 171
   4EE5 0F                  969 	.db #0x0f	; 15
   4EE6 07                  970 	.db #0x07	; 7
   4EE7 0B                  971 	.db #0x0b	; 11
   4EE8 05                  972 	.db #0x05	; 5
   4EE9 07                  973 	.db #0x07	; 7
   4EEA 02                  974 	.db #0x02	; 2
   4EEB 41                  975 	.db #0x41	; 65	'A'
   4EEC C3                  976 	.db #0xc3	; 195
   4EED 02                  977 	.db #0x02	; 2
   4EEE 00                  978 	.db #0x00	; 0
   4EEF 83                  979 	.db #0x83	; 131
   4EF0 00                  980 	.db #0x00	; 0
   4EF1 89                  981 	.db #0x89	; 137
   4EF2 00                  982 	.db #0x00	; 0
   4EF3 89                  983 	.db #0x89	; 137
   4EF4 AB                  984 	.db #0xab	; 171
   4EF5 00                  985 	.db #0x00	; 0
   4EF6 AB                  986 	.db #0xab	; 171
   4EF7 AB                  987 	.db #0xab	; 171
   4EF8 00                  988 	.db #0x00	; 0
   4EF9 AB                  989 	.db #0xab	; 171
   4EFA AB                  990 	.db #0xab	; 171
   4EFB AB                  991 	.db #0xab	; 171
   4EFC AB                  992 	.db #0xab	; 171
   4EFD 0B                  993 	.db #0x0b	; 11
   4EFE 0B                  994 	.db #0x0b	; 11
   4EFF 0B                  995 	.db #0x0b	; 11
   4F00 0F                  996 	.db #0x0f	; 15
   4F01 0F                  997 	.db #0x0f	; 15
   4F02 0B                  998 	.db #0x0b	; 11
   4F03 C3                  999 	.db #0xc3	; 195
   4F04 C3                 1000 	.db #0xc3	; 195
   4F05 83                 1001 	.db #0x83	; 131
   4F06 41                 1002 	.db #0x41	; 65	'A'
   4F07 43                 1003 	.db #0x43	; 67	'C'
   4F08 02                 1004 	.db #0x02	; 2
   4F09 CC                 1005 	.db #0xcc	; 204
   4F0A 46                 1006 	.db #0x46	; 70	'F'
   4F0B 89                 1007 	.db #0x89	; 137
   4F0C FF                 1008 	.db #0xff	; 255
   4F0D 57                 1009 	.db #0x57	; 87	'W'
   4F0E AB                 1010 	.db #0xab	; 171
   4F0F 55                 1011 	.db #0x55	; 85	'U'
   4F10 FF                 1012 	.db #0xff	; 255
   4F11 02                 1013 	.db #0x02	; 2
   4F12 00                 1014 	.db #0x00	; 0
   4F13 AB                 1015 	.db #0xab	; 171
   4F14 00                 1016 	.db #0x00	; 0
   4F15 05                 1017 	.db #0x05	; 5
   4F16 0F                 1018 	.db #0x0f	; 15
   4F17 02                 1019 	.db #0x02	; 2
   4F18 0F                 1020 	.db #0x0f	; 15
   4F19 07                 1021 	.db #0x07	; 7
   4F1A 0B                 1022 	.db #0x0b	; 11
   4F1B C3                 1023 	.db #0xc3	; 195
   4F1C 43                 1024 	.db #0x43	; 67	'C'
   4F1D 83                 1025 	.db #0x83	; 131
   4F1E C3                 1026 	.db #0xc3	; 195
   4F1F 43                 1027 	.db #0x43	; 67	'C'
   4F20 83                 1028 	.db #0x83	; 131
   4F21 CC                 1029 	.db #0xcc	; 204
   4F22 46                 1030 	.db #0x46	; 70	'F'
   4F23 89                 1031 	.db #0x89	; 137
   4F24 FF                 1032 	.db #0xff	; 255
   4F25 57                 1033 	.db #0x57	; 87	'W'
   4F26 AB                 1034 	.db #0xab	; 171
   4F27 FF                 1035 	.db #0xff	; 255
   4F28 57                 1036 	.db #0x57	; 87	'W'
   4F29 AB                 1037 	.db #0xab	; 171
   4F2A 55                 1038 	.db #0x55	; 85	'U'
   4F2B FF                 1039 	.db #0xff	; 255
   4F2C 02                 1040 	.db #0x02	; 2
   4F2D 05                 1041 	.db #0x05	; 5
   4F2E 0F                 1042 	.db #0x0f	; 15
   4F2F 02                 1043 	.db #0x02	; 2
   4F30 00                 1044 	.db #0x00	; 0
   4F31 0B                 1045 	.db #0x0b	; 11
   4F32 00                 1046 	.db #0x00	; 0
   4F33 00                 1047 	.db #0x00	; 0
   4F34 83                 1048 	.db #0x83	; 131
   4F35 00                 1049 	.db #0x00	; 0
   4F36 00                 1050 	.db #0x00	; 0
   4F37 83                 1051 	.db #0x83	; 131
   4F38 00                 1052 	.db #0x00	; 0
   4F39 CC                 1053 	.db #0xcc	; 204
   4F3A CC                 1054 	.db #0xcc	; 204
   4F3B 89                 1055 	.db #0x89	; 137
   4F3C FF                 1056 	.db #0xff	; 255
   4F3D FF                 1057 	.db #0xff	; 255
   4F3E AB                 1058 	.db #0xab	; 171
   4F3F 00                 1059 	.db #0x00	; 0
   4F40 55                 1060 	.db #0x55	; 85	'U'
   4F41 AB                 1061 	.db #0xab	; 171
   4F42 00                 1062 	.db #0x00	; 0
   4F43 FF                 1063 	.db #0xff	; 255
   4F44 02                 1064 	.db #0x02	; 2
   4F45 05                 1065 	.db #0x05	; 5
   4F46 0B                 1066 	.db #0x0b	; 11
   4F47 00                 1067 	.db #0x00	; 0
   4F48 0F                 1068 	.db #0x0f	; 15
   4F49 02                 1069 	.db #0x02	; 2
   4F4A 00                 1070 	.db #0x00	; 0
   4F4B C3                 1071 	.db #0xc3	; 195
   4F4C C3                 1072 	.db #0xc3	; 195
   4F4D 83                 1073 	.db #0x83	; 131
   4F4E C3                 1074 	.db #0xc3	; 195
   4F4F C3                 1075 	.db #0xc3	; 195
   4F50 83                 1076 	.db #0x83	; 131
   4F51 00                 1077 	.db #0x00	; 0
   4F52 00                 1078 	.db #0x00	; 0
   4F53 00                 1079 	.db #0x00	; 0
   4F54 00                 1080 	.db #0x00	; 0
   4F55 00                 1081 	.db #0x00	; 0
   4F56 00                 1082 	.db #0x00	; 0
   4F57 00                 1083 	.db #0x00	; 0
   4F58 00                 1084 	.db #0x00	; 0
   4F59 00                 1085 	.db #0x00	; 0
   4F5A 00                 1086 	.db #0x00	; 0
   4F5B 00                 1087 	.db #0x00	; 0
   4F5C 00                 1088 	.db #0x00	; 0
   4F5D 05                 1089 	.db #0x05	; 5
   4F5E 0B                 1090 	.db #0x0b	; 11
   4F5F 00                 1091 	.db #0x00	; 0
   4F60 05                 1092 	.db #0x05	; 5
   4F61 0B                 1093 	.db #0x0b	; 11
   4F62 00                 1094 	.db #0x00	; 0
   4F63 41                 1095 	.db #0x41	; 65	'A'
   4F64 02                 1096 	.db #0x02	; 2
   4F65 00                 1097 	.db #0x00	; 0
   4F66 41                 1098 	.db #0x41	; 65	'A'
   4F67 02                 1099 	.db #0x02	; 2
   4F68 00                 1100 	.db #0x00	; 0
                           1101 	.area _INITIALIZER
                           1102 	.area _CABS (ABS)
