long long uu_expand::expand_line(unsigned long long a0[3], unsigned long long a1[3], unsigned long long *a2, unsigned long long a3, struct_0 *a4)
{
    char v0;  // [bp-0x97]
    char v1;  // [bp-0x96]
    char v2;  // [bp-0x95]
    unsigned int v3;  // [bp-0x94]
    void* v4;  // [bp-0x90]
    unsigned long long v5;  // [bp-0x88]
    int v6;  // [bp-0x88]
    void* v7;  // [bp-0x80]
    unsigned long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    unsigned long v12;  // [bp-0x50]
    unsigned long v13;  // [bp-0x48]
    unsigned long long v15;  // r14
    char *v16;  // r13
    unsigned long v17;  // r12
    unsigned long v18;  // rax
    unsigned long v19;  // rbx
    unsigned long long v20;  // rbp
    unsigned int v23;  // edx
    unsigned int v25;  // edx
    unsigned long v26;  // rbx, Other Possible Types: unsigned long long
    unsigned long long v27;  // rbp
    unsigned long long v28;  // rax
    char v29;  // cl
    char v30;  // cl
    char *v31;  // rdi
    unsigned long long v32;  // rsi
    unsigned long v33;  // rdx
    unsigned long long v34;  // r8
    unsigned long v35;  // rbp
    unsigned long long v36;  // rax
    void* v37;  // rax
    unsigned long v38;  // rbp
    unsigned long long v40;  // rax
    unsigned long v41;  // rcx
    void* v42;  // rax
    unsigned long v43;  // rbp
    unsigned long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax

    v15 = a0[2];
    if (v15)
    {
        v2 = a4->field_49;
        v1 = a4->field_4a;
        v12 = a4->field_38;
        v13 = a4->field_40;
        v0 = a4->field_48 ^ 1;
        v3 = 1;
        v4 = 0;
        v16 = 0;
        do
        {
            v17 = a0[1];
            v18 = v16[v17];
            if (!v2)
            {
                v26 = 1;
                if ((unsigned int)v18 == 8)
                    goto LABEL_4a040a;
                v20 = 1;
                if (!((unsigned int)v18 == 9))
                    goto LABEL_4a0490;
                goto LABEL_4a02fc;
            }
            v19 = (char)v18 < 0;
            v20 = 1;
            if (&v16[v19 + 1] > v15)
            {
LABEL_4a02cc:
                v26 = 1;
                goto LABEL_4a0490;
            }
            core::str::converts::from_utf8(&v9, v16.index(&v16[v19 + 1], v17, v15, &g_57b778), a2);
            if (!(!((char)v9 & 1)))
                goto LABEL_4a02cc;
            v26 = v19 + 1;
            v5 = v10;
            v7 = v11 + v10;
            if (!(int)::0x49dd70::core::str::validations::next_code_point(&v5))
                v23 = 0x110000;
            else
                v23 = v44;
            v25 = v23;
            if (v25 == 8)
            {
LABEL_4a040a:
                v41 = v4 - 1;
                if (v4 < 1)
                    v41 = 0;
                v4 = v41;
                goto LABEL_4a0495;
            }
            if (v25 == 9)
            {
LABEL_4a02fc:
                v27 = v4;
                v28 = uu_expand::next_tabstop(a2, a3, v27, v1);
                v4 = v27 + v28;
                v29 = v3;
                v30 = v29 | v0;
                if (!((v29 | v0) & 1))
                {
                    v37 = v16.index(&v16[v26], v17, v15, &g_57b790);
                    v38 = a1[2];
                    if (v44 < a1[0] - v38)
                    {
                        memcpy(a1[1] + v38, v37, v44);
                        a1[2] = v44 + v38;
                        v3 = 0;
                        goto LABEL_4a0265;
                    }
                    else
                    {
                        v40 = a1.write_all_cold(v37, v44);
                        if (v40)
                            return v40;
                        v3 = 0;
                        goto LABEL_4a0265;
                    }
                }
                else if (v28 <= v13)
                {
                    v31 = 0;
                    v32 = v28;
                    v33 = v12;
                    v34 = &g_57b7a8;
                    goto LABEL_4a0230;
                }
                else
                {
                    alloc::slice::<impl [T]>::repeat(&v9, " -/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/core/src/iter/traits/iterator.rs--tabs=", 1, v28);
                    v8 = v11;
                    *((int128_t *)&v6) = *((int128_t *)&v9);
                    v35 = a1[2];
                    if (v8 < a1[0] - v35)
                    {
                        memcpy(a1[1] + v35, v7, v8);
                        a1[2] = v35 + v8;
                    }
                    else
                    {
                        v36 = a1.write_all_cold(v7, v8);
                        if (v36)
                        {
                            ::0x49d1a0::core::ptr::drop_in_place<alloc::string::String>(&v5);
                            return v36;
                        }
                    }
                    ::0x49d1a0::core::ptr::drop_in_place<alloc::string::String>(&v5);
                    continue;
                }
            }
            v20 = 1;
            if (v25 == 0x110000)
                goto LABEL_4a02cc;
            if (v25 < 127)
            {
                if (!(v25 <= 31))
                    goto LABEL_4a0490;
            }
            else
            {
                if (v25 >= 160)
                {
                    v20 = (int)::0x49cb20::unicode_width::tables::lookup_width(v25);
                    goto LABEL_4a0490;
                }
            }
            v20 = 0;
LABEL_4a0490:
            v4 += v20;
LABEL_4a0495:
            if (v16 >= v15)
                core::panicking::panic_bounds_check(v16, v15, &g_57b7c0); /* do not return */
            v3 = v3 & 0xffffff00 | (char)v3 & v16[v17] == 32;
            v32 = &v16[v26];
            v31 = v16;
            v33 = v17;
            v34 = &g_57b7d8;
LABEL_4a0230:
            v42 = v31.index(v32, v33, v30, v34);
            v43 = a1[2];
            if (v44 < a1[0] - v43)
            {
                memcpy(a1[1] + v43, v42, v44);
                a1[2] = v44 + v43;
            }
            else
            {
                v45 = a1.write_all_cold(v42, v44);
                if (v45)
                    return v45;
            }
LABEL_4a0265:
            v16 = &v16[v26];
        } while (v16 < v15);
    }
    v46 = a1.flush();
    if (v46)
        return v46;
    a0.truncate(0);
    return 0;
}
