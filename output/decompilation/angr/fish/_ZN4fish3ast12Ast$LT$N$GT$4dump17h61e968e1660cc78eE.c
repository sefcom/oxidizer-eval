void fish::ast::Ast<N>::dump(unsigned long a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [sp-0xd8]
    char v1;  // [bp-0xd8]
    unsigned int v2;  // [bp-0xd7]
    unsigned int v3;  // [bp-0xd4]
    unsigned long long v4;  // [bp-0xd0]
    struct_6 *v5;  // [bp-0xc8]
    int v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    unsigned long v8;  // [bp-0xa8]
    void* v9;  // [bp-0x90]
    unsigned long long v10;  // [bp-0x88]
    void* v11;  // [bp-0x80]
    struct_7 *v12;  // [bp-0x78]
    char v13;  // [bp-0x70]
    unsigned long long v14;  // [bp-0x68]
    unsigned long long v15;  // [bp-0x60]
    unsigned long long v16;  // [bp-0x58]
    int v17;  // [bp-0x50]
    char v18;  // [bp-0x40]
    unsigned long long v20;  // r12
    unsigned long long v21;  // rax
    struct_6 *v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned int v26;  // esi
    unsigned long long v27;  // r13
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rsi
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax

    v9 = 0;
    v10 = 4;
    v11 = 0;
    v13.new(a1 + 72, &g_14c2660);
    while (true)
    {
        v20 = v13.next();
        if (!v20)
        {
            v12->field_10 = 0;
            v12->field_0 = *((int128_t *)&v9);
            core::ptr::drop_in_place<fish::ast::Traversal>(&v13);
            return;
        }
        v21 = v14.rfold(v14 + v15 * 24);
        if (!v21)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14c4f60); /* do not return */
        alloc::slice::<impl [T]>::repeat(&v1, "! : '%ls'keyword: %ls<error>stringredirection<;>Trying to look too far ahead", 2, v21 - 1);
        v8 = v5;
        *((int128_t *)&v6) = *((int128_t *)&v1);
        v9.extend(v7, &v5->padding_0[v7]);
        core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
        v22->field_40(&v16, v20);
        if ((int)v16 == 35)
        {
            v9.extend("argument-", "-");
            v23 = (long long)v17.try_source(a2, a3);
            if (!v23)
                goto LABEL_12fcc58;
            v1 = 1;
            v4 = v23;
            v5 = v22;
            fish_printf::printf_impl::sprintf_locale(&(char)v6, &v9, ": '%ls'keyword: %ls<error>stringredirection<;>Trying to look too far ahead", 7, &v1, 1);
            (char)v6.unwrap(&g_14c4f78);
            goto LABEL_12fcc50;
        }
        else
        {
            v24 = v22->field_50(v20);
            if (v24)
            {
                v25 = v22->field_b0(v24).to_wstr();
                v1 = 1;
                v26 = (int)(&v6)[3];
                v2 = (int)v6;
                v3 = v26;
                v4 = v25;
                v5 = v22;
                fish_printf::printf_impl::sprintf_locale(&(char)v6, &v9, "keyword: %ls<error>stringredirection<;>Trying to look too far ahead", 12, &v1, 1);
                (char)v6.unwrap(&g_14c4f90);
LABEL_12fcc50:
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
                goto LABEL_12fcc58;
            }
            else
            {
                v27 = v22->field_58(v20);
                if (v27)
                {
                    v22->field_b0(v27);
                    switch (v22->field_b0(v27))
                    {
                    case 1:
                        v28 = 7;
                        v29 = "<error>stringredirection<;>Trying to look too far ahead";
                        goto LABEL_12fcfa4;
                    case 2:
                        (char)v6.from_str("stringredirection<;>Trying to look too far ahead", 6);
                        v31 = v22->field_80(v27, a2, a3);
                        if (!v31)
                            goto LABEL_12fcf83;
                        v1 = 1;
                        v4 = v31;
                        v5 = v22;
                        fish_printf::printf_impl::sprintf_locale(&v18, &(char)v6, ": '%ls'keyword: %ls<error>stringredirection<;>Trying to look too far ahead", 7, &v1, 1);
                        v18.unwrap(&g_14c4fa8);
LABEL_12fcf7b:
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
LABEL_12fcf83:
                        v5 = v8;
                        *((int128_t *)&v0) = (int128_t)v6;
                        break;
                    case 6:
                        (char)v6.from_str("redirection<;>Trying to look too far ahead", 11);
                        v30 = v22->field_80(v27, a2, a3);
                        if (!v30)
                            goto LABEL_12fcf83;
                        v1 = 1;
                        v4 = v30;
                        v5 = v22;
                        fish_printf::printf_impl::sprintf_locale(&v18, &(char)v6, ": '%ls'keyword: %ls<error>stringredirection<;>Trying to look too far ahead", 7, &v1, 1);
                        v18.unwrap(&g_14c4fc0);
                        goto LABEL_12fcf7b;
                    case 10:
                        v28 = 3;
                        v29 = "<;>Trying to look too far ahead";
LABEL_12fcfa4:
                        v1.from_str(v29, v28);
                        break;
                    default:
                        fish::parse_constants::token_type_user_presentable_description(&v1, v22->field_b0(v27), 0);
                        v33 = v4.index(v5, &g_14c4fd8);
                        v9.spec_extend(v33, v33 + v22 * 4);
LABEL_12fcfe7:
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
LABEL_12fcc58:
                        v9.extend("\n%s: %s\nInvalid working directory, it must start and end with /", "%s: %s\nInvalid working directory, it must start and end with /");
                    }
                }
                else
                {
                    v22->field_68(&v1, v20);
                    v34 = v4.index(v5, &g_14c4ff0);
                    v9.spec_extend(v34, v34 + v22 * 4);
                    goto LABEL_12fcfe7;
                }
            }
        }
    }
}
