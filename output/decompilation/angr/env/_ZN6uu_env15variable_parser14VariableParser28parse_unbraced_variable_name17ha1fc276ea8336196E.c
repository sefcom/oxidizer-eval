long long uu_env::variable_parser::VariableParser::parse_unbraced_variable_name(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x40]
    int v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    unsigned long v5;  // r12
    unsigned int v6;  // eax
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx
    unsigned long long v9;  // rax
    int v10;  // xmm0

    v5 = a1->field_20;
    v0.check_variable_name_start(a1);
    if (*((int *)&v0) != 12)
    {
        v9 = *((long long *)&v3);
        a0->field_20 = v9;
        v10 = *((int128_t *)&v0);
        *((void*)&a0->field_10) = v2;
        *((void*)&a0->field_0) = v10;
        return v9;
    }
    if ((int)a1.get_current_char() != 0x110000)
    {
        while (v6 == 95 || v6 - 48 < 10 || (v6 & 2097119) - 65 <= 25)
        {
            v0.skip_one(a1);
            if (*((int *)&v0) != 12)
            {
                v9 = *((long long *)&v3);
                a0->field_20 = v9;
                v10 = *((int128_t *)&v0);
                *((void*)&a0->field_10) = v2;
                *((void*)&a0->field_0) = v10;
                return v9;
            }
            if ((int)a1.get_current_char() == 0x110000)
                break;
        }
    }
    if (a1->field_20 != v5)
    {
        v0 = v5;
        v1 = a1->field_20;
        v7 = a1.substring(&v0);
        *((unsigned long long *)&a0->padding_1[7]) = v7;
        *((unsigned long *)&a0->field_10) = v8;
        *((unsigned int *)&a0->field_0) = 12;
        return v7;
    }
    *((unsigned int *)&a0->field_0) = 5;
    *((unsigned long *)&a0->padding_1[7]) = v5;
    return v1;
}
