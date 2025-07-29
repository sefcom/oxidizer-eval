long long uu_ls::extract_quoting_style(unsigned long long a0, unsigned int a1)
{
    struct struct_0 v0[8];  // [bp-0x1a0]
    int v1;  // [bp-0x198]
    int v2;  // [bp-0x198]
    unsigned long long v3;  // [bp-0x188]
    int v4;  // [bp-0x178], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [bp-0x170]
    int v6;  // [bp-0x168], Other Possible Types: char *, unsigned long long
    int v7;  // [bp-0x160], Other Possible Types: unsigned long long
    int v8;  // [bp-0x158], Other Possible Types: void*
    int v9;  // [bp-0x148]
    unsigned long long v10;  // [bp-0x138]
    unsigned long long v11;  // [bp-0x130]
    unsigned long long v12;  // [bp-0x128]
    unsigned long long v13;  // [bp-0x120]
    char v14;  // [bp-0x118]
    char v15;  // [bp-0x110]
    unsigned long long v16;  // [bp-0x100]
    int v17;  // [bp-0xf8], Other Possible Types: char *, unsigned long long
    unsigned long long v18;  // [bp-0xf0]
    unsigned long long v19;  // [bp-0xe8]
    int v20;  // [bp-0xe0]
    unsigned long long v21;  // [bp-0xd8]
    unsigned long long v22;  // [bp-0xd0]
    char v23;  // [bp-0xc8]
    unsigned long long v24;  // [bp-0xc0]
    unsigned long long v25;  // [bp-0xb8]
    int v26;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v27;  // [bp-0x98]
    int v28;  // [bp-0x88]
    unsigned long long v29;  // [bp-0x78]
    int v30;  // [bp-0x70]
    unsigned long long v31;  // [bp-0x60]
    char v32;  // [bp-0x50]
    unsigned long long v34[3];  // rax
    unsigned long v35;  // rbp
    char v36;  // bpl
    char v37;  // r15b
    unsigned long v38;  // r14
    int v39;  // xmm0
    int v40;  // xmm2
    int v41;  // xmm3

    v4.try_get_one(a0, _ZN5uu_ls7options13QUOTING_STYLE17h884a2ae66fea2b2bE, g_6a0d90);
    v34 = _ZN5uu_ls7options13QUOTING_STYLE17h884a2ae66fea2b2bE.unwrap(g_6a0d90, &v4);
    if (v34)
    {
        v35 = (unsigned int)uu_ls::match_quoting_style_name(v34[1], v34[2], a1);
        if ((char)v35 == 4)
        {
            v4 = &g_69f150;
            v5 = 1;
            v6 = &v0[0].field_0;
            *((uint128_t *)&v7) = 0;
            core::panicking::panic_fmt(&v4, &g_69f180); /* do not return */
        }
        a1 = (v35 & 4294967295) >> 16;
    }
    else if ((char)a0.get_flag(_ZN5uu_ls7options7quoting7LITERAL17h5ab5c78cae3915a1E, g_6a17f8))
    {
LABEL_522bb5:
        v36 = 3;
    }
    else if ((char)a0.get_flag(_ZN5uu_ls7options7quoting6ESCAPE17h0e0d83b6fced9a18E, g_6a17e8))
    {
        v36 = 2;
    }
    else if ((char)a0.get_flag(_ZN5uu_ls7options7quoting1C17h952e5bdbbba18c31E, g_6a1808))
    {
        v37 = 2;
        v36 = 2;
    }
    else
    {
        if (!(!(char)a0.get_flag(_ZN5uu_ls7options5DIRED17hc1e0b45eb87eb0feE, g_6a0f10)))
            goto LABEL_522bb5;
        std::env::var(&v14, "QUOTING_STYLEls-invalid-quoting-stylefile-typeslashCOLUMNS: ls-invalid-columns-widthsihuman-readable: warning: patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help", 13);
        if ((v14 & 1))
        {
LABEL_522c4a:
            core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v14);
LABEL_522c57:
            v4 = std::io::stdio::stdout();
            v36 = (std::sys::pal::unix::io::is_terminal() ^ 1) * 2 + 1;
        }
        else
        {
            memcpy(&v23, &v15, 16);
            v25 = v16;
            v38 = (unsigned int)uu_ls::match_quoting_style_name(v24, v16, a1);
            if ((char)v38 == 4)
            {
                v4.to_vec("programlsstyle\n", 7);
                v27 = v6;
                memcpy(&v26, &v4, 16);
                std::env::args(&v32);
                (char)v17.next(&v32);
                if ((char)(((0 ^ v17) & (0 ^ -(v17))) >> 63))
                {
                    v4.to_vec("lsstyle\n", 2);
                    v3 = v6;
                    v39 = *((int128_t *)&v4);
                }
                else
                {
                    v3 = v19;
                    v39 = *((int128_t *)&v17);
                }
                v1 = v39;
                v28 = v26;
                v29 = v27;
                v30 = v1;
                v31 = v3;
                v4.to_vec("style\n", 5);
                v3 = v6;
                memcpy(&v1, &v4, 16);
                v4.clone(&v23);
                v19 = v3;
                v17 = v2;
                *((int128_t *)&v20) = *((int128_t *)&v4);
                v22 = v6;
                v40 = *((int128_t *)&v29);
                v41 = (int128_t)(&v30)[8];
                v4 = v28;
                v6 = v40;
                v8 = v41;
                v12 = v21;
                v13 = v22;
                v10 = v19;
                v11 = (long long)v20;
                v9 = v2;
                (char)v17.from_iter(&v4);
                uucore::mods::locale::get_message_with_args(&v28, "ls-invalid-quoting-stylefile-typeslashCOLUMNS: ls-invalid-columns-widthsihuman-readable: warning: patternBLOCKSIZEBLOCK_SIZELS_BLOCK_SIZEPOSIXLY_CORRECT*~.*~ls-invalid-hide-patternls-invalid-ignore-patternTABSIZE(uutils coreutils) 0.1.0ls-help-print-helpls", 24, &(char)v17);
                v17 = &v28;
                v18 = <alloc::string::String as core::fmt::Display>::fmt;
                v4 = &g_69f160;
                v5 = 2;
                v8 = 0;
                v6 = &v17;
                v7 = 1;
                std::io::stdio::_eprint(&v4);
                ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v28);
                core::ptr::drop_in_place<std::env::Args>(&v32);
                ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v23);
                if (!(v14 & 1))
                    goto LABEL_522c57;
                goto LABEL_522c4a;
            }
            else
            {
                ::0x51c9f0::core::ptr::drop_in_place<alloc::string::String>(&v23);
                if ((v14 & 1))
                    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v14);
                a1 = (unsigned int)v38 >> 16;
            }
        }
    }
    return v36 | v37 * 0x100 | a1 * 0x10000;
}
