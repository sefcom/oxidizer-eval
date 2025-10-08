long long uu_id::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x7fd]
    unsigned int v1;  // [bp-0x7fc]
    void* v2;  // [bp-0x7f8]
    unsigned int v3;  // [bp-0x7ec]
    unsigned int v4;  // [sp-0x7e8]
    unsigned int v5;  // [bp-0x7e4]
    unsigned int v6;  // [bp-0x7e0]
    unsigned int v7;  // [bp-0x7dc]
    unsigned int v8;  // [bp-0x7d8]
    char v9;  // [bp-0x7d4]
    char v10;  // [bp-0x7d3]
    char v11;  // [bp-0x7d2]
    char v12;  // [bp-0x7d1]
    char v13;  // [bp-0x7d0]
    char v14;  // [bp-0x7cf]
    char v15;  // [bp-0x7ce]
    char v16;  // [bp-0x7cd]
    char v17;  // [bp-0x7cc]
    int v18;  // [bp-0x7c8]
    char *v19;  // [bp-0x7c8]
    char *v20;  // [bp-0x7c8], Other Possible Types: unsigned long long
    unsigned long long v21;  // [bp-0x7c0]
    unsigned long long v22;  // [sp-0x7c0]
    char *v23;  // [bp-0x7b8], Other Possible Types: char
    unsigned long long v24;  // [bp-0x7b0]
    void* v25;  // [bp-0x7a8], Other Possible Types: char
    char v26;  // [bp-0x798]
    char *v27;  // [bp-0x788], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x780]
    unsigned long long v29;  // [bp-0x778]
    char v30;  // [bp-0x770]
    int v31;  // [bp-0x768], Other Possible Types: char *
    char *v32;  // [bp-0x768]
    unsigned long long v33;  // [bp-0x760]
    char *v34;  // [bp-0x758]
    char *v35;  // [bp-0x750]
    int v36;  // [bp-0x748]
    unsigned long long v37;  // [bp-0x740]
    char *v38;  // [bp-0x738]
    int v39;  // [bp-0x730], Other Possible Types: unsigned long long
    void* v40;  // [bp-0x728]
    unsigned long long v41;  // [bp-0x720]
    unsigned long long v42;  // [bp-0x718]
    char *v43;  // [bp-0x710]
    unsigned long long v44;  // [bp-0x708]
    char v45;  // [bp-0x700]
    char v46;  // [bp-0x6f0]
    unsigned long long v47;  // [bp-0x6e0]
    unsigned long long v48;  // [bp-0x6d8]
    unsigned long long v49;  // [bp-0x6d0]
    unsigned long long v50;  // [bp-0x6c8]
    unsigned long v51;  // [bp-0x6c0]
    unsigned long v52;  // [bp-0x6b8]
    void* v53;  // [bp-0x6b0]
    void* v54;  // [bp-0x6a8]
    char v55;  // [bp-0x6a0]
    unsigned long long v56;  // [bp-0x698]
    void* v57;  // [bp-0x690]
    int v58;  // [bp-0x688], Other Possible Types: char
    char *v59;  // [bp-0x688]
    unsigned long long v60;  // [bp-0x688]
    unsigned long v61;  // [bp-0x680], Other Possible Types: unsigned long long
    char v62;  // [bp-0x680], Other Possible Types: unsigned long long
    int v63;  // [bp-0x678], Other Possible Types: char *, unsigned long long
    unsigned int v64;  // [bp-0x670], Other Possible Types: unsigned long long
    int v65;  // [bp-0x668], Other Possible Types: void*
    int v66;  // [bp-0x668]
    int v67;  // [bp-0x658]
    int v68;  // [bp-0x648]
    int v69;  // [bp-0x638]
    int v70;  // [bp-0x628]
    int v71;  // [bp-0x618]
    int v72;  // [sp-0x3b8], Other Possible Types: char, unsigned long long
    int v73;  // [bp-0x3b8]
    int v74;  // [bp-0x3b8], Other Possible Types: unsigned long long
    int v75;  // [bp-0x3a8]
    int v76;  // [bp-0x3a8]
    int v77;  // [bp-0x398]
    int v78;  // [bp-0x388]
    int v79;  // [bp-0x378]
    char v80;  // [bp-0x368]
    int v81;  // [bp-0x358]
    char v82;  // [bp-0x348]
    unsigned int v83;  // [bp-0x340]
    int v84;  // [bp-0x33c]
    char v85;  // [bp-0xf0]
    unsigned long long v86;  // [bp-0xb0]
    char v87;  // [bp-0xa8]
    char v89;  // r15b
    char v90;  // r12b
    char v91;  // bpl
    char v92;  // bl
    char v93;  // r14b
    char v94;  // bpl
    unsigned long long v95;  // rdx
    unsigned long long v96;  // r12
    unsigned long long v97;  // rbx
    unsigned long long v98[3];  // rax
    unsigned int v99;  // r14d
    unsigned int v100;  // ebx
    unsigned int v101;  // eax
    unsigned int v102;  // r15d
    unsigned long long v104;  // rdx
    unsigned long long v106;  // rax
    void* v107;  // rcx
    void* v109;  // rax

    uu_id::uu_app(&v58);
    v72.after_help(&v58);
    (char)v19.try_get_matches_from(&v72, a0, a1);
    if ((char)(((0 ^ v19) & (0 ^ -(v19))) >> 63))
        return v44.from();
    v47 = *((long long *)&v26);
    memcpy(&v46, &v25, 16);
    memcpy(&v45, &v23, 16);
    v43 = v19;
    v44 = v21;
    v58.try_get_many(&v43);
    v85.unwrap(&v58);
    if (*((long long *)&v85))
    {
        v58.collect(&v85);
        memcpy(&v72, &v62, 16);
        if (v59 == 0x8000000000000000)
            goto LABEL_457073;
        v39 = v72;
        v38 = v59;
    }
    else
    {
LABEL_457073:
        v38 = 0;
        v39 = 8;
        v40 = 0;
    }
    v89 = v43.get_flag("name", 4);
    v90 = v43.get_flag("userSomedumb", 4);
    v91 = v43.get_flag("groupgroupscontext ", 5);
    v92 = v43.get_flag("groupscontext ", 6);
    v93 = v43.get_flag("realBOLDBlue", 4);
    v2 = v40;
    v9 = v89;
    v10 = v90;
    v11 = v91;
    v12 = v92;
    v13 = v93;
    v14 = v43.get_flag("zeroAnsi -- ", 4);
    v15 = v43.get_flag("context ", 7);
    v16 = 0;
    v4 = 0;
    v17 = v2;
    v94 = v91 | v92 | v90;
    if (v89)
    {
        if (!v94 && !v15)
            goto LABEL_457290;
LABEL_4571ea:
        if (v2)
        {
            if (v15)
                goto LABEL_45723a;
            *((int *)&v41) = (v14 ? &g_4189cb : " ");
            *((int *)&v0) = (v14 ? 0 : 10);
        }
        else
        {
            *((int *)&v41) = (v14 ? &g_4189cb : " ");
            *((int *)&v0) = (v14 ? 0 : 10);
            if (v15)
                goto LABEL_457cb5;
        }
        v53 = 0;
        v54 = v2;
        v55 = 0;
        if (!((char)v53.spec_next() & 1))
        {
            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v38);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
            return 0;
        }
        v96 = v95;
        v42 = v39;
        v52 = 2 <= v2;
        *((int *)&v51) = (v2 < 2 ? 1 : &g_4189cb);
        while (true)
        {
            if (v17)
            {
                if (v96 >= v2)
                    core::panicking::panic_bounds_check(v96, v2, &g_4e82f0); /* do not return */
                v97 = v96 * 3;
                v58.locate(*((long long *)(v42 + v97 * 8 + 8)), *((long long *)(v42 + v97 * 8 + 16)));
                if (v59 == 0x8000000000000000)
                {
                    v27 = uucore::util_name();
                    v28 = v95;
                    v31 = &v27;
                    v33 = <&T as core::fmt::Display>::fmt;
                    v20 = &g_4e81d0;
                    v22 = 2;
                    v25 = 0;
                    v23 = &v31;
                    v24 = 1;
                    std::io::stdio::_eprint(&v20);
                    v98 = v42 + v97 * 8;
                    v27 = 0;
                    v28 = v98[1];
                    v29 = v98[2];
                    v30 = 1;
                    v32 = &v27;
                    v33 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v19 = &g_4e8248;
                    v21 = 2;
                    v25 = 0;
                    v23 = &v32;
                    v24 = 1;
                    std::io::stdio::_eprint(&v19);
                    uucore::mods::error::set_exit_code(1);
                    if (v96 + 1 >= v2)
                    {
                        core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&v58);
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v38);
                        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
                        return 0;
                    }
                    core::ptr::drop_in_place<core::result::Result<uucore::features::entries::Passwd,std::io::error::Error>>(&v58);
                    goto LABEL_457390;
                }
                else
                {
                    memcpy(&v82, &v71, 16);
                    v81 = v70;
                    memcpy(&v80, &v69, 16);
                    v79 = v68;
                    v78 = v67;
                    v77 = v65;
                    memcpy(&v75, &v63, 16);
                    memcpy(&v72, &v59, 16);
                    v74 = v73;
                    v75 = v76;
                }
            }
            else
            {
                v74 = 0x8000000000000000;
                v74 = v73;
            }
            if ((char)v43.get_flag("passwordNO_COLORNulErrorhuman-readableauditcannot find name for user ID cannot find name for group ID UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTY", 8))
            {
                uu_id::pline(v72 != 0x8000000000000000, v83);
                break;
            }
            if ((char)v43.get_flag("human-readableauditcannot find name for user ID cannot find name for group ID UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPE", 14))
            {
                memcpy(&v71, &v82, 16);
                v70 = v81;
                memcpy(&v69, &v80, 16);
                v68 = v79;
                v67 = v78;
                v65 = v77;
                v63 = v75;
                v58 = v74;
                uu_id::pretty(&v58);
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v38);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
                return 0;
            }
            if ((char)v43.get_flag("auditcannot find name for user ID cannot find name for group ID UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTOTYPEENOPROTOOPTEPROTONOSUPPORTESOCKTNOSUPPORTEOPNOTSUPPEPFNOSUPPORTEAFNOSUPPORTEADDRINUSEEADDRNOTAVAILENETUNREACHENETRESETECONNABORTEDECONNRESETENOBUFSEISCONNESHUTDOWNETOOMANYREFSETIMEDOUTECONNREFUSEDEHOSTDOWNEHOSTUNREACHEINPROGRESSESTALEEUCLEANENOTNAMENAVAILEISNAMEREMOTEIOEDQUOTENOMEDIUMEMEDIUMTYPEECANCELEDENOKEYEKEYEXPIREDEKEYREVOKEDEKEYREJECTEDEOWNERDEADENOTRECOVERABLEERFKILLEHWPOISON", 5))
                break;
            v99 = (int)v84;
            if (v13 || !v10 && !v11 && !v12)
            {
                v100 = uucore::features::process::getuid();
                v101 = uucore::features::process::getgid();
            }
            else
            {
                v100 = uucore::features::process::geteuid();
                v101 = uucore::features::process::getegid();
            }
            if (v72 == 0x8000000000000000)
            {
                v102 = v100;
                if (v72 != 0x8000000000000000)
                    goto LABEL_457691;
                goto LABEL_457690;
            }
            else
            {
                v102 = v83;
                if (v72 == 0x8000000000000000)
                {
LABEL_457690:
                    v99 = v101;
                    goto LABEL_457693;
                }
                else
                {
LABEL_457691:
LABEL_457693:
                    v1 = v102;
                    v3 = v99;
                    v4 = 1;
                    v5 = v1;
                    v6 = v3;
                    v7 = uucore::features::process::geteuid();
                    v8 = uucore::features::process::getegid();
                    if (v11)
                    {
                        if (v9)
                        {
                            v58.locate(v6);
                            if (v59 == 0x8000000000000000)
                            {
                                uu_id::uumain::uumain::{{closure}}(&(char)v19, &v3, v61);
                            }
                            else
                            {
                                v19 = v59;
                                v21 = v61;
                                v23 = v63;
                            }
                        }
                        else
                        {
                            v58.to_vec(core::fmt::num::imp::<impl u32>::_fmt(v6, &v27, 10), v95);
                            v23 = v63;
                            *((int128_t *)&v18) = *((int128_t *)&v59);
                        }
                        v27 = &(char)v19;
                        v28 = <alloc::string::String as core::fmt::Display>::fmt;
                        v59 = &g_4182c0;
                        v61 = 1;
                        v65 = 0;
                        v63 = &v27;
                        v64 = 1;
                        std::io::stdio::_print(&v59);
                        core::ptr::drop_in_place<alloc::string::String>(v19, v21);
                    }
                    if (v10)
                    {
                        if (v9)
                        {
                            v86.locate(v1);
                            if (v86 == 0x8000000000000000)
                            {
                                v104 = *((long long *)&v87);
                                goto LABEL_45789e;
                            }
                            else
                            {
                                uucore::features::entries::uid2usr::{{closure}}(&v58, &v86);
                                v104 = v61;
                                if (v59 == 0x8000000000000000)
                                {
LABEL_45789e:
                                    uu_id::uumain::uumain::{{closure}}(&(char)v19, &v1, v104);
                                }
                                else
                                {
                                    v19 = v59;
                                    v21 = v104;
                                    v23 = v63;
                                }
                            }
                        }
                        else
                        {
                            v58.to_vec(core::fmt::num::imp::<impl u32>::_fmt(v1, &v27, 10), v95);
                            v23 = v63;
                            *((int128_t *)&v18) = *((int128_t *)&v59);
                        }
                        v27 = &(char)v19;
                        v28 = <alloc::string::String as core::fmt::Display>::fmt;
                        v59 = &g_4182c0;
                        v61 = 1;
                        v65 = 0;
                        v63 = &v27;
                        v64 = 1;
                        std::io::stdio::_print(&v59);
                        core::ptr::drop_in_place<alloc::string::String>(v19, v21);
                        goto LABEL_457942;
                    }
                    else
                    {
LABEL_457942:
                        uucore::features::entries::get_groups_gnu(&v58, 1, v3);
                        v48.unwrap(&v58);
                        if (!v17)
                        {
                            v35.clone(v49, v50);
                        }
                        else if (v72 != 0x8000000000000000)
                        {
                            v58.belongs_to(&v74);
                            *((int128_t *)&v18) = *((int128_t *)&v61);
                            if (v59 == 0x8000000000000000)
                                core::option::unwrap_failed(&g_4e8320); /* do not return */
                            v35 = v59;
                            *((int128_t *)&v36) = (int128_t)v18;
                        }
                        else
                        {
                            core::option::unwrap_failed(&g_4e8320); /* do not return */
                        }
                        if (v12)
                        {
                            v60 = (long long)v36;
                            v62 = (long long)v36 + v37 * 4;
                            v63 = &v9;
                            v27.collect(&v60);
                            alloc::str::join_generic_copy(&v60, v28, v29, v41);
                            v34 = v63;
                            v106 = ((v17 & 1) ? v51 : 1);
                            v107 = ((v17 & 1) ? v52 : 0);
                            if (!v14)
                                v106 = 1;
                            if (!v14)
                                v107 = 0;
                            *((int128_t *)&v31) = *((int128_t *)&v60);
                            v56 = v106;
                            v57 = v107;
                            v20 = &(unsigned long long)v31;
                            v22 = <alloc::string::String as core::fmt::Display>::fmt;
                            v23 = &v56;
                            v24 = <&T as core::fmt::Display>::fmt;
                            v60 = &g_418618;
                            v62 = 2;
                            v65 = 0;
                            v63 = &v20;
                            v64 = 2;
                            std::io::stdio::_print(&v60);
                            core::ptr::drop_in_place<alloc::string::String>(v32, v33);
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v27);
                        }
                        if (!v94)
                            uu_id::id_print(&v4, (long long)v36, v37);
                        v19 = &v0;
                        v21 = <uucore::mods::line_ending::LineEnding as core::fmt::Display>::fmt;
                        v59 = &g_4182c0;
                        v61 = 1;
                        v65 = 0;
                        v63 = &v19;
                        v64 = 1;
                        std::io::stdio::_print(&v59);
                        core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v35, (long long)v36);
                        core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v48, v49);
                        core::ptr::drop_in_place<core::option::Option<uucore::features::entries::Passwd>>(&v74);
                        v65 = v66;
                        if (v96 + 1 >= v2)
                        {
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v38);
                            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
                            return 0;
                        }
LABEL_457390:
                        v96 = v95;
                        if (!((char)v53.spec_next() & 1))
                        {
                            core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v38);
                            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
                            return 0;
                        }
                    }
                }
            }
        }
        core::ptr::drop_in_place<core::option::Option<uucore::features::entries::Passwd>>(&v74);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v38);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
        return 0;
    }
    else
    {
        if (v93 != 1 || v94)
        {
            if ((v14 ^ 1) || v15 || v94)
                goto LABEL_4571ea;
            v72.to_vec("option --zero not permitted in default formatcannot print security context when user specified--context (-Z) works only on an SELinux-enabled kernel: no such user\n", 45);
            v63 = (long long)v75;
            v58 = v72;
            v64 = 1;
            v109 = v58.new();
        }
        else if (!v15)
        {
LABEL_457290:
            v72.to_vec("printing only names or real IDs requires -u, -g, or -Goption --zero not permitted in default formatcannot print security context when user specified--context (-Z) works only on an SELinux-enabled kernel: no such user\n", 54);
            v63 = (long long)v75;
            v58 = v72;
            v64 = 1;
            v109 = v58.new();
        }
        else if (v2)
        {
LABEL_45723a:
            v72.to_vec("cannot print security context when user specified--context (-Z) works only on an SELinux-enabled kernel: no such user\n", 49);
            v63 = (long long)v75;
            v58 = v72;
            v64 = 1;
            v109 = v58.new();
        }
        else
        {
            *((int *)&v0) = (v14 ? 0 : 10);
LABEL_457cb5:
            v72.to_vec("--context (-Z) works only on an SELinux-enabled kernel: no such user\n", 54);
            v63 = (long long)v75;
            v58 = v72;
            v64 = 1;
            v109 = v58.new();
        }
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v38);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v43);
        return v109;
    }
}
