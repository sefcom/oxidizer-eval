long long fish::env_universal_common::EnvUniversal::parse_message_30_internal(unsigned long long a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    void* v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    void* v2;  // [bp-0xb8]
    unsigned long long v3;  // [bp-0xb0]
    void* v4;  // [bp-0xa8], Other Possible Types: unsigned long long
    void* v5;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v6;  // [bp-0x98]
    void* v7;  // [bp-0x90]
    char v8;  // [bp-0x88]
    void* v9;  // [bp-0x78]
    char v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    void* v16;  // rdx
    unsigned long long v17;  // r12
    unsigned long v18;  // rbx
    void* v21;  // rbx
    char v22;  // r14b
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax

    v14 = a0.starts_with(a1, "#", 1);
    if ((char)v14)
        return v14;
    v3 = a0;
    v4 = a1;
    if ((char)fish::env_universal_common::match(&v3, "SETUVAR--pathSET_EXPORTSETFailed to read file:/fish_variables", 7))
    {
        v15 = fish::env_universal_common::skip_spaces(v3, v4);
        v3 = v15;
        v4 = v16;
        if ((int)v3.char_at(v16, 0) == 45)
        {
            a0 = a0;
            a1 = a1;
            do
            {
                if ((char)fish::env_universal_common::match(&v3, "--export^", 8))
                {
                    v22 |= 1;
                }
                else if ((char)fish::env_universal_common::match(&v3, "--pathSET_EXPORTSETFailed to read file:/fish_variables", 6))
                {
                    v22 |= 4;
                }
                else
                {
                    v17 = v3;
                    if (v4)
                    {
                        while (true)
                        {
                            v18 = v4;
                            if ((int)v17.char_at(v18, 0) == 9 || (int)v17.char_at(v18, 0) == 32)
                                break;
                            v17 += 4;
                            v4 = v18 - 1;
                            if (v18 == 1)
                                goto LABEL_13a0ba0;
                        }
                    }
                    else
                    {
LABEL_13a0ba0:
                        v18 = 0;
                    }
                    v3 = v17;
                    v4 = v18;
                }
                v3 = fish::env_universal_common::skip_spaces(v3, v4);
                v4 = v16;
            } while ((int)v3.char_at(v16, 0) == 45);
        }
        v23 = v15.populate_1_variable(v21, v22, a2, a3);
        if ((char)v23)
            return v23;
        v24 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a93e0, 0);
        if (!(char)v24)
            return v24;
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v5.to_flog_str(&g_15a93d0);
        v10.into_iter(&v5);
        v0.spec_extend(&v10);
        v0.push(58, &g_14d74e0);
        v0.push(32, &g_14d74e0);
        v5 = 0;
        v6 = 4;
        v7 = 0;
        v10 = 1;
        v11 = a0;
        v12 = a1;
        fish_printf::printf_impl::sprintf_locale(&v8, &v5, "U", 49, ".", &v10, 1);
        v8.unwrap(&g_14d74e0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v10);
        memcpy(&v8, &v5, 16);
        v9 = 0;
        v5.to_flog_str(&v8);
        v10.into_iter(&v5);
        v0.spec_extend(&v10);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
        v0.push(10, &g_14d74e0);
        fish::flog::flog_impl(1, 0);
    }
    else
    {
        v25 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a93e0, 0);
        if (!(char)v25)
            return v25;
        v0 = 0;
        v1 = 1;
        v2 = 0;
        (char)v5.to_flog_str(&g_15a93d0);
        v10.into_iter(&(char)v5);
        v0.spec_extend(&v10);
        v0.push(58, &g_14d74c8);
        v0.push(32, &g_14d74c8);
        v5 = 0;
        v6 = 4;
        v7 = 0;
        v10 = 1;
        v11 = a0;
        v12 = a1;
        fish_printf::printf_impl::sprintf_locale(&v8, &v5, "U", 49, ".", &v10, 1);
        v8.unwrap(&g_14d74c8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v10);
        memcpy(&v8, &v5, 16);
        v9 = 0;
        v5.to_flog_str(&v8);
        v10.into_iter(&v5);
        v0.spec_extend(&v10);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v8);
        v0.push(10, &g_14d74c8);
        fish::flog::flog_impl(1, 0);
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
}
