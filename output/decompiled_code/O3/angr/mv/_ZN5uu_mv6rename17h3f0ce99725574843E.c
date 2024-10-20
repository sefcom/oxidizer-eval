long long uu_mv::rename::h3f0ce99725574843(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4, unsigned long long a5)
{
    unsigned long long v0;  // [sp-0x300]
    int v1;  // [bp-0x2d8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v2;  // [sp-0x2d0], Other Possible Types: unsigned long long
    int v3;  // [sp-0x2c8], Other Possible Types: char, unsigned long long
    int v4;  // [sp-0x2c0], Other Possible Types: unsigned long long
    int v5;  // [sp-0x2b8], Other Possible Types: void*, unsigned long long
    unsigned long long v6;  // [sp-0x2b0]
    unsigned long v7;  // [sp-0x2a8], Other Possible Types: unsigned long long
    char v8;  // [sp-0x2a0]
    unsigned int v9;  // [bp-0x220], Other Possible Types: unsigned long
    char v10;  // [bp-0x218], Other Possible Types: unsigned long, unsigned long long
    char v11;  // [bp-0x210], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x208]
    char v13;  // [bp-0x200], Other Possible Types: unsigned long
    int v14;  // [sp-0x1f8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v15;  // [sp-0x1f0], Other Possible Types: unsigned long long
    char v16;  // [sp-0x1e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v17;  // [bp-0x1e0], Other Possible Types: char
    void* v18;  // [bp-0x1d8], Other Possible Types: char
    unsigned long v19;  // [sp-0x148], Other Possible Types: unsigned long long
    unsigned long long v20;  // [sp-0x140]
    unsigned long long v21;  // [sp-0x138]
    char v22;  // [sp-0x130]
    unsigned long v23;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v24;  // [sp-0x120]
    char v25;  // [bp-0x118], Other Possible Types: unsigned long long
    char v26;  // [sp-0x110]
    char v27;  // [bp-0x78]
    char v28;  // [bp-0x68]
    char v29;  // [bp-0x60]
    char v30;  // [bp-0x50]
    char v31;  // [bp-0x48]
    unsigned int v33;  // eax
    unsigned long long v34;  // r14
    unsigned long long v35;  // r13
    unsigned long long v36;  // rsi
    unsigned long long v37;  // rdx
    void* v38;  // rax
    unsigned long long v39;  // rbx
    unsigned int v40;  // eax
    unsigned long long v41;  // rbx
    unsigned int v42;  // eax
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rcx
    unsigned int v46;  // esi
    unsigned long long v47;  // rsi
    unsigned long long v48;  // rsi
    unsigned long long v49;  // rdx
    unsigned long long v50;  // rax
    unsigned long long v51;  // rdi
    unsigned long long v52;  // rsi
    unsigned long long v53;  // rdx
    char v55;  // cl
    int v56;  // xmm0
    int v57;  // xmm1
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rcx
    unsigned long long v61;  // r8
    unsigned long long v62;  // r9

    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v1, a2, a3);
    if (*((int *)&v1) == 2)
    {
        v15 = v2;
        v14 = 2;
        goto LABEL_4a6022;
    }
    memcpy(&v14, &v1, 176);
    if (v14 == 2)
    {
LABEL_4a6022:
        ::0x49ec20::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5905b32231466f9a(&v15);
        v34 = 0x8000000000000000;
        goto LABEL_4a6043;
    }
    v33 = a4->field_37;
    if (v33 == 1)
    {
        if (a4->field_34)
        {
            v14 = 1;
            v15 = a2;
            v16 = a3;
            v17 = 1;
            v23 = &v14;
            v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v1 = &g_530c08;
            v2 = 2;
            v5 = 0;
            v3 = &v23;
            v4 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v1, v36, v37);
            return 0;
        }
        return 0;
    }
    if (v33 == 2)
    {
        v35 = a4->field_35;
        if ((char)v35 == 1)
            return 0;
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v1, a0, a1);
        v39 = v1;
        if (v39 == 2)
            return v38;
        memcpy(&v25, &v3, 160);
        v23 = v39;
        v24 = v2;
        std::fs::Metadata::modified::h6f16921acf618ae6(&v14, &v23);
        v40 = v15;
        v9 = v40;
        if (v40 == 0x3b9aca00)
            return v38;
        std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v1, a2, a3);
        v41 = v1;
        v38 = v2;
        if (v41 == 2)
        {
            return v38;
        }
        v0 = v38;
        memcpy(&v16, &v3, 160);
        v14 = v41;
        v15 = v0;
        std::fs::Metadata::modified::h6f16921acf618ae6(&v10, &v14);
        v42 = *((int *)&v11);
        if (v42 == 0x3b9aca00)
            return v38;
        v43 = 255;
        v44 = (v14 < v10 ? 255 : (-0x100 | v14 != v10) & 4294967295 & 4294967295);
        if (v9 < v42)
            v46 = 255;
        else
            v46 = -0x100 | v9 != v42;
        v47 = ((v44 & 255 & 255) ? v44 & 4294967295 : v46);
        if ((char)v47 != 1)
            return 0;
    }
    else if (v33 != 3)
    {
        v35 = a4->field_35;
    }
    else
    {
        v14 = 1;
        v15 = a2;
        v16 = a3;
        v17 = 1;
        v23 = &v14;
        v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v1 = &g_530c28;
        v2 = 1;
        v5 = 0;
        v3 = &v23;
        v4 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v31, &v1);
        v38 = std::io::error::Error::new::h03b120fead9f3de2(39, &v31);
        return v38;
    }
    if (!(char)v35)
    {
        if (!a4->field_34)
            return 0;
        v14 = 1;
        v15 = a2;
        v16 = a3;
        v17 = 1;
        v23 = &v14;
        v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v1 = &g_530c08;
        v2 = 2;
        v5 = 0;
        v3 = &v23;
        v4 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v1, v47, v43);
    }
    if ((unsigned int)v35 == 1)
    {
        if (_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2)
            once_cell::imp::OnceCell$LT$T$GT$::initialize::hf309a323f9c37110(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
        *((uint128_t *)&v14) = g_537550;
        v23 = &v14;
        v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc5218b4f4ae28fda;
        v1 = &g_530950;
        v2 = 2;
        v5 = 0;
        v3 = &v23;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v47, v43);
        v14 = 1;
        v15 = a2;
        v16 = a3;
        v17 = 1;
        v23 = &v14;
        v24 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
        v1 = &g_530c38;
        v2 = 2;
        v5 = 0;
        v3 = &v23;
        v4 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v48, v49);
        v1 = &g_530990;
        v2 = 1;
        v3 = 8;
        *((int128_t *)&v4) = 0;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v48, v49);
        v19 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
        v50 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v19, v48, v49);
        if (v50)
        {
            v10 = v50;
            v14 = uucore::util_name::h359eff083fe53467();
            v15 = v49;
            v23 = &v14;
            v24 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc5218b4f4ae28fda;
            v1 = &g_530950;
            v2 = 2;
            v5 = 0;
            v3 = &v23;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v48, v49);
            v14 = &v10;
            v15 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v1 = &g_5309a0;
            v2 = 2;
            v5 = 0;
            v3 = &v14;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v48, v49);
            std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
        }
        if (!(char)uucore::read_yes::hf72ff1df5ee554ec(v51, v48, v49))
        {
            v52 = 1;
            v53 = 0;
            v34 = 0x8000000000000000;
            goto LABEL_4a6acf;
        }
    }
    uucore::features::backup_control::get_backup_path::hb3c1e2a736bef74b(&v1, a4->field_36, a2, a3, a4->field_8, a4->field_10);
    v34 = v1;
    v0 = v2;
    v9 = v3;
    if (v34 != 0x8000000000000000 && (v38 = (unsigned long long)uu_mv::rename_with_fallback::h1fdb2b9c78b4b0a9(a2, a3, v2), v38))
    {
LABEL_4a60ee:
        if (v34)
        {
            __rust_dealloc(v0);
            return v38;
        }
        return v38;
    }
LABEL_4a6043:
    std::sys::pal::unix::fs::stat::h84607eb26fae96a2(&v1, a2, a3);
    if (*((int *)&v1) == 2)
    {
        v15 = v2;
        v14 = 2;
        goto LABEL_4a60a3;
    }
    memcpy(&v14, &v1, 176);
    if (v14 == 2)
    {
LABEL_4a60a3:
        ::0x49ec20::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5905b32231466f9a(&v15);
        goto LABEL_4a60b3;
    }
    if ((char)std::path::Path::is_dir::h9ac0db933706da51(a2, a3) && (char)std::path::Path::is_dir::h9ac0db933706da51(a0, a1))
    {
        std::sys::pal::unix::fs::readdir::h9e1c3c12d516a70c(&v1, a2, a3);
        v55 = v2;
        if (v55 != 2)
        {
            v7 = v1;
            v8 = v55;
            v1 = 2;
            _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&v14, &v7, v49);
            v56 = *((int128_t *)&v14);
            v57 = *((int128_t *)&v16);
            *((int128_t *)&v5) = *((int128_t *)&v18);
            v3 = v57;
            v1 = v56;
            core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$std..fs..ReadDir$GT$$GT$::h89d28f3463f5731e(&v1);
            if (!(!v1))
                goto LABEL_4a6a00;
            v38 = std::sys::pal::unix::fs::rmdir::h028ffaebae6b55a1(a2, a3);
            if (v38)
            {
LABEL_4a60d8:
                goto LABEL_4a60db;
            }
        }
        else
        {
            v1 = v7;
            ::0x49ec20::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h5905b32231466f9a(&v1);
LABEL_4a6a00:
            v53 = 19;
            v52 = "Directory not empty (backup: ){msg}: [{elapsed_precise}] {wide_bar} {bytes:>7}/{total_bytes:7}Permission deniedinter-device move failed: '' to ''; unable to remove target: ";
LABEL_4a6acf:
            v38 = std::io::error::Error::new::hc754441dbe4d926c(39, v52, v53);
LABEL_4a60db:
            if (v34 == 0x8000000000000000)
                return v38;
            goto LABEL_4a60ee;
        }
    }
LABEL_4a60b3:
    v38 = uu_mv::rename_with_fallback::h1fdb2b9c78b4b0a9(a0, a1, a2, a3, a5);
    if (!v38)
    {
        if (a4->field_31)
        {
            if (v34 == 0x8000000000000000)
            {
                v23 = 1;
                v24 = a0;
                v25 = a1;
                v26 = 1;
                v14 = 1;
                v15 = a2;
                v16 = a3;
                v17 = 1;
                v10 = &v23;
                v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v12 = &v14;
                v13 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v1 = &g_530c58;
                v2 = 2;
                v5 = 0;
                v3 = &v10;
                v4 = 2;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v29, &v1);
                *((int128_t *)&v14) = *((int128_t *)&v29);
                v16 = *((long long *)&v30);
            }
            else
            {
                v19 = 1;
                v20 = a0;
                v21 = a1;
                v22 = 1;
                v10 = 1;
                v11 = a2;
                v12 = a3;
                v13 = 1;
                v23 = 1;
                v24 = v0;
                v25 = v9;
                v26 = 1;
                v1 = &v19;
                v2 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v3 = &v10;
                v4 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v5 = &v23;
                v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v14 = &g_530c78;
                v15 = 4;
                v18 = 0;
                v16 = &v1;
                v17 = 3;
                alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v27, &v14);
                *((int128_t *)&v14) = *((int128_t *)&v27);
                v16 = *((long long *)&v28);
                if (v34)
                    __rust_dealloc(v24);
            }
            if (!a5)
            {
                v23 = &v14;
                v24 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v1 = &g_5309a0;
                v2 = 2;
                v5 = 0;
                v3 = &v23;
                v4 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v1, v58, v59);
            }
            else
            {
                indicatif::multi::MultiProgress::suspend::h348a63437f205c82(a5, &v14, v59, v60, v61, v62);
            }
            if (!v14)
                return 0;
        }
        else if (!v34 << 1)
        {
            return 0;
        }
        __rust_dealloc(v0);
        return 0;
    }
    goto LABEL_4a60d8;
}
