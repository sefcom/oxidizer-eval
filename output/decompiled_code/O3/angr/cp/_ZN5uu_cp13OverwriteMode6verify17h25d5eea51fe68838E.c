long long uu_cp::OverwriteMode::verify::h25d5eea51fe68838(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    char v0;  // [bp-0x200], Other Possible Types: unsigned long, unsigned long long
    unsigned long v1;  // [sp-0x1f8], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0x1f0], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x1e8], Other Possible Types: unsigned long
    unsigned long v4;  // [sp-0x1e0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x1d8]
    unsigned long long v6;  // [sp-0x1d0]
    char v7;  // [bp-0x1c8], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x1c0]
    unsigned long long v9;  // [sp-0x1b8]
    unsigned long v10;  // [sp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x1a8]
    unsigned long long v12;  // [sp-0x1a0]
    char v13;  // [bp-0x198], Other Possible Types: unsigned long, unsigned long long
    unsigned long v14;  // [sp-0x190], Other Possible Types: unsigned long long
    void* v15;  // [sp-0x188], Other Possible Types: unsigned long long
    int v16;  // [sp-0x180], Other Possible Types: unsigned long long
    void* v17;  // [sp-0x178], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0x170]
    char v19;  // [sp-0x168]
    unsigned long v20;  // [sp-0xe8], Other Possible Types: unsigned long long
    int v21;  // [sp-0xe0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v22;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0xd0]
    unsigned long long v24;  // [bp-0xc8], Other Possible Types: char
    void* v25;  // [sp-0xc0]
    char v26;  // [bp-0xa8]
    unsigned long long v28;  // rax
    unsigned long long v29;  // r12
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rsi
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rsi
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rdi
    unsigned long long v39;  // rax
    unsigned long long v40;  // rdi

    if ((char)a1)
    {
        if ((unsigned int)(a1 & 4294967295) != 1)
        {
            if (a4)
            {
                v21 = 1;
                v22 = a2;
                v23 = a3;
                v24 = 1;
                v4 = &v21;
                v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v13 = &g_555470;
                v14 = 2;
                v17 = 0;
                v15 = &v4;
                v16 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v13, a1, a2);
            }
            a0->field_0 = 8;
            a0->field_8 = 0;
            return v28;
        }
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v13, a2, a3);
        if (*((int *)&v13) == 2)
        {
            v22 = v14;
            v21 = 2;
            goto LABEL_4b8bae;
        }
        memcpy(&v21, &v13, 176);
        if (v21 == 2)
        {
LABEL_4b8bae:
            _ZN4core3ptr42drop_in_place$LT$std..io..error..Error$GT$17h94632dc869fb5d57E.llvm.6903499209109998583(&v22);
            goto LABEL_4b8bbb;
        }
        else
        {
            v29 = *((int *)&v26);
            if ((char)v29 < 0)
                goto LABEL_4b8bbb;
            v3 = (unsigned int)v29 & 3967;
            v10 = &v3;
            v11 = core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::hf46ebcb02778fa65;
            v13 = 2;
            v15 = 0;
            v16 = 4;
            v17 = 0;
            v18 = 34359738400;
            v19 = 3;
            v4 = &g_418dc0;
            v5 = 1;
            v8 = &v13;
            v9 = 1;
            v6 = &v10;
            v7 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v0, &v4);
            uucore::features::fs::display_permissions_unix::hf3e9e67c49049938(&v13, v29 & 4294967295, 0);
            if (v10 != 0x8000000000000000)
            {
                v10 = v0;
                v11 = v1;
                v12 = v2;
                v0 = v13;
                v1 = v14;
                v2 = v15;
                v0 = v0;
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                *((uint128_t *)&v21) = g_55c040;
                v4 = &v21;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
                v13 = &g_555318;
                v14 = 2;
                v17 = 0;
                v15 = &v4;
                v16 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v0, v12);
                v4 = 1;
                v5 = a2;
                v6 = a3;
                v7 = 1;
                v13 = &v4;
                v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v15 = &v10;
                v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v17 = &v0;
                v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v21 = &g_555400;
                v22 = 4;
                v25 = 0;
                v23 = &v13;
                v24 = 3;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v21, v32, v33);
                v13 = &g_555440;
                v14 = 1;
                v15 = 8;
                *((int128_t *)&v16) = 0;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v32, v33);
                v20 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v36 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v20, v32, v33);
                if (v36)
                {
                    v3 = v36;
                    v21 = uucore::util_name::h359eff083fe53467();
                    v22 = v33;
                    v4 = &v21;
                    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
                    v13 = &g_555318;
                    v14 = 2;
                    v17 = 0;
                    v15 = &v4;
                    v16 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v32, v33);
                    v21 = &v3;
                    v22 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v13 = &g_555338;
                    v14 = 2;
                    v17 = 0;
                    v15 = &v21;
                    v16 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v32, v33);
                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                }
                v39 = uucore::read_yes::hf72ff1df5ee554ec(v38, v32, v33);
                if (v10)
                    v28 = __rust_dealloc(v11);
                if (!(char)v39)
                {
                    a0->field_0 = 8;
                    a0->field_8 = 1;
                    return v28;
                }
            }
            else
            {
LABEL_4b8bbb:
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                *((uint128_t *)&v21) = g_55c040;
                v4 = &v21;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
                v13 = &g_555318;
                v14 = 2;
                v17 = 0;
                v15 = &v4;
                v16 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v30, v31);
                v21 = 1;
                v22 = a2;
                v23 = a3;
                v24 = 1;
                v4 = &v21;
                v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v13 = &g_555450;
                v14 = 2;
                v17 = 0;
                v15 = &v4;
                v16 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v34, v35);
                v13 = &g_555440;
                v14 = 1;
                v15 = 8;
                *((int128_t *)&v16) = 0;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v34, v35);
                v10 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v37 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v10, v34, v35);
                if (v37)
                {
                    v0 = v37;
                    v21 = uucore::util_name::h359eff083fe53467();
                    v22 = v35;
                    v4 = &v21;
                    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf5c7cfdfb3184423;
                    v13 = &g_555318;
                    v14 = 2;
                    v17 = 0;
                    v15 = &v4;
                    v16 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v34, v35);
                    v21 = &v0;
                    v22 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v13 = &g_555338;
                    v14 = 2;
                    v17 = 0;
                    v15 = &v21;
                    v16 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v13, v34, v35);
                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                }
                v28 = uucore::read_yes::hf72ff1df5ee554ec(v40, v34, v35);
                if (!(char)v28)
                {
                    a0->field_0 = 8;
                    a0->field_8 = 1;
                    return v28;
                }
            }
        }
    }
    a0->field_0 = 13;
    return v28;
}
