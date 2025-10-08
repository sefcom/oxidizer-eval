long long uu_tsort::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x3c0]
    void* v1;  // [bp-0x3b8], Other Possible Types: char, unsigned long long
    int v2;  // [bp-0x3b0], Other Possible Types: unsigned long long
    char v3;  // [bp-0x3a8], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x3a0]
    char v5;  // [bp-0x398]
    unsigned long long v6;  // [bp-0x388]
    unsigned short v7;  // [bp-0x380]
    char v8;  // [bp-0x378], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0x370]
    unsigned long long v10;  // [bp-0x368]
    unsigned long long v11;  // [bp-0x360]
    unsigned long long v12;  // [bp-0x358]
    unsigned long long v13;  // [bp-0x350]
    unsigned long long v14;  // [bp-0x348]
    unsigned long long v15;  // [bp-0x340]
    char v16;  // [bp-0x338]
    char v17;  // [bp-0x328]
    unsigned long long v18;  // [bp-0x318]
    int v19;  // [bp-0x310], Other Possible Types: char
    unsigned long long v20;  // [bp-0x300]
    void* v21;  // [bp-0x2f8], Other Possible Types: char
    unsigned long long v22;  // [bp-0x2f8]
    int v23;  // [bp-0x2f0], Other Possible Types: char
    unsigned long long v24;  // [bp-0x2e8]
    unsigned long long v25;  // [bp-0x2e0]
    unsigned long long v27[3];  // r15
    unsigned long long v28;  // rbx
    unsigned long long v29;  // r14
    unsigned long long v31;  // rbx
    unsigned long long v32;  // rax
    unsigned long long v33;  // r15
    unsigned long long v34[4];  // rax
    unsigned long v35;  // rdx

    uu_tsort::uu_app(&v21);
    v1.try_get_matches_from(&v21, a0, a1);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
        return v15.from();
    v18 = v6;
    memcpy(&v17, &v5, 16);
    memcpy(&v16, &v3, 16);
    v14 = v1;
    v15 = v2;
    v21.try_get_one(&v14);
    v27 = v21.unwrap();
    if (!v27)
        core::option::expect_failed("Value is required by clap-mid > len/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 25, &g_4ea788); /* do not return */
    v28 = v27[1];
    v29 = v27[2];
    if ((char)v28.equal(v29, "-mid > len/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: ", 1))
    {
        std::io::read_to_string(&v21, std::io::stdio::stdin());
        v31 = *((long long *)&v23);
        if (v22 != 0x8000000000000000)
            goto LABEL_457b7c;
        v32 = *((long long *)&v23).from();
        goto LABEL_457b71;
    }
    if ((char)v28.is_dir(v29))
    {
        v1.clone(v27);
        v25 = v3;
        *((int128_t *)&v23) = *((int128_t *)&v1);
        v21 = 0;
        v33 = v21.new();
        goto LABEL_457cea;
    }
    else
    {
        std::fs::read_to_string(&v21, v28, v29);
        v31 = (long long)v23;
        if (v22 == 0x8000000000000000)
        {
            v32 = (long long)v23.from();
LABEL_457b71:
            v33 = v32;
        }
        else
        {
LABEL_457b7c:
            v0 = v31;
            v1.clone(v27);
            v21.new(&v1);
            v3.into_searcher(v31, v24);
            v1 = 0;
            v2 = v24;
            v7 = 1;
            v8.collect(&v1);
            v11 = v9;
            v12 = v10;
            v13 = 2;
            while (true)
            {
                v34 = v11.next();
                if (!v34)
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v8, v9);
                    v21.run_tsort();
                    core::ptr::drop_in_place<uu_tsort::Graph>(&v21);
                    core::ptr::drop_in_place<alloc::string::String>(v22, v0);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v14);
                    return 0;
                }
                if (v35 != 2)
                    break;
                v21.add_edge(v34[0], v34[1], v34[2], v34[3]);
            }
            v19.clone(v27);
            v4 = v20;
            v2 = v19;
            v1 = 1;
            v33 = v1.new();
            core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v8, v9);
            core::ptr::drop_in_place<uu_tsort::Graph>(&v21);
            core::ptr::drop_in_place<alloc::string::String>(v22, v0);
LABEL_457cea:
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v14);
    return v33;
}
