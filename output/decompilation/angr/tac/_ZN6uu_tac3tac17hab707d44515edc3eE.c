long long uu_tac::tac(unsigned long long a0, unsigned long a1, char a2, unsigned int a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x1e0]
    unsigned long v1;  // [sp-0x1e0], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x1e0], Other Possible Types: char *
    char v3;  // [bp-0x1d8], Other Possible Types: unsigned long
    char *v4;  // [bp-0x1d0], Other Possible Types: char, unsigned long
    char v5;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x1c0]
    unsigned long long v9;  // [bp-0x1b8]
    char *v10;  // [bp-0x1b0]
    void* v11;  // [bp-0x1a8], Other Possible Types: unsigned long long
    int v12;  // [bp-0x1a8]
    unsigned long long v13;  // [bp-0x1a0]
    void* v14;  // [sp-0x198], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x188]
    unsigned long long v16;  // [sp-0x180]
    unsigned long long v17;  // [bp-0x178]
    unsigned long long v18;  // [bp-0x170]
    unsigned long long v19;  // [bp-0x168]
    char *v20;  // [bp-0x160]
    int v21;  // [bp-0x158]
    unsigned long long v22;  // [bp-0x150]
    char *v23;  // [bp-0x148]
    unsigned long long v24;  // [bp-0x140]
    unsigned long long v25;  // [bp-0x138]
    unsigned long long v26;  // [bp-0x130]
    int v27;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x128]
    int v29;  // [bp-0x128]
    int v30;  // [bp-0x120], Other Possible Types: char, unsigned long long
    unsigned long long v31;  // [bp-0x120]
    int v32;  // [bp-0x120]
    char *v33;  // [bp-0x118]
    char *v34;  // [bp-0x118], Other Possible Types: unsigned long
    char *v35;  // [bp-0x110], Other Possible Types: unsigned long long
    void* v36;  // [sp-0x108]
    int v37;  // [bp-0x78], Other Possible Types: void*
    unsigned long long v38;  // [bp-0x70]
    char v39;  // [bp-0x68]
    unsigned long long v40;  // [bp-0x58]
    unsigned long long v41;  // [bp-0x50]
    int v42;  // [bp-0x48]
    char v43;  // [bp-0x38]
    unsigned long long v45[2];  // rax
    char v46;  // r14b
    unsigned long v47;  // r15
    unsigned long v48;  // rbp
    unsigned long long v49;  // rax
    char *v50;  // rsi
    unsigned long long v51;  // rdi
    char v52;  // bpl
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rdx
    char v55;  // r15b
    unsigned long long v56;  // rax
    unsigned long long v62;  // rbx

    if (a3)
    {
        v0.new(a4, a5);
        if (!v1)
        {
            v35 = v5;
            memcpy(&v30, &v3, 16);
            v27 = 0x8000000000000000;
            return v27.new();
        }
        v25 = a4;
        v26 = a5;
        memcpy(&v39, &v4, 16);
        *((int128_t *)&v37) = *((int128_t *)&v1);
    }
    else
    {
        v25 = a4;
        v26 = a5;
        v37 = 0;
    }
    v40 = a0;
    v41 = a1 * 16 + a0;
    if (v40.next())
    {
        v46 = a2;
        do
        {
            v47 = v45[0];
            v48 = v45[1];
            if ((char)v47.equal(v48, "-InvalidRegexInvalidArgumentFileNotFoundReadErrorWriteErrorcapacity overflow/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rsregex: thread ID allocation space exhausted/root/.cargo/registry/src/index.crates", 1))
            {
                uu_tac::try_mmap_stdin(&v28);
                if ((int)v28 != 1)
                {
                    v28.drop_in_place<core::option::Option<memmap2::Mmap>>();
                    v11 = 0;
                    v13 = 1;
                    v14 = 0;
                    v17 = std::io::stdio::stdin();
                    v49 = v17.read_to_end(&v11);
                    if (v49 == 1)
                    {
                        v0.to_vec("stdin: \n-InvalidRegexInvalidArgumentFileNotFoundReadErrorWriteErrorcapacity overflow/root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/util/flat_map.rsregex: thread ID allocation space exhausted/root/.cargo/registry/src/inde", 5);
                        v34 = v4;
                        *((int128_t *)&v27) = *((int128_t *)&v1);
                        v35 = v54;
                        *((double *)&v15) = v28.new();
                        v16 = &g_714230;
                        uucore::mods::error::set_exit_code(1);
                        v7 = uucore::util_name();
                        v9 = v54;
                        v2 = &v7;
                        v1 = <&T as core::fmt::Display>::fmt;
                        v4 = &v15;
                        v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v28 = &g_7141e0;
                        v31 = 3;
                        v36 = 0;
                        v33 = &v2;
                        v35 = 2;
                        std::io::stdio::_eprint(&v28);
                        ::0x5871b0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v15, &g_714230);
                        ::0x5876d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v11);
                        continue;
                    }
                    else
                    {
                        core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(v49, v54);
                        *((int128_t *)&v21) = *((int128_t *)&v11);
                        v50 = 0;
                        goto LABEL_589fa1;
                    }
                }
            }
            else
            {
                if ((char)v47.is_dir(v48))
                {
                    v0.to_vec(v47, v48);
                    v35 = v4;
                    *((int128_t *)&v30) = *((int128_t *)&v1);
                    v27 = 9223372036854775809;
                    *((double *)&v7) = v27.new();
                    v9 = &g_714230;
                    uucore::mods::error::set_exit_code(1);
                    v11 = uucore::util_name();
                    v13 = v54;
                    v2 = &v11;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v4 = &v7;
                    v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v28 = &g_7141e0;
                    v31 = 3;
                    v36 = 0;
                    v33 = &v2;
                    v35 = 2;
                    std::io::stdio::_eprint(&v28);
                    ::0x5871b0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v7, v9);
                    continue;
                }
                std::fs::metadata(&v28, v47, v48);
                if (v28 == 2)
                {
                    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(2, v31);
                    v0.to_vec(v47, v48);
                    v35 = v4;
                    *((int128_t *)&v32) = *((int128_t *)&v1);
                    v27 = 9223372036854775810;
                    *((double *)&v7) = v27.new();
                    v9 = &g_714230;
                    uucore::mods::error::set_exit_code(1);
                    v11 = uucore::util_name();
                    v13 = v54;
                    v2 = &v11;
                    v1 = <&T as core::fmt::Display>::fmt;
                    v4 = &v7;
                    v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                    v28 = &g_7141e0;
                    v31 = 3;
                    v36 = 0;
                    v33 = &v2;
                    v35 = 2;
                    std::io::stdio::_eprint(&v28);
                    ::0x5871b0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v7, v9);
                    continue;
                }
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(v28, v31);
                uu_tac::try_mmap_path(&v28, v47, v48);
                if ((int)v28 == 1)
                {
                    v51 = v31;
                    v50 = v33;
                    v19 = v51;
                    v20 = v50;
                    v52 = 1;
                    v53 = v37;
                    if (!v37)
                        goto LABEL_589fc7;
                    goto LABEL_5899f0;
                }
                else
                {
                    v28.drop_in_place<core::option::Option<memmap2::Mmap>>();
                    std::fs::read(&v7, v47, v48);
                    if (v7 == 0x8000000000000000)
                    {
                        v24 = v9;
                        v2 = 0;
                        v3 = v47;
                        v4 = v48;
                        v5 = 1;
                        *((void* **)&v12) = &v2;
                        v13 = <os_display::Quoted as core::fmt::Display>::fmt;
                        *((unsigned long long **)&v29) = &g_45d680;
                        v30 = 1;
                        v36 = 0;
                        v34 = &(unsigned long long)v12;
                        v35 = 1;
                        v42.map_or_else(&(unsigned long long)v29);
                        v12 = v42;
                        v14 = *((long long *)&v43);
                        v2.clone(&(unsigned long long)v12);
                        v34 = v4;
                        *((int128_t *)&v29) = *((int128_t *)&v2);
                        v35 = v24;
                        *((double *)&v17) = (unsigned long long)v29.new();
                        v18 = &g_714230;
                        uucore::mods::error::set_exit_code(1);
                        v15 = uucore::util_name();
                        v16 = v54;
                        v2 = &v15;
                        v1 = <&T as core::fmt::Display>::fmt;
                        v4 = &v17;
                        v5 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                        v28 = &g_7141e0;
                        v31 = 3;
                        v36 = 0;
                        v33 = &v2;
                        v35 = 2;
                        std::io::stdio::_eprint(&v28);
                        ::0x5871b0::core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v17, &g_714230);
                        ::0x5875e0::core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v12);
                        continue;
                    }
                    else
                    {
                        *((int128_t *)&v21) = *((int128_t *)&v7);
                        v50 = v10;
                    }
LABEL_589fa1:
                    v23 = v50;
                    v51 = v22;
                    v55 = 1;
                    v53 = v37;
                    if (v37)
                    {
LABEL_5899f0:
                        v56 = uu_tac::buffer_tac_regex(v51, v50, v53, v38, v46);
                        goto LABEL_589fdf;
                    }
                    else
                    {
LABEL_589fc7:
                        v56 = uu_tac::buffer_tac(v51, v50, v46, v25, v26);
LABEL_589fdf:
                        if (!v56)
                        {
                            ::0x5884b0::core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(0);
                            if (v55)
                                ::0x5876d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v21);
                            if (v52)
                                core::ptr::drop_in_place<memmap2::Mmap>(&v19);
                        }
                        else
                        {
                            v30 = v56;
                            v27 = 9223372036854775812;
                            v62 = v27.new();
                            if (v55)
                                ::0x5876d0::core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&(char)v21);
                            if (v52)
                                core::ptr::drop_in_place<memmap2::Mmap>(&v19);
                            core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&(char)v37);
                            return v62;
                        }
                    }
                }
            }
            v45 = v40.next();
        } while (v45);
    }
    core::ptr::drop_in_place<core::option::Option<regex::regex::bytes::Regex>>(&(char)v37);
    return 0;
}
