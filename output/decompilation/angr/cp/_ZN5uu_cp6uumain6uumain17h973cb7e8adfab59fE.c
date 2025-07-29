long long uu_cp::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x468]
    int v1;  // [sp-0x458]
    char v2;  // [bp-0x448]
    unsigned long long v3;  // [bp-0x440]
    unsigned long long v4;  // [bp-0x438]
    char v5;  // [bp-0x428], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x420]
    void* v7;  // [bp-0x418], Other Possible Types: char *
    unsigned long long v8;  // [bp-0x410]
    void* v9;  // [bp-0x408]
    char *v10;  // [bp-0x3f8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0x3f0]
    int v12;  // [bp-0x3e8]
    unsigned long long v13;  // [bp-0x3e0]
    unsigned long long v14;  // [bp-0x3d8]
    int v15;  // [bp-0x3c8]
    unsigned long long v16;  // [bp-0x3c0]
    unsigned long long v17;  // [bp-0x3b8]
    char v18;  // [bp-0x3b0], Other Possible Types: unsigned long long
    int v19;  // [bp-0x3a8], Other Possible Types: char
    char v20;  // [bp-0x3a0]
    int v21;  // [bp-0x398]
    char v22;  // [bp-0x390]
    int v23;  // [bp-0x388]
    unsigned long long v24;  // [bp-0x380]
    unsigned long long v25;  // [bp-0x378]
    int v26;  // [bp-0x370]
    int v27;  // [bp-0x360]
    unsigned long long v28;  // [bp-0x350]
    char *v29;  // [bp-0x348]
    unsigned long long v30;  // [bp-0x340]
    unsigned long long v31;  // [bp-0x338]
    unsigned long long v32;  // [bp-0x330]
    char v33;  // [bp-0x328]
    char v34;  // [bp-0x318]
    unsigned long long v35;  // [bp-0x308]
    int v36;  // [bp-0x300], Other Possible Types: char
    unsigned long long v37;  // [bp-0x2f0]
    int v38;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    unsigned long long v39;  // [bp-0x2e8]
    int v40;  // [bp-0x2e0]
    int v41;  // [bp-0x2d8], Other Possible Types: unsigned long long
    int v42;  // [bp-0x2d0], Other Possible Types: char, unsigned int
    int v43;  // [sp-0x2c8]
    int v44;  // [bp-0x2c0], Other Possible Types: char
    int v45;  // [bp-0x2b8], Other Possible Types: unsigned long long
    unsigned long long v46;  // [bp-0x2b0]
    int v47;  // [bp-0x2a8]
    int v48;  // [bp-0x298]
    char v49;  // [bp-0x288]
    int v51;  // xmm1
    unsigned long long v52;  // rbx
    int v53;  // xmm1
    int v54;  // xmm2
    int v55;  // xmm1
    int v56;  // xmm2
    unsigned long long v57;  // rax
    unsigned long long v58;  // rdi
    unsigned long long v59;  // rdx
    int v60;  // xmm1
    int v61;  // xmm2
    unsigned long long v62;  // rdx
    int v63;  // xmm1

    uu_cp::uu_app(&v38);
    v18.try_get_matches_from(&v38, a0, a1);
    if ((char)(((0 ^ v18) & (0 ^ -(v18))) >> 63))
        return *((long long *)&v19).from();
    v35 = v24;
    memcpy(&v34, &v22, 16);
    memcpy(&v33, &v20, 16);
    v31 = v18;
    v32 = *((long long *)&v19);
    v38.from_matches(&v31);
    memcpy(&(char)v0, &(char)v38, 16);
    *((int128_t *)&v1) = *((int128_t *)&v42);
    memcpy(&v2, &v44, 16);
    v4 = v46;
    if (v39 == 0x8000000000000000)
    {
        v45 = v4;
        v51 = (int128_t)v1;
        *((int128_t *)&v43) = *((int128_t *)&v2);
        v41 = v51;
        v38 = v0;
        v52 = v38.new();
    }
    else
    {
        v28 = *((long long *)&v49);
        v27 = v48;
        v26 = v47;
        v53 = (int128_t)v1;
        v54 = *((int128_t *)&v2);
        v19 = v0;
        v21 = v53;
        v23 = v54;
        v25 = v4;
        v18 = v39;
        if ((int)(&v27)[4].eq() && *((char *)&v28 + 5))
        {
            uucore::mods::locale::get_message(&v36, "cp-error-backup-mutually-exclusiveUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTENOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPEERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGEL3HLTEL3RSTELNRNGEUNATCHENOCSIEL2HLTEBADEEBADREXFULLENOANOEBADRQCEBADSLTEBFONTENOSTRENODATAETIMEENOSRENONETENOPKGEREMOTEENOLINKESRMNTECOMMEPROTOEMULTIHOPEDOTDOTEBADMSGEOVERFLOWEBADFDEREMCHGELIBACCELIBBADELIBSCNELIBMAXEILSEQEUSERSEDESTADDRREQEPROTOTYPEENOPROTOOPTEPROTONOSUPPORTESOCKTNOSUPPORTEOPNOTSUPPEPFNOSUPPORTEAFNOSUPPORTEADDRINUSEEADDRNOTAVAILENETUNREACHENETRESETECONNABORTEDECONNRESETENOBUFSEISCONNESHUTDOWNETOOMANYREFSETIMEDOUTECONNREFUSEDEHOSTDOWNEHOSTUNREACHEINPROGRESSESTALEEUCLEANENOTNAMENAVAILEISNAMEREMOTEIOEDQUOTENOMEDIUMEMEDIUMTYPEECANCELEDENOKEYEKEYEXPIREDEKEYREVOKEDEKEYREJECTEDEOWNERDEADENOTRECOVERABLEERFKILLEHWPOISON", 34);
            v42 = 1;
            v38 = v36;
            v41 = v37;
            v52 = v38.new();
        }
        else
        {
            v38.try_get_many(&v31, "paths/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 5);
            (char)v0.unwrap("paths/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 5, &v38);
            if ((long long)v0)
            {
                v55 = (int128_t)v1;
                v56 = *((int128_t *)&v2);
                *((int128_t *)&v45) = *((int128_t *)&v4);
                v43 = v56;
                v41 = v55;
                v38 = v0;
                v5.from_iter(&v38, &g_5fb050);
                v57 = v5;
            }
            else
            {
                v57 = 0x8000000000000000;
            }
            if (v57 == 0x8000000000000000)
                v7 = 0;
            if (v57 != 0x8000000000000000)
            {
                v58 = v6;
                if (!(v57 == 0x8000000000000000))
                    goto LABEL_4d1014;
LABEL_4d1013:
                v57 = 0;
            }
            else
            {
                v58 = 8;
                if (v57 == 0x8000000000000000)
                    goto LABEL_4d1013;
LABEL_4d1014:
            }
            v5 = v57;
            v6 = v58;
            uu_cp::parse_path_args(&v38, &v5, &v18);
            memcpy(&(char)v0, &(char)v38, 16);
            *((int128_t *)&v1) = (int128_t)(&v41)[8];
            memcpy(&v2, &v44, 16);
            if (v39 == 9223372036854775820)
            {
                v59 = (long long)v1;
                v14 = (long long)v1;
                v12 = v0;
                v17 = v3;
                *((int128_t *)&v15) = (int128_t)(&v1)[8];
                uu_cp::copy(&(char)v0, v13, v59, v16, v3, &v18);
                if ((long long)v0 == 9223372036854775820)
                {
                    (char)v0.drop_in_place<core::result::Result<(),uu_cp::CpError>>();
                }
                else
                {
                    v60 = (int128_t)v1;
                    v61 = *((int128_t *)&v2);
                    v38 = v0;
                    v45 = v4;
                    v43 = v61;
                    v41 = v60;
                    if (v39 != 9223372036854775812)
                    {
                        v10 = uucore::util_name();
                        v11 = v62;
                        v29 = &v10;
                        v30 = <&T as core::fmt::Display>::fmt;
                        v5 = &g_5fafd8;
                        v6 = 2;
                        v9 = 0;
                        v7 = &v29;
                        v8 = 1;
                        std::io::stdio::_eprint(&v5);
                        v10 = &v38;
                        v11 = <uu_cp::CpError as core::fmt::Display>::fmt;
                        v5 = &g_5faff8;
                        v6 = 2;
                        v9 = 0;
                        v7 = &v10;
                        v8 = 1;
                        std::io::stdio::_eprint(&v5);
                    }
                    uucore::mods::error::set_exit_code(1);
                    core::ptr::drop_in_place<uu_cp::CpError>(&v38);
                }
                ::0x4d03c0::core::ptr::drop_in_place<std::path::PathBuf>(&(char)v15);
                ::0x4d0510::core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(&(char)v12);
                core::ptr::drop_in_place<uu_cp::Options>(&v18);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v31);
                return 0;
            }
            v63 = (int128_t)v1;
            *((int128_t *)&v44) = *((int128_t *)&v2);
            v42 = v63;
            v40 = v0;
            v38 = v39;
            v52 = v38.new();
        }
        core::ptr::drop_in_place<uu_cp::Options>(&v18);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v31);
    return v52;
}
