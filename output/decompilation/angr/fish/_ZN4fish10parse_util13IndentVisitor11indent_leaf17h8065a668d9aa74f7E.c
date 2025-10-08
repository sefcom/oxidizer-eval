long long fish::parse_util::IndentVisitor::indent_leaf(struct_0 *a0, unsigned int a1, unsigned int a2)
{
    char v0;  // [bp-0x8d]
    unsigned long long v1;  // [bp-0x88]
    unsigned int v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    void* v7;  // [bp-0x58]
    void* v8;  // [bp-0x50]
    char v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x38]
    unsigned long long v12;  // r12
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rbp
    void* v15;  // r12
    void* v16;  // r12
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // r13
    unsigned int v23;  // r15d
    unsigned long long v24;  // r12
    unsigned long long v25;  // rax
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned long long v28;  // r13
    unsigned long long v29;  // rax
    unsigned long long v31;  // r13

    v12 = a1.start();
    v13 = a1.end(a2);
    v14 = v13 - v12;
    v15 = a0->field_18 + v12 * 4;
    if (v13 <= a0->field_20 == 1 && !v13 < v12)
        v16 = v15;
    else
        v16 = 0;
    v7 = v16;
    if (v13 > a0->field_20 || v13 < v12)
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14ddca8); /* do not return */
    v2 = 40;
    if (v2.slice_contains(v15, v14))
    {
        v2 = 10;
        if (!v2.slice_contains(v15, v14))
        {
            v18 = a1.start();
            v19 = a1.end(a2);
            v20 = v18.index_mut(v19, a0->field_28->field_8, a0->field_28->field_10, &g_14ddcc0);
            return v20.spec_fill(v21, a0->field_4c);
        }
    }
    v22 = a1.start();
    v8 = 0;
    v0 = 0;
    fish::parse_util::parse_util_locate_cmdsubst_range(&v2, v15, v14, &v8, 1, &v0, 0);
    if (v2 < 2)
    {
        v23 = 0;
    }
    else
    {
        v6 = v14;
        v23 = 0;
        v1 = &g_14ddd20;
        do
        {
            v10 = v5;
            memcpy(&v9, &v3, 16);
            v24 = v9.command();
            v25 = a1.start();
            if ((char)__CFADD__(v25, v24))
                core::panicking::panic_const::panic_const_add_overflow(&g_14ddcd8); /* do not return */
            a0.indent_string_part(v22, v25 + v24, v23 & 1);
            v27 = v24.clone(v26);
            if (v26 < v27 || v26 > v6)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14ddcf0); /* do not return */
            if ((char)_ccall(0, 23, (unsigned long long)(a0->field_4c + 1), 0, (unsigned long long)(char)(v26 < v6)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14ddd08); /* do not return */
            fish::parse_util::compute_indents(&v2, v7 + v27 * 4, v26 - v27, a0->field_4c + 1);
            v28 = a1.start();
            if ((char)__CFADD__(v28, v24))
                core::panicking::panic_const::panic_const_add_overflow(0x14ddd20); /* do not return */
            v29 = a1.start();
            if ((char)__CFADD__(v29, v26))
            {
                v1 = &g_14ddd38;
                core::panicking::panic_const::panic_const_add_overflow(&g_14ddd38); /* do not return */
            }
            core::slice::<impl [T]>::copy_from_slice(v28 + v24.index_mut(v29 + v26, a0->field_28->field_8, a0->field_28->field_10, &g_14ddd50), v26, v3, v4);
            v31 = a1.start();
            v22 = v31 + v26;
            if ((char)__CFADD__(v31, v26))
            {
                v1 = &g_14ddd80;
                core::panicking::panic_const::panic_const_add_overflow(&g_14ddd80); /* do not return */
            }
            if (v9.closing() >= v26)
                a0->field_50 = 1;
            core::ptr::drop_in_place<alloc::vec::Vec<i32>>(*((long long *)&v2), v3);
            v23 = v0;
            fish::parse_util::parse_util_locate_cmdsubst_range(&v2, v7, v6, &v8, 1, &v0, 0);
        } while (v2 >= 2);
    }
    return a0.indent_string_part(v22, a1.end(a2), v23);
}
