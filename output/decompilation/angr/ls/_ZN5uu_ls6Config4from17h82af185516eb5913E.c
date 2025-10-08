long long uu_ls::Config::from(unsigned long a0, char *a1)
{
    char v0;  // [bp-0x416]
    char v1;  // [bp-0x415]
    unsigned int v3;  // [bp-0x414]
    unsigned int v5;  // [bp-0x410]
    char v6;  // [bp-0x40b]
    char v7;  // [sp-0x40a]
    char v8;  // [bp-0x409]
    unsigned int v10;  // [bp-0x408]
    char v11;  // [bp-0x403]
    char v12;  // [bp-0x402]
    char v13;  // [bp-0x401]
    char v14;  // [bp-0x400]
    char v15;  // [bp-0x3ff]
    char v16;  // [bp-0x3fe]
    char v17;  // [bp-0x3fd]
    char v18;  // [bp-0x3fc], Other Possible Types: unsigned int
    char v19;  // [bp-0x3fc]
    char v20;  // [bp-0x3fc]
    char *v21;  // [bp-0x3f8]
    char v22;  // [bp-0x3ec]
    char v23;  // [bp-0x3ec]
    unsigned int v24;  // [bp-0x3ec]
    char v25;  // [bp-0x3e8], Other Possible Types: unsigned int
    char v26;  // [bp-0x3e8]
    unsigned int v27;  // [bp-0x3e4]
    unsigned long long v29;  // [bp-0x3e0]
    char *v31;  // [bp-0x3d8]
    char v32;  // [bp-0x3d0], Other Possible Types: unsigned int
    char v33;  // [bp-0x3d0]
    unsigned short v34;  // [bp-0x3ca]
    char *v35;  // [bp-0x3c8]
    char *v36;  // [bp-0x3c8]
    char *v37;  // [bp-0x3c8]
    int v38;  // [bp-0x3c8], Other Possible Types: char
    unsigned long long v39;  // [bp-0x3c0]
    void* v40;  // [bp-0x3b8], Other Possible Types: unsigned long long
    struct_0 *v41;  // [bp-0x3b0]
    unsigned long long v42;  // [bp-0x3a8]
    unsigned long long v43;  // [bp-0x3a0]
    char *v45;  // [bp-0x398], Other Possible Types: char, unsigned long long
    int v46;  // [bp-0x398], Other Possible Types: char *
    int v47;  // [bp-0x398]
    char *v48;  // [bp-0x390], Other Possible Types: int, void*, char, unsigned short
    int v49;  // [bp-0x38e]
    void* v50;  // [bp-0x388], Other Possible Types: char *, unsigned long long
    void* v51;  // [bp-0x380], Other Possible Types: int, unsigned long long, unsigned long
    int v52;  // [bp-0x37e]
    int v53;  // [bp-0x378], Other Possible Types: unsigned long long
    int v54;  // [bp-0x370], Other Possible Types: unsigned long long
    void* v55;  // [bp-0x368], Other Possible Types: unsigned long long
    int v56;  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long long v57;  // [bp-0x358]
    void* v58;  // [bp-0x350], Other Possible Types: unsigned long long
    int v59;  // [bp-0x348], Other Possible Types: unsigned long long
    char *v60;  // [bp-0x340]
    int v61;  // [bp-0x338], Other Possible Types: unsigned long long
    unsigned long long v62;  // [bp-0x330]
    int v63;  // [bp-0x328], Other Possible Types: unsigned long long
    void* v64;  // [bp-0x320]
    unsigned long long v65;  // [bp-0x318]
    void* v66;  // [bp-0x310], Other Possible Types: unsigned long long
    int v67;  // [bp-0x308], Other Possible Types: unsigned long long
    unsigned long long v68;  // [bp-0x300]
    int v69;  // [bp-0x2f8], Other Possible Types: unsigned long long
    int v70;  // [bp-0x2e8]
    int v71;  // [bp-0x2e0]
    unsigned long long v72;  // [bp-0x2d8]
    unsigned long long v73;  // [bp-0x2d0]
    unsigned int v74;  // [bp-0x2c8]
    unsigned int v75;  // [bp-0x2c4]
    unsigned int v76;  // [bp-0x2c0]
    unsigned int v77;  // [bp-0x2bc]
    void* v78;  // [bp-0x2b8]
    unsigned long long v79;  // [bp-0x2b0]
    void* v80;  // [bp-0x2a8]
    unsigned long long v81;  // [bp-0x2a0]
    unsigned long long v82;  // [bp-0x298]
    int v83;  // [bp-0x296]
    char *v84;  // [bp-0x290]
    char *v85;  // [bp-0x290]
    unsigned long long v86;  // [bp-0x288]
    int v87;  // [bp-0x286]
    void* v88;  // [bp-0x280]
    unsigned long long v89;  // [bp-0x278]
    unsigned long long v90;  // [bp-0x270]
    unsigned long long v91;  // [bp-0x268]
    char v92;  // [bp-0x260]
    char v93;  // [sp-0x200]
    char *v94;  // [bp-0x200]
    unsigned long long v96;  // [bp-0x1f8]
    char *v97;  // [bp-0x1f0]
    char v98;  // [sp-0x1e8]
    char *v99;  // [bp-0x1e8]
    unsigned long long v101;  // [bp-0x1e0]
    char *v102;  // [bp-0x1d8]
    char v103;  // [sp-0x1d0]
    char *v104;  // [bp-0x1d0]
    unsigned long long v106;  // [bp-0x1c8]
    char *v107;  // [bp-0x1c0]
    char v108;  // [bp-0x1b8], Other Possible Types: unsigned long long
    int v109;  // [bp-0x1b8]
    unsigned long long v110;  // [bp-0x1a8]
    char v111;  // [bp-0x198], Other Possible Types: unsigned long long
    char v112;  // [bp-0x190]
    int v113;  // [bp-0x180]
    int v114;  // [bp-0x170]
    int v115;  // [bp-0x160]
    unsigned long long v116;  // [bp-0x150]
    void* v117;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v118;  // [bp-0x148]
    unsigned long v119;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned long long v120;  // [bp-0x138], Other Possible Types: unsigned long
    char v121;  // [bp-0x130]
    int v122;  // [bp-0xa0]
    char v123;  // [bp-0x68]
    char v125;  // al
    char v126;  // bpl
    void* v127;  // rcx
    unsigned long v128;  // rbp
    unsigned long long v129[3];  // r14
    unsigned long long v130[3];  // rax
    char v131;  // r12b
    unsigned int v132;  // r12d
    unsigned long long v133[3];  // rax
    unsigned long v134;  // r13
    unsigned int v135;  // ebx
    char v136;  // bpl
    unsigned int v137;  // ebp
    char *v138;  // r15
    char *v139;  // rdx
    char v140;  // bpl
    unsigned int v141;  // ebp
    char v142;  // bl
    unsigned int v143;  // eax
    char *v144;  // r12
    unsigned long long v145;  // rcx
    unsigned long long v146;  // rax
    unsigned short v148;  // dx
    unsigned int v149;  // ebp
    unsigned long v150;  // rbp
    unsigned long v151;  // rax
    unsigned int v152;  // eax
    int v153;  // xmm0
    int v154;  // xmm1
    int v155;  // xmm2
    unsigned long long v156[3];  // r15
    unsigned long long v157;  // rdx
    int v158;  // xmm0
    int v159;  // xmm1
    int v160;  // xmm2
    unsigned long long v161[3];  // r15
    char *v162;  // r12
    unsigned long long v163;  // rax
    unsigned long v164;  // rsi
    unsigned long long v165;  // rax
    unsigned long v166;  // rcx
    unsigned long long v167;  // rax
    unsigned long v168;  // rcx
    unsigned long long v169;  // rbx
    char v170;  // r14b
    unsigned long long v172;  // rcx
    unsigned int v173;  // ecx
    unsigned int v174;  // eax
    void* v175;  // rbp
    unsigned long long v176[3];  // rax
    void* v177;  // rsi
    void* v178;  // rdi
    char v179;  // al
    char v180;  // al
    char v181;  // r13b
    char *v182;  // rdi
    int v183;  // xmm0

    v125 = a1.get_flag("contextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/s", 7);
    uu_ls::extract_format(&(char)v46, a1);
    v126 = v45;
    v8 = uu_ls::extract_files(a1);
    v0 = 1;
    if (v126 != 1)
    {
        if (*((long long *)&v48))
        {
            if (!((char)uu_ls::Config::from::{{closure}}(a1, *((long long *)&v48), v50) & 1))
                v127 = 0;
        }
        else
        {
            v127 = 0;
        }
        v117 = v127;
        v81 = "gonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-back";
        v82 = 1;
        v84 = "onumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backu";
        v86 = 1;
        v88 = "numeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backup";
        v89 = 15;
        v90 = "full-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/";
        v91 = 9;
        *((unsigned long long **)&v47) = &v81;
        v48 = &v92;
        v50 = a1;
        v51 = 0;
        v55 = 0;
        v0 = 1;
        if (!(unsigned long long)v47.iter_try_fold(&v117).eq())
        {
            v81.indices_of(a1, "1Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformat", 1);
            if (v81)
            {
                v50 = v84;
                *((int128_t *)&v47) = *((int128_t *)&v81);
                if ((char)a1.value_source("1Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformat", 1) == 2 && (unsigned long long)v47.try_fold(&v117).eq())
                    v126 = 2;
            }
LABEL_592bad:
            v0 = v126;
            goto LABEL_592bad;
        }
    }
    v128 = (unsigned int)uu_ls::extract_sort(a1);
    v15 = uu_ls::extract_time(a1);
    v20 = uu_ls::extract_color(a1);
    v14 = uu_ls::extract_hyperlink(a1);
    (char)v46.try_get_one(a1, "block-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolo", 10);
    v129 = "block-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolo".unwrap(10, &(char)v46);
    v21 = a1;
    v17 = v125;
    v16 = v128;
    if (v129)
    {
        (char)v46.try_get_one(a1, "block-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolo", 10);
        v130 = "block-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolo".unwrap(10, &(char)v46);
        if (!v130)
            core::option::unwrap_failed(&g_686998); /* do not return */
        v131 = 1;
        v132 = (unsigned int)a1 & 0xffffff00 | 1;
        if (!(char)v130[1].equal(v130[2], "sikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletim", 2))
            v132 = v21.get_flag("sikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletim", 2);
        (char)v46.try_get_one(v21, "block-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolo", 10);
        v133 = "block-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolo".unwrap(10, &(char)v46);
        if (!v133)
            core::option::unwrap_failed(&g_6869b0); /* do not return */
        if ((char)v133[1].equal(v133[2], "human-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindi", 14))
        {
            v134 = (unsigned int)v21.get_flag("kibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-", 9);
            v135 = v132 + 1;
            v136 = 1;
            v137 = (unsigned int)v128 & 0xffffff00 | 1;
        }
        else
        {
            v138 = v21;
LABEL_592d42:
            v137 = v138.get_flag("human-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindi", 14);
            v134 = (unsigned int)v138.get_flag("kibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-", 9);
            if (!v131)
                v135 = v137;
            else
                v135 = 2;
        }
        std::env::var_os(&v103, "BLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~TABSIZE(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...List directory contents.\nIgnore files and directories starting with a '.' by defaultPrint help information.Set the display format.Display the files ", 9);
        std::env::var_os(&v93, "BLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~TABSIZE(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...List directory contents.\nIgnore files and directories starting with a '.' by defaultPrint help information.Set the display format.Display the files in column", 10);
        std::env::var_os(&v98, "LS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~TABSIZE(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...List directory contents.\nIgnore files and directories starting with a '.' by defaultPrint help information.Set the display format.Display the files in columns.Display ", 13);
        std::env::var_os(&v111, "POSIXLY_CORRECT*~.*~TABSIZE(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...List directory contents.\nIgnore files and directories starting with a '.' by defaultPrint help information.Set the display format.Display the files in columns.Display detailed info", 15);
        v77 = v135;
        if (v129)
        {
            (char)v46.to_vec(v129[1], v129[2]);
            goto LABEL_592e0e;
        }
        if (v99 != 0x8000000000000000)
        {
            v31 = v99;
            v29 = v101;
            v139 = v102;
            v143 = (unsigned int)v29 & 0xffffff00 | 1;
            v10 = v143;
            v5 = 0;
            goto LABEL_592ee8;
        }
        if (v94 != 0x8000000000000000)
        {
            v31 = v94;
            v29 = v96;
            v139 = v97;
            v143 = (unsigned int)v29 & 0xffffff00 | 1;
            v5 = v143;
            v10 = 0;
LABEL_592ee8:
            v3 = v143 & 0xffffff00 | 1;
            v140 = v136 | v131;
            v141 = v137 & 0xffffff00 | v140;
            if (!v136 && !v131)
                goto LABEL_592ef9;
        }
        else if (v104 == 0x8000000000000000)
        {
            (char)v46.to_vec(1, 0);
LABEL_592e0e:
            v31 = v46;
            v29 = (long long)(&v47)[8];
            v139 = v50;
            v5 = (int)(long long)(&v47)[8] & 0xffffff00 | 1;
            v10 = v5 & 0xffffffffffffff00 | 1;
            v3 = v10 & 0xffffff00 | 1;
            v140 = v136 | v131;
            v141 = v137 & 0xffffff00 | v140;
            if (!v136 && !v131)
                goto LABEL_592ef9;
        }
        else
        {
            v31 = v104;
            v29 = v106;
            v139 = v107;
            v5 = (unsigned int)v29 & 0xffffff00 | 1;
            v3 = 0;
            v10 = v5 & 0xffffff00 | 1;
            v142 = 1;
            v140 = v136 | v131;
            v141 = v137 & 0xffffff00 | v140;
            if (!v136 && !v131)
            {
LABEL_592ef9:
                if (v139)
                {
                    v38.from_utf8_lossy(v29, v139);
                    v144 = v21;
                    uucore::features::parser::parse_size::parse_size_u64(&v81, v39, v40);
                    if ((int)v81 == 4)
                    {
                        v145 = v82;
                        if (v142)
                        {
                            if ((char)v134)
                                v145 = 0x400;
                            v43 = v145;
                            v42 = 1;
                        }
                        else
                        {
                            v146 = (!(v134 & 255) ? v145 : 0x400);
                            v42 = v145;
                            if (v129)
                                v146 = v145;
                            v43 = v146;
                        }
                    }
                    else if (v129)
                    {
                        v117.clone(v129);
                        v51 = v120;
                        *((int128_t *)&v48) = *((int128_t *)&v117);
                        v45 = 9223372036854775811;
                        *((double *)&v41->field_8) = v45.new();
                        v41->field_10 = &g_6869e8;
                        v41->field_0 = 0x8000000000000000;
                        core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v81);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v38);
                        goto LABEL_59323e;
                    }
                    else
                    {
                        v43 = 0x400;
                        *((int *)&v42) = (!v142 ? 0x400 : 1);
                    }
                    core::ptr::drop_in_place<core::result::Result<u64,uucore::features::parser::parse_size::ParseSizeError>>(&v81);
                    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&v38);
                    goto LABEL_5930c2;
                }
            }
        }
        if (v111 == 0x8000000000000000)
            *((int *)&v43) = (v131 ? 1000 : 0x400);
        else
            v43 = (unsigned int)v134 * 0x200 + 0x200;
        v42 = 1;
        v144 = v21;
LABEL_5930c2:
        v13 = v144.get_flag("authorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overfl", 6);
        if ((char)v144.get_flag("no-groupPatternsParseIntcreation@", 8))
        {
            v27 = 0;
        }
        else
        {
            v27 = v144.get_flag("onumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backu", 1);
            v27 = v27 & 0xffffff00 | (char)v27 ^ 1;
        }
        v7 = v144.get_flag("gonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-back", 1);
        v12 = v144.get_flag("numeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backup", 15);
        (char)v46.try_get_one(v144, "widthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` o", 5);
        uu_ls::parse_width(&v81, "widthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` o".unwrap(5, &(char)v46));
        v148 = v82;
        if (v81 != 9223372036854775814)
        {
            v54 = v89;
            v183 = (int128_t)v83;
            *((int128_t *)&v52) = (int128_t)v87;
            v49 = v183;
            v45 = v81;
            v48 = v148;
            v151 = v45.new();
            goto LABEL_593227;
        }
        v34 = v148;
        if ((char)v144.get_flag("hide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%", 18))
        {
            v149 = 0;
        }
        else
        {
            v140 = 1;
            v149 = v141 & 0xffffff00 | 1;
            if (!(char)v144.get_flag("show-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateT", 18))
            {
                std::io::stdio::stdout();
                v150 = std::sys::io::is_terminal::isatty::is_terminal();
                v140 = (char)v150 ^ 1;
                v149 = (unsigned int)v150 & 0xffffff00 | v140;
            }
        }
        v25 = uu_ls::extract_quoting_style(v144, v140);
        v6 = uu_ls::extract_indicator_style(v144);
        v1 = v144.get_flag("diredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/datetime/mod.rs", 5);
        if (!((v1 ^ 1) & v0 != 1))
        {
            uu_ls::parse_time_style(&v81, v144);
            memcpy(&v117, &(char)v82, 16);
            v120 = v86;
            if (v81 == 9223372036854775814)
            {
                v24 = v149;
                memcpy(&v108, &v117, 16);
                v110 = v120;
                goto LABEL_5933a7;
            }
            else
            {
                *((int128_t *)&v53) = *((int128_t *)&v88);
                *((int128_t *)&v48) = *((int128_t *)&v117);
                v51 = v120;
                v45 = v81;
                v151 = v45.new();
LABEL_593227:
                v41->field_8 = v151;
                v41->field_10 = &g_6869e8;
                v41->field_0 = 0x8000000000000000;
            }
        }
        else
        {
            v24 = v149;
            v108 = 9223372036854775810;
LABEL_5933a7:
            v78 = 0;
            v79 = 8;
            v80 = 0;
            if ((char)v144.get_flag("ignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/l", 14))
            {
                (char)v46.new("*~.*~TABSIZE(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...List directory contents.\nIgnore files and directories starting with a '.' by defaultPrint help information.Set the display format.Display the files in columns.Display detailed information.List en", 2);
                v81.unwrap(&(char)v46, &g_686a50);
                v78.push(&v81, &g_686a68);
                (char)v46.new(".*~TABSIZE(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...List directory contents.\nIgnore files and directories starting with a '.' by defaultPrint help information.Set the display format.Display the files in columns.Display detailed information.List entr", 3);
                v81.unwrap(&(char)v46, &g_686a80);
                v78.push(&v81, &g_686a98);
            }
            (char)v46.try_get_many(v144, "ignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.", 6);
            v81.unwrap("ignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.", 6, &(char)v46);
            v7 ^= 1;
            v152 = v25;
            v32 = v152 >> 8;
            v76 = v152 >> 16;
            v153 = *((int128_t *)&v81);
            v154 = *((int128_t *)&v84);
            v155 = *((int128_t *)&v88);
            *((int128_t *)&v56) = *((int128_t *)&v90);
            v54 = v155;
            v51 = v154;
            v48 = v153;
            v59 = v113;
            v61 = v114;
            v63 = v115;
            v65 = v116;
            v67 = v113;
            v69 = v114;
            v70 = v115;
            v72 = v116;
            v45 = 1;
            v58 = 0;
            v66 = 0;
            while (true)
            {
                v156 = v45.next();
                if (!v156)
                    break;
                uucore::features::parser::parse_glob::from_str(&v122, v156[1], v156[2]);
                if ((long long)v122 != 0x8000000000000000)
                {
                    v78.push(&v122, &g_686ac8);
                }
                else
                {
                    v118 = uucore::util_name();
                    v119 = v157;
                    v35 = &v118;
                    v39 = <&T as core::fmt::Display>::fmt;
                    v81 = &g_686938;
                    v82 = 2;
                    v88 = 0;
                    v85 = &v35;
                    v86 = 1;
                    std::io::stdio::_eprint(&v81);
                    v117 = 0;
                    v119 = v156[1];
                    v120 = v156[2];
                    v121 = 1;
                    v36 = &v117;
                    v39 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v81 = &g_686958;
                    v82 = 2;
                    v88 = 0;
                    v84 = &v36;
                    v86 = 1;
                    std::io::stdio::_eprint(&v81);
                }
            }
            if (v8 == 2)
            {
                v45.try_get_many(v21, "hidehurdNZSTTBMTmainCubaWITAcharJuly", 4);
                v81.unwrap("hidehurdNZSTTBMTmainCubaWITAcharJuly", 4, &v45);
                v158 = *((int128_t *)&v81);
                v159 = *((int128_t *)&v84);
                v160 = *((int128_t *)&v88);
                *((int128_t *)&v56) = *((int128_t *)&v90);
                v54 = v160;
                v51 = v159;
                v48 = v158;
                v59 = v113;
                v61 = v114;
                v63 = v115;
                v65 = v116;
                v67 = v113;
                v69 = v114;
                v70 = v115;
                v72 = v116;
                v45 = 1;
                v58 = 0;
                v66 = 0;
                while (true)
                {
                    v161 = v45.next();
                    if (!v161)
                        break;
                    uucore::features::parser::parse_glob::from_str(&v123, v161[1], v161[2]);
                    if (*((long long *)&v123) != 0x8000000000000000)
                    {
                        v78.push(&v123, &g_686ab0);
                    }
                    else
                    {
                        v118 = uucore::util_name();
                        v119 = v157;
                        v35 = &v118;
                        v39 = <&T as core::fmt::Display>::fmt;
                        v81 = &g_686938;
                        v82 = 2;
                        v88 = 0;
                        v85 = &v35;
                        v86 = 1;
                        std::io::stdio::_eprint(&v81);
                        v117 = 0;
                        v119 = v161[1];
                        v120 = v161[2];
                        v121 = 1;
                        v37 = &v117;
                        v39 = <os_display::Quoted as core::fmt::Display>::fmt;
                        v81 = &g_686978;
                        v82 = 2;
                        v88 = 0;
                        v85 = &v37;
                        v86 = 1;
                        std::io::stdio::_eprint(&v81);
                    }
                }
            }
            v162 = v21;
            v163 = uu_ls::Config::from::{{closure}}(v162, "zerowhenAnsiEire -- ", 4);
            v48 = 0;
            v50 = 9;
            v51 = "xtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatig";
            v53 = 1;
            v54 = "Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformati";
            v55 = 1;
            v56 = "mgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-bac";
            v57 = 1;
            v58 = "long', 'FFMTZero";
            v59 = 4;
            v60 = "onumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backu";
            v61 = 1;
            v62 = "gonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-back";
            v63 = 1;
            v64 = "numeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backup";
            v65 = 15;
            v66 = "1Cxtabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformat";
            v67 = 1;
            v68 = "formatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsr";
            v69 = 6;
            v45 = v162;
            v164 = (((char)v45.reduce() & 1) ? v157 : 0);
            v165 = uu_ls::Config::from::{{closure}}(v162, "zerowhenAnsiEire -- ", 4);
            v48 = 0;
            v50 = 1;
            v51 = "colorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/sr";
            v53 = 5;
            v45 = v162;
            v166 = (((char)v45.reduce() & 1) ? v157 : 0);
            v167 = uu_ls::Config::from::{{closure}}(v162, "zerowhenAnsiEire -- ", 4);
            v48 = 0;
            v50 = 2;
            v51 = "hide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%";
            v53 = 18;
            v54 = "show-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateT";
            v55 = 18;
            v45 = v162;
            v168 = (((char)v45.reduce() & 1) ? v157 : 0);
            v169 = uu_ls::Config::from::{{closure}}(v162, "zerowhenAnsiEire -- ", 4);
            v48 = 0;
            v50 = 4;
            v51 = "quoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f";
            v53 = 13;
            v54 = "quote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignoreco";
            v55 = 10;
            v56 = "escapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull";
            v57 = 6;
            v58 = "literalquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timei";
            v59 = 7;
            v45 = v162;
            v170 = v18 & v165 <= v166;
            v172 = (((char)v45.reduce() & 1) ? v157 : 0);
            if (v170)
            {
                v45.from_env();
                if (v45 == 0x8000000000000000)
                    v81.default();
                else
                    memcpy(&v81, &v45, 160);
                memcpy(&v117, &v81, 160);
                if (!v1)
                    goto LABEL_593e94;
            }
            else
            {
                v117 = 0x8000000000000000;
                if (!v1)
                {
LABEL_593e94:
                    v174 = (!(char)uu_ls::dired::is_dired_arg_present() ? (v163 > v164 ? 2 - (v0 == 1) : v0) : 1);
                    v18 = v174;
LABEL_593eab:
                    v0 = 3;
                    if (!(char)v162.get_flag("dereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directori", 11))
                    {
                        v0 = 2;
                        if (!(char)v162.get_flag("dereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdir", 24))
                        {
                            v0 = 1;
                            if (!(char)v162.get_flag("dereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%", 39))
                                v0 = ~((char)v162.get_flag("directoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/ho", 9)) & v6 != 3 & v19 != 1;
                        }
                    }
                    if (v170)
                    {
                        v175 = 0;
                    }
                    else
                    {
                        v45.try_get_one(v162, "tabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatign", 7);
                        v176 = "tabsizemgonumeric-uid-gidallalmost-allStUvXucblock-sizehuman-readablesikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatign".unwrap(7, &v45);
                        if (v176)
                        {
                            ::0x57ab70::core::num::<impl usize>::from_ascii_radix(&v45, v176[1], v176[2]);
                            v177 = v48;
                            v178 = (char)v45 ^ 1;
                        }
                        else
                        {
                            v178 = 0;
                        }
                        v175 = (((char)v178.or_else(v177) & 1) ? v157 : 8);
                    }
                    v25 = v162.get_flag("recursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/re", 9);
                    v22 = v162.get_flag("reverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.c", 7);
                    v40 = 0;
                    *((int128_t *)&v38) = *((int128_t *)&v78);
                    v32 = v162.get_flag("directoryinodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/ho", 9);
                    memcpy(&v81, &v117, 160);
                    v11 = v162.get_flag("inodereverserecursivecolorpathsindicator-styletime-stylefull-timeignorecontextgroup-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm", 5);
                    v179 = v162.get_flag("sizeIranWESTAKSTHKSTACSTi128 as dyn MaskCASTERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGzonenameESTRPIPEsearcherNotFoundTimedOutpatternsUS/SamoaENETDOWNThursday\n       FebruaryHongkongEtc/Zulu", 4);
                    v75 = (v169 > v172 ? (char)v24 | v167 > v168 : v33);
                    v74 = (v169 <= v172 ? v26 : 3);
                    v180 = v162.get_flag("group-directories-firstdiredhyperlink%b %e  %Y%Y-%m-%d %Y-%m-%d %H:%M%Y-%m-%d %H:%M:%S.%f %z%b %e %H:%M%m-%d %H:%M`DateTime - TimeDelta` overflowedsrc/uu/ls/src/ls.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/chrono-0.4.41/src/date", 23);
                    v181 = ((char)v162.get_flag("zerowhenAnsiEire -- ", 4) ? 0 : 10);
                    v50 = 0;
                    *((int128_t *)&v46) = (int128_t)v38;
                    memcpy(&(char)v51, &v81, 160);
                    v71 = v109;
                    v73 = v110;
                    memcpy(v41, &v45, 208);
                    v41->field_d0 = v42;
                    v41->field_d8 = v43;
                    v41->field_e0 = v175;
                    v41->field_e8 = v13;
                    v41->field_e9 = v27;
                    v41->field_ea = v7;
                    v41->field_eb = v12;
                    v41->field_ec = v34;
                    v41->field_ee = v26;
                    v41->field_ef = v23;
                    v41->field_f0 = v33;
                    v41->field_f1 = v11;
                    v41->field_f2 = v179;
                    v41->field_f3 = v17;
                    v41->field_f4 = 0;
                    v41->field_f5 = v180;
                    v41->field_f6 = v1;
                    v41->field_f7 = v14;
                    v41->field_f8 = v8;
                    v41->field_f9 = v77;
                    v41->field_fa = v0;
                    v41->field_fb = v15;
                    v41->field_fc = v74;
                    v41->field_fd = v75;
                    v41->field_fe = v76;
                    v41->field_ff = v6;
                    v41->field_100 = v18;
                    v41->field_101 = v16;
                    v41->field_102 = v181;
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v31, v29);
                    core::ptr::drop_in_place<std::env::VarError>(v111, *((long long *)&v112));
                    if ((v99 != 0x8000000000000000 & (char)v5))
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v99, v101);
                    if (v94 != 0x8000000000000000 && (char)v10)
                        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v94, v96);
                    v182 = v104;
                    if (v104 == 0x8000000000000000)
                        return a0;
LABEL_5942e8:
                    if (!(char)v3)
                        return a0;
                    core::ptr::drop_in_place<std::ffi::os_str::OsString>(v182, v106);
                    return a0;
                }
            }
            v18 = v173 & 0xffffff00 | 1;
            if (!(char)v162.get_flag("zerowhenAnsiEire -- ", 4))
                goto LABEL_593eab;
            v45 = 9223372036854775812;
            *((double *)&v41->field_8) = v45.new();
            v41->field_10 = &g_6869e8;
            v41->field_0 = 0x8000000000000000;
            v117.drop_in_place<core::option::Option<lscolors::LsColors>>();
            v78.drop_in_place<alloc::vec::Vec<glob::Pattern>>();
            core::ptr::drop_in_place<uu_ls::TimeStyle>(&v109);
        }
LABEL_59323e:
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v31, v29);
        core::ptr::drop_in_place<std::env::VarError>(v111, *((long long *)&v112));
        if ((v99 != 0x8000000000000000 & (char)v5))
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v99, v101);
        if (v94 != 0x8000000000000000 && (char)v10)
            core::ptr::drop_in_place<std::ffi::os_str::OsString>(v94, v96);
        v182 = v104;
        if (v104 == 0x8000000000000000)
            return a0;
        goto LABEL_5942e8;
    }
    else
    {
        a1.get_flag("sikibibytesescapeliteralquote-namepfile-typedereferencedereference-command-linedereference-command-line-symlink-to-dirquoting-stylehide-control-charsshow-control-charswidthauthorformatignore-backupsdirectoryinodereverserecursivecolorpathsindicator-styletim", 2);
        v138 = a1;
        goto LABEL_592d42;
    }
}
