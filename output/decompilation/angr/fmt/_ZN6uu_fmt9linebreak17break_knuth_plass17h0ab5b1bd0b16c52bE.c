long long uu_fmt::linebreak::break_knuth_plass(unsigned long long a0, unsigned long long a1, struct_1 *a2)
{
    int v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    int v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    unsigned long long v6[3];  // [bp-0x78]
    char *v7;  // [bp-0x70]
    char v8;  // [bp-0x68]
    char v9;  // [bp-0x67]
    char v10;  // [bp-0x66]
    void* v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    unsigned long long v15;  // [bp-0x40]
    char v16;  // [bp-0x38]
    unsigned long long v19[3];  // rax
    void* v20;  // r12
    char v21;  // r15b
    struct_0 *v22;  // rax
    struct_0 *v23;  // r14
    char v24;  // bpl
    struct_0 *v25;  // rax
    struct_0 *v26;  // r12
    unsigned long long v27[3];  // rdi
    unsigned long long v28;  // rax

    v12 = a0;
    v13 = a1;
    uu_fmt::linebreak::find_kp_breakpoints(&v14, a0.clone(a1), a2, a2);
    v1 = v15;
    v2 = *((long long *)&v16) * 16 + v15;
    v19 = a2->field_18;
    *((int128_t *)&v3) = *((int128_t *)&a2->field_8);
    v5 = &a2->field_30;
    v6[0] = v19;
    v7 = &v12;
    v8.try_rfold(&v1, &(char)v3);
    if (v8)
    {
        v20 = v11;
    }
    else
    {
        v21 = v10;
        *((int128_t *)&v0) = *((int128_t *)&v12);
        v22 = v1.next();
        if (v22)
        {
            v23 = v22;
            if (v21)
            {
                v20 = uu_fmt::linebreak::write_newline(*((long long *)&a2->field_8), *((long long *)&a2->padding_9[7]), a2->field_18);
                if (v20)
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<(&uu_fmt::parasplit::WordInfo,bool)>>(&v14);
                    return v20;
                }
            }
            uu_fmt::linebreak::slice_if_fresh(&(char)v3, v21, v23->field_10, v23->field_18, v23->field_20, *((char *)v5), v23->field_3a, v23->field_38, v9);
            v24 = v23->field_39;
            v20 = uu_fmt::linebreak::write_with_spaces(v4, v5, (long long)v3, a2->field_18);
            if (v20)
            {
                core::ptr::drop_in_place<alloc::vec::Vec<(&uu_fmt::parasplit::WordInfo,bool)>>(&v14);
                return v20;
            }
            while (true)
            {
                v25 = v1.next();
                if (!v25)
                    break;
                v26 = v25;
                uu_fmt::linebreak::slice_if_fresh(&(char)v3, 0, v25->field_10, v25->field_18, v25->field_20, *((char *)v5) & 1, v25->field_3a & 1, v26->field_38 & 1, v24 & 1);
                v24 = v26->field_39;
                v20 = uu_fmt::linebreak::write_with_spaces(v4, v5, (long long)v3, a2->field_18);
                if (v20)
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<(&uu_fmt::parasplit::WordInfo,bool)>>(&v14);
                    return v20;
                }
            }
        }
        v27 = a2->field_18;
        v28 = v27[2];
        if (v27[0] - v28 > 1)
        {
            *((char *)(v27[1] + v28)) = 10;
            v27[2] = v28 + 1;
            v20 = 0;
        }
        else
        {
            v20 = v27.write_all_cold("\n   capacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rssrc/uu/fmt/src/linebreak.rsMismatch between definition and access of ``. /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/error.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rssrc/uu/fmt/src/linebreak.rs", 1);
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<(&uu_fmt::parasplit::WordInfo,bool)>>(&v14);
    return v20;
}
