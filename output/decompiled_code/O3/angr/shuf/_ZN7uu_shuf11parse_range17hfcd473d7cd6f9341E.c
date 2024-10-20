long long uu_shuf::parse_range::hfcd473d7cd6f9341(struct_0 *a0, char *a1, unsigned long a2)
{
    void* v0;  // [sp-0xb8]
    char *v1;  // [sp-0xb0], Other Possible Types: unsigned long long
    char *v2;  // [sp-0xa8], Other Possible Types: unsigned long long
    char v3;  // [sp-0xa0]
    char v4;  // [bp-0x98], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v5;  // [sp-0x90]
    char v6;  // [bp-0x88]
    unsigned long v7;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x78]
    unsigned long long v9;  // [sp-0x70]
    unsigned long long v10;  // [sp-0x68]
    void* v11;  // [sp-0x60]
    char v12;  // [bp-0x50]
    char v13;  // [bp-0x48]
    unsigned long v14;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x38]
    void* v17;  // r12
    unsigned long long v18;  // rdx
    char *v19;  // rcx
    char *v20;  // rcx
    char *v22;  // r13
    unsigned long long v23;  // r12
    unsigned long long v24;  // rbp
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax

    v17 = 0;
    while (true)
    {
        v18 = a2 - v17;
        if (v18 <= 15)
        {
            if (a2 == v17)
                goto LABEL_48e3fc;
            v19 = 0;
            while (*(a1 + v17 + v19) != 45)
            {
                v19 += 1;
                if (v18 == v19)
                    goto LABEL_48e3fc;
            }
        }
        else if (!(core::slice::memchr::memchr_aligned::hd7c7abb492a5eb9c(45, a1 + v17) == 1))
        {
            goto LABEL_48e3fc;
        }
        v22 = v20 + v17;
        v17 = v17 + v20 + 1;
        if (v22 < a2 && *((char *)(a1 + v22)) == 45)
            break;
        if (a2 < v17)
            goto LABEL_48e3fc;
    }
    core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v12, a1, v22);
    if (v12)
    {
        v0 = 0;
        v1 = a1;
        goto LABEL_48e368;
    }
    else
    {
        v22 = a2 - v17;
        v23 = v17 + a1;
        v24 = *((long long *)&v13);
        core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&v12, v23, v22);
        if (!v12)
        {
            v25 = *((long long *)&v13);
            if (!(v24 > v25) || !(v24 != v25 + 1))
            {
                a0->field_8 = v24;
                *((unsigned long long *)&a0->padding_10[0]) = v25;
                a0->field_18 = 0;
                a0->field_0 = 0;
                return a0;
            }
LABEL_48e3fc:
            v0 = 0;
            v1 = a1;
            v2 = a2;
            v3 = 1;
            v4 = &v0;
            v5 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v7 = &g_4f24d0;
            v8 = 1;
            v11 = 0;
            v9 = &v4;
            v10 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&a0->field_8, &v7);
        }
        else
        {
            v0 = 0;
            v1 = v23;
LABEL_48e368:
            v2 = v22;
            v3 = 1;
            v14 = &v0;
            v15 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::hfaf6efcc1d3ad37d;
            v7 = &g_4f24d0;
            v8 = 1;
            v11 = 0;
            v9 = &v14;
            v10 = 1;
            alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v4, &v7);
            v26 = *((long long *)&v6);
            *((int128_t *)&a0->field_8) = *((int128_t *)&v4);
            *((unsigned long long *)&a0->field_18) = v26;
        }
    }
    a0->field_0 = 1;
    return a0;
}
