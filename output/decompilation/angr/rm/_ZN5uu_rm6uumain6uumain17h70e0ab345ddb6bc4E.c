long long uu_rm::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x6d9]
    char v1;  // [bp-0x6d8]
    char v2;  // [bp-0x6d7]
    char v3;  // [bp-0x6d6]
    char v4;  // [bp-0x6d5]
    char v5;  // [bp-0x6d4]
    char v6;  // [bp-0x6d3]
    char v7;  // [bp-0x6d2]
    char v8;  // [bp-0x6d1]
    void* v9;  // [bp-0x6d0]
    void* v10;  // [bp-0x6c8]
    unsigned long long v11;  // [bp-0x6c0]
    unsigned long long v12;  // [sp-0x6b8]
    unsigned long long v13;  // [sp-0x6b0]
    char *v14;  // [bp-0x6a8], Other Possible Types: char, unsigned long long
    char *v15;  // [bp-0x6a0], Other Possible Types: unsigned long long
    char *v16;  // [bp-0x698], Other Possible Types: char, unsigned long long
    unsigned long long v17;  // [bp-0x690]
    void* v18;  // [bp-0x688], Other Possible Types: char
    unsigned long long v19;  // [bp-0x678]
    void* v20;  // [sp-0x670], Other Possible Types: char *, unsigned long, unsigned long long
    unsigned long v21;  // [sp-0x668], Other Possible Types: unsigned long long
    char v22;  // [bp-0x660]
    unsigned int v23;  // [bp-0x654]
    void* v24;  // [bp-0x650]
    unsigned long long v25;  // [bp-0x648]
    unsigned long long v26;  // [bp-0x640]
    char v27;  // [bp-0x638]
    unsigned long long v28;  // [bp-0x628]
    int v29;  // [bp-0x620], Other Possible Types: char
    unsigned long long v30;  // [bp-0x610]
    void* v31;  // [bp-0x608], Other Possible Types: char *, int, char, unsigned long long
    int v32;  // [bp-0x608]
    unsigned long long v33;  // [bp-0x600]
    int v34;  // [bp-0x5f8], Other Possible Types: void*, char *, unsigned long long
    int v35;  // [bp-0x5f0], Other Possible Types: unsigned int, unsigned long long
    int v36;  // [bp-0x5e8], Other Possible Types: char *, void*
    unsigned long long v37;  // [bp-0x5e0]
    char v38;  // [bp-0x5d8]
    char v39;  // [bp-0x338]
    char v40;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v41;  // [bp-0x2f0]
    char v42;  // [bp-0x2e8]
    char v43;  // [bp-0x2d8]
    unsigned long long v44;  // [bp-0x2c8]
    void* v46;  // rcx
    unsigned int v47;  // ecx
    unsigned int v48;  // ecx
    char v49;  // bpl
    unsigned long long v50[3];  // rax
    unsigned long v51;  // rbx
    unsigned long v52;  // r12
    char v54;  // al
    char v55;  // al
    char v56;  // bl
    void* v57;  // rdx
    unsigned long long v58;  // rax
    unsigned long long v59;  // rcx
    unsigned long long v60;  // rdx
    unsigned long long v61;  // rax
    unsigned long long v62;  // rax
    char v64;  // al
    void* v65;  // rbx

    uu_rm::uu_app(&v31);
    v40.after_help(&v31);
    v14.try_get_matches_from(&v40, a0, a1);
    if ((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63))
        return v41.from();
    v44 = v19;
    memcpy(&v43, &v18, 16);
    memcpy(&v42, &v16, 16);
    v40 = v14;
    v41 = v15;
    v31.try_get_many(&v40, _ZN5uu_rm9ARG_FILES17hef95834ae08469abE, g_4ea498);
    v39.unwrap(_ZN5uu_rm9ARG_FILES17hef95834ae08469abE, g_4ea498, &v31);
    if (*((long long *)&v39))
    {
        v31.collect(&v39);
        if (v31 == 0x8000000000000000)
            goto LABEL_4571f0;
        v10 = v31;
        v11 = v33;
        v9 = v34;
    }
    else
    {
LABEL_4571f0:
        v11 = 8;
        v9 = 0;
        v10 = 0;
    }
    v0 = v40.get_flag(_ZN5uu_rm9OPT_FORCE17h0cb038dfafcd96caE, g_4ea418);
    if (v0)
    {
        if (!((char)v40.index_of(_ZN5uu_rm9OPT_FORCE17h0cb038dfafcd96caE, g_4ea418) & 1))
            v46 = 0;
        v20 = v46;
        *((int128_t *)&v31) = *((int128_t *)&_ZN5uu_rm10OPT_PROMPT17ha40e439f0eca58adE);
        *((int128_t *)&v34) = *((int128_t *)&_ZN5uu_rm15OPT_PROMPT_MORE17h9f4f98361447e1efE);
        *((int128_t *)&v36) = *((int128_t *)&_ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E);
        v14 = &v31;
        v15 = &v38;
        v47 = 0;
        if (v14.any(&v40, &v20))
            goto LABEL_4572fd;
    }
    else
    {
        if (!v9)
        {
            v14.to_vec("missing operandnever", 15);
            v34 = v16;
            *((int128_t *)&v31) = *((int128_t *)&v14);
            v35 = 1;
            v65 = v31.new();
            core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v10, v11);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
            return v65;
        }
LABEL_4572fd:
        if ((char)v40.get_flag(*((long long *)&_ZN5uu_rm10OPT_PROMPT17ha40e439f0eca58adE), g_4ea448))
        {
LABEL_45731d:
            v47 = 0;
            v49 = 2;
        }
        else
        {
            v47 = v48 & 0xffffff00 | 1;
            v49 = 1;
            if (!(char)v40.get_flag(*((long long *)&_ZN5uu_rm15OPT_PROMPT_MORE17h9f4f98361447e1efE), g_4ea458))
            {
                if ((char)v40.contains_id(*((long long *)&_ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E), g_4ea408))
                {
                    v31.try_get_one(&v40, *((long long *)&_ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E), g_4ea408);
                    v50 = *((long long *)&_ZN5uu_rm15OPT_INTERACTIVE17hdcb858e2bfe51191E).unwrap(g_4ea408, &v31);
                    if (!v50)
                        core::option::unwrap_failed(&g_4e9928); /* do not return */
                    v51 = v50[1];
                    v52 = v50[2];
                    v47 = 0;
                    if (!(char)v51.equal(v52, "never", 5))
                    {
                        v47 = v48 & 0xffffff00 | 1;
                        v49 = 1;
                        if (!(char)v51.equal(v52, "once\"`$\\EADV", 4))
                        {
                            if (!(char)v51.equal(v52, "alwaysInvalid argument to interactive ()remove  ", 6))
                            {
                                v20 = v51;
                                v21 = v52;
                                v14 = &v20;
                                v15 = <&T as core::fmt::Display>::fmt;
                                *((unsigned long long **)&v32) = &g_4e9810;
                                v33 = 2;
                                v36 = 0;
                                v34 = &v14;
                                v35 = 1;
                                v29.map_or_else(&(unsigned long long)v32);
                                v35 = 1;
                                v32 = v29;
                                v34 = v30;
                                (unsigned long long)v32.new();
                                core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v10, v11);
                                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
                                return v65;
                            }
                            goto LABEL_45731d;
                        }
                    }
                }
                else
                {
                    v49 = 3;
                    v47 = 0;
                }
            }
        }
    }
    v23 = v47;
    v54 = v40.get_flag(_ZN5uu_rm19OPT_ONE_FILE_SYSTEM17h8bb65e4078269c0bE, g_4ea438);
    v55 = v40.get_flag(_ZN5uu_rm20OPT_NO_PRESERVE_ROOT17h5f2a6f148cad7644E, g_4ea428);
    v56 = v40.get_flag(_ZN5uu_rm13OPT_RECURSIVE17hd1a2487ee0992495E, g_4ea468);
    v1 = v0;
    v8 = v49;
    v2 = v54;
    v3 = v55 ^ 1;
    v4 = v56;
    v5 = v40.get_flag(_ZN5uu_rm7OPT_DIR17h1fc8202a571f3541E, g_4ea3f8);
    v6 = v40.get_flag(_ZN5uu_rm11OPT_VERBOSE17h2e250573aa413252E, g_4ea478);
    v7 = 2 - (char)v40.get_flag(_ZN5uu_rm17PRESUME_INPUT_TTY17h16578df483f43972E, g_4ea488);
    if ((char)v23)
    {
        if (v56)
        {
            v57 = v9;
            v24 = v57;
            *((int *)&v25) = (2 <= v57 ? "arguments? recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSEN" : "argumentNoEqualsNO_COLORarguments? recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKEN");
            v26 = 9 - (v57 < 2);
            v58 = 13;
            v59 = " recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTOTYPEENOPROTOOPTEPROTONOSUPPORTESOCKTNOSUPPORTEOPNOTSUPPEPFNOSUPPORTEAFNOSUPPORTEADDRINUSEEADDRNOTAVAILENETUNREACHENETRESETECONNABORTEDECONNRESETENOBUFSEISCONNESHUTDOWNETOOMANYREFSETIMEDOUTECONNREFUSEDEHOSTDOWNEHOSTUNREACHEINPROGRESSESTALEEUCLEANENOTNAMENAVAILEISNAMEREMOTEIOEDQUOTENOMEDIUMEMEDIUMTYPEECANCELEDENOKEYEKEYEXPIREDEKEYREVOKEDEKEYREJECTEDEOWNERDEADENOTRECOVERABLEERFKILLEHWPOISON";
            goto LABEL_4576c1;
        }
        else if (v9 > 3)
        {
            v24 = v9;
            v25 = "arguments? recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSEN";
            v26 = 9;
            v58 = 1;
            v59 = "? recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYEL";
LABEL_4576c1:
            v12 = v59;
            v13 = v58;
            v31 = &v24;
            v33 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v34 = &v25;
            v35 = <&T as core::fmt::Display>::fmt;
            v36 = &v12;
            v37 = <&T as core::fmt::Display>::fmt;
            v14 = &g_4e9830;
            v15 = 3;
            v18 = 0;
            v16 = &v31;
            v17 = 3;
            v20.map_or_else(&v14);
            memcpy(&v27, &v20, 16);
            v28 = *((long long *)&v22);
            v14 = uucore::util_name();
            v15 = v60;
            v20 = &v14;
            v21 = <&T as core::fmt::Display>::fmt;
            v31 = &g_4e9798;
            v33 = 2;
            v36 = 0;
            v34 = &v20;
            v35 = 1;
            std::io::stdio::_eprint(&v31);
            v14 = &v27;
            v15 = <alloc::string::String as core::fmt::Display>::fmt;
            v31 = &g_418830;
            v33 = 1;
            v36 = 0;
            v34 = &v14;
            v35 = 1;
            std::io::stdio::_eprint(&v31);
            v31 = &g_4e9860;
            v33 = 1;
            v34 = 8;
            *((uint128_t *)&v35) = 0;
            std::io::stdio::_eprint(&v31);
            v31 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E;
            v61 = v31.flush();
            if (v61)
            {
                v62 = uu_rm::uumain::uumain::{{closure}}(v61);
                if (v62)
                {
                    v12 = v62;
                    v13 = &g_4e9960;
                    uucore::mods::error::set_exit_code((unsigned int)v62.code());
                    v20 = uucore::util_name();
                    v21 = v60;
                    v14 = &v20;
                    v15 = <&T as core::fmt::Display>::fmt;
                    v16 = &v12;
                    v17 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v31 = &g_4e9870;
                    v33 = 3;
                    v36 = 0;
                    v34 = &v14;
                    v35 = 2;
                    std::io::stdio::_eprint(&v31);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v12, &g_4e9960);
                }
            }
            v64 = uucore::read_yes();
            core::ptr::drop_in_place<alloc::string::String>(&v27);
            if (!v64)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v10, v11);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
                return v65;
            }
        }
    }
    if (!(char)uu_rm::remove(v11, v9, &v1))
    {
        core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v10, v11);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
        return 0;
    }
    1.from();
    core::ptr::drop_in_place<alloc::vec::Vec<clap_builder::util::id::Id>>(v10, v11);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
    return v65;
}
