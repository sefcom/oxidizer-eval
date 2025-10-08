long long fish::builtins::fish_key_reader::parse_flags(unsigned long long a0, unsigned long long a1, unsigned long long a2[3], char *a3, char *a4)
{
    void* v0;  // [bp-0x1e0]
    unsigned long long v1;  // [bp-0x1d8]
    void* v2;  // [bp-0x1d0]
    unsigned long long v3;  // [bp-0x1c8]
    char v4;  // [bp-0x1c8]
    unsigned long long v5;  // [bp-0x1c0]
    unsigned long long v6;  // [bp-0x1b8]
    int v7;  // [bp-0x1a8]
    int v8;  // [bp-0x1a8]
    int v9;  // [bp-0x1a0], Other Possible Types: unsigned long
    int v10;  // [sp-0x198], Other Possible Types: void*
    char v11;  // [sp-0x188]
    int v12;  // [bp-0x180], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0x178]
    struct_0 *v14;  // [bp-0x158]
    char v15;  // [bp-0x140], Other Possible Types: unsigned long long
    struct_0 *v16;  // [bp-0x138]
    unsigned long long v17;  // [bp-0x130]
    char v18;  // [bp-0x128]
    void* v19;  // [bp-0x118]
    unsigned long long v20;  // [bp-0x110]
    void* v21;  // [bp-0x108]
    struct_0 *v22;  // [bp-0x100]
    unsigned long long v23;  // [bp-0xf8]
    unsigned long long v24;  // [bp-0xf0]
    unsigned long long v25;  // [bp-0xe8]
    char *v26;  // [bp-0xe0]
    unsigned long long v27;  // [bp-0xd8]
    unsigned long long v28;  // [bp-0xd0]
    uint128_t v29;  // [bp-0xc8]
    void* v30;  // [bp-0xb0]
    uint128_t v31;  // [bp-0xa8]
    unsigned int v32;  // [bp-0x98]
    unsigned short v33;  // [bp-0x94]
    char v34;  // [bp-0x92]
    unsigned long long v35;  // [bp-0x90]
    unsigned long long v36;  // [bp-0x88]
    unsigned int v37;  // [bp-0x80]
    char v38;  // [bp-0x7c]
    unsigned long long v39;  // [bp-0x78]
    unsigned long long v40;  // [bp-0x70]
    unsigned int v41;  // [bp-0x68]
    char v42;  // [bp-0x64]
    unsigned long long v43;  // [bp-0x60]
    unsigned long long v44;  // [bp-0x58]
    unsigned int v45;  // [bp-0x50]
    char v46;  // [bp-0x4c]
    unsigned long long v47;  // [bp-0x48]
    unsigned long long v48;  // [bp-0x40]
    unsigned int v49;  // [bp-0x38]
    char v50;  // [bp-0x34]
    unsigned long long v52;  // r14
    unsigned int v53;  // eax
    char *v54;  // 4096
    void* v55;  // 4097
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rax
    unsigned long v59;  // rdi
    int v60;  // xmm0
    int v61;  // xmm2
    unsigned long long v62;  // rax
    unsigned long v63;  // rdi
    int v64;  // xmm0
    int v65;  // xmm2
    unsigned long long v66;  // r15
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    uint128_t *v69;  // rax
    unsigned long long v70;  // rdx

    v35 = "c";
    v36 = 10;
    v37 = 99;
    v38 = 0;
    v39 = "h";
    v40 = 4;
    v41 = 104;
    v42 = 0;
    v43 = "v";
    v44 = 7;
    v45 = 118;
    v46 = 0;
    v47 = "v";
    v48 = 7;
    v49 = 86;
    v50 = 0;
    v52 = a2[2];
    v15.collect(a2[1], a2[1] + v52 * 24);
    v14 = v16;
    v22 = v14;
    v23 = v17;
    v24 = "+";
    v25 = 5;
    v26 = &v35;
    v27 = 4;
    v28 = 4;
    v29 = 0;
    v30 = 0;
    v32 = 63;
    v34 = 1;
    v33 = 0;
    v19 = 0;
    v31 = 0;
    v20 = 8;
    v21 = 0;
    while (true)
    {
        v53 = v19.next_opt();
        if (v53 == 0x110000)
        {
            v55 = v30;
            if (v52 < v55)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c9b60); /* do not return */
            if (v52 == v55)
            {
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v19);
                core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v15, v14);
                core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(a2);
                return 2;
            }
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v5 = "E";
            v6 = 29;
            v3 = 0x8000000000000000;
            *((char *)&v8) = 4;
            v9 = v52 - v55;
            fish_printf::printf_impl::sprintf_locale(&v18, &v0, v3.localize(), v57, ".", &(char)v8, 1);
            v18.unwrap(&g_14c9b78);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v8);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
            *((int128_t *)&v8) = *((int128_t *)&v0);
            v10 = 0;
            a1.appendln(&(char)v8);
            v66 = 0x100000000;
            v67 = 1;
            break;
        }
        switch (v53)
        {
        case 59:
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v58 = g_14c6058[0].localize();
            v5 = "fish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP";
            v6 = 15;
            v4 = 0;
            v59 = v30 - 1;
            if (v30 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c9ab8); /* do not return */
            }
            else if (v59 < v23)
            {
                v60 = *((int128_t *)&v22->padding_0[16 * v59]);
                v61 = *((int128_t *)&v6);
                *((int128_t *)&v7) = *((int128_t *)&v3);
                v10 = v61;
                v11 = 1;
                v12 = v60;
                fish_printf::printf_impl::sprintf_locale(&v3, &v0, v58);
                v3.unwrap(&g_14c9ae8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v7);
                *((int128_t *)&v7) = *((int128_t *)&v0);
                v10 = 0;
                a1.append(&(char)v7);
                break;
            }
            else
            {
                core::panicking::panic_bounds_check(v59, v23, &g_14c9ad0); /* do not return */
            }
        case 63:
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v62 = g_14c5fc8[0].localize();
            v5 = "fish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP";
            v6 = 15;
            v4 = 0;
            v63 = v30 - 1;
            if (v30 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c9b00); /* do not return */
            }
            else if (v63 < v23)
            {
                v64 = *((int128_t *)&v22->padding_0[16 * v63]);
                v65 = *((int128_t *)&v6);
                *((int128_t *)&v7) = *((int128_t *)&v3);
                v10 = v65;
                v11 = 1;
                v12 = v64;
                fish_printf::printf_impl::sprintf_locale(&v3, &v0, v62);
                v3.unwrap(&g_14c9b30);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v7);
                *((int128_t *)&v7) = *((int128_t *)&v0);
                v10 = 0;
                a1.append(&(char)v7);
            }
            else
            {
                core::panicking::panic_bounds_check(v63, v23, &g_14c9b18); /* do not return */
            }
        case 104:
            fish::print_help::print_help("fish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", 15);
            goto LABEL_135178e;
        case 118:
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v5 = "%";
            v6 = 15;
            v3 = 0x8000000000000000;
            v68 = v3.localize();
            v69 = _ZN4fish6common12PROGRAM_NAME17h6212e6221159d343E.get();
            if (!v69)
                core::option::unwrap_failed(&g_14c9a88); /* do not return */
            *((char *)&v8) = 1;
            *((uint128_t *)&v9) = *(v69);
            v11 = 0;
            v12 = "4.1.0-48-gdb6a7d26c";
            v13 = 19;
            fish_printf::printf_impl::sprintf_locale(&v18, &v0, v68, v70, ".", &(char)v8, 2);
            v18.unwrap(&g_14c9aa0);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v8);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
            *((int128_t *)&v8) = *((int128_t *)&v0);
            v10 = 0;
            a0.appendln(&(char)v8);
LABEL_135178e:
            v66 = 0;
            v67 = 0;
            goto LABEL_1351793;
        case 86:
            v54 = a4;
        case 99:
            *(v54) = 1;
            continue;
        default:
            fish::builtins::fish_key_reader::parse_flags::panic_cold_explicit(); /* do not return */
        }
    }
LABEL_1351793:
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v19);
    core::ptr::drop_in_place<alloc::vec::Vec<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v15, v14);
    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(a2);
    return v66 | v67;
}
