long long just::config::Config::from_matches(unsigned long long *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x5b8]
    char v1;  // [bp-0x5b0]
    char v2;  // [bp-0x5af]
    char v3;  // [bp-0x5ae]
    char v4;  // [bp-0x5ad]
    char v5;  // [bp-0x5ac]
    char v6;  // [bp-0x5ab]
    char v7;  // [bp-0x5aa]
    char v8;  // [bp-0x5a9]
    char v9;  // [bp-0x5a8]
    char v10;  // [bp-0x5a7]
    char v11;  // [bp-0x5a6]
    char v12;  // [bp-0x5a5]
    char v13;  // [bp-0x5a4]
    char v14;  // [bp-0x5a3]
    char v15;  // [bp-0x5a2]
    char v16;  // [bp-0x5a1]
    void* v17;  // [bp-0x5a0]
    int v18;  // [bp-0x598], Other Possible Types: char
    int v19;  // [bp-0x598]
    unsigned long long v20;  // [bp-0x590]
    int v21;  // [bp-0x588], Other Possible Types: char
    unsigned long v22;  // [bp-0x580]
    int v23;  // [bp-0x578]
    int v24;  // [bp-0x568]
    void* v25;  // [bp-0x558]
    void* v26;  // [bp-0x548]
    void* v27;  // [bp-0x538]
    unsigned int v28;  // [bp-0x530]
    unsigned int v29;  // [bp-0x52c]
    unsigned long long v30;  // [bp-0x528]
    int v32;  // [bp-0x520], Other Possible Types: char, unsigned long long
    int v33;  // [bp-0x518], Other Possible Types: unsigned long long
    int v34;  // [bp-0x510], Other Possible Types: unsigned long
    int v35;  // [bp-0x508]
    unsigned long long v36;  // [bp-0x500]
    void* v37;  // [bp-0x4f8]
    void* v38;  // [bp-0x4e8]
    unsigned int v39;  // [bp-0x4d4]
    unsigned long long v40[9];  // [bp-0x4d0]
    unsigned long v41;  // [bp-0x4c0]
    char v42;  // [bp-0x4b8]
    unsigned long long v43;  // [bp-0x4b0]
    unsigned long v44;  // [bp-0x4a8]
    char v45;  // [bp-0x4a0]
    int v46;  // [bp-0x488], Other Possible Types: void*, unsigned long long
    unsigned long long v47;  // [bp-0x480]
    unsigned long long v48;  // [bp-0x478]
    char v49;  // [bp-0x468], Other Possible Types: unsigned long long
    int v50;  // [bp-0x468]
    unsigned long long v51;  // [bp-0x458]
    char v52;  // [bp-0x448], Other Possible Types: unsigned long long
    int v53;  // [bp-0x448]
    unsigned long long v54;  // [bp-0x438]
    char v55;  // [bp-0x428], Other Possible Types: unsigned long long
    int v56;  // [bp-0x428]
    unsigned long long v57;  // [bp-0x418]
    int v58;  // [bp-0x408], Other Possible Types: char
    int v59;  // [bp-0x3f8], Other Possible Types: char
    int v60;  // [bp-0x3e8]
    int v61;  // [bp-0x3d8], Other Possible Types: char
    unsigned long long v62;  // [bp-0x3c8]
    char v63;  // [bp-0x3c0]
    int v64;  // [bp-0x3c0]
    char v65;  // [bp-0x3b0]
    int v66;  // [bp-0x398], Other Possible Types: char
    unsigned long v67;  // [bp-0x388]
    char v68;  // [bp-0x378], Other Possible Types: unsigned long long
    int v69;  // [bp-0x378]
    unsigned long long v70;  // [bp-0x368]
    int v71;  // [bp-0x358]
    unsigned long long v72;  // [bp-0x358]
    unsigned long long v73;  // [bp-0x348]
    int v74;  // [bp-0x338]
    unsigned long v75;  // [bp-0x338]
    unsigned long long v76;  // [bp-0x330]
    int v77;  // [bp-0x328]
    void* v78;  // [bp-0x328], Other Possible Types: unsigned long long
    int v79;  // [bp-0x320]
    int v80;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long v81;  // [bp-0x310], Other Possible Types: unsigned long long
    int v82;  // [bp-0x308]
    void* v83;  // [bp-0x300]
    unsigned long long v84;  // [bp-0x2f8]
    int v85;  // [bp-0x2f0]
    unsigned long long v86;  // [bp-0x2e0]
    int v87;  // [bp-0x2d8]
    unsigned long long v88;  // [bp-0x2c8]
    int v89;  // [bp-0x2c0]
    unsigned long long v90;  // [bp-0x2b0]
    int v91;  // [bp-0x2a8]
    unsigned long long v92;  // [bp-0x298]
    int v93;  // [bp-0x290]
    unsigned long long v94;  // [bp-0x280]
    int v95;  // [bp-0x278]
    unsigned long long v96;  // [bp-0x268]
    char v97;  // [bp-0x260]
    unsigned long long v98;  // [bp-0x250]
    int v99;  // [bp-0x248]
    unsigned long long v100;  // [bp-0x238]
    int v101;  // [bp-0x230]
    int v102;  // [bp-0x220]
    int v103;  // [bp-0x210]
    char v104;  // [bp-0x200]
    char v105;  // [bp-0x1f0]
    char v106;  // [bp-0x1e0]
    int v107;  // [bp-0x1d0]
    void* v108;  // [bp-0x1c0]
    int v109;  // [bp-0x1b8]
    unsigned long v110;  // [bp-0x1a8]
    int v111;  // [bp-0x198], Other Possible Types: char
    int v112;  // [bp-0x188]
    int v113;  // [bp-0x178]
    int v114;  // [bp-0x160], Other Possible Types: char
    unsigned long long v115;  // [bp-0x150]
    int v116;  // [bp-0x148], Other Possible Types: char
    unsigned long long v117;  // [bp-0x138]
    char v118;  // [bp-0x130]
    char v119;  // [bp-0xf0]
    char v120;  // [bp-0xb0]
    char v121;  // [bp-0x70]
    int v123;  // xmm0
    int v124;  // xmm1
    char *v125;  // rbp
    char *v126;  // r15
    unsigned long long v127;  // rax
    int v128;  // xmm0
    int v129;  // xmm1
    unsigned long long v130;  // rbx
    unsigned long long v131;  // rbx
    unsigned long v132;  // r14
    void* v134;  // rax
    char v135;  // bl
    unsigned long long *v136;  // rdi
    unsigned long v137;  // rcx
    unsigned long v138;  // rax
    unsigned long v139;  // rdx
    unsigned long v140;  // rsi
    void* v141;  // rax
    int v142;  // xmm0
    unsigned long long v143;  // rbp
    unsigned long long v144;  // rbp
    unsigned long long v145;  // rbp
    unsigned long long v146;  // rax
    unsigned long long v147;  // rcx
    unsigned long long v148;  // rbp
    unsigned int v149;  // ebp
    char *v150;  // rax
    unsigned long long v151;  // rbp
    unsigned long long v152;  // rdx
    unsigned long v153;  // rax
    int v154;  // xmm1
    unsigned long long v155;  // rbp
    struct_0 *v156;  // rax
    char v157;  // dl
    unsigned long long v158;  // rax
    unsigned long long *v159;  // rdx
    unsigned long long v160;  // rbp
    unsigned long long v161;  // rdx
    int v162;  // xmm1
    int v164;  // xmm0
    char v165;  // r15b
    unsigned int v166;  // r15d
    char *v167;  // rax
    unsigned long long v168[3];  // rax
    char *v169;  // rax
    char *v170;  // rax
    unsigned long long v171[3];  // rax
    unsigned long long v172;  // rax
    unsigned long long v173[3];  // rax
    char *v174;  // rax
    char v175;  // al
    unsigned long v176;  // rax
    unsigned long long v177;  // rax
    unsigned long long v178;  // rax
    unsigned long long v179;  // rbx
    unsigned long long v180;  // rax
    int v181;  // xmm0
    unsigned long long v182[3];  // rax
    char v183;  // al
    unsigned long long v184;  // rax
    unsigned long long v185;  // rbx
    char v186;  // bl
    char v188;  // al
    int v190;  // xmm0
    int v191;  // xmm1
    int v192;  // [bp-0x4f8]

    v26 = 0;
    v27 = 0;
    (char)v74.try_get_many(a1, "SETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to ", 3);
    (char)v19.unwrap("SETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to ", 3, &(char)v74);
    if (*((long long *)&v18))
    {
        v123 = *((int128_t *)&v18);
        v124 = *((int128_t *)&v21);
        v82 = v24;
        v80 = v23;
        v77 = v124;
        v74 = v123;
        v125 = &v111;
        while (true)
        {
            v126 = (char)v74.next();
            v127 = (char)v74.next();
            if (!v126 || !v127)
                break;
            v40.clone(v126);
            v30.clone(v127);
            v111.insert(&v26, &v40, &v30);
            core::ptr::drop_in_place<regex::error::Error>(&v111);
        }
    }
    (char)v74.try_get_many(a1, "ARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesV", 9);
    (char)v19.unwrap("ARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesV", 9, &(char)v74);
    if (*((long long *)&v18))
    {
        v128 = *((int128_t *)&v18);
        v129 = *((int128_t *)&v21);
        v82 = v24;
        v80 = v23;
        v77 = v129;
        v74 = v128;
    }
    else
    {
        v75 = 0;
    }
    v40.from_values(&(char)v74);
    if (v44)
    {
        v130 = v44 * 48;
        v126 = &(char)v19;
        v125 = <alloc::string::String as core::clone::Clone>::clone;
        do
        {
            v131 = v130;
            (char)v19.clone(v43);
            v132 = v43 + 24;
            (char)v74.clone(v132);
            v30.insert(&v26, &(char)v19, &(char)v74);
            core::ptr::drop_in_place<regex::error::Error>(&v30);
            v43 = v132 + 24;
            v130 = v131 - 48;
        } while (v131 != 48);
    }
    (char)v74.search_config(a1, &v40);
    memcpy(&(char)v19, &v76, 16);
    *((int128_t *)&v21) = (int128_t)(&v77)[8];
    memcpy(&v23, &v81, 16);
    if (v75 != 9223372036854775815)
    {
        v190 = *((int128_t *)&v18);
        v191 = (int128_t)v21;
        v17[48] = v23;
        v17[32] = v191;
        v17[16] = v190;
        *((unsigned long *)&v17[8]) = v75;
        *((void* *)&v17[64]) = v83;
        *((unsigned long long *)v17) = 0x8000000000000000;
        v135 = 1;
        goto LABEL_660035;
    }
    memcpy(&v58, &v18, 16);
    memcpy(&v59, &v21, 16);
    v60 = v23;
    if (!v41)
    {
        if ((char)a1.get_flag("CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working di", 9) && v27)
        {
            v141 = &g_82e8b0;
        }
        else if ((char)a1.get_flag("DUMP.batbashTextHOMECoreSlimm", 4) && v27)
        {
            v141 = &g_82e8c0;
        }
        else if ((char)a1.get_flag("EDIT':=''=~'", 4) && v27)
        {
            v141 = &g_82e8d0;
        }
        else if ((char)a1.get_flag("FORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPr", 6) && v27)
        {
            v141 = &g_82e8e0;
        }
        else if ((char)a1.get_flag("INIT || data.env>", 4) && v27)
        {
            v141 = &g_82e8f0;
        }
        else if ((char)a1.get_flag("MANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s", 3) && v27)
        {
            v141 = &g_82e900;
        }
        else if ((char)a1.get_flag("SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 7) && v27)
        {
            v141 = &g_82e910;
        }
        else
        {
            if (!(char)a1.get_flag("VARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 9) || !v27)
                goto LABEL_660191;
            v141 = &g_82e920;
        }
        v142 = *((int128_t *)v141);
        *((int128_t *)&v17[32]) = *((int128_t *)&v26);
        *((void* *)&v17[48]) = v27;
        *((unsigned long long *)&v17[8]) = 9223372036854775814;
        v17[16] = v142;
        *((unsigned long long *)v17) = 0x8000000000000000;
        core::ptr::drop_in_place<just::search_config::SearchConfig>(&v58);
        goto LABEL_660035;
    }
    if ((char)a1.get_flag("CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working di", 9))
    {
        v134 = &g_82e8b0;
    }
    else if ((char)a1.get_flag("DUMP.batbashTextHOMECoreSlimm", 4))
    {
        v134 = &g_82e8c0;
    }
    else if ((char)a1.get_flag("EDIT':=''=~'", 4))
    {
        v134 = &g_82e8d0;
    }
    else if ((char)a1.get_flag("FORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPr", 6))
    {
        v134 = &g_82e8e0;
    }
    else if ((char)a1.get_flag("INIT || data.env>", 4))
    {
        v134 = &g_82e8f0;
    }
    else if ((char)a1.get_flag("MANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s", 3))
    {
        v134 = &g_82e900;
    }
    else if ((char)a1.get_flag("SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 7))
    {
        v134 = &g_82e910;
    }
    else if ((char)a1.get_flag("VARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 9))
    {
        v134 = &g_82e920;
    }
    else
    {
LABEL_660191:
        v143 = v125 & 0xffffffffffffff00 | 1;
        if ((char)a1.get_flag("CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working di", 9))
        {
            v30 = 0x8000000000000000;
        }
        else
        {
            v144 = v143 & 0xffffffffffffff00 | 1;
            if ((char)a1.get_flag("CHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working directory, `.env`, overrides, and e", 6))
            {
                (char)v74.try_get_one(a1, "CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <C", 7);
                v145 = (v144 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
                v146 = "CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <C".unwrap(7, &(char)v74);
                v147 = 0x8000000000000000;
                if (v146)
                {
                    v145 = v145 & 0xffffffffffffff00 | 1;
                    (char)v74.clone(v146);
                    v147 = v75;
                    memcpy(&(char)v19, &v76, 16);
                }
                v37 = v27;
                *((int128_t *)&v35) = *((int128_t *)&v26);
                v32 = v147;
                *((int128_t *)&v33) = *((int128_t *)&v18);
                v30 = 9223372036854775809;
                goto LABEL_660353;
            }
            (char)v74.try_get_many(a1);
            v148 = (v144 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
            v118.unwrap(&(char)v74);
            if (*((long long *)&v118))
            {
                v145 = v148 & 0xffffffffffffff00 | 1;
                (char)v19.collect(&v118);
                (char)v74.remove(&(char)v19);
                v33 = (long long)v21;
                memcpy(&v30, &(char)v19, 16);
                memcpy(&v37, &v26, 16);
                v38 = v27;
                *((int128_t *)&v34) = *((int128_t *)&v75);
                v36 = v78;
LABEL_660353:
                v149 = (unsigned int)v145 & 0xffffff00 | 1;
                goto LABEL_660356;
            }
            (char)v74.try_get_one(a1);
            v143 = (v148 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
            v150 = (char)v74.unwrap();
            if (v150)
            {
                v32 = *(v150);
                v30 = 9223372036854775811;
            }
            else
            {
                v143 = v143 & 0xffffffffffffff00 | 1;
                if ((char)a1.get_flag("DUMP.batbashTextHOMECoreSlimm", 4))
                {
                    v30 = 9223372036854775812;
                }
                else
                {
                    v143 = v143 & 0xffffffffffffff00 | 1;
                    if ((char)a1.get_flag("EDIT':=''=~'", 4))
                    {
                        v30 = 9223372036854775813;
                    }
                    else
                    {
                        v126 = "EVALUATEExtenderbopomofoUgaritic) ";
                        if ((char)a1.get_flag("EVALUATEExtenderbopomofoUgaritic) ", 8))
                        {
                            if (v41 > 1)
                            {
                                (char)v74.into_iter(&v40);
                                v80 = 1;
                                (char)v19.collect(&(char)v74);
                                *((long long *)&v17[32]) = (long long)v21;
                                *((int128_t *)&v17[16]) = *((int128_t *)&v18);
                                *((unsigned long long *)&v17[8]) = 9223372036854775813;
                                *((char **)&v17[40]) = "EVALUATEExtenderbopomofoUgaritic) ";
                                *((unsigned long long *)&v17[48]) = 8;
                                *((unsigned long long *)v17) = 0x8000000000000000;
                                core::ptr::drop_in_place<just::search_config::SearchConfig>(&v58);
                                core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::string::String)>>(&v42);
                                core::ptr::drop_in_place<regex::error::Error>(&v45);
LABEL_660170:
                                core::ptr::drop_in_place<alloc::collections::btree::map::BTreeMap<alloc::string::String,alloc::string::String>>(&v26);
                                return a0;
                            }
                            (char)v74.into_iter(&v40);
                            (char)v32.next(&(char)v74);
                            v37 = v27;
                            *((int128_t *)&v35) = *((int128_t *)&v26);
                            v30 = 9223372036854775814;
                            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(&(char)v74);
                            v149 = 0;
                            goto LABEL_660356;
                            goto LABEL_660356;
                        }
                        else
                        {
                            v143 = (v143 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
                            if ((char)a1.get_flag("FORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPr", 6))
                            {
                                v30 = 9223372036854775815;
                            }
                            else
                            {
                                v143 = v143 & 0xffffffffffffff00 | 1;
                                if ((char)a1.get_flag("GROUPSgroupsList recipe groupsinitializeInitialize new justfile in project rootMODULEARGUMENTSList available recipes in <MODULE> or root if omittedMANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or re", 6))
                                {
                                    v30 = 9223372036854775816;
                                }
                                else
                                {
                                    v143 = v143 & 0xffffffffffffff00 | 1;
                                    if ((char)a1.get_flag("INIT || data.env>", 4))
                                    {
                                        v30 = 9223372036854775817;
                                    }
                                    else
                                    {
                                        (char)v74.try_get_many(a1, "LISTQuitbyten", 4);
                                        v151 = (v143 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
                                        v119.unwrap("LISTQuitbyten", 4, &(char)v74);
                                        if (*((long long *)&v119))
                                        {
                                            v143 = v151 & 0xffffffffffffff00 | 1;
                                            (char)v74.parse_module_path(&v119, v152);
                                            v153 = v75;
                                            *((int128_t *)&v19) = *((int128_t *)&v76);
                                            memcpy(&(char)v21, &(char)v77, 16);
                                            if (v75 != 9223372036854775815)
                                                goto LABEL_66144d;
                                            v154 = (int128_t)v21;
                                            *((int128_t *)&v32) = (int128_t)v19;
                                            v34 = v154;
                                            v30 = 9223372036854775818;
                                        }
                                        else
                                        {
                                            v143 = v151 & 0xffffffffffffff00 | 1;
                                            if ((char)a1.get_flag("MANmanPrint man pageREQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s", 3))
                                            {
                                                v30 = 9223372036854775819;
                                            }
                                            else
                                            {
                                                (char)v74.try_get_one(a1, "REQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting", 7);
                                                v155 = (v143 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
                                                v156 = "REQUESTrequestExecute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.Show recipe at <PATH>SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting".unwrap(7, &(char)v74);
                                                if (v156)
                                                {
                                                    *((int128_t *)&v74) = *((int128_t *)&(&v156->padding_0)[1]);
                                                    v78 = 0;
                                                    v143 = v155 & 0xffffffffffffff00 | 1;
                                                    serde_json::de::from_trait(&(char)v19, &(char)v74, v157);
                                                    v158 = *((long long *)&v18);
                                                    if (v158 == 9223372036854775809)
                                                    {
                                                        v159 = a0;
                                                        *((unsigned long long *)&v17[8]) = 9223372036854775811;
                                                        *((unsigned long long *)&v17[16]) = v20;
                                                        goto LABEL_661482;
                                                    }
                                                    else
                                                    {
                                                        *((int128_t *)&v33) = *((int128_t *)&v20);
                                                        v32 = v158;
                                                        v30 = 9223372036854775820;
                                                    }
                                                }
                                                else
                                                {
                                                    (char)v74.try_get_many(a1, "SHOW'}}'cyanstaro", 4);
                                                    v160 = (v155 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | 1;
                                                    v120.unwrap("SHOW'}}'cyanstaro", 4, &(char)v74);
                                                    if (*((long long *)&v120))
                                                    {
                                                        v143 = v160 & 0xffffffffffffff00 | 1;
                                                        (char)v74.parse_module_path(&v120, v161);
                                                        v153 = v75;
                                                        *((int128_t *)&v19) = *((int128_t *)&v76);
                                                        memcpy(&(char)v21, &(char)v77, 16);
                                                        if (v75 == 9223372036854775815)
                                                        {
                                                            v162 = (int128_t)v21;
                                                            *((int128_t *)&v32) = (int128_t)v19;
                                                            v34 = v162;
                                                            v30 = 9223372036854775822;
                                                        }
                                                        else
                                                        {
LABEL_66144d:
                                                            v159 = a0;
                                                            *((void* *)&v17[64]) = v83;
                                                            *((int128_t *)&v17[48]) = *((int128_t *)&v81);
                                                            v164 = (int128_t)v19;
                                                            *((int128_t *)&v17[32]) = (int128_t)v21;
                                                            v17[16] = v164;
                                                            *((unsigned long *)&v17[8]) = v153;
LABEL_661482:
                                                            *(v159) = 0x8000000000000000;
                                                            core::ptr::drop_in_place<just::search_config::SearchConfig>(&v58);
                                                            v135 = 1;
LABEL_660035:
                                                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v40);
                                                            goto LABEL_660157;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        v143 = v160 & 0xffffffffffffff00 | 1;
                                                        if ((char)a1.get_flag("SUMMARYsummaryList names of available recipesVARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 7))
                                                        {
                                                            v30 = 9223372036854775823;
                                                        }
                                                        else
                                                        {
                                                            v143 = v143 & 0xffffffffffffff00 | 1;
                                                            if ((char)a1.get_flag("VARIABLESvariablesList names of variablesOverrides and recipe(s) to run, defaulting to the first recipe in the justfilesrc/config.rs", 9))
                                                            {
                                                                v30 = 9223372036854775824;
                                                            }
                                                            else
                                                            {
                                                                v34 = v41;
                                                                *((unsigned long long [9])&v32) = v40;
                                                                *((int128_t *)&v35) = *((int128_t *)&v26);
                                                                v37 = v27;
                                                                v30 = 9223372036854775821;
                                                                v149 = 0;
LABEL_660356:
                                                                v166 = 0;
LABEL_660359:
                                                                v1 = 1;
                                                                if (!(char)a1.get_flag("UNSTABLEvariableBracketRcapacitys", 8))
                                                                    v1 = v30.eq();
                                                                v16 = a1.get_flag("EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldNO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLI", 7);
                                                                (char)v19.try_get_one(a1);
                                                                v167 = (char)v19.unwrap();
                                                                if (!v167)
                                                                    core::option::unwrap_failed(&g_82e948); /* do not return */
                                                                v15 = *(v167);
                                                                v14 = a1.get_flag("ALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used ", 13);
                                                                (char)v19.try_get_one(a1, "CEILINGceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERch", 7);
                                                                v168 = "CEILINGceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERch".unwrap(7, &(char)v19);
                                                                if (v168)
                                                                {
                                                                    <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&(char)v19, v168[1], v168[2]);
                                                                    v51 = (long long)v21;
                                                                    memcpy(&v49, &v18, 16);
                                                                }
                                                                else
                                                                {
                                                                    v49 = 0x8000000000000000;
                                                                }
                                                                v13 = a1.get_flag("CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.CHOOSERchooserJUST_CHOOSEROverride binary invoked by `--choose`SHELL-ARGClear shell argumentsCOLORcolorJU", 5);
                                                                (char)v19.try_get_one(a1);
                                                                v169 = (char)v19.unwrap();
                                                                if (!v169)
                                                                    core::option::unwrap_failed(&g_82e960); /* do not return */
                                                                v12 = *(v169);
                                                                (char)v19.try_get_one(a1);
                                                                v170 = (char)v19.unwrap();
                                                                v39 = (!v170 ? 10 : g_49fa14[*(v170)]);
                                                                (char)v19.try_get_one(a1, "CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file inst", 7);
                                                                v171 = "CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file inst".unwrap(7, &(char)v19);
                                                                if (!v171)
                                                                    core::option::unwrap_failed(&g_82e978); /* do not return */
                                                                <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&(char)v19, v171[1], v171[2]);
                                                                v62 = (long long)v21;
                                                                memcpy(&v61, &v18, 16);
                                                                (char)v19.try_get_one(a1, "DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQ", 15);
                                                                v172 = "DOTENV-FILENAMEdotenv-filenameSearch for environment file named <DOTENV-FILENAME> instead of `.env`DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQ".unwrap(15, &(char)v19);
                                                                if (v172)
                                                                {
                                                                    (char)v19.clone(v172);
                                                                    v54 = (long long)v21;
                                                                    memcpy(&v52, &v18, 16);
                                                                }
                                                                else
                                                                {
                                                                    v52 = 0x8000000000000000;
                                                                }
                                                                (char)v19.try_get_one(a1, "DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comme", 11);
                                                                v173 = "DOTENV-PATHdotenv-pathLoad <DOTENV-PATH> as environment file instead of searching for oneDRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comme".unwrap(11, &(char)v19);
                                                                if (v173)
                                                                {
                                                                    (char)v19.to_vec(v173[1], v173[2]);
                                                                    v57 = (long long)v21;
                                                                    memcpy(&v55, &v18, 16);
                                                                }
                                                                else
                                                                {
                                                                    v55 = 0x8000000000000000;
                                                                }
                                                                v11 = a1.get_flag("DRY-RUNdry-runJUST_DRY_RUNPrint what just would do without doing itQUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIG", 7);
                                                                (char)v19.try_get_one(a1);
                                                                v174 = (char)v19.unwrap();
                                                                if (!v174)
                                                                    core::option::unwrap_failed(&g_82e990); /* do not return */
                                                                v10 = *(v174);
                                                                v175 = a1.get_flag("NO-HIGHLIGHTJUST_JUSTFILEUse <JUSTFILE> as justfileLIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in", 12);
                                                                std::env::current_dir(&v111);
                                                                (char)v19.context(&v111);
                                                                v176 = (long long)v19;
                                                                memcpy(&v66, &v20, 16);
                                                                v67 = v22;
                                                                if (v176 == 9223372036854775815)
                                                                {
                                                                    v109 = v66;
                                                                    v110 = v67;
                                                                    v29 = v166;
                                                                    v28 = v149;
                                                                    (char)v19.try_get_one(a1, "LIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show alia", 12);
                                                                    v177 = "LIST-HEADINGlist-headingJUST_LIST_HEADINGPrint <TEXT> before listAvailable recipes:\nLIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show alia".unwrap(12, &(char)v19);
                                                                    if (!v177)
                                                                        core::option::unwrap_failed(&g_82e9a8); /* do not return */
                                                                    v114.clone(v177);
                                                                    (char)v19.try_get_one(a1, "LIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-", 11);
                                                                    v178 = "LIST-PREFIXlist-prefixPrint <TEXT> before each list itemLIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-".unwrap(11, &(char)v19);
                                                                    if (!v178)
                                                                        core::option::unwrap_failed(&g_82e9c0); /* do not return */
                                                                    v116.clone(v178);
                                                                    v179 = a1;
                                                                    v9 = v179.get_flag("LIST-SUBMODULESlist-submodulesJUST_LIST_SUBMODULESList recipes in submodulesno-aliasesJUST_NO_ALIASESDon't show aliases in listNO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-hi", 15);
                                                                    v8 = v179.get_flag("NO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJU", 9);
                                                                    v7 = v179.get_flag("NO-ALIASESCEILINGceilingJUST_CEILINGDo not ascend above <CEILING> directory when searching for a justfile.CHECKcheckFORMATRun `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required", 10);
                                                                    v6 = v179.get_flag("NO-DEPSno-depsJUST_NO_DEPSno-dependenciesDon't run recipe dependenciesNO-DOTENVno-dotenvJUST_NO_DOTENVDon't load `.env` fileno-highlightJUST_NO_HIGHLIGHTDon't highlight echoed recipe lines in boldONEoneForbid multiple recipes from being invoked on the comm", 7);
                                                                    v5 = v179.get_flag("ONEoneForbid multiple recipes from being invoked on the command linequietJUST_QUIETSuppress all outputALLOW-MISSINGallow-missingJUST_ALLOW_MISSINGIgnore missing recipe and module errorsSETsetVALUESHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell", 3);
                                                                    v113 = v60;
                                                                    v112 = v59;
                                                                    v111 = v58;
                                                                    (char)v19.try_get_one(v179, "SHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.T", 5);
                                                                    v180 = "SHELLshellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.T".unwrap(5, &(char)v19);
                                                                    if (v180)
                                                                    {
                                                                        (char)v19.clone(v180);
                                                                        v70 = (long long)v21;
                                                                        memcpy(&v68, &v18, 16);
                                                                    }
                                                                    else
                                                                    {
                                                                        v68 = 0x8000000000000000;
                                                                    }
                                                                    if ((char)a1.get_flag("CLEAR-SHELL-ARGS", 16))
                                                                    {
                                                                        v46 = 0;
                                                                        v47 = 8;
                                                                        v48 = 0;
                                                                    }
                                                                    else
                                                                    {
                                                                        (char)v19.try_get_many(a1, "SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENA", 9);
                                                                        v121.unwrap("SHELL-ARGClear shell argumentsCOLORcolorJUST_COLORPrint colorful outputCOMMAND-COLORcommand-colorJUST_COMMAND_COLOREcho recipe lines in <COMMAND-COLOR>CYGPATHcygpathJUST_CYGPATHUse binary at <CYGPATH> to convert between unix and Windows paths.DOTENV-FILENA", 9, &(char)v19);
                                                                        if (*((long long *)&v121))
                                                                        {
                                                                            (char)v19.collect(&v121);
                                                                            v48 = (long long)v21;
                                                                            *((int128_t *)&v46) = (int128_t)v19;
                                                                        }
                                                                        else
                                                                        {
                                                                            v46 = 0x8000000000000000;
                                                                        }
                                                                    }
                                                                    v4 = v0.get_flag("SHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp", 13);
                                                                    v25 = v38;
                                                                    v181 = *((int128_t *)&v30);
                                                                    v24 = v192;
                                                                    memcpy(&v23, &v34, 16);
                                                                    *((int128_t *)&v21) = *((int128_t *)&v33);
                                                                    v18 = v181;
                                                                    v63.try_get_one(v0, "TEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable ", 7);
                                                                    v182 = "TEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable ".unwrap(7, &v63);
                                                                    if (v182)
                                                                    {
                                                                        v63.to_vec(v182[1], v182[2]);
                                                                        v73 = *((long long *)&v65);
                                                                        v71 = v64;
                                                                    }
                                                                    else
                                                                    {
                                                                        v72 = 0x8000000000000000;
                                                                    }
                                                                    v183 = a1.get_flag("TIMESTAMPtimestampJUST_TIMESTAMPPrint recipe command timestampsJUST_TIMESTAMP_FORMATTimestamp format stringJUST_UNSORTEDReturn list and summary entries in source orderJUST_UNSTABLEEnable unstable featuresVERBOSEverboseJUST_VERBOSEUse verbose outputworking-", 9);
                                                                    v63.try_get_one(a1, "TIMESTAMP-FORMATInvalid argumentInvalid exchange", 16);
                                                                    v184 = "TIMESTAMP-FORMATInvalid argumentInvalid exchange".unwrap(16, &v63);
                                                                    if (!v184)
                                                                        core::option::unwrap_failed(&g_82e9d8); /* do not return */
                                                                    v63.clone(v184);
                                                                    v3 = v183;
                                                                    v185 = a1;
                                                                    v2 = v185.get_flag(&g_4691e8, 8);
                                                                    if ((char)v185.get_flag("QUIETDUMP-FORMATdump-formatDump justfile as <FORMAT>EXPLAINexplainJUST_EXPLAINPrint recipe doc comment before running itGLOBAL-JUSTFILEglobal-justfileWORKING-DIRECTORYUse global justfileHIGHLIGHThighlightJUST_HIGHLIGHTHighlight echoed recipe lines in boldN", 5))
                                                                        v186 = 0;
                                                                    else
                                                                        v186 = ((char)a1.get_count("VERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or m", 7) ? (char)a1.get_count("VERBOSEverboseJUST_VERBOSEUse verbose outputworking-directoryJUST_WORKING_DIRECTORYUse <WORKING-DIRECTORY> as working directory. --justfile must also be setYESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or m", 7) == 1 ^ 3 : 1);
                                                                    v188 = a1.get_flag("YESyesAutomatically confirm all recipes.CHANGELOGchangelogPrint changelogCHOOSEchooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun ", 3);
                                                                    v90 = v51;
                                                                    v89 = v50;
                                                                    v74 = v61;
                                                                    v78 = v62;
                                                                    v91 = v53;
                                                                    v92 = v54;
                                                                    v93 = v56;
                                                                    v94 = v57;
                                                                    v81 = v110;
                                                                    v79 = v109;
                                                                    v84 = v115;
                                                                    v82 = v114;
                                                                    v85 = v116;
                                                                    v86 = v117;
                                                                    v101 = v111;
                                                                    v102 = v112;
                                                                    v103 = v113;
                                                                    v95 = v69;
                                                                    v96 = v70;
                                                                    v98 = v48;
                                                                    memcpy(&v97, &v46, 16);
                                                                    v108 = v38;
                                                                    v107 = v192;
                                                                    memcpy(&v106, &v34, 16);
                                                                    memcpy(&v105, &v33, 16);
                                                                    memcpy(&v104, &v30, 16);
                                                                    v100 = v73;
                                                                    v99 = v71;
                                                                    v88 = *((long long *)&v65);
                                                                    v87 = v64;
                                                                    memcpy(v17, &(char)v74, 384);
                                                                    *((unsigned int *)&v17[384]) = v39;
                                                                    *((unsigned long long *)&v17[388]) = 0;
                                                                    *((char *)&v17[396]) = 0;
                                                                    *((unsigned long long *)&v17[397]) = 42949672970;
                                                                    *((char *)&v17[405]) = v12;
                                                                    *((char *)&v17[406]) = v14;
                                                                    *((char *)&v17[407]) = v13;
                                                                    *((char *)&v17[408]) = v11;
                                                                    *((char *)&v17[409]) = v10;
                                                                    *((unsigned long long *)&v17[410]) = (0 CONCAT (v4 * 0x100 | v5) * 0x1000000000000) | ((0 CONCAT (v6 * 0x100 | v7) * 0x100000000) | ((v8 ^ 1) * 0x1000000 | v9 * 0x10000 | (v175 ^ 1) * 0x100 | v16) & 18446462603027808255) & 281474976710655;
                                                                    *((char *)&v17[418]) = v3;
                                                                    *((char *)&v17[419]) = v2;
                                                                    *((char *)&v17[420]) = v1;
                                                                    *((char *)&v17[421]) = v188;
                                                                    *((char *)&v17[422]) = v15;
                                                                    *((char *)&v17[423]) = v186;
                                                                    if ((char)v28)
                                                                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v40);
                                                                    core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::string::String)>>(&v42);
                                                                    core::ptr::drop_in_place<regex::error::Error>(&v45);
                                                                    if (!(char)v29)
                                                                        return a0;
                                                                }
                                                                else
                                                                {
                                                                    v17[56] = v24;
                                                                    v17[40] = v23;
                                                                    *((unsigned long *)&v17[32]) = v67;
                                                                    v17[16] = v66;
                                                                    *((unsigned long *)&v17[8]) = v176;
                                                                    *((unsigned long long *)v17) = 0x8000000000000000;
                                                                    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v56);
                                                                    core::ptr::drop_in_place<regex::error::Error>(&v53);
                                                                    core::ptr::drop_in_place<std::path::PathBuf>(&v61);
                                                                    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v50);
                                                                    core::ptr::drop_in_place<just::subcommand::Subcommand>(&v30);
                                                                    core::ptr::drop_in_place<just::search_config::SearchConfig>(&v58);
                                                                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v40);
                                                                    core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::string::String)>>(&v42);
                                                                    core::ptr::drop_in_place<regex::error::Error>(&v45);
                                                                    if (!v165)
                                                                        return a0;
                                                                }
                                                                goto LABEL_660170;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        v149 = (unsigned int)v143 & 0xffffff00 | 1;
        v165 = 1;
        v166 = (unsigned int)v126 & 0xffffff00 | 1;
        goto LABEL_660359;
    }
    v135 = !v27;
    if (v27)
    {
        v136 = a0;
        *((unsigned long *)&v17[24]) = v41;
        *((unsigned long long [9])&v17[8]) = v40;
        v137 = *((long long *)v134);
        v138 = (long long)v134[8];
        *((void* *)&v17[64]) = v27;
        *((int128_t *)&v17[48]) = *((int128_t *)&v26);
        v139 = 40;
        v140 = 32;
    }
    else
    {
        v136 = a0;
        *((unsigned long *)&v17[32]) = v41;
        *((unsigned long long [9])&v17[16]) = v40;
        v137 = *((long long *)v134);
        v138 = (long long)v134[8];
        *((unsigned long long *)&v17[8]) = 9223372036854775813;
        v139 = 48;
        v140 = 40;
    }
    *((unsigned long *)((char *)v136 + v140)) = v137;
    *((unsigned long *)((char *)v136 + v139)) = v138;
    *(v136) = 0x8000000000000000;
    core::ptr::drop_in_place<just::search_config::SearchConfig>(&v58);
LABEL_660157:
    core::ptr::drop_in_place<alloc::vec::Vec<(alloc::string::String,alloc::string::String)>>(&v42);
    core::ptr::drop_in_place<regex::error::Error>(&v45);
    if (!v135)
        return a0;
    goto LABEL_660170;
}
