long long uu_sort::FieldSelector::parse_with_options::hf97b85c869b37397(struct_0 *a0, unsigned long long a1[4], unsigned long long a2[4])
{
    unsigned int v0;  // [bp-0xf0]
    unsigned int v1;  // [sp-0xed]
    unsigned int v2;  // [bp-0xe8]
    unsigned int v3;  // [sp-0xe5]
    unsigned int v4;  // [sp-0xe0]
    unsigned short v5;  // [sp-0xdc]
    unsigned int v6;  // [bp-0xd8]
    unsigned int v7;  // [sp-0xd5]
    char v8;  // [bp-0xd0]
    char v9;  // [bp-0xc8]
    char v10;  // [bp-0xc0]
    char v11;  // [bp-0xbf]
    unsigned int v12;  // [bp-0xbc]
    int v13;  // [bp-0xb8], Other Possible Types: char
    char v14;  // [bp-0xb0]
    char v15;  // [sp-0xa8]
    unsigned int v16;  // [bp-0xa7]
    unsigned int v17;  // [sp-0xa4]
    char v18;  // [bp-0xa0]
    int v19;  // [sp-0x98]
    unsigned long long v20;  // [sp-0x88]
    int v21;  // [sp-0x78]
    int v22;  // [sp-0x58]
    unsigned long long v23;  // [sp-0x38]
    unsigned long long v29;  // 4101
    unsigned long long v30;  // r15
    unsigned long long v31;  // rax
    unsigned long long v32;  // r12
    int v33;  // xmm0
    int v34;  // xmm0
    unsigned long long v35;  // 4104

    _$LT$uu_sort..KeySettings$u20$as$u20$core..default..Default$GT$::default::h939b9802cdaabb58();
    v5 = 0x600;
    v4 = 0;
    uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(&v8, a1[2], a1[3], &v4);
    if (*((long long *)&v8) != 0x8000000000000000)
    {
        *((int128_t *)&v19) = *((int128_t *)&v8);
        v20 = *((long long *)&v10);
    }
    else
    {
        uu_sort::KeyPosition::new::h2335ce3d5d49b62e(&v13, a1[0], a1[1], 1, v9);
        v23 = *((long long *)&v18);
        v29 = *((long long *)&v13);
        *((int128_t *)&v19) = *((int128_t *)&v14);
        v20 = v23;
        if (!v29)
        {
            v30 = a2[0];
            if (!v30)
            {
                vvar_273{stack -184} = v22;
                vvar_274{stack -168} = 2;
                v16 = v6;
                vvar_275{stack -164} = v7;
                uu_sort::FieldSelector::new::h76b0cdeb9dd3e1dd(a0, &v19, &v13, *((int *)&v5) * 0x100000000 | v4);
                return v31;
            }
            v32 = a2[1];
            uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(&v8, a2[2], a2[3], &v4);
            if (*((long long *)&v8) != 0x8000000000000000)
            {
                v33 = *((int128_t *)&v8);
                v31 = v10;
                v2 = *((int *)&v11);
                v3 = v12;
                v21 = v33;
                v0 = v2;
                v1 = v3;
            }
            else
            {
                uu_sort::KeyPosition::new::h2335ce3d5d49b62e(&v13, v30, v32, 0, v9);
                v34 = *((int128_t *)&v14);
                v31 = v18;
                v2 = *((int *)&(&v18)[1]);
                v3 = *((int *)&(&v18)[4]);
                v35 = *((long long *)&v13);
                v21 = v34;
                v0 = v2;
                v1 = v3;
                if (!v35)
                {
                    v22 = v21;
                    v6 = v0;
                    v7 = v1;
                    v13 = v22;
                    v15 = 2;
                    v16 = v6;
                    v17 = v7;
                    v31 = uu_sort::FieldSelector::new::h76b0cdeb9dd3e1dd(a0, &v19, &v13, *((int *)&v5) * 0x100000000 | v4);
                    return v31;
                }
            }
            *((void*)&a0->field_0) = v21;
            *((unsigned int *)&(&a0->field_10)[1]) = v0;
            a0->field_11 = v1;
            a0->field_10 = v31;
            a0->padding_15[31] = 2;
            return v31;
        }
    }
    *((unsigned long long *)&a0->field_10) = v20;
    *((void*)&a0->field_0) = v19;
    a0->padding_15[31] = 2;
    return v31;
}
