long long fish::highlight::highlight::Highlighter::visit_variable_assignment(unsigned long long a0[17], unsigned long long a1)
{
    char v0;  // [bp-0x34]
    char v1;  // [bp-0x30]
    unsigned long long v3;  // r12
    unsigned long long v4;  // r13
    unsigned long long v5;  // rax
    void* v6;  // rdx
    unsigned long long v7;  // rax
    void* v8;  // rdi
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    void* v13;  // rdx
    unsigned long v14;  // rsi

    a0.color_as_argument(a1, fish::ast::Node::source_range, 1);
    v3 = a0[15];
    v4 = a0[16];
    v5 = a1.try_source(v3, v4);
    if (!v5)
        v6 = 0;
    if (!v5)
        v5 = 4;
    v7 = fish::tokenizer::variable_assignment_equals_pos(v5, v6);
    if (!((char)v7 & 1))
        return v7;
    v0.try_source_range(a1);
    v8 = 0;
    if (v0)
        v8 = *((int *)&v1);
    v9 = v8.start();
    v11 = v9 + v10;
    if ((char)__CFADD__(v9, v10))
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14d97f8); /* do not return */
    }
    else if (v11 < a0[11])
    {
        *((unsigned int *)(a0[10] + v11 * 4)) = 0x90000;
        v12 = a1.try_source(v3, v4);
        if (!v12)
            v13 = 0;
        if (v10 > v13)
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d9840); /* do not return */
        v14 = (v12 ? v12 : 4);
        return a0[12].push((v12 ? v12 : 4), v10, &g_14d9828);
    }
    else
    {
        core::panicking::panic_bounds_check(v11, a0[11], &g_14d9810); /* do not return */
    }
}
