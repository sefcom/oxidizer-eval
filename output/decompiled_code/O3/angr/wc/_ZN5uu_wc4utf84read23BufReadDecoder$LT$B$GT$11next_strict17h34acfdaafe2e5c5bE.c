long long uu_wc::utf8::read::BufReadDecoder$LT$B$GT$::next_strict::h34acfdaafe2e5c5b(unsigned long long a0[3], struct_0 *a1)
{
    unsigned int v0;  // [sp-0x54]
    unsigned long v1;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned long long v2;  // [sp-0x48]
    void* v3;  // [bp-0x40]
    unsigned long long v4;  // [sp-0x38]
    struct_1 *v6;  // r14
    unsigned long v7;  // r15
    unsigned long long v8;  // r13
    int v9;  // ymm0
    void* v10;  // rax
    void* v11;  // rcx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx
    int v15;  // xmm0
    void* v16;  // rbx
    char v17;  // dl
    unsigned long long v18;  // rax
    unsigned long long v19[3];  // rax
    char v20;  // bl
    void* v24;  // rcx
    void* v25;  // rax
    unsigned long long v26;  // rax

    v6 = &a1->padding_38;
    v7 = a1->field_30;
    v8 = &a1->padding_20[8];
    while (true)
    {
        v10 = a1->field_10;
        v11 = a1->field_18;
        if (v7)
        {
            v12 = v10 + v7;
            v10 = v13;
            a1->field_10 = v10;
            a1->field_30 = 0;
        }
        v1 = v1;
        if (v10 >= v11)
        {
            v1 = a1->field_0;
            v2 = a1->field_8;
            v11 = 0;
            v4 = *((long long *)&a1->padding_20[0]);
            v7 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_buf::ha9f04b33856a0b5f(v8, &v1);
            if (!v7)
            {
                a1->field_10 = 0;
                v15 = *((int128_t *)&v3);
                v9 = v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15;
                *((void*)&a1->field_18) = v15;
                v10 = 0;
                v1 = v1;
            }
            else
            {
                break;
            }
        }
        v1 = v1;
        v7 = v11 - v10;
        if (!v1)
            break;
        v16 = v1 + v10;
        v7 = a1->field_3c;
        if (!v7)
        {
            if (!v7)
            {
                a0[0] = 2;
                return v19;
            }
            core::str::converts::from_utf8::ha1effb4cca6d9901(&v1, v16, v7);
            if (!v1)
            {
                v20 = 0;
                goto LABEL_48fe05;
            }
            v18 = v2;
            if (v18)
                goto LABEL_48fdff;
            if ((char)v3)
            {
LABEL_48fdff:
                v20 = v16 | -0x100 | !v18;
LABEL_48fe05:
                a1->field_30 = v7;
                v24 = a1->field_10;
                v25 = a1->field_18;
                if (v24 >= v25)
                {
                    v1 = a1->field_0;
                    v2 = a1->field_8;
                    v25 = 0;
                    v4 = *((long long *)&a1->padding_20[0]);
                    v26 = _$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read_buf::ha9f04b33856a0b5f(v8, &v1);
                    if (v26)
                    {
                        vvar_447{reg 24} = a0;
                        v19[0] = 1;
                        v19[1] = 0;
                        v19[2] = v26;
                        return v19;
                    }
                    a1->field_10 = 0;
                    *((int128_t *)&a1->field_18) = *((int128_t *)&v3);
                    v24 = 0;
                }
                v26 = v25 - v24;
                if (!v1)
                {
                    v19 = a0;
                    v19[0] = 1;
                    v19[1] = 0;
                    v19[2] = v26;
                    return v19;
                }
                else if (v7 > v26)
                {
                    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                }
                else if ((v20 & 1))
                {
                    a0[0] = 1;
                    v19[1] = v6;
                    v19[2] = v7;
                    return v19;
                }
                else
                {
                    a0[0] = 0;
                    v19[1] = v6;
                    v19[2] = v7;
                    return v19;
                }
            }
            a1->field_30 = v7;
            v0 = 0;
            if (v7 >= 5)
            {
                goto LABEL_48feef;
            }
            else
            {
                memcpy(&v0, v16, v7);
                v6->field_4 = v7;
                v6->field_0 = v0;
            }
        }
        else
        {
            if (!v7)
            {
                a1->field_3c = 0;
                if ((v7 & 255) >= 5)
                    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
            }
            else
            {
                v7 = uu_wc::utf8::Incomplete::try_complete_offsets::h85069ced82c9bb90(v6, v16, v7);
                a1->field_30 = v7;
                if (v17 == 2)
                    continue;
                v7 = a1->field_3c;
                a1->field_3c = 0;
                if (v7 >= 5)
                {
LABEL_48feef:
                    core::slice::index::slice_end_index_len_fail::hb96f779f51482844(); /* do not return */
                }
                else if (!(v17 & 1))
                {
                    v19 = a0;
                    v19[0] = 0;
                    v19[1] = v6;
                    v19[2] = v7;
                    return v19;
                }
            }
            v19 = a0;
            v19[0] = 1;
            v19[1] = v6;
            v19[2] = v7;
            return v19;
        }
    }
    v19 = a0;
    v19[0] = 1;
    v19[1] = 0;
    v19[2] = v7;
    return v19;
}
