long long uu_join::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x558]
    unsigned long long v1;  // [bp-0x550]
    unsigned long long v2;  // [bp-0x548]
    int v3;  // [bp-0x540]
    int v4;  // [bp-0x530]
    unsigned long long v5;  // [bp-0x528]
    int v6;  // [bp-0x520]
    int v7;  // [bp-0x510]
    unsigned long long v8;  // [bp-0x500]
    unsigned long long v9;  // [bp-0x4e8]
    unsigned long long v10;  // [bp-0x4e0]
    int v11;  // [bp-0x4d8]
    int v12;  // [bp-0x4c8]
    unsigned long long v13;  // [bp-0x4b8]
    int v14;  // [bp-0x450], Other Possible Types: char
    unsigned long long v15;  // [bp-0x448]
    unsigned long long v16;  // [bp-0x440]
    char v17;  // [bp-0x438], Other Possible Types: unsigned int
    int v18;  // [bp-0x428]
    int v19;  // [bp-0x418]
    int v20;  // [bp-0x408]
    char v21;  // [bp-0x3f8]
    char v22;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v23;  // [bp-0x168]
    int v24;  // [bp-0x160]
    int v25;  // [bp-0x150]
    char v26;  // [bp-0x140]
    unsigned long long v27;  // [bp-0x10]
    unsigned long long v29;  // r15
    unsigned long long v30;  // rax
    int v31;  // xmm0
    unsigned long long v32[3];  // rbx
    unsigned long long v33[3];  // r14
    unsigned long v34;  // rcx

    v27 = v29;
    uu_join::uu_app(&v14);
    v22.try_get_matches_from(&v14, a0, a1);
    if ((char)(((0 ^ v22) & (0 ^ -(v22))) >> 63))
        return v10.from();
    v13 = *((long long *)&v26);
    v12 = v25;
    v11 = v24;
    v9 = v22;
    v10 = v23;
    uu_join::parse_settings(&v14, &v9);
    v30 = *((long long *)&v14);
    if (v30 != 0x8000000000000000)
    {
        v8 = *((long long *)&v21);
        v31 = *((int128_t *)&v17);
        v7 = v20;
        v6 = v19;
        v4 = v18;
        v3 = v31;
        v0 = v30;
        v1 = v15;
        v2 = v16;
        v14.try_get_one(&v9, "file1file2-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ");
        v32 = "file1file2-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ".unwrap(&v14);
        if (!v32)
            core::option::unwrap_failed(&g_4fd4d8); /* do not return */
        v14.try_get_one(&v9, "file2-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ");
        v33 = "file2-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ".unwrap(&v14);
        if (!v33)
        {
            core::option::unwrap_failed(&g_4fd4f0); /* do not return */
        }
        else if ((char)v32[1].equal(v32[2], "-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 1) && (char)v33[1].equal(v33[2], "-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 1))
        {
            v22.to_vec("both files cannot be standard inputfile1file2-/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/io/mod.rs/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 35);
            v16 = (long long)v24;
            *((int128_t *)&v14) = *((int128_t *)&v22);
            v17 = 1;
            v1 = v14.new();
            core::ptr::drop_in_place<uu_join::Settings>(&v0);
        }
        else
        {
            v34 = v5 ^ 0x8000000000000000;
            goto (long long)(g_418b20[(v34 < 4 ? v34 : 1)] + (char *)&g_418b20[0]);
        }
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v9);
    return v1;
}
