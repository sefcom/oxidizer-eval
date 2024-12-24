long long uu_join::State::initialize::hb6d0f1410e5ab35a(struct_1 *a0, unsigned long long a1, char a2)
{
    unsigned long long v0;  // [sp-0xc8]
    unsigned long v1;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xb8]
    unsigned long v3;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0xa8]
    unsigned long long v5;  // [sp-0xa0]
    unsigned long long v6;  // [sp-0x98]
    void* v7;  // [sp-0x90]
    unsigned long v8;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x78]
    unsigned long v10;  // [sp-0x70], Other Possible Types: unsigned long long
    int v11;  // [sp-0x68]
    int v12;  // [sp-0x58]
    unsigned long long v13;  // [sp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x38]
    char v16;  // [bp-0x28]
    char v17;  // [bp-0x18]
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rsi

    uu_join::State::read_line::h176ee2b761b8f18f(&v14, a0, a1);
    v19 = *((long long *)&v14);
    if (v19 == 0x8000000000000000)
    {
        return 0;
    }
    else if (v19 == 9223372036854775809)
    {
        v0 = *((long long *)&v15);
        v1 = uucore::util_name::h412db5e565a079f3();
        v2 = v21;
        v8 = &v1;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h338ded74354255ed;
        v3 = &g_5331c8;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v22, v21);
        v1 = &v0;
        v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v3 = &g_5331e8;
        v4 = 2;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3, v22, v21);
        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
    }
    else
    {
        v10 = v19;
        *((int128_t *)&v11) = *((int128_t *)&v15);
        *((int128_t *)&v12) = *((int128_t *)&v16);
        v13 = *((long long *)&v17);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h47cead3b1311c3c9(a0, &v10, v20);
        if (!a2)
        {
            return 0;
        }
        else if (!a0->field_10)
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(); /* do not return */
        }
        else
        {
            return a0->field_8->field_10;
        }
    }
}
