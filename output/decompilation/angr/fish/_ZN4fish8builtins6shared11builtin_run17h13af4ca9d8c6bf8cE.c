long long fish::builtins::shared::builtin_run(unsigned long long a0, void* a1, unsigned long long a2, unsigned long long a3[3])
{
    void* v0;  // [bp-0xd8], Other Possible Types: char
    int v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    void* v3;  // [bp-0xc8]
    void* v4;  // [bp-0xc0]
    unsigned long long v5;  // [bp-0xb8]
    void* v6;  // [bp-0xb0]
    int v7;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v8;  // [bp-0xa0]
    void* v9;  // [bp-0x98]
    void* v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    void* v12;  // [bp-0x78]
    char v13;  // [bp-0x70]
    int v14;  // [bp-0x68], Other Possible Types: unsigned long, unsigned long long
    void* v15;  // [bp-0x60], Other Possible Types: unsigned long
    unsigned short v16;  // [bp-0x50]
    unsigned long v17;  // [bp-0x48]
    char v19;  // al
    unsigned long v20;  // rbx
    unsigned long long v21;  // rdi
    struct_1 *v22;  // rax
    unsigned long long v23;  // r15
    unsigned int v24;  // eax
    unsigned int v25;  // eax
    unsigned int v27;  // r15d
    unsigned long long v28;  // cc_ndep
    unsigned int v29;  // r15d
    unsigned int v32;  // ebx
    unsigned int v33;  // eax
    unsigned int v34;  // eax
    unsigned long v35;  // rcx
    unsigned long long v36;  // rax
    unsigned long long v37;  // rdx

    switch (a2)
    {
    case 0:
        v21 = 2;
        break;
    case 2:
        v19 = fish::parse_util::parse_util_argument_is_help((long long)a1[16], (long long)a1[24]);
        v20 = *((long long *)a1);
        if (!v19 || !fish::builtins::shared::cmd_needs_help(v20, (long long)a1[8]))
            goto LABEL_1330d56;
        fish::builtins::shared::builtin_print_help(a0, a3, v20, (long long)a1[8]);
        v21 = 0;
        break;
    default:
        v20 = *((long long *)a1);
LABEL_1330d56:
        v22 = fish::builtins::shared::builtin_lookup(v20, (long long)a1[8]);
        if (v22)
        {
            v23 = v22->field_10(a0, a3, a1, a2);
            v24 = (unsigned int)a3[1].flush_and_check_error();
            v25 = (unsigned int)a3[2].flush_and_check_error();
            if (((char)v23 & 1))
            {
                v27 = v23 >> 32;
                if (v23 >> 32)
                    goto LABEL_1330fff;
            }
            else if (((unsigned short)v23 & 0x100))
            {
                return 0;
            }
            v27 = v24;
LABEL_1330fff:
            if (v27 < 255)
                v29 = v27;
            else
                v29 = 255;
            v32 = (!v27 ? v25 : v29);
            if (v32 < 0)
            {
                if ((char)core::sync::atomic::atomic_load(&g_15a93e0, 0))
                {
                    v4 = 0;
                    v5 = 1;
                    v6 = 0;
                    v0.to_flog_str(&g_15a93d0);
                    v13.into_iter(&v0);
                    v4.spec_extend(&v13);
                    v4.push(58, &g_14c5f08);
                    v4.push(32, &g_14c5f08);
                    v0 = 0;
                    v2 = 4;
                    v3 = 0;
                    v13 = 1;
                    *((int128_t *)&v14) = *((int128_t *)a1);
                    v16 = 8197;
                    v17 = v32;
                    fish_printf::printf_impl::sprintf_locale(&v7, &v0, "builtin %ls returned invalid exit code %d", 41, &v13, 2);
                    v7.unwrap(&g_14c5f08);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v13);
                    *((int128_t *)&v7) = *((int128_t *)&v0);
                    v9 = 0;
                    v0.to_flog_str(&v7);
                    v13.into_iter(&v0);
                    v4.spec_extend(&v13);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
                    v4.push(10, &g_14c5f08);
                    fish::flog::flog_impl(v5, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v5);
                }
                v33 = v32 + 0x100;
                v34 = v32 + -((v33 >= 0 ? v33 : v32 + 511) & 0xffffff00) + 0x100;
                v35 = v34;
                if ((char)_ccall(2, 7, 0, v35 & 4294967295, v28))
                    v32 = ((unsigned int)-(v35 & 4294967295) < 0 ? v34 : -((unsigned int)v35));
                else
                    v32 = 255;
            }
LABEL_13311e3:
            v21 = v32;
            goto LABEL_13311e3;
        }
        else
        {
            if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
            {
                v10 = 0;
                v11 = 1;
                v12 = 0;
                (char)v0.to_flog_str(&g_15a9370);
                v13.into_iter(&(char)v0);
                v10.spec_extend(&v13);
                v10.push(58, &g_14c5f38);
                v10.push(32, &g_14c5f38);
                v4 = 0;
                v5 = 4;
                v6 = 0;
                v0 = 0;
                v2 = 4;
                v3 = 0;
                v36 = g_14c5f50[0].localize();
                v13 = 1;
                v14 = v20;
                v15 = (long long)a1[8];
                fish_printf::printf_impl::sprintf_locale(&(char)v7, &v0, v36, v37, ".", &v13, 1);
                (char)v7.unwrap(&g_14c5f68);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v13);
                v9 = 0;
                *((int128_t *)&v7) = *((int128_t *)&v0);
                v13 = 1;
                v14 = v8;
                v15 = 0;
                fish_printf::printf_impl::sprintf_locale(&v0, &v4, "%sbuiltin %ls returned invalid exit code %d", 2, &v13, 1);
                v0.unwrap(&g_14c5f38);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v13);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v7);
                *((int128_t *)&v1) = *((int128_t *)&v4);
                v3 = 0;
                (char)v7.to_flog_str(&v0);
                v13.into_iter(&(char)v7);
                v10.spec_extend(&v13);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                v10.push(10, &g_14c5f38);
                fish::flog::flog_impl(v11, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v10, v11);
            }
            v21 = 1;
            break;
        }
    }
    v21.from_exit_code();
    return 1;
}
