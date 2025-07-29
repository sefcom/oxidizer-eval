long long uu_mktemp::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x498]
    unsigned long v1;  // [bp-0x490]
    unsigned long v2;  // [bp-0x488]
    unsigned long long v3;  // [bp-0x480]
    int v4;  // [bp-0x478]
    unsigned long long v5;  // [bp-0x470]
    int v6;  // [bp-0x468]
    unsigned long long v7;  // [bp-0x460]
    unsigned long long v8;  // [bp-0x458]
    int v9;  // [bp-0x448], Other Possible Types: char
    struct_0 *v10;  // [bp-0x440], Other Possible Types: unsigned long long
    char v11;  // [bp-0x438], Other Possible Types: unsigned long long
    char v12;  // [bp-0x430]
    char v13;  // [bp-0x428]
    char v14;  // [bp-0x420]
    unsigned long long v15;  // [bp-0x418]
    int v16;  // [bp-0x410]
    unsigned long long v17;  // [bp-0x400]
    int v18;  // [bp-0x3f8]
    unsigned long long v19;  // [bp-0x3f0]
    int v20;  // [bp-0x3e8], Other Possible Types: char
    int v21;  // [bp-0x3d8]
    int v22;  // [bp-0x3c8]
    char v23;  // [bp-0x3b8]
    char v24;  // [bp-0x3b0]
    char v25;  // [bp-0x3af]
    char v26;  // [bp-0x3ae]
    unsigned long long v27;  // [bp-0x3a0]
    unsigned long long v28;  // [bp-0x398]
    unsigned long long v29;  // [bp-0x390]
    char v30;  // [bp-0x388]
    char v31;  // [bp-0x378]
    char v32;  // [bp-0x368]
    unsigned long long v33;  // [bp-0x358]
    int v34;  // [bp-0x348]
    int v35;  // [bp-0x338]
    int v36;  // [bp-0x328]
    int v37;  // [bp-0x318]
    int v38;  // [bp-0x300], Other Possible Types: char
    unsigned long long v39;  // [bp-0x2f0]
    int v40;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    unsigned long long v41;  // [bp-0x2e0]
    int v42;  // [bp-0x2d8], Other Possible Types: char, unsigned long long
    unsigned int v43;  // [bp-0x2d0]
    int v44;  // [bp-0x2c8]
    int v45;  // [bp-0x2b8]
    char v46;  // [bp-0x2a8]
    unsigned long long v48;  // rbx
    unsigned long long v49;  // rcx
    char v50;  // bpl
    int v51;  // xmm0
    unsigned long long v52;  // rcx
    int v53;  // xmm0
    int v54;  // xmm1
    int v55;  // xmm2
    int v56;  // xmm0
    int v57;  // xmm1
    int v58;  // xmm2
    unsigned long long v59;  // r8
    unsigned long long v60;  // r14

    v0.collect(a0, a1);
    uu_mktemp::uu_app(&(char)v40);
    v9.try_get_matches_from(&(char)v40, &v0);
    if (!((char)(((0 ^ *((long long *)&v9)) & (0 ^ -(*((long long *)&v9)))) >> 63)))
    {
        v33 = v15;
        memcpy(&v32, &v13, 16);
        memcpy(&v31, &v11, 16);
        memcpy(&v30, &v9, 16);
        (char)v18.from(&v30);
        std::env::var(&(char)v40, "POSIXLY_CORRECTmktemp-error-too-many-templates", 15);
        if ((v40 & 1))
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&(char)v40);
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&(char)v40);
            if ((char)v30.contains_id(_ZN9uu_mktemp12ARG_TEMPLATE17h6c6ffde7eb3ac895E, g_58cb98))
            {
                if (!v2)
                    core::option::unwrap_failed(&g_58c658); /* do not return */
                v49 = v2 * 3;
                if (v1 + v49 * 8 == 24)
                    core::option::unwrap_failed(&g_58c658); /* do not return */
                if (!(char)*((long long *)(v1 + v49 * 8 - 16)).eq(*((long long *)(v1 + v49 * 8 - 8)), v19, *((long long *)&v20)))
                {
                    v40 = 9223372036854775814;
                    v48 = v40.new();
                    core::ptr::drop_in_place<uu_mktemp::Options>(&(char)v18);
LABEL_4a1d19:
                    goto LABEL_4a1e39;
                }
            }
        }
        v50 = v26;
        memcpy(&v46, &v23, 16);
        v51 = (int128_t)v18;
        v45 = v22;
        v44 = v21;
        v42 = v20;
        v40 = v51;
        v9.from(&(char)v40);
        v52 = *((long long *)&v9);
        if (v52 == 0x8000000000000000)
        {
            v53 = *((int128_t *)&v10);
            v54 = *((int128_t *)&v12);
            v55 = *((int128_t *)&v14);
            v36 = v55;
            v35 = v54;
            v34 = v53;
            v44 = v55;
            v42 = v35;
            v40 = v34;
            v48 = (char)v40.new();
            goto LABEL_4a1d19;
        }
        v56 = *((int128_t *)&v10);
        v57 = *((int128_t *)&v12);
        v58 = *((int128_t *)&v14);
        v37 = v16;
        v36 = v58;
        v35 = v57;
        v34 = v56;
        v4 = v34;
        v59 = (long long)v36;
        v8 = (long long)v36;
        v6 = v35;
        v11 = (long long)(&v37)[8];
        *((int128_t *)&v9) = (int128_t)(&v36)[8];
        v3 = v52;
        if (v25)
            uu_mktemp::dry_exec(&(char)v40, (long long)v4, v5, v7, v59, v17, v10, v11);
        else
            uu_mktemp::exec(&(char)v40, (long long)v4, v5, v7, v59, v17, v10, v11, v24);
        v48 = v41;
        v60 = v42;
        if (v50)
        {
            if (v40 == 0x8000000000000000)
            {
                v48 = uu_mktemp::uumain::uumain::{{closure}}(v48, v60);
LABEL_4a1e1b:
                ::0x4a0b60::core::ptr::drop_in_place<alloc::string::String>(&v9);
                ::0x4a0b60::core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
                ::0x4a0b00::core::ptr::drop_in_place<std::path::PathBuf>(&v3);
LABEL_4a1e39:
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v30);
            }
            else
            {
LABEL_4a1e48:
                v27 = v40;
                v28 = v48;
                v29 = v60;
                v48 = uucore::mods::display::println_verbatim(&v27).map_err_context();
                ::0x4a0b60::core::ptr::drop_in_place<alloc::string::String>(&v9);
                ::0x4a0b60::core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
                ::0x4a0b00::core::ptr::drop_in_place<std::path::PathBuf>(&v3);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v30);
            }
        }
        else
        {
            if (!(v40 == 0x8000000000000000))
                goto LABEL_4a1e48;
            goto LABEL_4a1e1b;
        }
    }
    else if (v10->field_f9 == 5)
    {
        (char)v40.iter(&v10->padding_0[32]);
        memcpy(&v20, &v42, 16);
        *((int128_t *)&v18) = *((int128_t *)&v40);
        if (!(char)v18.try_fold().eq())
            goto LABEL_4a1bb1;
        uucore::mods::locale::get_message(&v38, "mktemp-error-too-many-templates", 31);
        v43 = 1;
        v40 = v38;
        v42 = v39;
        v48 = (char)v40.new();
        core::ptr::drop_in_place<clap_builder::error::Error>(v10);
    }
    else
    {
LABEL_4a1bb1:
        v48 = v10.from();
    }
    ::0x4a0e20::core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v0);
    return v48;
}
