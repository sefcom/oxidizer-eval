long long fish::builtins::shared::builtin_breakpoint(struct_0 *a0, unsigned long long a1[4], unsigned long long a2[2], unsigned long a3)
{
    void* v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xd0]
    void* v2;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v3;  // [bp-0xc0]
    unsigned long long v4;  // [bp-0xb8]
    void* v5;  // [bp-0xb0]
    int v6;  // [bp-0xa8], Other Possible Types: char
    unsigned long v7;  // [bp-0xa0]
    void* v8;  // [bp-0x98], Other Possible Types: unsigned int, unsigned long
    unsigned short v9;  // [bp-0x94]
    unsigned short v10;  // [bp-0x88]
    void* v11;  // [bp-0x80]
    char v12;  // [bp-0x68]
    unsigned long v13;  // [bp-0x60]
    char v14;  // [bp-0x40]
    unsigned long long v16;  // rax
    unsigned long long v17;  // r15
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rbx
    unsigned long long v24;  // rax
    unsigned long long v25;  // rdx

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14c6270); /* do not return */
    if (a3 == 1)
    {
        v16 = 0x100000000;
        v17 = 1;
        if (a0->field_5a)
        {
            if ((char)a0.block_at_index(1).map_or(v18))
            {
                v19 = a1[2];
                v3 = 0;
                v4 = 4;
                v5 = 0;
                v1 = "%";
                v2 = 48;
                v0 = 0x8000000000000000;
                v20 = v0.localize();
                v6 = 1;
                v7 = a2[0];
                v8 = a2[1];
                fish_printf::printf_impl::sprintf_locale(&v14, &v3, v20, v18, ".", &v6, 1);
                v14.unwrap(&g_14c6288);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v6);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                memcpy(&v6, &v3, 16);
                v8 = 0;
                v19.append(&v6);
                v16 = 0x7b00000000;
            }
            else
            {
                v9 = 12;
                *((uint128_t *)&v6) = 0;
                v8 = 0;
                v21 = a0.push_block(&(char)v6);
                if (((char)fish::reader::reader_read(a0, 0, a1[3]) & 1))
                {
                    v16 = 0x100000000;
                }
                else
                {
                    a0.pop_block(v21);
                    v22 = a0.get_last_status();
                    if ((unsigned int)v22)
                    {
                        v16 = v22 * 0x100000000;
                    }
                    else
                    {
                        v16 = 0;
                        v17 = 0;
                    }
                }
            }
        }
    }
    else
    {
        v23 = a1[2];
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v24 = g_14c62a0[0].localize();
        v6 = 1;
        v7 = a2[0];
        v8 = a2[1];
        v10 = 8197;
        v11 = 0;
        v12 = 4;
        v13 = a3 - 1;
        fish_printf::printf_impl::sprintf_locale(&(char)v3, &v0, v24, v25, ".", &v6, 3);
        (char)v3.unwrap(&g_14c62b8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v6);
        memcpy(&v6, &v0, 16);
        v8 = 0;
        v23.append(&v6);
        v17 = 1;
        v16 = 0x200000000;
    }
    return v16 | v17;
}
