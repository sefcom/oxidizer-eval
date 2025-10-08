long long fish::path::path_is_valid(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [sp-0x48]
    unsigned long long v3;  // [sp-0x40]
    unsigned long long v4;  // [bp-0x38]
    unsigned long long v6;  // rbp
    unsigned int v8;  // eax
    unsigned int v9;  // edx

    v4 = a0;
    if (a1)
    {
        v0 = ".";
        v1 = 1;
        v2 = ".";
        v3 = 2;
        v6 = vvar_45{reg 56} & 0xffffffffffffff00 | 1;
        if (!v4.slice_contains(&v0, 2))
        {
            v0 = ".";
            v1 = 2;
            v2 = ".";
            v3 = 3;
            if (v4.slice_contains(&v0, 2))
            {
                if (!a3)
                    goto LABEL_13f0567;
                v6 = (int)a2.equal(a3, "/", 1) & 0xffffff00 | (char)a2.equal(a3, "/", 1) ^ 1;
            }
            else
            {
                v0 = a0;
                v1 = a0 + a1 * 4;
                v8 = v0.next();
                if (v8 != 2)
                {
                    v6 = v9;
                    v8.unwrap(v9, &g_14bd1b0);
                    if ((unsigned int)v6 != 47)
                        goto LABEL_13f05bc;
                    v6 = v6 & 0xffffff00 | !(int)fish::wutil::waccess(v4, a1, 0);
                }
                else
                {
LABEL_13f05bc:
                    v0.to_vec(a2, a3);
                    v0.spec_extend(v4, v4 + a1 * 4);
                    v6 = v6 & 0xffffffffffffff00 | !(int)fish::wutil::waccess(v1, ".", 0);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
                }
            }
        }
    }
    else
    {
LABEL_13f0567:
        v6 = 0;
    }
    return v6 & 4294967295;
}
