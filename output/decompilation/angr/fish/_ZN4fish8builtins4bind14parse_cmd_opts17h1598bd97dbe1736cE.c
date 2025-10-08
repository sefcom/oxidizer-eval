long long fish::builtins::bind::parse_cmd_opts(struct_0 *a0, unsigned long long *a1, unsigned long long a2[2305843009213693951], unsigned long long a3, unsigned long long a4, struct_1 *a5)
{
    unsigned long long v0[3];  // [bp-0x178]
    unsigned long long v1[3];  // [bp-0x178]
    unsigned long long v2;  // [bp-0x170]
    void* v3;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long v4;  // [bp-0x158]
    unsigned long v5;  // [bp-0x150]
    unsigned long v6;  // [bp-0x148]
    unsigned long long v7;  // [bp-0x140]
    unsigned long long v8;  // [bp-0x138]
    char v9;  // [bp-0x138]
    int v10;  // [bp-0x138]
    unsigned long long v11;  // [bp-0x130], Other Possible Types: unsigned long
    void* v12;  // [bp-0x128], Other Possible Types: unsigned long long, unsigned long
    int v13;  // [bp-0x120]
    char v14;  // [bp-0x118]
    unsigned long long v15;  // [bp-0x110]
    unsigned long v16;  // [bp-0x108]
    void* v17;  // [bp-0xf0]
    unsigned long long v18;  // [bp-0xe8]
    void* v19;  // [bp-0xe0]
    unsigned long long v20;  // [bp-0xd8]
    unsigned long v21;  // [bp-0xd0]
    void* v22;  // [bp-0xc8]
    unsigned long long v23;  // [bp-0xc0]
    void* v24;  // [bp-0xb8]
    unsigned long long v25[2305843009213693951];  // [bp-0xb0]
    unsigned long long v26;  // [bp-0xa8]
    unsigned long long v27;  // [bp-0xa0]
    unsigned long long v28;  // [bp-0x98]
    unsigned long long v29;  // [bp-0x90]
    unsigned long long v30;  // [bp-0x88]
    unsigned long long v31;  // [bp-0x80]
    int v32;  // [bp-0x78]
    unsigned long long v33;  // [bp-0x70]
    unsigned long v34;  // [bp-0x68]
    void* v35;  // [bp-0x60]
    uint128_t v36;  // [bp-0x58]
    unsigned int v37;  // [bp-0x48]
    unsigned short v38;  // [bp-0x44]
    char v39;  // [bp-0x42]
    char v40;  // [bp-0x40]
    char *v42;  // rdi
    unsigned int v43;  // eax
    unsigned long v44;  // rdi
    unsigned long long v48;  // rbx
    unsigned long long v50;  // rdx
    unsigned long long v51;  // rbx
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rbx
    unsigned long long v56;  // rdx
    unsigned long long v58[3];  // [bp-0x178]

    v4 = a2[0];
    v5 = a2[1];
    v25[0] = a2;
    v26 = a3;
    v27 = "a";
    v28 = 12;
    v29 = &g_14c77e8;
    v30 = 12;
    v31 = 4;
    *((uint128_t *)&v32) = 0;
    v35 = 0;
    v37 = 63;
    v39 = 1;
    v38 = 0;
    v22 = 0;
    v36 = 0;
    v23 = 8;
    v24 = 0;
    v21 = &(&a0->field_10)[1];
    v42 = &v22;
    v20 = &g_14c7968;
    while (true)
    {
        v43 = v42.next_opt();
        if (v43 == 0x110000)
        {
            *(a1) = v35;
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v22);
            return 0x200000000;
        }
        switch (v43)
        {
        case 58:
            v44 = v35 - 1;
            if (v35 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c7998); /* do not return */
            }
            else if (v44 < a3)
            {
                fish::builtins::shared::builtin_missing_argument(a4, a5, v4, v5, a2[2 * v44], a2[1 + 2 * v44], 1);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v22);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v44, a3, &g_14c79b0); /* do not return */
            }
        case 59:
            v44 = v35 - 1;
            if (v35 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c79c8); /* do not return */
            }
            else if (v44 < a3)
            {
                fish::builtins::shared::builtin_unexpected_argument(a4, a5, v4, v5, a2[2 * v44], a2[1 + 2 * v44], 1);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v22);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v44, a3, &g_14c79e0); /* do not return */
            }
        case 63:
            v44 = v35 - 1;
            if (v35 < 1)
            {
                core::panicking::panic_const::panic_const_sub_overflow(&g_14c79f8); /* do not return */
            }
            else if (v44 < a3)
            {
                fish::builtins::shared::builtin_unknown_option(a4, a5, v4, v5, a2[2 * v44], a2[1 + 2 * v44], 1);
                core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v22);
                return 8589934593;
            }
            else
            {
                core::panicking::panic_bounds_check(v44, a3, &g_14c7a10); /* do not return */
            }
        case 75:
            *((unsigned int *)&a0->field_28) = 2;
            break;
        case 76:
            *((char *)&a0->field_28 + 6) = 1;
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v22);
            return 0x200000000;
        case 77:
            if (v33)
            {
                v7 = v33;
                v6 = v34;
                if (!(char)fish::common::valid_var_name(v33, v6))
                {
                    v51 = a5->field_10;
                    *(v58) = 0;
                    v2 = 4;
                    v3 = 0;
                    v9 = 1;
                    v11 = v4;
                    v12 = v5;
                    v14 = 1;
                    v15 = v7;
                    v16 = v6;
                    fish_printf::printf_impl::sprintf_locale(&(char)v17, &v58, g_14c7938[0].localize(), v53, ".", &(unsigned long long)v10, 2);
                    (char)v17.unwrap(&g_14c7950);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v10);
                    *((int128_t *)&v10) = *((int128_t *)&v58[0]);
                    v12 = 0;
                    v51.append(&(unsigned long long)v10);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v22);
                    return 8589934593;
                }
                v8.to_vec(v7, v6);
                v3 = v12;
                *((int128_t *)&v1) = *((int128_t *)&v8);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
                a0->field_10 = v3;
                a0->field_0 = *((int128_t *)&v58[0]);
                *((char *)&a0->field_28 + 5) = 1;
                break;
            }
            else
            {
                v20 = &g_14c7920;
                core::option::unwrap_failed(0x14c7920); /* do not return */
            }
        case 97:
            *((char *)&a0->field_28 + 4) = 1;
            break;
        case 101:
            *((unsigned int *)&a0->field_28) = 1;
            break;
        case 102:
            *((unsigned int *)&a0->field_28) = 3;
            break;
        case 104:
            *((char *)&a0->field_28 + 7) = 1;
            break;
        case 107:
            v48 = a5->field_10;
            v17 = 0;
            v18 = 4;
            v19 = 0;
            v2 = "%";
            v3 = 90;
            *(v58) = 0x8000000000000000;
            v9 = 1;
            v11 = v4;
            v12 = v5;
            fish_printf::printf_impl::sprintf_locale(&v40, &v17, v58.localize(), v50, ".", &(unsigned long long)v10, 1);
            v40.unwrap(&g_14c7908);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v10);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v58);
            *((int128_t *)&v10) = *((int128_t *)&v17);
            v12 = 0;
            v48.append(&(unsigned long long)v10);
            core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v22);
            return 8589934593;
        case 109:
            if (v33)
            {
                v7 = v33;
                v6 = v34;
                if (!(char)fish::common::valid_var_name(v33, v6))
                {
                    v54 = a5->field_10;
                    *(v58) = 0;
                    v2 = 4;
                    v3 = 0;
                    v9 = 1;
                    v11 = v4;
                    v12 = v5;
                    v14 = 1;
                    v15 = v7;
                    v16 = v6;
                    fish_printf::printf_impl::sprintf_locale(&(char)v17, &v58, g_14c7938[0].localize(), v56, ".", &(unsigned long long)v10, 2);
                    (char)v17.unwrap(&g_14c7980);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v10);
                    *((int128_t *)&v10) = *((int128_t *)&v58[0]);
                    v12 = 0;
                    v54.append(&(unsigned long long)v10);
                    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v22);
                    return 8589934593;
                }
                v8.to_vec(v7, v6);
                v3 = v12;
                *((int128_t *)&v0) = *((int128_t *)&v8);
                core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(v21);
                *((unsigned long long *)(v21 + 16)) = v3;
                *((int128_t *)v21) = *((int128_t *)&v58[0]);
                break;
            }
            else
            {
                v20 = &g_14c7968;
                core::option::unwrap_failed(&g_14c7968); /* do not return */
            }
        case 112:
            *((unsigned short *)((char *)&a0->field_30 + 3)) = 257;
            break;
        case 115:
            *((char *)&a0->field_30) = 1;
            break;
        case 117:
            *((unsigned short *)((char *)&a0->field_30 + 1)) = 257;
            break;
        default:
            v8 = &g_14c60b8;
            v11 = 1;
            v12 = 8;
            *((uint128_t *)&v13) = 0;
            core::panicking::panic_fmt(&v8, &g_14c7a28); /* do not return */
        }
    }
}
