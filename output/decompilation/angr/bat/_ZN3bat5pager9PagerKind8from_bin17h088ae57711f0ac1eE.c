long long bat::pager::PagerKind::from_bin(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x60]
    int v3;  // [bp-0x58]
    int v4;  // [bp-0x50]
    char v5;  // [bp-0x40], Other Possible Types: unsigned long long
    char v6;  // [bp-0x38]
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rbx
    unsigned int v10;  // r15d
    unsigned long long v11;  // rdx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // r14

    v8 = vvar_62{reg 56} & 0xffffffffffffff00 | 4;
    if (!(char)a0.equal(a1, "builtinBAT_PAGERPAGERsrc/preprocessor.rs", 7))
    {
        v9 = a0.file_stem(a1);
        std::env::args_os(&v0);
        v5.next(&v0);
        core::ptr::drop_in_place<std::env::ArgsOs>(&v0);
        v10 = (unsigned int)&v0 & 0xffffff00 | 5;
        if (v5 != 0x8000000000000000)
        {
            *((int128_t *)&v3) = *((int128_t *)&v6);
            v1 = v5;
            v10 = (!(char)bat::pager::PagerKind::from_bin::{{closure}}(v9, v11, &v1)) * 5;
        }
        if (v9)
        {
            v0.from_utf8_lossy(v9, v11);
            if (v1 == 9223372036854775809)
                goto LABEL_83d661;
            v13 = (long long)v3;
            v14 = (long long)v4;
            v8 = v8 & 0xffffffffffffff00 | 1;
            if (!(char)v13.equal(v14, "lessOS: ", 4))
            {
                v8 = v8 & 0xffffffffffffff00 | 2;
                if (!(char)v13.equal(v14, "more", 4))
                {
                    v8 = v8 & 0xffffffffffffff00 | 3;
                    if (!(char)v13.equal(v14, "most", 4))
                        goto LABEL_83d661;
                }
            }
        }
        else
        {
            v2 = 9223372036854775809;
LABEL_83d661:
            v8 = v10;
        }
        core::ptr::drop_in_place<nu_ansi_term::display::OSControl<str>>(&v0);
    }
    return v8 & 4294967295;
}
