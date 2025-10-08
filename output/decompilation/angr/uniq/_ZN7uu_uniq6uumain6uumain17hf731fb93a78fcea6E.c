long long uu_uniq::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x43c]
    char v1;  // [bp-0x43b]
    char v2;  // [bp-0x43a]
    char v3;  // [bp-0x439]
    int v4;  // [bp-0x438], Other Possible Types: char
    unsigned long long v5;  // [bp-0x430]
    unsigned long long v6;  // [bp-0x428]
    char v7;  // [bp-0x420], Other Possible Types: unsigned int
    int v8;  // [bp-0x410]
    unsigned long long v9;  // [bp-0x400]
    unsigned long long v10;  // [bp-0x3f8]
    unsigned long long v11;  // [bp-0x3f0]
    char v12;  // [bp-0x3e8]
    int v13;  // [bp-0x3d8]
    unsigned long long v14;  // [bp-0x3c8]
    unsigned long long v15;  // [bp-0x3c0]
    char v16;  // [bp-0x3b8]
    unsigned long long v17;  // [bp-0x3a8]
    int v18;  // [bp-0x398], Other Possible Types: char
    int v19;  // [bp-0x388], Other Possible Types: char
    int v20;  // [bp-0x378], Other Possible Types: char
    char v21;  // [bp-0x368]
    int v22;  // [bp-0x350], Other Possible Types: char
    unsigned long long v23;  // [bp-0x340]
    char v24;  // [bp-0x338], Other Possible Types: unsigned long long
    int v25;  // [bp-0x330]
    int v26;  // [bp-0x320]
    int v27;  // [bp-0x310]
    unsigned long long v28;  // [bp-0x300]
    char v29;  // [bp-0x2f8], Other Possible Types: unsigned long long
    int v30;  // [bp-0x2f8]
    int v31;  // [bp-0x2f8]
    int v32;  // [bp-0x2f0]
    int v33;  // [bp-0x2e8], Other Possible Types: char
    int v34;  // [bp-0x2e0]
    unsigned long long v35;  // [bp-0x2d8]
    int v36;  // [bp-0x2d0], Other Possible Types: char, unsigned long long
    char v37;  // [bp-0x2c8]
    char v38;  // [bp-0x2c7]
    char v39;  // [bp-0x2c6]
    char v40;  // [bp-0x2c5]
    char v41;  // [bp-0x2c4]
    char v42;  // [bp-0x2c3]
    char v43;  // [bp-0x2c2]
    unsigned long long v44;  // [bp-0x2c0]
    unsigned long long v46;  // rdi
    int v47;  // xmm1
    unsigned long long v48;  // r12
    char v49;  // r14b
    unsigned long long v50;  // r13
    unsigned long long v51;  // r13
    char v52;  // al
    int v53;  // xmm2
    int v54;  // xmm0
    unsigned long long v55;  // r13
    unsigned long long v56;  // r13

    uu_uniq::handle_obsolete(&v29, a0, a1);
    v17 = v35;
    memcpy(&v21, &v29, 16);
    memcpy(&v16, &v33, 16);
    memcpy(&v20, &v36, 16);
    uu_uniq::uu_app(&v29);
    v4.try_get_matches_from(&v29, &v16);
    v46 = v5;
    if ((char)(((0 ^ *((long long *)&v4)) & (0 ^ -(*((long long *)&v4)))) >> 63))
        return uu_uniq::map_clap_errors(v10);
    memcpy(&v12, &v7, 16);
    v13 = v8;
    v9 = *((long long *)&v4);
    v10 = v5;
    v11 = v6;
    v29.try_get_many(&v9, _ZN7uu_uniq9ARG_FILES17ha4e252c7d2c0f63cE, g_4f5730);
    v24.unwrap(_ZN7uu_uniq9ARG_FILES17ha4e252c7d2c0f63cE, g_4f5730, &v29);
    if (v24)
    {
        v44 = v28;
        v36 = v27;
        v34 = v26;
        v32 = v25;
        v29 = v24;
        uu_uniq::uumain::uumain::{{closure}}(&v4, &v29);
        v47 = *((int128_t *)&v6);
        *((int128_t *)&v30) = *((int128_t *)&v4);
        v33 = v47;
    }
    else
    {
        v29.default();
    }
    v48 = (long long)(&v30)[8];
    v15 = (long long)v33;
    v14 = (long long)(&v33)[8];
    uu_uniq::opt_parsed(&v29, _ZN7uu_uniq7options11SKIP_FIELDS17hbfe7c58267454596E, g_4f56e0, &v9);
    if ((int)v29 != 1)
    {
        memcpy(&v19, &v30, 16);
        uu_uniq::opt_parsed(&v29, _ZN7uu_uniq7options10SKIP_CHARS17hc91f46c3f1b101eaE, g_4f56f0, &v9);
        if ((int)v29 == 1)
            goto LABEL_45dc26;
        memcpy(&v18, &v30, 16);
        v0 = 1;
        if (!(char)v9.get_flag(_ZN7uu_uniq7options8REPEATED17hd07a5dab9cab0439E, g_4f56d0))
            v0 = v9.contains_id(_ZN7uu_uniq7options12ALL_REPEATED17h0214dcb1196ec6c8E, g_4f5690);
        v3 = v9.get_flag(_ZN7uu_uniq7options6UNIQUE17h1cd24165939a0252E, g_4f5700);
        if (!(char)v9.contains_id(_ZN7uu_uniq7options12ALL_REPEATED17h0214dcb1196ec6c8E, g_4f5690))
            v9.contains_id(_ZN7uu_uniq7options5GROUP17h82257da62b27380eE, g_4f5720);
        v2 = uu_uniq::get_delimiter(&v9);
        v49 = v9.get_flag(_ZN7uu_uniq7options5COUNT17hc63dc82d31c0a183E, g_4f56b0);
        uu_uniq::opt_parsed(&v4, _ZN7uu_uniq7options11CHECK_CHARS17h0df0a8947801ce63E, g_4f56a0, &v9);
        v50 = v5;
        v51 = v50;
        if (!(v4 & 1))
        {
            v1 = v9.get_flag(_ZN7uu_uniq7options11IGNORE_CASE17ha8d0002db21b3552E, g_4f56c0);
            v52 = v9.get_flag(_ZN7uu_uniq7options15ZERO_TERMINATED17hfebae49d51f1a3b8E, g_4f5710);
            v53 = SarNV(ShlNV((unsigned int)v18 CONCAT (unsigned int)v18 CONCAT (unsigned int)v18 CONCAT (unsigned int)v18, 31), 31);
            v54 = SarNV(ShlNV((unsigned int)v19 CONCAT (unsigned int)v19 CONCAT (unsigned int)v19 CONCAT (unsigned int)v19, 31), 31);
            v37 = v0;
            v38 = v3;
            v39 = 1;
            v43 = v2;
            v40 = v49;
            v31 = ~(v54) & *((int128_t *)&v21) | (v19 & 0xffffffffffffffff0000000000000000 | 1) & v54;
            v33 = ~(v53) & v20 | ((unsigned long long)(v18 >> 64) CONCAT 1) & v53;
            v35 = v50;
            v36 = v6;
            v41 = v1;
            v42 = v52;
            if (v49)
            {
                v22.to_vec("printing all duplicated lines and repeat counts is meaningless\nTry 'uniq --help' for more information./home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 102);
                v6 = v23;
                v4 = v22;
                v7 = 1;
                v51 = v4.new();
            }
            else
            {
                uu_uniq::open_input_file(&v4, v29, v48);
                if ((v4 & 1))
                {
                    v55 = v5;
                    v51 = v55;
                }
                else
                {
                    uu_uniq::open_output_file(&v4, v15, v14);
                    v56 = v5;
                    if (*((int *)&v4) == 1)
                    {
                        core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v55, v6);
                        v51 = v56;
                    }
                    else
                    {
                        v51 = v29.print_uniq(v55, v6, v56, v6);
                    }
                }
            }
        }
    }
    else
    {
LABEL_45dc26:
        v51 = (long long)(&v30)[8];
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
    return v51;
}
