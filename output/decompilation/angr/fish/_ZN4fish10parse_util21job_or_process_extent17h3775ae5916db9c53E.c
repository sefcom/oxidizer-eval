long long fish::parse_util::job_or_process_extent(char a0, unsigned long long a1, unsigned long long a2, unsigned int a3, struct_0 *a4)
{
    unsigned int v0;  // [bp-0x1c8]
    unsigned long v1;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v2;  // [bp-0x9c]
    char v3;  // [bp-0x8b]
    char v4;  // [bp-0x8a]
    unsigned long long v5;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    void* v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    void* v12;  // [bp-0x50]
    char v13;  // [bp-0x48]
    void* v14;  // [bp-0x40]
    unsigned int v15;  // [bp-0x38]
    unsigned short v16;  // [bp-0x34]
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // r15
    char v22;  // r14b
    unsigned int v23;  // r14d
    unsigned long long v24;  // rax
    unsigned long long v25;  // r15
    char v26;  // cl
    unsigned long long v27;  // rax
    char v29;  // r14b
    unsigned int v30;  // r14d
    unsigned long long v31;  // rax
    unsigned long long v32;  // r12
    char v33;  // cl
    unsigned long long v34;  // rax
    char v35;  // r14b
    unsigned int v36;  // ebp
    unsigned long long v37;  // rax
    unsigned long long v38;  // rbp
    char v39;  // cl
    unsigned long long v40;  // rax
    char v41;  // r14b
    unsigned int v42;  // ebp
    unsigned long long v43;  // rax
    unsigned long long v44;  // rbp
    char v45;  // cl
    unsigned long long v46;  // rax

    v18 = fish::parse_util::parse_util_cmdsubst_extent(a1, a2, a3);
    v8 = a3 - v18;
    if (a3 < v18)
        core::panicking::panic("assertion failed: cursor_pos >= cmdsub_range.startassertion failed: cmdsubst_begin <= buff.len()assertion failed: cmdsubst_range.end <= buff.len()assertion failed: prev_begin <= buff.len()assertion failed: prev_end >= prev_beginassertion failed: prev_end <", 50, &g_14dd7b0); /* do not return */
    v7 = v18;
    v20 = v18.clone(v19);
    v21 = v19;
    if (v19 >= v20 && v19 <= a2)
    {
        v5 = v20;
        v9 = 0;
        v10 = v20 * 4 + a1;
        v11 = v19 - v20;
        v12 = 0;
        v13 = 1;
        v14 = 0;
        v15 = 65793;
        v16 = 0;
        v2.next(&v9);
        if (v4 == 2)
            return v5;
        if (!a4)
        {
            v1 = v19;
            if (a0)
            {
                while (!(v35 & 1))
                {
                    while (true)
                    {
                        v36 = v3;
                        v37 = v2.offset();
                        if (v36 <= 9)
                        {
                            v0 = 764;
                            if ((*((char *)&v0 + ((v36 & 31) >> 3)) >> ((char)v36 & 31 & 7) & 1))
                                break;
                        }
                        v2.next(&v9);
                        if (v4 == 2)
                            return v5;
                    }
                    v38 = v7 + v37;
                    v39 = __CFADD__(v7, v37);
                    v35 = v8 <= v37;
                    if (v37 >= v8)
                    {
                        if (!v39)
                            v1 = v38;
                        else
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dd7f8); /* do not return */
                    }
                    else
                    {
                        if (!v39)
                        {
                            v40 = v2.length();
                            if ((char)__CFADD__(v38, v40))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14dd7e0); /* do not return */
                            v5 = v38 + v40;
                        }
                        else
                        {
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dd7e0); /* do not return */
                        }
                    }
                    v2.next(&v9);
                    if (v4 == 2)
                        return v5;
                }
            }
            else
            {
                while (!(v41 & 1))
                {
                    while (true)
                    {
                        v42 = v3;
                        v43 = v2.offset();
                        if (v42 <= 9)
                        {
                            v0 = 760;
                            if ((*((char *)&v0 + ((v42 & 31) >> 3)) >> ((char)v42 & 31 & 7) & 1))
                                break;
                        }
                        v2.next(&v9);
                        if (v4 == 2)
                            return v5;
                    }
                    v44 = v7 + v43;
                    v45 = __CFADD__(v7, v43);
                    v41 = v8 <= v43;
                    if (v43 >= v8)
                    {
                        if (!v45)
                            v1 = v44;
                        else
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dd7f8); /* do not return */
                    }
                    else
                    {
                        if (!v45)
                        {
                            v46 = v2.length();
                            if ((char)__CFADD__(v44, v46))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14dd7e0); /* do not return */
                            v5 = v44 + v46;
                        }
                        else
                        {
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dd7e0); /* do not return */
                        }
                    }
                    v2.next(&v9);
                    if (v4 == 2)
                        return v5;
                }
            }
        }
        else if (a0)
        {
            while (!(v22 & 1))
            {
                while (true)
                {
                    v23 = v3;
                    v24 = v2.offset();
                    if (v23 <= 9)
                    {
                        v0 = 764;
                        if ((*((char *)&v0 + ((v23 & 31) >> 3)) >> ((char)v23 & 31 & 7) & 1))
                            break;
                    }
                    a4.push(&v2);
                    v2.next(&v9);
                    if (v4 == 2)
                        return v5;
                }
                v1 = v21;
                v25 = v7 + v24;
                v26 = __CFADD__(v7, v24);
                v22 = v8 <= v24;
                if (v24 >= v8)
                {
                    v21 = v25;
                    if (v26)
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dd7f8); /* do not return */
                }
                else if (!v26)
                {
                    v27 = v2.length();
                    if ((char)__CFADD__(v25, v27))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dd7e0); /* do not return */
                    a4->field_10 = 0;
                    v5 = v25 + v27;
                    v21 = v1;
                }
                else
                {
                    core::panicking::panic_const::panic_const_add_overflow(&g_14dd7e0); /* do not return */
                }
                v2.next(&v9);
                if (v4 == 2)
                    return v5;
            }
            v2.offset();
            return v5;
        }
        else
        {
            v1 = v19;
            while (!(v29 & 1))
            {
                while (true)
                {
                    v30 = v3;
                    v31 = v2.offset();
                    if (v30 <= 9)
                    {
                        v0 = 760;
                        if ((*((char *)&v0 + ((v30 & 31) >> 3)) >> ((char)v30 & 31 & 7) & 1))
                            break;
                    }
                    a4.push(&v2);
                    v2.next(&v9);
                    if (v4 == 2)
                        return v5;
                }
                v32 = v7 + v31;
                v33 = __CFADD__(v7, v31);
                v29 = v8 <= v31;
                if (v31 >= v8)
                {
                    if (!v33)
                        v1 = v32;
                    else
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dd7f8); /* do not return */
                }
                else
                {
                    if (!v33)
                    {
                        v34 = v2.length();
                        if ((char)__CFADD__(v32, v34))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14dd7e0); /* do not return */
                        a4->field_10 = 0;
                        v5 = v32 + v34;
                    }
                    else
                    {
                        core::panicking::panic_const::panic_const_add_overflow(&g_14dd7e0); /* do not return */
                    }
                }
                v2.next(&v9);
                if (v4 == 2)
                    return v5;
            }
        }
        v2.offset();
        return v5;
    }
    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dd7c8); /* do not return */
}
