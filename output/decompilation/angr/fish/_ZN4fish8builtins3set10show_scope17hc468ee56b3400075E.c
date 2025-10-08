long long fish::builtins::set::show_scope(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [sp-0x140], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x138]
    void* v2;  // [sp-0x130], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x128], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x120]
    unsigned long long v5;  // [bp-0x118]
    void* v6;  // [bp-0x110]
    unsigned long long v7[3];  // [bp-0x108]
    unsigned long long v8[3];  // [bp-0x108]
    unsigned long long v9[3];  // [bp-0x108]
    unsigned long long v10[3];  // [bp-0x108]
    unsigned long long v11;  // [bp-0x100]
    void* v12;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xf8]
    int v14;  // [bp-0xf0]
    char v15;  // [sp-0xe8]
    void* v16;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0xd8]
    char v18;  // [sp-0xc8]
    unsigned long long v19;  // [bp-0xc0]
    int v20;  // [bp-0xc0]
    void* v21;  // [bp-0xb8]
    char v22;  // [bp-0xa8]
    unsigned long long v23;  // [bp-0xa0]
    void* v24;  // [bp-0x98]
    char v25;  // [bp-0x88]
    unsigned long long v26;  // [bp-0x80]
    int v27;  // [bp-0x68]
    unsigned long long v28;  // [bp-0x60]
    unsigned long long v29;  // [bp-0x58]
    char v30;  // [bp-0x40]
    unsigned long v32;  // rax
    unsigned long long v34;  // r13
    unsigned long long v35;  // r15
    unsigned long long v36;  // rax
    unsigned long long v37;  // r15
    unsigned long long v38;  // r12
    void* v39;  // rbp
    void* v40;  // rdx
    unsigned int v41[9];  // r14
    unsigned long v44;  // r14
    void* v45;  // rbx
    unsigned long long v46;  // rsi

    v32 = a2;
    if ((unsigned short)v32 != 1)
    {
        switch ((unsigned int)v32)
        {
        case 4:
            v34 = "g";
            v35 = 6;
            break;
        case 8:
            v34 = "u";
            v35 = 9;
            break;
        default:
            *(v7) = &g_14ccb58;
            v11 = 1;
            v12 = 8;
            *((uint128_t *)&v14) = 0;
            core::panicking::panic_fmt(&v7, &g_14ccb98); /* do not return */
        }
    }
    else
    {
        v34 = "l";
        v35 = 5;
    }
    (char)v7.getf(a4, a0, a1, v32 & 4294967295);
    if (!v7)
        return core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&(char)v7);
    v29 = v13;
    *((int128_t *)&v27) = *((int128_t *)&v7[0]);
    if (!((char)v13 & 1))
    {
        v11 = "u";
        v12 = 10;
        *(v7) = 0x8000000000000000;
        v36 = v7.localize();
    }
    else
    {
        v11 = "e";
        v12 = 8;
        *(v7) = 0x8000000000000000;
        v36 = v7.localize();
    }
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
    v3 = v36;
    if (!((char)v13 & 4))
    {
        v37 = v34;
        v38 = 4;
        v39 = 0;
    }
    else
    {
        v11 = " ";
        v12 = 16;
        *(v7) = 0x8000000000000000;
        v38 = v7.localize();
        v39 = v40;
        v37 = v34;
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
    }
    v41 = (long long)v27;
    v4 = 0;
    v5 = 4;
    v6 = 0;
    v1 = "$";
    v2 = 48;
    v0 = 0x8000000000000000;
    *((char *)v8) = 1;
    v11 = a0;
    v12 = a1;
    v15 = 1;
    v16 = v37;
    v17 = v35;
    v18 = 1;
    v19 = v3;
    v21 = v40;
    v22 = 1;
    v23 = v38;
    v24 = v39;
    v25 = 4;
    v26 = v28;
    fish_printf::printf_impl::sprintf_locale(&v30, &v4, v0.localize(), v40, ".", &(unsigned long long)v8, 5);
    v30.unwrap(&g_14ccb68);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 5]>(&(unsigned long long)v8);
    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
    *((int128_t *)&v9) = *((int128_t *)&v4);
    v12 = 0;
    a3.append(&(unsigned long long)v8);
    if (a0.flags_for(a1) < 2)
    {
        a3.push(10);
        if (v26)
            goto LABEL_136ad83;
    }
    else
    {
        v11 = " ";
        v12 = 13;
        *(v7) = 0x8000000000000000;
        a3.append(v7.localize(), a2);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
        if (v26)
        {
LABEL_136ad83:
            v3 = v26 - 50;
            v44 = &v41[8];
            v45 = 0;
            do
            {
                if (v26 > 100)
                {
                    if (v45 == 50)
                    {
                        v46 = &g_550d90;
                        if ((int)fish::common::get_ellipsis_char() <= 0x100)
                            v46 = fish::common::get_ellipsis_str();
                        a3.append(v46, 1);
                        a3.push(10);
                    }
                    if ((v45 < v3 & 50 <= v45))
                        continue;
                }
                fish::common::escape_string(&v4, *((long long *)(v44 - 8)), *((long long *)v44), 0);
                v0 = 0;
                v1 = 4;
                v2 = 0;
                *((char *)v9) = 1;
                v11 = a0;
                v12 = a1;
                v15 = 4;
                v16 = v45 + 1;
                v18 = 1;
                *((int128_t *)&v20) = *((int128_t *)&v5);
                fish_printf::printf_impl::sprintf_locale(&v30, &v0, "$%ls[%d]: |%ls|\n --on-signal %lsa", 16, &(unsigned long long)v10, 3);
                v30.unwrap(&g_14ccb80);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&(unsigned long long)v10);
                *((int128_t *)&v10) = *((int128_t *)&v0);
                v12 = 0;
                a3.append(&(unsigned long long)v10);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                v45 += 1;
                v44 += 24;
            } while (v26 != v45);
        }
    }
    return core::ptr::drop_in_place<fish::env::var::EnvVar>(&(char)v27);
}
