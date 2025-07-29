long long uu_ls::extract_time(unsigned long long a0)
{
    struct struct_0 v0[8];  // [bp-0x60]
    char v1;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x50]
    char *v3;  // [bp-0x48]
    uint128_t v4;  // [bp-0x40]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned long long v9;  // rbp

    v1.try_get_one(a0, _ZN5uu_ls7options4TIME17hfb4a52d9ca06507aE, g_6a0e10);
    v6 = _ZN5uu_ls7options4TIME17hfb4a52d9ca06507aE.unwrap(g_6a0e10, &v1);
    if (v6)
    {
        v7 = v6[1];
        v8 = v6[2];
        v9 = vvar_25{reg 56} & 0xffffffffffffff00 | 2;
        if (!(char)v7.equal(v8, "ctimestatusaccessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 5) && !(char)v7.equal(v8, "statusaccessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 6))
        {
            v9 = v9 & 0xffffffffffffff00 | 1;
            if (!(char)v7.equal(v8, "accessatimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 6) && !(char)v7.equal(v8, "atimeusemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 5) && !(char)v7.equal(v8, "usemtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 3))
            {
                if ((char)v7.equal(v8, "mtimemodificationbirthinternal error: entered unreachable code: Invalid field for --time", 5) || (char)v7.equal(v8, "modificationbirthinternal error: entered unreachable code: Invalid field for --time", 12))
                {
                    v9 = 0;
                }
                else
                {
                    v9 = v9 & 0xffffffffffffff00 | 3;
                    if (!(char)v7.equal(v8, "birthinternal error: entered unreachable code: Invalid field for --time", 5) && !(char)v7.equal(v8, "creation%H:%M:%S@", 8))
                    {
                        v1 = &g_69f0d0;
                        v2 = 1;
                        v3 = &v0[0].field_0;
                        v4 = 0;
                        core::panicking::panic_fmt(&v1, &g_69f0e0); /* do not return */
                    }
                }
            }
        }
    }
    else
    {
        v9 = vvar_25{reg 56} & 0xffffffffffffff00 | 1;
        if (!(char)a0.get_flag(_ZN5uu_ls7options4time6ACCESS17hc7f3ed5f1fd45e8cE, g_6a15f8))
            v9 = (int)a0.get_flag(_ZN5uu_ls7options4time6CHANGE17h69e0d1c07fd63d41E, g_6a1608) & 0xffffff00 | (char)a0.get_flag(_ZN5uu_ls7options4time6CHANGE17h69e0d1c07fd63d41E, g_6a1608) * 2;
    }
    return v9 & 4294967295;
}
