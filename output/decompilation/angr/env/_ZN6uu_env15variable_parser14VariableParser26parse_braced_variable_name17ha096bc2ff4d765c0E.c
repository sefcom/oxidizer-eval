long long uu_env::variable_parser::VariableParser::parse_braced_variable_name(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned int, unsigned long
    char v1;  // [bp-0x6c]
    unsigned long v2;  // [bp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x5c]
    char v5;  // [bp-0x50]
    unsigned int v6;  // [bp-0x4c]
    int v7;  // [bp-0x48], Other Possible Types: char
    char v8;  // [bp-0x38]
    unsigned long v10;  // r13
    unsigned int v11;  // eax
    unsigned long v12;  // rbp
    unsigned long v13;  // rax
    void* v14;  // r15
    unsigned long v15;  // r14
    unsigned long long v17;  // rax
    unsigned int v18;  // eax
    unsigned long v19;  // rax
    unsigned long v20;  // r15
    unsigned long v21;  // rdx
    unsigned long long v23;  // rax
    int v24;  // xmm0
    unsigned long v25;  // rax
    unsigned long long v26;  // rax
    int v27;  // xmm0
    unsigned long v28;  // r12

    v10 = a1->field_20;
    v0.check_variable_name_start(a1);
    if (v0 != 12)
    {
        v26 = *((long long *)&v5);
        *((unsigned long long *)&a0->padding_1c) = v26;
        v27 = *((int128_t *)&v0);
        *((int128_t *)&a0->field_10) = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v27;
        return v26;
    }
    else if ((int)a1.get_current_char() != 0x110000)
    {
        while (true)
        {
            if (!(v11 <= 127))
                goto LABEL_4bf8cf;
            if (v11 - 48 < 10)
                goto LABEL_4bf8cf;
            if ((v11 & 95) - 65 <= 25)
                goto LABEL_4bf8cf;
            switch (v11)
            {
            case 95:
LABEL_4bf8cf:
                v0.skip_one(a1);
                if (v0 != 12)
                {
                    v26 = *((long long *)&v5);
                    *((unsigned long long *)&a0->padding_1c) = v26;
                    v27 = *((int128_t *)&v0);
                    *((int128_t *)&a0->field_10) = *((int128_t *)&v3);
                    *((void*)&a0->field_0) = v27;
                    return v26;
                }
                v11 = a1.get_current_char();
                if (v11 == 0x110000)
                {
                    v25 = a1->field_20;
                    *((unsigned int *)&a0->field_0) = 4;
                    *((unsigned long *)&a0->padding_5[3]) = v25;
                    return v25;
                }
                break;
            case 58:
                v12 = a1->field_20;
                while (true)
                {
                    a1.get_current_char();
                    switch (v18)
                    {
                    case 125:
                        v20 = a1->field_20;
                        v0.skip_one(a1);
                        v13 = v0;
                        if ((unsigned int)v13 != 12)
                        {
                            a0->field_20[0] = v6;
                            v24 = *((int128_t *)&v1);
                            *((int128_t *)&(&a0->padding_11)[1]) = *((int128_t *)&v4);
                            *((void*)&a0->field_4) = v24;
                            *((unsigned int *)&a0->field_0) = v13;
                            return v13;
                        }
                        v0 = v12 + 1;
                        v2 = v20;
                        v14 = a1.substring(&v0);
                        v0 = v10;
                        v2 = v12;
                        v23 = a1.substring(&v0);
                        *((unsigned long long *)&a0->padding_5[3]) = v23;
                        *((unsigned long *)&a0->field_10) = v21;
                        a0->field_14 = v14;
                        *((unsigned long *)&a0->padding_1c) = v21;
                        *((unsigned int *)&a0->field_0) = 12;
                        return v23;
                    case 1114112:
                        v19 = a1->field_20;
                        *((unsigned int *)&a0->field_0) = 6;
                        *((unsigned long *)&a0->padding_5[3]) = v19;
                        return v19;
                    default:
                        v0.skip_one(a1);
                        v13 = v0;
                        if ((unsigned int)v13 != 12)
                        {
                            a0->field_20[0] = v6;
                            v24 = *((int128_t *)&v1);
                            *((int128_t *)&(&a0->padding_11)[1]) = *((int128_t *)&v4);
                            *((void*)&a0->field_4) = v24;
                            *((unsigned int *)&a0->field_0) = v13;
                            return v13;
                        }
                        break;
                    }
                }
            case 125:
                v12 = a1->field_20;
                v0.skip_one(a1);
                v13 = v0;
                if ((unsigned int)v13 != 12)
                {
                    a0->field_20[0] = v6;
                    v24 = *((int128_t *)&v1);
                    *((int128_t *)&(&a0->padding_11)[1]) = *((int128_t *)&v4);
                    *((void*)&a0->field_4) = v24;
                    *((unsigned int *)&a0->field_0) = v13;
                    return v13;
                }
                v0 = v10;
                v2 = v12;
                v23 = a1.substring(&v0);
                *((unsigned long long *)&a0->padding_5[3]) = v23;
                *((unsigned long *)&a0->field_10) = v21;
                a0->field_14 = 0;
                *((unsigned long *)&a0->padding_1c) = v28;
                *((unsigned int *)&a0->field_0) = 12;
                return v23;
            default:
                v15 = a1->field_20;
                v0 = 0;
                v7.to_vec(::0x4bf650::core::char::methods::encode_utf8_raw(v11, &v0), 1);
                *((unsigned int *)&a0->field_0) = 8;
                *((unsigned long *)&a0->padding_5[3]) = v15;
                *((void*)&a0->field_10) = v7;
                v17 = *((long long *)&v8);
                *((unsigned long long *)&a0->padding_1c) = v17;
                return v17;
            }
        }
    }
    else
    {
        v25 = a1->field_20;
        *((unsigned int *)&a0->field_0) = 4;
        *((unsigned long *)&a0->padding_5[3]) = v25;
        return v25;
    }
}
