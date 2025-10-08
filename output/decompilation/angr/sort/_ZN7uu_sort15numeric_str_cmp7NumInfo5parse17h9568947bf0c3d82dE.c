long long uu_sort::numeric_str_cmp::NumInfo::parse(struct_0 *a0, unsigned long long a1, void* a2)
{
    unsigned long long v0;  // [bp-0x1a8]
    char v1;  // [bp-0x85]
    unsigned int v2;  // [bp-0x84]
    unsigned long long v3;  // [bp-0x70]
    void* v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    void* v7;  // [bp-0x40]
    struct_0 *v9;  // rbx
    void* v10;  // rax
    unsigned int v11;  // edx
    struct_1 *v12;  // rcx
    unsigned int v13;  // ebp
    unsigned long long v14;  // r14
    char v15;  // r12b
    unsigned int v16;  // r13d
    unsigned int v17;  // r13d
    unsigned int v18;  // r13d
    unsigned int v19;  // r13d
    unsigned int v20;  // r13d
    unsigned int v21;  // r13d
    unsigned long long v22;  // rbx
    char v23;  // al
    unsigned int v24;  // r13d
    struct_0 *v25;  // rax
    unsigned long v26;  // r15
    char v28;  // cl
    void* v29;  // rax, Other Possible Types: unsigned long long
    char v30;  // r14b
    unsigned long v31;  // r13
    void* v32;  // r12, Other Possible Types: unsigned long long

    v9 = a0;
    v1 = 0;
    v5 = a1;
    v6 = a1 + a2;
    v7 = 0;
    v10 = v5.next();
    if (v11 == 0x110000)
    {
        v3 = 0;
LABEL_4cf27f:
        v29 = 0;
        if (!((char)v3 & 1))
            a2 = 0;
        v30 = 1;
        v4 = a2;
    }
    else
    {
        v2 = v12->field_0;
        v13 = v12->field_4;
        v14 = v12 & 0xffffffffffffff00 | 1;
        v29 = 18446744073709551615;
        v3 = 0;
        v15 = 1;
        v32 = 0;
        do
        {
            v17 = v16;
            v18 = v17;
            if (v32)
            {
                v19 = v17;
                v20 = v17;
                if (v2 != 0x110000)
                {
                    do
                    {
                        v21 = v20;
                        v22 = v14 & 4294967295;
                        if ((v15 & 1))
                        {
                            v15 = 1;
                            if (v21 - 9 < 5 || v21 == 32)
                                goto LABEL_4cf383;
                            if (v21 <= 127)
                            {
                                v14 = 0;
                                if (v21 == 45)
                                    goto LABEL_4cf389;
                            }
                            else if (!(!(char)::0x4b4d80::core::unicode::unicode_data::white_space::lookup(v21)))
                            {
                                goto LABEL_4cf383;
                            }
                        }
                        if (v2 != v21)
                        {
                            if ((char)v21.is_invalid_char(&v1, v13))
                                goto LABEL_4cf5c2;
                            goto LABEL_4cf50c;
                        }
LABEL_4cf383:
                        v14 = v22 & 4294967295;
LABEL_4cf389:
                        v10 = v5.next();
                        v20 = v11;
                    } while (v20 != 0x110000);
                }
                else
                {
                    do
                    {
                        v21 = v19;
                        v22 = v14 & 4294967295;
                        if ((v15 & 1))
                        {
                            v15 = 1;
                            if (v21 - 9 < 5 || v21 == 32)
                                goto LABEL_4cf41c;
                            if (v21 <= 127)
                            {
                                v14 = 0;
                                if (v21 == 45)
                                    goto LABEL_4cf422;
                            }
                            else if (!(!(char)::0x4b4d80::core::unicode::unicode_data::white_space::lookup(v21)))
                            {
                                goto LABEL_4cf41c;
                            }
                        }
                        if ((char)v21.is_invalid_char(&v1, v13))
                        {
LABEL_4cf5c2:
                            v10 = v4;
                            if (v12->field_8)
                            {
                                v31 = v21 - 69;
                                if ((unsigned int)v31 <= 38)
                                {
                                    v0 = 274881100101;
                                    if ((*((char *)&v0 + ((v31 & 63) >> 3)) >> ((char)v31 & 63 & 7) & 1))
                                        v10 += 1;
                                }
                            }
                            v25 = v9;
                            v25->field_0 = v29;
                            v25->field_8 = (char)v22 & 1;
                            v9 = v25;
                            goto LABEL_0x4cf620;
                        }
                        if (v13 == 0x110000 || v21 != v13)
                        {
LABEL_4cf50c:
                            v23 = v21 == 48;
                            v14 = v22 & 4294967295;
                            continue;
                        }
LABEL_4cf41c:
                        v14 = v22 & 4294967295;
LABEL_4cf422:
                        v10 = v5.next();
                        v19 = v11;
                    } while (v19 != 0x110000);
                }
                break;
            }
            else
            {
                while (true)
                {
                    v24 = v18;
                    if (!(v15 & 1))
                        break;
                    v15 = 1;
                    if (v24 - 9 >= 5 && v24 != 32)
                    {
                        if (v24 >= 128)
                        {
                            if ((char)::0x4b4d80::core::unicode::unicode_data::white_space::lookup(v24))
                                goto LABEL_4cf453;
                            break;
                        }
                        if (v24 != 45)
                            break;
                        v14 = 0;
                    }
LABEL_4cf453:
                    v10 = v5.next();
                    v18 = v11;
                    if (v18 == 0x110000)
                        goto LABEL_4cf27f;
                }
                if (v2 != 0x110000 && v2 == v24)
                {
LABEL_4cf450:
                    goto LABEL_4cf453;
                }
                v25 = v24.is_invalid_char(&v1, v13);
                if (!(char)v25)
                {
                    if (v13 != 0x110000 && v24 == v13)
                        goto LABEL_4cf450;
                    if (v24 == 48)
                    {
                        v3 = v25 & 0xffffffffffffff00 | 1;
                        goto LABEL_4cf450;
                    }
                }
                else
                {
                    if (!((char)v3 & 1))
                        v10 = 0;
                    v9->field_0 = 0;
                    v9->field_8 = 1;
                    v9->field_10 = v10;
                    v9->field_18 = v10;
                    return v25;
                }
            }
            v29 += 1;
            if (!v32 && !v23)
                v26 = v10;
            else
                v26 = v4;
            v4 = v26;
            if (!v32 && !v23)
                v32 = 1;
            v10 = v5.next();
            v3 = v10 & 0xffffffffffffff00 | 1;
            v16 = v11;
        } while (v16 != 0x110000);
        if (!(v28 & 1))
            goto LABEL_4cf27f;
        v30 = (char)v14 & 1;
    }
    v9->field_0 = v29;
    v9->field_8 = v30;
    v9->field_10 = v4;
    v9->field_18 = a2;
    return v29;
}
