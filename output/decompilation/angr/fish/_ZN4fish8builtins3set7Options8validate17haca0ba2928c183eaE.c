long long fish::builtins::set::Options::validate(char a0[13], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long long a5, unsigned long long a6)
{
    void* v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    void* v2;  // [bp-0xd0]
    char v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc0]
    void* v5;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    char v9;  // [bp-0x80]
    unsigned long v10;  // [bp-0x70]
    unsigned long v11;  // [bp-0x60]
    void* v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x47]
    char v16;  // [bp-0x46]
    char v17;  // [bp-0x45]
    char v18;  // bpl
    unsigned long long v20;  // rdx
    unsigned long long v22;  // rdx
    char v23;  // cl
    unsigned long long v25;  // rdx
    unsigned long long v27;  // rdx
    unsigned long long v29;  // rdx
    unsigned long long v31;  // rdx
    unsigned long long v33;  // rdx
    unsigned long long v35;  // rdx

    v18 = a0[6];
    if (a0[12] && ((v18 & 1) || a0[7] == 1))
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v3 = 1;
        v4 = a1;
        v5 = a2;
        fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14c82b0[0].localize(), v20, ".", &v3, 1, 0);
        v9.unwrap(&g_14cc948);
    }
    else if ((v18 & 1) && a0[7] == 1)
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v3 = 1;
        v4 = a1;
        v5 = a2;
        fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14c82b0[0].localize(), v22, ".", &v3, 1, 0);
        v9.unwrap(&g_14cc930);
    }
    else
    {
        v10 = a1;
        v11 = a2;
        v12 = 0;
        v13 = 4;
        v14 = a0[2];
        v15 = a0[3];
        v16 = a0[4];
        v17 = a0[11];
        if (((v12.fold() < 2 | v18) & 1))
        {
            v23 = a0[5];
            if (v23 && a0[8] == 1)
            {
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v3 = 1;
                a1 = v10;
                v4 = a1;
                a2 = v11;
                v5 = a2;
                fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14cc000[0].localize(), v25, ".", &v3, 1, 0);
                v9.unwrap(&g_14cc918);
            }
            else if (a0[9] && a0[10] == 1)
            {
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v3 = 1;
                a1 = v10;
                v4 = a1;
                a2 = v11;
                v5 = a2;
                fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14cc8e8[0].localize(), v27, ".", &v3, 1, 0);
                v9.unwrap(&g_14cc900);
            }
            else if ((v18 & 1) && (v23 || a0[8] == 1))
            {
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v3 = 1;
                a1 = v10;
                v4 = a1;
                a2 = v11;
                v5 = a2;
                fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14c82b0[0].localize(), v29, ".", &v3, 1, 0);
                v9.unwrap(&g_14cc8d0);
            }
            else if (a0[1] && (a0[2] || a0[3] || ((a0[4] | v18) & 1) || v23 || a0[7] || a0[11]))
            {
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v3 = 1;
                a1 = v10;
                v4 = a1;
                a2 = v11;
                v5 = a2;
                fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14c82b0[0].localize(), v31, ".", &v3, 1, 0);
                v9.unwrap(&g_14cc8b8);
            }
            else
            {
                if (!(v18 & a3 == a4))
                    return 0;
                v0 = 0;
                v1 = 4;
                v2 = 0;
                v3 = 1;
                a1 = v10;
                v4 = a1;
                a2 = v11;
                v5 = a2;
                v6 = 1;
                v7 = "-";
                v8 = 7;
                fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14c6010[0].localize(), v33, ".", &v3, 2, 0);
                v9.unwrap(&g_14cc8a0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v3);
LABEL_1368f37:
                memcpy(&v3, &v0, 16);
                v5 = 0;
                a6.append(&v3);
                fish::builtins::shared::builtin_print_error_trailer(a5, a6, a1, a2);
                return 1;
            }
        }
        else
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v3 = 1;
            a1 = v10;
            v4 = a1;
            a2 = v11;
            v5 = a2;
            fish_printf::printf_impl::sprintf_locale(&v9, &v0, g_14cc0d8[0].localize(), v35, ".", &v3, 1, 0);
            v9.unwrap(&g_14cc888);
        }
    }
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v3);
    goto LABEL_1368f37;
}
