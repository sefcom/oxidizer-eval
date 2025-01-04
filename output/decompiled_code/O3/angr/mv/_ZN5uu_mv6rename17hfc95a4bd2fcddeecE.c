long long uu_mv::rename::hfc95a4bd2fcddeec(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, char a4[56], unsigned long long a5)
{
    unsigned int v0;  // [sp-0x32c]
    int v1;  // [bp-0x318], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x308]
    struct struct_0 **v3;  // [bp-0x2f0], Other Possible Types: unsigned long, unsigned long long
    char v4;  // [bp-0x2e8], Other Possible Types: unsigned long long
    struct struct_0 **v5;  // [sp-0x2e0], Other Possible Types: unsigned long long
    char v6;  // [bp-0x2d8], Other Possible Types: unsigned long
    unsigned int v7;  // [sp-0x2cc]
    struct struct_0 **v8;  // [bp-0x2c8], Other Possible Types: char *
    unsigned long v9;  // [sp-0x2c0], Other Possible Types: unsigned long long
    struct struct_0 **v10;  // [sp-0x2b8], Other Possible Types: char, unsigned long long
    int v11;  // [sp-0x2b0], Other Possible Types: unsigned long long
    struct struct_0 **v12;  // [sp-0x2a8], Other Possible Types: void*
    unsigned long long v13;  // [sp-0x2a0]
    int v14;  // [sp-0x218], Other Possible Types: struct struct_0 **, unsigned long, unsigned long long
    unsigned long v15;  // [sp-0x210], Other Possible Types: unsigned long long
    struct struct_1 **v16;  // [sp-0x208], Other Possible Types: char, unsigned long long
    unsigned long long v17;  // [bp-0x200], Other Possible Types: char
    void* v18;  // [sp-0x1f8]
    int v19;  // [sp-0x168]
    unsigned long long v20;  // [sp-0x158]
    unsigned long long v21;  // [sp-0x150]
    unsigned long v22;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v23;  // [sp-0x140]
    unsigned long long v24;  // [sp-0x138]
    char v25;  // [sp-0x130]
    struct struct_0 **v26;  // [sp-0x128], Other Possible Types: unsigned long long
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
    unsigned long long v38;  // r12
    char v39;  // al
    unsigned long long v40;  // rsi
    unsigned long long v41;  // rdx
    struct struct_0 **v42;  // r13
    void* v43;  // rbx
    struct struct_0 **v44;  // r13
    unsigned int v45;  // eax
    unsigned long long v47;  // rcx
    unsigned int v48;  // esi
    unsigned long long v49;  // rsi
    unsigned int v50;  // eax
    unsigned long long v51;  // rdx
    unsigned long long v52;  // rsi
    struct struct_0 **v53;  // rax
    unsigned long long v54;  // rdi
    char v57;  // bl
    unsigned long long v58;  // rsi

    v36 = 0x8000000000000000;
    v1 = 0x8000000000000000;
    v0 = v37 | -0x100 | 1;
    std::fs::metadata::h1d9ddf5324749f9a(&v8, a2, a3);
    if ((int)v8 == 2)
    {
        ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v8);
        goto LABEL_4ead3f;
    }
    ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v8);
    v38 = a4[53];
    v39 = a4[55];
    if (v39 == 2 && (char)v38 == 1)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
        return v43;
    }
    if (v39 == 1)
    {
        if (a4[52])
        {
            v14 = 1;
            v15 = a2;
            v16 = a3;
            v17 = 1;
            v26 = &v14;
            v27 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v8 = &g_5881a0;
            v9 = 2;
            v12 = 0;
            v10 = &v26;
            v11 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v8, v40, v41);
        }
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
        return v43;
    }
    if (v39 != 2)
    {
        if (v39 == 3)
        {
            v14 = 1;
            v15 = a2;
            v16 = a3;
            v17 = 1;
            v26 = &v14;
            v27 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v8 = &g_5881c0;
            v9 = 1;
            v12 = 0;
            v10 = &v26;
            v11 = 1;
            ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v34, &v8);
            std::io::error::Error::new::h3b474d96466fa494(39, &v34);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
            return v43;
        }
LABEL_4eb40e:
        v50 = v38;
        if (!v50)
        {
            if (a4[52])
            {
                v14 = 1;
                v15 = a2;
                v16 = a3;
                v17 = 1;
                v26 = &v14;
                v27 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v8 = &g_5881a0;
                v9 = 2;
                v12 = 0;
                v10 = &v26;
                v11 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v8, v49, 255);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                return v43;
            }
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
            return v43;
        }
        if (v50 == 1)
        {
            v14 = uucore::util_name::h60d842bf27b05e82();
            v15 = v51;
            v26 = &v14;
            v27 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
            v8 = &g_587e10;
            v9 = 2;
            v12 = 0;
            v10 = &v26;
            v11 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v52, v51);
            v14 = 1;
            v15 = a2;
            v16 = a3;
            v17 = 1;
            v26 = &v14;
            v27 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v8 = &g_5881d0;
            v9 = 2;
            v12 = 0;
            v10 = &v26;
            v11 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v52, v51);
            v8 = &g_587e50;
            v9 = 1;
            v10 = 8;
            *((int128_t *)&v11) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v52, v51);
            v22 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v53 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v22, v52, v51);
            if (v53)
            {
                v3 = v53;
                v14 = uucore::util_name::h60d842bf27b05e82();
                v15 = v51;
                v26 = &v14;
                v27 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2fb83001df40ac3a;
                v8 = &g_587e10;
                v9 = 2;
                v12 = 0;
                v10 = &v26;
                v11 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v52, v51);
                v14 = &v3;
                v15 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v8 = &g_587e60;
                v9 = 2;
                v12 = 0;
                v10 = &v14;
                v11 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v8, v52, v51);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
            else if (!(char)uucore::read_yes::hc350e858ab85cf03(v54, v52, v51))
            {
                std::io::error::Error::new::h0657970bda442b78(39, "Directory not empty", 19);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                return v43;
            }
        }
        uucore::features::backup_control::get_backup_path::hb28e229807111f9d(&v8, a4[54]);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
        v2 = v10;
        *((int128_t *)&v1) = *((int128_t *)&v8);
        if (!(v1 != 0x8000000000000000) || !((v43 = uu_mv::rename_with_fallback::h48f1d4f2ed6b729f(a2, a3, (&v1)[1], v2, a5), v43)))
        {
LABEL_4ead3f:
            std::fs::metadata::h1d9ddf5324749f9a(&v8, a2, a3);
            if ((int)v8 == 2)
            {
                ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v8);
            }
            else
            {
                ::0x4e7330::core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h1a38c79198e9333e(&v8);
                if ((char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3) && (char)std::path::Path::is_dir::h9ac0db933706da51(a0, a1))
                {
                    if (!(char)uu_mv::is_empty_dir::he3f2d58304cc65e8(a2, a3))
                    {
                        std::io::error::Error::new::h0657970bda442b78(39, "Directory not empty", 19);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                        return v43;
                    }
                    v43 = std::fs::remove_dir::hab61638394c5814d(a2, a3, v51);
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
                v57 = 0;
            }
            else
            {
                v57 = v43 | -0x100 | v1 != v36;
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
                    v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v5 = &v14;
                    v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v8 = &g_588230;
                    v9 = 2;
                    v12 = 0;
                    v10 = &v3;
                    v11 = 2;
                    ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v32, &v8);
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
                    v9 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v10 = &v3;
                    v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v12 = &v26;
                    v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v14 = &g_5881f0;
                    v15 = 4;
                    v18 = 0;
                    v16 = &v8;
                    v17 = 3;
                    ::0x4e7680::core::option::Option$LT$T$GT$::map_or_else::h70402eff178ea70d(&v30, &v14);
                    *((int128_t *)&v14) = *((int128_t *)&v30);
                    v16 = *((long long *)&v31);
                    v0 = 0;
                    ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&v19);
                    v0 = 0;
                }
                if (!a5)
                {
                    v26 = &v14;
                    v27 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    v8 = &g_587e60;
                    v9 = 2;
                    v12 = 0;
                    v10 = &v26;
                    v11 = 1;
                    std::io::stdio::_print::he918bceb0c89db46(&v8, v58, v51);
                }
                else
                {
                    indicatif::multi::MultiProgress::suspend::hc6003d08fa5df55b(a5, &v14, v51);
                }
                ::0x4e6550::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h0a66651b389f0fd4(&v14);
            }
            if (!(!v57 && v1 != v36))
                return 0;
            ::0x4e6540::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hcf72403e0182be36(&v1);
        }
    }
    else
    {
        std::fs::metadata::h1d9ddf5324749f9a(&v8, a0, a1);
        v42 = v8;
        if (v42 == 2)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
            return v43;
        }
        memcpy(&v28, &v10, 160);
        v26 = v42;
        v27 = v9;
        std::fs::Metadata::modified::h6f16921acf618ae6(&v14, &v26);
        v43 = v14;
        v7 = v15;
        if (v7 != 0x3b9aca00)
        {
            std::fs::metadata::h1d9ddf5324749f9a(&v8, a2, a3);
            v44 = v8;
            if (v44 == 2)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                return v43;
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
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h3aed14150e82ecca(&v1);
                return v43;
            }
            v47 = (v43 < v3 ? (-0x100 | v43 != v3) & 4294967295 & 4294967295 : 255);
            if (v7 < v45)
                v48 = 255;
            else
                v48 = -0x100 | v7 != v45;
            v49 = ((v47 & 255 & 255) ? v47 & 4294967295 : v48);
            if ((char)v49 != 1)
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
