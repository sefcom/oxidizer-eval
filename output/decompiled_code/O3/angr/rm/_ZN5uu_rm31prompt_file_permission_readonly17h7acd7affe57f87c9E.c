long long uu_rm::prompt_file_permission_readonly::h7acd7affe57f87c9(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x148]
    unsigned long long v2;  // [sp-0x140]
    int v3;  // [sp-0x138], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x130]
    unsigned long v5;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v6;  // [sp-0x118]
    unsigned long v7;  // [sp-0x110], Other Possible Types: unsigned long long
    unsigned long v8;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x100]
    unsigned long long v10;  // [sp-0xf8]
    char v11;  // [sp-0xf0]
    unsigned long v12;  // [sp-0xe8], Other Possible Types: unsigned long long
    char v13;  // [bp-0xe0]
    char v14;  // [bp-0xa8]
    char v15;  // [bp-0x90]
    unsigned int v17;  // ebp
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rdi
    unsigned long long v24;  // rdx

    std::fs::metadata::h953a73cb1dbe22fc(&v13, a0, a1);
    if (*((int *)&v13) != 2)
    {
        v17 = vvar_33{reg 56} | -0x100 | 1;
        if ((v14 & 146))
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc3bb3b0cc7fe1192(&v13);
            return v17;
        }
        else if (!*((long long *)&v15))
        {
            v8 = uucore::util_name::h412db5e565a079f3();
            v9 = v20;
            v5 = &v8;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
            v0 = &g_527d88;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v20);
            v8 = 1;
            v9 = a0;
            v10 = a1;
            v11 = 1;
            v5 = &v8;
            v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v0 = &g_527f90;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v20);
            v0 = &g_527f20;
            v1 = 1;
            v2 = 8;
            *((int128_t *)&v3) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v20);
            v12 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v22 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v12, v19, v20);
            if (!v22)
            {
                vvar_314{reg 16} = uucore::read_yes::h34a9f501e29598a6(v23, v19, v24);
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc3bb3b0cc7fe1192(&v13);
                return v17;
            }
            v7 = v22;
            v8 = uucore::util_name::h412db5e565a079f3();
            v9 = v20;
            v5 = &v8;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
            v0 = &g_527d88;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v20);
            v8 = &v7;
            v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v0 = &g_527f30;
            v1 = 2;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v20);
            std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
        }
    }
    v8 = uucore::util_name::h412db5e565a079f3();
    v9 = v18;
    v5 = &v8;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
    v0 = &g_527d88;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v18);
    v8 = 1;
    v9 = a0;
    v10 = a1;
    v11 = 1;
    v5 = &v8;
    v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
    v0 = &g_527fb0;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v18);
    v0 = &g_527f20;
    v1 = 1;
    v2 = 8;
    *((int128_t *)&v3) = 0;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v18);
    v12 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    v21 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v12, v19, v18);
    if (!v21)
    {
        v17 = uucore::read_yes::h34a9f501e29598a6(v23, v19, v24);
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc3bb3b0cc7fe1192(&v13);
        return v17;
    }
    v7 = v21;
    v8 = uucore::util_name::h412db5e565a079f3();
    v9 = v18;
    v5 = &v8;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1f915d53daff3002;
    v0 = &g_527d88;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v18);
    v8 = &v7;
    v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
    v0 = &g_527f30;
    v1 = 2;
    v4 = 0;
    v2 = &v8;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0, v19, v18);
    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
}
