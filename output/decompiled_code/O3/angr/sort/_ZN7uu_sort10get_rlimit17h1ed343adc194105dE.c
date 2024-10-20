long long uu_sort::get_rlimit::h1ed343adc194105d(unsigned long long a0[2])
{
    int v0;  // [sp-0x28], Other Possible Types: unsigned int (32 bits)[3]
    uint128_t *v2;  // rax
    uint128_t *v3;  // r14
    struct_0 *v4;  // rax

    *((int128_t *)&v0) = 0;
    if (!getrlimit(7, v0))
    {
        a0[1] = *((long long *)&v0[0]);
        a0[0] = 0;
        return a0;
    }
    v2 = __rust_alloc(22, 1);
    if (!v2)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v3 = v2;
    *(v2) = 43077311918803992773564515798043156806;
    *((long long *)((char *)v3 + 14)) = 8388356080512671848;
    v4 = __rust_alloc(32, 8);
    if (v4)
    {
        v4->field_0 = 22;
        v4->field_8 = v3;
        v4->field_10 = 22;
        v4->field_18 = 2;
        a0[0] = v4;
        a0[1] = &g_592ce0;
        return a0;
    }
    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
}
