long long uu_tail::args::Settings::check_warnings::h1d0939100b3dae9c(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xf0]
    int v2;  // [bp-0xe8], Other Possible Types: unsigned int
    unsigned int v3;  // [sp-0xd8]
    char v4;  // [sp-0xd4]
    unsigned long v5;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0xc8]
    unsigned long long v7;  // [sp-0xc0]
    int v8;  // [sp-0xb8], Other Possible Types: unsigned long long
    void* v9;  // [sp-0xb0]
    char v10;  // [bp-0x98]
    void* v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rdx
    unsigned int v16;  // ebp
    char v17;  // r15b
    unsigned long long v18;  // r14
    unsigned long long v20;  // rsi
    unsigned long long v21;  // rsi
    unsigned long long v23;  // rsi
    struct_0 *v24;  // rdx
    unsigned long v28;  // rdi
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdx

    if (a0->field_48)
    {
        v12 = a0->field_4c;
        switch ((unsigned int)v12)
        {
        case 0:
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v2) = g_563010;
            v0 = &v2;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h821e6cd8794b5289;
            v5 = &g_55ba60;
            v6 = 2;
            v9 = 0;
            v7 = &v0;
            v8 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, a1, a2);
            v13 = &g_55ba80;
            break;
        case 2:
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v2) = g_563010;
            v0 = &v2;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h821e6cd8794b5289;
            v5 = &g_55ba60;
            v6 = 2;
            v9 = 0;
            v7 = &v0;
            v8 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, a1, a2);
            v13 = &g_55ba90;
            break;
        default:
            goto LABEL_4a4c16;
        }
        v5 = v13;
        v6 = 1;
        v7 = 8;
        *((int128_t *)&v8) = 0;
        v12 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, v14, v15);
    }
LABEL_4a4c16:
    v16 = a0->field_44;
    v17 = a0->field_4c;
    if (!v16)
    {
        if (v17 == 2)
            return v12;
    }
    else
    {
        if (v17 == 2)
        {
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v2) = g_563010;
            v0 = &v2;
            v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h821e6cd8794b5289;
            v5 = &g_55ba60;
            v6 = 2;
            v9 = 0;
            v7 = &v0;
            v8 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, a1, a2);
            vvar_506{stack -208} = &g_55bac0;
            vvar_507{stack -200} = 1;
            vvar_508{stack -192} = 8;
            *((int128_t *)&v8) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, v30, v31);
            return v12;
        }
        else if (kill(v16, 0))
        {
            v18 = (unsigned int)std::sys::pal::unix::os::errno::hddfd8da9c36b1a59();
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17hd9352982e8c4d3fcE.llvm.4276166692134022055(v18 * 0x100000000 | 2);
            if ((unsigned int)v18 == 38)
            {
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                *((uint128_t *)&v2) = g_563010;
                v0 = &v2;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h821e6cd8794b5289;
                v5 = &g_55ba60;
                v6 = 2;
                v9 = 0;
                v7 = &v0;
                v8 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, v20, v15);
                v5 = &g_55baa0;
                v6 = 1;
                v7 = 8;
                *((int128_t *)&v8) = 0;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, v21, v15);
            }
        }
    }
    v12 = a0->field_28;
    v23 = v12 * 48;
    do
    {
        v24 = a0->field_20;
        if (!v23)
            return v12;
    } while ((v23 -= 48, v24->field_18 != 0x8000000000000000));
    if (!v16 && !v17 && v12 == 1)
    {
        v2 = 0;
        std::fs::File::metadata::he899a18112e6f19e(&v5, &v2);
        if ((int)v5 == 2)
        {
            close(0);
            ::0x4a2420::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd9352982e8c4d3fc(v6);
            goto LABEL_4a4dd2;
        }
        *((int128_t *)&v2) = *((int128_t *)&v9);
        v3 = 0;
        v4 = 1;
        std::fs::File::metadata::he899a18112e6f19e(&v5, &v3);
        if ((int)v5 != 2)
        {
            goto LABEL_4a4f21;
        }
        else
        {
            ::0x4a2420::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hd9352982e8c4d3fc(v6);
            if (!v4)
            {
                v28 = v3;
                if ((unsigned int)v28 != -1)
                    close(v28);
            }
            else
            {
LABEL_4a4f21:
                v3 = -1;
                if (v3 == -1)
                {
                    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
                }
                else if ((unsigned int)(0xf000 & *((int *)&v10)) != 0x8000)
                {
                    return v12;
                }
            }
        }
    }
LABEL_4a4dd2:
    std::io::stdio::stdin::h7215cc131abb55d8();
    v12 = isatty(0);
    if (!(unsigned int)v12)
        return v12;
    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    *((uint128_t *)&v2) = g_563010;
    v0 = &v2;
    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h821e6cd8794b5289;
    v5 = &g_55ba60;
    v6 = 2;
    v9 = 0;
    v7 = &v0;
    v8 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, v29, v15);
    v5 = &g_55bac0;
    v6 = 1;
    v7 = 8;
    *((int128_t *)&v8) = 0;
    v12 = std::io::stdio::_eprint::hcdfeec148c7134f7(&v5, v30, v31);
    return v12;
}
