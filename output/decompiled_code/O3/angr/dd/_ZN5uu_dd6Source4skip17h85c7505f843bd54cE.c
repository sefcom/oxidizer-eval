long long uu_dd::Source::skip::h85c7505f843bd54c(unsigned int *a0, unsigned long a1)
{
    unsigned long v0;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xe0]
    int v4;  // [sp-0xd8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0xd0]
    unsigned long v6;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0xb8]
    int v9;  // [sp-0xb0], Other Possible Types: unsigned long long
    void* v10;  // [sp-0xa8]
    char v11;  // [bp-0x90]
    unsigned int v13;  // eax
    void* v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rsi

    v13 = *(a0);
    if (v13)
    {
        if (v13 != 1)
        {
            v6 = a0 + 1;
            v7 = a1;
            v14 = std::io::copy::generic_copy::haf225924e79439d8(&v6, &v6);
            return v14;
        }
        std::fs::File::metadata::he899a18112e6f19e(&v6, v6);
        if ((int)v6 == 2)
        {
            v1 = v7;
            goto LABEL_499292;
        }
        else
        {
            if ((0xf000 & *((int *)&v11)) == 0x6000)
            {
                if (!(_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(v6, 1)) && (!(_$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(v6, 0)) || !(v15)))
                {
                    if (v15 < a1)
                    {
                        v4 = uucore::util_name::h359eff083fe53467();
                        v5 = v15;
                        v2 = &v4;
                        v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7f7f90908f26f7ca;
                        v6 = &g_515c08;
                        v7 = 2;
                        v10 = 0;
                        v8 = &v2;
                        v9 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v18, v15);
                        v6 = &g_515c28;
                        v7 = 1;
                        v8 = 8;
                        *((int128_t *)&v9) = 0;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v18, v15);
                        _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108 = 1;
                        if (CasCmpNE(_ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108, _ZN6uucore4mods5error9EXIT_CODE17h7e79f2b7e24d7d70E.0.llvm.3928628070634382108))
                            goto LABEL_0x49942c;
                        return 0;
                    }
                }
                else
                {
                    v1 = v16;
LABEL_499292:
                    v0 = 2;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0c50372ca64a7fc0(&v1);
                }
            }
            v0 = v6;
            v1 = a1;
            v14 = std::io::copy::generic_copy::haf225924e79439d8(&v0, &v6, v17);
            if (v14)
                return v14;
            if (v15 >= a1)
                return v14;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v4) = g_51be68;
            v2 = &v4;
            v3 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7f7f90908f26f7ca;
            v6 = &g_515c08;
            v7 = 2;
            v10 = 0;
            v8 = &v2;
            v9 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v19, v15);
            v6 = &g_515c38;
            v7 = 1;
            v8 = 8;
            *((int128_t *)&v9) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v6, v20, v15);
            return v14;
        }
    }
    else if (a1 < 0)
    {
        core::result::unwrap_failed::h39784290e544308e(); /* do not return */
    }
    else
    {
        v14 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::hf141ef1001f771f9(a0 + 1, 2);
        return v14;
    }
}
