long long fish::builtins::test::test_expressions::parse_number(unsigned long long a0, unsigned long long a1, unsigned long long a2[2], unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    void* v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    void* v5;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xd0]
    unsigned short v7;  // [bp-0xc8], Other Possible Types: char
    char v8;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xc0]
    void* v10;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v11;  // [bp-0xa8]
    unsigned long long v12;  // [bp-0xa0]
    unsigned long long v13;  // [bp-0x98]
    char v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x78]
    char v16;  // [bp-0x70]
    char v17;  // [bp-0x6f]
    char v18;  // [bp-0x60]
    char v19;  // [bp-0x58]
    unsigned long long v20;  // [bp-0x4c]
    char v21;  // [bp-0x44]
    char v22;  // [bp-0x40]
    char v23;  // [bp-0x38]
    char v25;  // r13b
    unsigned long long v26;  // xmm0lq
    char v27;  // bpl
    unsigned long long v28;  // xmm0lq
    unsigned long long v30;  // cc_ndep
    unsigned long long v31;  // rcx
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rax
    unsigned long long v36;  // rdx
    char *v37;  // rsi
    unsigned long long v41;  // rdx
    unsigned long long v43;  // rdx
    unsigned long long v46;  // xmm0lq
    unsigned long long v47;  // rax

    fish::builtins::test::test_expressions::parse_double(&v18, a0, a1);
    fish::wutil::wcstoi::fish_wcstol(&v16, a0, a1);
    if (v16 == 1)
    {
        v6 = a3;
        v25 = v18;
        v26 = *((long long *)&v19);
        v27 = v25;
        v15 = v26;
        if ((char)v27.is_ok_and() && (char)v16.is_err_and(v17))
        {
            v18.unwrap();
            v6 = v26;
            floor();
            if (((CmpF(v26, 4890909195324358655) & 69 | (char)((CmpF(v26, 4890909195324358655) & 69) >> 6)) & 1) == 1)
                v28 = v26;
            else
                v28 = 9223372036854775807;
            v31 = v28;
            if (!((char)_ccall(11, 0, (unsigned long long)(CmpF(v26, v26) & 69), 0, v30)))
                v31 = 0;
        }
        else
        {
            if ((v25 & (char)v16.eq(&g_5487d0)))
            {
                v21 = 0;
                v20 = 42949672961;
                fish::wutil::wcstoi::wcstoi_impl(&v22, a0, a0 + a1 * 4, &v20, &v7);
                if (v22)
                {
                    v3 = 0;
                    v4 = 4;
                    v5 = 0;
                    v1 = "A";
                    v2 = 31;
                    v0 = 0x8000000000000000;
                    v8 = 1;
                    v9 = a0;
                    v10 = a1;
                    fish_printf::printf_impl::sprintf_locale(&v14, &v3, v0.localize(), v33, ".", &v8, 1);
                    v14.unwrap(&g_14d4c48);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    memcpy(&v8, &v3, 16);
                    v10 = 0;
                    v34 = &g_14d4c60;
                    goto LABEL_1384307;
                }
                else
                {
                    v3 = 0;
                    v4 = 4;
                    v5 = 0;
                    v1 = "I";
                    v2 = 43;
                    v0 = 0x8000000000000000;
                    v35 = v0.localize();
                    v7 = 16389;
                    v9 = *((long long *)&v23);
                    v11 = 1;
                    v12 = a0;
                    v13 = a1;
                    fish_printf::printf_impl::sprintf_locale(&v14, &v3, v35, v36, ".", &v7, 2);
                    v14.unwrap(&g_14d4c18);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v7);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    memcpy(&v7, &v3, 16);
                    v10 = 0;
                    v34 = &g_14d4c30;
                    v37 = &v7;
                    goto LABEL_1384470;
                }
            }
            if ((char)v27.is_ok_and())
            {
                v1 = "N";
                v2 = 12;
                v0 = 0x8000000000000000;
                v7.to_vec(v0.localize(), a2);
                v5 = v10;
                memcpy(&(char)v3, &v7, 16);
                v6.push(&(char)v3, &g_14d4c00);
                goto LABEL_13844e7;
            }
            else if ((char)v27.is_ok_and())
            {
                v1 = "N";
                v2 = 18;
                v0 = 0x8000000000000000;
                v7.to_vec(v0.localize(), a2);
                v5 = v10;
                memcpy(&(char)v3, &v7, 16);
                v6.push(&(char)v3, &g_14d4be8);
LABEL_13844e7:
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
            }
            else
            {
                if ((char)v16.eq(&g_549050))
                {
                    v3 = 0;
                    v4 = 4;
                    v5 = 0;
                    v1 = "R";
                    v2 = 21;
                    v0 = 0x8000000000000000;
                    v7 = 1;
                    v9 = a0;
                    v10 = a1;
                    fish_printf::printf_impl::sprintf_locale(&v14, &v3, v0.localize(), v41, ".", &v7, 1);
                    v14.unwrap(&g_14d4bb8);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    memcpy(&v7, &v3, 16);
                    v10 = 0;
                    v34 = &g_14d4bd0;
                }
                else
                {
                    v3 = 0;
                    v4 = 4;
                    v5 = 0;
                    v1 = "I";
                    v2 = 19;
                    v0 = 0x8000000000000000;
                    v7 = 1;
                    v9 = a0;
                    v10 = a1;
                    fish_printf::printf_impl::sprintf_locale(&v14, &v3, v0.localize(), v43, ".", &v7, 1);
                    v14.unwrap(&g_14d4b88);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                    memcpy(&v7, &v3, 16);
                    v10 = 0;
                    v34 = &g_14d4ba0;
                }
LABEL_1384307:
                v37 = &v7;
LABEL_1384470:
                v6.push(v37, v34);
            }
            return 0;
        }
    }
    v47 = v31.new();
    a2[0] = v47;
    a2[1] = v46;
    return v47 & 0xffffffffffffff00 | 1;
}
