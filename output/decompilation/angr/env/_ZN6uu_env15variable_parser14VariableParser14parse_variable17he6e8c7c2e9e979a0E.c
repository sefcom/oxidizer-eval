long long uu_env::variable_parser::VariableParser::parse_variable(struct_1 *a0, struct_0 **a1)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x34]
    char v2;  // [bp-0x30], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    struct_0 *v7;  // r14
    unsigned long long v9;  // rax
    void* v10;  // rdx
    int v11;  // xmm0
    unsigned long long v12;  // rsi
    int v13;  // xmm0
    int v14;  // xmm1
    int v15;  // xmm0

    v7 = *(a1);
    v0.skip_one(v7);
    if (v0 != 12)
    {
        a0->field_18[1] = *((long long *)&v5);
        v15 = *((int128_t *)&v0);
        *((int128_t *)&a0->field_10) = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v15;
        return a0;
    }
    switch ((int)v7.get_current_char())
    {
    case 123:
        v0.skip_one(v7);
        if (v0 != 12)
        {
            a0->field_18[1] = *((long long *)&v5);
            v15 = *((int128_t *)&v0);
            *((int128_t *)&a0->field_10) = *((int128_t *)&v3);
            *((void*)&a0->field_0) = v15;
            return a0;
        }
        v0.parse_braced_variable_name(v7);
        if (v0 != 12)
        {
            v13 = *((int128_t *)&v2);
            v14 = *((int128_t *)&v4);
            *((unsigned int *)&a0->field_0) = v0;
            *((unsigned int *)&a0->padding_1[3]) = v1;
            *((void*)&a0->field_8) = v13;
            *((void*)&a0->field_18[0]) = v14;
            return a0;
        }
        v12 = *((long long *)&v5);
        break;
    case 1114112:
        v9 = v7->field_20;
        *((unsigned int *)&a0->field_0) = 5;
        *((unsigned long long *)&a0->field_8) = v9;
        return a0;
    default:
        v0.parse_unbraced_variable_name(v7);
        if (v0 != 12)
        {
            v11 = *((int128_t *)&v2);
            *((int128_t *)&a0->field_18[0]) = *((int128_t *)&v4);
            *((unsigned int *)&a0->field_0) = v0;
            *((unsigned int *)&a0->padding_1[3]) = v1;
            *((void*)&a0->field_8) = v11;
            return a0;
        }
        v10 = 0;
        break;
    }
    *((unsigned long long *)&a0->field_8) = v2;
    *((unsigned long long *)&a0->field_10) = v3;
    a0->field_18[0] = v10;
    a0->field_18[1] = v12;
    *((unsigned int *)&a0->field_0) = 12;
    return a0;
}
