long long uu_rm::prompt_file_permission_readonly::h2197b873951768fc(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x150], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x148]
    struct struct_0 **v2;  // [sp-0x140], Other Possible Types: struct struct_1 **, unsigned long long
    int v3;  // [sp-0x138], Other Possible Types: unsigned long long
    void* v4;  // [sp-0x130]
    struct struct_0 **v5;  // [sp-0x120]
    unsigned long long v6;  // [sp-0x118]
    unsigned long v7;  // [sp-0x110], Other Possible Types: unsigned long long
    char *v8;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x100]
    unsigned long long v10;  // [sp-0xf8]
    char v11;  // [sp-0xf0]
    unsigned long v12;  // [sp-0xe8], Other Possible Types: unsigned long long
    char v13;  // [bp-0xe0]
    char v14;  // [bp-0xa8]
    char v15;  // [bp-0x90]
    unsigned int v17;  // ebp
    unsigned long v18;  // rdx
    unsigned long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    std::fs::metadata::h6df0603967c240bb(&v13, a0, a1);
    if (*((int *)&v13) != 2)
    {
        v17 = vvar_33{reg 56} | -0x100 | 1;
        if ((v14 & 146))
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&v13);
            return v17;
        }
        else if (!*((long long *)&v15))
        {
            v8 = uucore::util_name::h60d842bf27b05e82();
            v9 = v19;
            v5 = &v8;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v0 = &g_527970;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v8 = 1;
            v9 = a0;
            v10 = a1;
            v11 = 1;
            v5 = &v8;
            v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v0 = &g_527b78;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v0 = &g_527b08;
            v1 = 1;
            v2 = 8;
            *((int128_t *)&v3) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v12 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v21 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v12);
            if (!v21)
            {
                vvar_314{reg 16} = uucore::read_yes::hc350e858ab85cf03();
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&v13);
                return v17;
            }
            v7 = v21;
            v8 = uucore::util_name::h60d842bf27b05e82();
            v9 = v19;
            v5 = &v8;
            v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v0 = &g_527970;
            v1 = 2;
            v4 = 0;
            v2 = &v5;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            v8 = &v7;
            v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v0 = &g_527b18;
            v1 = 2;
            v4 = 0;
            v2 = &v8;
            v3 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
            std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
        }
    }
    v8 = uucore::util_name::h60d842bf27b05e82();
    v9 = v18;
    v5 = &v8;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
    v0 = &g_527970;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
    v8 = 1;
    v9 = a0;
    v10 = a1;
    v11 = 1;
    v5 = &v8;
    v6 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    v0 = &g_527b98;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
    v0 = &g_527b08;
    v1 = 1;
    v2 = 8;
    *((int128_t *)&v3) = 0;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
    v12 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
    v20 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v12);
    if (!v20)
    {
        v17 = uucore::read_yes::hc350e858ab85cf03();
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&v13);
        return v17;
    }
    v7 = v20;
    v8 = uucore::util_name::h60d842bf27b05e82();
    v9 = v18;
    v5 = &v8;
    v6 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
    v0 = &g_527970;
    v1 = 2;
    v4 = 0;
    v2 = &v5;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
    v8 = &v7;
    v9 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
    v0 = &g_527b18;
    v1 = 2;
    v4 = 0;
    v2 = &v8;
    v3 = 1;
    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
}
