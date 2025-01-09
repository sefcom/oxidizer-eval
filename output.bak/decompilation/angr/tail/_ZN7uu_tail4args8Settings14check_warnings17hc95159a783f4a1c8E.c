long long uu_tail::args::Settings::check_warnings::hc95159a783f4a1c8(struct_1 *a0)
{
    unsigned long v0;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x68]
    struct struct_0 **v2;  // [sp-0x60], Other Possible Types: unsigned long long
    int v3;  // [sp-0x58], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x50]
    char *v5;  // [sp-0x40]
    unsigned long long v6;  // [sp-0x38]
    unsigned long v7;  // [sp-0x30], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x28]
    unsigned long long v10;  // r14
    unsigned long long v11;  // rax
    unsigned long v12;  // rdx
    unsigned int v13;  // ebp

    v10 = a0->field_4c;
    if (a0->field_48)
    {
        v11 = v10 & 4294967295;
        switch ((unsigned int)v11)
        {
        case 0:
            v7 = uucore::util_name::h60d842bf27b05e82();
            v8 = v12;
            v5 = &v7;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v0 = &g_5bb5c0;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v0 = &g_5bb5f0;
            v1 = 1;
            v2 = 8;
            *((int128_t *)&v3) = 0;
            v11 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v10 = 0;
            break;
        case 2:
            v7 = uucore::util_name::h60d842bf27b05e82();
            v8 = v12;
            v5 = &v7;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v0 = &g_5bb5c0;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v0 = &g_5bb5e0;
            v1 = 1;
            v2 = 8;
            *((int128_t *)&v3) = 0;
            v11 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v10 = -94;
            break;
        default:
            goto LABEL_4f9a04;
        }
    }
LABEL_4f9a04:
    v13 = a0->field_44;
    if (!v13)
    {
        if ((char)v10 == 2)
            return v11;
    }
    else
    {
        if ((char)v10 == 2)
        {
            v7 = uucore::util_name::h60d842bf27b05e82();
            v8 = v12;
            v5 = &v7;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v0 = &g_5bb5c0;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            vvar_352{stack -112} = &g_5bb620;
            vvar_353{stack -104} = 1;
            vvar_354{stack -96} = 8;
            *((int128_t *)&v3) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            return v11;
        }
        else if (!uu_tail::platform::unix::supports_pid_checks::h8a33793bec8fc4a9(v13))
        {
            v7 = uucore::util_name::h60d842bf27b05e82();
            v8 = v12;
            v5 = &v7;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
            v0 = &g_5bb5c0;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v0 = &g_5bb610;
            v1 = 1;
            v2 = 8;
            *((int128_t *)&v3) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        }
    }
    v11 = uu_tail::args::Settings::has_stdin::h99629f892128a309(a0);
    if (!(char)v11)
        return v11;
    if (!v13 && !(char)v10 && a0->field_28 == 1)
    {
        same_file::Handle::stdin::hcbeef53980d87d0e(&v0);
        v11 = core::result::Result$LT$T$C$E$GT$::map_or::h697c815cf75a0919(&v0);
        if ((char)v11)
            return v11;
    }
    v0 = std::io::stdio::stdin::h7215cc131abb55d8();
    v11 = std::sys::pal::unix::io::is_terminal::h77c9f849b4b1037f();
    if ((char)v11)
    {
        v7 = uucore::util_name::h60d842bf27b05e82();
        v8 = v12;
        v5 = &v7;
        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1fe54d61ef828b4b;
        v0 = &g_5bb5c0;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        v0 = &g_5bb620;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        v11 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
        return v11;
    }
    return v11;
}
