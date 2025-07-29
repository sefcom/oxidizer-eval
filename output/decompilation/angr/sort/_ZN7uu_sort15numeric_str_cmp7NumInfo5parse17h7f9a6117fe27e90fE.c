long long uu_sort::numeric_str_cmp::NumInfo::parse(struct_0 *a0, unsigned long long a1, void* a2)
{
    unsigned long long v0;  // [bp-0x1b8]
    char v1;  // [bp-0x89]
    void* v2;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    unsigned int v7;  // [bp-0x6c]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    void* v11;  // [bp-0x40]
    void* v13;  // rax, Other Possible Types: unsigned long long
    unsigned int v14;  // edx
    char v15;  // cl
    struct_1 *v16;  // rcx
    unsigned int v17;  // r14d
    unsigned long long v18;  // rbx
    char v19;  // r12b
    unsigned long long v20;  // rcx
    unsigned int v21;  // r13d
    unsigned int v22;  // r13d
    unsigned int v23;  // r13d
    unsigned int v24;  // r13d
    unsigned long long v25;  // rbp
    unsigned long long v27;  // r15
    unsigned long long v29;  // rax
    void* v30;  // r15
    unsigned int v32;  // r13d
    unsigned long long v33;  // rbx
    unsigned long v34;  // rax
    void* v35;  // r15
    char v37;  // bl
    unsigned long v39;  // r13

    v1 = 0;
    v9 = a1;
    v10 = a1 + a2;
    v11 = 0;
    v13 = v9.next();
    if (v14 == 0x110000)
    {
        v15 = 0;
LABEL_545906:
        v2 = 0;
        if (!(v15 & 1))
            a2 = 0;
        v37 = 1;
    }
    else
    {
        v17 = v16->field_0;
        v7 = v16->field_4;
        v18 = v16 & 0xffffffffffffff00 | 1;
        v2 = 18446744073709551615;
        v8 = 0;
        v19 = 1;
        v20 = 0;
        do
        {
            v22 = v21;
            v5 = v20;
            v23 = v22;
            if (v20 == 1)
            {
                while (true)
                {
                    v24 = v23;
                    v25 = v18 & 4294967295;
                    if ((v19 & 1))
                    {
                        v19 = 1;
                        if (v24 - 9 < 5 || v24 == 32)
                            goto LABEL_5459de;
                        if (v24 <= 127)
                        {
                            v18 = 0;
                            if (v24 == 45)
                                goto LABEL_5459e3;
                        }
                        else if (!(!(char)::0x543a20::core::unicode::unicode_data::white_space::lookup(v24)))
                        {
                            goto LABEL_5459de;
                        }
                    }
                    if (v17 == 0x110000 || v17 != v24)
                        break;
LABEL_5459de:
                    v18 = v25 & 4294967295;
LABEL_5459e3:
                    v13 = v9.next();
                    v23 = v14;
                    if (v23 == 0x110000)
                        goto LABEL_545ba5;
                }
                if (!(char)v24.is_invalid_char(&v1, v7))
                {
                    if (!(v7 == 0x110000 || v24 != v7))
                        goto LABEL_5459de;
                    v2 += v1 ^ 1;
                    if (v24 == 48)
                        v6 = a2;
                    else
                        v6 = v13;
                    v27 = v6;
                    if (v24 == 48)
                        v4 = v5;
                    else
                        v4 = 1;
                    v29 = v4;
                    if (v5 != 1)
                        v30 = v27;
                    else
                        v30 = a2;
                    a2 = v30;
                    continue;
                }
                else
                {
                    v33 = v5;
                    goto LABEL_545bd8;
                }
            }
            else
            {
                v25 = v18 & 4294967295;
                v20 = v5;
                v32 = v22;
                while (true)
                {
                    v24 = v32;
                    if (!(v19 & 1))
                        break;
                    v19 = 1;
                    if (v24 - 9 >= 5 && v24 != 32)
                    {
                        if (v24 >= 128)
                        {
                            if (!(!(char)::0x543a20::core::unicode::unicode_data::white_space::lookup(v24)))
                                goto LABEL_545a23;
                            break;
                        }
                        if (!(v24 == 45))
                            break;
                        v25 = 0;
                    }
LABEL_545a23:
                    v13 = v9.next();
                    v32 = v14;
                    if (v32 == 0x110000)
                        goto LABEL_545b7e;
                }
                if (v17 != 0x110000 && v17 == v24)
                {
LABEL_545a20:
                    goto LABEL_545a23;
                }
                v33 = v20;
                if (!(char)v24.is_invalid_char(&v1, v7))
                {
                    if (v7 != 0x110000 && v24 == v7)
                        goto LABEL_545a20;
                    v34 = v1;
                    if (v24 != 48)
                    {
                        v2 += v34 ^ 1;
                        if (v20 != 1)
                            v35 = v13;
                        else
                            v35 = a2;
                        a2 = v35;
                        v29 = 1;
                    }
                    else if (!((char)v34 & 1))
                    {
                        v8 = 1;
                        goto LABEL_545a20;
                    }
                    else
                    {
                        v2 = v2 + ((char)v34 ^ 1) - 1;
                        goto LABEL_545b4c;
                    }
                }
                else
                {
LABEL_545bd8:
                    if (v33 == 1)
                    {
                        if (v16->field_8)
                        {
                            v39 = v24 - 69;
                            if ((unsigned int)v39 <= 38)
                            {
                                v0 = 274881100101;
                                if (((char)(*((char *)&v0 + ((v39 & 63) >> 3)) >> ((char)v39 & 63 & 7)) & 1))
                                    v13 += 1;
                            }
                        }
                        a0->field_0 = v2;
                        a0->field_8 = (char)v25 & 1;
                        v13 = a2;
                    }
                    else
                    {
                        if (!((char)v8 & 1))
                            v13 = 0;
                        a0->field_0 = 0;
                        a0->field_8 = 1;
                    }
                    a0->field_10 = v13;
                    a0->field_18 = v13;
                    return a0;
                }
            }
            v5 = v29;
LABEL_545b4c:
            v13 = v9.next();
            v8 = v13 & 0xffffffffffffff00 | 1;
            v18 = v25 & 4294967295;
            v20 = v5;
            v21 = v14;
        } while (v21 != 0x110000);
LABEL_545b7e:
        v18 = v25 & 4294967295;
        v15 = v8;
        if (!(v20 == 1))
            goto LABEL_545906;
LABEL_545ba5:
        v37 = (char)v18 & 1;
    }
    a0->field_0 = v2;
    a0->field_8 = v37;
    a0->field_10 = a2;
    a0->field_18 = a2;
    return a0;
}
