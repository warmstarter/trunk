typedef struct tzone_mush {
   const char *mush_tzone;
   const char *mush_tname;
   const char *mush_ttype;
   int mush_offset;
   int mush_tz;
} TZONE_MUSH;

TZONE_MUSH timezone_list[]={
   {(char *)"A", (char *)"Alpha Time Zone", (char *)"Military", 3600, 0},
   {(char *)"ADT", (char *)"Atlantic Daylight Time", (char *)"Atlantic", -10800, 1},
   {(char *)"ADT1", (char *)"Atlantic Daylight Time", (char *)"North America", -10800, 1},
   {(char *)"AFT", (char *)"Afghanistan Time", (char *)"Asia", 16200.0, 0},
   {(char *)"AKDT", (char *)"Alaska Daylight Time", (char *)"North America", -28800, 1},
   {(char *)"AKST", (char *)"Alaska Standard Time", (char *)"North America", -32400, 1},
   {(char *)"ALMT", (char *)"Alma-Ata Time", (char *)"Asia", 21600, 0},
   {(char *)"AMST", (char *)"Amazon Summer Time", (char *)"South America", -10800, 1},
   {(char *)"AMST1", (char *)"Armenia Summer Time", (char *)"Asia", 18000, 0},
   {(char *)"AMT", (char *)"Amazon Time", (char *)"South America", -14400, 0},
   {(char *)"AMT1", (char *)"Armenia Time", (char *)"Asia", 14400, 0},
   {(char *)"ANAST", (char *)"Anadyr Summer Time", (char *)"Asia", 43200, 0},
   {(char *)"ANAT", (char *)"Anadyr Time", (char *)"Asia", 43200, 0},
   {(char *)"AQTT", (char *)"Aqtobe Time", (char *)"Asia", 18000, 0},
   {(char *)"ART", (char *)"Argentina Time", (char *)"South America", -10800, 0},
   {(char *)"AST", (char *)"Atlantic Standard Time", (char *)"Atlantic", -14400, 0},
   {(char *)"AST1", (char *)"Atlantic Standard Time", (char *)"Caribbean", -14400, 0},
   {(char *)"AST2", (char *)"Atlantic Standard Time", (char *)"North America", -14400, 0},
   {(char *)"AST3", (char *)"Arabia Standard Time", (char *)"Asia", 10800, 0},
   {(char *)"AWST", (char *)"Australian Western Standard Time", (char *)"Australia", 28800, 1},
   {(char *)"AZOST", (char *)"Azores Summer Time", (char *)"Atlantic", 0, 0},
   {(char *)"AZOT", (char *)"Azores Time", (char *)"Atlantic", -3600, 1},
   {(char *)"AZST", (char *)"Azerbaijan Summer Time", (char *)"Asia", 18000, 0},
   {(char *)"AZT", (char *)"Azerbaijan Time", (char *)"Asia", 14400, 0},
   {(char *)"B", (char *)"Bravo Time Zone", (char *)"Military", 7200, 0},
   {(char *)"BNT", (char *)"Brunei Darussalam Time", (char *)"Asia", 28800, 0},
   {(char *)"BOT", (char *)"Bolivia Time", (char *)"South America", -14400, 1},
   {(char *)"BRST", (char *)"Brasilia Summer Time", (char *)"South America", -7200, 1},
   {(char *)"BRT", (char *)"Brasilia Time", (char *)"South America", -10800, 1},
   {(char *)"BST", (char *)"British Summer Time", (char *)"Europe", 3600, 1},
   {(char *)"BST1", (char *)"Bangladesh Standard Time", (char *)"Asia", 21600, 0},
   {(char *)"BTT", (char *)"Bhutan Time", (char *)"Asia", 21600, 0},
   {(char *)"C", (char *)"Charlie Time Zone", (char *)"Military", 10800, 0},
   {(char *)"CAST", (char *)"Casey Time", (char *)"Antarctica", 28800, 1},
   {(char *)"CAT", (char *)"Central Africa Time", (char *)"Africa", 7200, 0},
   {(char *)"CCT", (char *)"Cocos Islands Time", (char *)"Indian Ocean", 23400.0, 0},
   {(char *)"CDT", (char *)"Central Daylight Time", (char *)"North America", -18000, 1},
   {(char *)"CDT1", (char *)"Central Daylight Time", (char *)"Australia", 37800.0, 1},
   {(char *)"CDT2", (char *)"Cuba Daylight Time", (char *)"Caribbean", -14400, 1},
   {(char *)"CEST", (char *)"Central European Summer Time", (char *)"Europe", 7200, 1},
   {(char *)"CET", (char *)"Central European Time", (char *)"Europe", 3600, 1},
   {(char *)"CET1", (char *)"Central European Time", (char *)"Africa", 3600, 0},
   {(char *)"CHADT", (char *)"Chatham Island Daylight Time", (char *)"Pacific", 49500.00, 1},
   {(char *)"CHAST", (char *)"Chatham Island Standard Time", (char *)"Pacific", 45900.00, 1},
   {(char *)"CKT", (char *)"Cook Island Time", (char *)"Pacific", -36000, 1},
   {(char *)"CLST", (char *)"Chile Summer Time", (char *)"South America", -10800, 1},
   {(char *)"CLT", (char *)"Chile Standard Time", (char *)"South America", -14400, 1},
   {(char *)"COT", (char *)"Colombia Time", (char *)"South America", -18000, 0},
   {(char *)"CST", (char *)"Central Standard Time", (char *)"North America", -21600, 1},
   {(char *)"CST1", (char *)"Central Standard Time", (char *)"Central America", -21600, 0},
   {(char *)"CST2", (char *)"Central Standard Time", (char *)"Australia", 34200.0, 0},
   {(char *)"CST3", (char *)"China Standard Time", (char *)"Asia", 28800, 0},
   {(char *)"CST4", (char *)"Cuba Standard Time", (char *)"Caribbean", -18000, 0},
   {(char *)"CVT", (char *)"Cape Verde Time", (char *)"Africa", -3600, 0},
   {(char *)"CXT", (char *)"Christmas Island Time", (char *)"Australia", 25200, 1},
   {(char *)"ChST", (char *)"Chamorro Standard Time", (char *)"Pacific", 36000, 0},
   {(char *)"D", (char *)"Delta Time Zone", (char *)"Military", 14400, 0},
   {(char *)"DAVT", (char *)"Davis Time", (char *)"Antarctica", 25200, 0},
   {(char *)"E", (char *)"Echo Time Zone", (char *)"Military", 18000, 0},
   {(char *)"EASST", (char *)"Easter Island Summer Time", (char *)"Pacific", -18000, 1},
   {(char *)"EAST", (char *)"Easter Island Standard Time", (char *)"Pacific", -21600, 0},
   {(char *)"EAT", (char *)"Eastern Africa Time", (char *)"Africa", 10800, 0},
   {(char *)"EAT1", (char *)"East Africa Time", (char *)"Indian Ocean", 10800, 0},
   {(char *)"ECT", (char *)"Ecuador Time", (char *)"South America", -18000, 0},
   {(char *)"EDT", (char *)"Eastern Daylight Time", (char *)"North America", -14400, 1},
   {(char *)"EDT1", (char *)"Eastern Daylight Time", (char *)"Pacific", 39600, 1},
   {(char *)"EDT2", (char *)"Eastern Daylight Time", (char *)"Australia", 39600, 1},
   {(char *)"EDT3", (char *)"Eastern Daylight Time", (char *)"Caribbean", -14400, 1},
   {(char *)"EEST", (char *)"Eastern European Summer Time", (char *)"Europe", 10800, 1},
   {(char *)"EEST1", (char *)"Eastern European Summer Time", (char *)"Africa", 10800, 1},
   {(char *)"EEST2", (char *)"Eastern European Summer Time", (char *)"Asia", 10800, 0},
   {(char *)"EET", (char *)"Eastern European Time", (char *)"Europe", 7200, 0},
   {(char *)"EET1", (char *)"Eastern European Time", (char *)"Africa", 7200, 1},
   {(char *)"EET2", (char *)"Eastern European Time", (char *)"Asia", 7200, 0},
   {(char *)"EGST", (char *)"Eastern Greenland Summer Time", (char *)"North America", 0, 0},
   {(char *)"EGT", (char *)"East Greenland Time", (char *)"North America", -3600, 1},
   {(char *)"EST", (char *)"Eastern Standard Time", (char *)"North America", -18000, 1},
   {(char *)"EST1", (char *)"Eastern Standard Time", (char *)"Central America", -18000, 1},
   {(char *)"EST2", (char *)"Eastern Standard Time", (char *)"Australia", 36000, 1},
   {(char *)"EST3", (char *)"Eastern Standard Time", (char *)"Caribbean", -18000, 1},
   {(char *)"ET", (char *)"Tiempo del Este", (char *)"North America", -18000, 1},
   {(char *)"ET1", (char *)"Tiempo del Este", (char *)"Central America", -18000, 1},
   {(char *)"ET2", (char *)"Tiempo del Este", (char *)"Caribbean", -18000, 1},
   {(char *)"F", (char *)"Foxtrot Time Zone", (char *)"Military", 21600, 0},
   {(char *)"FJST", (char *)"Fiji Summer Time", (char *)"Pacific", 46800, 1},
   {(char *)"FJT", (char *)"Fiji Time", (char *)"Pacific", 43200, 1},
   {(char *)"FKST", (char *)"Falkland Islands Summer Time", (char *)"South America", -10800, 0},
   {(char *)"FKT", (char *)"Falkland Island Time", (char *)"South America", -14400, 1},
   {(char *)"FNT", (char *)"Fernando de Noronha Time", (char *)"South America", -7200, 0},
   {(char *)"G", (char *)"Golf Time Zone", (char *)"Military", 25200, 0},
   {(char *)"GALT", (char *)"Galapagos Time", (char *)"Pacific", -21600, 0},
   {(char *)"GAMT", (char *)"Gambier Time", (char *)"Pacific", -32400, 0},
   {(char *)"GET", (char *)"Georgia Standard Time", (char *)"Asia", 14400, 0},
   {(char *)"GFT", (char *)"French Guiana Time", (char *)"South America", -10800, 0},
   {(char *)"GILT", (char *)"Gilbert Island Time", (char *)"Pacific", 43200, 0},
   {(char *)"GMT", (char *)"Greenwich Mean Time", (char *)"Europe", 0, 0},
   {(char *)"GMT1", (char *)"Greenwich Mean Time", (char *)"Africa", 0, 0},
   {(char *)"GST", (char *)"Gulf Standard Time", (char *)"Asia", 14400, 0},
   {(char *)"GYT", (char *)"Guyana Time", (char *)"South America", -14400, 0},
   {(char *)"H", (char *)"Hotel Time Zone", (char *)"Military", 28800, 0},
   {(char *)"HAA", (char *)"Heure Avancee de l'Atlantique", (char *)"North America", -10800, 1},
   {(char *)"HAA1", (char *)"Heure Avancee de l'Atlantique", (char *)"Atlantic", -10800, 1},
   {(char *)"HAC", (char *)"Heure Avancee du Centre", (char *)"North America", -18000, 1},
   {(char *)"HADT", (char *)"Hawaii-Aleutian Daylight Time", (char *)"North America", -32400, 1},
   {(char *)"HAE", (char *)"Heure Avancee de l'Est ", (char *)"North America", -14400, 1},
   {(char *)"HAE1", (char *)"Heure Avancee de l'Est ", (char *)"Caribbean", -14400, 1},
   {(char *)"HAP", (char *)"Heure Avancee du Pacifique", (char *)"North America", -25200, 1},
   {(char *)"HAR", (char *)"Heure Avancee des Rocheuses", (char *)"North America", -21600, 1},
   {(char *)"HAST", (char *)"Hawaii-Aleutian Standard Time", (char *)"North America", -36000, 1},
   {(char *)"HAT", (char *)"Heure Avancee de Terre-Neuve", (char *)"North America", -9000.0, 1},
   {(char *)"HAY", (char *)"Heure Avancee du Yukon", (char *)"North America", -28800, 1},
   {(char *)"HKT", (char *)"Hong Kong Time", (char *)"Asia", 28800, 0},
   {(char *)"HLV", (char *)"Hora Legal de Venezuela", (char *)"South America", -16200.0, 1},
   {(char *)"HNA", (char *)"Heure Normale de l'Atlantique", (char *)"North America", -14400, 1},
   {(char *)"HNA1", (char *)"Heure Normale de l'Atlantique", (char *)"Atlantic", -14400, 1},
   {(char *)"HNA2", (char *)"Heure Normale de l'Atlantique", (char *)"Caribbean", -14400, 1},
   {(char *)"HNC", (char *)"Heure Normale du Centre", (char *)"North America", -21600, 1},
   {(char *)"HNC1", (char *)"Heure Normale du Centre", (char *)"Central America", -21600, 1},
   {(char *)"HNE", (char *)"Heure Normale de l'Est", (char *)"North America", -18000, 1},
   {(char *)"HNE1", (char *)"Heure Normale de l'Est", (char *)"Central America", -18000, 1},
   {(char *)"HNE2", (char *)"Heure Normale de l'Est", (char *)"Caribbean", -18000, 1},
   {(char *)"HNP", (char *)"Heure Normale du Pacifique", (char *)"North America", -28800, 1},
   {(char *)"HNR", (char *)"Heure Normale des Rocheuses", (char *)"North America", -25200, 1},
   {(char *)"HNT", (char *)"Heure Normale de Terre-Neuve", (char *)"North America", -12600.0, 1},
   {(char *)"HNY", (char *)"Heure Normale du Yukon", (char *)"North America", -32400, 1},
   {(char *)"HOVT", (char *)"Hovd Time", (char *)"Asia", 25200, 0},
   {(char *)"I", (char *)"India Time Zone", (char *)"Military", 32400, 0},
   {(char *)"ICT", (char *)"Indochina Time", (char *)"Asia", 25200, 0},
   {(char *)"IDT", (char *)"Israel Daylight Time", (char *)"Asia", 10800, 0},
   {(char *)"IOT", (char *)"Indian Chagos Time", (char *)"Indian Ocean", 21600, 0},
   {(char *)"IRDT", (char *)"Iran Daylight Time", (char *)"Asia", 16200.00, 0},
   {(char *)"IRKST", (char *)"Irkutsk Summer Time", (char *)"Asia", 32400, 0},
   {(char *)"IRKT", (char *)"Irkutsk Time", (char *)"Asia", 28800, 0},
   {(char *)"IRST", (char *)"Iran Standard Time", (char *)"Asia", 12600.0, 0},
   {(char *)"IST", (char *)"Irish Standard Time", (char *)"Europe", 3600, 1},
   {(char *)"IST1", (char *)"Israel Standard Time", (char *)"Asia", 7200, 0},
   {(char *)"IST2", (char *)"India Standard Time", (char *)"Asia", 19800.0, 0},
   {(char *)"JST", (char *)"Japan Standard Time", (char *)"Asia", 32400, 0},
   {(char *)"K", (char *)"Kilo Time Zone", (char *)"Military", 36000, 0},
   {(char *)"KGT", (char *)"Kyrgyzstan Time", (char *)"Asia", 21600, 0},
   {(char *)"KRAST", (char *)"Krasnoyarsk Summer Time", (char *)"Asia", 28800, 0},
   {(char *)"KRAT", (char *)"Krasnoyarsk Time", (char *)"Asia", 25200, 0},
   {(char *)"KST", (char *)"Korea Standard Time", (char *)"Asia", 32400, 0},
   {(char *)"KUYT", (char *)"Kuybyshev Time", (char *)"Europe", 14400, 1},
   {(char *)"L", (char *)"Lima Time Zone", (char *)"Military", 39600, 0},
   {(char *)"LHDT", (char *)"Lord Howe Daylight Time", (char *)"Australia", 39600, 1},
   {(char *)"LHST", (char *)"Lord Howe Standard Time", (char *)"Australia", 37800.0, 1},
   {(char *)"LINT", (char *)"Line Islands Time", (char *)"Pacific", 50400, 0},
   {(char *)"M", (char *)"Mike Time Zone", (char *)"Military", 43200, 0},
   {(char *)"MAGST", (char *)"Magadan Summer Time", (char *)"Asia", 43200, 0},
   {(char *)"MAGT", (char *)"Magadan Time", (char *)"Asia", 39600, 0},
   {(char *)"MART", (char *)"Marquesas Time", (char *)"Pacific", -34200.0, 0},
   {(char *)"MAWT", (char *)"Mawson Time", (char *)"Antarctica", 18000, 0},
   {(char *)"MDT", (char *)"Mountain Daylight Time", (char *)"North America", -21600, 1},
   {(char *)"MHT", (char *)"Marshall Islands Time", (char *)"Pacific", 43200, 0},
   {(char *)"MMT", (char *)"Myanmar Time", (char *)"Asia", 23400.0, 0},
   {(char *)"MSD", (char *)"Moscow Daylight Time", (char *)"Europe", 14400, 1},
   {(char *)"MSK", (char *)"Moscow Standard Time", (char *)"Europe", 10800, 0},
   {(char *)"MST", (char *)"Mountain Standard Time", (char *)"North America", -25200, 1},
   {(char *)"MUT", (char *)"Mauritius Time", (char *)"Africa", 14400, 0},
   {(char *)"MVT", (char *)"Maldives Time", (char *)"Asia", 18000, 0},
   {(char *)"MYT", (char *)"Malaysia Time", (char *)"Asia", 28800, 0},
   {(char *)"N", (char *)"November Time Zone", (char *)"Military", -3600, 0},
   {(char *)"NCT", (char *)"New Caledonia Time", (char *)"Pacific", 39600, 0},
   {(char *)"NDT", (char *)"Newfoundland Daylight Time", (char *)"North America", -9000.0, 1},
   {(char *)"NFT", (char *)"Norfolk Time", (char *)"Australia", 41400.0, 0},
   {(char *)"NOVST", (char *)"Novosibirsk Summer Time", (char *)"Asia", 25200, 0},
   {(char *)"NOVT", (char *)"Novosibirsk Time", (char *)"Asia", 21600, 0},
   {(char *)"NPT", (char *)"Nepal Time ", (char *)"Asia", 20700.00, 0},
   {(char *)"NST", (char *)"Newfoundland Standard Time", (char *)"North America", -12600.0, 1},
   {(char *)"NUT", (char *)"Niue Time", (char *)"Pacific", -39600, 0},
   {(char *)"NZDT", (char *)"New Zealand Daylight Time", (char *)"Pacific", 46800, 1},
   {(char *)"NZDT1", (char *)"New Zealand Daylight Time", (char *)"Antarctica", 46800, 1},
   {(char *)"NZST", (char *)"New Zealand Standard Time", (char *)"Pacific", 43200, 1},
   {(char *)"NZST1", (char *)"New Zealand Standard Time", (char *)"Antarctica", 43200, 1},
   {(char *)"O", (char *)"Oscar Time Zone", (char *)"Military", -7200, 0},
   {(char *)"OMSST", (char *)"Omsk Summer Time", (char *)"Asia", 25200, 0},
   {(char *)"OMST", (char *)"Omsk Standard Time", (char *)"Asia", 21600, 0},
   {(char *)"P", (char *)"Papa Time Zone", (char *)"Military", -10800, 0},
   {(char *)"PDT", (char *)"Pacific Daylight Time", (char *)"North America", -25200, 1},
   {(char *)"PET", (char *)"Peru Time", (char *)"South America", -18000, 0},
   {(char *)"PETST", (char *)"Kamchatka Summer Time", (char *)"Asia", 43200, 0},
   {(char *)"PETT", (char *)"Kamchatka Time", (char *)"Asia", 43200, 0},
   {(char *)"PGT", (char *)"Papua New Guinea Time", (char *)"Pacific", 36000, 0},
   {(char *)"PHOT", (char *)"Phoenix Island Time", (char *)"Pacific", 46800, 0},
   {(char *)"PHT", (char *)"Philippine Time", (char *)"Asia", 28800, 0},
   {(char *)"PKT", (char *)"Pakistan Standard Time", (char *)"Asia", 18000, 0},
   {(char *)"PMDT", (char *)"Pierre & Miquelon Daylight Time", (char *)"North America", -7200, 1},
   {(char *)"PMST", (char *)"Pierre & Miquelon Standard Time", (char *)"North America", -10800, 1},
   {(char *)"PONT", (char *)"Pohnpei Standard Time", (char *)"Pacific", 39600, 0},
   {(char *)"PST", (char *)"Pacific Standard Time", (char *)"North America", -28800, 1},
   {(char *)"PST1", (char *)"Pitcairn Standard Time", (char *)"Pacific", -28800, 0},
   {(char *)"PT", (char *)"Tiempo del Pacifico", (char *)"North America", -28800, 1},
   {(char *)"PWT", (char *)"Palau Time", (char *)"Pacific", 32400, 0},
   {(char *)"PYST", (char *)"Paraguay Summer Time", (char *)"South America", -10800, 1},
   {(char *)"PYT", (char *)"Paraguay Time", (char *)"South America", -14400, 1},
   {(char *)"Q", (char *)"Quebec Time Zone", (char *)"Military", -14400, 0},
   {(char *)"R", (char *)"Romeo Time Zone", (char *)"Military", -18000, 0},
   {(char *)"RET", (char *)"Reunion Time", (char *)"Africa", 14400, 1},
   {(char *)"S", (char *)"Sierra Time Zone", (char *)"Military", -21600, 0},
   {(char *)"SAMT", (char *)"Samara Time", (char *)"Europe", 14400, 0},
   {(char *)"SAST", (char *)"South Africa Standard Time", (char *)"Africa", 7200, 1},
   {(char *)"SBT", (char *)"Solomon IslandsTime", (char *)"Pacific", 39600, 0},
   {(char *)"SCT", (char *)"Seychelles Time", (char *)"Africa", 14400, 1},
   {(char *)"SGT", (char *)"Singapore Time", (char *)"Asia", 28800, 0},
   {(char *)"SRT", (char *)"Suriname Time", (char *)"South America", -10800, 0},
   {(char *)"SST", (char *)"Samoa Standard Time", (char *)"Pacific", -39600, 0},
   {(char *)"T", (char *)"Tango Time Zone", (char *)"Military", -25200, 0},
   {(char *)"TAHT", (char *)"Tahiti Time", (char *)"Pacific", -36000, 0},
   {(char *)"TFT", (char *)"French Southern and Antarctic Time", (char *)"Indian Ocean", 18000, 0},
   {(char *)"TJT", (char *)"Tajikistan Time", (char *)"Asia", 18000, 0},
   {(char *)"TKT", (char *)"Tokelau Time", (char *)"Pacific", -36000, 0},
   {(char *)"TLT", (char *)"East Timor Time", (char *)"Asia", 32400, 0},
   {(char *)"TMT", (char *)"Turkmenistan Time", (char *)"Asia", 18000, 0},
   {(char *)"TVT", (char *)"Tuvalu Time", (char *)"Pacific", 43200, 0},
   {(char *)"U", (char *)"Uniform Time Zone", (char *)"Military", -28800, 0},
   {(char *)"ULAT", (char *)"Ulaanbaatar Time", (char *)"Asia", 28800, 0},
   {(char *)"UT1", (char *)"Universal Time Principal", (char *)"Zulu Time", 0, 0},
   {(char *)"UTC", (char *)"Coordinated Universal Time", (char *)"Zulu Time", 0, 0},
   {(char *)"UYST", (char *)"Uruguay Summer Time", (char *)"South America", -7200, 1},
   {(char *)"UYT", (char *)"Uruguay Time", (char *)"South America", -10800, 1},
   {(char *)"UZT", (char *)"Uzbekistan Time", (char *)"Asia", 18000, 0},
   {(char *)"V", (char *)"Victor Time Zone", (char *)"Military", -32400, 0},
   {(char *)"VET", (char *)"Venezuelan Standard Time", (char *)"South America", -16200.0, 0},
   {(char *)"VLAST", (char *)"Vladivostok Summer Time", (char *)"Asia", 39600, 0},
   {(char *)"VLAT", (char *)"Vladivostok Time", (char *)"Asia", 36000, 0},
   {(char *)"VUT", (char *)"Vanuatu Time", (char *)"Pacific", 39600, 1},
   {(char *)"W", (char *)"Whiskey Time Zone", (char *)"Military", -36000, 0},
   {(char *)"WAST", (char *)"West Africa Summer Time", (char *)"Africa", 7200, 1},
   {(char *)"WAT", (char *)"West Africa Time", (char *)"Africa", 3600, 0},
   {(char *)"WDT", (char *)"Western Daylight Time", (char *)"Australia", 32400, 1},
   {(char *)"WEST", (char *)"Western European Summer Time", (char *)"Europe", 3600, 1},
   {(char *)"WEST1", (char *)"Western European Summer Time", (char *)"Africa", 3600, 0},
   {(char *)"WET", (char *)"Western European Time", (char *)"Europe", 0, 0},
   {(char *)"WET1", (char *)"Western European Time", (char *)"Africa", 0, 0},
   {(char *)"WFT", (char *)"Wallis and Futuna Time", (char *)"Pacific", 43200, 1},
   {(char *)"WGST", (char *)"Western Greenland Summer Time", (char *)"North America", -7200, 1},
   {(char *)"WGT", (char *)"West Greenland Time", (char *)"North America", -10800, 1},
   {(char *)"WIB", (char *)"Western Indonesian Time", (char *)"Asia", 25200, 0},
   {(char *)"WIT", (char *)"Eastern Indonesian Time", (char *)"Asia", 32400, 0},
   {(char *)"WITA", (char *)"Central Indonesian Time", (char *)"Asia", 28800, 0},
   {(char *)"WST", (char *)"West Samoa Time", (char *)"Pacific", -39600, 0},
   {(char *)"WST1", (char *)"Western Standard Time", (char *)"Australia", 28800, 1},
   {(char *)"WST2", (char *)"Western Sahara Summer Time", (char *)"Africa", 3600, 0},
   {(char *)"WT", (char *)"Western Sahara Standard Time", (char *)"Africa", 0, 0},
   {(char *)"X", (char *)"X-ray Time Zone", (char *)"Military", -39600, 0},
   {(char *)"Y", (char *)"Yankee Time Zone", (char *)"Military", -43200, 0},
   {(char *)"YAKST", (char *)"Yakutsk Summer Time", (char *)"Asia", 36000, 0},
   {(char *)"YAKT", (char *)"Yakutsk Time", (char *)"Asia", 32400, 0},
   {(char *)"YAPT", (char *)"Yap Time", (char *)"Pacific", 36000, 1},
   {(char *)"YEKST", (char *)"Yekaterinburg Summer Time", (char *)"Asia", 21600, 0},
   {(char *)"YEKT", (char *)"Yekaterinburg Time", (char *)"Asia", 18000, 0},
   {(char *)"Z", (char *)"Zulu Time Zone", (char *)"Military", 0, 0},
   {NULL, NULL, NULL, 0, 0}};
