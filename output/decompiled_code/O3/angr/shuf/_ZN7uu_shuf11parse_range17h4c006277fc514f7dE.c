long long uu_shuf::parse_range::h4c006277fc514f7d(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xb8], Other Possible Types: char
    unsigned long v1;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0xa8]
    char v3;  // [sp-0xa0]
    char v4;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x90]
    unsigned long v6;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x80]
    void* v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x68]
    unsigned long v10;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v11;  // [sp-0x58]
    char v12;  // [bp-0x50]
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x38]
    unsigned long long v17;  // rbp
    unsigned long long v18;  // r12
    unsigned long long v19;  // r13
    unsigned long long v20;  // r12
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax

    core::str::_$LT$impl$u20$str$GT$::split_once::hd44ca7cb1bddc490(&v12, a1, a2);
    v17 = *((long long *)&v12);
    if (!v17)
    {
        v0 = 0;
        v1 = a1;
        v2 = a2;
        v3 = 1;
        v10 = &v0;
        goto LABEL_4c1822;
    }
    else
    {
        v18 = *((long long *)&v13);
        v9 = *((long long *)&v14);
        v19 = *((long long *)&v15);
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, v17, v18);
        if (v0)
        {
            uu_shuf::parse_range::_$u7b$$u7b$closure$u7d$$u7d$::h6b984181607e7135(&v4, v17, v18);
        }
        else
        {
            v20 = v1;
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v0, v9, v19);
            if (v0)
            {
                uu_shuf::parse_range::_$u7b$$u7b$closure$u7d$$u7d$::h98c2c93f94c175e5(&v4, v9, v19);
            }
            else
            {
                v21 = v1;
                if (v20 <= v21 || v20 == v21 + 1)
                {
                    a0->field_8 = v20;
                    *((unsigned long long *)&a0->padding_10[0]) = v21;
                    a0->field_18 = 0;
                    v22 = 0;
                }
                else
                {
                    v0 = 0;
                    v1 = a1;
                    v2 = a2;
                    v3 = 1;
                    v10 = &v0;
LABEL_4c1822:
                    v11 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
                    v4 = &g_537dd8;
                    v5 = 1;
                    v8 = 0;
                    v6 = &v10;
                    v7 = 1;
                    ::0x4bfef0::core::option::Option$LT$T$GT$::map_or_else::hd0cefe2e36b201fa(&a0->field_8, &v4);
                    v22 = 1;
                }
                a0->field_0 = v22;
                return a0;
            }
        }
        *((int128_t *)&a0->field_8) = *((int128_t *)&v4);
        *((unsigned long *)&a0->field_18) = v6;
        a0->field_0 = 1;
        return a0;
    }
}
