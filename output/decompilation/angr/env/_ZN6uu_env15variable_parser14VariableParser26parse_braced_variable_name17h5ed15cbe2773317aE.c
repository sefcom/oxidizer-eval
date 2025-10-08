long long uu_env::variable_parser::VariableParser::parse_braced_variable_name(void* a0, struct_0 *a1)
{
    char v0;  // [bp-0x70], Other Possible Types: unsigned long, unsigned long long, unsigned int
    char v1;  // [bp-0x6c]
    unsigned long long v2;  // [bp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x5c]
    char v5;  // [bp-0x50]
    unsigned int v6;  // [bp-0x4c]
    int v7;  // [bp-0x48], Other Possible Types: char
    char v8;  // [bp-0x38]
    unsigned long long v10;  // r13
    unsigned int v11;  // eax
    unsigned long long v12;  // rbp
    unsigned long v13;  // rax
    void* v14;  // r15
    unsigned long long v15;  // r14
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned int v19;  // eax
    unsigned long long v20;  // rax
    unsigned long long v21;  // r15
    unsigned long long v22;  // rdx
    unsigned long long v24;  // rax
    int v25;  // xmm0
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    int v28;  // xmm0
    unsigned long long v29;  // r12

    v10 = a1->field_20;
    v0.check_variable_name_start(a1);
    if (v0 != 12)
    {
        v27 = *((long long *)&v5);
        *((unsigned long long *)&a0[32]) = v27;
        v28 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = *((int128_t *)&v3);
        *(a0) = v28;
        return v27;
    }
    else if ((int)a1.get_current_char() != 0x110000)
    {
        while (true)
        {
            if (v11 >= 128)
                goto LABEL_471c31;
            if (v11 - 48 < 10)
                goto LABEL_471c31;
            if ((v11 & 95) - 65 <= 25)
                goto LABEL_471c31;
            switch (v11)
            {
            case 95:
LABEL_471c31:
                v0.skip_one(a1);
                if (v0 != 12)
                {
                    v27 = *((long long *)&v5);
                    *((unsigned long long *)&a0[32]) = v27;
                    v28 = *((int128_t *)&v0);
                    *((int128_t *)&a0[16]) = *((int128_t *)&v3);
                    *(a0) = v28;
                    return v27;
                }
                v11 = a1.get_current_char();
                if (v11 == 0x110000)
                {
                    v26 = a1->field_20;
                    *((unsigned int *)a0) = 4;
                    *((unsigned long long *)&a0[8]) = v26;
                    return v26;
                }
                break;
            case 58:
                v12 = a1->field_20;
                while (true)
                {
                    a1.get_current_char();
                    switch (v19)
                    {
                    case 125:
                        v21 = a1->field_20;
                        v0.skip_one(a1);
                        v13 = v0;
                        if ((unsigned int)v13 != 12)
                        {
                            *((unsigned int *)&a0[36]) = v6;
                            v25 = *((int128_t *)&v1);
                            *((int128_t *)&a0[20]) = *((int128_t *)&v4);
                            a0[4] = v25;
                            *((unsigned int *)a0) = v13;
                            return v13;
                        }
                        v0 = v12 + 1;
                        v2 = v21;
                        v14 = a1.substring(&v0);
                        v0 = v10;
                        v2 = v12;
                        v24 = a1.substring(&v0);
                        *((unsigned long long *)&a0[8]) = v24;
                        *((unsigned long long *)&a0[16]) = v22;
                        *((void* *)&a0[24]) = v14;
                        *((unsigned long long *)&a0[32]) = v22;
                        *((unsigned int *)a0) = 12;
                        return v24;
                    case 1114112:
                        v20 = a1->field_20;
                        *((unsigned int *)a0) = 6;
                        *((unsigned long long *)&a0[8]) = v20;
                        return v20;
                    default:
                        v0.skip_one(a1);
                        v13 = v0;
                        if ((unsigned int)v13 != 12)
                        {
                            *((unsigned int *)&a0[36]) = v6;
                            v25 = *((int128_t *)&v1);
                            *((int128_t *)&a0[20]) = *((int128_t *)&v4);
                            a0[4] = v25;
                            *((unsigned int *)a0) = v13;
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
                    *((unsigned int *)&a0[36]) = v6;
                    v25 = *((int128_t *)&v1);
                    *((int128_t *)&a0[20]) = *((int128_t *)&v4);
                    a0[4] = v25;
                    *((unsigned int *)a0) = v13;
                    return v13;
                }
                v0 = v10;
                v2 = v12;
                v24 = a1.substring(&v0);
                *((unsigned long long *)&a0[8]) = v24;
                *((unsigned long long *)&a0[16]) = v22;
                *((unsigned long long *)&a0[24]) = 0;
                *((unsigned long long *)&a0[32]) = v29;
                *((unsigned int *)a0) = 12;
                return v24;
            default:
                v15 = a1->field_20;
                v0 = 0;
                v7.to_vec(::0x46d300::core::char::methods::encode_utf8_raw(v11, &v0), v17);
                *((unsigned int *)a0) = 8;
                *((unsigned long long *)&a0[8]) = v15;
                a0[16] = v7;
                v18 = *((long long *)&v8);
                *((unsigned long long *)&a0[32]) = v18;
                return v18;
            }
        }
    }
    else
    {
        v26 = a1->field_20;
        *((unsigned int *)a0) = 4;
        *((unsigned long long *)&a0[8]) = v26;
        return v26;
    }
}
