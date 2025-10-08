long long fish::reader::Reader::forward_token(unsigned long long a0[165], unsigned int a1)
{
    char v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa8]
    unsigned long v2;  // [bp-0xa0]
    unsigned long long v3;  // [bp-0x98]
    unsigned long long v4;  // [bp-0x98]
    void* v5;  // [bp-0x90]
    int v6;  // [bp-0x84]
    char v7;  // [bp-0x73]
    unsigned short v8;  // [bp-0x72]
    void* v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x60]
    unsigned long long v11;  // [bp-0x58]
    void* v12;  // [bp-0x50]
    char v13;  // [bp-0x48]
    void* v14;  // [bp-0x40]
    unsigned short v15;  // [bp-0x38]
    unsigned int v16;  // [bp-0x36]
    char v18;  // al
    void* v19;  // rdx
    unsigned long v20;  // r14
    unsigned long long v21;  // rax
    unsigned long v22;  // r13
    unsigned long long v23;  // r15
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // r14

    v18 = a0.active_edit_line();
    v20 = (long long)v19[120];
    if (a1)
    {
        if ((v18 & 1))
            core::panicking::panic("assertion failed: elt == EditableLineTag::Commandlinef", 53, &g_14e0860); /* do not return */
        if (!(char)a0.is_at_line_with_autosuggestion())
            core::panicking::panic("assertion failed: self.is_at_line_with_autosuggestion()assertion failed: elt == EditableLineTag::Commandlinef", 55, &g_14e0818); /* do not return */
        v21 = a0[163].clone(a0[164]);
        fish::reader::combine_command_and_autosuggestion(&v0, (long long)v19[40], (long long)v19[48], v21, v19, a0[161], a0[162]);
        if (v20 == v3)
            goto LABEL_1401388;
LABEL_1401284:
        v22 = v2;
        v23 = fish::parse_util::parse_util_cmdsubst_extent(v22, v3, v20);
        v24 = v23.clone(v19);
        if (v19 < v24 || v19 > v3)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14e0830); /* do not return */
        v5 = v19;
        v9 = 0;
        v10 = v24 * 4 + v22;
        v11 = v19 - v24;
        v12 = 0;
        v13 = 1;
        v14 = 0;
        v15 = 257;
        v16 = 0;
        do
        {
            v6.next(&v9);
            if ((char)v8 == 2)
                goto LABEL_1401359;
            if (v7 != 1)
                continue;
            v25 = v6.end();
            if ((char)__CFADD__(v25, v23))
                core::panicking::panic_const::panic_const_add_overflow(&g_14e0848); /* do not return */
        } while (v25 + v23 <= v20);
LABEL_1401359:
        v26 = 1;
    }
    else
    {
        v3 = (long long)v19[48];
        v2 = (long long)v19[40];
        v4 = (long long)v19[48];
        v1 = 0x8000000000000000;
        if (v20 != v4)
            goto LABEL_1401284;
LABEL_1401388:
        v26 = 0;
    }
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
    return v26;
}
