long long uu_tail::args::Settings::check_warnings::h544db5b344938098(struct_0 *a0, unsigned long a1, unsigned long a2)
{
    unsigned long v0;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x60]
    unsigned long long v2;  // [sp-0x58]
    int v3;  // [sp-0x50], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x48]
    unsigned long v5;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x30]
    unsigned long v7;  // [sp-0x28], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x20]
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rsi
    unsigned int v14;  // edi
    unsigned long long v16;  // rdx

    v10 = a0->field_4c;
    if (a0->field_48)
    {
        v11 = v10 & 4294967295;
        switch ((unsigned int)v11)
        {
        case 0:
            v7 = uucore::util_name::h412db5e565a079f3();
            v8 = v12;
            v5 = &v7;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9de93bb5e757eea5;
            v0 = &g_5bd590;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v13, v12);
            v0 = &g_5bd5b0;
            v1 = 1;
            v2 = 8;
            *((int128_t *)&v3) = 0;
            v11 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v13, v12);
            v10 = 0;
            break;
        case 2:
            v7 = uucore::util_name::h412db5e565a079f3();
            v8 = v12;
            v5 = &v7;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9de93bb5e757eea5;
            v0 = &g_5bd590;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v13, v12);
            v0 = &g_5bd5c0;
            v1 = 1;
            v2 = 8;
            *((int128_t *)&v3) = 0;
            v11 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v13, v12);
            v10 = v10 | -0x100 | 2;
            break;
        default:
            goto LABEL_4fa924;
        }
    }
LABEL_4fa924:
    v14 = a0->field_44;
    if (!a0->field_44)
    {
        if ((char)v10 == 2)
            return v11;
        v11 = uu_tail::args::Settings::has_stdin::hd1e6ddea9a34c71b(a0);
        if (!(char)v11)
        {
            return v11;
        }
        else if (!(char)v10 && a0->field_28 == 1)
        {
            same_file::Handle::stdin::h78442235bfae013a(&v0);
            v11 = core::result::Result$LT$T$C$E$GT$::map_or::hb2e3d8eb53182f02(&v0);
            if ((char)v11)
                return v11;
        }
    }
    else
    {
        if ((char)v10 == 2)
        {
            v7 = uucore::util_name::h412db5e565a079f3();
            v8 = v12;
            v5 = &v7;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9de93bb5e757eea5;
            v0 = &g_5bd590;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v13, v12);
            vvar_367{stack -104} = &g_5bd5f0;
            vvar_368{stack -96} = 1;
            vvar_369{stack -88} = 8;
            *((int128_t *)&v3) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v13, v16);
            return v11;
        }
        if (!(char)uu_tail::platform::unix::supports_pid_checks::h3878d549fa9a44cc(v14))
        {
            v7 = uucore::util_name::h412db5e565a079f3();
            v8 = v12;
            v5 = &v7;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9de93bb5e757eea5;
            v0 = &g_5bd590;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v13, v12);
            v0 = &g_5bd5d0;
            v1 = 1;
            v2 = 8;
            *((int128_t *)&v3) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v13, v12);
        }
        v11 = uu_tail::args::Settings::has_stdin::hd1e6ddea9a34c71b(a0);
        if (!(char)v11)
            return v11;
    }
    v0 = std::io::stdio::stdin::h7215cc131abb55d8();
    v11 = std::sys::pal::unix::io::is_terminal::h6d6c158cf0e9be26();
    if ((char)v11)
    {
        v7 = uucore::util_name::h412db5e565a079f3();
        v8 = v12;
        v5 = &v7;
        v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9de93bb5e757eea5;
        v0 = &g_5bd590;
        v1 = 2;
        v4 = 0;
        v2 = &v5;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v13, v12);
        v0 = &g_5bd5f0;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        v11 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v13, v16);
        return v11;
    }
    return v11;
}
