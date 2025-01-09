char uu_rm::handle_writable_directory::hdb36aba62dc09786(unsigned long a0, unsigned long a1, char a2, char a3)
{
    unsigned long v0;  // [sp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x98]
    struct struct_0 **v2;  // [sp-0x90], Other Possible Types: struct struct_1 **, unsigned long long
    int v3;  // [sp-0x88], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x80]
    struct struct_0 **v5;  // [sp-0x70]
    unsigned long long v6;  // [sp-0x68]
    unsigned long v7;  // [sp-0x60], Other Possible Types: unsigned long long
    char *v8;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x50]
    unsigned long long v10;  // [sp-0x48]
    char v11;  // [sp-0x40]
    unsigned long v12;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long v14;  // rdx
    unsigned long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax

    if (a3 >= 0)
    {
        v8 = uucore::util_name::h60d842bf27b05e82();
        v9 = v14;
        v5 = &v8;
        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
        v0 = &g_527970;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        v8 = 1;
        v9 = a0;
        v10 = a1;
        v11 = 1;
        v5 = &v8;
        v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v0 = &g_527bb8;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        v0 = &g_527b08;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        v12 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
        v16 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v12);
        if (v16)
        {
            v7 = v16;
            v8 = uucore::util_name::h60d842bf27b05e82();
            v9 = v14;
            v5 = &v8;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v0 = &g_527970;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v8 = &v7;
            v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v0 = &g_527b18;
            v1 = 2;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
        }
    }
    else if (a2 != 2)
    {
        return 1;
    }
    else
    {
        v8 = uucore::util_name::h60d842bf27b05e82();
        v9 = v15;
        v5 = &v8;
        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
        v0 = &g_527970;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        v8 = 1;
        v9 = a0;
        v10 = a1;
        v11 = 1;
        v5 = &v8;
        v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v0 = &g_527bd8;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        v0 = &g_527b08;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        v12 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
        v17 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v12);
        if (v17)
        {
            v7 = v17;
            v8 = uucore::util_name::h60d842bf27b05e82();
            v9 = v15;
            v5 = &v8;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v0 = &g_527970;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v8 = &v7;
            v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v0 = &g_527b18;
            v1 = 2;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
        }
    }
    uucore::read_yes::hc350e858ab85cf03();
    return 1;
}
