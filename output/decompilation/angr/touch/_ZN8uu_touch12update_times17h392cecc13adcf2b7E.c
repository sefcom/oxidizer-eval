long long uu_touch::update_times::h392cecc13adcf2b7(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3, unsigned long a4, unsigned long long a5, unsigned int a6, unsigned long a7, unsigned int a8)
{
    unsigned int v0;  // [sp-0x8c]
    char v1;  // [bp-0x88]
    char v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x68]
    char v6;  // [bp-0x58]
    unsigned int v7;  // r15d
    unsigned int v8;  // r13d
    unsigned long long v9;  // rbp
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    v7 = a6;
    if (!(char)a4)
    {
        v0 = a2;
        uu_touch::stat::haa73667d17037b3b(&v6, a0, a1, !a3);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hcdbd76867b98bd36(&v1, &v6, a0, a1);
        if (*((long long *)&v1))
        {
            v10 = *((long long *)&v2);
            return v10;
        }
        v9 = *((long long *)&v4);
        v8 = *((int *)&v5);
    }
    else
    {
        v8 = a8;
        v9 = a7;
        if (!((unsigned int)a4 == 1))
            goto LABEL_5c320f;
        v0 = a2;
        uu_touch::stat::haa73667d17037b3b(&v6, a0, a1, !a3);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc7a727021908757a(&v1, &v6, a0, a1);
        v7 = *((long long *)&v3);
        if (*((long long *)&v1))
        {
            v10 = *((long long *)&v2);
            return v10;
        }
        a5 = *((long long *)&v2);
    }
LABEL_5c320f:
    if (!a3 || (char)v0)
        v11 = filetime::set_file_times::hbfafa69b31a805ce(a0, a1, a5, v7, v9, v8);
    else
        v11 = filetime::set_symlink_file_times::hd7eb213bf3122499(a0, a1, a5, v7, v9, v8);
    v10 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h2d49cffdd9c7d093(v11, a0, a1);
    return v10;
}
