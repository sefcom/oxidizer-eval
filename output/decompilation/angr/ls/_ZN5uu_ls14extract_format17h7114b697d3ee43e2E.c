void uu_ls::extract_format(struct_1 *a0, unsigned long long a1)
{
    struct struct_0 v0[8];  // [bp-0x68]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x58]
    char *v3;  // [bp-0x50]
    uint128_t v4;  // [bp-0x48]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // r14
    unsigned long long v8;  // r15
    char v9;  // r12b
    int v10;  // xmm0

    v1.try_get_one(a1, *((long long *)&_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE), g_6a0df0);
    v6 = *((long long *)&_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE).unwrap(g_6a0df0, &v1);
    if (v6)
    {
        v7 = v6[1];
        v8 = v6[2];
        v9 = 1;
        if (!(char)v7.equal(v8, "longhourmanyZero", 4) && !(char)v7.equal(v8, "verbosesingle-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 7))
        {
            v9 = 2;
            if (!(char)v7.equal(v8, "single-columncolumnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 13) && !((char)v7.equal(v8, "columnsacrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 7) || (char)v7.equal(v8, "verticalNovember", 8)))
            {
                v9 = 3;
                if (!(char)v7.equal(v8, "acrosshorizontalcommasinternal error: entered unreachable code: Invalid field for --format", 6) && !(char)v7.equal(v8, "horizontalcommasinternal error: entered unreachable code: Invalid field for --format", 10))
                {
                    v9 = 4;
                    if (!(char)v7.equal(v8, "commasinternal error: entered unreachable code: Invalid field for --format", 6))
                    {
                        v1 = &g_69f080;
                        v2 = 1;
                        v3 = &v0[0].field_0;
                        v4 = 0;
                        core::panicking::panic_fmt(&v1, &g_69f090); /* do not return */
                    }
                }
            }
        }
        v10 = *((int128_t *)&_ZN5uu_ls7options6FORMAT17h655b9559784aa64bE);
        a0->field_0 = v9;
    }
    else if ((char)a1.get_flag(*((long long *)&_ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E), g_6a1428))
    {
        v10 = *((int128_t *)&_ZN5uu_ls7options6format4LONG17h80050e8eaca426e4E);
        a0->field_0 = 1;
    }
    else if ((char)a1.get_flag(*((long long *)&_ZN5uu_ls7options6format6ACROSS17hf452c3664493c363E), g_6a1448))
    {
        v10 = *((int128_t *)&_ZN5uu_ls7options6format6ACROSS17hf452c3664493c363E);
        a0->field_0 = 3;
    }
    else if ((char)a1.get_flag(*((long long *)&_ZN5uu_ls7options6format6COMMAS17h2c5349b856a55a83E), g_6a1468))
    {
        v10 = *((int128_t *)&_ZN5uu_ls7options6format6COMMAS17h2c5349b856a55a83E);
        a0->field_0 = 4;
    }
    else if ((char)a1.get_flag(*((long long *)&_ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E), g_6a1438))
    {
        v10 = *((int128_t *)&_ZN5uu_ls7options6format7COLUMNS17hee2189b8176009b4E);
        a0->field_0 = 0;
    }
    else
    {
        v1 = std::io::stdio::stdout();
        if (std::sys::pal::unix::io::is_terminal())
            a0->field_0 = 0;
        else
            a0->field_0 = 2;
        *((unsigned long long *)&a0->field_8) = 0;
        return;
    }
    *((void*)&a0->field_8) = v10;
    return;
}
