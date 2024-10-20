long long uu_sort::get_rand_string::h1945e9c513c1b5df(unsigned long long a0)
{
    unsigned long long v0[2];  // [sp-0x10]
    struct struct_1 **v2;  // fs
    struct_1 *v3;  // rax
    struct struct_0 **v4;  // rdx
    unsigned long long v5;  // cc_op
    unsigned long long v6;  // cc_dep2
    unsigned long long v8[2];  // rax
    unsigned long v9;  // cc_ndep
    unsigned long long v10[2];  // rdi

    v3 = *(v2);
    v4 = v3[4].field_-20;
    v5 = 8;
    v6 = 1;
    if (v4 != 1 && (!(!v4) || !((v4 = std::sys::thread_local::native::lazy::Storage$LT$T$C$D$GT$::initialize::h9005663a195c887c(v3 - 32, 0, v4), v5 = 20, v6 = 0, v4))))
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    v8 = v3[3].field_-20;
    v0[0] = v0[0] + 1;
    if ((char)amd64g_calculate_condition(4, 24, vvar_95 + 1, 0, amd64g_calculate_rflags_c(v5, v4, v6, v9)))
        [D] Unsupported jumpkind Ijk_NoDecode at address 5034588()
    v0[0] = v8;
    rand::rng::Rng::sample::h076c47bf5d386a47(a0, v0);
    v10 = v0;
    v10[0] = vvar_99 - 1;
    if (vvar_99 != 1)
        return a0;
    v10[1] = v10[1] - 1;
    if (vvar_100 == 1)
    {
        __rust_dealloc(v10);
        return a0;
    }
    return a0;
}
