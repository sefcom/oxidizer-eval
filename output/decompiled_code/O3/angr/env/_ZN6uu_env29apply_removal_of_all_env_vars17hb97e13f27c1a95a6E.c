long long uu_env::apply_removal_of_all_env_vars::hb97e13f27c1a95a6(struct_0 *a0)
{
    unsigned long v0;  // [sp-0xe8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xe0]
    char v2;  // [bp-0xd8]
    char v3;  // [bp-0xd0]
    char v4;  // [bp-0xc8]
    unsigned long long v5;  // [sp-0xc0]
    unsigned long long v6;  // [sp-0xb8]
    unsigned long v7;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0xa8]
    unsigned long long v9;  // [sp-0xa0]
    unsigned long long v10;  // [sp-0x98]
    char v11;  // [bp-0x90]
    char v12;  // [bp-0x88]
    char v13;  // [bp-0x80]
    char v14;  // [bp-0x78]
    char v15;  // [bp-0x70]
    unsigned long v16;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v17;  // [sp-0x58]
    unsigned long long v18;  // [sp-0x50]
    unsigned long long v19;  // [sp-0x48]
    void* v20;  // [sp-0x40]
    unsigned long long v22;  // r15
    unsigned long long v23;  // rax
    unsigned long long v24;  // r14
    unsigned long long v25;  // rcx
    struct_1 *v27;  // r14
    unsigned long long v28;  // rbx
    unsigned long long v30;  // rax

    if (!a0->field_98)
        return v30;
    std::env::vars_os::h5a40cbb6c0e7369c(&v1);
    while (true)
    {
        _$LT$std..env..VarsOs$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h9e7e14bfb37fce37(&v11, &v1);
        v22 = *((long long *)&v11);
        if (v22 == 0x8000000000000000)
            break;
        v5 = *((long long *)&v12);
        v6 = *((long long *)&v13);
        v23 = std::sys::pal::unix::os::unsetenv::ha4eef6879b258ad1(v5, v6);
        if (v23)
        {
            v0 = v23;
            v7 = &v5;
            v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hfafdb55b12bf6f62;
            v9 = &v0;
            v10 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v16 = &anon.13f93a4aab32ca7f21c86e695234595f.6.llvm.14371064025889997723;
            v17 = 2;
            v20 = 0;
            v18 = &v7;
            v19 = 2;
            core::panicking::panic_fmt::he12d0d7468628bb4(&v16); /* do not return */
        }
        if (v22)
            __rust_dealloc(v5);
        if (*((long long *)&v14))
            __rust_dealloc(*((long long *)&v15));
    }
    v24 = *((long long *)&v2);
    v25 = *((long long *)&v4);
    if (v25 != v24)
    {
        v27 = v24 + 32;
        do
        {
            v28 = (v25 - v24) / 48;
            if (v27->field_0)
                __rust_dealloc(v27->field_-8);
            if (v27->field_-18)
                __rust_dealloc(v27->field_-20);
            v27 = &v27[1].field_-18;
        } while (v28 != 1);
    }
    v30 = *((long long *)&v3);
    if (!v30)
        return v30;
    __rust_dealloc(*((long long *)&v1));
}
