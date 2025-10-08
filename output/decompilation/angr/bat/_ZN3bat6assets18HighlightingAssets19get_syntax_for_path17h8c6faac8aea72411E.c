void bat::assets::HighlightingAssets::get_syntax_for_path(void* a0, unsigned long long a1, unsigned long long a2[3], unsigned long long a3)
{
    struct_0 *v0;  // [bp-0xd8]
    char v1;  // [sp-0xd0]
    char v2;  // [bp-0xcf]
    unsigned int v3;  // [bp-0xcc]
    char v4;  // [bp-0xc9]
    int v5;  // [bp-0xc8], Other Possible Types: char
    char v6;  // [bp-0xc1]
    char v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb9], Other Possible Types: unsigned long
    int v9;  // [bp-0xb8]
    int v10;  // [bp-0xa8]
    int v11;  // [bp-0x98]
    unsigned long v12;  // [bp-0x88]
    char v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x68]
    char v15;  // [bp-0x60], Other Possible Types: unsigned long
    unsigned long long v16;  // [bp-0x58]
    char v17;  // [bp-0x50]
    unsigned long long v19;  // r12
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    void* v22;  // rbx
    unsigned long v23;  // rbp
    unsigned long long v24;  // rax
    unsigned long long v25;  // rcx
    void* v26;  // rdx
    char v27;  // al
    unsigned int v28;  // ecx
    void* v29;  // rsi
    int v30;  // xmm0
    unsigned long long v31;  // rax
    unsigned long long v32;  // rcx
    unsigned int v33;  // ecx

    v19 = a2[1].as_ref(a2[2]);
    v15.get_syntax_for(a3, v19, v20);
    if (!v15)
    {
        v27.find_syntax_by_token(a1, v16, *((long long *)&v17));
        v27 = v27;
        if (v27 != 13)
        {
            v33 = *((int *)&v2);
            v29 = a0;
            v0->field_1 = v3;
            *((unsigned int *)&(&v0->field_0)[1]) = v33;
            *((void*)&v0->padding_5[15]) = v9;
            *((void*)((char *)&v0->field_18 + 8)) = v10;
            *((void*)((char *)&v0->field_28 + 8)) = v11;
            *((unsigned long *)((char *)&v0->field_38 + 8)) = v12;
            v30 = (int128_t)v5;
            goto LABEL_78f647;
        }
        v24 = *((long long *)&v5);
        if (*((long long *)&v5))
            goto LABEL_78f499;
        v27.to_vec(v16, *((long long *)&v17));
        memcpy(&v4, &v27, 16);
        v8 = *((long long *)&v7);
        v26 = a0;
        v0->field_0 = 8;
LABEL_78f433:
        v31 = *((long long *)&v6);
        v32 = v8;
        *((int128_t *)&v26[1]) = *((int128_t *)&v27);
        *((unsigned long long *)&v26[16]) = v31;
        *((unsigned long long *)&v26[24]) = v32;
    }
    else if ((unsigned int)v15 == 1)
    {
        v1.from_utf8_lossy(v19, v20);
        v13.from(&v1);
        goto LABEL_78f414;
    }
    else
    {
        v21 = v19.file_name(v20);
        if (!v21)
            v22 = 0;
        if (!v21)
            v21 = 1;
        v23 = a3 + 24;
        v1.get_syntax_for_file_name(a1, v21, v22, v23);
        if (v27 == 13)
        {
            v24 = *((long long *)&v5);
            if (*((long long *)&v5))
            {
                v25 = *((long long *)&v7);
LABEL_78f502:
                *((unsigned long long *)&a0[8]) = v24;
                *((unsigned long long *)&a0[16]) = v25;
                *((char *)a0) = 13;
            }
            else
            {
                if ((unsigned int)v15 == 2)
                {
                    v1.from_utf8_lossy(v19, v20);
                    v13.from(&v1);
                }
                else
                {
                    v1.get_syntax_for_file_extension(a1, v21, v22, v23);
                    if (v27 != 13)
                        goto LABEL_78f60b;
                    v24 = *((long long *)&v5);
                    if (*((long long *)&v5))
                    {
LABEL_78f499:
                        v25 = *((long long *)&v7);
                        goto LABEL_78f502;
                    }
                    else
                    {
                        v1.from_utf8_lossy(v19, v20);
                        v13.from(&v1);
                    }
                }
LABEL_78f414:
                memcpy(&v4, &v13, 16);
                v8 = v14;
                v26 = a0;
                v0->field_0 = 7;
                goto LABEL_78f433;
            }
        }
        else
        {
LABEL_78f60b:
            v28 = *((int *)&v2);
            v29 = a0;
            v0->field_1 = v3;
            *((unsigned int *)&(&v0->field_0)[1]) = v28;
            v30 = (int128_t)v5;
            *((void*)((char *)&v0->field_18 + 8)) = v10;
            *((void*)((char *)&v0->field_28 + 8)) = v11;
            *((unsigned long *)((char *)&v0->field_38 + 8)) = v12;
            *((void*)&v0->padding_5[15]) = v9;
LABEL_78f647:
            *((char *)v29) = v27;
            v29[8] = v30;
        }
    }
    core::ptr::drop_in_place<std::path::PathBuf>(a2);
    return;
}
