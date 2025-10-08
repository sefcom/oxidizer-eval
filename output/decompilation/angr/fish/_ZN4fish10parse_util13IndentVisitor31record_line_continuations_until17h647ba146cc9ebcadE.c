long long fish::parse_util::IndentVisitor::record_line_continuations_until(unsigned long long a0[9], unsigned long a1)
{
    unsigned long long v0;  // [sp-0x58]
    unsigned long long v1;  // [sp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x40]
    void* v4;  // [bp-0x38]
    unsigned long v6;  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbp
    unsigned long long v9;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    unsigned long long v13;  // r12
    unsigned long v14;  // cc_ndep
    unsigned long long v15;  // rsi
    unsigned long long v16;  // r13
    unsigned long long v17;  // r13
    unsigned long long v18;  // rbp
    unsigned long long v19;  // cc_dep2
    unsigned long long v20;  // cc_dep1
    unsigned long v21;  // r12
    unsigned long long v22;  // rax
    unsigned long long v23;  // rsi
    unsigned long v24;  // 4097

    v6 = a0[8];
    v7 = a1 - v6;
    if (a1 >= v6 && a1 <= a0[4])
    {
        v8 = a0[3];
        v3 = v6;
        v9 = v6 * 4 + v8;
        v0 = v9;
        v1 = v7;
        v2 = 2;
        v4 = 0;
        v10 = v0.try_fold(&v4);
        if (!((char)v10 & 1))
            return v10;
        v12 = "#".slice_contains(0.index(v11, v9, v7, &g_14ddbe8), v11);
        if ((char)v12)
            return v12;
        v13 = v11 + 1;
        if ((char)_ccall(4, 24, v11 + 1, 0, _ccall(17, v12 & 255, 0, v14)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14ddc00); /* do not return */
        v15 = v3 + v13;
        if (!((char)__CFADD__(v3, v13)))
        {
            v17 = a1 * 4;
            v18 = v8;
            do
            {
                v19 = v18;
                v20 = v17;
                a0.push(v15, &g_14ddc30);
                v21 = v13 + 1;
                if ((char)_ccall(4, 24, v13 + 1, 0, (v20 + v19 <= v20 ? 1 : 0)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14ddc48); /* do not return */
                if (v21 > v7)
                    core::slice::index::slice_start_index_len_fail(v21, v7, &g_14ddc78); /* do not return */
                v0 = v9 + v21 * 4;
                v1 = v16 + v8;
                v22 = v0.position();
                if (!((char)v22 & 1))
                    return v22;
                v13 = v21 + v11;
                if ((char)__CFADD__(v21, v11))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14ddc60); /* do not return */
                v23 = v13;
                v24 = a0[8];
                v15 = v23 + v24;
                v17 = v23;
                v18 = v24;
            } while (!((char)__CFADD__(v17, v18)));
        }
        core::panicking::panic_const::panic_const_add_overflow(&g_14ddc18); /* do not return */
    }
    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14ddc90); /* do not return */
}
