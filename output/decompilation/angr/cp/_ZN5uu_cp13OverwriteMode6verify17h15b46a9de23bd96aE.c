long long uu_cp::OverwriteMode::verify::h15b46a9de23bd96a(struct_2 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3, char a4)
{
    struct struct_1 **v0;  // [sp-0x130]
    unsigned long long v1;  // [sp-0x128]
    char *v2;  // [sp-0x120], Other Possible Types: struct struct_0 **, struct struct_1 **, unsigned long long
    int v3;  // [sp-0x118], Other Possible Types: unsigned long long
    char *v4;  // [sp-0x110], Other Possible Types: void*
    unsigned long long v5;  // [sp-0x108]
    char *v6;  // [sp-0x100], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xf8]
    struct struct_3 **v8;  // [sp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xe8], Other Possible Types: char
    void* v10;  // [sp-0xe0]
    struct struct_0 **v11;  // [sp-0xd0], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0xc8]
    unsigned long long v13;  // [sp-0xc0]
    char v14;  // [sp-0xb8]
    unsigned long v15;  // [sp-0xb0], Other Possible Types: unsigned long long
    int v16;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned long long v17;  // [sp-0x98]
    struct struct_0 **v18;  // [bp-0x88], Other Possible Types: unsigned long
    unsigned long long v19;  // [sp-0x80]
    char v20;  // [bp-0x78]
    char v21;  // [bp-0x70]
    char v22;  // [bp-0x60]
    int v23;  // [bp-0x58], Other Possible Types: unsigned long
    unsigned long long v24;  // [sp-0x48]
    unsigned long v25;  // [sp-0x38], Other Possible Types: unsigned long long
    unsigned long long v27;  // rax
    unsigned long v28;  // rdx
    unsigned long v29;  // rdx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    char v32;  // bpl

    if ((char)a1)
    {
        v27 = a1 & 4294967295;
        if ((unsigned int)v27 != 1)
        {
            if (a4)
            {
                v6 = 1;
                v7 = a2;
                v8 = a3;
                v9 = 1;
                v18 = &v6;
                v19 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v0 = &g_5b5dd8;
                v1 = 2;
                v4 = 0;
                v2 = &v18;
                v3 = 1;
                v27 = std::io::stdio::_print::he918bceb0c89db46(&v0);
            }
            a0->field_0 = 8;
            a0->field_8 = 0;
            return v27;
        }
        else
        {
            uu_cp::file_mode_for_interactive_overwrite::h819430914012e276(&v18, a2, a3);
            if (v18 == 0x8000000000000000)
            {
                v6 = uucore::util_name::h60d842bf27b05e82();
                v7 = v29;
                v11 = &v6;
                v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                v0 = &g_5b5cc8;
                v1 = 2;
                v4 = 0;
                v2 = &v11;
                v3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                v6 = 1;
                v7 = a2;
                v8 = a3;
                v9 = 1;
                v11 = &v6;
                v12 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v0 = &g_5b5e48;
                v1 = 2;
                v4 = 0;
                v2 = &v11;
                v3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                v0 = &g_5b5e38;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v3) = 0;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                v23 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v31 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v23);
                if (v31)
                {
                    v16 = v31;
                    v6 = uucore::util_name::h60d842bf27b05e82();
                    v7 = v29;
                    v11 = &v6;
                    v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v0 = &g_5b5cc8;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v11;
                    v3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                    v6 = &v16;
                    v7 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v0 = &g_5b5ce8;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v6;
                    v3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                }
                v32 = uucore::read_yes::hc350e858ab85cf03();
                v27 = 0x8000000000000000;
                if (v18 != 0x8000000000000000)
                {
                    ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v18);
                    v27 = ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v21);
                }
            }
            else
            {
                v24 = *((long long *)&v20);
                *((int128_t *)&v23) = *((int128_t *)&v18);
                v17 = *((long long *)&v22);
                *((int128_t *)&v16) = *((int128_t *)&v21);
                v6 = uucore::util_name::h60d842bf27b05e82();
                v7 = v28;
                v11 = &v6;
                v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                v0 = &g_5b5cc8;
                v1 = 2;
                v4 = 0;
                v2 = &v11;
                v3 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                v11 = 1;
                v12 = a2;
                v13 = a3;
                v14 = 1;
                v0 = &v11;
                v1 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                v2 = &v23;
                v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v4 = &v16;
                v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v6 = &g_5b5df8;
                v7 = 4;
                v10 = 0;
                v8 = &v0;
                v9 = 3;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v6);
                v0 = &g_5b5e38;
                v1 = 1;
                v2 = 8;
                *((uint128_t *)&v3) = 0;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                v25 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                v30 = _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(&v25);
                if (v30)
                {
                    v15 = v30;
                    v6 = uucore::util_name::h60d842bf27b05e82();
                    v7 = v28;
                    v11 = &v6;
                    v12 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h52491f3ba70e88c7;
                    v0 = &g_5b5cc8;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v11;
                    v3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                    v6 = &v15;
                    v7 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
                    v0 = &g_5b5ce8;
                    v1 = 2;
                    v4 = 0;
                    v2 = &v6;
                    v3 = 1;
                    std::io::stdio::_eprint::hcdfeec148c7134f7(&v0);
                    std::process::exit::hf8c1b9d00a2a86fd(1); /* do not return */
                }
                v32 = uucore::read_yes::hc350e858ab85cf03();
                ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v16);
                v27 = ::0x4fc410::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&v23);
            }
            if (!v32)
            {
                a0->field_0 = 8;
                a0->field_8 = 1;
                return v27;
            }
        }
    }
    a0->field_0 = 13;
    return v27;
}
