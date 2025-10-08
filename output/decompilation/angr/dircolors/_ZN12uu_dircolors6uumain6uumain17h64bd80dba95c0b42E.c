long long uu_dircolors::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [sp-0x491]
    void* v1;  // [bp-0x490], Other Possible Types: char, unsigned long long
    void* v2;  // [bp-0x488], Other Possible Types: unsigned long long, unsigned long
    char v3;  // [bp-0x480], Other Possible Types: unsigned long, unsigned long long
    char v4;  // [bp-0x478]
    char v5;  // [bp-0x470]
    char v6;  // [bp-0x460]
    char *v7;  // [bp-0x450]
    unsigned long long v8;  // [bp-0x448]
    char *v9;  // [bp-0x440]
    unsigned long long v10;  // [bp-0x438]
    unsigned long long v11;  // [bp-0x430]
    char v12;  // [bp-0x428], Other Possible Types: unsigned long long
    struct_0 *v13;  // [bp-0x420]
    unsigned long v14;  // [bp-0x418]
    unsigned long long v15;  // [bp-0x410]
    unsigned long long v16;  // [bp-0x408]
    unsigned long long v17;  // [bp-0x400]
    unsigned long long v18;  // [bp-0x3f8]
    char v19;  // [bp-0x3f0]
    char v20;  // [bp-0x3e0]
    unsigned long long v21;  // [bp-0x3d0]
    char v22;  // [bp-0x3c8], Other Possible Types: unsigned int
    unsigned int v23;  // [bp-0x3c4]
    unsigned long long v24;  // [bp-0x3c0]
    int v25;  // [bp-0x3b8], Other Possible Types: void*, char, unsigned long long
    int v26;  // [bp-0x3b8]
    int v27;  // [bp-0x3b8]
    int v28;  // [bp-0x3b8]
    void* v29;  // [bp-0x3b0], Other Possible Types: unsigned long long
    void* v30;  // [bp-0x3a8], Other Possible Types: char *, unsigned long long
    unsigned int v31;  // [sp-0x3a0], Other Possible Types: unsigned long long
    void* v32;  // [bp-0x398]
    int v33;  // [bp-0xf0], Other Possible Types: char
    unsigned long long v34;  // [bp-0xe0]
    int v35;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v36;  // [bp-0xc8]
    int v37;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v38;  // [bp-0xb0]
    int v39;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v40;  // [bp-0x98]
    char v41;  // [bp-0x90]
    char v42;  // [bp-0x60]
    unsigned long long v44;  // rdi
    void* v45;  // rax
    char v46;  // al
    void* v47;  // rax
    void* v48;  // rbx
    struct_0 *v49;  // r14
    unsigned long v50;  // r12
    unsigned long v51;  // r15
    unsigned long long v53;  // r12
    void* v54;  // r15
    unsigned long long v55;  // r13
    void* v56;  // rax

    uu_dircolors::uu_app(&v25);
    v1.try_get_matches_from(&v25, a0, a1);
    v44 = v2;
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        return v18.from();
    v21 = *((long long *)&v6);
    memcpy(&v20, &v5, 16);
    memcpy(&v19, &v3, 16);
    v17 = v1;
    v18 = v2;
    v25.try_get_many(&v17);
    v1.unwrap(&v25);
    *((unsigned long long *)&v28) = 0;
    v29 = 8;
    v30 = 0;
    v12.map_or(&v1, &(unsigned long long)v28);
    if (((char)v17.get_flag("c-shellbourne-shellprint-databaseprint-ls-colors/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rsstream did not contain valid UTF-8/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-", 7) || (char)v17.get_flag("bourne-shellprint-databaseprint-ls-colors/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rsstream did not contain valid UTF-8/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_", 12)) && ((char)v17.get_flag("print-databaseprint-ls-colors/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rsstream did not contain valid UTF-8/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-l", 14) || (char)v17.get_flag("print-ls-colors/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rsstream did not contain valid UTF-8/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/ptr/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/exact_size.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 15)))
    {
        v1.to_vec("the options to output non shell syntax,\nand to select a shell syntax are mutually exclusiveoptions --print-database and --print-ls-colors are mutually exclusiveextra operand \nfile operands cannot be combined with --print-database (-p)", 91);
        v30 = v3;
        *((int128_t *)&v26) = *((int128_t *)&v1);
        v31 = 1;
        v45 = (unsigned long long)v28.new();
    }
    else if ((char)v17.get_flag("print-databaseprint-ls-colors/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rsstream did not contain valid UTF-8/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-l", 14) && (char)v17.get_flag("print-ls-colors/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rsstream did not contain valid UTF-8/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/ptr/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/exact_size.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 15))
    {
        v1.to_vec("options --print-database and --print-ls-colors are mutually exclusiveextra operand \nfile operands cannot be combined with --print-database (-p)", 69);
        v30 = v3;
        *((int128_t *)&v27) = *((int128_t *)&v1);
        v31 = 1;
        v45 = (unsigned long long)v28.new();
    }
    else if (!(char)v17.get_flag("print-databaseprint-ls-colors/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rsstream did not contain valid UTF-8/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-l", 14))
    {
        v46 = 1;
        if (!(char)v17.get_flag("c-shellbourne-shellprint-databaseprint-ls-colors/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rsstream did not contain valid UTF-8/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-", 7) && !(char)v17.get_flag("bourne-shellprint-databaseprint-ls-colors/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rsstream did not contain valid UTF-8/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_", 12))
        {
            v46 = 2;
            if (!(char)v17.get_flag("print-ls-colors/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rsstream did not contain valid UTF-8/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/ptr/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/exact_size.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 15))
            {
                v0 = 3;
                if ((char)uu_dircolors::guess_syntax() == 3)
                {
                    v1.to_vec("no SHELL environment variable, and no shell type option given-expected file, got directory ", 61);
                    v30 = v3;
                    *((int128_t *)&v28) = *((int128_t *)&v1);
                    v31 = 1;
                    v47 = (unsigned long long)v28.new();
                    core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v12, v13);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
                    return v47;
                }
            }
        }
        v0 = v46;
        if (v14 == 1)
        {
            v49 = v13;
            v50 = v49->field_0->field_8;
            v51 = v49->field_0->field_10;
            if ((char)v50.equal(v51, "-expected file, got directory ", 1))
            {
                v42.with_capacity(std::io::stdio::stdin());
                uu_dircolors::parse(&(unsigned long long)v28, &v42, &v0, v49->field_0->field_8, v49->field_0->field_10);
                v53 = v29;
                v54 = v30;
                v55 = v31;
                if (!((char)v25 & 1))
                    goto LABEL_4604ea;
            }
            else
            {
                if ((char)v50.is_dir(v51))
                {
                    v1 = 1;
                    v2 = v50;
                    v3 = v51;
                    v4 = 1;
                    v7 = &v1;
                    v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                    *((unsigned long long **)&v25) = &g_4f4ff0;
                    v29 = 1;
                    v32 = 0;
                    v30 = &v7;
                    v31 = 1;
                    v37.map_or_else(&(unsigned long long)v25);
                    v31 = 2;
                    v25 = v37;
                    v30 = v38;
                    v47 = (unsigned long long)v25.new();
                    core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v12, v13);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
                    return v47;
                }
                v22.open(v50, v51);
                if (v22 == 1)
                {
                    v11 = v24;
                    v1 = 1;
                    v2 = v50;
                    v3 = v51;
                    v4 = 0;
                    v7 = &v1;
                    v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v9 = &v11;
                    v10 = <std::io::error::Error as core::fmt::Display>::fmt;
                    *((unsigned long long **)&v26) = &g_4f4f48;
                    v29 = 2;
                    v32 = 0;
                    v30 = &v7;
                    v31 = 2;
                    v39.map_or_else(&(unsigned long long)v26);
                    v31 = 1;
                    v26 = v39;
                    v30 = v40;
                    v48 = (unsigned long long)v26.new();
                    core::ptr::drop_in_place<std::io::error::Error>(v11);
                    core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v12, v13);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
                    return v48;
                }
                v41.with_capacity(v23);
                v1.from_utf8_lossy(v50, v51);
                v15 = v1;
                v16 = v2;
                uu_dircolors::parse(&(unsigned long long)v28, &v41, &v0, v2, v3);
                v53 = v29;
                v54 = v30;
                v55 = v31;
                core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v15, v16);
                if (!((char)v25 & 1))
                {
LABEL_4604ea:
                    v1 = v53;
                    v2 = v54;
                    v3 = v55;
                    v7 = &v1;
                    v8 = <alloc::string::String as core::fmt::Display>::fmt;
                    v25 = &g_4f4f68;
                    v29 = 2;
                    v32 = 0;
                    v30 = &v7;
                    v31 = 1;
                    std::io::stdio::_print(&v25);
                    core::ptr::drop_in_place<alloc::string::String>(v1, v2);
                    core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v12, v49);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
                    return 0;
                }
            }
            v31 = 1;
            v25 = v53;
            v29 = v54;
            v30 = v55;
            v56 = v25.new();
            core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v12, v49);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
            return v56;
        }
        if (!v14)
        {
            uu_dircolors::generate_ls_colors(&v1, &v0, ":: invalid line;  missing second tokenterm.jpgexec) = .zst.bmp.yuv.bakZero", 1);
            v7 = &v1;
            v8 = <alloc::string::String as core::fmt::Display>::fmt;
            v25 = &g_4f4f68;
            v29 = 2;
            v32 = 0;
            v30 = &v7;
            v31 = 1;
            std::io::stdio::_print(&v25);
LABEL_4600b3:
            core::ptr::drop_in_place<alloc::string::String>(v1, v2);
            core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v12, v13);
            core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
            return 0;
        }
        v1 = 0;
        v2 = v13->field_8->field_8;
        v3 = v13->field_8->field_10;
        v4 = 1;
        v7 = &v1;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        *((unsigned long long **)&v26) = &g_4f4fe0;
        v29 = 1;
        v32 = 0;
        v30 = &v7;
        v31 = 1;
        v35.map_or_else(&(unsigned long long)v26);
        v31 = 1;
        v26 = v35;
        v30 = v36;
        v45 = (unsigned long long)v26.new();
    }
    else if (v14)
    {
        v1 = 0;
        v2 = v13->field_0->field_8;
        v3 = v13->field_0->field_10;
        v4 = 1;
        v7 = &v1;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        *((unsigned long long **)&v26) = &g_4f4fc0;
        v29 = 2;
        v32 = 0;
        v30 = &v7;
        v31 = 1;
        v33.map_or_else(&(unsigned long long)v26);
        v31 = 1;
        v26 = v33;
        v30 = v34;
        v45 = (unsigned long long)v26.new();
    }
    else
    {
        uu_dircolors::generate_dircolors_config(&v1);
        v7 = &v1;
        v8 = <alloc::string::String as core::fmt::Display>::fmt;
        v25 = &g_4f4f68;
        v29 = 2;
        v32 = 0;
        v30 = &v7;
        v31 = 1;
        std::io::stdio::_print(&v25);
        goto LABEL_4600b3;
    }
    core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v12, v13);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
    return v45;
}
