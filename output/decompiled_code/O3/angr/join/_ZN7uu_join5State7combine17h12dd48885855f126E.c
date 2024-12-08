long long uu_join::State::combine::h12dd48885855f126(unsigned long long a0[9], unsigned long long a1, unsigned long long a2[9], struct_0 *a3)
{
    char v0;  // [sp-0xa1]
    unsigned long long v1;  // [sp-0xa0]
    unsigned long long v2;  // [sp-0x98]
    unsigned long long v3;  // [sp-0x90]
    unsigned long v4;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x80]
    unsigned long v6;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x70]
    unsigned long v8;  // [bp-0x68], Other Possible Types: char
    unsigned long long v9[9];  // [sp-0x60]
    unsigned long long v10;  // [sp-0x58]
    unsigned long long v11[9];  // [sp-0x50]
    unsigned long long v12;  // [sp-0x48]
    unsigned long v13;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v14;  // [sp-0x38]
    unsigned long long v16;  // r15
    unsigned long v17;  // rdx
    unsigned long long v18;  // rax
    void* v19;  // r14
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rax
    unsigned long long v22;  // 4111
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    void* v26;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rax
    void* v31;  // rax

    v16 = uu_join::State::get_current_key::h4148c5666ccca327(a0);
    v13 = v16;
    v3 = v17;
    v14 = v17;
    v6 = a0[1];
    v7 = a0[2] * 48 + v6;
    v18 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbd04696a76d6e615(&v6);
    if (!v18)
        return 0;
    v19 = v18;
    v20 = a2[1];
    v21 = a2[2] * 48 + v20;
    v22 = a3->field_10;
    v0 = a3->field_28;
    v2 = v20;
    v1 = v21;
    if (!v22)
    {
        if (!v13)
        {
            v16 = a3->field_18;
            v3 = a3->field_20;
        }
        do
        {
            v4 = v29;
            v5 = v30;
            while (true)
            {
                v31 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbd04696a76d6e615(&v4);
                if (!v31)
                    break;
                v26 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, v16, v3);
                if (v26)
                    return v26;
                v26 = uu_join::Repr$LT$Sep$GT$::print_fields::h443ae88fa5dcea6d(a1, v19, a0[8]);
                if (v26)
                    return v26;
                v26 = uu_join::Repr$LT$Sep$GT$::print_fields::h443ae88fa5dcea6d(a1, v31, a2[8]);
                if (v26)
                    return v26;
                v8 = v0;
                v26 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, &v8, 1);
                if (v26)
                    return v26;
            }
            v19 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbd04696a76d6e615(&v6);
            v29 = v2;
            v30 = v1;
        } while (v19);
    }
    else
    {
        do
        {
            v4 = v23;
            v5 = v24;
            while (true)
            {
                v25 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbd04696a76d6e615(&v4);
                if (!v25)
                    break;
                v8 = &v13;
                v9[0] = a0;
                v10 = v19;
                v11[0] = a2;
                v12 = v25;
                v26 = uu_join::Repr$LT$Sep$GT$::print_format::hef7755cc347937f4(a3, a1, &v8);
                if (v26)
                    return v26;
                v8 = v0;
                v26 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h8f60a657e3e64758(a1, &v8, 1);
                if (v26)
                    return v26;
            }
            v19 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbd04696a76d6e615(&v6);
            v29 = v2;
            v30 = v1;
        } while (v19);
    }
}
