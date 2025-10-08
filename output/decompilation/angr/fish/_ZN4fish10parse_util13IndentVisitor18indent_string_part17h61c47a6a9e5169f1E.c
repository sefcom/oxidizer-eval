long long fish::parse_util::IndentVisitor::indent_string_part(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0xc9]
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    char v3;  // [bp-0xb4]
    char v4;  // [bp-0xa2]
    char *v5;  // [bp-0xa0]
    unsigned long long v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x90]
    unsigned long long v8;  // [bp-0x88]
    void* v9;  // [bp-0x80]
    char v10;  // [bp-0x78]
    void* v11;  // [bp-0x70]
    unsigned short v12;  // [bp-0x68]
    unsigned int v13;  // [bp-0x66]
    char *v14;  // [bp-0x60]
    unsigned long v15;  // [bp-0x58]
    unsigned long v16;  // [bp-0x50]
    unsigned long long v17[3];  // [bp-0x48]
    unsigned long v18;  // [bp-0x40]
    char *v19;  // [bp-0x38]
    char *v20;  // [bp-0x30]
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long v24;  // cc_ndep
    unsigned long long v25;  // rax

    v1 = a1;
    v0 = 0;
    if (a3)
    {
        v22 = fish::tokenizer::quote_end(a0->field_18, a0->field_20, a1, 34);
        if (!((char)v22 & 1))
        {
            a0->field_50 = 1;
            return v22;
        }
        else if (!((char)_ccall(4, 24, v23 + 1, 0, _ccall(17, (unsigned long long)((char)v22 & 1), 0, v24))))
        {
            a1 = v23 + 1;
            v1 = a1;
        }
        else
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14ddd98); /* do not return */
        }
    }
    v2 = a1;
    if (a2 >= a1 && a2 <= a0->field_20)
    {
        v14 = &v0;
        v15 = a0->field_18;
        v16 = a0->field_20;
        v17[0] = a0->field_28;
        v18 = &a0->field_4c;
        v19 = &v2;
        v20 = &v1;
        v5 = &v14;
        v6 = &g_14dddb0;
        v7 = a0->field_18 + a1 * 4;
        v8 = a2 - a1;
        v9 = 0;
        v10 = 1;
        v11 = 0;
        v12 = 257;
        v13 = 0;
        v22 = v3.next(&v5);
        if (v4 != 2)
        {
            do
            {
                v22 = v3.next(&v5);
            } while (v4 != 2);
        }
        if (!(v0 & 1))
        {
            v25 = v2.index_mut(a2, a0->field_28->field_8, a0->field_28->field_10, &g_14dddf0);
            return v25.spec_fill(v23, a0->field_4c);
        }
        a0->field_50 = 1;
        return v22;
    }
    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dddd8); /* do not return */
}
