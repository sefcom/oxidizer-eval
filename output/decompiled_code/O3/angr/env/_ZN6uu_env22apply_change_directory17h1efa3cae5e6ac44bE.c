long long uu_env::apply_change_directory::h1efa3cae5e6ac44b(unsigned long long a0[17])
{
    unsigned long v0;  // [sp-0xa8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xa0]
    char v2;  // [bp-0x98]
    char v3;  // [bp-0x90]
    unsigned long v4;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x80]
    unsigned long long v6;  // [sp-0x78]
    unsigned long long v7;  // [sp-0x70]
    unsigned long long v8;  // [sp-0x68]
    unsigned long long v9;  // [sp-0x60]
    unsigned long long v10;  // [sp-0x58]
    char v11;  // [sp-0x50]
    unsigned long v12;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x40]
    unsigned long long v14;  // [sp-0x38]
    unsigned long long v15;  // [sp-0x30]
    void* v16;  // [sp-0x28]
    unsigned long long v18;  // rbx
    uint128_t v19[2];  // rax
    unsigned long long v20;  // r14
    unsigned long long v21;  // rax
    uint128_t v22[2];  // r14
    struct_0 *v23;  // rax
    unsigned long long v25;  // r15
    unsigned long long v26;  // rbx

    v18 = a0[15];
    if (!a0[11] && v18)
    {
        v19 = __rust_alloc(38, 1);
        if (!v19)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v22 = v19;
        *((int128_t *)(v19 + &g_10)) = 140090286471437898250066691899222024557;
        v19[0] = 145464207023276652289113907314348488045;
        *((long long *)((char *)&v22[1] + 14)) = 2973269829360970084;
        v23 = __rust_alloc(32, 8);
        if (v23)
        {
            v23->field_0 = 38;
            *((uint128_t *[2])(v23 + &g_8)) = v22;
            *((long long *)(v23 + &g_10)) = 38;
            *((int *)(v23 + &g_18)) = 125;
            return v23;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    if (!v18)
        return &g_0;
    v20 = a0[16];
    v21 = std::sys::pal::unix::os::chdir::h795a7142be4811c0(v18, v20);
    if (v21)
    {
        v0 = v21;
        v8 = &g_0;
        v9 = v18;
        v10 = v20;
        *((unsigned long long **)&v11) = &g_0;
        v4 = &v8;
        v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v6 = &v0;
        v7 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v12 = &g_50c880;
        v13 = &g_0;
        v16 = &g_0;
        v14 = &v4;
        v15 = &g_0;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v1, &v12);
        v25 = *((long long *)&v2);
        v26 = *((long long *)&v3);
        v23 = __rust_alloc(32, 8);
        if (v23)
        {
            v23->field_0 = *((long long *)&v1);
            *((unsigned long long *)(v23 + &g_8)) = v25;
            *((unsigned long long *)(v23 + &g_10)) = v26;
            *((int *)(v23 + &g_18)) = 125;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h663552fc2210621f(&v0);
            return v23;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
}
