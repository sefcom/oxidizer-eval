void fish::builtins::read::parse_cmd_opts(unsigned long a0, unsigned long long a1[2305843009213693951], unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    char v0;  // [bp-0x249]
    unsigned long long v1[3];  // [bp-0x248]
    unsigned long long v2[3];  // [bp-0x248]
    unsigned long long v3[3];  // [bp-0x248]
    unsigned long long v4[3];  // [bp-0x248]
    unsigned long long v5[3];  // [bp-0x248]
    unsigned long long v6;  // [bp-0x240]
    void* v7;  // [bp-0x238], Other Possible Types: unsigned long long
    int v8;  // [bp-0x228], Other Possible Types: unsigned long long
    int v9;  // [bp-0x228]
    int v10;  // [bp-0x228]
    char v11;  // [bp-0x228]
    int v12;  // [bp-0x228]
    unsigned long long v14;  // [bp-0x220], Other Possible Types: unsigned long
    int v15;  // [bp-0x218], Other Possible Types: void*, unsigned long long, unsigned long
    unsigned long long v16;  // [bp-0x218]
    int v17;  // [bp-0x210]
    char v18;  // [bp-0x208]
    unsigned long long v19;  // [bp-0x200]
    void* v20;  // [bp-0x1f8], Other Possible Types: unsigned long long
    unsigned long v21;  // [bp-0x1e8]
    unsigned long v22;  // [bp-0x1e0]
    void* v23;  // [bp-0x1c8], Other Possible Types: char
    void* v24;  // [bp-0x1c8]
    unsigned long v25;  // [bp-0x1c0], Other Possible Types: unsigned long long
    void* v26;  // [bp-0x1b8], Other Possible Types: unsigned long
    unsigned long long v27[3];  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x1a0]
    unsigned long long v29;  // [bp-0x198]
    unsigned long long v30;  // [bp-0x190]
    unsigned long long v31;  // [bp-0x188]
    struct_2 *v32;  // [bp-0x180]
    void* v33;  // [bp-0x178]
    unsigned long long v34;  // [bp-0x170]
    void* v35;  // [bp-0x168]
    void* v36;  // [bp-0x160]
    unsigned long long v37;  // [bp-0x158]
    void* v38;  // [bp-0x150]
    int v39;  // [bp-0x148]
    void* v40;  // [bp-0x148]
    unsigned long long v41;  // [bp-0x140]
    void* v42;  // [sp-0x138], Other Possible Types: unsigned long long
    unsigned long long v43;  // [bp-0x130]
    unsigned long long v44;  // [bp-0x118]
    unsigned long long v45;  // [bp-0x100]
    unsigned long long v46;  // [bp-0xe8]
    void* v47;  // [bp-0xd0], Other Possible Types: unsigned long long
    unsigned short v48;  // [sp-0xc8]
    char v49;  // [sp-0xc6]
    char v50;  // [bp-0xc5], Other Possible Types: unsigned int
    char v51;  // [bp-0xc4]
    char v52;  // [bp-0xc3]
    char v53;  // [bp-0xc2]
    unsigned short v54;  // [bp-0xc1]
    char v55;  // [bp-0xc0]
    char v56;  // [bp-0xbf]
    void* v57;  // [bp-0xb8]
    unsigned long long v58;  // [bp-0xb0]
    void* v59;  // [bp-0xa8]
    unsigned long long v60[2305843009213693951];  // [bp-0xa0]
    unsigned long long v61;  // [bp-0x98]
    unsigned long long v62;  // [bp-0x90]
    unsigned long long v63;  // [bp-0x88]
    unsigned long long v64;  // [bp-0x80]
    unsigned long long v65;  // [bp-0x78]
    unsigned long long v66;  // [bp-0x70]
    int v67;  // [bp-0x68]
    unsigned long long v68;  // [bp-0x60]
    unsigned long long v69;  // [bp-0x58]
    void* v70;  // [bp-0x50]
    uint128_t v71;  // [bp-0x48]
    unsigned int v72;  // [bp-0x38]
    unsigned short v73;  // [bp-0x34]
    char v74;  // [bp-0x32]
    unsigned long v76;  // r13
    unsigned long long v77;  // r13
    unsigned long long v78;  // rax
    unsigned long long v79;  // rbx
    unsigned int v80;  // eax
    char v81;  // r15b
    struct_1 *v82;  // r15
    unsigned long long v83;  // r15
    unsigned long v84;  // rdi
    unsigned long v87;  // r14
    unsigned long long v89;  // rdx
    unsigned long v90;  // r14
    unsigned long long v91;  // rax
    unsigned long long v92;  // rax
    unsigned long long v93;  // rdx
    unsigned long long v94;  // rax
    int v95;  // xmm0
    int v96;  // xmm1
    unsigned long long v98;  // rdx
    unsigned long long v100;  // rdx

    if (!a2)
        core::panicking::panic_bounds_check(0, 0, &g_14cbce8); /* do not return */
    v21 = a1[0];
    v22 = a1[1];
    v49 = 0;
    v48 = 0x100;
    v43 = 0x8000000000000000;
    v44 = 0x8000000000000000;
    v40 = 0;
    v41 = 4;
    v42 = 0;
    v45 = 0x8000000000000000;
    v46 = 0x8000000000000000;
    v56 = 3;
    v47 = 0;
    v50 = 0;
    v54 = 0;
    v60[0] = a1;
    v61 = a2;
    v62 = "a";
    v63 = 27;
    v64 = &g_14cbaf0;
    v65 = 21;
    v66 = 4;
    *((uint128_t *)&v67) = 0;
    v70 = 0;
    v72 = 63;
    v74 = 1;
    v73 = 0;
    v57 = 0;
    v71 = 0;
    v58 = 8;
    v59 = 0;
    v0 = 3;
    v77 = v76 & 0xffffffffffff0000 | 0x100;
    v78 = fish::wgetopt::WGetopter::next_opt;
    while (true)
    {
        v79 = v78;
        v80 = v57.next_opt();
        if (v80 == 0x110000)
        {
            memcpy(v32, &v40, 144);
            v32->field_90 = v70;
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v57);
            return;
        }
        switch (v80)
        {
        case 1:
            v81 = 1;
            goto LABEL_136343f;
        case 58:
            v84 = v70 - 1;
            if (v70 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cbe20); /* do not return */
            }
            else if (v84 < a2)
            {
                fish::builtins::shared::builtin_missing_argument(a3, a4, v21, v22, a1[2 * v84], a1[1 + 2 * v84], 1);
                v32->field_8 = 2;
                v32->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v57);
                core::ptr::drop_in_place<fish::builtins::read::Options>(&v40);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v84, a2, &g_14cbe38); /* do not return */
            }
        case 59:
            v84 = v70 - 1;
            if (v70 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cbe50); /* do not return */
            }
            else if (v84 < a2)
            {
                fish::builtins::shared::builtin_unexpected_argument(a3, a4, v21, v22, a1[2 * v84], a1[1 + 2 * v84], 1);
                v32->field_8 = 2;
                v32->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v57);
                core::ptr::drop_in_place<fish::builtins::read::Options>(&v40);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v84, a2, &g_14cbe68); /* do not return */
            }
        case 63:
            v84 = v70 - 1;
            if (v70 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14cbe80); /* do not return */
            }
            else if (v84 < a2)
            {
                fish::builtins::shared::builtin_unknown_option(a3, a4, v21, v22, a1[2 * v84], a1[1 + 2 * v84], 1);
                v32->field_8 = 2;
                v32->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v57);
                core::ptr::drop_in_place<fish::builtins::read::Options>(&v40);
                return;
            }
            else
            {
                core::panicking::panic_bounds_check(v84, a2, &g_14cbe98); /* do not return */
            }
        case 76:
            v55 = 1;
            v78 = v79;
            continue;
        case 80:
            if (!v68)
                core::option::unwrap_failed(&g_14cbda8); /* do not return */
            (unsigned long long)v9.to_vec(v68, v69);
            v7 = v16;
            *((int128_t *)&v4) = *((int128_t *)&(unsigned long long)v9);
            v82 = &v44;
LABEL_136337f:
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(v82);
            v82->field_10 = v7;
            *((int128_t *)&v82->field_0[0]) = *((int128_t *)&v3[0]);
            v78 = v79;
            continue;
        case 82:
            if (v68)
            {
                (unsigned long long)v9.to_vec(v68, v69);
                v7 = v16;
                *((int128_t *)&v5) = *((int128_t *)&(unsigned long long)v9);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v40);
                v42 = v7;
                *((int128_t *)&v39) = *((int128_t *)&v3[0]);
                v78 = v79;
                break;
            }
            else
            {
                core::option::unwrap_failed(&g_14cbdd8); /* do not return */
            }
        case 83:
            v50 = 1;
            v78 = v79;
            continue;
        case 85:
            v77 = (unsigned int)v77 | 8;
LABEL_136341b:
            v48 = v77;
            v78 = v79;
            continue;
        case 97:
            v51 = 1;
            v78 = v79;
            continue;
        case 99:
            if (v68)
            {
                (unsigned long long)v9.to_vec(v68, v69);
                v7 = v16;
                *((int128_t *)&v4) = *((int128_t *)&(unsigned long long)v9);
                v82 = &v45;
                goto LABEL_136337f;
            }
            else
            {
                core::option::unwrap_failed(&g_14cbd00); /* do not return */
            }
        case 100:
            if (v68)
            {
                (unsigned long long)v9.to_vec(v68, v69);
                v7 = v16;
                *((int128_t *)&v4) = *((int128_t *)&(unsigned long long)v9);
                v82 = &v46;
                goto LABEL_136337f;
            }
            else
            {
                core::option::unwrap_failed(&g_14cbd18); /* do not return */
            }
        case 102:
            v77 = (unsigned int)v77 | 2;
            goto LABEL_136341b;
        case 103:
            v77 = (unsigned int)v77 | 4;
            goto LABEL_136341b;
        case 104:
            v49 = 1;
            v78 = v79;
            continue;
        case 105:
            v87 = a4->field_10;
            v24 = 0;
            v25 = 4;
            v26 = 0;
            v6 = "%";
            v7 = 80;
            *(v1) = 0x8000000000000000;
            v11 = 1;
            v14 = v21;
            v15 = v22;
            fish_printf::printf_impl::sprintf_locale(&v27, &v24, v1.localize(), v89, ".", &(unsigned long long)v12, 1);
            v27.unwrap(&g_14cbd30);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v12);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
            *((int128_t *)&v12) = *((int128_t *)&v24);
            v15 = 0;
            v87.append(&(unsigned long long)v12);
            v32->field_8 = 2;
            v32->field_0 = 0x8000000000000000;
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v57);
            core::ptr::drop_in_place<fish::builtins::read::Options>(&v40);
            return;
        case 108:
            v77 = (unsigned int)v77 | 1;
            goto LABEL_136341b;
        case 110:
            if (!v68)
                core::option::unwrap_failed(&g_14cbd48); /* do not return */
            v31 = v68;
            v30 = v69;
            v83 = fish::wutil::wcstoi::fish_wcstoi(v68, v30);
            if (!((char)v83 & 1))
            {
                if (v83 < 0)
                    goto LABEL_1363925;
                0.unwrap(&g_14cbd60);
                v47 = v83 >> 32;
                v78 = v79;
                continue;
            }
            else if (((unsigned short)v83 & 0xff00))
            {
LABEL_1363925:
                v90 = a4->field_10;
                *(v1) = 0;
                v6 = 4;
                v7 = 0;
                v11 = 1;
                v14 = v21;
                v15 = v22;
                v18 = 1;
                v19 = v31;
                v20 = v30;
                fish_printf::printf_impl::sprintf_locale(&(char)v23, &v1, g_14c83b8[0].localize(), v100, ".", &(unsigned long long)v12, 2);
                (char)v23.unwrap(&g_14cbd90);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v12);
                *((int128_t *)&v12) = *((int128_t *)&v1[0]);
                v15 = 0;
                v90.append(&(unsigned long long)v12);
                goto LABEL_13639fc;
            }
            else
            {
                v90 = a4->field_10;
                v23 = 0;
                v25 = 4;
                v26 = 0;
                v6 = "%";
                v7 = 36;
                *(v1) = 0x8000000000000000;
                v11 = 1;
                v14 = v21;
                v15 = v22;
                v18 = 1;
                v19 = v31;
                v20 = v30;
                fish_printf::printf_impl::sprintf_locale(&(char)v27, &v23, v1.localize(), v98, ".", &(unsigned long long)v12, 2);
                (char)v27.unwrap(&g_14cbd78);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v12);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                *((int128_t *)&v12) = *((int128_t *)&v23);
                v15 = 0;
                v90.append(&(unsigned long long)v12);
LABEL_13639fc:
                fish::builtins::shared::builtin_print_error_trailer(a3, v90, v21, v22);
                v32->field_8 = 2;
                v32->field_0 = 0x8000000000000000;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v57);
                core::ptr::drop_in_place<fish::builtins::read::Options>(&v40);
                goto LABEL_13634a7__34;
            }
        case 112:
            if (v68)
            {
                (unsigned long long)v9.to_vec(v68, v69);
                v7 = v16;
                *((int128_t *)&v4) = *((int128_t *)&(unsigned long long)v9);
                v82 = &v43;
                goto LABEL_136337f;
            }
            else
            {
                core::option::unwrap_failed(&g_14cbdc0); /* do not return */
            }
        case 115:
            v52 = 1;
            v78 = v79;
            continue;
        case 116:
            v81 = 2;
LABEL_136343f:
            if (!(v0 != v81 & v0 != 3))
            {
                v56 = v81;
                v0 = v81;
                v78 = v79;
                break;
            }
            else
            {
                v90 = a4->field_10;
                v33 = 0;
                v34 = 4;
                v35 = 0;
                v91 = g_14c7d28[0].localize();
                v25 = v21;
                v26 = v22;
                v23 = 1;
                v36 = 0;
                v37 = 4;
                v38 = 0;
                v28 = "%";
                v29 = 32;
                v27 = 0x8000000000000000;
                v92 = v27.localize();
                v6 = fish::builtins::read::tokenize_flag(v0);
                v7 = v93;
                *((char *)v1) = 1;
                v94 = fish::builtins::read::tokenize_flag(v81);
                v95 = *((int128_t *)&v3[0]);
                *((int128_t *)&v15) = *((int128_t *)&v7);
                v8 = v95;
                v18 = 1;
                v19 = v94;
                v20 = v93;
                fish_printf::printf_impl::sprintf_locale(&(unsigned long long)v1, &v36, v92, v93, ".", &(unsigned long long)v9, 2);
                (unsigned long long)v1.unwrap(&g_14cbdf0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v9);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v27);
                v7 = 0;
                *((int128_t *)&v2) = *((int128_t *)&v36);
                v96 = *((int128_t *)&v26);
                *((int128_t *)&v9) = *((int128_t *)&v24);
                v15 = v96;
                v18 = 1;
                v19 = v6;
                v20 = 0;
                fish_printf::printf_impl::sprintf_locale(&v24, &v33, v91, v93, ".", &(unsigned long long)v9, 2);
                v24.unwrap(&g_14cbe08);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v9);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v1);
                *((int128_t *)&v10) = *((int128_t *)&v33);
                v15 = 0;
                v90.append(&(unsigned long long)v9);
                goto LABEL_13639fc;
            }
        case 117:
            v77 = (unsigned int)v77 | 32;
            goto LABEL_136341b;
        case 120:
            v77 = (unsigned int)v77 | 16;
            goto LABEL_136341b;
        case 122:
            v53 = 1;
            v78 = v79;
            continue;
        default:
            v8 = &g_14c60b8;
            v14 = 1;
            v15 = 8;
            *((uint128_t *)&v17) = 0;
            core::panicking::panic_fmt(&v8, &g_14cbeb0); /* do not return */
        }
    }
LABEL_13634a7__34:
    return;
}
