long long fish::parse_execution::ExecutionContext::apply_variable_assignments(struct_2 *a0, void* a1, unsigned long long a2, struct_1 *a3, unsigned long long a4[2])
{
    struct_2 *v0;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long long v1[3];  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    void* v3;  // [bp-0xe0]
    char v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xc8]
    void* v6;  // [bp-0xc0]
    unsigned long long v7;  // [bp-0xb8]
    void* v8;  // [bp-0xb0]
    unsigned long v9;  // [bp-0xa8]
    unsigned long long v10;  // [bp-0xa0]
    unsigned long long v11;  // [bp-0x98]
    uint128_t v12;  // [bp-0x78]
    unsigned int v13;  // [bp-0x68]
    unsigned short v14;  // [bp-0x64]
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rax
    struct_0 *v18;  // r13
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax

    v16 = a3->field_8;
    if (!v16)
        return 0;
    v0 = a0;
    v14 = 13;
    v12 = 0;
    v13 = 0;
    v17 = a1.parser().push_block(&v12);
    a4[0] = 1;
    a4[1] = v17;
    v18 = a3->field_0;
    v10 = (char *)v18 + 12 * v16;
    v0 = v0->field_18;
    v11 = a2;
    v9 = a2 + 24;
    v19 = (unsigned long long)v0.node_source(v18, fish::ast::Node::source);
    if (!((char)fish::tokenizer::variable_assignment_equals_pos(v19, v20) & 1))
    {
        core::option::unwrap_failed(&g_14dcd88); /* do not return */
    }
    else if (v20 <= v20)
    {
        v21 = v20 + 1;
        if ((char)_ccall(4, 24, v20 + 1, 0, (unsigned long long)(char)(v20 < v20)))
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14dcdb8); /* do not return */
        }
        else if (v20 >= v21)
        {
            v6 = 0;
            v7 = 8;
            v8 = 0;
            *(v1) = 0;
            v2 = 8;
            v3 = 0;
            v12.to_vec(v19 + v21 * 4, v20 - v21);
            v5 = *((long long *)&v13);
            memcpy(&v4, &v12, 16);
            fish::expand::expand_string(&v4, &v6, 0, a1, &v1);
            if (!(v18->field_0 & 1))
                core::option::unwrap_failed(&g_14dcde8); /* do not return */
            v22 = v18->field_4.start();
            v23 = v22 + v20;
            if (!((char)__CFADD__(v22, v20)) && !((char)_ccall(4, 24, v23 + 1, 0, (v22 + v20 <= v22 ? 1 : 0))))
            {
                fish::parse_constants::parse_error_offset_source_start(&v1, v23 + 1);
                goto (long long)(g_9f51ac[(unsigned int)v20] + (char *)&g_9f51ac[0]);
            }
            core::panicking::panic_const::panic_const_add_overflow(&g_14dce00); /* do not return */
        }
        else
        {
            core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dcdd0); /* do not return */
        }
    }
    else
    {
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14dcda0); /* do not return */
    }
}
