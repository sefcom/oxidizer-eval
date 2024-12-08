long long uu_touch::update_times::h5d7dda066229025f(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, unsigned long a4, unsigned long long a5)
{
    unsigned int v0;  // [sp-0x8c]
    char v1;  // [bp-0x88]
    char v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    char v6;  // [bp-0x58]
    unsigned long v7;  // [bp+0x8]
    char v8;  // [bp+0x10]
    char v9;  // [bp+0x18]
    unsigned int v10;  // r15d
    unsigned int v11;  // r13d
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rax
    unsigned long long v14;  // r9
    unsigned int v15;  // r15d
    unsigned int v16;  // r13d
    unsigned long long v17;  // rax

    v10 = v7;
    if (!(char)a4)
    {
        v0 = a2;
        uu_touch::stat::h0d3df34496a53c6f(&v6, a0, a1, -0x100 | !a3);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h0ca2f8799b7dafd6(&v1, &v6, a0, a1);
        if (*((long long *)&v1))
        {
            v13 = *((long long *)&v2);
            return v13;
        }
        v12 = *((long long *)&v4);
        v11 = *((int *)&v5);
    }
    else
    {
        v11 = *((int *)&v9);
        v12 = *((long long *)&v8);
        if (!((unsigned int)a4 == 1))
            goto LABEL_5c295f;
        v0 = a2;
        uu_touch::stat::h0d3df34496a53c6f(&v6, a0, a1, -0x100 | !a3);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h6ab79d59acf38e35(&v1, &v6, a0, a1);
        v10 = *((long long *)&v3);
        if (*((long long *)&v1))
        {
            v13 = *((long long *)&v2);
            return v13;
        }
        a5 = *((long long *)&v2);
    }
LABEL_5c295f:
    if (!a3 || (char)v0)
        v17 = filetime::set_file_times::h0311bc24e39504c5(a0, a1, v14, v15, v12, v16);
    else
        v17 = filetime::set_symlink_file_times::hb50057b90cc77d26(a0, a1, v14, v15, v12, v16);
    v13 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hee4fd8d85be06e42(v17, a0);
    return v13;
}
