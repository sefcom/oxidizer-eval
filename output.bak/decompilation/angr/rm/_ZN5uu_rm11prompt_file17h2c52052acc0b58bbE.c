long long uu_rm::prompt_file::h2c52052acc0b58bb(unsigned long long a0, unsigned long long a1, char a2)
{
    unsigned int v0;  // [sp-0x164]
    char *v1;  // [sp-0x160], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x158]
    struct struct_1 **v3;  // [sp-0x150], Other Possible Types: struct struct_2 **, unsigned long long
    int v4;  // [bp-0x148], Other Possible Types: char, unsigned long long
    void* v5;  // [sp-0x140]
    unsigned long v6;  // [sp-0x130], Other Possible Types: unsigned long long
    struct struct_0 **v7;  // [sp-0x128], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x120]
    unsigned long long v9;  // [sp-0x118]
    char v10;  // [sp-0x110]
    struct struct_1 **v11;  // [sp-0x108], Other Possible Types: unsigned long long
    unsigned int v12;  // [bp-0x100], Other Possible Types: unsigned short, unsigned long
    unsigned short v13;  // [sp-0xfc]
    unsigned long v14;  // [sp-0xf8], Other Possible Types: unsigned long long
    char v15;  // [bp-0xf0], Other Possible Types: unsigned long, unsigned long long
    char v16;  // [bp-0xec]
    char v17;  // [bp-0xe8]
    char *v18;  // [bp-0xe0]
    unsigned long long v19;  // [sp-0xd8]
    struct struct_0 **v20;  // [sp-0xd0], Other Possible Types: struct struct_1 **, unsigned long long
    int v21;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v22;  // [sp-0xc0]
    char v23;  // [bp-0xa8]
    char v24;  // [bp-0x90]
    unsigned long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned int v32;  // eax
    unsigned long v33;  // rdx
    unsigned long v34;  // rdx
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax

    switch (a2)
    {
    case 0:
        v27 = v26 | -0x100 | 1;
        return v27;
    case 2:
        std::fs::symlink_metadata::h9e12b59fb6df20f8(&v18, a0, a1);
        if ((int)v18 != 2 && (0xf000 & *((int *)&v23)) == 0xa000)
        {
            v7 = uucore::util_name::h60d842bf27b05e82();
            v8 = v28;
            v11 = &v7;
            v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v1 = &g_527970;
            v2 = 2;
            v5 = 0;
            v3 = &v11;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            v7 = 1;
            v8 = a0;
            v9 = a1;
            v10 = 1;
            v11 = &v7;
            v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            v1 = &g_527ae8;
            v2 = 2;
            v5 = 0;
            v3 = &v11;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            v1 = &g_527b08;
            v2 = 1;
            v3 = 8;
            *((int128_t *)&v4) = 0;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            v6 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
            v29 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v6);
            if (!v29)
            {
                v32 = uucore::read_yes::hc350e858ab85cf03();
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&v18);
                return v27;
            }
            v15 = v29;
            v7 = uucore::util_name::h60d842bf27b05e82();
            v8 = v28;
            v11 = &v7;
            v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
            v1 = &g_527970;
            v2 = 2;
            v5 = 0;
            v3 = &v11;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            v7 = &v15;
            v8 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            v1 = &g_527b18;
            v2 = 2;
            v5 = 0;
            v3 = &v7;
            v4 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&v1);
            std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
        }
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&v18);
    default:
        v11 = 0x1b600000000;
        v12 = 0;
        v13 = 0;
        v12 = 257;
        std::fs::OpenOptions::open::hd10b8d5ca5b809f9(&v15, &v11, a0, a1);
        if (*((int *)&v15))
        {
            v18 = *((long long *)&v17);
            v27 = ::0x4b54d0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h333f14ee3ed91a78(&v18) | -0x100 | 1;
            if ((char)std::io::error::Error::kind::hb2ff5fa058639b3d(*((long long *)&v17)) == 1)
            {
                v27 = uu_rm::prompt_file_permission_readonly::h2197b873951768fc(a0, a1);
                return v27;
            }
            return v27;
        }
        else
        {
            v0 = *((int *)&v16);
            std::fs::File::metadata::he899a18112e6f19e(&v18, &v0);
            if ((int)v18 == 2)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&v18);
                v32 = a1 | -0x100 | 1;
                break;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h539b7fb1f87034ca(&v18);
                if (!(a2 == 2) || !(((char)*((int *)&v23) & 146)))
                {
                    core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa666ae70153c401();
                    uu_rm::prompt_file_permission_readonly::h2197b873951768fc(a0, a1);
                    return v27;
                }
                if (!*((long long *)&v24))
                {
                    v1 = uucore::util_name::h60d842bf27b05e82();
                    v2 = v34;
                    v7 = &v1;
                    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    v18 = &g_527970;
                    v19 = 2;
                    v22 = 0;
                    v20 = &v7;
                    v21 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                    v1 = 1;
                    v2 = a0;
                    v3 = a1;
                    v4 = 1;
                    v7 = &v1;
                    v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v18 = &g_527b38;
                    v19 = 2;
                    v22 = 0;
                    v20 = &v7;
                    v21 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                    v18 = &g_527b08;
                    v19 = 1;
                    v20 = 8;
                    *((int128_t *)&v21) = 0;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                    v14 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                    v36 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v14);
                    if (v36)
                    {
                        v6 = v36;
                        v1 = uucore::util_name::h60d842bf27b05e82();
                        v2 = v34;
                        v7 = &v1;
                        v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                        v18 = &g_527970;
                        v19 = 2;
                        v22 = 0;
                        v20 = &v7;
                        v21 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                        v1 = &v6;
                        v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v18 = &g_527b18;
                        v19 = 2;
                        v22 = 0;
                        v20 = &v1;
                        v21 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                    }
                }
                else
                {
                    v1 = uucore::util_name::h60d842bf27b05e82();
                    v2 = v33;
                    v7 = &v1;
                    v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                    v18 = &g_527970;
                    v19 = 2;
                    v22 = 0;
                    v20 = &v7;
                    v21 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                    v1 = 1;
                    v2 = a0;
                    v3 = a1;
                    v4 = 1;
                    v7 = &v1;
                    v8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    v18 = &g_527b58;
                    v19 = 2;
                    v22 = 0;
                    v20 = &v7;
                    v21 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                    v18 = &g_527b08;
                    v19 = 1;
                    v20 = 8;
                    *((int128_t *)&v21) = 0;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                    v14 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                    v35 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v14);
                    if (v35)
                    {
                        v6 = v35;
                        v1 = uucore::util_name::h60d842bf27b05e82();
                        v2 = v33;
                        v7 = &v1;
                        v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
                        v18 = &g_527970;
                        v19 = 2;
                        v22 = 0;
                        v20 = &v7;
                        v21 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                        v1 = &v6;
                        v2 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                        v18 = &g_527b18;
                        v19 = 2;
                        v22 = 0;
                        v20 = &v1;
                        v21 = 1;
                        std::io::stdio::_eprint::hcdfeec148c7134f7(&v18);
                        std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                    }
                }
                v32 = uucore::read_yes::hc350e858ab85cf03();
                break;
            }
            core::ptr::drop_in_place$LT$std..fs..File$GT$::hfa666ae70153c401();
            v27 = v32;
            return v27;
        }
    }
}
