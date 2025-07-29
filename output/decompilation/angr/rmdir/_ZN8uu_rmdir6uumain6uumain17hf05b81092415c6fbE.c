long long uu_rmdir::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x461]
    unsigned long long v1;  // [bp-0x460]
    char *v2;  // [bp-0x458], Other Possible Types: unsigned long long
    int v3;  // [bp-0x458]
    unsigned long long v4;  // [bp-0x450]
    unsigned long long v5;  // [bp-0x448]
    unsigned long long v6;  // [bp-0x440]
    int v7;  // [bp-0x438]
    unsigned long long v8;  // [bp-0x430]
    char *v9;  // [bp-0x428], Other Possible Types: unsigned long long
    int v10;  // [bp-0x428]
    unsigned long long v11;  // [bp-0x420]
    unsigned long long v12;  // [bp-0x418]
    char v13;  // [bp-0x410]
    int v14;  // [bp-0x410]
    unsigned long long v15;  // [bp-0x400]
    int v16;  // [bp-0x3f8], Other Possible Types: char
    unsigned long long v17;  // [bp-0x3e8]
    unsigned long long v18;  // [bp-0x3d8]
    int v19;  // [bp-0x3d8]
    unsigned long long v20;  // [sp-0x3d0]
    unsigned long long v21;  // [sp-0x3c8]
    char v22;  // [bp-0x3c0]
    char v23;  // [bp-0x3b8], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0x3b0]
    int v25;  // [bp-0x3a8]
    uint128_t v26;  // [bp-0x398]
    unsigned long long v27;  // [bp-0x388]
    unsigned long long v28;  // [bp-0x380]
    int v29;  // [bp-0x378]
    unsigned long long v30;  // [bp-0x368]
    unsigned long long v31;  // [bp-0x360]
    unsigned long long v32;  // [bp-0x358]
    int v33;  // [bp-0x350]
    int v34;  // [bp-0x340]
    unsigned long long v35;  // [bp-0x330]
    unsigned long long v36;  // [bp-0x328]
    unsigned long long v37;  // [bp-0x320]
    unsigned long long v38;  // [bp-0x318]
    int v39;  // [bp-0x310]
    unsigned long long v40;  // [bp-0x300]
    int v41;  // [bp-0x2f8], Other Possible Types: char, unsigned long
    int v42;  // [bp-0x2f7]
    unsigned int v43;  // [bp-0x2f4]
    unsigned long long v44;  // [bp-0x2f0]
    char *v45;  // [sp-0x2e8], Other Possible Types: unsigned long long
    int v46;  // [bp-0x2e8]
    unsigned long long v47;  // [sp-0x2e0]
    int v48;  // [bp-0x2e0]
    void* v49;  // [sp-0x2d8]
    int v50;  // [bp-0x2d8]
    unsigned long long v51;  // [bp-0x2d0]
    char v52;  // [bp-0x2c8]
    unsigned long long v53;  // [bp-0x2b8]
    unsigned long long v54;  // [bp-0x2b0]
    char v55;  // [bp-0x2a8]
    unsigned int v57;  // eax
    unsigned int v58;  // eax
    void* v59;  // rdx
    unsigned long long v60;  // rax
    unsigned long long v61;  // rax
    unsigned long long v62;  // rdx
    unsigned long long v63;  // r15
    unsigned long long v64;  // rbx
    unsigned long long v65;  // rax
    int v66;  // xmm1
    int v67;  // xmm1
    int v68;  // xmm2

    uu_rmdir::uu_app(&(char)v41);
    v23.try_get_matches_from(&(char)v41, a0, a1);
    if ((char)(((0 ^ v23) & (0 ^ -(v23))) >> 63))
        return v32.from();
    v35 = v27;
    *((uint128_t *)&v34) = v26;
    v33 = v25;
    v31 = v23;
    v32 = v24;
    v0 = v31.get_flag(_ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17h892f56635feff22dE, g_572bc0);
    v57 = v31.get_flag(_ZN8uu_rmdir11OPT_PARENTS17he50aa2d1f2e1e5ceE, g_572bd0);
    v58 = v31.get_flag(_ZN8uu_rmdir11OPT_VERBOSE17h3bfee0c53ce935c4E, g_572be0);
    (char)v41.try_get_many(&v31, _ZN8uu_rmdir8ARG_DIRS17h2571edd3138663d8E, g_572bf0);
    v23.unwrap(_ZN8uu_rmdir8ARG_DIRS17h2571edd3138663d8E, g_572bf0, &(char)v41);
    if (v23)
    {
        v25 = v25;
    }
    else
    {
        v26 = 0;
        v24 = "/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/matches/matched_arg.rs/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rs/root/.rustup/toolchains/nightly-2025-01-01-x";
        v23 = core::ops::function::FnOnce::call_once;
        v59 = 0;
        v25 = v34;
    }
    v28 = v59;
    while (true)
    {
        v60 = v23.next();
        if (!v60)
            break;
        v61 = v29.call_once(v60);
        if (!v61)
            break;
        uu_rmdir::remove(&v36, v61, v62, v58 * 0x10000 | v57 * 0x100 | v0);
        if (!v36)
            0.drop_in_place<core::result::Result<(),uu_rmdir::Error>>();
        v63 = v37;
        v64 = v38;
        v1 = v36;
        if (!v0 || !(char)uu_rmdir::dir_not_empty(&v1, v63, v64))
        {
            uucore::mods::error::set_exit_code(1);
            ::0x497520::std::io::error::repr_bitpacked::decode_repr(&(char)v41, v1);
            if (!v41 && v43 == 20 && (char)core::slice::<impl [T]>::ends_with(v63, v64, "/rmdir-error-failed-to-removermdir-error-symbolic-link-not-followed", 1))
            {
                v65 = v64 - 1.index(v63, v64);
                if ((char)v65.is_symlink(v62))
                {
                    uu_rmdir::uumain::uumain::points_to_directory(&(char)v41, v65, v62);
                    if (v41)
                    {
                        core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(v41, v44);
                    }
                    else if (!(char)v42)
                    {
                        goto LABEL_498510;
                    }
                    *((long long *)&v3) = uucore::util_name();
                    v4 = v62;
                    v9 = &(unsigned long long)v3;
                    v11 = <&T as core::fmt::Display>::fmt;
                    v41 = &g_5727b0;
                    v44 = 2;
                    v49 = 0;
                    v45 = &v9;
                    v47 = 1;
                    std::io::stdio::_eprint(&(char)v41);
                    (unsigned long long)v3.to_vec("pathzeroAnsi -- ", 4);
                    v21 = v5;
                    *((int128_t *)&v19) = *((int128_t *)&v2);
                    v9 = 1;
                    v11 = v63;
                    v12 = v64;
                    v13 = 1;
                    (unsigned long long)v3.spec_to_string(&v9);
                    v45 = v21;
                    memcpy(&(char)v41, &(unsigned long long)v19, 16);
                    v51 = v5;
                    *((int128_t *)&v48) = *((int128_t *)&v2);
                    v66 = (int128_t)(&v48)[8];
                    *((int128_t *)&v3) = *((int128_t *)&v41);
                    v5 = v45;
                    v6 = v47;
                    v7 = v66;
                    (char)v41.from_iter(&(unsigned long long)v3);
                    uucore::mods::locale::get_message_with_args(&(unsigned long long)v3, "rmdir-error-symbolic-link-not-followed", 38, &(char)v41);
                    v18 = &(unsigned long long)v3;
                    v20 = <alloc::string::String as core::fmt::Display>::fmt;
                    v41 = &g_5727d0;
                    v44 = 2;
                    v49 = 0;
                    v45 = &v18;
                    v47 = 1;
                    std::io::stdio::_eprint(&(char)v41);
                    ::0x497750::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v3);
                    goto LABEL_4984f9;
                }
            }
LABEL_498510:
            *((long long *)&v3) = uucore::util_name();
            v4 = v62;
            v9 = &(unsigned long long)v3;
            v11 = <&T as core::fmt::Display>::fmt;
            v41 = &g_5727b0;
            v44 = 2;
            v49 = 0;
            v45 = &v9;
            v47 = 1;
            std::io::stdio::_eprint(&(char)v41);
            (unsigned long long)v3.to_vec("pathzeroAnsi -- ", 4);
            v17 = v5;
            memcpy(&v16, &v2, 16);
            v18 = 1;
            v20 = v63;
            v21 = v64;
            v22 = 1;
            (unsigned long long)v3.spec_to_string(&v18);
            v12 = v17;
            v10 = v16;
            v15 = v5;
            *((int128_t *)&v14) = *((int128_t *)&v2);
            v16.to_vec("err/rmdir-error-failed-to-removermdir-error-symbolic-link-not-followed", 3);
            v30 = v17;
            memcpy(&v29, &v16, 16);
            uucore::mods::error::strip_errno(&v16, &v1);
            v39.clone(&v16);
            v5 = v30;
            v3 = v29;
            v8 = v40;
            memcpy(&v6, &v39, 16);
            v67 = *((int128_t *)&v12);
            v68 = (int128_t)(&v14)[8];
            *((int128_t *)&v41) = (int128_t)v10;
            v46 = v67;
            v50 = v68;
            memcpy(&v55, &v7, 16);
            v53 = v5;
            v54 = v6;
            memcpy(&v52, &v2, 16);
            (unsigned long long)v3.from_iter(&(char)v41);
            uucore::mods::locale::get_message_with_args(&v9, "rmdir-error-failed-to-removermdir-error-symbolic-link-not-followed", 28, &(unsigned long long)v3);
            v2 = &v9;
            v4 = <alloc::string::String as core::fmt::Display>::fmt;
            v41 = &g_5727d0;
            v44 = 2;
            v49 = 0;
            v45 = &v2;
            v47 = 1;
            std::io::stdio::_eprint(&(char)v41);
            ::0x497750::core::ptr::drop_in_place<alloc::string::String>(&v9);
            ::0x497750::core::ptr::drop_in_place<alloc::string::String>(&v16);
            ::0x497760::core::ptr::drop_in_place<std::io::error::Error>(v1);
        }
        else
        {
LABEL_4984f9:
            ::0x497760::core::ptr::drop_in_place<std::io::error::Error>(v1);
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v31);
    return 0;
}
