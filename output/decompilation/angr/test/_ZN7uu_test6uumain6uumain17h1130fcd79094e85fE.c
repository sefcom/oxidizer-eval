long long uu_test::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x3d8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x3d0]
    unsigned long long v2;  // [bp-0x3c9]
    unsigned long long v3;  // [bp-0x3c8]
    char v4;  // [bp-0x3c0]
    unsigned long long v5[3];  // [bp-0x3b8]
    unsigned long v6;  // [bp-0x3b0]
    int v7;  // [bp-0x3a8]
    unsigned long long v8;  // [bp-0x399]
    unsigned long long v9;  // [bp-0x388]
    unsigned long long v10;  // [bp-0x378]
    char v11;  // [bp-0x370], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x370]
    char v13;  // [bp-0x368]
    int v14;  // [bp-0x367]
    unsigned long long v15;  // [bp-0x360]
    unsigned long long v16;  // [bp-0x360]
    char v17;  // [bp-0x358]
    char v18;  // [bp-0x338]
    unsigned long long v19;  // [bp-0x328]
    char v20;  // [bp-0x2f8], Other Possible Types: unsigned int, unsigned long long
    int v21;  // [bp-0x2f8], Other Possible Types: unsigned long long
    char v22;  // [bp-0x2f0]
    char v23;  // [bp-0x2f0]
    int v24;  // [bp-0x2ef]
    unsigned long v25;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned int v26;  // [bp-0x2e0], Other Possible Types: unsigned long long
    unsigned long long v28;  // r14
    unsigned long long v29;  // rbx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    unsigned long long v32;  // r15
    unsigned long long v33;  // rax
    unsigned long long v34;  // r12
    unsigned long long v35;  // rax

    v9 = a0;
    v11.next(&v9);
    if ((char)(((0 ^ v11) & (0 ^ -(v11))) >> 63))
    {
        v20.to_vec("test -> ", 4);
        v28 = *((long long *)&v23);
    }
    else
    {
        v28 = *((long long *)&v13);
        v15 = v16;
        v12 = v11;
    }
    v29 = v12;
    v30 = uucore::util_name();
    v4.collect(v9, a1);
    v20 = 0;
    if ((char)core::slice::<impl [T]>::ends_with(v30, v31, ::0x451b80::core::char::methods::encode_utf8_raw(&v20)))
    {
        v32 = 0x8000000000000000;
        if (v6)
        {
            v28 = v28;
            if (v6 == 1)
            {
                v10 = v16;
                if ((char)v5[1].eq(v5[2], "--help--version/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 6) || (char)v5[1].eq(v5[2], "--version/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 9))
                {
                    uu_test::uu_app(&v20);
                    v0 = v29;
                    v1 = v28;
                    v3 = v10;
                    v18.into_iter(&v4);
                    v11.chain(&v0, &v18);
                    v18.get_matches_from(&v20, &v11);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v18);
                    return 0;
                }
            }
            v6 -= 1;
            v33 = v6 * 3;
            v32 = v5[v33];
            v16 = v5[1 + v33];
            if (!!v16 && !v32 == 0x8000000000000000 && (char)v16.equal(v5[2 + v33], "]missing ']'--help--version/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 1))
            {
                core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v32, v16);
                goto LABEL_4533c5;
            }
        }
        v11.to_vec("missing ']'--help--version/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/slice.rsError flushing stdout: ", 11);
        v25 = v15;
        *((int128_t *)&v21) = *((int128_t *)&v12);
        v26 = 2;
        v34 = v20.new();
        core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(v32, v16);
        core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v4);
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v29, v28);
        return v34;
    }
    else
    {
LABEL_4533c5:
        v25 = v6;
        memcpy(&v20, &v4, 16);
        uu_test::parser::parse(&v11, &v20);
        if (v11 == 7)
        {
            v19 = *((long long *)&v17);
            memcpy(&v18, &v13, 16);
            uu_test::uumain::uumain::{{closure}}(&v20, &v18);
            *((int128_t *)&v0) = (int128_t)v24;
            v2 = v26;
            *((int128_t *)&v7) = (int128_t)v0;
            v8 = v2;
            if (v21 == 7)
            {
                v34 = (!(v22 & 1) ? 1.from() : 0);
                core::ptr::drop_in_place<std::ffi::os_str::OsString>(v29, v28);
                return v34;
            }
            v26 = v8;
            *((int128_t *)&v24) = (int128_t)v7;
            v20 = v21;
            v35 = v20.new();
        }
        else
        {
            memcpy(&(char)v0, &v14, 16);
            v2 = *((long long *)&v17);
            *((int128_t *)&v7) = (int128_t)v0;
            v8 = (long long)(&v0)[15];
            v26 = v8;
            *((int128_t *)&v24) = (int128_t)v7;
            v20 = v11;
            v22 = v13;
            v35 = v20.new();
        }
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v29, v28);
        return v35;
    }
}
