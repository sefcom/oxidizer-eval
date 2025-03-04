long long uu_tail::args::Settings::check_warnings::hc95159a783f4a1c8(struct_0 *a0)
{
    unsigned long long v0;  // [sp-0x70], Other Possible Types: unsigned long
    unsigned long v1;  // [sp-0x70]
    unsigned long long v2;  // [sp-0x68]
    struct struct_1 **v3;  // [sp-0x60], Other Possible Types: unsigned long long
    int v4;  // [sp-0x58], Other Possible Types: unsigned long long
    void* v5;  // [sp-0x50]
    char *v6;  // [sp-0x40]
    unsigned long long v7;  // [sp-0x38]
    unsigned long v8;  // [sp-0x30]
    unsigned long long v9;  // [sp-0x28]
    void* v11;  // r14
    unsigned long long v12;  // rax
    unsigned long v13;  // rdx
    unsigned int v14;  // ebp

    v11 = a0->field_4c;
    if (a0->field_48)
    {
        v12 = v11 & 4294967295;
        switch ((unsigned int)v12)
        {
        case 0:
            v8 = uucore::util_name::h60d842bf27b05e82();
            v9 = v13;
            v6 = &v8;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v0 = &g_5bb5c0;
            v2 = 2;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v1 = &g_5bb5f0;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v4) = 0;
            v12 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v11 = 0;
            break;
        case 2:
            v8 = uucore::util_name::h60d842bf27b05e82();
            v9 = v13;
            v6 = &v8;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v0 = &g_5bb5c0;
            v2 = 2;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v1 = &g_5bb5e0;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v4) = 0;
            v12 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v11 = &g_4cbb02;
            break;
        default:
            goto LABEL_4f9a04;
        }
    }
LABEL_4f9a04:
    v14 = a0->field_44;
    if (!v14)
    {
        if ((char)v11 == 2)
            return v12;
    }
    else
    {
        if ((char)v11 == 2)
        {
            v8 = uucore::util_name::h60d842bf27b05e82();
            v9 = v13;
            v6 = &v8;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v0 = &g_5bb5c0;
            v2 = 2;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            vvar_351{stack -112} = &g_5bb620;
            vvar_352{stack -104} = 1;
            vvar_353{stack -96} = 8;
            *((uint128_t *)&v4) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            return v12;
        }
        else if (!uu_tail::platform::unix::supports_pid_checks::h8a33793bec8fc4a9(v14))
        {
            v8 = uucore::util_name::h60d842bf27b05e82();
            v9 = v13;
            v6 = &v8;
            v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v0 = &g_5bb5c0;
            v2 = 2;
            v5 = 0;
            v3 = &v6;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v1 = &g_5bb610;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v4) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        }
    }
    v12 = uu_tail::args::Settings::has_stdin::h99629f892128a309(a0);
    if (!(char)v12)
        return v12;
    if (!v14 && !(char)v11 && a0->field_28 == 1)
    {
        same_file::Handle::stdin::hcbeef53980d87d0e(&v0);
        v12 = core::result::Result$LT$T$C$E$GT$::map_or::h697c815cf75a0919(&v0);
        if ((char)v12)
            return v12;
    }
    v0 = std::io::stdio::stdin::h7215cc131abb55d8();
    v12 = std::sys::pal::unix::io::is_terminal::h77c9f849b4b1037f();
    if ((char)v12)
    {
        v8 = uucore::util_name::h60d842bf27b05e82();
        v9 = v13;
        v6 = &v8;
        v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        v0 = &g_5bb5c0;
        v2 = 2;
        v5 = 0;
        v3 = &v6;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        v0 = &g_5bb620;
        v2 = 1;
        v3 = 8;
        *((uint128_t *)&v4) = 0;
        v12 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        return v12;
    }
    return v12;
}
