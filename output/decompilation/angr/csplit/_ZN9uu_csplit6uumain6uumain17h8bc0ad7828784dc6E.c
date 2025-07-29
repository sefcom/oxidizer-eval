long long uu_csplit::uumain::uumain(unsigned long long a0, unsigned long long a1)
{
    int v0;  // [bp-0x418]
    char v1;  // [bp-0x408]
    unsigned long long v2;  // [bp-0x3f8]
    char v3;  // [bp-0x3e8]
    unsigned long long v4;  // [bp-0x3e0]
    unsigned long long v5;  // [bp-0x3d8]
    unsigned long long v6;  // [bp-0x3d0]
    char v7;  // [bp-0x3c8], Other Possible Types: unsigned long long
    int v8;  // [bp-0x3c0], Other Possible Types: char
    char v9;  // [bp-0x3b8]
    int v10;  // [bp-0x3b0]
    char v11;  // [bp-0x3a8]
    unsigned long long v12;  // [bp-0x3a0]
    int v13;  // [bp-0x398], Other Possible Types: char
    int v14;  // [bp-0x388]
    int v15;  // [bp-0x378]
    unsigned long long v16;  // [bp-0x368]
    unsigned long long v17;  // [bp-0x360]
    unsigned long long v18;  // [bp-0x358]
    char v19;  // [bp-0x350]
    char v20;  // [bp-0x340]
    unsigned long long v21;  // [bp-0x330]
    char v22;  // [bp-0x328]
    char v23;  // [bp-0x318]
    char v24;  // [bp-0x308]
    char v25;  // [bp-0x2f8]
    int v26;  // [bp-0x2e8], Other Possible Types: char, unsigned long long
    int v27;  // [bp-0x2e0], Other Possible Types: char
    int v28;  // [bp-0x2d8]
    int v29;  // [bp-0x2d0], Other Possible Types: char
    unsigned long long v30;  // [bp-0x2c8]
    unsigned long long v31;  // [bp-0x2c0]
    int v32;  // [bp-0x2b8]
    int v33;  // [bp-0x2a8]
    int v34;  // [bp-0x298]
    char v35;  // [bp-0x288]
    unsigned long long v37[3];  // rbx
    int v38;  // xmm0
    unsigned long long v39;  // rbx
    int v40;  // xmm1
    char v42;  // dl
    int v43;  // xmm0
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    int v46;  // xmm0
    unsigned long long v47;  // rdi

    uu_csplit::uu_app(&v26);
    v7.try_get_matches_from(&v26, a0, a1);
    if ((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63))
        return *((long long *)&v8).from();
    v21 = *((long long *)&v13);
    memcpy(&v20, &v11, 16);
    memcpy(&v19, &v9, 16);
    v17 = v7;
    v18 = *((long long *)&v8);
    v26.try_get_one(&v17, "filemode{", 4);
    v37 = "filemode{".unwrap(4, &v26);
    if (v37)
    {
        v26.try_get_many(&v17, "pattern/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 7);
        v7.unwrap("pattern/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs", 7, &v26);
        if (v7)
        {
            memcpy(&v25, &v13, 16);
            memcpy(&v24, &v11, 16);
            memcpy(&v23, &v9, 16);
            memcpy(&v22, &v7, 16);
            v3.from_iter(&v22, &g_72ef28);
            v26.new(&v17);
            v2 = v31;
            *((int128_t *)&v0) = *((int128_t *)&v27);
            memcpy(&v1, &v29, 16);
            if (v26 == 0x8000000000000000)
            {
                v30 = v2;
                v38 = (int128_t)v0;
                *((int128_t *)&v28) = *((int128_t *)&v1);
                v26 = v38;
                v39 = v26.new();
                ::0x58ee20::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
                return v39;
            }
            v16 = *((long long *)&v35);
            v15 = v34;
            v14 = v33;
            v13 = v32;
            v40 = *((int128_t *)&v1);
            *((int128_t *)&v8) = (int128_t)v0;
            v10 = v40;
            v12 = v2;
            v7 = v26;
            if ((char)v37[1].equal(v37[2], "-", 1))
            {
                v6 = std::io::stdio::stdin();
                uu_csplit::csplit(&(char)v0, &v7, v4, v5, v6.lock(), v42 & 1);
                if ((int)v0 == 13)
                {
LABEL_5931d7:
                    core::ptr::drop_in_place<uu_csplit::CsplitOptions>(&v7);
                    ::0x58ee20::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
                    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
                    return 0;
                }
                v30 = v2;
                v43 = (int128_t)v0;
                *((int128_t *)&v28) = *((int128_t *)&v1);
                v26 = v43;
                v44 = v26.new();
                goto LABEL_59322b;
            }
            else
            {
                v26.open(v37);
                (char)v0.map_err_context(&v26, v37);
                v39 = (long long)v0;
                if (!v39)
                {
                    v26.with_capacity(0x2000, (int)(&v0)[8]);
                    uu_csplit::csplit(&(char)v0, &v7, v4, v5, &v26);
                    v45 = (long long)v0;
                    if (v45 == 13)
                        goto LABEL_5931d7;
                    v46 = (int128_t)(&v0)[8];
                    *((int128_t *)&v29) = *((int128_t *)&(&v1)[8]);
                    v27 = v46;
                    v26 = v45;
                    v44 = v26.new();
LABEL_59322b:
                    v39 = v44;
                }
                core::ptr::drop_in_place<uu_csplit::CsplitOptions>(&v7);
                ::0x58ee20::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
                core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v17);
                return v39;
            }
        }
        else
        {
            v47 = &g_72ef10;
        }
    }
    else
    {
        v47 = &g_72eef8;
    }
    core::option::unwrap_failed(v47); /* do not return */
}
