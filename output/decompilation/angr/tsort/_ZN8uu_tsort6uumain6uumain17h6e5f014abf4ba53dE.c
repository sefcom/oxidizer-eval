long long uu_tsort::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3f8]
    unsigned long long v1;  // [bp-0x3f0]
    unsigned long long v2;  // [bp-0x3e8]
    char v3;  // [bp-0x3e0], Other Possible Types: unsigned long long
    int v4;  // [bp-0x3d8], Other Possible Types: char
    char v5;  // [bp-0x3d0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x3c8]
    char v7;  // [bp-0x3c0]
    unsigned long long v8;  // [bp-0x3b0]
    char v9;  // [bp-0x3a8]
    char v10;  // [bp-0x3a0]
    unsigned long long v11;  // [bp-0x390]
    unsigned long long v12;  // [bp-0x388]
    char v13;  // [bp-0x380]
    char v14;  // [bp-0x370]
    unsigned long long v15;  // [bp-0x360]
    char v16;  // [bp-0x358]
    unsigned long long v17;  // [bp-0x348]
    int v18;  // [bp-0x340], Other Possible Types: char
    unsigned long long v19;  // [bp-0x330]
    void* v20;  // [bp-0x328]
    unsigned long long v21;  // [bp-0x320]
    char v22;  // [bp-0x318]
    unsigned short v23;  // [bp-0x2f0]
    void* v24;  // [bp-0x2e8], Other Possible Types: char
    unsigned long long v25;  // [bp-0x2e8]
    int v26;  // [bp-0x2e0], Other Possible Types: char
    unsigned long long v27;  // [bp-0x2d8]
    unsigned long long v28;  // [bp-0x2d0]
    unsigned long long v30[3];  // rbx
    unsigned long long v32;  // rdi
    unsigned long long v33;  // rax
    unsigned long long v34;  // rbx
    unsigned long long v35[4];  // rax
    unsigned long v36;  // rdx

    uu_tsort::uu_app(&v24);
    v3.try_get_matches_from(&v24, a0, a1);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
        return *((long long *)&v4).from();
    v15 = v8;
    memcpy(&v14, &v7, 16);
    memcpy(&v13, &v5, 16);
    v11 = v3;
    v12 = *((long long *)&v4);
    v24.try_get_one(&v11, "filesizei128", 4);
    v30 = "filesizei128".unwrap(4, &v24);
    if (!v30)
        core::option::expect_failed("Value is required by clap-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsmid > len/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rs", 25, &g_575fe8); /* do not return */
    if ((char)v30[1].equal(v30[2], "-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rsmid > len/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rs", 1))
    {
        std::io::read_to_string(&v24, std::io::stdio::stdin());
        v32 = *((long long *)&v26);
        if (!(v25 == 0x8000000000000000))
            goto LABEL_49a9b4;
        v33 = *((long long *)&v26).from();
        goto LABEL_49a9a9;
    }
    if ((char)v30[1].is_dir(v30[2]))
    {
        v3.clone(v30);
        v28 = v5;
        *((int128_t *)&v26) = *((int128_t *)&v3);
        v24 = 0;
        v34 = v24.new();
        goto LABEL_49ab35;
    }
    else
    {
        std::fs::read_to_string(&v24, v30[1], v30[2]);
        v32 = (long long)v26;
        if (v25 == 0x8000000000000000)
        {
            v33 = (long long)v26.from();
LABEL_49a9a9:
            v34 = v33;
        }
        else
        {
LABEL_49a9b4:
            v0 = v25;
            v1 = v32;
            v2 = v27;
            v3.clone(v30);
            v24.new(&v3);
            v22.into_searcher(v1, v2);
            v20 = 0;
            v21 = v2;
            v23 = 1;
            v9.from_iter(&v20, &g_576088);
            memcpy(&v16, &v10, 16);
            v17 = 2;
            while (true)
            {
                v35 = v16.next();
                if (!v35)
                {
                    ::0x49a0f0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v9);
                    v24.run_tsort();
                    core::ptr::drop_in_place<uu_tsort::Graph>(&v24);
                    ::0x49a0a0::core::ptr::drop_in_place<alloc::string::String>(&v0);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
                    return 0;
                }
                if (v36 != 2)
                    break;
                v24.add_edge(v35[0], v35[1], v35[2], v35[3]);
            }
            v18.clone(v30);
            v6 = v19;
            v4 = v18;
            v3 = 1;
            v34 = v3.new();
            ::0x49a0f0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v9);
            core::ptr::drop_in_place<uu_tsort::Graph>(&v24);
            ::0x49a0a0::core::ptr::drop_in_place<alloc::string::String>(&v0);
LABEL_49ab35:
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v11);
    return v34;
}
