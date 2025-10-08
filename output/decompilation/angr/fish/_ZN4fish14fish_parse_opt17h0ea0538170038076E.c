void fish::fish_parse_opt(unsigned long long *a0, struct_3 *a1, unsigned long long a2, struct_2 *a3)
{
    void* v0;  // [bp-0x1d8], Other Possible Types: char
    int v1;  // [bp-0x1d8]
    unsigned long long v2;  // [bp-0x1d8]
    int v3;  // [bp-0x1d8]
    int v4;  // [bp-0x1d8]
    int v5;  // [bp-0x1d8]
    int v6;  // [bp-0x1d8]
    int v7;  // [bp-0x1d8]
    unsigned long long v8;  // [bp-0x1d0]
    void* v9;  // [bp-0x1c8], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x1b8], Other Possible Types: char
    void* v11;  // [bp-0x1b8]
    unsigned long long v12;  // [bp-0x1b0]
    struct_0 **v13;  // [bp-0x1b0], Other Possible Types: unsigned long long
    void* v14;  // [bp-0x1a8]
    void* v15;  // [bp-0x1a8]
    void* v16;  // [bp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x198]
    void* v18;  // [bp-0x190]
    int v19;  // [bp-0x188], Other Possible Types: unsigned long long
    char v20;  // [bp-0x188]
    int v21;  // [bp-0x188]
    int v22;  // [bp-0x188]
    int v23;  // [bp-0x188], Other Possible Types: char
    char v24;  // [bp-0x188]
    char v25;  // [bp-0x188]
    int v26;  // [bp-0x188]
    int v27;  // [bp-0x188]
    unsigned long v28;  // [bp-0x180], Other Possible Types: unsigned long long
    int v29;  // [bp-0x180]
    int v30;  // [bp-0x178], Other Possible Types: void*, unsigned long long
    void* v31;  // [bp-0x178]
    int v32;  // [bp-0x170]
    char v33;  // [bp-0x168]
    int v34;  // [bp-0x160], Other Possible Types: unsigned long long
    int v35;  // [bp-0x160]
    unsigned long long v36;  // [bp-0x158]
    char v37;  // [bp-0x148]
    unsigned long long v38;  // [bp-0x140]
    unsigned long long v39;  // [bp-0x138]
    struct_1 *v40;  // [bp-0x120]
    unsigned long v41;  // [bp-0x118]
    char *v42;  // [sp-0x110]
    unsigned long v43;  // [bp-0x108]
    void* v44;  // [bp-0x100]
    unsigned long long v45;  // [bp-0xf8]
    void* v46;  // [bp-0xf0]
    unsigned long long v47;  // [bp-0xe8]
    unsigned long long v48;  // [bp-0xe0]
    unsigned long long v49;  // [bp-0xd8]
    unsigned long long v50;  // [bp-0xd0]
    unsigned long long v51;  // [bp-0xc8]
    unsigned long long v52;  // [bp-0xc0]
    unsigned long long v53;  // [bp-0xb8]
    int v54;  // [bp-0xb0]
    unsigned long long v55;  // [bp-0xa8]
    unsigned long long v56;  // [bp-0xa0]
    void* v57;  // [bp-0x98]
    uint128_t v58;  // [bp-0x90]
    unsigned int v59;  // [bp-0x80]
    unsigned short v60;  // [bp-0x7c]
    char v61;  // [bp-0x7a]
    unsigned long v62;  // [bp-0x78]
    unsigned long v63;  // [bp-0x70]
    unsigned long v64;  // [bp-0x68]
    unsigned long v65;  // [bp-0x60]
    char v66;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v67;  // [bp-0x50]
    unsigned long long v68;  // [bp-0x48]
    char v69;  // [bp-0x40]
    unsigned long long v71;  // r13
    unsigned int v72;  // eax
    void* v73;  // rax
    unsigned long v74;  // rcx
    char *v75;  // rdi
    struct_4 *v76;  // r13
    unsigned int v77;  // eax
    unsigned long long v79;  // rdx
    unsigned long long v80;  // rax
    unsigned long v81;  // rdi
    int v82;  // xmm0
    int v83;  // xmm2
    unsigned long long v84;  // rdx
    unsigned long long v85;  // rax
    unsigned long v86;  // rdi
    int v87;  // xmm0
    int v88;  // xmm2
    unsigned long long v89;  // rdx
    unsigned long long v90;  // rax
    unsigned long v91;  // rdi
    int v92;  // xmm0
    int v93;  // xmm2
    unsigned long long v94;  // rdx
    struct_0 **v96;  // rbx
    unsigned long long v97;  // r13
    struct_0 **v98;  // r15
    void* v99;  // r14
    struct_0 **v100;  // r15
    unsigned long long v101;  // rax
    unsigned long long v102;  // rdx

    v66.collect(a1, &(&a1->padding_0)[3 * a2]);
    v47 = v67;
    v48 = v68;
    v49 = "+";
    v50 = 22;
    v51 = &g_149ab78;
    v52 = 17;
    v53 = 4;
    *((uint128_t *)&v54) = 0;
    v57 = 0;
    v59 = 63;
    v61 = 1;
    v60 = 0;
    v44 = 0;
    v58 = 0;
    v45 = 8;
    v46 = 0;
    v65 = &a3->field_70;
    v64 = &a3->field_60;
    v43 = &a3->padding_18;
    v63 = &a3->field_48;
    v62 = &a3->padding_30;
    v42 = &v10;
    while (true)
    {
        v72 = v44.next_opt();
        if (v72 != 0x110000)
        {
            switch (v72)
            {
            case 1:
                *((char *)&a3->field_80) = 1;
                continue;
            case 2:
                fish::flog::categories::all_categories(&v10);
                v41 = v71;
                v96 = v13;
                if (v15)
                {
                    v97 = v15 * 8;
                    v98 = 0;
                    v99 = 0;
                    do
                    {
                        v99 = v99.max(*((long long *)(*((long long *)(v96 + v98)) + 32)));
                        v98 += 1;
                    } while (v97 != v98);
                    if ((char)__CFADD__(v99, 2))
                        core::panicking::panic_const::panic_const_add_overflow(&g_149adf8); /* do not return */
                    v100 = 0;
                    do
                    {
                        v101 = *((long long *)(v96 + v100)).localize();
                        v0 = 0;
                        v8 = 4;
                        v9 = 0;
                        v20 = 4;
                        v28 = v99 + 2;
                        v33 = 1;
                        *((int128_t *)&v35) = *((int128_t *)(*((long long *)(v96 + v100)) + 24));
                        v37 = 1;
                        v38 = v101;
                        v39 = v102;
                        fish_printf::printf_impl::sprintf_locale(&v16, &v0, "%-*ls %ls\n4.1.0-48-gdb6a7d26c__fish_print_help fish", 10, &v20, 3);
                        v16.unwrap(&g_149ae10);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v20);
                        v30 = v9;
                        *((int128_t *)&v23) = *((int128_t *)&v0);
                        fish::wutil::wwrite_to_fd(v28, v9, 1);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v20);
                        v100 += 1;
                    } while (v97 != v100);
                }
                *(a0) = 1;
                core::ptr::drop_in_place<alloc::vec::Vec<u64>>(v11, v96);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v44);
                core::ptr::drop_in_place<alloc::vec::Vec<&widestring::utfstr::Utf32Str>>(v66, v41);
                return;
            case 3:
                if (v55)
                {
                    fish::common::wcs2osstring(&v24, v55, v56);
                    v9 = v31;
                    *((int128_t *)&v6) = *((int128_t *)&v24);
                    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(a3->field_70, a3->field_78[0]);
                    *((void* *)(v65 + 16)) = v9;
                    *((int128_t *)v65) = *((int128_t *)&v2);
                    _ZN4fish6common16PROFILING_ACTIVE17h17c91187298e4d56E.store(1);
                    break;
                }
                else
                {
                    core::option::unwrap_failed(&g_149ae40); /* do not return */
                }
            case 58:
                v16 = 0;
                v17 = 4;
                v18 = 0;
                v10 = 0;
                v12 = 4;
                v14 = 0;
                v90 = g_149af00.localize();
                v8 = "fish%ls\n ";
                v9 = 4;
                v0 = 0;
                v91 = v57 - 1;
                if (v57 < 1)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_149af18); /* do not return */
                if (v91 < a2)
                {
                    v92 = *((int128_t *)&(&a1->field_8)[3 * v91]);
                    v93 = *((int128_t *)&v9);
                    *((int128_t *)&v22) = *((int128_t *)&v2);
                    v30 = v93;
                    v33 = 1;
                    v34 = v92;
                    fish_printf::printf_impl::sprintf_locale(&v0, &v10, v90, v94, &v24, 2);
                    v0.unwrap(&g_149af48);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v24);
                    v9 = 0;
                    *((int128_t *)&v1) = *((int128_t *)&v10);
                    v20 = 1;
                    v28 = "fish%ls\n ";
                    v30 = 0;
                    fish_printf::printf_impl::sprintf_locale(&v10, &v16, "%ls\n ", 4, &v20, 1);
                    v10.unwrap(&g_149af60);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v20);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                    v30 = v18;
                    *((int128_t *)&v19) = *((int128_t *)&v16);
                    fish::wutil::wwrite_to_fd("fish%ls\n ", v18, 2);
                }
                else
                {
                    core::panicking::panic_bounds_check(v91, a2, &g_149af30); /* do not return */
                }
LABEL_1264616:
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v24);
                *(a0) = 4294967297;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v44);
                core::ptr::drop_in_place<alloc::vec::Vec<&widestring::utfstr::Utf32Str>>(v66, v71);
                return;
            case 59:
                v16 = 0;
                v17 = 4;
                v18 = 0;
                v10 = 0;
                v12 = 4;
                v14 = 0;
                v80 = g_149af78.localize();
                v8 = "fish%ls\n ";
                v9 = 4;
                v0 = 0;
                v81 = v57 - 1;
                if (v57 < 1)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_149af90); /* do not return */
                if (v81 < a2)
                {
                    v82 = *((int128_t *)&(&a1->field_8)[3 * v81]);
                    v83 = *((int128_t *)&v9);
                    *((int128_t *)&v19) = *((int128_t *)&v2);
                    v30 = v83;
                    v33 = 1;
                    v34 = v82;
                    fish_printf::printf_impl::sprintf_locale(&v0, &v10, v80, v84, &v24, 2);
                    v0.unwrap(&g_149afc0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v24);
                    v9 = 0;
                    *((int128_t *)&v1) = *((int128_t *)&v10);
                    v20 = 1;
                    v28 = "fish%ls\n ";
                    v30 = 0;
                    fish_printf::printf_impl::sprintf_locale(&v10, &v16, "%ls\n ", 4, &v20, 1);
                    v10.unwrap(&g_149afd8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v20);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                    v30 = v18;
                    *((int128_t *)&v19) = *((int128_t *)&v16);
                    fish::wutil::wwrite_to_fd("fish%ls\n ", v18, 2);
                    goto LABEL_1264616;
                }
                else
                {
                    core::panicking::panic_bounds_check(v81, a2, &g_149afa8); /* do not return */
                }
            case 63:
                v16 = 0;
                v17 = 4;
                v18 = 0;
                v10 = 0;
                v12 = 4;
                v14 = 0;
                v85 = g_149ae88.localize();
                v8 = "fish%ls\n ";
                v9 = 4;
                v0 = 0;
                v86 = v57 - 1;
                if (v57 < 1)
                    core::panicking::panic_const::panic_const_sub_overflow(&g_149aea0); /* do not return */
                if (v86 < a2)
                {
                    v87 = *((int128_t *)&(&a1->field_8)[3 * v86]);
                    v88 = *((int128_t *)&v9);
                    *((int128_t *)&v21) = *((int128_t *)&v2);
                    v30 = v88;
                    v33 = 1;
                    v34 = v87;
                    fish_printf::printf_impl::sprintf_locale(&v0, &v10, v85, v89, &v24, 2);
                    v0.unwrap(&g_149aed0);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v24);
                    v9 = 0;
                    *((int128_t *)&v1) = *((int128_t *)&v10);
                    v20 = 1;
                    v28 = "fish%ls\n ";
                    v30 = 0;
                    fish_printf::printf_impl::sprintf_locale(&v10, &v16, "%ls\n ", 4, &v20, 1);
                    v10.unwrap(&g_149aee8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v20);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                    v30 = v18;
                    *((int128_t *)&v19) = *((int128_t *)&v16);
                    fish::wutil::wwrite_to_fd("fish%ls\n ", v18, 2);
                    goto LABEL_1264616;
                }
                else
                {
                    core::panicking::panic_bounds_check(v86, a2, &g_149aeb8); /* do not return */
                }
            case 67:
                if (v55)
                {
                    fish::common::wcs2osstring(&v24, v55, v56);
                    v9 = v31;
                    *((int128_t *)&v7) = *((int128_t *)&v24);
                    v62.push(&v2, &g_149ad68);
                    break;
                }
                else
                {
                    core::option::unwrap_failed(&g_149ad50); /* do not return */
                }
            case 68:
                break;
            case 78:
                *((char *)&a3->field_80 + 1) = 1;
                *((char *)&a3->field_80 + 5) = 1;
                continue;
            case 80:
                *((char *)&a3->field_80 + 5) = 1;
                continue;
            case 99:
                if (v55)
                {
                    fish::common::wcs2osstring(&v24, v55, v56);
                    v9 = v31;
                    *((int128_t *)&v5) = *((int128_t *)&v24);
                    v43.push(&v2, &g_149ad38);
                    break;
                }
                else
                {
                    core::option::unwrap_failed(&g_149ad20); /* do not return */
                }
            case 100:
                if (v55)
                {
                    fish::flog::activate_flog_categories_by_pattern(v55, v56);
                    fish::flog::categories::all_categories(&v24);
                    v41 = v71;
                    v2.into_iter(&v24);
                    v75 = &v2;
                    while (true)
                    {
                        v76 = v75.next();
                        if (!v76)
                            break;
                        if ((char)core::sync::atomic::atomic_load((char *)&v76->field_18 + 8))
                        {
                            v11 = 0;
                            v13 = 4;
                            v15 = 0;
                            v25 = 1;
                            *((int128_t *)&v29) = *((int128_t *)&(&v76->padding_0)[1]);
                            fish_printf::printf_impl::sprintf_locale(&v16, &v11, "Debug enabled for category: %ls\nr", 32, &v25, 1);
                            v16.unwrap(&g_149ad98);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v25);
                            v31 = v15;
                            *((int128_t *)&v26) = *((int128_t *)&v11);
                            fish::wutil::wwrite_to_fd(v28, v15, 1);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v25);
                        }
                        v75 = &v2;
                    }
                    v71 = v41;
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&fish::flog::categories::category_t>>(&v2);
                    break;
                }
                else
                {
                    core::option::unwrap_failed(&g_149ad80); /* do not return */
                }
            case 102:
                if (v55)
                {
                    v24.to_vec(v55, v56);
                    v9 = v31;
                    *((int128_t *)&v4) = *((int128_t *)&v24);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a3);
                    a3->field_10 = v9;
                    a3->field_0 = *((int128_t *)&v2);
                    break;
                }
                else
                {
                    core::option::unwrap_failed(&g_149adc8); /* do not return */
                }
            case 104:
                v24.to_vec("__fish_print_help fish", 22);
                v9 = v31;
                *((int128_t *)&v3) = *((int128_t *)&v24);
                v43.push(&v2, &g_149ade0);
                continue;
            case 105:
                *((char *)&a3->field_80 + 4) = 1;
                continue;
            case 108:
                *((char *)&a3->field_80 + 3) = 1;
                continue;
            case 110:
                *((char *)&a3->field_80 + 2) = 1;
                break;
            case 111:
                if (!v55)
                    core::option::unwrap_failed(&g_149adb0); /* do not return */
                fish::common::wcs2osstring(&v24, v55, v56);
                v9 = v31;
                memcpy(&v2, &v24, 16);
                core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(a3->field_48, a3->field_50);
                v73 = v9;
                v74 = v63;
LABEL_1263cc2:
                *((void* *)(v74 + 16)) = v73;
                *((int128_t *)v74) = *((int128_t *)&v2);
                continue;
            case 112:
                if (v55)
                {
                    fish::common::wcs2osstring(&v24, v55, v56);
                    v9 = v31;
                    memcpy(&v2, &v24, 16);
                    core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(a3->field_60[0], a3->field_60[1]);
                    v73 = v9;
                    v74 = v64;
                    goto LABEL_1263cc2;
                }
                else
                {
                    core::option::unwrap_failed(&g_149ae28); /* do not return */
                }
            case 118:
                v16 = 0;
                v17 = 4;
                v18 = 0;
                v10 = 0;
                v12 = 4;
                v14 = 0;
                v8 = "%";
                v9 = 15;
                *((unsigned long long *)&v1) = 0x8000000000000000;
                v20 = 0;
                v28 = "fish%ls\n ";
                v30 = 4;
                v33 = 0;
                v34 = "4.1.0-48-gdb6a7d26c__fish_print_help fish";
                v36 = 19;
                fish_printf::printf_impl::sprintf_locale(&v69, &v10, (unsigned long long)v1.localize(), v79, &v20, 2);
                v69.unwrap(&g_149ae58);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v20);
                v42 = &(unsigned long long)v1;
                core::ptr::drop_in_place<fish::wutil::gettext::LocalizableString>(&(unsigned long long)v1);
                v9 = 0;
                *((int128_t *)&v1) = *((int128_t *)&v10);
                v23 = 1;
                v28 = "%";
                v30 = 0;
                fish_printf::printf_impl::sprintf_locale(&v10, &v16, "%s", 2, &v23, 1);
                v10.unwrap(&g_149ae70);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v23);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v1);
                v30 = v18;
                *((int128_t *)&v27) = *((int128_t *)&v16);
                fish::wutil::wwrite_to_fd("%", v18, 1);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v23);
                *(a0) = 1;
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v44);
                core::ptr::drop_in_place<alloc::vec::Vec<&widestring::utfstr::Utf32Str>>(v66, v71);
                return;
            default:
                v19 = &g_149ad10;
                v28 = 1;
                v30 = 8;
                *((uint128_t *)&v32) = 0;
                core::panicking::panic_fmt(&v19, &g_149aff0); /* do not return */
            }
        }
        else if (a2)
        {
            v77 = a1->field_8.char_at(a1->field_10);
            *((char *)&a3->field_80 + 3) = *((char *)&a3->field_80 + 3) | v77 == 45;
            if (v57 == a2 && !a3->field_28 && fish::nix::isatty(0))
                fish::proc::set_interactive_session(1);
            v40->field_8 = v57;
            v40->field_0 = 0;
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v44);
            break;
        }
        else
        {
            core::panicking::panic_bounds_check(0, 0, &g_149b008); /* do not return */
        }
    }
    core::ptr::drop_in_place<alloc::vec::Vec<&widestring::utfstr::Utf32Str>>(v66, v71);
    return;
}
