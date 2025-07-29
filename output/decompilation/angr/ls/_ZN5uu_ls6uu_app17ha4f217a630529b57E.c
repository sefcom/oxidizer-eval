long long uu_ls::uu_app(unsigned long a0)
{
    int v0;  // [bp-0xc78]
    void* v1;  // [bp-0xc68], Other Possible Types: char, unsigned long long
    int v2;  // [bp-0xc68]
    unsigned long long v3;  // [bp-0xc60]
    int v4;  // [bp-0xc58], Other Possible Types: void*, unsigned long long
    unsigned long long v5;  // [bp-0xc50]
    int v6;  // [bp-0xc48], Other Possible Types: unsigned long long
    int v7;  // [bp-0xc48], Other Possible Types: unsigned long long
    int v8;  // [bp-0xc48]
    int v9;  // [bp-0xc48]
    int v10;  // [bp-0xc48]
    int v11;  // [bp-0xc48]
    int v12;  // [bp-0xc48]
    int v13;  // [bp-0xc48]
    int v14;  // [bp-0xc48]
    int v15;  // [bp-0xc48]
    unsigned long long v16;  // [bp-0xc40]
    int v17;  // [bp-0xc38], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0xc30]
    unsigned long long v19;  // [bp-0xc28], Other Possible Types: char
    int v20;  // [bp-0xc20]
    int v21;  // [bp-0xc20]
    unsigned long long v22;  // [bp-0xc20]
    int v23;  // [bp-0xc20]
    unsigned long long v24;  // [bp-0xc18]
    int v25;  // [bp-0xc10]
    int v26;  // [bp-0xc10]
    unsigned long long v27;  // [bp-0xc10]
    int v28;  // [bp-0xc10]
    unsigned long long v29;  // [bp-0xc08]
    int v30;  // [bp-0xc00]
    int v31;  // [bp-0xc00]
    unsigned long long v32;  // [bp-0xc00]
    int v33;  // [bp-0xc00]
    unsigned long long v34;  // [bp-0xbf8]
    int v35;  // [bp-0xbf0], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0xbe0]
    char v37;  // [bp-0xbd8]
    char v38;  // [bp-0xbc8]
    int v39;  // [bp-0xbb8]
    char v40;  // [bp-0xba8]
    unsigned long long v41;  // [bp-0xb98]
    char v42;  // [bp-0xb90]
    char v43;  // [bp-0xb80]
    int v44;  // [bp-0xb70]
    char v45;  // [bp-0xb60]
    unsigned long long v46;  // [bp-0xb50]
    char v47;  // [bp-0xb48]
    char v48;  // [bp-0xb38]
    int v49;  // [bp-0xb28]
    char v50;  // [bp-0xb18]
    unsigned long long v51;  // [bp-0xb08]
    char v52;  // [bp-0xb00]
    char v53;  // [bp-0xaf0]
    int v54;  // [bp-0xae0]
    int v55;  // [bp-0xad0]
    unsigned long v56;  // [bp-0xac0]
    void* v57;  // [bp-0xab8]
    unsigned long long v58;  // [bp-0xab0]
    void* v59;  // [bp-0xaa8]
    unsigned long long v60;  // [bp-0xaa0]
    int v61;  // [bp-0xa98]
    unsigned long long v62;  // [bp-0xa88]
    unsigned long long v63;  // [bp-0xa80]
    char v64;  // [bp-0xa78]
    unsigned int v65;  // [bp-0x9f0]
    unsigned int v66;  // [bp-0x9ec]
    void* v67;  // [bp-0x9e8], Other Possible Types: char
    unsigned long long v68;  // [bp-0x9e0]
    void* v69;  // [bp-0x9d8], Other Possible Types: char
    unsigned long long v70;  // [bp-0x9d0]
    int v71;  // [bp-0x9c8]
    char v72;  // [bp-0x9b8], Other Possible Types: unsigned long long
    unsigned long long v73;  // [bp-0x9b0]
    char v74;  // [bp-0x9a8]
    void* v75;  // [bp-0x9a0], Other Possible Types: char
    unsigned long long v76;  // [bp-0x998]
    void* v77;  // [bp-0x990], Other Possible Types: char
    unsigned long long v78;  // [bp-0x988]
    int v79;  // [bp-0x980]
    char v80;  // [bp-0x970], Other Possible Types: unsigned long long
    unsigned long long v81;  // [bp-0x968]
    char v82;  // [bp-0x960]
    int v83;  // [bp-0x958], Other Possible Types: unsigned long long
    int v84;  // [bp-0x958]
    int v85;  // [bp-0x958]
    int v86;  // [bp-0x958]
    int v87;  // [bp-0x958]
    int v88;  // [bp-0x958]
    int v89;  // [bp-0x958]
    int v90;  // [bp-0x958]
    int v91;  // [bp-0x958]
    int v92;  // [bp-0x958]
    int v93;  // [bp-0x958]
    int v94;  // [bp-0x958]
    int v95;  // [bp-0x958]
    int v96;  // [bp-0x958]
    int v97;  // [bp-0x958]
    int v98;  // [bp-0x958]
    int v99;  // [bp-0x958]
    int v100;  // [bp-0x958]
    int v101;  // [bp-0x958]
    int v102;  // [bp-0x958]
    int v103;  // [bp-0x958]
    int v104;  // [bp-0x958]
    int v105;  // [bp-0x958]
    int v106;  // [bp-0x958]
    int v107;  // [bp-0x958]
    unsigned long long v108;  // [bp-0x950]
    int v109;  // [bp-0x948], Other Possible Types: unsigned long long, unsigned long
    int v110;  // [bp-0x948]
    int v111;  // [bp-0x948]
    int v112;  // [bp-0x948]
    int v113;  // [bp-0x948]
    int v114;  // [bp-0x948]
    int v115;  // [bp-0x948]
    int v116;  // [bp-0x948]
    int v117;  // [bp-0x948]
    int v118;  // [bp-0x948]
    int v119;  // [bp-0x948]
    int v120;  // [bp-0x948]
    int v121;  // [bp-0x948]
    int v122;  // [bp-0x948]
    int v123;  // [bp-0x948]
    int v124;  // [bp-0x948]
    int v125;  // [bp-0x948]
    int v126;  // [bp-0x948]
    int v127;  // [bp-0x948]
    int v128;  // [bp-0x948]
    unsigned long v129;  // [bp-0x940]
    int v130;  // [bp-0x938]
    int v131;  // [bp-0x928]
    int v132;  // [bp-0x918], Other Possible Types: unsigned long
    int v133;  // [bp-0x918]
    int v134;  // [bp-0x918]
    int v135;  // [bp-0x918]
    unsigned long v136;  // [bp-0x918]
    unsigned long v137;  // [bp-0x910]
    int v138;  // [bp-0x908]
    void* v139;  // [bp-0x6d0], Other Possible Types: char
    unsigned long long v140;  // [bp-0x6c8]
    void* v141;  // [bp-0x6c0], Other Possible Types: char
    unsigned long long v142;  // [bp-0x6b8]
    int v143;  // [bp-0x6b0]
    char v144;  // [bp-0x6a0], Other Possible Types: unsigned long long
    unsigned long long v145;  // [bp-0x698]
    char v146;  // [bp-0x690]
    int v147;  // [bp-0x688], Other Possible Types: void*
    int v148;  // [bp-0x688]
    int v149;  // [bp-0x688]
    int v150;  // [bp-0x688]
    unsigned long long v151;  // [bp-0x680]
    int v152;  // [bp-0x678], Other Possible Types: void*, unsigned long long
    int v153;  // [bp-0x678]
    unsigned long long v154;  // [bp-0x670]
    int v155;  // [bp-0x668], Other Possible Types: unsigned long long
    int v156;  // [bp-0x668]
    unsigned long long v157;  // [bp-0x660]
    int v158;  // [bp-0x658], Other Possible Types: unsigned long long
    int v159;  // [bp-0x658]
    unsigned long long v160;  // [bp-0x650]
    int v161;  // [bp-0x648], Other Possible Types: unsigned long long, char
    int v162;  // [bp-0x640], Other Possible Types: unsigned long long
    int v163;  // [bp-0x638], Other Possible Types: unsigned long long
    int v164;  // [bp-0x630], Other Possible Types: unsigned long long
    unsigned long long v165;  // [bp-0x628]
    int v166;  // [bp-0x620], Other Possible Types: unsigned long long
    int v167;  // [bp-0x610]
    unsigned long long v168;  // [bp-0x600]
    char v169;  // [bp-0x5f8]
    char v170;  // [bp-0x5e8]
    int v171;  // [bp-0x5d8]
    char v172;  // [bp-0x5c8]
    unsigned long long v173;  // [bp-0x5b8]
    char v174;  // [bp-0x5b0]
    char v175;  // [bp-0x5a0]
    int v176;  // [bp-0x590]
    int v177;  // [bp-0x580]
    unsigned long v178;  // [bp-0x570]
    unsigned int v179;  // [bp-0x410]
    char v180;  // [bp-0x40c]
    unsigned long v181;  // [bp-0x3cc]
    unsigned int v182;  // [bp-0x3c4]
    void* v183;  // [bp-0x3c0]
    unsigned long long v184;  // [bp-0x3b8]
    char v185;  // [bp-0x3b0]
    char v186;  // [bp-0x3a8]
    unsigned int v187;  // [bp-0x130]
    unsigned int v188;  // [bp-0x12c]
    unsigned long long v189;  // [bp-0xec]
    unsigned int v190;  // [bp-0xe4]
    unsigned long long v191;  // [bp-0xe0]
    char v192;  // [bp-0xd8]
    unsigned long long v193;  // [bp-0xd0]
    unsigned long long v194;  // [bp-0xc8]
    void* v195;  // [bp-0xc0]
    unsigned long long v196;  // [bp-0xb8]
    void* v197;  // [bp-0xb0]
    unsigned long long v198;  // [bp-0xa8]
    int v199;  // [bp-0xa0]
    unsigned long long v200;  // [bp-0x90]
    unsigned long long v201;  // [bp-0x88]
    char v202;  // [bp-0x80]
    void* v203;  // [bp-0x78]
    unsigned long long v204;  // [bp-0x70]
    void* v205;  // [bp-0x68]
    unsigned long long v206;  // [bp-0x60]
    int v207;  // [bp-0x58]
    unsigned long long v208;  // [bp-0x48]
    unsigned long long v209;  // [bp-0x40]
    char v210;  // [bp-0x38]
    unsigned long long v213;  // rdx
    int v214;  // xmm1
    int v215;  // xmm3
    int v216;  // xmm1
    int v217;  // xmm3
    int v218;  // xmm1
    int v219;  // xmm3
    int v220;  // xmm1
    int v221;  // xmm3
    int v222;  // xmm1
    int v223;  // xmm3
    int v224;  // xmm1
    int v225;  // xmm3
    int v226;  // xmm1
    int v227;  // xmm3
    int v228;  // xmm1
    int v229;  // xmm3
    int v230;  // xmm1
    int v231;  // xmm3
    int v232;  // xmm1
    int v233;  // xmm3

    v186.new(uucore::util_name(), v213);
    (char)v147.version(&v186, "(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-commasls-help-list-entries-nulls-help-generate-dired-outputl", 24);
    uucore::mods::locale::get_message(&v192, "ls-usageCowByteshash_lenDecemberall-args", 8);
    uucore::format_usage(&v1, v193, v194);
    v186.override_usage(&(char)v147, &v1);
    uucore::mods::locale::get_message(&v1, "ls-aboutSaturdayRgbColortrue", 8);
    (char)v147.about(&v186, &v1);
    memcpy(&v186, &(char)v147, 700);
    v189 = 2252383929761928 | v181;
    v190 = v182;
    (char)v147.new(_ZN5uu_ls7options4HELP17h9c9069a8bf5796d0E, g_6a0d80);
    v1.long(&(char)v147, _ZN5uu_ls7options4HELP17h9c9069a8bf5796d0E, g_6a0d80);
    uucore::mods::locale::get_message(&(char)v83, "ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-commasls-help-list-entries-nulls-help-generate-dired-outputls-help-hyperlink-filenam", 18);
    (char)v147.help(&v1, &(char)v83);
    v1.action(&(char)v147, 5);
    (char)v147.arg(&v186, &v1);
    v186.new(*((long long *)&_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE), g_6a0df0);
    v1.long(&v186, *((long long *)&_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE), g_6a0df0);
    uucore::mods::locale::get_message(&(char)v83, "ls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-commasls-help-list-entries-nulls-help-generate-dired-outputls-help-hyperlink-filenamesls-help-list-one", 26);
    v186.help(&v1, &(char)v83);
    v1 = "longhourmanyZero";
    v3 = 4;
    v4 = "verbosesingle-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format";
    v5 = 7;
    v7 = "single-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format";
    v16 = 13;
    v17 = "columnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format";
    v18 = 7;
    v19 = "verticalNovember";
    v22 = 8;
    v24 = "acrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format";
    v27 = 6;
    v29 = "horizontalcommasinternal error: entered unreachable code: Invalid field for --format";
    v32 = 10;
    v34 = "commasinternal error: entered unreachable code: Invalid field for --format";
    v35 = 6;
    (char)v83.from(&v1);
    v1.value_parser(&v186, &(char)v83);
    memcpy(&v186, &v1, 632);
    v187 = 144 | v65;
    v188 = v66;
    *((int128_t *)&v83) = *((int128_t *)&_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE);
    v109 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
    v129 = g_6a1438;
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options6format6ACROSS17hf452c3664493c363E);
    v132 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
    v137 = g_6a1438;
    *((int128_t *)&v138) = *((int128_t *)&_ZN5uu_ls7options5DIRED17hc1e0b45eb87eb0feE);
    v1.overrides_with_all(&v186, &(char)v83);
    v186.arg(&(char)v147, &v1);
    (char)v147.new(_ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E, g_6a1438);
    v1.short(&(char)v147, 67);
    uucore::mods::locale::get_message(&(char)v83, "ls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-commasls-help-list-entries-nulls-help-generate-dired-outputls-help-hyperlink-filenamesls-help-list-one-file-per-linels-help-long", 29);
    (char)v147.help(&v1, &(char)v83);
    *((int128_t *)&v83) = *((int128_t *)&_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE);
    v109 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
    v129 = g_6a1438;
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options6format6ACROSS17hf452c3664493c363E);
    v132 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
    v137 = g_6a1438;
    v1.overrides_with_all(&(char)v147, &(char)v83);
    (char)v83.action(&v1, 2);
    (char)v147.arg(&v186, &(char)v83);
    v186.new(*((long long *)&_ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E), g_6a1428);
    v1.short(&v186, 108);
    v186.long(&v1, *((long long *)&_ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E), g_6a1428);
    uucore::mods::locale::get_message(&(char)v83, "ls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-commasls-help-list-entries-nulls-help-generate-dired-outputls-help-hyperlink-filenamesls-help-list-one-file-per-linels-help-long-format-no-groupls-help-long-", 29);
    v1.help(&v186, &(char)v83);
    *((int128_t *)&v83) = *((int128_t *)&_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE);
    v109 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
    v129 = g_6a1438;
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options6format6ACROSS17hf452c3664493c363E);
    v132 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
    v137 = g_6a1438;
    v186.overrides_with_all(&v1, &(char)v83);
    v1.action(&v186, 2);
    v186.arg(&(char)v147, &v1);
    (char)v147.new(*((long long *)&_ZN5uu_ls7options6format6ACROSS17hf452c3664493c363E), g_6a1448);
    v1.short(&(char)v147, 120);
    uucore::mods::locale::get_message(&(char)v83, "ls-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-commasls-help-list-entries-nulls-help-generate-dired-outputls-help-hyperlink-filenamesls-help-list-one-file-per-linels-help-long-format-no-groupls-help-long-no-ownerls-help-long-numeric-", 25);
    (char)v147.help(&v1, &(char)v83);
    *((int128_t *)&v83) = *((int128_t *)&_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE);
    v109 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
    v129 = g_6a1438;
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options6format6ACROSS17hf452c3664493c363E);
    v132 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
    v137 = g_6a1438;
    v1.overrides_with_all(&(char)v147, &(char)v83);
    (char)v83.action(&v1, 2);
    (char)v147.arg(&v186, &(char)v83);
    v186.new(_ZN5uu_ls7options6format8TAB_SIZE17h05ab82244ec84ed5E, g_6a1458);
    v1.short(&v186, 84);
    v186.long(&v1, _ZN5uu_ls7options6format8TAB_SIZE17h05ab82244ec84ed5E, g_6a1458);
    v1.env(&v186, "TABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help-assume-tab-stopsls-help-list-entries-commasls-help-list-entries-nulls-help-generate-dired-", 7);
    v186.value_name(&v1, "COLSWHENhashkeysu128", 4);
    uucore::mods::locale::get_message(&(char)v83, "ls-help-assume-tab-stopsls-help-list-entries-commasls-help-list-entries-nulls-help-generate-dired-outputls-help-hyperlink-filenamesls-help-list-one-file-per-linels-help-long-format-no-groupls-help-long-no-ownerls-help-long-numeric-uid-gidls-help-set-quotin", 24);
    v1.help(&v186, &(char)v83);
    v186.arg(&(char)v147, &v1);
    (char)v147.new(_ZN5uu_ls7options6format6COMMAS17h2c5349b856a55a83E, g_6a1468);
    v1.short(&(char)v147, 109);
    uucore::mods::locale::get_message(&(char)v83, "ls-help-list-entries-commasls-help-list-entries-nulls-help-generate-dired-outputls-help-hyperlink-filenamesls-help-list-one-file-per-linels-help-long-format-no-groupls-help-long-no-ownerls-help-long-numeric-uid-gidls-help-set-quoting-stylec-maybells-help-l", 27);
    (char)v147.help(&v1, &(char)v83);
    *((int128_t *)&v83) = *((int128_t *)&_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE);
    v109 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
    v129 = g_6a1438;
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options6format6ACROSS17hf452c3664493c363E);
    v136 = _ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E;
    v137 = g_6a1438;
    v1.overrides_with_all(&(char)v147, &(char)v83);
    (char)v83.action(&v1, 2);
    (char)v147.arg(&v186, &(char)v83);
    v186.new(_ZN5uu_ls7options4ZERO17hdd282bbaeb2496daE, g_6a0f00);
    v1.long(&v186, _ZN5uu_ls7options4ZERO17hdd282bbaeb2496daE, g_6a0f00);
    v186.overrides_with(&v1, _ZN5uu_ls7options4ZERO17hdd282bbaeb2496daE, g_6a0f00);
    uucore::mods::locale::get_message(&(char)v83, "ls-help-list-entries-nulls-help-generate-dired-outputls-help-hyperlink-filenamesls-help-list-one-file-per-linels-help-long-format-no-groupls-help-long-no-ownerls-help-long-numeric-uid-gidls-help-set-quoting-stylec-maybells-help-literal-quoting-stylels-help", 24);
    v1.help(&v186, &(char)v83);
    (char)v83.action(&v1, 2);
    v186.arg(&(char)v147, &(char)v83);
    (char)v147.new(*((long long *)&_ZN5uu_ls7options5DIRED17hc1e0b45eb87eb0feE), g_6a0f10);
    v1.long(&(char)v147, *((long long *)&_ZN5uu_ls7options5DIRED17hc1e0b45eb87eb0feE), g_6a0f10);
    (char)v147.short(&v1, 68);
    uucore::mods::locale::get_message(&(char)v83, "ls-help-generate-dired-outputls-help-hyperlink-filenamesls-help-list-one-file-per-linels-help-long-format-no-groupls-help-long-no-ownerls-help-long-numeric-uid-gidls-help-set-quoting-stylec-maybells-help-literal-quoting-stylels-help-escape-quoting-stylels-", 29);
    v1.help(&(char)v147, &(char)v83);
    (char)v147.action(&v1, 2);
    v1.overrides_with(&(char)v147, _ZN5uu_ls7options9HYPERLINK17h0e5952ae99e92900E, g_6a0f20);
    (char)v147.arg(&v186, &v1);
    v186.new(_ZN5uu_ls7options9HYPERLINK17h0e5952ae99e92900E, g_6a0f20);
    v1.long(&v186, _ZN5uu_ls7options9HYPERLINK17h0e5952ae99e92900E, g_6a0f20);
    uucore::mods::locale::get_message(&(char)v83, "ls-help-hyperlink-filenamesls-help-list-one-file-per-linels-help-long-format-no-groupls-help-long-no-ownerls-help-long-numeric-uid-gidls-help-set-quoting-stylec-maybells-help-literal-quoting-stylels-help-escape-quoting-stylels-help-c-quoting-stylels-help-r", 27);
    v186.help(&v1, &(char)v83);
    v17 = "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 6;
    v5 = 0x8000000000000000;
    v13 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    (char)v83.alias(&v1, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v67.alias(&(char)v83, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5);
    v17 = "autoday=";
    v18 = 4;
    v5 = 0x8000000000000000;
    v14 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    (char)v83.alias(&v1, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v75.alias(&(char)v83, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6);
    v17 = "nevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 5;
    v5 = 0x8000000000000000;
    v15 = v0;
    *((unsigned long long *)&v2) = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    (char)v83.alias(&(unsigned long long)v2, "nointernal error: entered unreachable code: should be handled by clap", 2);
    v139.alias(&(char)v83, "nonehelpmsecNonecallshimSlimname", 4);
    v214 = *((int128_t *)&v69);
    v215 = *((int128_t *)&v72);
    *((int128_t *)&v2) = *((int128_t *)&v67);
    v4 = v214;
    v6 = v71;
    v17 = v215;
    v19 = *((long long *)&v74);
    v216 = *((int128_t *)&v77);
    v217 = *((int128_t *)&v80);
    *((int128_t *)&v20) = *((int128_t *)&v75);
    v25 = v216;
    v30 = v79;
    v35 = v217;
    v36 = *((long long *)&v82);
    v41 = *((long long *)&v146);
    memcpy(&v40, &v144, 16);
    v39 = v143;
    memcpy(&v38, &v141, 16);
    memcpy(&v37, &v139, 16);
    (char)v83.from(&(unsigned long long)v2);
    (unsigned long long)v2.value_parser(&v186, &(char)v83);
    memcpy(&v186, &(unsigned long long)v2, 632);
    v187 = 128 | v65;
    v188 = v66;
    v183 = 0;
    v184 = 1;
    v185 = 0;
    v109 = *((long long *)&v185);
    *((void* *)&v104) = v183;
    v108 = 1;
    (unsigned long long)v2.num_args(&v186, &(unsigned long long)v104);
    v186.default_missing_value(&(unsigned long long)v2);
    (unsigned long long)v2.default_value(&v186);
    v186.value_name(&(unsigned long long)v2, "WHENhashkeysu128", 4);
    (unsigned long long)v2.overrides_with(&v186, *((long long *)&_ZN5uu_ls7options5DIRED17hc1e0b45eb87eb0feE), g_6a0f10);
    v186.arg(&(char)v147, &(unsigned long long)v2);
    (char)v147.new(_ZN5uu_ls7options6format8ONE_LINE17hbf96991fc6132402E, g_6a1418);
    (unsigned long long)v2.short(&(char)v147, 49);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-list-one-file-per-linels-help-long-format-no-groupls-help-long-no-ownerls-help-long-numeric-uid-gidls-help-set-quoting-stylec-maybells-help-literal-quoting-stylels-help-escape-quoting-stylels-help-c-quoting-stylels-help-replace-control-charsls-help", 30);
    (char)v147.help(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&(char)v147, 2);
    (char)v147.arg(&v186, &(unsigned long long)v2);
    v186.new(_ZN5uu_ls7options6format13LONG_NO_GROUP17h3a95b096fda62ebbE, g_6a1488);
    (unsigned long long)v2.short(&v186, 111);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-long-format-no-groupls-help-long-no-ownerls-help-long-numeric-uid-gidls-help-set-quoting-stylec-maybells-help-literal-quoting-stylels-help-escape-quoting-stylels-help-c-quoting-stylels-help-replace-control-charsls-help-show-control-charsls-help-sho", 28);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&v186, 2);
    v186.arg(&(char)v147, &(unsigned long long)v2);
    (char)v147.new(_ZN5uu_ls7options6format13LONG_NO_OWNER17he953e6f73aa3471eE, g_6a1478);
    (unsigned long long)v2.short(&(char)v147, 103);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-long-no-ownerls-help-long-numeric-uid-gidls-help-set-quoting-stylec-maybells-help-literal-quoting-stylels-help-escape-quoting-stylels-help-c-quoting-stylels-help-replace-control-charsls-help-show-control-charsls-help-show-time-fieldfieldls-help-tim", 21);
    (char)v147.help(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&(char)v147, 2);
    (char)v147.arg(&v186, &(unsigned long long)v2);
    v186.new(_ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h4b2cb569f0d33d1fE, g_6a1498);
    (unsigned long long)v2.short(&v186, 110);
    v186.long(&(unsigned long long)v2, _ZN5uu_ls7options6format20LONG_NUMERIC_UID_GID17h4b2cb569f0d33d1fE, g_6a1498);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-long-numeric-uid-gidls-help-set-quoting-stylec-maybells-help-literal-quoting-stylels-help-escape-quoting-stylels-help-c-quoting-stylels-help-replace-control-charsls-help-show-control-charsls-help-show-time-fieldfieldls-help-time-changels-help-time-", 28);
    (unsigned long long)v2.help(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(char)v147, &(unsigned long long)v104);
    (char)v147.new(*((long long *)&_ZN5uu_ls7options13QUOTING_STYLE17h884a2ae66fea2b2bE), g_6a0d90);
    (unsigned long long)v2.long(&(char)v147, *((long long *)&_ZN5uu_ls7options13QUOTING_STYLE17h884a2ae66fea2b2bE), g_6a0d90);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-set-quoting-stylec-maybells-help-literal-quoting-stylels-help-escape-quoting-stylels-help-c-quoting-stylels-help-replace-control-charsls-help-show-control-charsls-help-show-time-fieldfieldls-help-time-changels-help-time-accessPATTERNls-help-hide-pa", 25);
    (char)v147.help(&(unsigned long long)v2, &(unsigned long long)v104);
    v200 = "literalshellshell-alwaysshell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap";
    v201 = 7;
    v198 = 0x8000000000000000;
    v199 = v0;
    v195 = 0;
    v196 = 8;
    v197 = 0;
    v202 = 0;
    v208 = "shellshell-alwaysshell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap";
    v209 = 5;
    v206 = 0x8000000000000000;
    v207 = v0;
    v203 = 0;
    v204 = 8;
    v205 = 0;
    v210 = 0;
    v72 = "shell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap";
    v73 = 12;
    v70 = 0x8000000000000000;
    v71 = v0;
    v67 = 0;
    v68 = 8;
    v69 = 0;
    v74 = 0;
    v80 = "shell-alwaysshell-escapeshell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap";
    v81 = 12;
    v78 = 0x8000000000000000;
    v79 = v0;
    v75 = 0;
    v76 = 8;
    v77 = 0;
    v82 = 0;
    v144 = "shell-escape-alwayscescapeinternal error: entered unreachable code: Should have been caught by Clap";
    v145 = 19;
    v142 = 0x8000000000000000;
    v143 = v0;
    v139 = 0;
    v140 = 8;
    v141 = 0;
    v146 = 0;
    v17 = "cescapeinternal error: entered unreachable code: Should have been caught by Clap";
    v18 = 1;
    v5 = 0x8000000000000000;
    v8 = v0;
    *((unsigned long long *)&v2) = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    (unsigned long long)v104.alias(&(unsigned long long)v2, "c-maybells-help-literal-quoting-stylels-help-escape-quoting-stylels-help-c-quoting-stylels-help-replace-control-charsls-help-show-control-charsls-help-show-time-fieldfieldls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patte", 7);
    v61 = v0;
    v218 = *((int128_t *)&v197);
    v219 = *((int128_t *)&v200);
    *((int128_t *)&v2) = *((int128_t *)&v195);
    v4 = v218;
    v9 = v199;
    v17 = v219;
    v19 = *((long long *)&v202);
    v220 = *((int128_t *)&v205);
    v221 = *((int128_t *)&v208);
    *((int128_t *)&v21) = *((int128_t *)&v203);
    v26 = v220;
    v31 = v207;
    v35 = v221;
    v36 = *((long long *)&v210);
    v41 = *((long long *)&v74);
    memcpy(&v40, &v72, 16);
    v39 = v71;
    memcpy(&v38, &v69, 16);
    memcpy(&v37, &v67, 16);
    v46 = *((long long *)&v82);
    memcpy(&v45, &v80, 16);
    v44 = v79;
    memcpy(&v43, &v77, 16);
    memcpy(&v42, &v75, 16);
    v51 = *((long long *)&v146);
    memcpy(&v50, &v144, 16);
    v49 = v143;
    memcpy(&v48, &v141, 16);
    memcpy(&v47, &v139, 16);
    v56 = v136;
    v55 = v131;
    v54 = v130;
    memcpy(&v53, &v109, 16);
    memcpy(&v52, &v83, 16);
    v57 = 0;
    v58 = 8;
    v59 = 0;
    v60 = 0x8000000000000000;
    v62 = "escapeinternal error: entered unreachable code: Should have been caught by Clap";
    v63 = 6;
    v64 = 0;
    (unsigned long long)v104.from(&(unsigned long long)v2);
    (unsigned long long)v2.value_parser(&(char)v147, &(unsigned long long)v104);
    *((int128_t *)&v147) = *((int128_t *)&_ZN5uu_ls7options13QUOTING_STYLE17h884a2ae66fea2b2bE);
    *((int128_t *)&v152) = *((int128_t *)&_ZN5uu_ls7options7quoting7LITERAL17h5ab5c78cae3915a1E);
    *((int128_t *)&v155) = *((int128_t *)&_ZN5uu_ls7options7quoting6ESCAPE17h0e0d83b6fced9a18E);
    *((int128_t *)&v158) = *((int128_t *)&_ZN5uu_ls7options7quoting1C17h952e5bdbbba18c31E);
    (unsigned long long)v104.overrides_with_all(&(unsigned long long)v2, &(char)v147);
    (char)v147.arg(&v186, &(unsigned long long)v104);
    v186.new(*((long long *)&_ZN5uu_ls7options7quoting7LITERAL17h5ab5c78cae3915a1E), g_6a17f8);
    (unsigned long long)v2.short(&v186, 78);
    v186.long(&(unsigned long long)v2, *((long long *)&_ZN5uu_ls7options7quoting7LITERAL17h5ab5c78cae3915a1E), g_6a17f8);
    (unsigned long long)v2.alias(&v186, "lls-help-literal-quoting-stylels-help-escape-quoting-stylels-help-c-quoting-stylels-help-replace-control-charsls-help-show-control-charsls-help-show-time-fieldfieldls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-he", 1);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-literal-quoting-stylels-help-escape-quoting-stylels-help-c-quoting-stylels-help-replace-control-charsls-help-show-control-charsls-help-show-time-fieldfieldls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-hel", 29);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v84) = *((int128_t *)&_ZN5uu_ls7options13QUOTING_STYLE17h884a2ae66fea2b2bE);
    *((int128_t *)&v110) = *((int128_t *)&_ZN5uu_ls7options7quoting7LITERAL17h5ab5c78cae3915a1E);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options7quoting6ESCAPE17h0e0d83b6fced9a18E);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options7quoting1C17h952e5bdbbba18c31E);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(char)v147, &(unsigned long long)v104);
    (char)v147.new(*((long long *)&_ZN5uu_ls7options7quoting6ESCAPE17h0e0d83b6fced9a18E), g_6a17e8);
    (unsigned long long)v2.short(&(char)v147, 98);
    (char)v147.long(&(unsigned long long)v2, *((long long *)&_ZN5uu_ls7options7quoting6ESCAPE17h0e0d83b6fced9a18E), g_6a17e8);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-escape-quoting-stylels-help-c-quoting-stylels-help-replace-control-charsls-help-show-control-charsls-help-show-time-fieldfieldls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-", 28);
    (unsigned long long)v2.help(&(char)v147, &(unsigned long long)v104);
    *((int128_t *)&v85) = *((int128_t *)&_ZN5uu_ls7options13QUOTING_STYLE17h884a2ae66fea2b2bE);
    *((int128_t *)&v111) = *((int128_t *)&_ZN5uu_ls7options7quoting7LITERAL17h5ab5c78cae3915a1E);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options7quoting6ESCAPE17h0e0d83b6fced9a18E);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options7quoting1C17h952e5bdbbba18c31E);
    (char)v147.overrides_with_all(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&(char)v147, 2);
    (char)v147.arg(&v186, &(unsigned long long)v2);
    v186.new(*((long long *)&_ZN5uu_ls7options7quoting1C17h952e5bdbbba18c31E), g_6a1808);
    (unsigned long long)v2.short(&v186, 81);
    v186.long(&(unsigned long long)v2, *((long long *)&_ZN5uu_ls7options7quoting1C17h952e5bdbbba18c31E), g_6a1808);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-c-quoting-stylels-help-replace-control-charsls-help-show-control-charsls-help-show-time-fieldfieldls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-size", 23);
    (unsigned long long)v2.help(&v186, &(unsigned long long)v104);
    *((int128_t *)&v86) = *((int128_t *)&_ZN5uu_ls7options13QUOTING_STYLE17h884a2ae66fea2b2bE);
    *((int128_t *)&v112) = *((int128_t *)&_ZN5uu_ls7options7quoting7LITERAL17h5ab5c78cae3915a1E);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options7quoting6ESCAPE17h0e0d83b6fced9a18E);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options7quoting1C17h952e5bdbbba18c31E);
    v186.overrides_with_all(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&v186, 2);
    v186.arg(&(char)v147, &(unsigned long long)v2);
    (char)v147.new(*((long long *)&_ZN5uu_ls7options18HIDE_CONTROL_CHARS17h712ca5c95353b27dE), g_6a0da0);
    (unsigned long long)v2.short(&(char)v147, 113);
    (char)v147.long(&(unsigned long long)v2, *((long long *)&_ZN5uu_ls7options18HIDE_CONTROL_CHARS17h712ca5c95353b27dE), g_6a0da0);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-replace-control-charsls-help-show-control-charsls-help-show-time-fieldfieldls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-", 29);
    (unsigned long long)v2.help(&(char)v147, &(unsigned long long)v104);
    *((int128_t *)&v87) = *((int128_t *)&_ZN5uu_ls7options18HIDE_CONTROL_CHARS17h712ca5c95353b27dE);
    *((int128_t *)&v113) = *((int128_t *)&_ZN5uu_ls7options18SHOW_CONTROL_CHARS17h5c061234211aeb2aE);
    (char)v147.overrides_with_all(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&(char)v147, 2);
    (char)v147.arg(&v186, &(unsigned long long)v2);
    v186.new(*((long long *)&_ZN5uu_ls7options18SHOW_CONTROL_CHARS17h5c061234211aeb2aE), g_6a0db0);
    (unsigned long long)v2.long(&v186, *((long long *)&_ZN5uu_ls7options18SHOW_CONTROL_CHARS17h5c061234211aeb2aE), g_6a0db0);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-show-control-charsls-help-show-time-fieldfieldls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-s", 26);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v88) = *((int128_t *)&_ZN5uu_ls7options18HIDE_CONTROL_CHARS17h712ca5c95353b27dE);
    *((int128_t *)&v114) = *((int128_t *)&_ZN5uu_ls7options18SHOW_CONTROL_CHARS17h5c061234211aeb2aE);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(char)v147, &(unsigned long long)v104);
    (char)v147.new(*((long long *)&_ZN5uu_ls7options4TIME17hfb4a52d9ca06507aE), g_6a0e10);
    (unsigned long long)v2.long(&(char)v147, *((long long *)&_ZN5uu_ls7options4TIME17hfb4a52d9ca06507aE), g_6a0e10);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-show-time-fieldfieldls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-so", 23);
    (char)v147.help(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.value_name(&(char)v147, "fieldls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-derefere", 5);
    v158 = "atimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time";
    v160 = 5;
    v154 = 0x8000000000000000;
    v155 = v0;
    v147 = 0;
    v151 = 8;
    v152 = 0;
    v161 = 0;
    (unsigned long long)v104.alias(&v147, "accessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 6);
    v67.alias(&(unsigned long long)v104, "usemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 3);
    v158 = "ctimestatusaccessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time";
    v160 = 5;
    v154 = 0x8000000000000000;
    v155 = v0;
    v147 = 0;
    v151 = 8;
    v152 = 0;
    v161 = 0;
    v75.alias(&v147, "statusaccessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 6);
    v158 = "mtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time";
    v160 = 5;
    v154 = 0x8000000000000000;
    v155 = v0;
    v147 = 0;
    v151 = 8;
    v152 = 0;
    v161 = 0;
    v139.alias(&v147, "modificationbirthinternal error: entered unreachable code: Invalid field for --time", 12);
    v158 = "birthinternal error: entered unreachable code: Invalid field for --time";
    v160 = 5;
    v154 = 0x8000000000000000;
    v155 = v0;
    *((unsigned long long *)&v148) = 0;
    v151 = 8;
    v152 = 0;
    v161 = 0;
    (unsigned long long)v104.alias(&(unsigned long long)v148, "creation%H:%M:%S@", 8);
    v222 = *((int128_t *)&v69);
    v223 = *((int128_t *)&v72);
    *((int128_t *)&v148) = *((int128_t *)&v67);
    v153 = v222;
    v155 = v71;
    v158 = v223;
    v161 = *((long long *)&v74);
    v224 = *((int128_t *)&v77);
    v225 = *((int128_t *)&v80);
    *((int128_t *)&v162) = *((int128_t *)&v75);
    v164 = v224;
    v166 = v79;
    v167 = v225;
    v168 = *((long long *)&v82);
    v173 = *((long long *)&v146);
    memcpy(&v172, &v144, 16);
    v171 = v143;
    memcpy(&v170, &v141, 16);
    memcpy(&v169, &v139, 16);
    v178 = v136;
    v177 = v131;
    v176 = v130;
    memcpy(&v175, &v109, 16);
    memcpy(&v174, &v83, 16);
    (unsigned long long)v104.from(&(unsigned long long)v148);
    (unsigned long long)v148.value_parser(&(unsigned long long)v2, &(unsigned long long)v104);
    memcpy(&(unsigned long long)v2, &(unsigned long long)v148, 632);
    v65 = 144 | v179;
    v66 = *((int *)&v180);
    *((int128_t *)&v149) = *((int128_t *)&_ZN5uu_ls7options4TIME17hfb4a52d9ca06507aE);
    *((int128_t *)&v152) = *((int128_t *)&_ZN5uu_ls7options4time6ACCESS17hc7f3ed5f1fd45e8cE);
    *((int128_t *)&v155) = *((int128_t *)&_ZN5uu_ls7options4time6CHANGE17h69e0d1c07fd63d41E);
    (unsigned long long)v104.overrides_with_all(&(unsigned long long)v2, &(unsigned long long)v148);
    (unsigned long long)v148.arg(&v186, &(unsigned long long)v104);
    v186.new(*((long long *)&_ZN5uu_ls7options4time6CHANGE17h69e0d1c07fd63d41E), g_6a1608);
    (unsigned long long)v2.short(&v186, 99);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-a", 19);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v89) = *((int128_t *)&_ZN5uu_ls7options4TIME17hfb4a52d9ca06507aE);
    *((int128_t *)&v115) = *((int128_t *)&_ZN5uu_ls7options4time6ACCESS17hc7f3ed5f1fd45e8cE);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options4time6CHANGE17h69e0d1c07fd63d41E);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v148, &(unsigned long long)v104);
    (unsigned long long)v148.new(*((long long *)&_ZN5uu_ls7options4time6ACCESS17hc7f3ed5f1fd45e8cE), g_6a15f8);
    (unsigned long long)v2.short(&(unsigned long long)v148, 117);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereferen", 19);
    (unsigned long long)v148.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v90) = *((int128_t *)&_ZN5uu_ls7options4TIME17hfb4a52d9ca06507aE);
    *((int128_t *)&v116) = *((int128_t *)&_ZN5uu_ls7options4time6ACCESS17hc7f3ed5f1fd45e8cE);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options4time6CHANGE17h69e0d1c07fd63d41E);
    (unsigned long long)v2.overrides_with_all(&(unsigned long long)v148, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    (unsigned long long)v148.arg(&v186, &(unsigned long long)v104);
    v186.new(_ZN5uu_ls7options4HIDE17hd4f6fa7727c5c78dE, g_6a0ec0);
    (unsigned long long)v2.long(&v186, _ZN5uu_ls7options4HIDE17hd4f6fa7727c5c78dE, g_6a0ec0);
    v186.action(&(unsigned long long)v2, 1);
    (unsigned long long)v2.value_name(&v186, "PATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-", 7);
    uucore::mods::locale::get_message(&v186, "ls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-derefer", 20);
    (unsigned long long)v104.help(&(unsigned long long)v2, &v186);
    v186.arg(&(unsigned long long)v148, &(unsigned long long)v104);
    (unsigned long long)v148.new(_ZN5uu_ls7options6IGNORE17h5df4a9a8bc0a3456E, g_6a0ed0);
    (unsigned long long)v2.short(&(unsigned long long)v148, 73);
    (unsigned long long)v148.long(&(unsigned long long)v2, _ZN5uu_ls7options6IGNORE17h5df4a9a8bc0a3456E, g_6a0ed0);
    (unsigned long long)v2.action(&(unsigned long long)v148, 1);
    (unsigned long long)v148.value_name(&(unsigned long long)v2, "PATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-", 7);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-dereference-argsls-help-aut", 22);
    (unsigned long long)v2.help(&(unsigned long long)v148, &(unsigned long long)v104);
    (unsigned long long)v148.arg(&v186, &(unsigned long long)v2);
    v186.new(_ZN5uu_ls7options14IGNORE_BACKUPS17hb0fc1e80db4f33b3E, g_6a0e20);
    (unsigned long long)v2.short(&v186, 66);
    v186.long(&(unsigned long long)v2, _ZN5uu_ls7options14IGNORE_BACKUPS17hb0fc1e80db4f33b3E, g_6a0e20);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-dereference-argsls-help-authorls-help-all-filesls", 22);
    (unsigned long long)v2.help(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v148, &(unsigned long long)v104);
    (unsigned long long)v148.new(*((long long *)&_ZN5uu_ls7options4SORT17h5bc6342fa78a2acaE), g_6a0e00);
    (unsigned long long)v2.long(&(unsigned long long)v148, *((long long *)&_ZN5uu_ls7options4SORT17h5bc6342fa78a2acaE), g_6a0e00);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-dereference-argsls-help-authorls-help-all-filesls-help-almost-allls-hel", 21);
    (unsigned long long)v148.help(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.value_name(&(unsigned long long)v148, "fieldls-help-time-changels-help-time-accessPATTERNls-help-hide-patternls-help-ignore-patternls-help-ignore-backupsls-help-sort-by-fieldls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-derefere", 5);
    *((char **)&v149) = "name";
    v151 = 4;
    v152 = "nonehelpmsecNonecallshimSlimname";
    v154 = 4;
    v155 = "timeHashtip:";
    v157 = 4;
    v158 = "size";
    v160 = 4;
    v161 = "versionextensionwidthinternal error: entered unreachable code: Invalid field for --sort";
    v162 = 7;
    v163 = "extensionwidthinternal error: entered unreachable code: Invalid field for --sort";
    v164 = 9;
    v165 = "widthinternal error: entered unreachable code: Invalid field for --sort";
    v166 = 5;
    (unsigned long long)v104.from(&(unsigned long long)v149);
    (unsigned long long)v149.value_parser(&(unsigned long long)v2, &(unsigned long long)v104);
    memcpy(&(unsigned long long)v2, &(unsigned long long)v149, 632);
    v65 = 128 | v179;
    v66 = *((int *)&v180);
    *((int128_t *)&v148) = *((int128_t *)&_ZN5uu_ls7options4SORT17h5bc6342fa78a2acaE);
    *((int128_t *)&v153) = *((int128_t *)&_ZN5uu_ls7options4sort4SIZE17hc8fef80ad512982bE);
    *((int128_t *)&v156) = *((int128_t *)&_ZN5uu_ls7options4sort4TIME17h530850a81b9af40bE);
    *((int128_t *)&v159) = *((int128_t *)&_ZN5uu_ls7options4sort4NONE17hd5449b33a1b913c3E);
    *((int128_t *)&v161) = *((int128_t *)&_ZN5uu_ls7options4sort7VERSION17h8343c3c5aaa21b95E);
    *((int128_t *)&v163) = *((int128_t *)&_ZN5uu_ls7options4sort9EXTENSION17h1b4d8e6d0d4dd7e0E);
    (unsigned long long)v104.overrides_with_all(&(unsigned long long)v2, &(unsigned long long)v149);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(*((long long *)&_ZN5uu_ls7options4sort4SIZE17hc8fef80ad512982bE), g_6a15a8);
    (unsigned long long)v2.short(&v186, 83);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-sort-by-sizels-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-dereference-argsls-help-authorls-help-all-filesls-help-almost-allls-help-directoryls-help-hu", 20);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v91) = *((int128_t *)&_ZN5uu_ls7options4SORT17h5bc6342fa78a2acaE);
    *((int128_t *)&v117) = *((int128_t *)&_ZN5uu_ls7options4sort4SIZE17hc8fef80ad512982bE);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options4sort4TIME17h530850a81b9af40bE);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options4sort4NONE17hd5449b33a1b913c3E);
    *((int128_t *)&v132) = *((int128_t *)&_ZN5uu_ls7options4sort7VERSION17h8343c3c5aaa21b95E);
    *((int128_t *)&v138) = *((int128_t *)&_ZN5uu_ls7options4sort9EXTENSION17h1b4d8e6d0d4dd7e0E);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(*((long long *)&_ZN5uu_ls7options4sort4TIME17h530850a81b9af40bE), g_6a15b8);
    (unsigned long long)v2.short(&(unsigned long long)v149, 116);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-sort-by-timels-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-dereference-argsls-help-authorls-help-all-filesls-help-almost-allls-help-directoryls-help-human-readablels-help-", 20);
    (unsigned long long)v149.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v92) = *((int128_t *)&_ZN5uu_ls7options4SORT17h5bc6342fa78a2acaE);
    *((int128_t *)&v118) = *((int128_t *)&_ZN5uu_ls7options4sort4SIZE17hc8fef80ad512982bE);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options4sort4TIME17h530850a81b9af40bE);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options4sort4NONE17hd5449b33a1b913c3E);
    *((int128_t *)&v133) = *((int128_t *)&_ZN5uu_ls7options4sort7VERSION17h8343c3c5aaa21b95E);
    *((int128_t *)&v138) = *((int128_t *)&_ZN5uu_ls7options4sort9EXTENSION17h1b4d8e6d0d4dd7e0E);
    (unsigned long long)v2.overrides_with_all(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(*((long long *)&_ZN5uu_ls7options4sort7VERSION17h8343c3c5aaa21b95E), g_6a15d8);
    (unsigned long long)v2.short(&v186, 118);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-sort-by-versionls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-dereference-argsls-help-authorls-help-all-filesls-help-almost-allls-help-directoryls-help-human-readablels-help-kibibytesls-help-sil", 23);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v93) = *((int128_t *)&_ZN5uu_ls7options4SORT17h5bc6342fa78a2acaE);
    *((int128_t *)&v119) = *((int128_t *)&_ZN5uu_ls7options4sort4SIZE17hc8fef80ad512982bE);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options4sort4TIME17h530850a81b9af40bE);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options4sort4NONE17hd5449b33a1b913c3E);
    *((int128_t *)&v134) = *((int128_t *)&_ZN5uu_ls7options4sort7VERSION17h8343c3c5aaa21b95E);
    *((int128_t *)&v138) = *((int128_t *)&_ZN5uu_ls7options4sort9EXTENSION17h1b4d8e6d0d4dd7e0E);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(*((long long *)&_ZN5uu_ls7options4sort9EXTENSION17h1b4d8e6d0d4dd7e0E), g_6a15e8);
    (unsigned long long)v2.short(&(unsigned long long)v149, 88);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-sort-by-extensionls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-dereference-argsls-help-authorls-help-all-filesls-help-almost-allls-help-directoryls-help-human-readablels-help-kibibytesls-help-sils-help-block-sizels-hel", 25);
    (unsigned long long)v149.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v94) = *((int128_t *)&_ZN5uu_ls7options4SORT17h5bc6342fa78a2acaE);
    *((int128_t *)&v120) = *((int128_t *)&_ZN5uu_ls7options4sort4SIZE17hc8fef80ad512982bE);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options4sort4TIME17h530850a81b9af40bE);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options4sort4NONE17hd5449b33a1b913c3E);
    *((int128_t *)&v135) = *((int128_t *)&_ZN5uu_ls7options4sort7VERSION17h8343c3c5aaa21b95E);
    *((int128_t *)&v138) = *((int128_t *)&_ZN5uu_ls7options4sort9EXTENSION17h1b4d8e6d0d4dd7e0E);
    (unsigned long long)v2.overrides_with_all(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(*((long long *)&_ZN5uu_ls7options4sort4NONE17hd5449b33a1b913c3E), g_6a15c8);
    (unsigned long long)v2.short(&v186, 85);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-sort-nonels-help-dereference-allls-help-dereference-dir-argsls-help-dereference-argsls-help-authorls-help-all-filesls-help-almost-allls-help-directoryls-help-human-readablels-help-kibibytesls-help-sils-help-block-sizels-help-print-inodels-help-reve", 17);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v95) = *((int128_t *)&_ZN5uu_ls7options4SORT17h5bc6342fa78a2acaE);
    *((int128_t *)&v121) = *((int128_t *)&_ZN5uu_ls7options4sort4SIZE17hc8fef80ad512982bE);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options4sort4TIME17h530850a81b9af40bE);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options4sort4NONE17hd5449b33a1b913c3E);
    *((int128_t *)&v132) = *((int128_t *)&_ZN5uu_ls7options4sort7VERSION17h8343c3c5aaa21b95E);
    *((int128_t *)&v138) = *((int128_t *)&_ZN5uu_ls7options4sort9EXTENSION17h1b4d8e6d0d4dd7e0E);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(*((long long *)&_ZN5uu_ls7options11dereference3ALL17ha70e1c381fb28868E), g_6a14d8);
    (unsigned long long)v2.short(&(unsigned long long)v149, 76);
    (unsigned long long)v149.long(&(unsigned long long)v2, *((long long *)&_ZN5uu_ls7options11dereference3ALL17ha70e1c381fb28868E), g_6a14d8);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-dereference-allls-help-dereference-dir-argsls-help-dereference-argsls-help-authorls-help-all-filesls-help-almost-allls-help-directoryls-help-human-readablels-help-kibibytesls-help-sils-help-block-sizels-help-print-inodels-help-reverse-sortls-help-r", 23);
    (unsigned long long)v2.help(&(unsigned long long)v149, &(unsigned long long)v104);
    *((int128_t *)&v96) = *((int128_t *)&_ZN5uu_ls7options11dereference3ALL17ha70e1c381fb28868E);
    *((int128_t *)&v122) = *((int128_t *)&_ZN5uu_ls7options11dereference8DIR_ARGS17hf0d4e2f145469283E);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options11dereference4ARGS17h9d26c3f38601d617E);
    (unsigned long long)v149.overrides_with_all(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&(unsigned long long)v149, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v2);
    v186.new(*((long long *)&_ZN5uu_ls7options11dereference8DIR_ARGS17hf0d4e2f145469283E), g_6a14f8);
    (unsigned long long)v2.long(&v186, *((long long *)&_ZN5uu_ls7options11dereference8DIR_ARGS17hf0d4e2f145469283E), g_6a14f8);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-dereference-dir-argsls-help-dereference-argsls-help-authorls-help-all-filesls-help-almost-allls-help-directoryls-help-human-readablels-help-kibibytesls-help-sils-help-block-sizels-help-print-inodels-help-reverse-sortls-help-recursivels-help-termina", 28);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v97) = *((int128_t *)&_ZN5uu_ls7options11dereference3ALL17ha70e1c381fb28868E);
    *((int128_t *)&v123) = *((int128_t *)&_ZN5uu_ls7options11dereference8DIR_ARGS17hf0d4e2f145469283E);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options11dereference4ARGS17h9d26c3f38601d617E);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(*((long long *)&_ZN5uu_ls7options11dereference4ARGS17h9d26c3f38601d617E), g_6a14e8);
    (unsigned long long)v2.short(&(unsigned long long)v149, 72);
    (unsigned long long)v149.long(&(unsigned long long)v2, *((long long *)&_ZN5uu_ls7options11dereference4ARGS17h9d26c3f38601d617E), g_6a14e8);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-dereference-argsls-help-authorls-help-all-filesls-help-almost-allls-help-directoryls-help-human-readablels-help-kibibytesls-help-sils-help-block-sizels-help-print-inodels-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-si", 24);
    (unsigned long long)v2.help(&(unsigned long long)v149, &(unsigned long long)v104);
    *((int128_t *)&v98) = *((int128_t *)&_ZN5uu_ls7options11dereference3ALL17ha70e1c381fb28868E);
    *((int128_t *)&v124) = *((int128_t *)&_ZN5uu_ls7options11dereference8DIR_ARGS17hf0d4e2f145469283E);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options11dereference4ARGS17h9d26c3f38601d617E);
    (unsigned long long)v149.overrides_with_all(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&(unsigned long long)v149, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v2);
    v186.new(_ZN5uu_ls7options8NO_GROUP17he81df3f3aad4f33bE, g_6a0de0);
    (unsigned long long)v2.long(&v186, _ZN5uu_ls7options8NO_GROUP17he81df3f3aad4f33bE, g_6a0de0);
    v186.short(&(unsigned long long)v2, 71);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-no-group", 16);
    (unsigned long long)v2.help(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(_ZN5uu_ls7options6AUTHOR17hdb3f9851501cb645E, g_6a0dd0);
    (unsigned long long)v2.long(&(unsigned long long)v149, _ZN5uu_ls7options6AUTHOR17hdb3f9851501cb645E, g_6a0dd0);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-authorls-help-all-filesls-help-almost-allls-help-directoryls-help-human-readablels-help-kibibytesls-help-sils-help-block-sizels-help-print-inodels-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls", 14);
    (unsigned long long)v149.help(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&(unsigned long long)v149, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v2);
    v186.new(*((long long *)&_ZN5uu_ls7options5files3ALL17h16529103a8eea774E), g_6a0c10);
    (unsigned long long)v2.short(&v186, 97);
    v186.long(&(unsigned long long)v2, *((long long *)&_ZN5uu_ls7options5files3ALL17h16529103a8eea774E), g_6a0c10);
    *((int128_t *)&v99) = *((int128_t *)&_ZN5uu_ls7options5files3ALL17h16529103a8eea774E);
    *((int128_t *)&v125) = *((int128_t *)&_ZN5uu_ls7options5files10ALMOST_ALL17h27f039401448df6dE);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-all-filesls-help-almost-allls-help-directoryls-help-human-readablels-help-kibibytesls-help-sils-help-block-sizels-help-print-inodels-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicato", 17);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&v186, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v2);
    (unsigned long long)v149.new(*((long long *)&_ZN5uu_ls7options5files10ALMOST_ALL17h27f039401448df6dE), g_6a0c20);
    (unsigned long long)v2.short(&(unsigned long long)v149, 65);
    (unsigned long long)v149.long(&(unsigned long long)v2, *((long long *)&_ZN5uu_ls7options5files10ALMOST_ALL17h27f039401448df6dE), g_6a0c20);
    *((int128_t *)&v100) = *((int128_t *)&_ZN5uu_ls7options5files3ALL17h16529103a8eea774E);
    *((int128_t *)&v126) = *((int128_t *)&_ZN5uu_ls7options5files10ALMOST_ALL17h27f039401448df6dE);
    (unsigned long long)v2.overrides_with_all(&(unsigned long long)v149, &(unsigned long long)v104);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-almost-allls-help-directoryls-help-human-readablels-help-kibibytesls-help-sils-help-block-sizels-help-print-inodels-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-fi", 18);
    (unsigned long long)v149.help(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&(unsigned long long)v149, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v2);
    v186.new(_ZN5uu_ls7options9DIRECTORY17h9bbe2397eed7d917E, g_6a0e30);
    (unsigned long long)v2.short(&v186, 100);
    v186.long(&(unsigned long long)v2, _ZN5uu_ls7options9DIRECTORY17h9bbe2397eed7d917E, g_6a0e30);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-directoryls-help-human-readablels-help-kibibytesls-help-sils-help-block-sizels-help-print-inodels-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-file-typels-help-sla", 17);
    (unsigned long long)v2.help(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(*((long long *)&_ZN5uu_ls7options4size14HUMAN_READABLE17hf7e3cdcbdf437c31E), g_6a17b8);
    (unsigned long long)v2.short(&(unsigned long long)v149, 104);
    (unsigned long long)v149.long(&(unsigned long long)v2, *((long long *)&_ZN5uu_ls7options4size14HUMAN_READABLE17hf7e3cdcbdf437c31E), g_6a17b8);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-human-readablels-help-kibibytesls-help-sils-help-block-sizels-help-print-inodels-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-", 22);
    (unsigned long long)v2.help(&(unsigned long long)v149, &(unsigned long long)v104);
    *((int128_t *)&v101) = *((int128_t *)&_ZN5uu_ls7options4size10BLOCK_SIZE17hfa4990b97781cfdaE);
    *((int128_t *)&v127) = *((int128_t *)&_ZN5uu_ls7options4size2SI17ha4ea4aded374f1feE);
    (unsigned long long)v149.overrides_with_all(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&(unsigned long long)v149, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v2);
    v186.new(_ZN5uu_ls7options4size9KIBIBYTES17h65ec465af366b2c1E, g_6a17d8);
    (unsigned long long)v2.short(&v186, 107);
    v186.long(&(unsigned long long)v2, _ZN5uu_ls7options4size9KIBIBYTES17h65ec465af366b2c1E, g_6a17d8);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-kibibytesls-help-sils-help-block-sizels-help-print-inodels-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-help-time-styleTIME_ST", 17);
    (unsigned long long)v2.help(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(*((long long *)&_ZN5uu_ls7options4size2SI17ha4ea4aded374f1feE), g_6a17c8);
    (unsigned long long)v2.long(&(unsigned long long)v149, *((long long *)&_ZN5uu_ls7options4size2SI17ha4ea4aded374f1feE), g_6a17c8);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-sils-help-block-sizels-help-print-inodels-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-t", 10);
    (unsigned long long)v149.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v102) = *((int128_t *)&_ZN5uu_ls7options4size10BLOCK_SIZE17hfa4990b97781cfdaE);
    *((int128_t *)&v128) = *((int128_t *)&_ZN5uu_ls7options4size14HUMAN_READABLE17hf7e3cdcbdf437c31E);
    (unsigned long long)v2.overrides_with_all(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(*((long long *)&_ZN5uu_ls7options4size10BLOCK_SIZE17hfa4990b97781cfdaE), g_6a17a8);
    (unsigned long long)v2.long(&v186, *((long long *)&_ZN5uu_ls7options4size10BLOCK_SIZE17hfa4990b97781cfdaE), g_6a17a8);
    memcpy(&v186, &(unsigned long long)v2, 632);
    v187 = 128 | v65;
    v188 = v66;
    (unsigned long long)v2.value_name(&v186, "BLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-display-files-columnsls-help-display-detailed-infols-help-list-entries-rowsls-help", 10);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-block-sizels-help-print-inodels-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-timels-help", 18);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v103) = *((int128_t *)&_ZN5uu_ls7options4size2SI17ha4ea4aded374f1feE);
    *((int128_t *)&v109) = *((int128_t *)&_ZN5uu_ls7options4size14HUMAN_READABLE17hf7e3cdcbdf437c31E);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v2);
    (unsigned long long)v149.new(_ZN5uu_ls7options5INODE17hd8284e39ec11506dE, g_6a0e40);
    (unsigned long long)v2.short(&(unsigned long long)v149, 105);
    (unsigned long long)v149.long(&(unsigned long long)v2, _ZN5uu_ls7options5INODE17hd8284e39ec11506dE, g_6a0e40);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-print-inodels-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-timels-help-contextls-help-gr", 19);
    (unsigned long long)v2.help(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(_ZN5uu_ls7options7REVERSE17h403d2474a90df2aaE, g_6a0e50);
    (unsigned long long)v2.short(&v186, 114);
    v186.long(&(unsigned long long)v2, _ZN5uu_ls7options7REVERSE17h403d2474a90df2aaE, g_6a0e50);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-reverse-sortls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-timels-help-contextls-help-group-directories-fir", 20);
    (unsigned long long)v2.help(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(_ZN5uu_ls7options9RECURSIVE17h3b9b53fcd4ffad26E, g_6a0e60);
    (unsigned long long)v2.short(&(unsigned long long)v149, 82);
    (unsigned long long)v149.long(&(unsigned long long)v2, _ZN5uu_ls7options9RECURSIVE17h3b9b53fcd4ffad26E, g_6a0e60);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-recursivels-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root", 17);
    (unsigned long long)v2.help(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(_ZN5uu_ls7options5WIDTH17had527c6eee006432E, g_6a0dc0);
    (unsigned long long)v2.long(&v186, _ZN5uu_ls7options5WIDTH17had527c6eee006432E, g_6a0dc0);
    v186.short(&(unsigned long long)v2, 119);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-terminal-widthls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchai", 22);
    (unsigned long long)v2.help(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.value_name(&(unsigned long long)v2, "COLSWHENhashkeysu128", 4);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(_ZN5uu_ls7options4size15ALLOCATION_SIZE17hf3481e3caa2399c5E, g_6a1798);
    (unsigned long long)v2.short(&(unsigned long long)v149, 115);
    (unsigned long long)v149.long(&(unsigned long long)v2, _ZN5uu_ls7options4size15ALLOCATION_SIZE17hf3481e3caa2399c5E, g_6a1798);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-allocation-sizels-help-color-outputls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-", 23);
    (unsigned long long)v2.help(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(_ZN5uu_ls7options5COLOR17hec93557feaaa5819E, g_6a0e70);
    (unsigned long long)v2.long(&v186, _ZN5uu_ls7options5COLOR17hec93557feaaa5819E, g_6a0e70);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-color-outputls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gn", 20);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    v17 = "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 6;
    v5 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    (unsigned long long)v104.alias(&v1, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v67.alias(&(unsigned long long)v104, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5);
    v17 = "autoday=";
    v18 = 4;
    v5 = 0x8000000000000000;
    v11 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    (unsigned long long)v104.alias(&v1, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v75.alias(&(unsigned long long)v104, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6);
    v17 = "nevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 5;
    v5 = 0x8000000000000000;
    v12 = v0;
    *((unsigned long long *)&v2) = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    (unsigned long long)v104.alias(&(unsigned long long)v2, "nointernal error: entered unreachable code: should be handled by clap", 2);
    v139.alias(&(unsigned long long)v104, "nonehelpmsecNonecallshimSlimname", 4);
    v226 = *((int128_t *)&v69);
    v227 = *((int128_t *)&v72);
    *((int128_t *)&v2) = *((int128_t *)&v67);
    v4 = v226;
    v6 = v71;
    v17 = v227;
    v19 = *((long long *)&v74);
    v228 = *((int128_t *)&v77);
    v229 = *((int128_t *)&v80);
    *((int128_t *)&v23) = *((int128_t *)&v75);
    v28 = v228;
    v33 = v79;
    v35 = v229;
    v36 = *((long long *)&v82);
    v41 = *((long long *)&v146);
    memcpy(&v40, &v144, 16);
    v39 = v143;
    memcpy(&v38, &v141, 16);
    memcpy(&v37, &v139, 16);
    (unsigned long long)v104.from(&(unsigned long long)v2);
    (unsigned long long)v2.value_parser(&v186, &(unsigned long long)v104);
    memcpy(&v186, &(unsigned long long)v2, 632);
    v187 = 128 | v65;
    v188 = v66;
    v109 = *((long long *)&v185);
    *((int128_t *)&v104) = *((int128_t *)&v183);
    (unsigned long long)v2.num_args(&v186, &(unsigned long long)v104);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v2);
    (unsigned long long)v149.new(*((long long *)&_ZN5uu_ls7options15INDICATOR_STYLE17hdc2400a5209604c0E), g_6a0e90);
    (unsigned long long)v2.long(&(unsigned long long)v149, *((long long *)&_ZN5uu_ls7options15INDICATOR_STYLE17hdc2400a5209604c0E), g_6a0e90);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-indicator-stylels-help-file-typels-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/ru", 23);
    (unsigned long long)v149.help(&(unsigned long long)v2, &(unsigned long long)v104);
    v1 = "nonehelpmsecNonecallshimSlimname";
    v3 = 4;
    v4 = "slashCOLUMNS: ls-invalid-columns-widthsihuman-readable: warning: patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-formatls-help-d";
    v5 = 5;
    v6 = "file-typeslashCOLUMNS: ls-invalid-columns-widthsihuman-readable: warning: patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls-help-set-display-format";
    v16 = 9;
    v17 = "classify";
    v18 = 8;
    (unsigned long long)v104.from(&v1);
    v1.value_parser(&(unsigned long long)v149, &(unsigned long long)v104);
    *((int128_t *)&v149) = *((int128_t *)&_ZN5uu_ls7options15indicator_style9FILE_TYPE17h6567a1cc08b0ef9cE);
    *((int128_t *)&v152) = *((int128_t *)&_ZN5uu_ls7options15indicator_style5SLASH17he71a41d1cda724d8E);
    *((int128_t *)&v155) = *((int128_t *)&_ZN5uu_ls7options15indicator_style8CLASSIFY17h59aea398f42e198aE);
    *((int128_t *)&v158) = *((int128_t *)&_ZN5uu_ls7options15INDICATOR_STYLE17hdc2400a5209604c0E);
    (unsigned long long)v104.overrides_with_all(&v1, &(unsigned long long)v149);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(*((long long *)&_ZN5uu_ls7options15indicator_style8CLASSIFY17h59aea398f42e198aE), g_6a14c8);
    v1.short(&v186, 70);
    v186.long(&v1, *((long long *)&_ZN5uu_ls7options15indicator_style8CLASSIFY17h59aea398f42e198aE), g_6a14c8);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-classify", 16);
    v1.help(&v186, &(unsigned long long)v104);
    v186.value_name(&v1, "whenpathzeroAnsi -- ", 4);
    v17 = "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 6;
    v5 = 0x8000000000000000;
    v7 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    (unsigned long long)v104.alias(&v1, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v67.alias(&(unsigned long long)v104, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5);
    v17 = "autoday=";
    v18 = 4;
    v5 = 0x8000000000000000;
    v8 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    (unsigned long long)v104.alias(&v1, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v75.alias(&(unsigned long long)v104, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6);
    v17 = "nevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 5;
    v5 = 0x8000000000000000;
    v9 = v0;
    *((unsigned long long *)&v2) = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    (unsigned long long)v104.alias(&(unsigned long long)v2, "nointernal error: entered unreachable code: should be handled by clap", 2);
    v139.alias(&(unsigned long long)v104, "nonehelpmsecNonecallshimSlimname", 4);
    v230 = *((int128_t *)&v69);
    v231 = *((int128_t *)&v72);
    *((int128_t *)&v2) = *((int128_t *)&v67);
    v4 = v230;
    v6 = v71;
    v17 = v231;
    v19 = *((long long *)&v74);
    v232 = *((int128_t *)&v77);
    v233 = *((int128_t *)&v80);
    *((int128_t *)&v20) = *((int128_t *)&v75);
    v25 = v232;
    v30 = v79;
    v35 = v233;
    v36 = *((long long *)&v82);
    v41 = *((long long *)&v146);
    memcpy(&v40, &v144, 16);
    v39 = v143;
    memcpy(&v38, &v141, 16);
    memcpy(&v37, &v139, 16);
    (unsigned long long)v104.from(&(unsigned long long)v2);
    (unsigned long long)v2.value_parser(&v186, &(unsigned long long)v104);
    v186.default_missing_value(&(unsigned long long)v2);
    memcpy(&(unsigned long long)v2, &v186, 632);
    v65 = 128 | v187;
    v66 = v188;
    v186.num_args(&(unsigned long long)v2, &v183);
    *((int128_t *)&v105) = *((int128_t *)&_ZN5uu_ls7options15indicator_style9FILE_TYPE17h6567a1cc08b0ef9cE);
    *((int128_t *)&v110) = *((int128_t *)&_ZN5uu_ls7options15indicator_style5SLASH17he71a41d1cda724d8E);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options15indicator_style8CLASSIFY17h59aea398f42e198aE);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options15INDICATOR_STYLE17hdc2400a5209604c0E);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v2);
    (unsigned long long)v149.new(*((long long *)&_ZN5uu_ls7options15indicator_style9FILE_TYPE17h6567a1cc08b0ef9cE), g_6a14b8);
    (unsigned long long)v2.long(&(unsigned long long)v149, *((long long *)&_ZN5uu_ls7options15indicator_style9FILE_TYPE17h6567a1cc08b0ef9cE), g_6a14b8);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-file-typels-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/", 17);
    (unsigned long long)v149.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v106) = *((int128_t *)&_ZN5uu_ls7options15indicator_style9FILE_TYPE17h6567a1cc08b0ef9cE);
    *((int128_t *)&v111) = *((int128_t *)&_ZN5uu_ls7options15indicator_style5SLASH17he71a41d1cda724d8E);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options15indicator_style8CLASSIFY17h59aea398f42e198aE);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options15INDICATOR_STYLE17hdc2400a5209604c0E);
    (unsigned long long)v2.overrides_with_all(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(*((long long *)&_ZN5uu_ls7options15indicator_style5SLASH17he71a41d1cda724d8E), g_6a14a8);
    (unsigned long long)v2.short(&v186, 112);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-slash-directoriesls-help-time-styleTIME_STYLEls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs:", 25);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    *((int128_t *)&v107) = *((int128_t *)&_ZN5uu_ls7options15indicator_style9FILE_TYPE17h6567a1cc08b0ef9cE);
    *((int128_t *)&v109) = *((int128_t *)&_ZN5uu_ls7options15indicator_style5SLASH17he71a41d1cda724d8E);
    *((int128_t *)&v130) = *((int128_t *)&_ZN5uu_ls7options15indicator_style8CLASSIFY17h59aea398f42e198aE);
    *((int128_t *)&v131) = *((int128_t *)&_ZN5uu_ls7options15INDICATOR_STYLE17hdc2400a5209604c0E);
    (unsigned long long)v2.overrides_with_all(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(*((long long *)&_ZN5uu_ls7options10TIME_STYLE17h9c4061feafcc43faE), g_6a0ea0);
    (unsigned long long)v2.long(&(unsigned long long)v149, *((long long *)&_ZN5uu_ls7options10TIME_STYLE17h9c4061feafcc43faE), g_6a0ea0);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-time-styleTIME_STYLEls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs:", 18);
    (unsigned long long)v149.help(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.value_name(&(unsigned long long)v149, "TIME_STYLEls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs:", 10);
    (unsigned long long)v149.env(&(unsigned long long)v2, "TIME_STYLEls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs:", 10);
    (unsigned long long)v2.value_parser(&(unsigned long long)v149);
    *((int128_t *)&v150) = *((int128_t *)&_ZN5uu_ls7options10TIME_STYLE17h9c4061feafcc43faE);
    (unsigned long long)v104.overrides_with_all(&(unsigned long long)v2, &(unsigned long long)v149);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(_ZN5uu_ls7options9FULL_TIME17h4d4ee22532e1f1b3E, g_6a0eb0);
    (unsigned long long)v2.long(&v186, _ZN5uu_ls7options9FULL_TIME17h4d4ee22532e1f1b3E, g_6a0eb0);
    v186.overrides_with(&(unsigned long long)v2, _ZN5uu_ls7options9FULL_TIME17h4d4ee22532e1f1b3E, g_6a0eb0);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-full-timels-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs:", 17);
    (unsigned long long)v2.help(&v186, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v149.new(_ZN5uu_ls7options7CONTEXT17hb8f008b5b8aaa941E, g_6a0ee0);
    (unsigned long long)v2.short(&(unsigned long long)v149, 90);
    (unsigned long long)v149.long(&(unsigned long long)v2, _ZN5uu_ls7options7CONTEXT17hb8f008b5b8aaa941E, g_6a0ee0);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-contextls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs:", 15);
    (unsigned long long)v2.help(&(unsigned long long)v149, &(unsigned long long)v104);
    (unsigned long long)v104.action(&(unsigned long long)v2, 2);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v104);
    v186.new(_ZN5uu_ls7options23GROUP_DIRECTORIES_FIRST17hff5b5f6aeec3785dE, g_6a0ef0);
    (unsigned long long)v2.long(&v186, _ZN5uu_ls7options23GROUP_DIRECTORIES_FIRST17hff5b5f6aeec3785dE, g_6a0ef0);
    uucore::mods::locale::get_message(&(unsigned long long)v104, "ls-help-group-directories-firstls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs:", 31);
    v186.help(&(unsigned long long)v2, &(unsigned long long)v104);
    (unsigned long long)v2.action(&v186, 2);
    v186.arg(&(unsigned long long)v149, &(unsigned long long)v2);
    (unsigned long long)v149.new(_ZN5uu_ls7options5PATHS17hfa32a56119ad4e17E, g_6a0e80);
    (unsigned long long)v2.action(&(unsigned long long)v149, 1);
    (unsigned long long)v149.value_hint(&(unsigned long long)v2, 2);
    v83 = 2;
    (unsigned long long)v2.value_parser(&(unsigned long long)v149, &v83);
    (unsigned long long)v149.arg(&v186, &(unsigned long long)v2);
    uucore::mods::locale::get_message(&v186, "ls-after-help/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/os_str/bytes.rs:", 13);
    v191.after_help(&(unsigned long long)v149, &v186);
    ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v192);
    return a0;
}
