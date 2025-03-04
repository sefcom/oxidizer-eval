long long uu_join::State::combine::he1c3f6ec163eb0f7(unsigned long long a0[9], unsigned long long a1, unsigned long long a2[9])
{
    char *v0;  // [sp-0xb1]
    unsigned long long v1;  // [sp-0xb0]
    unsigned long long v2;  // [sp-0xa8]
    unsigned long long v3;  // [sp-0xa0]
    unsigned long v4;  // [sp-0x98]
    unsigned long long v5;  // [sp-0x90]
    unsigned long v6;  // [sp-0x88]
    unsigned long long v7;  // [sp-0x80]
    unsigned long v8;  // [sp-0x78]
    unsigned long v9;  // [sp-0x70]
    char *v10;  // [bp-0x68]
    unsigned long long v11[9];  // [sp-0x60]
    unsigned long long v12;  // [sp-0x58]
    unsigned long long v13[9];  // [sp-0x50]
    unsigned long long v14;  // [sp-0x48]
    unsigned long v15;  // [sp-0x40]
    unsigned long long v16;  // [sp-0x38]
    unsigned long long v18;  // r15
    unsigned long v19;  // rdx
    unsigned long long v20;  // rax
    void* v21;  // r14
    unsigned long long v22;  // rcx
    unsigned long long v23;  // rax
    struct_0 *v24;  // rcx
    unsigned long long v25;  // 4111
    unsigned long long v26;  // rax
    void* v27;  // rax
    unsigned long long v28;  // r12
    unsigned long long v29;  // rbp
    void* v30;  // rax

    v18 = uu_join::State::get_current_key::h6b22667ac5a703a7(a0);
    v15 = v18;
    v3 = v19;
    v16 = v19;
    v6 = a0[1];
    v7 = a0[2] * 48 + v6;
    v20 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&v6);
    if (!v20)
        return 0;
    v21 = v20;
    v22 = a2[1];
    v23 = a2[2] * 48 + v22;
    v25 = v24->field_140;
    *((char *)&v0) = (char)v24->field_148;
    v2 = v22;
    v1 = v23;
    if (!v25)
    {
        if (!v15)
        {
            v18 = v24->field_120;
            v3 = v24->field_128;
        }
        v9 = a0[8];
        v28 = v24->field_108;
        v29 = v24->field_110;
        v8 = a2[8];
        do
        {
            v4 = v22;
            v5 = v23;
            while (true)
            {
                v30 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&v4);
                if (!v30)
                    break;
                v27 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, v18, v3);
                if (v27)
                    return v27;
                v27 = uu_join::Repr$LT$Sep$GT$::print_fields::h1387b25fbf2df66a(v28, v29, a1, v21, v9);
                if (v27)
                    return v27;
                v27 = uu_join::Repr$LT$Sep$GT$::print_fields::h1387b25fbf2df66a(v28, v29, a1, v30, v8);
                if (v27)
                    return v27;
                v10 = v0;
                v27 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, &v10, 1);
                if (v27)
                    return v27;
            }
            v21 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&v6);
            v22 = v2;
            v23 = v1;
        } while (v21);
    }
    else
    {
        do
        {
            v4 = v22;
            v5 = v23;
            while (true)
            {
                v26 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&v4);
                if (!v26)
                    break;
                v10 = &v15;
                v11[0] = a0;
                v12 = v21;
                v13[0] = a2;
                v14 = v26;
                v27 = uu_join::Repr$LT$Sep$GT$::print_format::h7a7867d185f65886(v24, a1, &v10);
                if (v27)
                    return v27;
                v10 = v0;
                v27 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, &v10, 1);
                if (v27)
                    return v27;
            }
            v21 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&v6);
            v22 = v2;
            v23 = v1;
        } while (v21);
    }
}
