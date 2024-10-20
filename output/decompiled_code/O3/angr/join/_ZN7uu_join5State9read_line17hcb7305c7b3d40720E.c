long long uu_join::State::read_line::hcb7305c7b3d40720(struct_0 *a0, unsigned long long a1[11], unsigned long long a2)
{
    unsigned long v0;  // [sp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x70]
    unsigned long long v2;  // [sp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    int v6;  // [sp-0x48]
    char v7;  // [bp-0x38]
    char v8;  // [bp-0x28]
    unsigned long long v10;  // r12
    unsigned long long v11;  // rax
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rcx

    v10 = 0x8000000000000000;
    _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h62013c32e5184def(&v3, &a1[5]);
    v11 = *((long long *)&v3);
    if (v11 != 9223372036854775809)
    {
        v12 = *((long long *)&v4);
        v13 = *((long long *)&v5);
        a1[10] = a1[10] + 1;
        if (v11 == 0x8000000000000000)
        {
            *((unsigned long long *)&a0->padding_8[0]) = v1;
            v10 = 9223372036854775809;
        }
        else
        {
            v0 = v11;
            v1 = v12;
            v2 = v13;
            _$LT$uu_join..WhitespaceSep$u20$as$u20$uu_join..Separator$GT$::field_ranges::hbbd562ae268eb617(&v7, a2, v1, v2, a1[9]);
            *((int128_t *)&v6) = *((int128_t *)&v7);
            v11 = *((long long *)&v8);
            if (v11 > a1[9])
                a1[9] = v11;
            *((unsigned long long *)((char *)&a0->field_18 + 8)) = v2;
            *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v0);
            *((void*)&a0->field_0) = v6;
            a0->field_10 = v11;
            return v11;
        }
    }
    a0->field_0 = v10;
    return v11;
}
