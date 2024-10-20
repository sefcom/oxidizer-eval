long long uu_realpath::resolve_path::h7226dba9d97b313c(unsigned long long a0, unsigned long long a1, char a2, unsigned int a3, unsigned int a4, unsigned long a5)
{
    char v0;  // [sp-0x65]
    char v1;  // [bp-0x60], Other Possible Types: unsigned long, unsigned long long
    unsigned long v2;  // [sp-0x58], Other Possible Types: unsigned long long
    unsigned long v3;  // [sp-0x50], Other Possible Types: unsigned long long
    char v4;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x40]
    unsigned long long v6;  // [sp-0x38]
    unsigned long v7;  // [bp+0x8]
    char v8;  // [bp+0x10]
    char v9;  // [bp+0x18]
    unsigned long long v10;  // r12
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbp
    unsigned long long v13;  // r15
    unsigned long long v14;  // r13
    unsigned long long v15;  // rbx
    unsigned long long v16;  // 4096
    unsigned long long v19;  // rbx

    uucore::features::fs::canonicalize::hdcdf97922d07a7fd(&v1, a0, a1, a4, a3);
    v10 = v1;
    v11 = v2;
    if (v10 == 0x8000000000000000)
        return v11;
    v12 = *((long long *)&v8);
    v13 = v7;
    v14 = v3;
    if (v12)
    {
        v15 = v11;
        if (!(char)std::path::Path::_starts_with::h98ec86359c41a446(v11, v14, v12, *((long long *)&v9)))
        {
            v4 = v10;
            v5 = v15;
            goto LABEL_487c2d;
        }
        else
        {
            v1 = v10;
            v2 = v15;
            v3 = v14;
            if (!a5)
                v13 = *((long long *)&v9);
        }
LABEL_487c0d:
        uucore::features::fs::make_path_relative_to::ha372fb45acfefc68(&v4, &v1, v16, v13);
    }
    else if (a5)
    {
        v1 = v10;
        v2 = v11;
        v3 = v14;
        goto LABEL_487c0d;
    }
    else
    {
        v4 = v10;
        v5 = v11;
LABEL_487c2d:
        v6 = v14;
    }
    v1 = std::io::stdio::stdout::h077da66234850927();
    v19 = v5;
    v11 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&v1, v19, v6);
    if (v4)
        __rust_dealloc(v19);
    if (!v11)
    {
        v1 = std::io::stdio::stdout::h077da66234850927();
        v0 = a2;
        v11 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_all::he47e3670e90f933e(&v1, &v0, 1);
        return v11;
    }
    return v11;
}
