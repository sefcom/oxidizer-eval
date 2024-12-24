long long uu_rm::prompt_file::h96542cb435e05a26(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned int v0;  // [sp-0x164]
    unsigned long v1;  // [sp-0x160], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x158]
    unsigned long long v3;  // [sp-0x150]
    int v4;  // [bp-0x148], Other Possible Types: char, unsigned long long
    void* v5;  // [sp-0x140]
    unsigned long v6;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long v7;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x120]
    unsigned long long v9;  // [sp-0x118]
    char v10;  // [sp-0x110]
    unsigned long v11;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned int v12;  // [bp-0x100], Other Possible Types: unsigned short, unsigned long
    unsigned short v13;  // [sp-0xfc]
    unsigned long v14;  // [sp-0xf8], Other Possible Types: unsigned long long
    char v15;  // [bp-0xf0], Other Possible Types: unsigned long, unsigned long long
    char v16;  // [bp-0xec]
    char v17;  // [bp-0xe8]
    char v18;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v19;  // [sp-0xd8]
    unsigned long long v20;  // [sp-0xd0]
    int v21;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v22;  // [sp-0xc0]
    char v23;  // [bp-0xa8]
    char v24;  // [bp-0x90]
    unsigned long long v26;  // rbp
    unsigned long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rax
    unsigned long long v34;  // rdi
    unsigned int v35;  // eax
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rsi
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdi
    unsigned long long v42;  // rdx

    v26 = a2;
    if ((char)v26 == 2)
    {
        std::fs::symlink_metadata::h49da24ba8fbf3320(&v18, a0, a1);
        if (!(*((int *)&v18) == 2) && !((0xf000 & *((int *)&v23)) != 0xa000))
        {
            v7 = uucore::util_name::h412db5e565a079f3();
            v8 = v29;
            v11 = &v7;
            v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
            v1 = &g_527d88;
            v2 = 2;
            v5 = 0;
            v3 = &v11;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v30, v29);
            v7 = 1;
            v8 = a0;
            v9 = a1;
            v10 = 1;
            v11 = &v7;
            v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v1 = &g_527f00;
            v2 = 2;
            v5 = 0;
            v3 = &v11;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v30, v29);
            v1 = &g_527f20;
            v2 = 1;
            v3 = 8;
            *((int128_t *)&v4) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v30, v29);
            v6 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v31 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v6, v30, v29);
            if (v31)
            {
                v15 = v31;
                v7 = uucore::util_name::h412db5e565a079f3();
                v8 = v29;
                v11 = &v7;
                v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
                v1 = &g_527d88;
                v2 = 2;
                v5 = 0;
                v3 = &v11;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v30, v29);
                v7 = &v15;
                v8 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v1 = &g_527f30;
                v2 = 2;
                v5 = 0;
                v3 = &v7;
                v4 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v1, v30, v29);
                std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
            }
            v35 = uucore::read_yes::h34a9f501e29598a6(v34, v30, v29);
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc3bb3b0cc7fe1192(&v18);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc3bb3b0cc7fe1192(&v18);
            goto LABEL_4b8834;
        }
    }
    else
    {
        v28 = v27 | -0x100 | 1;
        if (!(unsigned int)v26)
            return v28;
LABEL_4b8834:
        v11 = 0x1b600000000;
        v12 = 0;
        v13 = 0;
        v12 = 257;
        std::fs::OpenOptions::open::h45910c9813957bab(&v15, &v11, a0, a1);
        if (*((int *)&v15))
        {
            v18 = *((long long *)&v17);
            v28 = ::0x4b5440::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hb47d7ad350d2ee6b(&v18) | -0x100 | 1;
            if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(*((long long *)&v17)) == 1)
            {
                v28 = uu_rm::prompt_file_permission_readonly::h7acd7affe57f87c9(a0, a1);
                return v28;
            }
            return v28;
        }
        v0 = *((int *)&v16);
        std::fs::File::metadata::he899a18112e6f19e(&v18, &v0);
        if (*((int *)&v18) == 2)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc3bb3b0cc7fe1192(&v18);
            v35 = a1 | -0x100 | 1;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc3bb3b0cc7fe1192(&v18);
            if (!((char)v26 == 2) || !(((char)*((int *)&v23) & 146)))
            {
                core::ptr::drop_in_place$LT$std..fs..File$GT$::hd87de5931a187205(v0);
                vvar_586{reg 16} = uu_rm::prompt_file_permission_readonly::h7acd7affe57f87c9(a0, a1);
                return v28;
            }
            if (!*((long long *)&v24))
            {
                v1 = uucore::util_name::h412db5e565a079f3();
                v2 = v38;
                v7 = &v1;
                v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
                v18 = &g_527d88;
                v19 = 2;
                v22 = 0;
                v20 = &v7;
                v21 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v37, v38);
                v1 = 1;
                v2 = a0;
                v3 = a1;
                v4 = 1;
                v7 = &v1;
                v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v18 = &g_527f50;
                v19 = 2;
                v22 = 0;
                v20 = &v7;
                v21 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v37, v38);
                v18 = &g_527f20;
                v19 = 1;
                v20 = 8;
                *((int128_t *)&v21) = 0;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v37, v38);
                v14 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v40 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v14, v37, v38);
                if (v40)
                {
                    v6 = v40;
                    v1 = uucore::util_name::h412db5e565a079f3();
                    v2 = v38;
                    v7 = &v1;
                    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
                    v18 = &g_527d88;
                    v19 = 2;
                    v22 = 0;
                    v20 = &v7;
                    v21 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v37, v38);
                    v1 = &v6;
                    v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v18 = &g_527f30;
                    v19 = 2;
                    v22 = 0;
                    v20 = &v1;
                    v21 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v37, v38);
                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                }
            }
            else
            {
                v1 = uucore::util_name::h412db5e565a079f3();
                v2 = v36;
                v7 = &v1;
                v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
                v18 = &g_527d88;
                v19 = 2;
                v22 = 0;
                v20 = &v7;
                v21 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v37, v36);
                v1 = 1;
                v2 = a0;
                v3 = a1;
                v4 = 1;
                v7 = &v1;
                v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                v18 = &g_527f70;
                v19 = 2;
                v22 = 0;
                v20 = &v7;
                v21 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v37, v36);
                v18 = &g_527f20;
                v19 = 1;
                v20 = 8;
                *((int128_t *)&v21) = 0;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v37, v36);
                v14 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v39 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v14, v37, v36);
                if (v39)
                {
                    v6 = v39;
                    v1 = uucore::util_name::h412db5e565a079f3();
                    v2 = v36;
                    v7 = &v1;
                    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
                    v18 = &g_527d88;
                    v19 = 2;
                    v22 = 0;
                    v20 = &v7;
                    v21 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v37, v36);
                    v1 = &v6;
                    v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v18 = &g_527f30;
                    v19 = 2;
                    v22 = 0;
                    v20 = &v1;
                    v21 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18, v37, v36);
                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                }
            }
            v35 = uucore::read_yes::h34a9f501e29598a6(v41, v37, v42);
        }
        core::ptr::drop_in_place$LT$std..fs..File$GT$::hd87de5931a187205(v0);
    }
    v28 = v35;
    return v28;
}
