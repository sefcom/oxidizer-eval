long long just::analyzer::Analyzer::analyze_recipe(struct_4 *a0, struct_3 *a1)
{
    char v0;  // [bp-0x119]
    uint128_t v1[5];  // [bp-0x118]
    unsigned long long v2;  // [bp-0x108]
    int v3;  // [bp-0x100], Other Possible Types: char
    int v4;  // [bp-0xf0]
    int v5;  // [bp-0xe0]
    int v6;  // [bp-0xd0]
    int v7;  // [bp-0xc0], Other Possible Types: char
    void* v8;  // [bp-0xb0]
    unsigned long long v9;  // [bp-0xa8]
    void* v10;  // [bp-0xa0]
    unsigned int v11;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x98]
    unsigned int v13;  // [bp-0x98]
    unsigned long long v14;  // [bp-0x98]
    unsigned long long v15;  // [sp-0x90]
    int v16;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x80]
    int v18;  // [bp-0x78], Other Possible Types: unsigned long long
    int v19;  // [bp-0x68]
    unsigned long long v20;  // [bp-0x58]
    unsigned long long v21;  // [bp-0x50]
    unsigned long long v22;  // [bp-0x48]
    unsigned long long v23;  // [bp-0x40]
    unsigned long long v24;  // [bp-0x38]
    unsigned long long v26;  // rbx
    unsigned long v27;  // r15
    unsigned long long v28;  // rbp
    char v29;  // bpl
    unsigned long long v30;  // rbx
    unsigned long long v31;  // rdx
    unsigned int v33;  // 4098
    unsigned long v34;  // rbx
    struct_0 *v35;  // r15
    unsigned long long v36;  // rbx
    unsigned long long v37;  // rbx
    char v38;  // al
    unsigned long v39;  // r12
    unsigned long long v40;  // rax
    unsigned long v41;  // rdi
    unsigned long long v42;  // rax

    v8 = 0;
    v10 = 0;
    if (a1->field_58)
    {
        v26 = a1->field_58 * 208;
        v27 = &a1->field_50->padding_4[124];
        v28 = 0;
        do
        {
            v30 = v26;
            if (!v8.get(v9, v27.lexeme(), v31))
            {
                v8.insert(v27.lexeme(), v31);
                v33 = *((int *)(v27 - 128));
                if (((~((char)v28) | v33 != 18) & 1))
                {
                    v29 |= v33 != 18;
                    v28 = v28 & 0xffffffffffffff00 | v29;
                    continue;
                }
                else if (*((char *)(v27 + 73)) != 2)
                {
                    v15 = v27.lexeme();
                    v16 = v31;
                    v11 = 9223372036854775857;
                    v3.error(v27, &v11);
                    goto LABEL_655e1f;
                }
            }
            else
            {
                v15 = a1->padding_60[48].lexeme();
                v16 = v31;
                v17 = v27.lexeme();
                v18 = v31;
                v11 = 9223372036854775836;
                v3.error(v27, &v11);
                goto LABEL_655e1f;
            }
            v27 += 208;
            v34 = v30 - 208;
            v26 = v34;
        } while (v30 != 208);
    }
    v35 = a1->field_8;
    v36 = a1->field_10 * 32;
    if ((a1->field_fe & 1))
    {
        for (v0 = a1->field_fe; v36; v35 = &v35[1].field_8)
        {
            v36 -= 32;
            v35->field_8.is_continuation(v35->field_10);
        }
    }
    else
    {
        v37 = &v35->padding_0[v36];
        for (v38 = 0; v35 != v37; v35 = 32 * (v35 != v37) + (char *)v35)
        {
            v12 = v11;
            if (!(v38 & 1))
            {
                v12 = v11;
                if (v35->field_10)
                {
                    v12 = v11;
                    if (v35->field_8->field_0 == 18)
                    {
                        v39 = v35->field_8 + 2;
                        v2 = v39.lexeme();
                        v13 = 0;
                        if (!(char)core::slice::<impl [T]>::starts_with(v2, v31, ::0x5fb200::core::char::methods::encode_utf8_raw(32, &v13), v31))
                        {
                            v11 = 0;
                            v12 = v14;
                            if ((char)core::slice::<impl [T]>::starts_with(v2, v31, ::0x5fb200::core::char::methods::encode_utf8_raw(9, &v12), v31))
                                goto LABEL_655ca1;
                        }
                        else
                        {
LABEL_655ca1:
                            v11 = 9223372036854775843;
                            v3.error(v39, &v11);
                            goto LABEL_655e1f;
                        }
                    }
                }
            }
            v11 = v12;
            v38 = v35->field_8.is_continuation(v35->field_10);
        }
    }
    if (!(v0 & 1))
    {
        v40 = a1->padding_60[120].get(4);
        if (!v40)
            goto LABEL_655da9;
        v41 = &a1->padding_60[48];
        v42 = v41.lexeme();
        v3.clone(v40);
        v21 = "Recipesrc/argument_parser.rs";
        v22 = 6;
        v23 = v42;
        v24 = v31;
        memcpy(&v11, &v3, 16);
        v16 = v4;
        v18 = v5;
        v19 = v6;
        v20 = *((long long *)&v7);
        v3.error(v41, &v11);
LABEL_655e1f:
        *((void*)&v1[4]) = v7;
        *((void*)&v1[3]) = v6;
        *((void*)&v1[2]) = v5;
        *((void*)&v1[1]) = v4;
        *((void*)&v1[0]) = v3;
    }
    else
    {
LABEL_655da9:
        a0->field_48 = 37;
    }
    return core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<&str>>(&v8);
}
