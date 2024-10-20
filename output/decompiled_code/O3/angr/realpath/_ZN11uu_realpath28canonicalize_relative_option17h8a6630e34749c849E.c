long long uu_realpath::canonicalize_relative_option::h8a6630e34749c849(unsigned long long a0[3], unsigned long long a1[3], unsigned int a2, unsigned int a3)
{
    unsigned long long v0[3];  // [sp-0x70]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    unsigned long long v5;  // [sp-0x48]
    unsigned long long v6[3];  // [sp-0x40]
    char v7;  // [sp-0x38]
    unsigned long long v9;  // r13
    unsigned long long v10;  // r15
    unsigned long long v11[3];  // 4096
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rax
    unsigned long long v14[3];  // rdi
    unsigned long long v15[3];  // rdi
    unsigned long long v16;  // r12
    unsigned long long v17[3];  // rdi
    unsigned long long v19;  // rax

    v10 = a1[0];
    if (v10 == 0x8000000000000000)
    {
LABEL_487ae0:
        a0[0] = 0x8000000000000000;
        a0[1] = v11;
        a0[2] = v16;
        return v19;
    }
    v12 = a2;
    v5 = a1[1];
    uucore::features::fs::canonicalize::hdcdf97922d07a7fd(&v2, a1[1], a1[2], v12 & 4294967295 & 4294967295, a3);
    v13 = *((long long *)&v2);
    v14 = *((long long *)&v3);
    v9 = v13;
    if (v9 == 0x8000000000000000)
    {
LABEL_4879f2:
        *((double *)&a0[1]) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h4602fc7a2f79ab09(v15, a1);
        a0[2] = &anon.74f624fe0f3003fa77e35a7822b62d30.8.llvm.17351024934342531244;
        a0[0] = 9223372036854775809;
        if (v10)
            return __rust_dealloc(v5);
        return &anon.74f624fe0f3003fa77e35a7822b62d30.8.llvm.17351024934342531244;
    }
    v16 = *((long long *)&v4);
    if ((char)v12 != 1)
    {
LABEL_487abe:
        if (v10)
            v13 = __rust_dealloc(a1[1]);
        goto LABEL_487ae0;
    }
    v0[0] = v14;
    v13 = std::path::Path::is_dir::h9ac0db933706da51(v14, v16);
    if ((char)v13)
    {
        v17[0] = v0;
        goto LABEL_487abe;
    }
    std::sys::pal::unix::fs::readdir::h9e1c3c12d516a70c(&v2, v0, v16);
    v13 = v3;
    if ((char)v13 == 2)
    {
        if (v9)
            __rust_dealloc(v0);
        v15[0] = v6;
        goto LABEL_4879f2;
    }
    v6[0] = *((long long *)&v2);
    v7 = (v13 & 255 & 255);
    v6[0] = vvar_253 - 1;
    if (CasCmpNE(v6[0], vvar_253))
        goto LABEL_0x487aa5;
    if (!vvar_253 - 1)
        goto LABEL_0x487aac;
}
