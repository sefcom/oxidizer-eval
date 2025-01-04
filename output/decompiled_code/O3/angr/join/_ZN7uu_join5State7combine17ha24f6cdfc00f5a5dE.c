long long uu_join::State::combine::ha24f6cdfc00f5a5d(unsigned long long a0[9], unsigned long long a1, unsigned long long a2[9], struct_0 *a3)
{
    char *v0;  // [sp-0xa9]
    unsigned long long v1;  // [sp-0xa8]
    unsigned long long v2;  // [sp-0xa0]
    unsigned long long v3;  // [sp-0x98]
    unsigned long v4;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x88]
    unsigned long v6;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x78]
    unsigned long v8;  // [sp-0x70]
    char *v9;  // [bp-0x68]
    unsigned long long v10[9];  // [sp-0x60]
    unsigned long long v11;  // [sp-0x58]
    unsigned long long v12[9];  // [sp-0x50]
    unsigned long long v13;  // [sp-0x48]
    unsigned long v14;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x38]
    unsigned long long v17;  // r12
    unsigned long v18;  // rdx
    unsigned long long v19;  // rax
    void* v20;  // r15
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rax
    unsigned long long v23;  // 4111
    unsigned long long v24;  // rcx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    void* v27;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rax
    void* v31;  // rax

    v17 = uu_join::State::get_current_key::h6b22667ac5a703a7(a0);
    v14 = v17;
    v3 = v18;
    v15 = v18;
    v6 = a0[1];
    v7 = a0[2] * 48 + v6;
    v19 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&v6);
    if (!v19)
        return 0;
    v20 = v19;
    v21 = a2[1];
    v22 = a2[2] * 48 + v21;
    v23 = a3->field_10;
    *((char *)&v0) = (char)a3->field_28;
    v2 = v21;
    v1 = v22;
    if (!v23)
    {
        if (!v14)
        {
            v17 = a3->field_18;
            v3 = a3->field_20;
        }
        v8 = a2[8];
        v29 = v21;
        v30 = v22;
        do
        {
            v4 = v29;
            v5 = v30;
            while (true)
            {
                v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&v4);
                if (!v31)
                    break;
                v27 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, v17, v3);
                if (v27)
                    return v27;
                v27 = uu_join::Repr$LT$Sep$GT$::print_fields::hb1432fea054a9535(a3, a1, v20, a0[8]);
                if (v27)
                    return v27;
                v27 = uu_join::Repr$LT$Sep$GT$::print_fields::hb1432fea054a9535(a3, a1, v31, v8);
                if (v27)
                    return v27;
                v9 = v0;
                v27 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, &v9, 1);
                if (v27)
                    return v27;
            }
            v20 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&v6);
            v29 = v2;
            v30 = v1;
        } while (v20);
    }
    else
    {
        v24 = v21;
        v25 = v22;
        do
        {
            v4 = v24;
            v5 = v25;
            while (true)
            {
                v26 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&v4);
                if (!v26)
                    break;
                v9 = &v14;
                v10[0] = a0;
                v11 = v20;
                v12[0] = a2;
                v13 = v26;
                v27 = uu_join::Repr$LT$Sep$GT$::print_format::ha0fea88deb104ec8(a3, a1, &v9);
                if (v27)
                    return v27;
                v9 = v0;
                v27 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::hccae4f1a94cdd6f8(a1, &v9, 1);
                if (v27)
                    return v27;
            }
            v20 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbc4165e2b45ae32b(&v6);
            v24 = v2;
            v25 = v1;
        } while (v20);
    }
}
