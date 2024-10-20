long long uu_split::split::h2909317b17ce33b8(struct_0 *a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x218]
    char *v1;  // [sp-0x1b8]
    unsigned long long v2;  // [sp-0x190]
    unsigned long long v3;  // [sp-0x188]
    int v4;  // [sp-0x180]
    void* v5;  // [sp-0x170]
    unsigned int *v6;  // [sp-0x168]
    unsigned long long v7;  // [sp-0x160]
    unsigned long long v8;  // [sp-0x158]
    char v9;  // [bp-0x150], Other Possible Types: unsigned int
    unsigned short v10;  // [sp-0x14c]
    char *v12;  // r12
    unsigned long long v13;  // r13
    unsigned int *v15;  // rax
    unsigned long long v16;  // r15
    unsigned long long v18;  // r12
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rcx

    v12 = a0->field_78;
    v13 = a0->field_80;
    if (v13 != 1 || *(v12) != 45)
    {
        v8 = 0x1b600000000;
        v9 = 0;
        v10 = 0;
        v9 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v0, &v8, v12, v13);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc1a71ecf3f3e785b(&v8, &v0, a0);
        if (v8)
            return v8;
        v15 = __rust_alloc(4, 4);
        if (!v15)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v1 = v12;
        *(v15) = v9;
        v16 = &g_50b900;
    }
    else
    {
        v15 = __rust_alloc(8, 8);
        if (!v15)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v1 = v12;
        *((long long *)&v15) = std::io::stdio::stdin::h7215cc131abb55d8();
        v16 = &g_50b958;
    }
    v18 = 0x2000;
    if (a0->field_0)
        v18 = a0->field_8;
    if (!v18)
    {
        v2 = 1;
        v3 = v18;
        *((int128_t *)&v4) = 0;
        v5 = 0;
        v6 = v15;
        v7 = v16;
        v19 = a0->field_10 - 6;
        if (v19 >= 3)
            v19 = 3;
        goto *((int *)(4312580 + vvar_30{reg 32} * 4)) + 4312580;
    }
    else
    {
        if (v18 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v20 = __rust_alloc(v18, 1);
        if (v20)
        {
            v2 = v20;
            v3 = v18;
            *((int128_t *)&v4) = 0;
            v5 = 0;
            v6 = v15;
            v7 = v16;
            v21 = a0->field_10 - 6;
            if (v21 >= 3)
                v21 = 3;
            goto *((int *)(4312580 + vvar_32{reg 32} * 4)) + 4312580;
        }
    }
}
