long long uu_rm::remove_dir::haa21060f8526e830(unsigned long long a0, unsigned long long a1, char a2[7])
{
    int v0;  // [bp-0x1e0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x1d8]
    unsigned long long v2;  // [sp-0x1d0]
    char v3;  // [bp-0x1c8]
    unsigned long v4;  // [sp-0x1c0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x1b8]
    unsigned long long *v6;  // [sp-0x1b0], Other Possible Types: unsigned long, unsigned long long
    char v7;  // [sp-0x1a8]
    unsigned long long *v8;  // [sp-0x1a0], Other Possible Types: unsigned long, unsigned long long
    char v10;  // [bp-0x190], Other Possible Types: unsigned long long
    unsigned long long *v11;  // [sp-0x188], Other Possible Types: unsigned long, unsigned long long
    char *v12;  // [sp-0x180], Other Possible Types: unsigned long long
    int v13;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x170]
    char v15;  // [sp-0xe0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v16;  // [sp-0xd8], Other Possible Types: unsigned long long
    char v19;  // [bp-0xa8]
    char v21;  // bpl
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rsi
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rsi
    unsigned long long v28;  // rdi
    unsigned long long v29;  // rsi
    char v30;  // bpl
    char v32;  // dl

    v21 = a2[6];
    if (v21)
    {
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v10, a0, a1);
        if (*((int *)&v10) == 2)
        {
            v16 = v11;
            v15 = 2;
            goto LABEL_4897bd;
        }
        memcpy(&v15, &v10, 176);
        if (v15 == 2)
        {
LABEL_4897bd:
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf507922df81b974f(&v16);
            goto LABEL_4897ca;
        }
        if (!(v19 & 128))
        {
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v0) = g_4f3390;
            v4 = &v0;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
            v10 = &g_4ee5f8;
            v11 = 2;
            v14 = 0;
            v12 = &v4;
            v13 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v22, v23);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            v4 = &v0;
            v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v10 = &g_4ee840;
            v11 = 2;
            v14 = 0;
            v12 = &v4;
            v13 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v27, v23);
            v10 = &g_4ee790;
            v11 = 1;
            v12 = 8;
            *((int128_t *)&v13) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v27, v23);
            v6 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v25 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v6, v27, v23);
            if (v25)
            {
                v8 = v25;
                v0 = uucore::util_name::h359eff083fe53467();
                v1 = v23;
                v4 = &v0;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                v10 = &g_4ee5f8;
                v11 = 2;
                v14 = 0;
                v12 = &v4;
                v13 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v27, v23);
                v0 = &v8;
                v1 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v10 = &g_4ee7a0;
                v11 = 2;
                v14 = 0;
                v12 = &v0;
                v13 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v27, v23);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
        }
        else
        {
            if (!(v21 == 2))
                goto LABEL_4897ca;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v0) = g_4f3390;
            v4 = &v0;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
            v10 = &g_4ee5f8;
            v11 = 2;
            v14 = 0;
            v12 = &v4;
            v13 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v24, v23);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            v4 = &v0;
            v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v10 = &g_4ee860;
            v11 = 2;
            v14 = 0;
            v12 = &v4;
            v13 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v27, v23);
            v10 = &g_4ee790;
            v11 = 1;
            v12 = 8;
            *((int128_t *)&v13) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v27, v23);
            v6 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v26 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v6, v27, v23);
            if (v26)
            {
                v8 = v26;
                v0 = uucore::util_name::h359eff083fe53467();
                v1 = v23;
                v4 = &v0;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                v10 = &g_4ee5f8;
                v11 = 2;
                v14 = 0;
                v12 = &v4;
                v13 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v27, v23);
                v0 = &v8;
                v1 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v10 = &g_4ee7a0;
                v11 = 2;
                v14 = 0;
                v12 = &v0;
                v13 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v10, v27, v23);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
        }
        if (!(char)uucore::read_yes::hf72ff1df5ee554ec(v28, v29, v23))
            return 0;
    }
LABEL_4897ca:
    std::sys::pal::unix::fs::readdir::h9e1c3c12d516a70c(&v10, a0, a1);
    v30 = (char)v11;
    v32 = (v30 != 2 ? (char)((-0x100 | v30) & 4294967295 & 4294967295) : 2);
    v6 = v8;
    v7 = v32;
    if (v30 == 2)
        goto LABEL_0x489808;
    else
        goto LABEL_0x48991d;
}
