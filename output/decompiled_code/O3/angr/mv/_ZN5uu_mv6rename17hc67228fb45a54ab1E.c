long long uu_mv::rename::hc67228fb45a54ab1(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[56], unsigned long long a5)
{
    unsigned int v0;  // [sp-0x32c]
    int v1;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x308]
    char v3;  // [bp-0x2f0], Other Possible Types: unsigned long, unsigned long long
    char v4;  // [bp-0x2e8], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x2e0]
    char v6;  // [bp-0x2d8], Other Possible Types: unsigned long
    unsigned int v7;  // [sp-0x2cc]
    char v8;  // [bp-0x2c8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v9;  // [sp-0x2c0], Other Possible Types: unsigned long long
    char v10;  // [sp-0x2b8], Other Possible Types: unsigned long long
    int v11;  // [sp-0x2b0], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x2a8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [sp-0x2a0]
    int v14;  // [sp-0x218], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v15;  // [sp-0x210], Other Possible Types: unsigned long long
    char v16;  // [sp-0x208], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x200], Other Possible Types: char
    void* v18;  // [sp-0x1f8]
    int v19;  // [sp-0x168]
    unsigned long long v20;  // [sp-0x158]
    unsigned long long v21;  // [sp-0x150]
    unsigned long v22;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x140]
    unsigned long long v24;  // [sp-0x138]
    char v25;  // [sp-0x130]
    unsigned long v26;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v27;  // [sp-0x120]
    char v28;  // [bp-0x118], Other Possible Types: unsigned long long
    char v29;  // [sp-0x110]
    char v30;  // [bp-0x78]
    char v31;  // [bp-0x68]
    char v32;  // [bp-0x60]
    char v33;  // [bp-0x50]
    char v34;  // [bp-0x48]
    unsigned long long v36;  // r13
    unsigned long v37;  // rax
    unsigned int v38;  // eax
    unsigned long long v39;  // r12
    unsigned long long v40;  // rsi
    unsigned long long v41;  // rdx
    void* v42;  // rax
    unsigned long long v43;  // r13
    unsigned long long v44;  // r13
    unsigned int v45;  // eax
    unsigned long long v47;  // rcx
    unsigned int v48;  // esi
    unsigned long long v49;  // rsi
    unsigned long long v50;  // rdx
    unsigned long long v51;  // rsi
    unsigned long long v52;  // rax
    unsigned long long v53;  // rdi
    char v56;  // bl
    unsigned long long v57;  // rsi

    v36 = 0x8000000000000000;
    v1 = 0x8000000000000000;
    v0 = v37 | -0x100 | 1;
    std::fs::metadata::ha7346a2a69513158(&v8, a2, a3);
    if (*((int *)&v8) == 2)
    {
        ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v8);
    }
    else
    {
        ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v8);
        v38 = a4[55];
        if (v38 != 1)
        {
            if (v38 == 2)
            {
                v39 = a4[53];
                if ((char)v39 == 1)
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                    return v42;
                }
                std::fs::metadata::ha7346a2a69513158(&v8, a0, a1);
                v43 = v8;
                if (v43 == 2)
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                    return v42;
                }
                memcpy(&v28, &v10, 160);
                v26 = v43;
                v27 = v9;
                std::fs::Metadata::modified::h6f16921acf618ae6(&v14, &v26);
                v7 = v15;
                if (v7 == 0x3b9aca00)
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                    return v42;
                }
                std::fs::metadata::ha7346a2a69513158(&v8, a2, a3);
                v44 = v8;
                if (v44 == 2)
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                    return v42;
                }
                v21 = v9;
                memcpy(&v16, &v10, 160);
                v14 = v44;
                v15 = v21;
                v36 = 0x8000000000000000;
                std::fs::Metadata::modified::h6f16921acf618ae6(&v3, &v14);
                v45 = *((int *)&v4);
                if (v45 == 0x3b9aca00)
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                    return v42;
                }
                v47 = (v14 < v3 ? 255 : (-0x100 | v14 != v3) & 4294967295 & 4294967295);
                if (v7 < v45)
                    v48 = 255;
                else
                    v48 = -0x100 | v7 != v45;
                v49 = ((v47 & 255 & 255) ? v47 & 4294967295 : v48);
                if ((char)v49 != 1)
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                    return v42;
                }
            }
            else
            {
                if (v38 != 3)
                {
                    v39 = a4[53];
                }
                else
                {
                    v14 = 1;
                    v15 = a2;
                    v16 = a3;
                    v17 = 1;
                    v26 = &v14;
                    v27 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v8 = &g_587430;
                    v9 = 1;
                    v12 = 0;
                    v10 = &v26;
                    v11 = 1;
                    ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v34, &v8);
                    std::io::error::Error::new::hbdde03795a1f64b1(39, &v34);
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                    return v42;
                }
            }
            if (!(char)v39)
            {
                if (a4[52])
                {
                    v14 = 1;
                    v15 = a2;
                    v16 = a3;
                    v17 = 1;
                    v26 = &v14;
                    v27 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v8 = &g_587410;
                    v9 = 2;
                    v12 = 0;
                    v10 = &v26;
                    v11 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v8, v49, 255);
                }
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                return v42;
            }
            else
            {
                if ((unsigned int)v39 == 1)
                {
                    v14 = uucore::util_name::h412db5e565a079f3();
                    v15 = v50;
                    v26 = &v14;
                    v27 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                    v8 = &g_587128;
                    v9 = 2;
                    v12 = 0;
                    v10 = &v26;
                    v11 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v51, v50);
                    v14 = 1;
                    v15 = a2;
                    v16 = a3;
                    v17 = 1;
                    v26 = &v14;
                    v27 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v8 = &g_587440;
                    v9 = 2;
                    v12 = 0;
                    v10 = &v26;
                    v11 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v51, v50);
                    v8 = &g_587168;
                    v9 = 1;
                    v10 = 8;
                    *((int128_t *)&v11) = 0;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v51, v50);
                    v22 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                    v52 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v22, v51, v50);
                    if (v52)
                    {
                        v3 = v52;
                        v14 = uucore::util_name::h412db5e565a079f3();
                        v15 = v50;
                        v26 = &v14;
                        v27 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h06262ea06b0180c5;
                        v8 = &g_587128;
                        v9 = 2;
                        v12 = 0;
                        v10 = &v26;
                        v11 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v51, v50);
                        v14 = &v3;
                        v15 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v8 = &g_587178;
                        v9 = 2;
                        v12 = 0;
                        v10 = &v14;
                        v11 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v51, v50);
                        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                    }
                    if (!(char)uucore::read_yes::h34a9f501e29598a6(v53, v51, v50))
                    {
                        std::io::error::Error::new::h9c663fbcdb8c9096(39, "Directory not empty (backup: )", 19);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                        return v42;
                    }
                }
                uucore::features::backup_control::get_backup_path::h4dd219142ddcb6cb(&v8, a4[54]);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                v2 = v10;
                *((int128_t *)&v1) = *((int128_t *)&v8);
                if (v1 != 0x8000000000000000)
                {
                    v42 = uu_mv::rename_with_fallback::h78a3f53b10838fc2(a2, a3, (&v1)[1], v2, a5);
                    if (v42)
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                        return v42;
                    }
                }
            }
        }
        else if (a4[52])
        {
            v14 = 1;
            v15 = a2;
            v16 = a3;
            v17 = 1;
            v26 = &v14;
            v27 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v8 = &g_587410;
            v9 = 2;
            v12 = 0;
            v10 = &v26;
            v11 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v8, v40, v41);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
            return v42;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
            return v42;
        }
    }
    std::fs::metadata::ha7346a2a69513158(&v8, a2, a3);
    if (*((int *)&v8) == 2)
    {
        ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v8);
    }
    else
    {
        ::0x4e6710::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hf8d986ec6b24279b(&v8);
        if ((char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3) && (char)std::path::Path::is_dir::h9ac0db933706da51(a0, a1))
        {
            if (!(char)uu_mv::is_empty_dir::h60c0ced04e4db9f0(a2, a3))
            {
                std::io::error::Error::new::h9c663fbcdb8c9096(39, "Directory not empty (backup: )", 19);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                return v42;
            }
            v42 = std::fs::remove_dir::h8acada9635acb07b(a2, a3, v50);
            if (v42)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
                return v42;
            }
        }
    }
    v42 = uu_mv::rename_with_fallback::h78a3f53b10838fc2(a0, a1, a2, a3, a5);
    if (v42)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h62967454c4013a36(&v1);
        return v42;
    }
    if (!a4[49])
    {
        v56 = 0;
    }
    else
    {
        v56 = v42 | -0x100 | v1 != v36;
        if (v1 == v36)
        {
            v26 = 1;
            v27 = a0;
            v28 = a1;
            v29 = 1;
            v14 = 1;
            v15 = a2;
            v16 = a3;
            v17 = 1;
            v3 = &v26;
            v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v5 = &v14;
            v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v8 = &g_587460;
            v9 = 2;
            v12 = 0;
            v10 = &v3;
            v11 = 2;
            ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v32, &v8);
            *((int128_t *)&v14) = *((int128_t *)&v32);
            v16 = *((long long *)&v33);
            v0 = v16 | -0x100 | 1;
        }
        else
        {
            v20 = v2;
            *((int128_t *)&v19) = *((int128_t *)&v1);
            v22 = 1;
            v23 = a0;
            v24 = a1;
            v25 = 1;
            v3 = 1;
            v4 = a2;
            v5 = a3;
            v6 = 1;
            v26 = 1;
            v27 = (long long)(&v19)[8];
            v28 = v20;
            v29 = 1;
            v8 = &v22;
            v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v10 = &v3;
            v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v12 = &v26;
            v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v14 = &g_587480;
            v15 = 4;
            v18 = 0;
            v16 = &v8;
            v17 = 3;
            ::0x4e6a60::core::option::Option$LT$T$GT$::map_or_else::h34501cc2a6e33d5f(&v30, &v14);
            *((int128_t *)&v14) = *((int128_t *)&v30);
            v16 = *((long long *)&v31);
            v0 = 0;
            ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v19);
            v0 = 0;
        }
        if (!a5)
        {
            v26 = &v14;
            v27 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v8 = &g_587178;
            v9 = 2;
            v12 = 0;
            v10 = &v26;
            v11 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v8, v57, v50);
        }
        else
        {
            indicatif::multi::MultiProgress::suspend::hf99bfd668b1717b1(a5, &v14, v50);
        }
        ::0x4e5930::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd60cb76546f8f2d1(&v14);
    }
    if (!(!v56 && v1 != v36))
        return 0;
    ::0x4e5920::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::he0671cc4f785cc2a(&v1);
}
