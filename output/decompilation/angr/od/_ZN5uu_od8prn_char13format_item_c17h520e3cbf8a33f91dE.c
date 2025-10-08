long long uu_od::prn_char::format_item_c(unsigned long long a0, char *a1, unsigned long long a2)
{
    char v0;  // [bp-0x71]
    char *v1;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    char *v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v9;  // [bp-0x38]
    char *v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    char v12;  // [bp-0x18]
    unsigned long v14;  // rax
    char v16;  // sil
    char v17;  // sil
    unsigned long long v18;  // r8
    char v19;  // sil
    unsigned long long v21;  // rax
    char *v22;  // rax

    if (!a2)
        core::panicking::panic_bounds_check(0, 0, &g_503808); /* do not return */
    v14 = *(a1);
    v0 = v14;
    if (v14 >= 0)
    {
        v1 = &(&_ZN5uu_od8prn_char7C_CHARS17hf9c44c07aa090c89E)[16 * v14];
        v10 = &v1;
        v11 = <&T as core::fmt::Display>::fmt;
        v4 = &g_41a940;
        v5 = 1;
        v4 = &g_41a940;
        v8 = &g_41d150;
        v9 = 1;
        v6 = v22;
        v7 = 1;
        a0.map_or_else(&v4);
        return a0;
    }
    else if ((v14 & 255) < 192)
    {
        a0.to_vec("  **", 4);
        return a0;
    }
    else
    {
        v16 = v14;
        v17 = (v16 & 224) == 192;
        if (((v16 & 224) == 192 & a2 != 1))
        {
            v18 = &g_503820;
        }
        else
        {
            v19 = v14;
            v17 = (v19 & 240) == 224;
            if (((v19 & 240) == 224 & 3 <= a2))
            {
                v18 = &g_503848;
            }
            else
            {
                v17 = 4 <= a2;
                if (!(((char)v14 & 248) == 240 & 4 <= a2))
                {
                    v10 = &v0;
                    v11 = core::fmt::num::<impl core::fmt::Octal for i8>::fmt;
                    v4 = &g_503838;
                    v5 = 1;
                    v8 = &g_41d1f8;
                    v9 = 1;
                    v22 = &v10;
                    v6 = v22;
                    v7 = 1;
                    a0.map_or_else(&v4);
                    return a0;
                }
                v18 = &g_503860;
            }
        }
        core::str::converts::from_utf8(&(char)v10, 0.index(v17, a1, a2, v18), a2);
        if ((int)v10 == 1)
        {
            v1 = &v0;
            v2 = core::fmt::num::<impl core::fmt::Octal for i8>::fmt;
            v4 = &g_503838;
            v5 = 1;
            v21 = &g_41d1f8;
        }
        else
        {
            memcpy(&v12, &v11, 16);
            v1 = &v12;
            v2 = <&T as core::fmt::Display>::fmt;
            v4 = &g_41a940;
            v5 = 1;
            v21 = &g_41d150;
        }
        v8 = v21;
        v9 = 1;
        v6 = &v1;
        v7 = 1;
        a0.map_or_else(&v4);
        return a0;
    }
}
