long long uu_rm::remove_file::h5547a9e00aec6c4f(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3)
{
    int v0;  // [bp-0x1e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x1e0]
    unsigned long long v2;  // [sp-0x1d8]
    unsigned long v3;  // [bp-0x1d0], Other Possible Types: char
    unsigned long v4;  // [sp-0x1c8], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0x1c0], Other Possible Types: unsigned short, unsigned long
    unsigned short v6;  // [sp-0x1bc]
    unsigned long v7;  // [sp-0x1b8], Other Possible Types: unsigned long long
    unsigned int v8;  // [sp-0x1ac]
    char v9;  // [bp-0x1a8], Other Possible Types: unsigned long, unsigned long long
    char v10;  // [sp-0x1a0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v11;  // [sp-0x198]
    int v12;  // [sp-0x190], Other Possible Types: unsigned long long
    void* v13;  // [sp-0x188]
    char v14;  // [bp-0x170]
    char v15;  // [bp-0x158]
    char v16;  // [bp-0xf8], Other Possible Types: unsigned long, unsigned long long
    char v17;  // [bp-0xf4]
    char v18;  // [bp-0xf0]
    unsigned long v19;  // [sp-0xe8], Other Possible Types: unsigned long long
    int v20;  // [sp-0xe0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v21;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v22;  // [sp-0xd0]
    char v23;  // [sp-0xc8]
    char v24;  // [bp-0xa8]
    char v25;  // [bp-0x90]
    unsigned long long v27;  // r13
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rax
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rsi
    unsigned long long v33;  // rsi
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rdi
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rsi
    unsigned long long v40;  // rdx
    char v41;  // r15b
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdi
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rdi
    unsigned long long v48;  // rax
    unsigned long long v49;  // rcx
    unsigned long long v50;  // rsi
    unsigned long long v51;  // rsi

    v27 = a3;
    if (!(char)v27)
    {
LABEL_48ab72:
        v48 = std::sys::pal::unix::fs::unlink::h9e34f634412c6081(a0, a1);
        if (v48)
        {
            v4 = v48;
            if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v48) != 1)
            {
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                *((uint128_t *)&v20) = g_4f3390;
                v0 = &v20;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                v9 = &g_4ee5f8;
                v10 = 2;
                v13 = 0;
                v11 = &v0;
                v12 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v51, v36);
                v20 = 1;
                v21 = a0;
                v22 = a1;
                v23 = 1;
                v0 = &v20;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v2 = &v4;
                v3 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v9 = &g_4ee658;
                v10 = 3;
                v13 = 0;
                v11 = &v0;
                v12 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
            }
            else
            {
                if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                    once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                *((uint128_t *)&v20) = g_4f3390;
                v0 = &v20;
                v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                v9 = &g_4ee5f8;
                v10 = 2;
                v13 = 0;
                v11 = &v0;
                v12 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v50, v36);
                v20 = 1;
                v21 = a0;
                v22 = a1;
                v23 = 1;
                v0 = &v20;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v9 = &g_4ee638;
                v10 = 2;
                v13 = 0;
                v11 = &v0;
                v12 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
            }
            return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf507922df81b974f(&v4) | -0x100 | 1;
        }
        else
        {
            if (!a2)
                return 0;
            uucore::features::fs::normalize_path::h8fd54ac5c837b4ed(&v0, a0, a1, v49);
            v20 = 1;
            v21 = v1;
            v22 = v2;
            v23 = 1;
            v4 = &v20;
            v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v9 = &g_4ee750;
            v10 = 2;
            v13 = 0;
            v11 = &v4;
            v12 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v9, v33, v36);
            if (v0)
                __rust_dealloc(v21);
        }
    }
    if ((unsigned int)v27 == 2)
    {
        std::sys::pal::unix::fs::lstat::hbbeb53ede4a4ae6e(&v9, a0, a1);
        if (*((int *)&v9) == 2)
        {
            v21 = v10;
            v20 = 2;
            goto LABEL_48a418;
        }
        memcpy(&v20, &v9, 176);
        if (v20 != 2)
        {
            if (!((0xf000 & *((int *)&v24)) == 0xa000))
                goto LABEL_48a425;
            if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
            *((uint128_t *)&v0) = g_4f3390;
            v4 = &v0;
            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
            v9 = &g_4ee5f8;
            v10 = 2;
            v13 = 0;
            v11 = &v4;
            v12 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v29, v36);
            v0 = 1;
            v1 = a0;
            v2 = a1;
            v3 = 1;
            v4 = &v0;
            v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v9 = &g_4ee770;
            v10 = 2;
            v13 = 0;
            v11 = &v4;
            v12 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
            v9 = &g_4ee790;
            v10 = 1;
            v11 = 8;
            *((int128_t *)&v12) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
            v7 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v30 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v7, v33, v36);
            if (v30)
            {
                v16 = v30;
                v0 = uucore::util_name::h359eff083fe53467();
                v1 = v36;
                v4 = &v0;
                v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                v9 = &g_4ee5f8;
                v10 = 2;
                v13 = 0;
                v11 = &v4;
                v12 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                v0 = &v16;
                v1 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v9 = &g_4ee7a0;
                v10 = 2;
                v13 = 0;
                v11 = &v0;
                v12 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
        }
        else
        {
LABEL_48a418:
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf507922df81b974f(&v21);
            goto LABEL_48a425;
        }
    }
    else
    {
LABEL_48a425:
        v4 = 0x1b600000000;
        v5 = 0;
        v6 = 0;
        v5 = 257;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v16, &v4, a0, a1);
        if (*((int *)&v16))
        {
            v9 = *((long long *)&v18);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf507922df81b974f(&v9);
            if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(*((long long *)&v18)) == 1)
                goto LABEL_48a84c;
            goto LABEL_48ab72;
        }
        else
        {
            v8 = *((int *)&v17);
            std::fs::File::metadata::he899a18112e6f19e(&v9, &v8);
            if (*((int *)&v9) == 2)
            {
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf507922df81b974f(&v10);
                close(v8);
                goto LABEL_48ab72;
            }
            if ((char)v27 != 2 || !(146 & *((int *)&v14)))
            {
                close(v8);
LABEL_48a84c:
                std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v9, a0, a1);
                if (*((int *)&v9) == 2)
                {
                    v21 = v10;
                    v20 = 2;
                    goto LABEL_48a8ac;
                }
                memcpy(&v20, &v9, 176);
                if (v20 != 2)
                {
                    if (!(!(v24 & 146)))
                        goto LABEL_48ab72;
                    if (*((long long *)&v25))
                    {
                        goto LABEL_48a8ac;
                    }
                    else
                    {
                        v0 = uucore::util_name::h359eff083fe53467();
                        v1 = v36;
                        v4 = &v0;
                        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                        v9 = &g_4ee5f8;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v4;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                        v0 = 1;
                        v1 = a0;
                        v2 = a1;
                        v3 = 1;
                        v4 = &v0;
                        v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                        v9 = &g_4ee800;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v4;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                        v9 = &g_4ee790;
                        v10 = 1;
                        v11 = 8;
                        *((int128_t *)&v12) = 0;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                        v7 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                        v42 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v7, v33, v36);
                        if (v42)
                        {
                            v16 = v42;
                            v0 = uucore::util_name::h359eff083fe53467();
                            v1 = v36;
                            v4 = &v0;
                            v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                            v9 = &g_4ee5f8;
                            v10 = 2;
                            v13 = 0;
                            v11 = &v4;
                            v12 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                            v0 = &v16;
                            v1 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                            v9 = &g_4ee7a0;
                            v10 = 2;
                            v13 = 0;
                            v11 = &v0;
                            v12 = 1;
                            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                            std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                        }
                    }
                }
                else
                {
LABEL_48a8ac:
                    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    *((uint128_t *)&v0) = g_4f3390;
                    v4 = &v0;
                    v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                    v9 = &g_4ee5f8;
                    v10 = 2;
                    v13 = 0;
                    v11 = &v4;
                    v12 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v39, v40);
                    v0 = 1;
                    v1 = a0;
                    v2 = a1;
                    v3 = 1;
                    v4 = &v0;
                    v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v9 = &g_4ee820;
                    v10 = 2;
                    v13 = 0;
                    v11 = &v4;
                    v12 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                    v9 = &g_4ee790;
                    v10 = 1;
                    v11 = 8;
                    *((int128_t *)&v12) = 0;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                    v7 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                    v43 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v7, v33, v36);
                    if (v43)
                    {
                        v16 = v43;
                        v0 = uucore::util_name::h359eff083fe53467();
                        v1 = v36;
                        v4 = &v0;
                        v5 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                        v9 = &g_4ee5f8;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v4;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                        v0 = &v16;
                        v1 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v9 = &g_4ee7a0;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v0;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                    }
                    v41 = uucore::read_yes::hf72ff1df5ee554ec(v47, v33, v36) & 4294967295 & 4294967295;
                    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf507922df81b974f(&v21);
                    goto LABEL_48ab69;
                    goto LABEL_48ab69;
                }
            }
            else
            {
                if (!*((long long *)&v15))
                {
                    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    *((uint128_t *)&v20) = g_4f3390;
                    v0 = &v20;
                    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                    v9 = &g_4ee5f8;
                    v10 = 2;
                    v13 = 0;
                    v11 = &v0;
                    v12 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v32, v36);
                    v20 = 1;
                    v21 = a0;
                    v22 = a1;
                    v23 = 1;
                    v0 = &v20;
                    v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v9 = &g_4ee7c0;
                    v10 = 2;
                    v13 = 0;
                    v11 = &v0;
                    v12 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                    v9 = &g_4ee790;
                    v10 = 1;
                    v11 = 8;
                    *((int128_t *)&v12) = 0;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                    v19 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                    v35 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v19, v33, v36);
                    if (v35)
                    {
                        v7 = v35;
                        v20 = uucore::util_name::h359eff083fe53467();
                        v21 = v36;
                        v0 = &v20;
                        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                        v9 = &g_4ee5f8;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v0;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                        v20 = &v7;
                        v21 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v9 = &g_4ee7a0;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v20;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                    }
                }
                else
                {
                    if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
                        once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
                    *((uint128_t *)&v20) = g_4f3390;
                    v0 = &v20;
                    v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                    v9 = &g_4ee5f8;
                    v10 = 2;
                    v13 = 0;
                    v11 = &v0;
                    v12 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v31, v36);
                    v20 = 1;
                    v21 = a0;
                    v22 = a1;
                    v23 = 1;
                    v0 = &v20;
                    v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v9 = &g_4ee7e0;
                    v10 = 2;
                    v13 = 0;
                    v11 = &v0;
                    v12 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                    v9 = &g_4ee790;
                    v10 = 1;
                    v11 = 8;
                    *((int128_t *)&v12) = 0;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                    v19 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                    v34 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v19, v33, v36);
                    if (v34)
                    {
                        v7 = v34;
                        v20 = uucore::util_name::h359eff083fe53467();
                        v21 = v36;
                        v0 = &v20;
                        v1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he3288808b774ae5e;
                        v9 = &g_4ee5f8;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v0;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                        v20 = &v7;
                        v21 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v9 = &g_4ee7a0;
                        v10 = 2;
                        v13 = 0;
                        v11 = &v20;
                        v12 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v9, v33, v36);
                        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                    }
                }
                v41 = uucore::read_yes::hf72ff1df5ee554ec(v37, v38, v36);
                close(v8);
LABEL_48ab69:
                if (!v41)
                    return 0;
                goto LABEL_48ab72;
            }
        }
    }
    if (!(char)uucore::read_yes::hf72ff1df5ee554ec(v44, v45, v46))
        return 0;
    goto LABEL_48ab72;
}
