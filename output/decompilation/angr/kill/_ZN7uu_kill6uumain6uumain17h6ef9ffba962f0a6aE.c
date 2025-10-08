long long uu_kill::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3e0]
    int v1;  // [bp-0x3d8], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x3d0]
    char v3;  // [bp-0x3c8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x3c0]
    int v5;  // [bp-0x3b8], Other Possible Types: unsigned long long
    char v6;  // [bp-0x3a8]
    unsigned long long v7;  // [bp-0x398]
    int v8;  // [bp-0x388], Other Possible Types: char
    unsigned long long v9;  // [bp-0x380]
    int v10;  // [bp-0x378]
    char v11;  // [bp-0x368]
    unsigned long long v12;  // [bp-0x358]
    char v13;  // [bp-0x350]
    unsigned long long v14;  // [bp-0x340]
    char v15;  // [bp-0x338]
    int v16;  // [bp-0x2f8], Other Possible Types: char
    char v17;  // [bp-0x2f0]
    unsigned long long v18;  // [bp-0x2f0]
    unsigned long long v19;  // [bp-0x2e8]
    unsigned int v20;  // [bp-0x2e0]
    char v22;  // al
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rbx
    unsigned long long v25;  // rbp
    unsigned long long v26;  // rax
    void* v27;  // r14
    unsigned long long v28[3];  // rax
    unsigned long long v29;  // r14
    void* v30;  // r12
    unsigned long long v31;  // r15
    void* v32;  // rbx

    v13.collect_ignore(a0, a1);
    v22 = uu_kill::handle_obsolete(&v13);
    v24 = v23;
    uu_kill::uu_app(&(char)v16);
    v5 = v14;
    memcpy(&v3, &v13, 16);
    v8.try_get_matches_from(&(char)v16, &v3);
    if ((char)(((0 ^ *((long long *)&v8)) & (0 ^ -(*((long long *)&v8)))) >> 63))
        return v4.from();
    v7 = v12;
    memcpy(&v6, &v11, 16);
    v5 = v10;
    v3 = *((long long *)&v8);
    v4 = v9;
    v25 = 1;
    if (!(char)v3.get_flag(_ZN7uu_kill7options5TABLE17hf5e406d79938cf60E, g_4e75e0))
        v25 = (int)v3.get_flag(_ZN7uu_kill7options4LIST17h983d52dbeefec214E, g_4e75d0) * 2;
    (char)v16.try_get_many(&v3, _ZN7uu_kill7options15PIDS_OR_SIGNALS17h74df70473b295d74E, g_4e75c0);
    v15.unwrap(_ZN7uu_kill7options15PIDS_OR_SIGNALS17h74df70473b295d74E, g_4e75c0, &(char)v16);
    if (*((long long *)&v15))
    {
        (char)v16.collect(&v15);
        v26 = *((long long *)&v16);
        *((int128_t *)&v8) = *((int128_t *)&v17);
        if (v26 == 0x8000000000000000)
            goto LABEL_45909b;
        *((int128_t *)&v1) = (int128_t)v8;
        v0 = v26;
        if (!v25)
        {
LABEL_45910a:
            if (!(v22 & 1))
            {
                (char)v16.try_get_one(&v3, _ZN7uu_kill7options6SIGNAL17ha5de88967dceae53E, g_4e75f0);
                v28 = _ZN7uu_kill7options6SIGNAL17ha5de88967dceae53E.unwrap(g_4e75f0, &(char)v16);
                if (v28)
                {
                    uu_kill::parse_signal_value(&(char)v16, v28[1], v28[2]);
                    v24 = v18;
                    if (*((long long *)&v16))
                    {
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
                        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
                        return *((long long *)&v16);
                    }
                }
                else
                {
                    v24 = 15;
LABEL_45918f:
                    v30 = 0;
                    if ((char)_ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E[2 * v24].equal(_ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E[1 + 2 * v24], "EXITZero", 4))
                        goto LABEL_4591e5;
LABEL_4591be:
                    v30 = (unsigned int)v23;
                    if (((char)v24 & 4294967295.try_from() & 1))
                    {
                        v29 = v30 * 0x100000000 | 2.from();
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
                        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
                        return v29;
                    }
LABEL_4591e5:
                    uu_kill::parse_pids(&(char)v16, v1, v2);
                    v31 = *((long long *)&v16);
                    if (v31 == 0x8000000000000000)
                    {
                        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
                        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
                        return v18;
                    }
                    if (v19)
                    {
                        uu_kill::kill(v30 & 4294967295, v18, v19);
                        v32 = 0;
                    }
                    else
                    {
                        v8.to_vec("no process ID specified\nTry --help for more information./home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 56);
                        v19 = (long long)v10;
                        *((int128_t *)&v16) = (int128_t)v8;
                        v20 = 1;
                        v32 = (char)v16.new();
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v31, v18);
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
                    return v27;
                }
            }
            if (v24 >= 32)
                goto LABEL_4591be;
            goto LABEL_45918f;
        }
    }
    else
    {
LABEL_45909b:
        v0 = 0;
        v1 = 8;
        v2 = 0;
        if (!v25)
            goto LABEL_45910a;
    }
    if ((unsigned int)v25 == 1)
        uu_kill::table();
    else
        uu_kill::list(&v0);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v3);
    return 0;
}
