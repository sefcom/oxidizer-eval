long long uu_rm::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3f1]
    char v1;  // [bp-0x3f0]
    char v2;  // [bp-0x3ef]
    char v3;  // [bp-0x3ee]
    char v4;  // [bp-0x3ed]
    char v5;  // [bp-0x3ec]
    char v6;  // [bp-0x3eb]
    char v7;  // [bp-0x3ea]
    char v8;  // [bp-0x3e9]
    unsigned long long v9;  // [sp-0x3e8]
    unsigned long long v10;  // [sp-0x3e0]
    void* v11;  // [bp-0x3d8]
    int v12;  // [bp-0x3d0], Other Possible Types: unsigned long long
    void* v13;  // [bp-0x3c8]
    char *v14;  // [bp-0x3c0], Other Possible Types: char, unsigned long long
    char *v15;  // [bp-0x3c0]
    char *v16;  // [bp-0x3b8], Other Possible Types: unsigned long long
    char *v17;  // [bp-0x3b0], Other Possible Types: char, unsigned long long
    unsigned long long v18;  // [bp-0x3a8]
    void* v19;  // [bp-0x3a0], Other Possible Types: char
    char v20;  // [bp-0x390]
    unsigned int v21;  // [bp-0x37c]
    char v22;  // [bp-0x378], Other Possible Types: unsigned long long
    int v23;  // [bp-0x378]
    char v24;  // [bp-0x370]
    unsigned long long v25;  // [bp-0x368]
    char *v26;  // [bp-0x360], Other Possible Types: unsigned long long
    unsigned long long v27;  // [bp-0x358]
    unsigned long long v28;  // [bp-0x350]
    unsigned long long v29;  // [bp-0x348]
    char v30;  // [bp-0x340]
    char v31;  // [bp-0x330]
    unsigned long long v32;  // [bp-0x320]
    unsigned long long v33;  // [bp-0x318]
    int v34;  // [bp-0x310], Other Possible Types: char
    unsigned long long v35;  // [bp-0x300]
    void* v36;  // [bp-0x2f8], Other Possible Types: char *, int, char, unsigned long long
    int v37;  // [bp-0x2f0], Other Possible Types: unsigned long long
    int v38;  // [bp-0x2e8], Other Possible Types: char *, unsigned long long
    int v39;  // [bp-0x2e0], Other Possible Types: unsigned long long
    char *v40;  // [bp-0x2d8], Other Possible Types: int, void*
    unsigned long long v41;  // [bp-0x2d0]
    int v42;  // [bp-0x2c8], Other Possible Types: char
    int v44;  // xmm0
    int v45;  // xmm1
    void* v46;  // rdx
    unsigned int v47;  // ecx
    unsigned int v48;  // ecx
    char v49;  // bpl
    unsigned long long v50[3];  // rax
    unsigned long long v51;  // r14
    unsigned long long v52;  // r15
    unsigned long long v53;  // rax
    char v54;  // al
    char v55;  // al
    char v56;  // r12b
    unsigned long long v57;  // rax
    unsigned long long v58;  // rax
    unsigned long long v59;  // rcx
    unsigned long long v60;  // rdx
    unsigned long long v61;  // rax
    unsigned long long v62;  // rax
    void* v64;  // rbx

    uu_rm::uu_app(&v36);
    v14.try_get_matches_from(&v36, a0, a1);
    if ((char)(((0 ^ v14) & (0 ^ -(v14))) >> 63))
        return v29.from();
    v32 = *((long long *)&v20);
    memcpy(&v31, &v19, 16);
    memcpy(&v30, &v17, 16);
    v28 = v14;
    v29 = v16;
    v36.try_get_many(&v28, _ZN5uu_rm9ARG_FILES17h082ab51ad3e97bddE, g_57d6c8);
    v14.unwrap(_ZN5uu_rm9ARG_FILES17h082ab51ad3e97bddE, g_57d6c8, &v36);
    if (v14)
    {
        v44 = *((int128_t *)&v14);
        v45 = *((int128_t *)&v17);
        memcpy(&v42, &v20, 16);
        *((int128_t *)&v40) = *((int128_t *)&v19);
        v38 = v45;
        v36 = v44;
        v22.from_iter(&v36, &g_57d108);
        *((int128_t *)&v36) = *((int128_t *)&v24);
        if (v22 == 0x8000000000000000)
            goto LABEL_4996d5;
        *((int128_t *)&v12) = (int128_t)v36;
        v11 = v22;
    }
    else
    {
LABEL_4996d5:
        v11 = 0;
        v12 = 8;
        v13 = 0;
    }
    v0 = v28.get_flag(_ZN5uu_rm9OPT_FORCE17h2cb15502f8e3177bE, g_57d648);
    if (v13)
    {
        if (!v0)
            goto LABEL_4997e0;
LABEL_499743:
        if (!v28.index_of(_ZN5uu_rm9OPT_FORCE17h2cb15502f8e3177bE, g_57d648))
            v46 = 0;
        v22 = v46;
        *((int128_t *)&v36) = *((int128_t *)&_ZN5uu_rm17OPT_PROMPT_ALWAYS17h4f70fbb1327e4d74E);
        *((int128_t *)&v38) = *((int128_t *)&_ZN5uu_rm15OPT_PROMPT_ONCE17h1920d28bfd53bb62E);
        *((int128_t *)&v40) = *((int128_t *)&_ZN5uu_rm15OPT_INTERACTIVE17h49e18e6e1de1f3caE);
        v15 = &v36;
        v16 = &v42;
        v47 = 0;
        if (!v15.any(&v28, &v22))
            goto LABEL_499978;
LABEL_4997e0:
        if ((char)v28.get_flag(*((long long *)&_ZN5uu_rm17OPT_PROMPT_ALWAYS17h4f70fbb1327e4d74E), g_57d678))
        {
            v47 = 0;
            v49 = 2;
        }
        else
        {
            v47 = v48 & 0xffffff00 | 1;
            v49 = 1;
            if (!(char)v28.get_flag(*((long long *)&_ZN5uu_rm15OPT_PROMPT_ONCE17h1920d28bfd53bb62E), g_57d688))
            {
                if ((char)v28.contains_id(*((long long *)&_ZN5uu_rm15OPT_INTERACTIVE17h49e18e6e1de1f3caE), g_57d638))
                {
                    v36.try_get_one(&v28, *((long long *)&_ZN5uu_rm15OPT_INTERACTIVE17h49e18e6e1de1f3caE), g_57d638);
                    v50 = *((long long *)&_ZN5uu_rm15OPT_INTERACTIVE17h49e18e6e1de1f3caE).unwrap(g_57d638, &v36);
                    if (!v50)
                        core::option::unwrap_failed(&g_57d1a8); /* do not return */
                    v51 = v50[1];
                    v52 = v50[2];
                    v47 = 0;
                    if (!(char)v51.equal(v52, "neverTerm) = manyZero", 5))
                    {
                        v47 = v48 & 0xffffff00 | 1;
                        v49 = 1;
                        if (!(char)v51.equal(v52, "once\"`$\\EADV", 4) && !(char)v51.equal(v52, "alwaysremove  /root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsESTRPIPE", 6))
                        {
                            v14.to_vec(v51, v52);
                            v39 = v17;
                            *((int128_t *)&v37) = *((int128_t *)&v15);
                            v36 = 1;
                            v53 = v36.new();
                            goto LABEL_499964;
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
LABEL_499978:
        v21 = v47;
        v54 = v28.get_flag(_ZN5uu_rm19OPT_ONE_FILE_SYSTEM17h344c7715323c4052E, g_57d668);
        v55 = v28.get_flag(_ZN5uu_rm20OPT_NO_PRESERVE_ROOT17hc8efae019a01f81fE, g_57d658);
        v56 = v28.get_flag(_ZN5uu_rm13OPT_RECURSIVE17h665cc434e6ab3c06E, g_57d698);
        v1 = v0;
        v8 = v49;
        v2 = v54;
        v3 = v55 ^ 1;
        v4 = v56;
        v5 = v28.get_flag(_ZN5uu_rm7OPT_DIR17h9e1c6cf573a08097E, g_57d628);
        v6 = v28.get_flag(_ZN5uu_rm11OPT_VERBOSE17h88cfaa5d1fdcc573E, g_57d6a8);
        v7 = 2 - (char)v28.get_flag(_ZN5uu_rm17PRESUME_INPUT_TTY17ha1d1f2059ead8c8bE, g_57d6b8);
        if ((char)v21)
        {
            v57 = v13;
            if (v56)
            {
                v33 = v57;
                *((int *)&v9) = (2 <= v57 ? "arguments? recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSEN" : "argumentNoEqualsNO_COLOR");
                v10 = 9 - (v57 < 2);
                v58 = 13;
                v59 = " recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTOTYPEENOPROTOOPTEPROTONOSUPPORTESOCKTNOSUPPORTEOPNOTSUPPEPFNOSUPPORTEAFNOSUPPORTEADDRINUSEEADDRNOTAVAILENETUNREACHENETRESETECONNABORTEDECONNRESETENOBUFSEISCONNESHUTDOWNETOOMANYREFSETIMEDOUTECONNREFUSEDEHOSTDOWNEHOSTUNREACHEINPROGRESSESTALEEUCLEANENOTNAMENAVAILEISNAMEREMOTEIOEDQUOTENOMEDIUMEMEDIUMTYPEECANCELEDENOKEYEKEYEXPIREDEKEYREVOKEDEKEYREJECTEDEOWNERDEADENOTRECOVERABLEERFKILLEHWPOISON";
                goto LABEL_499aeb;
            }
            if (v57 <= 3)
                goto LABEL_499dba;
            v33 = v57;
            v9 = "arguments? recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSEN";
            v10 = 9;
            v58 = 1;
            v59 = "? recursively?UnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYEL";
LABEL_499aeb:
            v26 = v59;
            v27 = v58;
            v36 = &v33;
            v37 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
            v38 = &v9;
            v39 = <&T as core::fmt::Display>::fmt;
            v40 = &v26;
            v41 = <&T as core::fmt::Display>::fmt;
            v14 = &g_57d098;
            v16 = 3;
            v19 = 0;
            v17 = &v36;
            v18 = 3;
            v34.map_or_else(&v14);
            v23 = v34;
            v25 = v35;
            v14 = uucore::util_name();
            v16 = v60;
            v26 = &v14;
            v27 = <&T as core::fmt::Display>::fmt;
            v36 = &g_57d020;
            v37 = 2;
            v40 = 0;
            v38 = &v26;
            v39 = 1;
            std::io::stdio::_eprint(&v36);
            v14 = &v22;
            v16 = <alloc::string::String as core::fmt::Display>::fmt;
            v36 = &g_414b50;
            v37 = 1;
            v40 = 0;
            v38 = &v14;
            v39 = 1;
            std::io::stdio::_eprint(&v36);
            v36 = &g_57d0c8;
            v37 = 1;
            v38 = 8;
            *((uint128_t *)&v39) = 0;
            std::io::stdio::_eprint(&v36);
            v36 = &_ZN3std2io5stdio6stderr8INSTANCE17h1d60656d6130b3e8E;
            v61 = v36.flush();
            if (v61)
            {
                v62 = uu_rm::uumain::uumain::{{closure}}(v61);
                if (v62)
                {
                    v9 = v62;
                    v10 = &g_57d1e0;
                    uucore::mods::error::set_exit_code((unsigned int)v62.code());
                    v26 = uucore::util_name();
                    v27 = v60;
                    v14 = &v26;
                    v16 = <&T as core::fmt::Display>::fmt;
                    v17 = &v9;
                    v18 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v36 = &g_57d0d8;
                    v37 = 3;
                    v40 = 0;
                    v38 = &v14;
                    v39 = 2;
                    std::io::stdio::_eprint(&v36);
                    ::0x498aa0::core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>(v9, &g_57d1e0);
                }
            }
            if ((char)uucore::read_yes())
            {
                ::0x498b50::core::ptr::drop_in_place<alloc::string::String>(&v22);
                goto LABEL_499dba;
            }
            else
            {
                ::0x498b50::core::ptr::drop_in_place<alloc::string::String>(&v22);
                v64 = 0;
            }
        }
        else
        {
LABEL_499dba:
            if (!(char)uu_rm::remove(v12, v13, &v1))
            {
                ::0x498c70::core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v11);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
                return 0;
            }
            v64 = 1.from();
        }
    }
    else
    {
        if (!(!v0))
            goto LABEL_499743;
        v36 = 0;
        v53 = v36.new();
LABEL_499964:
        v64 = v53;
    }
    ::0x498c70::core::ptr::drop_in_place<alloc::vec::Vec<&std::ffi::os_str::OsStr>>(&v11);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v28);
    return v64;
}
