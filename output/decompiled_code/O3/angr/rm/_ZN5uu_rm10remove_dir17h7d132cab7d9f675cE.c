long long uu_rm::remove_dir::h7d132cab7d9f675c(unsigned long long a0, unsigned long long a1, char a2[7])
{
    unsigned long v0;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xc0]
    struct struct_0 **v2;  // [sp-0xb8]
    unsigned long long v3;  // [sp-0xb0]
    void* v4;  // [sp-0xa8]
    unsigned long v5;  // [sp-0x98], Other Possible Types: unsigned long long
    int v6;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x88]
    char v8;  // [sp-0x80]
    char *v9;  // [sp-0x78]
    unsigned long v10;  // [sp-0x70], Other Possible Types: unsigned long long
    struct struct_0 **v11;  // [sp-0x68]
    unsigned long long v12;  // [sp-0x60]
    char v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    char *v15;  // [sp-0x48]
    unsigned long long v16;  // [sp-0x40]
    unsigned long long v17;  // [sp-0x38]
    char v18;  // [sp-0x30]
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rsi
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rax
    char *v27;  // rax
    unsigned long long v28;  // rsi
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rax

    if (!(char)uu_rm::prompt_dir::h3ebab050e61d8097(a0, a1, a2[6]))
    {
LABEL_4b8230:
        return 0;
    }
    std::fs::read_dir::h67bbb91b5f22fd39(&v13, a0, a1);
    if (v18 == 2)
    {
        v5 = uucore::util_name::h60d842bf27b05e82();
        v6 = v21;
        v9 = &v5;
        v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
        v0 = &g_527970;
        v1 = 2;
        v4 = 0;
        v2 = &v9;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v22, v21);
        v5 = 1;
        v6 = a0;
        v7 = a1;
        v8 = 1;
        v9 = &v5;
        v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        v0 = &g_527aa8;
        v1 = 2;
        v4 = 0;
        v2 = &v9;
        v3 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v22, v21);
        if (v14 == 2)
            goto LABEL_4b832d;
        v26 = ::0x4b5400::core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h5145ffa430dccd8e(&v13);
    }
    else
    {
        v17 = *((long long *)&v13);
        v18 = v14;
        if (!a2[4] && !a2[3])
        {
            v5 = uucore::util_name::h60d842bf27b05e82();
            v6 = v24;
            v9 = &v5;
            v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v0 = &g_527970;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v25, v24);
            v5 = 1;
            v6 = a0;
            v7 = a1;
            v8 = 1;
            v9 = &v5;
            v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v0 = &g_527a50;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v25, v24);
            goto LABEL_4b8319;
        }
        _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&v0, &v17, v23);
        if (v0)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::hef23df45bf09fd2e(&v0);
            v5 = uucore::util_name::h60d842bf27b05e82();
            v6 = v23;
            v9 = &v5;
            v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v0 = &g_527970;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v28, v23);
            v5 = 1;
            v6 = a0;
            v7 = a1;
            v8 = 1;
            v9 = &v5;
            v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v0 = &g_527aa8;
            v1 = 2;
            v4 = 0;
            v2 = &v9;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v28, v23);
            goto LABEL_4b8319;
        }
        core::ptr::drop_in_place$LT$core..option..Option$LT$core..result..Result$LT$std..fs..DirEntry$C$std..io..error..Error$GT$$GT$$GT$::hef23df45bf09fd2e(&v0);
        v27 = std::fs::remove_dir::h3ace2cb00c00de8e(a0, a1, v23);
        if (v27)
        {
            v15 = v27;
            if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(v27) == 1)
            {
                v5 = uucore::util_name::h60d842bf27b05e82();
                v6 = v23;
                v9 = &v5;
                v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                v0 = &g_527970;
                v1 = 2;
                v4 = 0;
                v2 = &v9;
                v3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v30, v23);
                v5 = 1;
                v6 = a0;
                v7 = a1;
                v8 = 1;
                v9 = &v5;
                v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v0 = &g_5279b0;
                v1 = 2;
                v4 = 0;
                v2 = &v9;
                v3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v30, v23);
            }
            else
            {
                v5 = uucore::util_name::h60d842bf27b05e82();
                v6 = v23;
                v9 = &v5;
                v10 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                v0 = &g_527970;
                v1 = 2;
                v4 = 0;
                v2 = &v9;
                v3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v31, v23);
                v5 = 1;
                v6 = a0;
                v7 = a1;
                v8 = 1;
                v9 = &v5;
                v10 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v11 = &v15;
                v12 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                v0 = &g_5279d0;
                v1 = 3;
                v4 = 0;
                v2 = &v9;
                v3 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v31, v23);
            }
            ::0x4b54d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&v15);
LABEL_4b8319:
            v26 = ::0x4b5400::core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h5145ffa430dccd8e(&v17);
            if (v14 == 2)
            {
LABEL_4b832d:
                v26 = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hfd9476c8e1bbd8eb(&v13);
            }
        }
        else
        {
            if (a2[5])
            {
                uu_rm::normalize::hc5c72b2dd9f7b482();
                v5 = 1;
                *((int128_t *)&v6) = *((int128_t *)&v10);
                v8 = 1;
                v15 = &v5;
                v16 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v0 = &g_527a88;
                v1 = 2;
                v4 = 0;
                v2 = &v15;
                v3 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&v0, v29, v23);
                ::0x4b54b0::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h7c5c2bfda3b8aa48(&v9);
            }
            ::0x4b5400::core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h5145ffa430dccd8e(&v17);
            if (v14 != 2)
                return 0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..ReadDir$C$std..io..error..Error$GT$$GT$::hfd9476c8e1bbd8eb(&v13);
            goto LABEL_4b8230;
        }
    }
    v32 = v26 | -0x100 | 1;
    return v32;
}
