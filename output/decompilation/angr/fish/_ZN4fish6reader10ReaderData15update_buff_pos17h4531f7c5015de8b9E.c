long long fish::reader::ReaderData::update_buff_pos(void* a0, unsigned int a1, char a2, unsigned long a3)
{
    unsigned int v0;  // [bp-0x2c]
    char v2;  // r14b
    char v3;  // bpl
    unsigned long v4;  // r15
    unsigned long v5;  // rax
    unsigned long v6;  // 4096
    unsigned long v7;  // rdx
    unsigned long long v8;  // rax
    void* v9;  // 4096
    unsigned long v11;  // rcx
    unsigned long v12;  // rdx
    unsigned long v13;  // rcx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long v16;  // rsi
    unsigned long v17;  // rdx
    unsigned long v18;  // rcx
    unsigned long long v19;  // rcx

    v2 = a2;
    v3 = a1;
    if (a1)
    {
        if ((char)a0[2122])
        {
            v14 = a0 + 368;
        }
        else if ((a2 & 1))
        {
            v4 = (long long)a0[488];
            goto LABEL_13fa0d5;
        }
        else
        {
            return v5 & 0xffffffffffffff00 | 1;
        }
LABEL_13fa056:
        if ((a2 & 1))
        {
            v4 = *((long long *)(v14 + 120));
            v6 = a3;
            if (!(v6 == *((long long *)(v14 + 48)) & *((long long *)(v14 + 48))))
                goto LABEL_13fa0cd;
        }
        else
        {
            v7 = *((long long *)(v14 + 48));
            v4 = *((long long *)(v14 + 120));
            v8 = v14 & 0xffffffffffffff00 | !v7;
            v6 = v4;
            if (v4 != v7 || !v7)
                goto LABEL_13fa0eb;
        }
        a3 = v6 - 1;
        v2 = 1;
        if (v4 == a3)
            return 0;
LABEL_13fa0cd:
        v9 = a0;
        if (v3)
        {
LABEL_13fa0d5:
            v9 = a0 + 368;
        }
    }
    else
    {
        v14 = a0;
        if ((char)a0[2122] == 1)
            goto LABEL_13fa056;
        v4 = (long long)a0[120];
        v9 = a0;
        if (!(a2 & 1))
            goto LABEL_13fa0f9;
    }
    v8 = (unsigned long long)v9.set_position(a3);
LABEL_13fa0eb:
    v14 = v8 & 0xffffffffffffff00 | 1;
    if (v3)
        return v8 & 0xffffffffffffff00 | 1;
LABEL_13fa0f9:
    if ((v2 & 1))
    {
        if (a3 > v4)
            v11 = a3;
        else
            v11 = v4;
        v12 = v11;
        if (v12 > (long long)a0[48])
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dfd78); /* do not return */
        if (a3 < v4)
            v13 = a3;
        else
            v13 = v4;
        v0 = 10;
        v14 = v0.slice_contains(v13 * 4 + (long long)a0[40], v12 - v13);
        if ((char)v14)
            *((char *)&a0[2116]) = 1;
    }
    v15 = v14 & 0xffffffffffffff00 | 1;
    if (!((char)a0[1168] & 1))
        return v15;
    v16 = (long long)a0[120];
    v17 = (char)a0[2121];
    v18 = (long long)a0[1176];
    if (v18 > v16)
    {
        *((unsigned long *)&a0[1184]) = v16;
        v19 = v18 + v17;
        if ((char)__CFADD__(v18, v17))
            core::panicking::panic_const::panic_const_add_overflow(&g_14dfd90); /* do not return */
    }
    else
    {
        *((unsigned long *)&a0[1184]) = v18;
        v19 = v16 + v17;
        if ((char)__CFADD__(v16, v17))
            core::panicking::panic_const::panic_const_add_overflow(&g_14dfda8); /* do not return */
    }
    *((unsigned long long *)&a0[1192]) = v19;
    return v15;
}
