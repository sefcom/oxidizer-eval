long long uu_fmt::linebreak::break_lines(struct_1 *a0, char a1[80], unsigned long long a2[3])
{
    unsigned long v0;  // [bp-0xb0]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    unsigned long v3;  // [bp-0x98]
    char v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    char v6;  // [bp-0x80]
    char v7[80];  // [bp-0x68]
    int v8;  // [bp-0x60]
    unsigned long long v9[3];  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    unsigned long v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    unsigned long long v14[6];  // rax
    struct_0 *v15;  // r12
    void* v16;  // rbp
    unsigned long v17;  // r13
    unsigned long long v18;  // rbp
    void* v19;  // r13
    unsigned long v20;  // r13
    unsigned long long v21;  // rbp
    unsigned long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax

    v4.new(a1, a0);
    v1 = v5;
    v2 = *((long long *)&v6) * 64 + v5;
    v14 = v1.next();
    if (v14)
    {
        v15 = v14;
        v3 = v14[5];
        v0 = a0->field_58;
        if (a1[72] || a1[73] == 1)
        {
            v20 = *((long long *)&a0->field_28);
            v21 = a2[2];
            if (v20 < a2[0] - v21)
            {
                memcpy(a2[1] + v21, a0->field_20, v20);
                a2[2] = v21 + v20;
LABEL_4a6c8e:
                v16 = a0->field_48;
LABEL_4a6c92:
                v22 = *((long long *)&v15->field_18);
                v23 = a2[2];
                if (v22 < a2[0] - v23)
                {
                    memcpy(a2[1] + v23, v15->field_10, v22);
                    a2[2] = v23 + v22;
                }
                else
                {
                    v19 = a2.write_all_cold(v15->field_10, v22);
                    if (v19)
                    {
                        ::0x4a6670::core::ptr::drop_in_place<uu_fmt::parasplit::ParaWords>(&v4);
                        return v19;
                    }
                }
                *((char *[80])&v7[0]) = a1;
                v10 = v16 + v3;
                *((int128_t *)&v8) = *((int128_t *)&a0->field_38);
                v11 = v0;
                *((int *)&v12) = (!a0->field_68 ? a1[78] : 1);
                v9[0] = a2;
                v24 = (!((a1[79] | a0->field_68) & 1) ? uu_fmt::linebreak::break_knuth_plass(v1, v2, &v7) : uu_fmt::linebreak::break_simple(v1, v2, &v7));
LABEL_4a6d5d:
                v19 = v24;
            }
            else
            {
                v19 = a2.write_all_cold(a0->field_20, v20);
                if (!v19)
                    goto LABEL_4a6c8e;
            }
        }
        else if (a0->field_68)
        {
            v16 = 0;
            goto LABEL_4a6c92;
        }
        else
        {
            v17 = *((long long *)&a0->padding_39[7]);
            v18 = a2[2];
            if (v17 < a2[0] - v18)
            {
                memcpy(a2[1] + v18, *((long long *)&a0->field_38), v17);
                a2[2] = v18 + v17;
                v16 = v0;
                goto LABEL_4a6c92;
            }
            else
            {
                v19 = a2.write_all_cold(*((long long *)&a0->field_38), v17);
                v16 = v0;
                if (v19)
                {
                    ::0x4a6670::core::ptr::drop_in_place<uu_fmt::parasplit::ParaWords>(&v4);
                    return v19;
                }
            }
        }
    }
    else
    {
        v25 = a2[2];
        if (a2[0] - v25 > 1)
        {
            *((char *)(a2[1] + v25)) = 10;
            a2[2] = v25 + 1;
            v19 = 0;
        }
        else
        {
            v24 = a2.write_all_cold("\n   capacity overflow/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/slice/mod.rssrc/uu/fmt/src/linebreak.rsMismatch between definition and access of ``. /root/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/clap_builder-4.5.41/src/parser/error.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rssrc/uu/fmt/src/linebreak.rs", 1);
            goto LABEL_4a6d5d;
        }
    }
    ::0x4a6670::core::ptr::drop_in_place<uu_fmt::parasplit::ParaWords>(&v4);
    return v19;
}
