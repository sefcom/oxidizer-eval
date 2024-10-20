long long uu_expr::syntax_tree::Parser::next::h5515c0901d579a62(unsigned long long a0[4], struct_0 *a1)
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rdi
    unsigned long long *v3;  // rax
    unsigned long long *v4;  // rdi
    unsigned long long *v5;  // rax
    unsigned long long *v6;  // rdi
    void* v7;  // r15
    unsigned long v8;  // r14
    unsigned long long v9;  // r12

    v1 = a1->field_8;
    v2 = a1->field_10;
    if (v2 < v1)
    {
        v3 = a1->field_0;
        a1->field_10 = (char *)v2 + 1;
        *((int128_t *)&a0[1]) = *((int128_t *)((char *)v3 + 0x10 * v2));
        a0[0] = 7;
        return v3;
    }
    v4 = (char *)v2 + 1;
    if (v4 >= v1)
        core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
    v5 = a1->field_0;
    v6 = v4 * 16;
    v7 = *((long long *)(v5 + v6));
    v8 = *((long long *)(v5 + v6 + 8));
    if (!v8)
    {
        ::libc.so.0::memcpy(v9, v7, v8);
        a0[0] = 1;
        a0[1] = v8;
        a0[2] = 1;
        a0[3] = v8;
        return v3;
    }
    if (v8 < 0)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v9 = __rust_alloc(v8, 1);
    if (v9)
    {
        v3 = ::libc.so.0::memcpy(v9, v7, v8);
        a0[0] = 1;
        a0[1] = v8;
        a0[2] = v9;
        a0[3] = v8;
        return v3;
    }
}
