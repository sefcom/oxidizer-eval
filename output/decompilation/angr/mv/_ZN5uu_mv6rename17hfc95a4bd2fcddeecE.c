long long uu_mv::rename::hfc95a4bd2fcddeec(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[56], unsigned long long a5)
{
    unsigned int v0;  // [sp-0x32c]
    int v1;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x308]
    struct struct_1 **v3;  // [sp-0x2f0], Other Possible Types: unsigned long
    char v4;  // [sp-0x2e8], Other Possible Types: unsigned long long
    struct struct_1 **v5;  // [sp-0x2e0], Other Possible Types: unsigned long long
    char v6;  // [bp-0x2d8], Other Possible Types: unsigned long
    unsigned int v7;  // [sp-0x2cc]
    struct struct_1 **v8;  // [sp-0x2c8], Other Possible Types: char *
    char *v9;  // [sp-0x2c8]
    unsigned long v10;  // [sp-0x2c0], Other Possible Types: unsigned long long
    struct struct_1 **v11;  // [sp-0x2b8], Other Possible Types: char, unsigned long long
    int v12;  // [sp-0x2b0], Other Possible Types: unsigned long long
    struct struct_1 **v13;  // [sp-0x2a8], Other Possible Types: void*
    unsigned long long v14;  // [sp-0x2a0]
    struct struct_1 **v15;  // [sp-0x218], Other Possible Types: unsigned long
    int v16;  // [bp-0x218]
    unsigned long long v17;  // [sp-0x210]
    struct struct_0 **v18;  // [sp-0x208], Other Possible Types: char, unsigned long long
    unsigned long long v19;  // [bp-0x200], Other Possible Types: char
    void* v20;  // [sp-0x1f8]
    int v21;  // [sp-0x168]
    unsigned long long v22;  // [sp-0x158]
    unsigned long long v23;  // [sp-0x150]
    unsigned long v24;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x140]
    unsigned long long v26;  // [sp-0x138]
    char v27;  // [sp-0x130]
    struct struct_1 **v28;  // [sp-0x128]
    unsigned long long v29;  // [sp-0x120]
    char v30;  // [sp-0x118], Other Possible Types: unsigned long long
    char v31;  // [sp-0x110]
    char v32;  // [bp-0x78]
    char v33;  // [bp-0x68]
    char v34;  // [bp-0x60]
    char v35;  // [bp-0x50]
    char v36;  // [bp-0x48]
    unsigned long long v38;  // r13
    unsigned long v39;  // rax
    unsigned long long v40;  // r12
    char v41;  // al
    struct struct_1 **v42;  // r13
    void* v43;  // rbx
    struct struct_1 **v45;  // r13
    unsigned int v47;  // eax
    unsigned long long v48;  // rcx
    unsigned int v49;  // esi
    char v50;  // sil
    unsigned int v51;  // eax
    unsigned long v52;  // rdx
    struct struct_1 **v53;  // rax
    char v56;  // bl

    v38 = 0x8000000000000000;
    v1 = 0x8000000000000000;
    v0 = v39 & 0xffffffffffffff00 | 1;
    std::fs::metadata::h1d9ddf5324749f9a(&v9, a2, a3);
    if ((int)v9 == 2)
    {
        ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v9);
        goto LABEL_4ead3f;
    }
    ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v9);
    v40 = a4[53];
    v41 = a4[55];
    if (v41 == 2 && (char)v40 == 1)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
        return v43;
    }
    if (v41 == 1)
    {
        if (a4[52])
        {
            v15 = 1;
            v17 = a2;
            v18 = a3;
            v19 = 1;
            v28 = &v15;
            v29 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v8 = &g_5881a0;
            v10 = 2;
            v13 = 0;
            v11 = &v28;
            v12 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v9);
        }
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
        return v43;
    }
    if (v41 != 2)
    {
        if (v41 == 3)
        {
            v15 = 1;
            v17 = a2;
            v18 = a3;
            v19 = 1;
            v28 = &v15;
            v29 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v8 = &g_5881c0;
            v10 = 1;
            v13 = 0;
            v11 = &v28;
            v12 = 1;
            ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v36, &v9);
            std::io::error::Error::new::h3b474d96466fa494(39, &v36);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
            return v43;
        }
LABEL_4eb40e:
        v51 = v40;
        if (!v51)
        {
            if (a4[52])
            {
                v15 = 1;
                v17 = a2;
                v18 = a3;
                v19 = 1;
                v28 = &v15;
                v29 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v8 = &g_5881a0;
                v10 = 2;
                v13 = 0;
                v11 = &v28;
                v12 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v9);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                return v43;
            }
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
            return v43;
        }
        if (v51 == 1)
        {
            v15 = uucore::util_name::h60d842bf27b05e82();
            v17 = v52;
            v28 = &v15;
            v29 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
            v8 = &g_587e10;
            v10 = 2;
            v13 = 0;
            v11 = &v28;
            v12 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
            v15 = 1;
            v17 = a2;
            v18 = a3;
            v19 = 1;
            v28 = &v15;
            v29 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v8 = &g_5881d0;
            v10 = 2;
            v13 = 0;
            v11 = &v28;
            v12 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
            v9 = &g_587e50;
            v10 = 1;
            v11 = 8;
            *((uint128_t *)&v12) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
            v24 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v53 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v24);
            if (v53)
            {
                v3 = v53;
                v15 = uucore::util_name::h60d842bf27b05e82();
                v17 = v52;
                v28 = &v15;
                v29 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                v8 = &g_587e10;
                v10 = 2;
                v13 = 0;
                v11 = &v28;
                v12 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                v15 = &v3;
                v17 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v8 = &g_587e60;
                v10 = 2;
                v13 = 0;
                v11 = &v15;
                v12 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v9);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
            else if (!(char)uucore::read_yes::hc350e858ab85cf03())
            {
                std::io::error::Error::new::h0657970bda442b78(39, 1, 0);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                return v43;
            }
        }
        uucore::features::backup_control::get_backup_path::hb28e229807111f9d(&v9, a4[54]);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
        v2 = v11;
        *((int128_t *)&v1) = *((int128_t *)&v9);
        if (!(v1 != 0x8000000000000000) || !((v43 = uu_mv::rename_with_fallback::h48f1d4f2ed6b729f(a2, a3, (&v1)[1], v2, a5), v43)))
        {
LABEL_4ead3f:
            std::fs::metadata::h1d9ddf5324749f9a(&v9, a2, a3);
            if ((int)v9 == 2)
            {
                ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v9);
            }
            else
            {
                ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v9);
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3) && (char)std::path::Path::is_dir::h9ac0db933706da51(a0, a1))
                {
                    if (!(char)uu_mv::is_empty_dir::he3f2d58304cc65e8(a2, a3))
                    {
                        std::io::error::Error::new::h0657970bda442b78(39, 1, 0);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                        return v43;
                    }
                    v43 = std::fs::remove_dir::hab61638394c5814d(a2, a3);
                    if (v43)
                    {
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                        return v43;
                    }
                }
            }
            v43 = uu_mv::rename_with_fallback::h48f1d4f2ed6b729f(a0, a1, a2, a3, a5);
            if (v43)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                return v43;
            }
            if (!a4[49])
            {
                v56 = 0;
            }
            else
            {
                v56 = v43 & 0xffffffffffffff00 | v1 != v38;
                if (v1 == v38)
                {
                    v28 = 1;
                    v29 = a0;
                    v30 = a1;
                    v31 = 1;
                    v15 = 1;
                    v17 = a2;
                    v18 = a3;
                    v19 = 1;
                    v3 = &v28;
                    v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v5 = &v15;
                    v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v8 = &g_588230;
                    v10 = 2;
                    v13 = 0;
                    v11 = &v3;
                    v12 = 2;
                    ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v34, &v9);
                    *((int128_t *)&v16) = *((int128_t *)&v34);
                    v18 = *((long long *)&v35);
                    v0 = v18 & 0xffffffffffffff00 | 1;
                }
                else
                {
                    v22 = v2;
                    *((int128_t *)&v21) = *((int128_t *)&v1);
                    v24 = 1;
                    v25 = a0;
                    v26 = a1;
                    v27 = 1;
                    v3 = 1;
                    v4 = a2;
                    v5 = a3;
                    v6 = 1;
                    v28 = 1;
                    v29 = (long long)(&v21)[8];
                    v30 = v22;
                    v31 = 1;
                    v8 = &v24;
                    v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v11 = &v3;
                    v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v13 = &v28;
                    v14 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v15 = &g_5881f0;
                    v17 = 4;
                    v20 = 0;
                    v18 = &v9;
                    v19 = 3;
                    ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v32, &v15);
                    *((int128_t *)&v16) = *((int128_t *)&v32);
                    v18 = *((long long *)&v33);
                    v0 = 0;
                    ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&v21);
                    v0 = 0;
                }
                if (!a5)
                {
                    v28 = &v15;
                    v29 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v8 = &g_587e60;
                    v10 = 2;
                    v13 = 0;
                    v11 = &v28;
                    v12 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v9);
                }
                else
                {
                    indicatif::multi::MultiProgress::suspend::hc6003d08fa5df55b(a5, &v15);
                }
                ::0x4e6550::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&v15);
            }
            if (!(!v56 && v1 != v38))
                return 0;
            ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&v1);
        }
    }
    else
    {
        std::fs::metadata::h1d9ddf5324749f9a(&v9, a0, a1);
        v42 = v8;
        if (v42 == 2)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
            return v43;
        }
        memcpy(&v30, &v11, 160);
        v28 = v42;
        v29 = v10;
        std::fs::Metadata::modified::h6f16921acf618ae6(&v15, &v28);
        v43 = v15;
        v7 = v17;
        if (v7 != 0x3b9aca00)
        {
            std::fs::metadata::h1d9ddf5324749f9a(&v9, a2, a3);
            v45 = v8;
            if (v45 == 2)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                return v43;
            }
            v23 = v10;
            memcpy(&v18, &v11, 160);
            v15 = v45;
            v17 = v23;
            v38 = 0x8000000000000000;
            std::fs::Metadata::modified::h6f16921acf618ae6(&v3, &v15);
            v47 = *((int *)&v4);
            if (v47 == 0x3b9aca00)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                return v43;
            }
            v48 = (v43 < v3 ? v43 != v3 : 255);
            if (v7 < v47)
                v49 = 255;
            else
                v49 = v7 != v47;
            v50 = ((v48 & 255 & 255) ? v48 & 4294967295 : v49);
            if (v50 != 1)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                return v43;
            }
            goto LABEL_4eb40e;
        }
    }
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
    return v43;
}
