void fish::ast::Populator::populate_list(char a0[220], unsigned long long a1[2], unsigned int a2)
{
    unsigned int v0;  // [bp-0x3e8]
    void* v1;  // [bp-0x2c8]
    char v2;  // [bp-0x2c8]
    void* v3;  // [bp-0x2c8]
    unsigned long long v4;  // [sp-0x2c0]
    void* v5;  // [sp-0x2b8]
    unsigned int v6;  // [bp-0x29c]
    unsigned long long v7;  // [bp-0x298]
    unsigned long long v8;  // [bp-0x290]
    void* v9;  // [bp-0x288]
    unsigned long long v10;  // [bp-0x280]
    void* v11;  // [bp-0x278]
    void* v12;  // [bp-0x270], Other Possible Types: char
    unsigned long long v13;  // [bp-0x268]
    void* v14;  // [bp-0x260]
    int v15;  // [bp-0x258], Other Possible Types: char, unsigned long long
    char v16;  // [bp-0x258]
    int v17;  // [bp-0x258]
    char v19;  // [bp-0x258]
    char v20;  // [bp-0x258]
    unsigned long long v21;  // [bp-0x250]
    void* v22;  // [bp-0x248], Other Possible Types: unsigned long long
    int v23;  // [bp-0x240]
    char v24;  // [sp-0x238]
    int v25;  // [bp-0x238]
    unsigned long long v26;  // [bp-0x230]
    void* v27;  // [bp-0x228]
    char v28;  // [sp-0x218]
    int v29;  // [bp-0x218]
    unsigned long long v30;  // [bp-0x210]
    unsigned long long v31;  // [bp-0x208]
    char v32;  // [sp-0x1f8]
    unsigned long long v33;  // [bp-0x1f0]
    void* v34;  // [bp-0x1b0]
    unsigned long long v35;  // [bp-0x1a8]
    void* v36;  // [bp-0x1a0]
    unsigned long v37;  // [bp-0x198]
    unsigned long v38;  // [bp-0x190]
    void* v39;  // [bp-0x188], Other Possible Types: char
    char v40;  // [bp-0x188]
    int v41;  // [bp-0x188], Other Possible Types: void*
    void* v42;  // [bp-0x188]
    unsigned long long v43;  // [bp-0x180]
    void* v44;  // [sp-0x178]
    int v45;  // [bp-0xe8], Other Possible Types: char
    char v46;  // [bp-0xe8]
    unsigned long long v47;  // [bp-0xe0]
    void* v48;  // [bp-0xd8]
    char v49;  // [bp-0x40]
    unsigned long long v51;  // rax
    unsigned long long v52;  // rdx
    char *v53;  // r15
    char *v54;  // rbp
    unsigned long long v55;  // rax
    unsigned long long v57;  // rax
    unsigned long long v58;  // rax
    unsigned long long v59;  // rdx
    unsigned long long v61;  // rax

    v6 = a2;
    if (a1[1])
    {
        v15 = &g_14c5470;
        v21 = 1;
        v22 = 8;
        *((uint128_t *)&v23) = 0;
        core::panicking::panic_fmt(&v15, &g_14c55e0); /* do not return */
    }
    else if (!a0[217])
    {
        v9 = 0;
        v10 = 8;
        v11 = 0;
        v38 = &a0[48];
        v37 = &a0[24];
        v53 = &v49;
        v8 = &g_15a95c0;
        v7 = &g_15a95b0;
        v54 = &v12;
        if ((a0[217] & 1))
            goto LABEL_1323c83;
        while (true)
        {
            while (true)
            {
                v16.kind(a1);
                a0.chomp_extras(&v16);
                v46.try_parse(a0);
                if (*((int *)&v46) == 3)
                {
                    if (!(char)v6 || (char)(unsigned int)a0.peek_type(0) == 11)
                    {
                        core::ptr::drop_in_place<core::option::Option<fish::ast::JobConjunction>>(&v46);
                        goto LABEL_13240c8;
                    }
                    a0.consume_excess_token_generating_error();
                    if (*((int *)&v46) != 3)
                        core::ptr::drop_in_place<fish::ast::JobConjunction>(&v46);
                    if ((a0[217] & 1))
                        break;
                }
                else
                {
                    memcpy(&v39, &v46, 160);
                    if (!v11)
                        v9.reserve();
                    memcpy(&v16, &v39, 160);
                    v9.push(&v16);
                    v53 = &v49;
                    if ((a0[217] & 1))
                        break;
                }
            }
LABEL_1323c83:
            v16.kind(a1);
            if (*((int *)&v16) != 37 || !(a0[219] & 1))
                break;
            while (true)
            {
                v55 = (unsigned int)a0.peek_type(0);
                if ((v55 & 255) <= 11)
                {
                    v0 = 3076;
                    if ((*((char *)&v0 + ((v55 & 4294967295 & 31) >> 3)) >> ((char)v55 & 31 & 7) & 1))
                        break;
                }
                v53.pop(v38);
                v37.push((unsigned int)v53.range(), a2, &g_14c54f0);
                if (!(char)core::sync::atomic::atomic_load(v8, 0))
                    continue;
                v12 = 0;
                v13 = 1;
                v14 = 0;
                v39.to_flog_str(v7);
                v16.into_iter(&v39);
                v54.spec_extend(&v16);
                v54.push(58, &g_14c5508);
                v54.push(32, &g_14c5508);
                v34 = 0;
                v35 = 4;
                v36 = 0;
                v4 = a0.spaces();
                v2 = 4;
                v47 = 1;
                v48 = 0;
                v46 = 0;
                v43 = v53.source_start();
                v40 = 4;
                v57 = v53.source_length();
                memcpy(&(char)v22, &v5, 16);
                *((int128_t *)&v17) = *((int128_t *)&v1);
                memcpy(&v27, &v48, 16);
                *((int128_t *)&v25) = *((int128_t *)&v46);
                memcpy(&v31, &v44, 16);
                *((int128_t *)&v29) = (int128_t)v41;
                v32 = 4;
                v33 = v57;
                fish_printf::printf_impl::sprintf_locale(&v39, &v34, "%*schomping range %u-%u%*sdone unwindingContents size out of boundsList should still be empty", 23, &v16, 4);
                v39.unwrap(&g_14c5508);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 4]>(&v16);
                *((int128_t *)&v41) = *((int128_t *)&v34);
                v44 = 0;
                v46.to_flog_str(&v39);
                v16.into_iter(&v46);
                v54.spec_extend(&v16);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v39);
                v54.push(10, &g_14c5508);
                fish::flog::flog_impl(v13, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, v13);
            }
            if ((char)core::sync::atomic::atomic_load(v8, 0))
            {
                v3 = 0;
                v4 = 1;
                v5 = 0;
                v39.to_flog_str(v7);
                v16.into_iter(&v39);
                v3.spec_extend(&v16);
                v3.push(58, &g_14c54c0);
                v3.push(32, &g_14c54c0);
                v42 = 0;
                v43 = 4;
                v44 = 0;
                v19 = 4;
                v21 = a0.spaces();
                v24 = 0;
                v26 = 1;
                v27 = 0;
                fish_printf::printf_impl::sprintf_locale(&v46, &v42, "%*sdone unwindingContents size out of boundsList should still be empty", 17, &v19, 2);
                v46.unwrap(&g_14c54c0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v19);
                *((int128_t *)&v45) = *((int128_t *)&v42);
                v48 = 0;
                v42.to_flog_str(&v46);
                v19.into_iter(&v42);
                v3.spec_extend(&v19);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v46);
                v3.push(10, &g_14c54c0);
                fish::flog::flog_impl(v4, v5);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v4);
            }
            a0[217] = 0;
        }
LABEL_13240c8:
        if (v11)
        {
            0.unwrap(&g_14c5520);
            if (v11 >> 32)
            {
                v15 = &g_14c54a0;
                v15 = &g_14c54a0;
                v21 = 1;
                v22 = 8;
                *((uint128_t *)&v23) = 0;
                core::panicking::panic_fmt(&v15, &g_14c5538); /* do not return */
            }
            if (!a1[1])
            {
                v22 = v11;
                *((int128_t *)&v15) = *((int128_t *)&v9);
                v58 = (char)v15.into_boxed_slice();
                core::ptr::drop_in_place<alloc::boxed::Box<[fish::ast::JobConjunction]>>(a1);
                a1[0] = v58;
                a1[1] = v59;
            }
            else
            {
                v15 = &g_14c54b0;
                v21 = 1;
                v22 = 8;
                *((uint128_t *)&v23) = 0;
                core::panicking::panic_fmt(&v15, &g_14c5580); /* do not return */
            }
        }
        if ((char)core::sync::atomic::atomic_load(v8, 0))
        {
            v1 = 0;
            v4 = 1;
            v5 = 0;
            v39.to_flog_str(v7);
            (char)v15.into_iter(&v39);
            v1.spec_extend(&(char)v15);
            v1.push(58, &g_14c5568);
            v1.push(32, &g_14c5568);
            v39 = 0;
            v43 = 4;
            v44 = 0;
            v61 = a0.spaces();
            (char)v15.kind(a1);
            v20 = 4;
            v21 = v61;
            v24 = 0;
            v26 = 1;
            v27 = 0;
            v28 = 1;
            v30 = fish::ast::ast_kind_to_string(&(char)v15);
            v31 = v59;
            v32 = 4;
            v33 = a1[1];
            fish_printf::printf_impl::sprintf_locale(&v46, &v39, "%*s%ls size: %lup", 16, &v20, 4);
            v46.unwrap(&g_14c5568);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 4]>(&v20);
            *((int128_t *)&v45) = *((int128_t *)&v39);
            v48 = 0;
            v39.to_flog_str(&v46);
            v20.into_iter(&v39);
            v1.spec_extend(&v20);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v46);
            v1.push(10, &g_14c5568);
            fish::flog::flog_impl(v4, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v4);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<fish::ast::JobConjunction>>(&v9);
        return;
    }
    else if (!(char)v6)
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a95c0, 0))
        {
            v1 = 0;
            v4 = 1;
            v5 = 0;
            v39.to_flog_str(&g_15a95b0);
            v15.into_iter(&v39);
            v1.spec_extend(&v15);
            v1.push(58, &g_14c5598);
            v1.push(32, &g_14c5598);
            v41 = 0;
            v43 = 4;
            v44 = 0;
            v51 = a0.spaces();
            v15.kind(a1);
            v15 = 4;
            v21 = v51;
            v24 = 0;
            v26 = 1;
            v27 = 0;
            v28 = 1;
            v30 = fish::ast::ast_kind_to_string(&v15);
            v31 = v52;
            fish_printf::printf_impl::sprintf_locale(&v45, &v41, "%*sunwinding %lst", 16, &v15, 3);
            v45.unwrap(&g_14c5598);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v15);
            memcpy(&v45, &v41, 16);
            v48 = 0;
            v41.to_flog_str(&v45);
            v15.into_iter(&v41);
            v1.spec_extend(&v15);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v45);
            v1.push(10, &g_14c5598);
            fish::flog::flog_impl(v4, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v4);
        }
        if (!a1[1])
            return;
        v15 = &g_14c5490;
        v21 = 1;
        v22 = 8;
        *((uint128_t *)&v23) = 0;
        core::panicking::panic_fmt(&v15, &g_14c55b0); /* do not return */
    }
    else
    {
        v15 = &g_14c5480;
        v21 = 1;
        v22 = 8;
        *((uint128_t *)&v23) = 0;
        core::panicking::panic_fmt(&v15, &g_14c55c8); /* do not return */
    }
}
