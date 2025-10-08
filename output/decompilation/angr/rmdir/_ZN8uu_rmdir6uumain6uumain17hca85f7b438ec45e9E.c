long long uu_rmdir::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x3e9]
    unsigned long long v1;  // [bp-0x3e8]
    char v2;  // [bp-0x3e0], Other Possible Types: unsigned long
    int v3;  // [bp-0x3df]
    unsigned int v4;  // [bp-0x3dc]
    unsigned long long v5;  // [bp-0x3d8]
    unsigned long long v6;  // [bp-0x3d8]
    char *v7;  // [bp-0x3d0], Other Possible Types: char
    unsigned long long v8;  // [bp-0x3c8]
    void* v9;  // [bp-0x3c0], Other Possible Types: char
    unsigned long long v10;  // [bp-0x3b0]
    unsigned long long v11;  // [bp-0x3a0]
    unsigned long long v12;  // [bp-0x398]
    unsigned long long v13;  // [bp-0x390]
    char v14;  // [bp-0x388]
    char *v15;  // [bp-0x380]
    unsigned long long v16;  // [bp-0x378]
    char *v17;  // [bp-0x370]
    unsigned long long v18;  // [bp-0x368]
    unsigned long long v19;  // [bp-0x360]
    int v20;  // [bp-0x358]
    unsigned long long v21;  // [bp-0x348]
    unsigned long long v22;  // [bp-0x340]
    char v23;  // [bp-0x338]
    char v24;  // [bp-0x328]
    unsigned long long v25;  // [bp-0x318]
    unsigned long long v26;  // [bp-0x310]
    unsigned long long v27;  // [bp-0x308]
    unsigned long long v28;  // [bp-0x300]
    char v29;  // [bp-0x2f8], Other Possible Types: unsigned long long
    unsigned long long v30;  // [bp-0x2f0]
    int v31;  // [bp-0x2e8]
    int v32;  // [bp-0x2d8]
    unsigned long long v33;  // [bp-0x2c8]
    void* v34;  // [bp-0x2c0]
    int v36;  // xmm1
    unsigned int v37;  // eax
    unsigned int v38;  // eax
    unsigned long long v39;  // rax
    uint128_t v40;  // xmm0
    void* v42;  // rdx
    unsigned long long v43[3];  // rax
    unsigned long long v44;  // rbx
    unsigned long long v45;  // r12
    unsigned long long v46;  // rax
    unsigned long long v47;  // rdx

    uu_rmdir::uu_app(&v29);
    (char)v2.try_get_matches_from(&v29, a0, a1);
    if ((char)(((0 ^ *((long long *)&v2)) & (0 ^ -(*((long long *)&v2)))) >> 63))
        return v22.from();
    v25 = v10;
    v36 = *((int128_t *)&v9);
    memcpy(&v24, &v9, 16);
    memcpy(&v23, &v7, 16);
    v21 = *((long long *)&v2);
    v22 = v5;
    v0 = v21.get_flag(_ZN8uu_rmdir25OPT_IGNORE_FAIL_NON_EMPTY17hf4e19f0806591dd6E, g_4de6f0);
    v37 = v21.get_flag(_ZN8uu_rmdir11OPT_PARENTS17h7b499da3e630b2c1E, g_4de700);
    v38 = v21.get_flag(_ZN8uu_rmdir11OPT_VERBOSE17h678d7fcdef697353E, g_4de710);
    v29.try_get_many(&v21, _ZN8uu_rmdir8ARG_DIRS17h6d9706b52a198fb1E, g_4de720);
    (char)v2.unwrap(_ZN8uu_rmdir8ARG_DIRS17h6d9706b52a198fb1E, g_4de720, &v29);
    v39 = *((long long *)&v2);
    if (*((long long *)&v2))
    {
        v36 = *((int128_t *)&v7);
        v40 = *((int128_t *)&v9);
        v6 = v5;
    }
    else
    {
        v40 = 0;
        v39 = core::ops::function::FnOnce::call_once;
        v42 = 0;
        v6 = "/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.38/src/parser/matches/matched_arg.rsinternal error: entered unreachable code: `to_long` always has the flag specified/home/34r7hm4n/.cargo/registry/src/index.crates.io-194";
    }
    v29 = v39;
    v30 = v6;
    v31 = v36;
    *((uint128_t *)&v32) = v40;
    v33 = v10;
    v34 = v42;
    while (true)
    {
        v43 = v29.next();
        if (!v43)
            break;
        uu_rmdir::remove(&v26, v43[1], v43[2], v38 * 0x10000 | v37 * 0x100 | v0);
        if (!v26)
            0.drop_in_place<core::result::Result<(),uu_rmdir::Error>>();
        v44 = v27;
        v45 = v28;
        v1 = v26;
        if (!v0 || !(char)uu_rmdir::dir_not_empty(&v1, v44, v45))
        {
            uucore::mods::error::set_exit_code(1);
            std::io::error::repr_bitpacked::decode_repr(&(char)v2, v1);
            if (!v2 && v4 == 20 && (char)core::slice::<impl [T]>::ends_with(v44, v45))
            {
                v46 = v45 - 1.index(v44, v45);
                if ((char)v46.is_symlink(v47))
                {
                    uu_rmdir::uumain::uumain::points_to_directory(&(char)v2, v46, v47);
                    if (v2)
                    {
                        core::ptr::drop_in_place<core::result::Result<bool,std::io::error::Error>>(v2, v5);
                    }
                    else if (!(char)v3)
                    {
                        goto LABEL_452a50;
                    }
                    v11 = uucore::util_name();
                    v12 = v47;
                    v15 = &v11;
                    v16 = <&T as core::fmt::Display>::fmt;
                    v2 = &g_4ddd80;
                    v5 = 2;
                    v9 = 0;
                    v7 = &v15;
                    v8 = 1;
                    std::io::stdio::_eprint(&(char)v2);
                    v11 = 1;
                    v12 = v44;
                    v13 = v45;
                    v14 = 1;
                    v15 = &v11;
                    v16 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v2 = &g_4dddf8;
                    v5 = 2;
                    v9 = 0;
                    v7 = &v15;
                    v8 = 1;
                    std::io::stdio::_eprint(&(char)v2);
                    goto LABEL_452b65;
                }
            }
LABEL_452a50:
            v11 = uucore::util_name();
            v12 = v47;
            v15 = &v11;
            v16 = <&T as core::fmt::Display>::fmt;
            v2 = &g_4ddd80;
            v5 = 2;
            v9 = 0;
            v7 = &v15;
            v8 = 1;
            std::io::stdio::_eprint(&(char)v2);
            v11 = 1;
            v12 = v44;
            v13 = v45;
            v14 = 1;
            uucore::mods::error::strip_errno(&v19, &v1);
            v15 = &v11;
            v16 = <os_display::Quoted as core::fmt::Display>::fmt;
            v17 = &v19;
            v18 = <alloc::string::String as core::fmt::Display>::fmt;
            v2 = &g_4dde18;
            v5 = 3;
            v9 = 0;
            v7 = &v15;
            v8 = 2;
            std::io::stdio::_eprint(&(char)v2);
            core::ptr::drop_in_place<alloc::string::String>(v19, (long long)v20);
            goto LABEL_452b65;
        }
        else
        {
LABEL_452b65:
            core::ptr::drop_in_place<std::io::error::Error>(v1);
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v21);
    return 0;
}
