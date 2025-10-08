long long fish::builtins::string::replace::StringReplacer::replace(struct_0 *a0, struct_2 *a1, void* a2)
{
    void* v0;  // [bp-0xc8]
    int v1;  // [bp-0xc0]
    char v2;  // [bp-0xc0]
    int v3;  // [bp-0xb9]
    int v4;  // [bp-0xb9]
    char v5;  // [bp-0xb0]
    void* v6;  // [bp-0xa9]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x90]
    void* v11;  // [bp-0x88]
    int v12;  // [bp-0x78], Other Possible Types: char
    unsigned long long v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x58]
    void* v16;  // [bp-0x50]
    char v17[43];  // [bp-0x48]
    unsigned long long v18;  // [bp-0x40]
    unsigned long v19;  // [bp-0x38]
    unsigned long long v21;  // r12
    unsigned long long v22;  // rdx
    void* v23;  // rbp
    void* v24;  // rcx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rbx
    void* v28;  // rbp
    unsigned long long v29;  // rax
    void* v30;  // rcx
    void* v31;  // rdi
    unsigned long long v32;  // rax
    void* v33;  // rcx
    unsigned long long v35;  // rax
    void* v36;  // rcx
    unsigned long long v37;  // r14
    void* v38;  // r15
    unsigned long long v39;  // rax
    unsigned long long v40;  // rcx
    struct_0 *v42;  // rsi
    struct_0 *v43;  // r8
    struct_0 *v44;  // r9

    if ((char)(((0 ^ a1->field_0) & (0 ^ -(a1->field_0))) >> 63))
    {
        if (a1->field_18)
        {
            v9 = (long long)a2[16].with_capacity_in(4, 4, &g_14bd1e0);
            v10 = v22;
            v11 = 0;
            *((struct struct_3 **)&v17[0]) = a1->field_38;
            v0 = a2;
            v16 = (long long)a2[16];
            v15 = (long long)a2[8];
            if (a1->field_38->field_2a)
            {
                v12.to_lowercase(v15, v16);
            }
            else
            {
                v2.to_vec(v15, v16);
                v14 = *((long long *)&v5);
                *((int128_t *)&v12) = *((int128_t *)&v2);
            }
            v19 = a1->field_10;
            v18 = a1->field_28 + a1->field_30 * 4;
            v23 = 0;
            v8 = &g_14d3800;
            while (true)
            {
                if (!((char)v13.index(v14, v23, &g_14d37e8).find(v22, v19, v21) & 1))
                    break;
                v24 = v23;
                if ((char)__CFADD__(v24, v22))
                    core::panicking::panic_const::panic_const_add_overflow(0x14d3800); /* do not return */
                v25 = v13.index(v14, v23, v24 + v22, &g_14d3818);
                v9.spec_extend(v25, v25 + v22 * 4);
                v9.spec_extend(a1->field_28, v18);
                v26 = v22 + v21;
                if ((char)__CFADD__(v22, v21))
                {
                    v8 = &g_14d3830;
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d3830); /* do not return */
                }
                if ((char)__CFADD__(v23, v26))
                {
                    v8 = &g_14d3848;
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d3848); /* do not return */
                }
                v23 += v26;
                if (!v17[40])
                    break;
            }
            v28 = v23;
            if (!v28)
            {
                v6 = (long long)v0[16];
                *((int128_t *)&v4) = *((int128_t *)v0);
                a0->field_8 = 0;
                v32 = (long long)(&v4)[8];
                v33 = v6;
                *((int128_t *)&a0->field_9[0]) = (int128_t)v1;
                *((unsigned long long *)&a0->field_9[15]) = v32;
                a0->field_10 = v33;
                a0->field_0 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
                return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
            }
            else if (v16 >= v28)
            {
                v9.spec_extend(v15 + v28 * 4, v15 + v16 * 4);
                v6 = 0;
                *((int128_t *)&v3) = *((int128_t *)&v9);
                a0->field_8 = 1;
                v29 = (long long)(&v3)[8];
                v30 = v6;
                *((int128_t *)&a0->field_9[0]) = (int128_t)v1;
                *((unsigned long long *)&a0->field_9[15]) = v29;
                a0->field_10 = v30;
                a0->field_0 = 0;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
                v31 = v0;
                return (unsigned long long)core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(v0);
            }
            else
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d3860); /* do not return */
            }
        }
        v6 = (long long)a2[16];
        *((int128_t *)&v3) = *((int128_t *)a2);
        a0->field_8 = 0;
        v35 = (long long)(&v3)[8];
        v36 = v6;
        *((int128_t *)&a0->field_9[0]) = (int128_t)v1;
        *((unsigned long long *)&a0->field_9[15]) = v35;
        a0->field_10 = v36;
    }
    else
    {
        v37 = (long long)a2[8];
        v38 = (long long)a2[16];
        v2.replace_impl(a1->field_30, v37, v38, a1->field_8, a1->field_10, a1->field_50->field_28);
        v39 = (long long)v3;
        v40 = *((long long *)&v5);
        if ((v2 & 1))
        {
            v42 = 24;
            v43 = 16;
            v44 = 8;
            *((unsigned long long *)&a0->field_8) = v39;
            *((unsigned long long *)&a0->field_9[7]) = v40;
            *((unsigned long long *)&a0->field_9[15]) = v7;
            a0->field_0 = 1;
            return (unsigned long long)core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(v31);
        }
        if (v39 != 0x8000000000000000)
        {
            a0->field_8 = 1;
            v42 = 32;
            v43 = 24;
            v44 = 16;
            *((unsigned long long *)&a0->field_9[7]) = v39;
            *((unsigned long long *)&a0->field_9[15]) = v40;
            a0->field_10 = v7;
            a0->field_0 = 0;
            v31 = a2;
            return (unsigned long long)core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(v31);
        }
        v35 = *((long long *)a2);
        a0->field_8 = 0;
        *((unsigned long long *)&a0->field_9[7]) = v35;
        *((unsigned long long *)&a0->field_9[15]) = v37;
        a0->field_10 = v38;
    }
    a0->field_0 = 0;
    return v35;
}
