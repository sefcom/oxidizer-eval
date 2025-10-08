long long uu_ls::uu_app(unsigned long a0)
{
    int v0;  // [bp-0xc48]
    void* v1;  // [bp-0xc38], Other Possible Types: char, unsigned long long
    int v2;  // [bp-0xc38]
    unsigned long long v3;  // [bp-0xc30]
    int v4;  // [bp-0xc28], Other Possible Types: void*, unsigned long long
    unsigned long long v5;  // [bp-0xc20]
    int v6;  // [bp-0xc18], Other Possible Types: unsigned long long
    int v7;  // [bp-0xc18]
    int v8;  // [bp-0xc18], Other Possible Types: unsigned long long
    int v9;  // [bp-0xc18]
    int v10;  // [bp-0xc18]
    int v11;  // [bp-0xc18]
    int v12;  // [bp-0xc18]
    int v13;  // [bp-0xc18]
    int v14;  // [bp-0xc18]
    int v15;  // [bp-0xc18]
    unsigned long long v16;  // [bp-0xc10]
    int v17;  // [bp-0xc08], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0xc00]
    unsigned long long v19;  // [bp-0xbf8], Other Possible Types: char
    int v20;  // [bp-0xbf0]
    unsigned long long v21;  // [bp-0xbf0]
    int v22;  // [bp-0xbf0]
    int v23;  // [bp-0xbf0]
    unsigned long long v24;  // [bp-0xbe8]
    int v25;  // [bp-0xbe0]
    unsigned long long v26;  // [bp-0xbe0]
    int v27;  // [bp-0xbe0]
    int v28;  // [bp-0xbe0]
    unsigned long long v29;  // [bp-0xbd8]
    int v30;  // [bp-0xbd0]
    int v31;  // [bp-0xbd0]
    unsigned long long v32;  // [bp-0xbd0]
    int v33;  // [bp-0xbd0]
    unsigned long long v34;  // [bp-0xbc8]
    int v35;  // [bp-0xbc0], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0xbb0]
    char v37;  // [bp-0xba8]
    char v38;  // [bp-0xb98]
    int v39;  // [bp-0xb88]
    char v40;  // [bp-0xb78]
    unsigned long long v41;  // [bp-0xb68]
    char v42;  // [bp-0xb60]
    char v43;  // [bp-0xb50]
    int v44;  // [bp-0xb40]
    char v45;  // [bp-0xb30]
    unsigned long long v46;  // [bp-0xb20]
    char v47;  // [bp-0xb18]
    char v48;  // [bp-0xb08]
    int v49;  // [bp-0xaf8]
    char v50;  // [bp-0xae8]
    unsigned long long v51;  // [bp-0xad8]
    char v52;  // [bp-0xad0]
    char v53;  // [bp-0xac0]
    char v54;  // [bp-0xab0]
    char v55;  // [bp-0xaa0]
    unsigned long long v56;  // [bp-0xa90]
    void* v57;  // [bp-0xa88]
    unsigned long long v58;  // [bp-0xa80]
    void* v59;  // [bp-0xa78]
    unsigned long long v60;  // [bp-0xa70]
    int v61;  // [bp-0xa68]
    unsigned long long v62;  // [bp-0xa58]
    unsigned long long v63;  // [bp-0xa50]
    char v64;  // [bp-0xa48]
    unsigned int v65;  // [bp-0x9c0]
    unsigned int v66;  // [bp-0x9bc]
    void* v67;  // [bp-0x9b0], Other Possible Types: char
    unsigned long long v68;  // [bp-0x9a8]
    void* v69;  // [bp-0x9a0], Other Possible Types: char
    unsigned long long v70;  // [bp-0x998]
    int v71;  // [bp-0x990]
    char v72;  // [bp-0x980], Other Possible Types: unsigned long long
    unsigned long long v73;  // [bp-0x978]
    char v74;  // [bp-0x970]
    void* v75;  // [bp-0x968], Other Possible Types: char
    unsigned long long v76;  // [bp-0x960]
    void* v77;  // [bp-0x958], Other Possible Types: char
    unsigned long long v78;  // [bp-0x950]
    int v79;  // [bp-0x948]
    char v80;  // [bp-0x938], Other Possible Types: unsigned long long
    unsigned long long v81;  // [bp-0x930]
    char v82;  // [bp-0x928]
    void* v83;  // [bp-0x920], Other Possible Types: char
    unsigned long long v84;  // [bp-0x918]
    void* v85;  // [bp-0x910], Other Possible Types: char
    unsigned long long v86;  // [bp-0x908]
    int v87;  // [bp-0x900]
    char v88;  // [bp-0x8f0], Other Possible Types: unsigned long long
    unsigned long long v89;  // [bp-0x8e8]
    char v90;  // [bp-0x8e0]
    char v91;  // [bp-0x8d8], Other Possible Types: unsigned long long
    unsigned long long v92;  // [bp-0x8d0]
    unsigned long long v93;  // [bp-0x8c8]
    unsigned long long v94;  // [bp-0x8c0]
    unsigned long long v95;  // [bp-0x8b8]
    unsigned long long v96;  // [bp-0x8b0]
    unsigned long long v97;  // [bp-0x8a8]
    unsigned long long v98;  // [bp-0x8a0]
    unsigned long long v99;  // [bp-0x898]
    unsigned long long v100;  // [bp-0x890]
    unsigned long long v101;  // [bp-0x888]
    unsigned long long v102;  // [bp-0x880]
    void* v103;  // [bp-0x658], Other Possible Types: char, unsigned long long
    int v104;  // [bp-0x658]
    unsigned long long v105;  // [bp-0x650]
    int v106;  // [bp-0x648], Other Possible Types: void*, unsigned long long
    unsigned long long v107;  // [bp-0x640]
    int v108;  // [bp-0x638], Other Possible Types: unsigned long long
    int v109;  // [bp-0x638]
    int v110;  // [bp-0x638]
    int v111;  // [bp-0x638]
    int v112;  // [bp-0x638]
    unsigned long long v113;  // [bp-0x630]
    int v114;  // [bp-0x628], Other Possible Types: unsigned long long
    unsigned long long v115;  // [bp-0x620]
    unsigned long long v116;  // [bp-0x618], Other Possible Types: char
    int v117;  // [bp-0x610], Other Possible Types: unsigned long long
    unsigned long long v118;  // [bp-0x608]
    int v119;  // [bp-0x600], Other Possible Types: unsigned long long
    unsigned long long v120;  // [bp-0x5f8]
    int v121;  // [bp-0x5f0], Other Possible Types: unsigned long long
    int v122;  // [bp-0x5e0]
    unsigned long long v123;  // [bp-0x5d0]
    char v124;  // [bp-0x5c8]
    char v125;  // [bp-0x5b8]
    int v126;  // [bp-0x5a8]
    char v127;  // [bp-0x598]
    unsigned long long v128;  // [bp-0x588]
    char v129;  // [bp-0x580]
    char v130;  // [bp-0x570]
    char v131;  // [bp-0x560]
    char v132;  // [bp-0x550]
    unsigned long long v133;  // [bp-0x540]
    unsigned int v134;  // [bp-0x3e0]
    char v135;  // [bp-0x3dc]
    unsigned long v136;  // [bp-0x39c]
    unsigned int v137;  // [bp-0x394]
    char v138;  // [bp-0x390]
    unsigned int v139;  // [bp-0x118]
    unsigned int v140;  // [bp-0x114]
    unsigned long long v141;  // [bp-0xd4]
    unsigned int v142;  // [bp-0xcc]
    unsigned long long v143;  // [bp-0xc8]
    void* v144;  // [bp-0xc0]
    unsigned long long v145;  // [bp-0xb8]
    void* v146;  // [bp-0xb0]
    unsigned long long v147;  // [bp-0xa8]
    int v148;  // [bp-0xa0]
    unsigned long long v149;  // [bp-0x90]
    unsigned long long v150;  // [bp-0x88]
    char v151;  // [bp-0x80]
    void* v152;  // [bp-0x78]
    unsigned long long v153;  // [bp-0x70]
    void* v154;  // [bp-0x68]
    unsigned long long v155;  // [bp-0x60]
    int v156;  // [bp-0x58]
    unsigned long long v157;  // [bp-0x48]
    unsigned long long v158;  // [bp-0x40]
    char v159;  // [bp-0x38]
    unsigned long long v162;  // rdx
    int v163;  // xmm1
    int v164;  // xmm3
    int v165;  // xmm1
    int v166;  // xmm3
    int v167;  // xmm1
    int v168;  // xmm3
    int v169;  // xmm1
    int v170;  // xmm3
    int v171;  // xmm1
    int v172;  // xmm3
    int v173;  // xmm1
    int v174;  // xmm3
    int v175;  // xmm1
    int v176;  // xmm3
    int v177;  // xmm1
    int v178;  // xmm3
    int v179;  // xmm3
    int v180;  // xmm1
    int v181;  // xmm3

    v138.new(uucore::util_name(), v162);
    v103.version(&v138);
    uucore::format_usage(&v1, "{} [OPTION]... [FILE]...List directory contents.\nIgnore files and directories starting with a '.' by defaultPrint help information.Set the display format.Display the files in columns.Display detailed information.List entries in rows instead of in columns.A", 24);
    v138.override_usage(&v103, &v1);
    v103.about(&v138);
    memcpy(&v138, &v103, 700);
    v141 = 2252383929761928 | v136;
    v142 = v137;
    v103.new("helpnoneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST", 4);
    v1.long(&v103, "helpnoneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST", 4);
    v103.help(&v1, "Print help information.Set the display format.Display the files in columns.Display detailed information.List entries in rows instead of in columns.Assume tab stops at each COLS instead of 8List entries separated by commas.List entries separated by ASCII NU", 23);
    v1.action(&v103, 5);
    v103.arg(&v138, &v1);
    v138.new("formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr", 6);
    v1.long(&v138, "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr", 6);
    v138.help(&v1, "Set the display format.Display the files in columns.Display detailed information.List entries in rows instead of in columns.Assume tab stops at each COLS instead of 8List entries separated by commas.List entries separated by ASCII NUL characters.generate o", 23);
    v1 = "long', 'FFMTZero";
    v3 = 4;
    v4 = "verbosesingle-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format";
    v5 = 7;
    v8 = "single-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format";
    v16 = 13;
    v17 = "columnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format";
    v18 = 7;
    v19 = "vertical";
    v21 = 8;
    v24 = "acrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format";
    v26 = 6;
    v29 = "horizontalcommasinternal error: entered unreachable code: Invalid field for --format";
    v32 = 10;
    v34 = "commasinternal error: entered unreachable code: Invalid field for --format";
    v35 = 6;
    v91.from(&v1);
    v1.value_parser(&v138, &v91);
    memcpy(&v138, &v1, 632);
    v139 = 144 | v65;
    v140 = v66;
    v91 = "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr";
    v92 = 6;
    v93 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
    v94 = 1;
    v95 = "long', 'FFMTZero";
    v96 = 4;
    v97 = "xtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatig";
    v98 = 1;
    v99 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
    v100 = 1;
    v101 = "diredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs";
    v102 = 5;
    v1.overrides_with_all(&v138, &v91);
    v138.arg(&v103, &v1);
    v103.new("Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati", 1);
    v1.short(&v103, 67);
    v103.help(&v1, "Display the files in columns.Display detailed information.List entries in rows instead of in columns.Assume tab stops at each COLS instead of 8List entries separated by commas.List entries separated by ASCII NUL characters.generate output designed for Emac", 29);
    v91 = "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr";
    v92 = 6;
    v93 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
    v94 = 1;
    v95 = "long', 'FFMTZero";
    v96 = 4;
    v97 = "xtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatig";
    v98 = 1;
    v99 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
    v100 = 1;
    v1.overrides_with_all(&v103, &v91);
    v91.action(&v1, 2);
    v103.arg(&v138, &v91);
    v138.new("long', 'FFMTZero", 4);
    v1.short(&v138, 108);
    v138.long(&v1, "long', 'FFMTZero", 4);
    v1.help(&v138, "Display detailed information.List entries in rows instead of in columns.Assume tab stops at each COLS instead of 8List entries separated by commas.List entries separated by ASCII NUL characters.generate output designed for Emacs' dired (Directory Editor) m", 29);
    v91 = "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr";
    v92 = 6;
    v93 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
    v94 = 1;
    v95 = "long', 'FFMTZero";
    v96 = 4;
    v97 = "xtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatig";
    v98 = 1;
    v99 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
    v100 = 1;
    v138.overrides_with_all(&v1, &v91);
    v1.action(&v138, 2);
    v138.arg(&v103, &v1);
    v103.new("xtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatig", 1);
    v1.short(&v103, 120);
    v103.help(&v1, "List entries in rows instead of in columns.Assume tab stops at each COLS instead of 8List entries separated by commas.List entries separated by ASCII NUL characters.generate output designed for Emacs' dired (Directory Editor) modehyperlink file names WHENL", 43);
    v91 = "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr";
    v92 = 6;
    v93 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
    v94 = 1;
    v95 = "long', 'FFMTZero";
    v96 = 4;
    v97 = "xtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatig";
    v98 = 1;
    v99 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
    v100 = 1;
    v1.overrides_with_all(&v103, &v91);
    v91.action(&v1, 2);
    v103.arg(&v138, &v91);
    v138.new("tabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatign", 7);
    v1.short(&v138, 84);
    v138.long(&v1, "tabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatign", 7);
    v1.env(&v138, "TABSIZE(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...List directory contents.\nIgnore files and directories starting with a '.' by defaultPrint help information.Set the display format.Display the files in columns.Display detailed information.List entries", 7);
    v138.value_name(&v1, "COLSWHENhashkeysZuluEESTu128for<ansiAKDTPPMTAEST", 4);
    v1.help(&v138, "Assume tab stops at each COLS instead of 8List entries separated by commas.List entries separated by ASCII NUL characters.generate output designed for Emacs' dired (Directory Editor) modehyperlink file names WHENList one file per line.Long format without g", 42);
    v138.arg(&v103, &v1);
    v103.new("mgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-bac", 1);
    v1.short(&v103, 109);
    v103.help(&v1, "List entries separated by commas.List entries separated by ASCII NUL characters.generate output designed for Emacs' dired (Directory Editor) modehyperlink file names WHENList one file per line.Long format without group information. Identical to --format=lo", 33);
    v91 = "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr";
    v92 = 6;
    v93 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
    v94 = 1;
    v95 = "long', 'FFMTZero";
    v96 = 4;
    v97 = "xtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatig";
    v98 = 1;
    v99 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
    v100 = 1;
    v1.overrides_with_all(&v103, &v91);
    v91.action(&v1, 2);
    v103.arg(&v138, &v91);
    v138.new("zerowhenAnsiEire -- ", 4);
    v1.long(&v138, "zerowhenAnsiEire -- ", 4);
    v138.overrides_with(&v1, "zerowhenAnsiEire -- ", 4);
    v1.help(&v138, "List entries separated by ASCII NUL characters.generate output designed for Emacs' dired (Directory Editor) modehyperlink file names WHENList one file per line.Long format without group information. Identical to --format=long with --no-group.Long format wi", 47);
    v91.action(&v1, 2);
    v138.arg(&v103, &v91);
    v103.new("diredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 5);
    v1.long(&v103, "diredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 5);
    v103.short(&v1, 68);
    v1.help(&v103, "generate output designed for Emacs' dired (Directory Editor) modehyperlink file names WHENList one file per line.Long format without group information. Identical to --format=long with --no-group.Long format without owner information.-l with numeric UIDs an", 65);
    v103.action(&v1, 2);
    v1.overrides_with(&v103, "hyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 9);
    v103.arg(&v138, &v1);
    v138.new("hyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 9);
    v1.long(&v138, "hyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 9);
    v138.help(&v1, "hyperlink file names WHENList one file per line.Long format without group information. Identical to --format=long with --no-group.Long format without owner information.-l with numeric UIDs and GIDs.Set quoting style.c-maybelUse literal quoting style. Equiv", 25);
    v17 = "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 6;
    v5 = 0x8000000000000000;
    v14 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    v91.alias(&v1, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v67.alias(&v91, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5);
    v17 = "auto";
    v18 = 4;
    v5 = 0x8000000000000000;
    v15 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    v91.alias(&v1, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v75.alias(&v91, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6);
    v17 = "nevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 5;
    v5 = 0x8000000000000000;
    v6 = v0;
    *((unsigned long long *)&v2) = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    v91.alias(&(unsigned long long)v2, "nointernal error: entered unreachable code: should be handled by clap", 2);
    v83.alias(&v91, "noneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST", 4);
    v163 = *((int128_t *)&v69);
    v164 = *((int128_t *)&v72);
    *((int128_t *)&v2) = *((int128_t *)&v67);
    v4 = v163;
    v7 = v71;
    v17 = v164;
    v19 = *((long long *)&v74);
    v165 = *((int128_t *)&v77);
    v166 = *((int128_t *)&v80);
    *((int128_t *)&v20) = *((int128_t *)&v75);
    v25 = v165;
    v30 = v79;
    v35 = v166;
    v36 = *((long long *)&v82);
    v41 = *((long long *)&v90);
    memcpy(&v40, &v88, 16);
    v39 = v87;
    memcpy(&v38, &v85, 16);
    memcpy(&v37, &v83, 16);
    v91.from(&(unsigned long long)v2);
    (unsigned long long)v2.value_parser(&v138, &v91);
    memcpy(&v138, &(unsigned long long)v2, 632);
    v139 = 128 | v65;
    v140 = v66;
    (unsigned long long)v2.num_args(&v138, 0, 1);
    v138.default_missing_value(&(unsigned long long)v2);
    (unsigned long long)v2.default_value(&v138);
    v138.value_name(&(unsigned long long)v2, "WHENhashkeysZuluEESTu128for<ansiAKDTPPMTAEST", 4);
    (unsigned long long)v2.overrides_with(&v138, "diredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 5);
    v138.arg(&v103, &(unsigned long long)v2);
    v103.new("1Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformat", 1);
    (unsigned long long)v2.short(&v103, 49);
    v103.help(&(unsigned long long)v2, "List one file per line.Long format without group information. Identical to --format=long with --no-group.Long format without owner information.-l with numeric UIDs and GIDs.Set quoting style.c-maybelUse literal quoting style. Equivalent to `--quoting-style", 23);
    (unsigned long long)v2.action(&v103, 2);
    v103.arg(&v138, &(unsigned long long)v2);
    v138.new("onumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backu", 1);
    (unsigned long long)v2.short(&v138, 111);
    v138.help(&(unsigned long long)v2, "Long format without group information. Identical to --format=long with --no-group.Long format without owner information.-l with numeric UIDs and GIDs.Set quoting style.c-maybelUse literal quoting style. Equivalent to `--quoting-style=literal`Use escape quo", 82);
    (unsigned long long)v2.action(&v138, 2);
    v138.arg(&v103, &(unsigned long long)v2);
    v103.new("gonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-back", 1);
    (unsigned long long)v2.short(&v103, 103);
    v103.help(&(unsigned long long)v2, "Long format without owner information.-l with numeric UIDs and GIDs.Set quoting style.c-maybelUse literal quoting style. Equivalent to `--quoting-style=literal`Use escape quoting style. Equivalent to `--quoting-style=escape`Use C quoting style. Equivalent ", 38);
    (unsigned long long)v2.action(&v103, 2);
    v103.arg(&v138, &(unsigned long long)v2);
    v138.new("numeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backup", 15);
    (unsigned long long)v2.short(&v138, 110);
    v138.long(&(unsigned long long)v2, "numeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backup", 15);
    (unsigned long long)v2.help(&v138, "-l with numeric UIDs and GIDs.Set quoting style.c-maybelUse literal quoting style. Equivalent to `--quoting-style=literal`Use escape quoting style. Equivalent to `--quoting-style=escape`Use C quoting style. Equivalent to `--quoting-style=c`Replace control ", 30);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f", 13);
    (unsigned long long)v2.long(&v103, "quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f", 13);
    v103.help(&(unsigned long long)v2, "Set quoting style.c-maybelUse literal quoting style. Equivalent to `--quoting-style=literal`Use escape quoting style. Equivalent to `--quoting-style=escape`Use C quoting style. Equivalent to `--quoting-style=c`Replace control characters with '?' if they ar", 18);
    v149 = "literalquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timei";
    v150 = 7;
    v147 = 0x8000000000000000;
    v148 = v0;
    v144 = 0;
    v145 = 8;
    v146 = 0;
    v151 = 0;
    v157 = "shellshell-alwaysshell-escapeshell-escape-alwaysinternal error: entered unreachable code: Should have been caught by Clap";
    v158 = 5;
    v155 = 0x8000000000000000;
    v156 = v148;
    v152 = 0;
    v153 = 8;
    v154 = 0;
    v159 = 0;
    v72 = "shell-escapeshell-escape-alwaysinternal error: entered unreachable code: Should have been caught by Clap";
    v73 = 12;
    v70 = 0x8000000000000000;
    v71 = v0;
    v67 = 0;
    v68 = 8;
    v69 = 0;
    v74 = 0;
    v80 = "shell-alwaysshell-escapeshell-escape-alwaysinternal error: entered unreachable code: Should have been caught by Clap";
    v81 = 12;
    v78 = 0x8000000000000000;
    v79 = v0;
    v75 = 0;
    v76 = 8;
    v77 = 0;
    v82 = 0;
    v88 = "shell-escape-alwaysinternal error: entered unreachable code: Should have been caught by Clap";
    v89 = 19;
    v86 = 0x8000000000000000;
    v87 = v0;
    v83 = 0;
    v84 = 8;
    v85 = 0;
    v90 = 0;
    v17 = "cblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecol";
    v18 = 1;
    v5 = 0x8000000000000000;
    v9 = v0;
    *((unsigned long long *)&v2) = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    v91.alias(&(unsigned long long)v2, "c-maybelUse literal quoting style. Equivalent to `--quoting-style=literal`Use escape quoting style. Equivalent to `--quoting-style=escape`Use C quoting style. Equivalent to `--quoting-style=c`Replace control characters with '?' if they are not escaped.Show", 7);
    v61 = v0;
    v167 = *((int128_t *)&v146);
    v168 = *((int128_t *)&v149);
    *((int128_t *)&v2) = *((int128_t *)&v144);
    v4 = v167;
    v10 = v148;
    v17 = v168;
    v19 = *((long long *)&v151);
    v169 = *((int128_t *)&v154);
    v170 = *((int128_t *)&v157);
    *((int128_t *)&v22) = *((int128_t *)&v152);
    v27 = v169;
    v31 = v156;
    v35 = v170;
    v36 = *((long long *)&v159);
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
    v51 = *((long long *)&v90);
    memcpy(&v50, &v88, 16);
    v49 = v87;
    memcpy(&v48, &v85, 16);
    memcpy(&v47, &v83, 16);
    v56 = v99;
    memcpy(&v55, &v97, 16);
    memcpy(&v54, &v95, 16);
    memcpy(&v53, &v93, 16);
    memcpy(&v52, &v91, 16);
    v57 = 0;
    v58 = 8;
    v59 = 0;
    v60 = 0x8000000000000000;
    v62 = "escapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull";
    v63 = 6;
    v64 = 0;
    v91.from(&(unsigned long long)v2);
    (unsigned long long)v2.value_parser(&v103, &v91);
    v103 = "quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f";
    v105 = 13;
    v106 = "literalquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timei";
    v107 = 7;
    v108 = "escapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull";
    v113 = 6;
    v114 = "quote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignoreco";
    v115 = 10;
    v91.overrides_with_all(&(unsigned long long)v2, &v103);
    v103.arg(&v138, &v91);
    v138.new("literalquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timei", 7);
    (unsigned long long)v2.short(&v138, 78);
    v138.long(&(unsigned long long)v2, "literalquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timei", 7);
    (unsigned long long)v2.alias(&v138);
    v138.help(&(unsigned long long)v2, "Use literal quoting style. Equivalent to `--quoting-style=literal`Use escape quoting style. Equivalent to `--quoting-style=escape`Use C quoting style. Equivalent to `--quoting-style=c`Replace control characters with '?' if they are not escaped.Show control", 66);
    v91 = "quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f";
    v92 = 13;
    v93 = "literalquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timei";
    v94 = 7;
    v95 = "escapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull";
    v96 = 6;
    v97 = "quote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignoreco";
    v98 = 10;
    (unsigned long long)v2.overrides_with_all(&v138, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("escapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull", 6);
    (unsigned long long)v2.short(&v103, 98);
    v103.long(&(unsigned long long)v2, "escapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull", 6);
    (unsigned long long)v2.help(&v103, "Use escape quoting style. Equivalent to `--quoting-style=escape`Use C quoting style. Equivalent to `--quoting-style=c`Replace control characters with '?' if they are not escaped.Show control characters 'as is' if they are not escaped.Show time in <field>:\n", 64);
    v91 = "quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f";
    v92 = 13;
    v93 = "literalquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timei";
    v94 = 7;
    v95 = "escapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull";
    v96 = 6;
    v97 = "quote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignoreco";
    v98 = 10;
    v103.overrides_with_all(&(unsigned long long)v2, &v91);
    (unsigned long long)v2.action(&v103, 2);
    v103.arg(&v138, &(unsigned long long)v2);
    v138.new("quote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignoreco", 10);
    (unsigned long long)v2.short(&v138, 81);
    v138.long(&(unsigned long long)v2, "quote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignoreco", 10);
    (unsigned long long)v2.help(&v138, "Use C quoting style. Equivalent to `--quoting-style=c`Replace control characters with '?' if they are not escaped.Show control characters 'as is' if they are not escaped.Show time in <field>:\n\taccess time (-u): atime, access, use;\n\tchange time (-t): ctime,", 54);
    v91 = "quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f";
    v92 = 13;
    v93 = "literalquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timei";
    v94 = 7;
    v95 = "escapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull";
    v96 = 6;
    v97 = "quote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignoreco";
    v98 = 10;
    v138.overrides_with_all(&(unsigned long long)v2, &v91);
    (unsigned long long)v2.action(&v138, 2);
    v138.arg(&v103, &(unsigned long long)v2);
    v103.new("hide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%", 18);
    (unsigned long long)v2.short(&v103, 113);
    v103.long(&(unsigned long long)v2, "hide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%", 18);
    (unsigned long long)v2.help(&v103, "Replace control characters with '?' if they are not escaped.Show control characters 'as is' if they are not escaped.Show time in <field>:\n\taccess time (-u): atime, access, use;\n\tchange time (-t): ctime, status.\n\tmodification time: mtime, modification.\n\tbir", 60);
    v91 = "hide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%";
    v92 = 18;
    v93 = "show-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateT";
    v94 = 18;
    v103.overrides_with_all(&(unsigned long long)v2, &v91);
    (unsigned long long)v2.action(&v103, 2);
    v103.arg(&v138, &(unsigned long long)v2);
    v138.new("show-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateT", 18);
    (unsigned long long)v2.long(&v138, "show-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateT", 18);
    v138.help(&(unsigned long long)v2, "Show control characters 'as is' if they are not escaped.Show time in <field>:\n\taccess time (-u): atime, access, use;\n\tchange time (-t): ctime, status.\n\tmodification time: mtime, modification.\n\tbirth time: birth, creation;fieldIf the long listing format (e.", 56);
    v91 = "hide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%";
    v92 = 18;
    v93 = "show-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateT";
    v94 = 18;
    (unsigned long long)v2.overrides_with_all(&v138, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("timeHashW-SUtip:", 4);
    (unsigned long long)v2.long(&v103, "timeHashW-SUtip:", 4);
    v103.help(&(unsigned long long)v2, "Show time in <field>:\n\taccess time (-u): atime, access, use;\n\tchange time (-t): ctime, status.\n\tmodification time: mtime, modification.\n\tbirth time: birth, creation;fieldIf the long listing format (e.g., -l, -o) is being used, print the status change time ", 165);
    (unsigned long long)v2.value_name(&v103, "fieldIf the long listing format (e.g., -l, -o) is being used, print the status change time (the 'ctime' in the inode) instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort accord", 5);
    v114 = "atimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time";
    v115 = 5;
    v107 = 0x8000000000000000;
    v109 = v0;
    v103 = 0;
    v105 = 8;
    v106 = 0;
    v116 = 0;
    v91.alias(&v103, "accessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 6);
    v67.alias(&v91, "usemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 3);
    v114 = "ctimestatusaccessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time";
    v115 = 5;
    v107 = 0x8000000000000000;
    v110 = v0;
    v103 = 0;
    v105 = 8;
    v106 = 0;
    v116 = 0;
    v75.alias(&v103, "statusaccessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 6);
    v114 = "mtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time";
    v115 = 5;
    v107 = 0x8000000000000000;
    v111 = v0;
    v103 = 0;
    v105 = 8;
    v106 = 0;
    v116 = 0;
    v83.alias(&v103, "modificationbirthinternal error: entered unreachable code: Invalid field for --time", 12);
    v114 = "birthinternal error: entered unreachable code: Invalid field for --time";
    v115 = 5;
    v107 = 0x8000000000000000;
    v112 = v0;
    *((unsigned long long *)&v104) = 0;
    v105 = 8;
    v106 = 0;
    v116 = 0;
    v91.alias(&(unsigned long long)v104, "creation@", 8);
    v171 = *((int128_t *)&v69);
    v172 = *((int128_t *)&v72);
    *((int128_t *)&v104) = *((int128_t *)&v67);
    v106 = v171;
    v108 = v71;
    v114 = v172;
    v116 = *((long long *)&v74);
    v173 = *((int128_t *)&v77);
    v174 = *((int128_t *)&v80);
    *((int128_t *)&v117) = *((int128_t *)&v75);
    v119 = v173;
    v121 = v79;
    v122 = v174;
    v123 = *((long long *)&v82);
    v128 = *((long long *)&v90);
    memcpy(&v127, &v88, 16);
    v126 = v87;
    memcpy(&v125, &v85, 16);
    memcpy(&v124, &v83, 16);
    v133 = v99;
    memcpy(&v132, &v97, 16);
    memcpy(&v131, &v95, 16);
    memcpy(&v130, &v93, 16);
    memcpy(&v129, &v91, 16);
    v91.from(&(unsigned long long)v104);
    (unsigned long long)v104.value_parser(&(unsigned long long)v2, &v91);
    memcpy(&(unsigned long long)v2, &(unsigned long long)v104, 632);
    v65 = 144 | v134;
    v66 = *((int *)&v135);
    v103 = "timeHashW-SUtip:";
    v105 = 4;
    v106 = "ucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiveco";
    v107 = 1;
    v108 = "cblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecol";
    v113 = 1;
    v91.overrides_with_all(&(unsigned long long)v2, &v103);
    v103.arg(&v138, &v91);
    v138.new("cblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecol", 1);
    (unsigned long long)v2.short(&v138, 99);
    v138.help(&(unsigned long long)v2, "If the long listing format (e.g., -l, -o) is being used, print the status change time (the 'ctime' in the inode) instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the status change time.", 281);
    v91 = "timeHashW-SUtip:";
    v92 = 4;
    v93 = "ucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiveco";
    v94 = 1;
    v95 = "cblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecol";
    v96 = 1;
    (unsigned long long)v2.overrides_with_all(&v138, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("ucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiveco", 1);
    (unsigned long long)v2.short(&v103, 117);
    v103.help(&(unsigned long long)v2, "If the long listing format (e.g., -l, -o) is being used, print the status access time instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the access time.PATTERNdo", 247);
    v91 = "timeHashW-SUtip:";
    v92 = 4;
    v93 = "ucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiveco";
    v94 = 1;
    v95 = "cblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecol";
    v96 = 1;
    (unsigned long long)v2.overrides_with_all(&v103, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v103.arg(&v138, &v91);
    v138.new("hidehurdNZSTTBMTmainCubaWITAcharJuly", 4);
    (unsigned long long)v2.long(&v138, "hidehurdNZSTTBMTmainCubaWITAcharJuly", 4);
    v138.action(&(unsigned long long)v2, 1);
    (unsigned long long)v2.value_name(&v138, "PATTERNdo not list implied entries matching shell PATTERN (overridden by -a or -A)do not list implied entries matching shell PATTERNSort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or widthSort by file size, largest first.Sort by modi", 7);
    v91.help(&(unsigned long long)v2, "do not list implied entries matching shell PATTERN (overridden by -a or -A)do not list implied entries matching shell PATTERNSort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or widthSort by file size, largest first.Sort by modificatio", 75);
    v138.arg(&v103, &v91);
    v103.new("ignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.", 6);
    (unsigned long long)v2.short(&v103, 73);
    v103.long(&(unsigned long long)v2, "ignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.", 6);
    (unsigned long long)v2.action(&v103, 1);
    v103.value_name(&(unsigned long long)v2, "PATTERNdo not list implied entries matching shell PATTERN (overridden by -a or -A)do not list implied entries matching shell PATTERNSort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or widthSort by file size, largest first.Sort by modi", 7);
    (unsigned long long)v2.help(&v103, "do not list implied entries matching shell PATTERNSort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or widthSort by file size, largest first.Sort by modification time (the 'mtime' in the inode), newest first.Natural sort of (version) n", 50);
    v103.arg(&v138, &(unsigned long long)v2);
    v138.new("ignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/l", 14);
    (unsigned long long)v2.short(&v138, 66);
    v138.long(&(unsigned long long)v2, "ignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/l", 14);
    (unsigned long long)v2.help(&v138, "Ignore entries which end with ~.Color output based on file type.", 32);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("sortCESTWEMT", 4);
    (unsigned long long)v2.long(&v103, "sortCESTWEMT", 4);
    v103.help(&(unsigned long long)v2, "Sort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or widthSort by file size, largest first.Sort by modification time (the 'mtime' in the inode), newest first.Natural sort of (version) numbers in the filenames.Sort alphabetically by ent", 79);
    (unsigned long long)v2.value_name(&v103, "fieldIf the long listing format (e.g., -l, -o) is being used, print the status change time (the 'ctime' in the inode) instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort accord", 5);
    v103 = "nameSJMTYDDTACDTBDSTCyanWAST    footGMT0ADDT\"`$\\Utf8EADVsortCESTWEMT";
    v105 = 4;
    v106 = "noneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST";
    v107 = 4;
    v108 = "timeHashW-SUtip:";
    v113 = 4;
    v114 = "sizeIranWESTAKSTHKSTACSTi128 as dyn MaskCASTERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGzonenameESTRPIPEsearcherNotFoundTimedOutpatternsUS/SamoaENETDOWNThursday\n       FebruaryHongkongEtc/Zulu";
    v115 = 4;
    v116 = "versionextensioninternal error: entered unreachable code: Invalid field for --sort";
    v117 = 7;
    v118 = "extensioninternal error: entered unreachable code: Invalid field for --sort";
    v119 = 9;
    v120 = "widthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` o";
    v121 = 5;
    v91.from(&v103);
    v103.value_parser(&(unsigned long long)v2, &v91);
    memcpy(&(unsigned long long)v2, &v103, 632);
    v65 = 128 | v134;
    v66 = *((int *)&v135);
    v103 = "sortCESTWEMT";
    v105 = 4;
    v106 = "StUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecurs";
    v107 = 1;
    v108 = "tUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursi";
    v113 = 1;
    v114 = "UvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiv";
    v115 = 1;
    v116 = "vXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursive";
    v117 = 1;
    v118 = "Xucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivec";
    v119 = 1;
    v91.overrides_with_all(&(unsigned long long)v2, &v103);
    v103.arg(&v138, &v91);
    v138.new("StUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecurs", 1);
    (unsigned long long)v2.short(&v138, 83);
    v138.help(&(unsigned long long)v2, "Sort by file size, largest first.Sort by modification time (the 'mtime' in the inode), newest first.Natural sort of (version) numbers in the filenames.Sort alphabetically by entry extension.Do not sort; list the files in whatever order they are stored in t", 33);
    v91 = "sortCESTWEMT";
    v92 = 4;
    v93 = "StUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecurs";
    v94 = 1;
    v95 = "tUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursi";
    v96 = 1;
    v97 = "UvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiv";
    v98 = 1;
    v99 = "vXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursive";
    v100 = 1;
    v101 = "Xucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivec";
    v102 = 1;
    (unsigned long long)v2.overrides_with_all(&v138, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("tUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursi", 1);
    (unsigned long long)v2.short(&v103, 116);
    v103.help(&(unsigned long long)v2, "Sort by modification time (the 'mtime' in the inode), newest first.Natural sort of (version) numbers in the filenames.Sort alphabetically by entry extension.Do not sort; list the files in whatever order they are stored in the directory.  This is especially", 67);
    v91 = "sortCESTWEMT";
    v92 = 4;
    v93 = "StUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecurs";
    v94 = 1;
    v95 = "tUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursi";
    v96 = 1;
    v97 = "UvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiv";
    v98 = 1;
    v99 = "vXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursive";
    v100 = 1;
    v101 = "Xucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivec";
    v102 = 1;
    (unsigned long long)v2.overrides_with_all(&v103, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v103.arg(&v138, &v91);
    v138.new("vXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursive", 1);
    (unsigned long long)v2.short(&v138, 118);
    v138.help(&(unsigned long long)v2, "Natural sort of (version) numbers in the filenames.Sort alphabetically by entry extension.Do not sort; list the files in whatever order they are stored in the directory.  This is especially useful when listing very large directories, since not doing any so", 51);
    v91 = "sortCESTWEMT";
    v92 = 4;
    v93 = "StUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecurs";
    v94 = 1;
    v95 = "tUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursi";
    v96 = 1;
    v97 = "UvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiv";
    v98 = 1;
    v99 = "vXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursive";
    v100 = 1;
    v101 = "Xucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivec";
    v102 = 1;
    (unsigned long long)v2.overrides_with_all(&v138, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("Xucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivec", 1);
    (unsigned long long)v2.short(&v103, 88);
    v103.help(&(unsigned long long)v2, "Sort alphabetically by entry extension.Do not sort; list the files in whatever order they are stored in the directory.  This is especially useful when listing very large directories, since not doing any sorting can be noticeably faster.When showing file in", 39);
    v91 = "sortCESTWEMT";
    v92 = 4;
    v93 = "StUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecurs";
    v94 = 1;
    v95 = "tUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursi";
    v96 = 1;
    v97 = "UvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiv";
    v98 = 1;
    v99 = "vXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursive";
    v100 = 1;
    v101 = "Xucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivec";
    v102 = 1;
    (unsigned long long)v2.overrides_with_all(&v103, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v103.arg(&v138, &v91);
    v138.new("UvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiv", 1);
    (unsigned long long)v2.short(&v138, 85);
    v138.help(&(unsigned long long)v2, "Do not sort; list the files in whatever order they are stored in the directory.  This is especially useful when listing very large directories, since not doing any sorting can be noticeably faster.When showing file information for a symbolic link, show inf", 197);
    v91 = "sortCESTWEMT";
    v92 = 4;
    v93 = "StUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecurs";
    v94 = 1;
    v95 = "tUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursi";
    v96 = 1;
    v97 = "UvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursiv";
    v98 = 1;
    v99 = "vXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursive";
    v100 = 1;
    v101 = "Xucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivec";
    v102 = 1;
    (unsigned long long)v2.overrides_with_all(&v138, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("dereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directori", 11);
    (unsigned long long)v2.short(&v103, 76);
    v103.long(&(unsigned long long)v2, "dereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directori", 11);
    (unsigned long long)v2.help(&v103, "When showing file information for a symbolic link, show information for the file the link references rather than the link itself.Do not follow symlinks except when they link to directories and are given as command line arguments.Do not follow symlinks exce", 129);
    v91 = "dereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directori";
    v92 = 11;
    v93 = "dereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%";
    v94 = 39;
    v95 = "dereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdir";
    v96 = 24;
    v103.overrides_with_all(&(unsigned long long)v2, &v91);
    (unsigned long long)v2.action(&v103, 2);
    v103.arg(&v138, &(unsigned long long)v2);
    v138.new("dereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%", 39);
    (unsigned long long)v2.long(&v138, "dereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%", 39);
    v138.help(&(unsigned long long)v2, "Do not follow symlinks except when they link to directories and are given as command line arguments.Do not follow symlinks except when given as command line arguments.Do not show group in long format.Show author in long format. On the supported platforms, ", 100);
    v91 = "dereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directori";
    v92 = 11;
    v93 = "dereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%";
    v94 = 39;
    v95 = "dereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdir";
    v96 = 24;
    (unsigned long long)v2.overrides_with_all(&v138, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("dereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdir", 24);
    (unsigned long long)v2.short(&v103, 72);
    v103.long(&(unsigned long long)v2, "dereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdir", 24);
    (unsigned long long)v2.help(&v103, "Do not follow symlinks except when given as command line arguments.Do not show group in long format.Show author in long format. On the supported platforms, the author always matches the file owner.Do not ignore hidden files (files with names that start wit", 67);
    v91 = "dereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directori";
    v92 = 11;
    v93 = "dereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%";
    v94 = 39;
    v95 = "dereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdir";
    v96 = 24;
    v103.overrides_with_all(&(unsigned long long)v2, &v91);
    (unsigned long long)v2.action(&v103, 2);
    v103.arg(&v138, &(unsigned long long)v2);
    v138.new("no-groupPatternsParseIntcreation@", 8);
    (unsigned long long)v2.long(&v138, "no-groupPatternsParseIntcreation@", 8);
    v138.short(&(unsigned long long)v2, 71);
    (unsigned long long)v2.help(&v138, "Do not show group in long format.Show author in long format. On the supported platforms, the author always matches the file owner.Do not ignore hidden files (files with names that start with '.').In a directory, do not ignore all file names that start with", 33);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("authorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overfl", 6);
    (unsigned long long)v2.long(&v103, "authorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overfl", 6);
    v103.help(&(unsigned long long)v2, "Show author in long format. On the supported platforms, the author always matches the file owner.Do not ignore hidden files (files with names that start with '.').In a directory, do not ignore all file names that start with '.', only ignore '.' and '..'.On", 97);
    (unsigned long long)v2.action(&v103, 2);
    v103.arg(&v138, &(unsigned long long)v2);
    v138.new("allalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinode", 3);
    (unsigned long long)v2.short(&v138, 97);
    v138.long(&(unsigned long long)v2, "allalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinode", 3);
    v91 = "allalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinode";
    v92 = 3;
    v93 = "almost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinoderev";
    v94 = 10;
    (unsigned long long)v2.overrides_with_all(&v138, &v91);
    v138.help(&(unsigned long long)v2, "Do not ignore hidden files (files with names that start with '.').In a directory, do not ignore all file names that start with '.', only ignore '.' and '..'.Only list the names of directories, rather than listing directory contents. This will not follow sy", 66);
    (unsigned long long)v2.action(&v138, 2);
    v138.arg(&v103, &(unsigned long long)v2);
    v103.new("almost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinoderev", 10);
    (unsigned long long)v2.short(&v103, 65);
    v103.long(&(unsigned long long)v2, "almost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinoderev", 10);
    v91 = "allalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinode";
    v92 = 3;
    v93 = "almost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinoderev";
    v94 = 10;
    (unsigned long long)v2.overrides_with_all(&v103, &v91);
    v103.help(&(unsigned long long)v2, "In a directory, do not ignore all file names that start with '.', only ignore '.' and '..'.Only list the names of directories, rather than listing directory contents. This will not follow symbolic links unless one of `--dereference-command-line (-H)`, `--d", 91);
    (unsigned long long)v2.action(&v103, 2);
    v103.arg(&v138, &(unsigned long long)v2);
    v138.new("directoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/ho", 9);
    (unsigned long long)v2.short(&v138, 100);
    v138.long(&(unsigned long long)v2, "directoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/ho", 9);
    (unsigned long long)v2.help(&v138, "Only list the names of directories, rather than listing directory contents. This will not follow symbolic links unless one of `--dereference-command-line (-H)`, `--dereference (-L)`, or `--dereference-command-line-symlink-to-dir` is specified.Print human r", 243);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("human-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindi", 14);
    (unsigned long long)v2.short(&v103, 104);
    v103.long(&(unsigned long long)v2, "human-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindi", 14);
    (unsigned long long)v2.help(&v103, "Print human readable file sizes (e.g. 1K 234M 56G).default to 1024-byte blocks for file system usage; used only with -s and per directory totalsPrint human readable file sizes using powers of 1000 instead of 1024.scale sizes by BLOCK_SIZE when printing the", 51);
    v91 = "block-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolo";
    v92 = 10;
    v93 = "sikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletim";
    v94 = 2;
    v103.overrides_with_all(&(unsigned long long)v2, &v91);
    (unsigned long long)v2.action(&v103, 2);
    v103.arg(&v138, &(unsigned long long)v2);
    v138.new("kibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-", 9);
    (unsigned long long)v2.short(&v138, 107);
    v138.long(&(unsigned long long)v2, "kibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-", 9);
    (unsigned long long)v2.help(&v138, "default to 1024-byte blocks for file system usage; used only with -s and per directory totalsPrint human readable file sizes using powers of 1000 instead of 1024.scale sizes by BLOCK_SIZE when printing themprint the index number of each fileReverse whateve", 93);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("sikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletim", 2);
    (unsigned long long)v2.long(&v103, "sikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletim", 2);
    v103.help(&(unsigned long long)v2, "Print human readable file sizes using powers of 1000 instead of 1024.scale sizes by BLOCK_SIZE when printing themprint the index number of each fileReverse whatever the sorting method is e.g., list files in reverse alphabetical order, youngest first, small", 69);
    v91 = "block-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolo";
    v92 = 10;
    v93 = "human-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindi";
    v94 = 14;
    (unsigned long long)v2.overrides_with_all(&v103, &v91);
    v91.action(&(unsigned long long)v2, 2);
    v103.arg(&v138, &v91);
    v138.new("block-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolo", 10);
    (unsigned long long)v2.long(&v138, "block-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolo", 10);
    memcpy(&v138, &(unsigned long long)v2, 632);
    v139 = 128 | v65;
    v140 = v66;
    (unsigned long long)v2.value_name(&v138, "BLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~TABSIZE(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...List directory contents.\nIgnore files and directories starting with a '.' by defaultPrint help information.Set the display format.Display the files in column", 10);
    v138.help(&(unsigned long long)v2, "scale sizes by BLOCK_SIZE when printing themprint the index number of each fileReverse whatever the sorting method is e.g., list files in reverse alphabetical order, youngest first, smallest first, or whatever.List the contents of all directories recursive", 44);
    v91 = "sikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletim";
    v92 = 2;
    v93 = "human-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindi";
    v94 = 14;
    (unsigned long long)v2.overrides_with_all(&v138, &v91);
    v138.arg(&v103, &(unsigned long long)v2);
    v103.new("inodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm", 5);
    (unsigned long long)v2.short(&v103, 105);
    v103.long(&(unsigned long long)v2, "inodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm", 5);
    (unsigned long long)v2.help(&v103, "print the index number of each fileReverse whatever the sorting method is e.g., list files in reverse alphabetical order, youngest first, smallest first, or whatever.List the contents of all directories recursively.Assume that the terminal is COLS columns ", 35);
    v91.action(&(unsigned long long)v2, 2);
    v103.arg(&v138, &v91);
    v138.new("reverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.c", 7);
    (unsigned long long)v2.short(&v138, 114);
    v138.long(&(unsigned long long)v2, "reverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.c", 7);
    (unsigned long long)v2.help(&v138, "Reverse whatever the sorting method is e.g., list files in reverse alphabetical order, youngest first, smallest first, or whatever.List the contents of all directories recursively.Assume that the terminal is COLS columns wide.print the allocated size of ea", 131);
    v91.action(&(unsigned long long)v2, 2);
    v138.arg(&v103, &v91);
    v103.new("recursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/re", 9);
    (unsigned long long)v2.short(&v103, 82);
    v103.long(&(unsigned long long)v2, "recursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/re", 9);
    (unsigned long long)v2.help(&v103, "List the contents of all directories recursively.Assume that the terminal is COLS columns wide.print the allocated size of each file, in blocksAppend indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-type), classify (", 49);
    v91.action(&(unsigned long long)v2, 2);
    v103.arg(&v138, &v91);
    v138.new("widthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` o", 5);
    (unsigned long long)v2.long(&v138, "widthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` o", 5);
    v138.short(&(unsigned long long)v2, 119);
    (unsigned long long)v2.help(&v138, "Assume that the terminal is COLS columns wide.print the allocated size of each file, in blocksAppend indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-type), classify (-F)Append a character to each file name indicatin", 46);
    v91.value_name(&(unsigned long long)v2, "COLSWHENhashkeysZuluEESTu128for<ansiAKDTPPMTAEST", 4);
    v138.arg(&v103, &v91);
    v103.new("sizeIranWESTAKSTHKSTACSTi128 as dyn MaskCASTERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGzonenameESTRPIPEsearcherNotFoundTimedOutpatternsUS/SamoaENETDOWNThursday\n       FebruaryHongkongEtc/Zulu", 4);
    (unsigned long long)v2.short(&v103, 115);
    v103.long(&(unsigned long long)v2, "sizeIranWESTAKSTHKSTACSTi128 as dyn MaskCASTERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGzonenameESTRPIPEsearcherNotFoundTimedOutpatternsUS/SamoaENETDOWNThursday\n       FebruaryHongkongEtc/Zulu", 4);
    (unsigned long long)v2.help(&v103, "print the allocated size of each file, in blocksAppend indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-type), classify (-F)Append a character to each file name indicating the file type. Also, for regular files that ", 48);
    v91.action(&(unsigned long long)v2, 2);
    v103.arg(&v138, &v91);
    v138.new("colorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/sr", 5);
    (unsigned long long)v2.long(&v138, "colorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/sr", 5);
    v138.help(&(unsigned long long)v2, "Color output based on file type.", 32);
    v17 = "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 6;
    v5 = 0x8000000000000000;
    v11 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    v91.alias(&v1, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v67.alias(&v91, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5);
    v17 = "auto";
    v18 = 4;
    v5 = 0x8000000000000000;
    v12 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    v91.alias(&v1, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v75.alias(&v91, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6);
    v17 = "nevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 5;
    v5 = 0x8000000000000000;
    v13 = v0;
    *((unsigned long long *)&v2) = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    v91.alias(&(unsigned long long)v2, "nointernal error: entered unreachable code: should be handled by clap", 2);
    v83.alias(&v91, "noneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST", 4);
    v175 = *((int128_t *)&v69);
    v176 = *((int128_t *)&v72);
    *((int128_t *)&v2) = *((int128_t *)&v67);
    v4 = v175;
    v6 = v71;
    v17 = v176;
    v19 = *((long long *)&v74);
    v177 = *((int128_t *)&v77);
    v178 = *((int128_t *)&v80);
    *((int128_t *)&v23) = *((int128_t *)&v75);
    v28 = v177;
    v33 = v79;
    v35 = v178;
    v36 = *((long long *)&v82);
    v41 = *((long long *)&v90);
    memcpy(&v40, &v88, 16);
    v39 = v87;
    memcpy(&v38, &v85, 16);
    memcpy(&v37, &v83, 16);
    v91.from(&(unsigned long long)v2);
    (unsigned long long)v2.value_parser(&v138, &v91);
    memcpy(&v138, &(unsigned long long)v2, 632);
    v139 = 128 | v65;
    v140 = v66;
    (unsigned long long)v2.num_args(&v138, 0, 1);
    v138.arg(&v103, &(unsigned long long)v2);
    v103.new("indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.cr", 15);
    (unsigned long long)v2.long(&v103, "indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.cr", 15);
    v103.help(&(unsigned long long)v2, "Append indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-type), classify (-F)Append a character to each file name indicating the file type. Also, for regular files that are executable, append '*'. The file type indica", 116);
    v1 = "noneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST";
    v3 = 4;
    v4 = "slashCOLUMNS: ignoring invalid width in environment variable COLUMNS: : warning: Invalid pattern for ignore: Invalid pattern for hide: ";
    v5 = 5;
    v6 = "file-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-";
    v16 = 9;
    v17 = "classify";
    v18 = 8;
    v91.from(&v1);
    v1.value_parser(&v103, &v91);
    v103 = "file-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-";
    v105 = 9;
    v106 = "pfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup";
    v107 = 1;
    v108 = "classify";
    v113 = 8;
    v114 = "indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.cr";
    v115 = 15;
    v91.overrides_with_all(&v1, &v103);
    v103.arg(&v138, &v91);
    v138.new("classify", 8);
    v1.short(&v138, 70);
    v138.long(&v1, "classify", 8);
    v1.help(&v138, "Append a character to each file name indicating the file type. Also, for regular files that are executable, append '*'. The file type indicators are '/' for directories, '@' for symbolic links, '|' for FIFOs, '=' for sockets, '>' for doors, and nothing for regular files. when may be omitted, or one of:\n\tnone - Do not classify. This is the default.\n\tauto - Only classify if standard output is a terminal.\n\talways - Always classify.\nSpecifying --classify and no when is equivalent to --classify=always. This will not follow symbolic links listed on the command line unless the --dereference-command-line (-H), --dereference (-L), or --dereference-command-line-symlink-to-dir options are specified.", 697);
    v138.value_name(&v1, "whenAnsiEire -- ", 4);
    v17 = "alwaysyesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 6;
    v5 = 0x8000000000000000;
    v7 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    v91.alias(&v1, "yesforcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v67.alias(&v91, "forcettyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 5);
    v17 = "auto";
    v18 = 4;
    v5 = 0x8000000000000000;
    v8 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    v91.alias(&v1, "ttyif-ttynevernointernal error: entered unreachable code: should be handled by clap", 3);
    v75.alias(&v91, "if-ttynevernointernal error: entered unreachable code: should be handled by clap", 6);
    v17 = "nevernointernal error: entered unreachable code: should be handled by clap";
    v18 = 5;
    v5 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v3 = 8;
    v4 = 0;
    v19 = 0;
    v91.alias(&v1, "nointernal error: entered unreachable code: should be handled by clap", 2);
    v83.alias(&v91, "noneSDMTHKWTNonecallNZDTshimSlimAHSTPKSTMDST", 4);
    v179 = *((int128_t *)&v72);
    memcpy(&v1, &v67, 16);
    *((int128_t *)&v4) = *((int128_t *)&v69);
    v6 = v71;
    v17 = v179;
    v19 = *((long long *)&v74);
    v180 = *((int128_t *)&v77);
    v181 = *((int128_t *)&v80);
    *((int128_t *)&v20) = *((int128_t *)&v75);
    v25 = v180;
    v30 = v79;
    v35 = v181;
    v36 = *((long long *)&v82);
    v41 = *((long long *)&v90);
    memcpy(&v40, &v88, 16);
    v39 = v87;
    memcpy(&v38, &v85, 16);
    memcpy(&v37, &v83, 16);
    v91.from(&v1);
    v1.value_parser(&v138, &v91);
    v138.default_missing_value(&v1);
    memcpy(&v1, &v138, 632);
    v65 = 128 | v139;
    v66 = v140;
    v138.num_args(&v1, 0, 1);
    v91 = "file-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-";
    v92 = 9;
    v93 = "pfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup";
    v94 = 1;
    v95 = "classify";
    v96 = 8;
    v97 = "indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.cr";
    v98 = 15;
    v1.overrides_with_all(&v138, &v91);
    v138.arg(&v103, &v1);
    v103.new("file-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-", 9);
    v1.long(&v103, "file-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-", 9);
    v103.help(&v1, "Same as --classify, but do not append '*'Append / indicator to directories.time/date format with -l; see TIME_STYLE belowTIME_STYLElike -l --time-style=full-isogroup directories before files; can be augmented with a --sort option, but any use of --sort=non", 41);
    v91 = "file-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-";
    v92 = 9;
    v93 = "pfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup";
    v94 = 1;
    v95 = "classify";
    v96 = 8;
    v97 = "indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.cr";
    v98 = 15;
    v1.overrides_with_all(&v103, &v91);
    v91.action(&v1, 2);
    v103.arg(&v138, &v91);
    v138.new("pfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup", 1);
    v1.short(&v138, 112);
    v138.help(&v1, "Append / indicator to directories.time/date format with -l; see TIME_STYLE belowTIME_STYLElike -l --time-style=full-isogroup directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables groupingThe TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.:", 34);
    v91 = "file-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-";
    v92 = 9;
    v93 = "pfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup";
    v94 = 1;
    v95 = "classify";
    v96 = 8;
    v97 = "indicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.cr";
    v98 = 15;
    v1.overrides_with_all(&v138, &v91);
    v91.action(&v1, 2);
    v138.arg(&v103, &v91);
    v103.new("time-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8", 10);
    v1.long(&v103, "time-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8", 10);
    v103.help(&v1, "time/date format with -l; see TIME_STYLE belowTIME_STYLElike -l --time-style=full-isogroup directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables groupingThe TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.:", 46);
    v1.value_name(&v103, "TIME_STYLElike -l --time-style=full-isogroup directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables groupingThe TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.:", 10);
    v103.env(&v1, "TIME_STYLElike -l --time-style=full-isogroup directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables groupingThe TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.:", 10);
    v1.value_parser(&v103);
    v103 = "time-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8";
    v105 = 10;
    v91.overrides_with_all(&v1, &v103);
    v103.arg(&v138, &v91);
    v138.new("full-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/", 9);
    v1.long(&v138, "full-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/", 9);
    v138.overrides_with(&v1, "full-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/", 9);
    v1.help(&v138, "like -l --time-style=full-isogroup directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables groupingThe TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.:", 29);
    v91.action(&v1, 2);
    v138.arg(&v103, &v91);
    v103.new("contextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/s", 7);
    v1.short(&v103, 90);
    v103.long(&v1, "contextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/s", 7);
    v1.help(&v103, "print any security context of each file (not enabled)1Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-style", 53);
    v91.action(&v1, 2);
    v103.arg(&v138, &v91);
    v138.new("group-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/date", 23);
    v1.long(&v138, "group-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/date", 23);
    v138.help(&v1, "group directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables groupingThe TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.:", 120);
    v1.action(&v138, 2);
    v138.arg(&v103, &v1);
    v103.new("pathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/ind", 5);
    v1.action(&v103, 1);
    v103.value_hint(&v1);
    v91 = 2;
    v1.value_parser(&v103, &v91);
    v103.arg(&v138, &v1);
    v143.after_help(&v103);
    return a0;
}
