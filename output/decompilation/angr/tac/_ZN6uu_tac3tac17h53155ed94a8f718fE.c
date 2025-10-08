long long uu_tac::tac(unsigned long long a0[2], unsigned long a1, unsigned int a2, unsigned int a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [sp-0x1b8]
    unsigned long v1;  // [bp-0x1b8], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x1b8], Other Possible Types: char *
    char v3;  // [bp-0x1b0], Other Possible Types: unsigned long
    char *v4;  // [bp-0x1a8], Other Possible Types: char, unsigned long
    char v5;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x198]
    int v7;  // [bp-0x198]
    unsigned long long v8;  // [bp-0x190]
    char *v9;  // [bp-0x188]
    void* v10;  // [bp-0x180]
    unsigned long long v11;  // [sp-0x178]
    char *v12;  // [bp-0x170]
    unsigned int v13;  // [bp-0x164]
    void* v14;  // [bp-0x160]
    unsigned long long v15;  // [bp-0x158]
    unsigned long long v16;  // [bp-0x150]
    unsigned long long v17;  // [bp-0x148]
    void* v18;  // [bp-0x140]
    unsigned long long v19;  // [bp-0x138]
    char *v20;  // [bp-0x130]
    unsigned long long v21;  // [bp-0x128]
    char *v22;  // [bp-0x120]
    unsigned long long v23;  // [bp-0x118]
    unsigned long long v24;  // [bp-0x110]
    unsigned long long v25;  // [bp-0x108]
    int v26;  // [bp-0x108]
    char v27;  // [bp-0x100], Other Possible Types: unsigned long long
    int v28;  // [bp-0x100]
    int v29;  // [bp-0x100]
    char *v30;  // [bp-0xf8], Other Possible Types: unsigned long
    char *v31;  // [bp-0xf0], Other Possible Types: unsigned long long
    void* v32;  // [sp-0xe8]
    void* v33;  // [bp-0x58]
    int v34;  // [bp-0x58]
    unsigned long long v35;  // [bp-0x50]
    char v36;  // [bp-0x48]
    unsigned long long v38[2];  // r12
    unsigned long long v39;  // r15
    unsigned long long v40[2];  // rax
    unsigned long v41;  // r14
    unsigned long v42;  // rbp
    unsigned long long v43;  // rax
    unsigned long long v44;  // rbx
    char *v45;  // rsi
    char v46;  // r14b
    void* v47;  // rdx
    unsigned long v48;  // rdx, Other Possible Types: unsigned long long
    char v49;  // bpl
    unsigned long long v50;  // rax
    unsigned long long v56;  // rax

    v13 = a2;
    v38 = a0;
    if (a3)
    {
        v0.new(a4, a5);
        if (!v1)
        {
            v31 = v5;
            memcpy(&v27, &v3, 16);
            v25 = 0x8000000000000000;
            return v25.new();
        }
        v23 = a4;
        v24 = a5;
        memcpy(&v36, &v4, 16);
        *((int128_t *)&v34) = *((int128_t *)&v1);
        if (a1)
            goto LABEL_512a37;
    }
    else
    {
        v23 = a4;
        v24 = a5;
        v33 = 0;
        if (a1)
        {
LABEL_512a37:
            v39 = &a0[a1];
            v40 = a0 + 1;
            while (true)
            {
                v41 = v38[0];
                v42 = v38[1];
                v38 = v40;
                if ((char)v41.equal(v42))
                {
                    uu_tac::try_mmap_stdin(&v25);
                    if ((int)v25 == 1)
                        goto LABEL_513003;
                    v25.drop_in_place<core::option::Option<memmap2::Mmap>>();
                    v10 = 0;
                    v11 = 1;
                    v12 = 0;
                    v16 = std::io::stdio::stdin();
                    v43 = v16.read_to_end(&v10);
                    if (((char)v43 & 1))
                    {
                        v0.to_vec("stdin: \nInvalidRegexInvalidArgumentFileNotFoundReadErrorWriteErrorinvalid regular expression: : read error: Invalid argumentfailed to open  for reading: No such file or directoryfailed to read from failed to write to stdout: capacity overflow", 5);
                        v30 = v4;
                        *((int128_t *)&v26) = *((int128_t *)&v1);
                        v31 = v48;
                        *((double *)&v18) = v25.new();
                        v19 = &g_633b90;
                        uucore::mods::error::set_exit_code(1);
                        v6 = uucore::util_name();
                        v8 = v48;
                        v2 = &v6;
                        v1 = <&T as core::fmt::Display>::fmt;
                        v4 = &v18;
                        v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v25 = &g_633b40;
                        v27 = 3;
                        v32 = 0;
                        v30 = &v2;
                        v31 = 2;
                        std::io::stdio::_eprint(&v25);
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v18, v19);
                        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v10, v11);
                        v40 = v38 + 1;
                        if (v38 == v39)
                            break;
                        continue;
                    }
                    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v43, v48);
                    v14 = v10;
                    v44 = v11;
                    v45 = v12;
                    v46 = 1;
                    v15 = v44;
                    v47 = v33;
                    if (!v33)
                        goto LABEL_5130aa;
                    goto LABEL_51306e;
                }
                if ((char)v41.is_dir(v42))
                {
                    v0.to_vec(v41, v42);
                    v31 = v4;
                    *((int128_t *)&v28) = *((int128_t *)&v1);
                    v25 = 9223372036854775809;
                    *((double *)&v6) = v25.new();
                    v8 = &g_633b90;
                    uucore::mods::error::set_exit_code(1);
                    v10 = uucore::util_name();
                    v11 = v48;
                    v2 = &v10;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v4 = &v6;
                    v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v25 = &g_633b40;
                    v27 = 3;
                    v32 = 0;
                    v30 = &v2;
                    v31 = 2;
                    std::io::stdio::_eprint(&v25);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v6, &g_633b90);
                    goto LABEL_512ff0;
                }
                std::fs::metadata(&v25, v41, v42);
                if (v25 == 2)
                {
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v27);
                    v0.to_vec(v41, v42);
                    v31 = v4;
                    *((int128_t *)&v29) = *((int128_t *)&v1);
                    v25 = 9223372036854775810;
                    *((double *)&v6) = v25.new();
                    v8 = &g_633b90;
                    uucore::mods::error::set_exit_code(1);
                    v10 = uucore::util_name();
                    v11 = v48;
                    v2 = &v10;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v4 = &v6;
                    v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v25 = &g_633b40;
                    v27 = 3;
                    v32 = 0;
                    v30 = &v2;
                    v31 = 2;
                    std::io::stdio::_eprint(&v25);
                    core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v6, &g_633b90);
                    goto LABEL_512ff0;
                }
                else
                {
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v25, v27);
                    uu_tac::try_mmap_path(&v25, v41, v42);
                    if ((int)v25 == 1)
                    {
LABEL_513003:
                        v44 = v27;
                        v45 = v30;
                        v21 = v44;
                        v22 = v45;
                        v49 = 1;
                        v47 = v33;
                        if (!v33)
                            goto LABEL_5130aa;
                        goto LABEL_51306e;
                    }
                    v25.drop_in_place<core::option::Option<memmap2::Mmap>>();
                    std::fs::read(&v18, v41, v42);
                    v44 = v19;
                    if (v18 == 0x8000000000000000)
                    {
                        v2 = 0;
                        v3 = v41;
                        v4 = v42;
                        v5 = 1;
                        *((void* **)&v7) = &v2;
                        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                        *((unsigned long long **)&v26) = &g_451860;
                        v27 = 1;
                        v32 = 0;
                        v30 = &(unsigned long long)v7;
                        v31 = 1;
                        v10.map_or_else(&(unsigned long long)v26);
                        *((int128_t *)&v7) = *((int128_t *)&v10);
                        v9 = v12;
                        v2.clone(&(unsigned long long)v7);
                        v30 = v4;
                        *((int128_t *)&v26) = *((int128_t *)&v2);
                        v31 = v44;
                        *((double *)&v16) = (unsigned long long)v26.new();
                        v17 = &g_633b90;
                        uucore::mods::error::set_exit_code(1);
                        v10 = uucore::util_name();
                        v11 = v48;
                        v2 = &v10;
                        v1 = <&T as core::fmt::Display>::fmt;
                        v4 = &v16;
                        v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v25 = &g_633b40;
                        v27 = 3;
                        v32 = 0;
                        v30 = &v2;
                        v31 = 2;
                        std::io::stdio::_eprint(&v25);
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v16, &g_633b90);
                        core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v7);
LABEL_512ff0:
                        v40 = v38 + 1;
                        if (v38 == v39)
                            break;
                    }
                    else
                    {
                        v45 = v20;
                        v46 = 1;
                        v15 = v44;
                        v14 = v18;
                        v47 = v33;
                        if (v33)
                        {
LABEL_51306e:
                            v50 = uu_tac::buffer_tac_regex(v44, v45, v47, v35, v13);
                            goto LABEL_5130c7;
                        }
                        else
                        {
LABEL_5130aa:
                            v50 = uu_tac::buffer_tac(v44, v45, v13, v23, v24);
LABEL_5130c7:
                            if (v50)
                            {
                                v27 = v50;
                                v25 = 9223372036854775812;
                                v56 = v25.new();
                                if (v46)
                                    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14, v15);
                                if (v49)
                                    core::ptr::drop_in_place<memmap2::Mmap>(&v21);
                                core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&(char)v33);
                                return v56;
                            }
                            core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
                            if (v46)
                                core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v14, v15);
                            if (v49)
                                core::ptr::drop_in_place<memmap2::Mmap>(&v21);
                            v40 = &v38[v38 != v39];
                            if (v38 == v39)
                                break;
                        }
                    }
                }
            }
        }
    }
    core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&(char)v33);
    return 0;
}
