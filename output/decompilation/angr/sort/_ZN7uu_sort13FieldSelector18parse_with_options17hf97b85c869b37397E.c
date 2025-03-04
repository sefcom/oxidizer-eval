long long uu_sort::FieldSelector::parse_with_options::hf97b85c869b37397(struct_0 *a0, unsigned long long a1[4], unsigned long long a2[4])
{
    unsigned int v1;  // [bp-0xf0]
    unsigned int v2;  // [sp-0xed]
    unsigned int v3;  // [bp-0xe8]
    unsigned int v4;  // [sp-0xe5]
    unsigned int v5;  // [sp-0xe0]
    unsigned short v6;  // [sp-0xdc]
    unsigned int v7;  // [bp-0xd8]
    unsigned int v8;  // [sp-0xd5]
    char v9;  // [bp-0xd0]
    char v10;  // [bp-0xc8]
    char v11;  // [bp-0xc0]
    char v12;  // [bp-0xbf]
    unsigned int v13;  // [bp-0xbc]
    int v14;  // [sp-0xb8], Other Possible Types: char
    char v15;  // [bp-0xb0]
    char v16;  // [sp-0xa8]
    unsigned int v17;  // [bp-0xa7]
    unsigned int v18;  // [sp-0xa4]
    char v19;  // [bp-0xa0]
    int v20;  // [sp-0x98]
    unsigned long long v21;  // [sp-0x88]
    int v22;  // [sp-0x78]
    int v23;  // [sp-0x58]
    unsigned long long v24;  // [sp-0x38]
    unsigned long long v30;  // 4101
    unsigned long long v31;  // r15
    unsigned long long v32;  // rax
    unsigned long long v33;  // r12
    int v34;  // xmm0
    int v35;  // xmm0
    unsigned long long v36;  // 4104

    _$LT$uu_sort..KeySettings$u20$as$u20$core..default..Default$GT$::default::h939b9802cdaabb58();
    v6 = 0x600;
    v5 = 0;
    uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(&v9, a1[2], a1[3], &v5);
    if (*((long long *)&v9) != 0x8000000000000000)
    {
        *((int128_t *)&v20) = *((int128_t *)&v9);
        v21 = *((long long *)&v11);
    }
    else
    {
        uu_sort::KeyPosition::new::h2335ce3d5d49b62e(&v14, a1[0], a1[1], 1, v10);
        v24 = *((long long *)&v19);
        v30 = *((long long *)&v14);
        *((int128_t *)&v20) = *((int128_t *)&v15);
        v21 = v24;
        if (!v30)
        {
            v31 = a2[0];
            if (!v31)
            {
                vvar_270{stack -184} = v23;
                vvar_271{stack -168} = 2;
                v17 = v7;
                vvar_272{stack -164} = v8;
                uu_sort::FieldSelector::new::h76b0cdeb9dd3e1dd(a0, &v20, &v14, *((int *)&v6) * 0x100000000 | v5);
                return v32;
            }
            v33 = a2[1];
            uu_sort::FieldSelector::parse_with_options::parse_key_settings::hbaa53af66f7d56a7(&v9, a2[2], a2[3], &v5);
            if (*((long long *)&v9) != 0x8000000000000000)
            {
                v34 = *((int128_t *)&v9);
                v32 = v11;
                v3 = *((int *)&v12);
                v4 = v13;
                v22 = v34;
                v1 = v3;
                v2 = v4;
            }
            else
            {
                uu_sort::KeyPosition::new::h2335ce3d5d49b62e(&v14, v31, v33, 0, v10);
                v35 = *((int128_t *)&v15);
                v32 = v19;
                v3 = *((int *)&(&v19)[1]);
                v4 = *((int *)&(&v19)[4]);
                v36 = *((long long *)&v14);
                v22 = v35;
                v1 = v3;
                v2 = v4;
                if (!v36)
                {
                    v23 = v22;
                    v7 = v1;
                    v8 = v2;
                    v14 = v23;
                    v16 = 2;
                    v17 = v7;
                    v18 = v8;
                    v32 = uu_sort::FieldSelector::new::h76b0cdeb9dd3e1dd(a0, &v20, &v14, *((int *)&v6) * 0x100000000 | v5);
                    return v32;
                }
            }
            *((void*)&a0->field_0) = v22;
            *((unsigned int *)&(&a0->field_10)[1]) = v1;
            a0->field_11 = v2;
            a0->field_10 = v32;
            a0->padding_15[31] = 2;
            return v32;
        }
    }
    *((unsigned long long *)&a0->field_10) = v21;
    *((void*)&a0->field_0) = v20;
    a0->padding_15[31] = 2;
    return v32;
}
