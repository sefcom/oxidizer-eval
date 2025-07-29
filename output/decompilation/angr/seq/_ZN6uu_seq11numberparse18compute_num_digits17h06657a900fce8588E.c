long long uu_seq::numberparse::compute_num_digits(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    int v0;  // [bp-0x148]
    unsigned int v1;  // [bp-0x148]
    unsigned long long v2[4];  // [bp-0x140]
    int v3;  // [bp-0x138]
    char v4;  // [bp-0x128], Other Possible Types: unsigned long
    int v5;  // [bp-0x118]
    int v6;  // [bp-0x108]
    int v7;  // [bp-0xf8]
    unsigned long long v8;  // [bp-0xe8]
    char v9;  // [bp-0xe0]
    unsigned long long v10;  // [bp-0xd8]
    unsigned long long v11;  // [bp-0xd0]
    char v12;  // [bp-0xc8]
    unsigned long long v13;  // [bp-0xc0]
    char v14;  // [bp-0xb8]
    int v15;  // [bp-0xa8]
    char v16;  // [bp-0x98]
    int v17;  // [bp-0x88]
    int v18;  // [bp-0x78]
    int v19;  // [bp-0x68]
    unsigned long long v20;  // [bp-0x58]
    void* v21;  // [bp-0x50]
    unsigned long long v22;  // [bp-0x48]
    unsigned short v23;  // [bp-0x40]
    unsigned long long v25;  // r12
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned long long v28;  // r15
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx
    unsigned long long v32;  // rdx
    unsigned long long v34;  // r12
    unsigned long long v35[4];  // rcx
    void* v36;  // r15, Other Possible Types: unsigned long long
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rcx
    int v41;  // xmm0
    int v43;  // xmm0

    alloc::str::<impl str>::to_lowercase(&v9, a1, a2);
    v25 = core::str::<impl str>::trim_start_matches(v10, v11);
    v1 = 0;
    v27 = ::0x4bb1a0::core::char::methods::encode_utf8_raw(&v1).strip_prefix_of(v25, v26);
    if (!v27)
    {
        v28 = v26;
        if (!(v27))
            goto LABEL_4bb5a3;
LABEL_4bb5a2:
        v29 = v27;
    }
    else
    {
        v28 = v26;
        if (v27)
            goto LABEL_4bb5a2;
LABEL_4bb5a3:
        v29 = v25;
    }
    if (!(char)core::slice::<impl [T]>::starts_with(v29, v28, "0x-0x.pe-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/seq/src/numberparse.rs", 2) && !(char)core::slice::<impl [T]>::starts_with(v29, v28, "-0x.pe-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/seq/src/numberparse.rs", 3))
    {
        v1.new(v29, v28, "e-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/seq/src/numberparse.rs", 1);
        v20 = v8;
        v19 = v7;
        v18 = v6;
        v17 = v5;
        memcpy(&v16, &v4, 16);
        v15 = v3;
        memcpy(&v14, &v1, 16);
        v21 = 0;
        v22 = v28;
        v23 = 1;
        v1.from_iter(&v14, &g_5b4ea0);
        if (!(long long)v3)
        {
            v32 = &g_5b4eb8;
        }
        else if (core::str::<impl str>::find(v2[0], v2[1]))
        {
            if (v26)
            {
                v30 = v26;
                if (!(v30 == 1))
                    goto LABEL_4bb79d;
                if ((long long)v3)
                {
                    v30 = (int)core::slice::<impl [T]>::starts_with(v2[0], v2[1], "-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/seq/src/numberparse.rs", 1) + 1;
LABEL_4bb79d:
                    v34 = v30;
                    if ((long long)v3)
                    {
                        v35 = v2;
                        v36 = ~(v26) + v35[1];
                        if ((long long)v3 != 2)
                        {
                            a0->field_30 = a3->field_20;
                            v41 = a3->field_0;
                            a0->field_20 = a3->field_10;
                            *((void*)&a0->field_10) = v41;
                            a0->field_38 = v34;
                            a0->field_0 = 1;
                            a0->field_8 = v36;
                            ::0x4baaf0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v1);
                            ::0x4baa30::core::ptr::drop_in_place<alloc::string::String>(&v9);
                            return a0;
                        }
LABEL_4bb7bd:
                        ::0x4ba870::core::num::<impl i64>::from_str_radix(&v12, v35[2], v35[3]);
                        v38 = 0;
                        if (!v12)
                            v38 = v13;
                        if (v38 > 0)
                            v39 = v38;
                        else
                            v39 = 0;
                        v34 += v39;
                        if (v38 >= v36)
                        {
                            a0->field_30 = a3->field_20;
                            v41 = a3->field_0;
                            a0->field_20 = a3->field_10;
                            *((void*)&a0->field_10) = v41;
                            a0->field_38 = v34;
                            a0->field_0 = 1;
                            a0->field_8 = 0;
                            ::0x4baaf0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v1);
                            ::0x4baa30::core::ptr::drop_in_place<alloc::string::String>(&v9);
                            return a0;
                        }
                        v36 -= v38;
                        if ((char)amd64g_calculate_condition(5, 16, 0, v38 >> 63 ^ (unsigned long long)(char)(v36 < v38), (unsigned long long)(char)(v36 < v38)))
                            v36 = 0;
                        a0->field_30 = a3->field_20;
                        v41 = a3->field_0;
                        a0->field_20 = a3->field_10;
                        *((void*)&a0->field_10) = v41;
                        a0->field_38 = v34;
                        a0->field_0 = 1;
                        a0->field_8 = v36;
                        ::0x4baaf0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v1);
                        ::0x4baa30::core::ptr::drop_in_place<alloc::string::String>(&v9);
                        return a0;
                    }
                    v32 = &g_5b4f00;
                }
                else
                {
                    v32 = &g_5b4ee8;
                }
            }
            else
            {
                v30 = 1;
                goto LABEL_4bb79d;
            }
        }
        else
        {
            if ((long long)v3)
            {
                v35 = v2;
                v34 = v35[1];
                v36 = 0;
                if ((long long)v3 != 2)
                {
                    v34 = v35[1];
                    a0->field_30 = a3->field_20;
                    v41 = a3->field_0;
                    a0->field_20 = a3->field_10;
                    *((void*)&a0->field_10) = v41;
                    a0->field_38 = v34;
                    a0->field_0 = 1;
                    a0->field_8 = 0;
                    ::0x4baaf0::core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v1);
                    ::0x4baa30::core::ptr::drop_in_place<alloc::string::String>(&v9);
                    return a0;
                }
                goto LABEL_4bb7bd;
            }
            else
            {
                v32 = &g_5b4ed0;
            }
        }
        core::panicking::panic_bounds_check(0, 0, v32); /* do not return */
    }
    v4 = a3->field_20;
    *((uint128_t *)&v3) = a3->field_10;
    *((uint128_t *)&v0) = a3->field_0;
    if (!(char)".pe-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/seq/src/numberparse.rs".is_contained_in(v29, v28) && !(char)"pe-/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rssrc/uu/seq/src/numberparse.rs".is_contained_in(v29, v28))
    {
        a0->field_30 = v4;
        v43 = (int128_t)v0;
        *((void*)&a0->field_20) = v3;
        *((void*)&a0->field_10) = v43;
        a0->field_38 = 0;
        a0->field_0 = 1;
        a0->field_8 = 0;
        ::0x4baa30::core::ptr::drop_in_place<alloc::string::String>(&v9);
        return a0;
    }
    a0->field_30 = v4;
    v43 = (int128_t)v0;
    *((void*)&a0->field_20) = v3;
    *((void*)&a0->field_10) = v43;
    a0->field_38 = 0;
    a0->field_0 = 0;
    a0->field_8 = 0;
    ::0x4baa30::core::ptr::drop_in_place<alloc::string::String>(&v9);
    return a0;
}
