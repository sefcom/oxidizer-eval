long long uu_join::State::initialize::h5b142188072a7d5d(struct_3 *a0, unsigned long a1, char a2)
{
    unsigned long long v0;  // [sp-0xc8]
    char *v1;  // [sp-0xc0]
    unsigned long long v2;  // [sp-0xb8]
    unsigned long v3;  // [sp-0xb0]
    unsigned long long v4;  // [sp-0xa8]
    struct struct_0 **v5;  // [sp-0xa0], Other Possible Types: struct struct_1 **
    unsigned long long v6;  // [sp-0x98]
    void* v7;  // [sp-0x90]
    struct struct_0 **v8;  // [sp-0x80]
    unsigned long long v9;  // [sp-0x78]
    unsigned long v10;  // [sp-0x70]
    int v11;  // [sp-0x68]
    int v12;  // [sp-0x58]
    unsigned long long v13;  // [sp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x38]
    char v16;  // [bp-0x28]
    char v17;  // [bp-0x18]
    unsigned long long v19;  // rax
    unsigned long v20;  // rdx

    uu_join::State::read_line::h5e7f0b54a00fd724(&v14, a0);
    v19 = *((long long *)&v14);
    if (v19 == 0x8000000000000000)
    {
        return 0;
    }
    else if (v19 == 9223372036854775809)
    {
        v0 = *((long long *)&v15);
        v1 = uucore::util_name::h60d842bf27b05e82();
        v2 = v20;
        v8 = &v1;
        v9 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
        v3 = &g_532610;
        v4 = 2;
        v7 = 0;
        v5 = &v8;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        v1 = &v0;
        v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        v3 = &g_532630;
        v4 = 2;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v3);
        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
    }
    else
    {
        v10 = v19;
        *((int128_t *)&v11) = *((int128_t *)&v15);
        *((int128_t *)&v12) = *((int128_t *)&v16);
        v13 = *((long long *)&v17);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hb39c05ee85860ab5(a0, &v10);
        if (!a2)
        {
            return 0;
        }
        else if (!a0->field_10)
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0, &g_532650); /* do not return */
        }
        else
        {
            return a0->field_8->field_10;
        }
    }
}
