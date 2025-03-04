long long uu_env::variable_parser::VariableParser::parse_variable::h1713cd6810b8ef74(struct_0 *a0, struct struct_1 **a1)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x34]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    struct_1 *v7;  // r14
    unsigned long long v9;  // r14
    unsigned int v10;  // eax
    int v11;  // xmm0
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rdx
    unsigned int v15;  // ecx
    int v16;  // xmm0
    unsigned int v17;  // eax
    unsigned long long v18;  // rsi
    unsigned int v19;  // ecx
    int v20;  // xmm0
    int v21;  // xmm1

    v7 = *(a1);
    uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&v0, v7);
    if (*((int *)&v0) != 8)
    {
        *((long long *)&a0[1].field_0) = *((long long *)&v5);
        v11 = *((int128_t *)&v0);
        *((int128_t *)&a0->field_10) = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v11;
        return a0;
    }
    switch ((int)uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(v7))
    {
    case 123:
        uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&v0, v7);
        if (*((int *)&v0) != 8)
        {
            *((long long *)&a0[1].field_0) = *((long long *)&v5);
            vvar_144{reg 224} = *((int128_t *)&v0);
            *((int128_t *)&a0->field_10) = *((int128_t *)&v3);
            *((void*)&a0->field_0) = v11;
            return a0;
        }
        uu_env::variable_parser::VariableParser::parse_braced_variable_name::h06c067d5ba361416(&v0, v7);
        v17 = *((int *)&v0);
        if (v17 != 8)
        {
            v19 = *((int *)&v1);
            v20 = *((int128_t *)&v2);
            v21 = *((int128_t *)&v4);
            a0->field_0 = v17;
            *((unsigned int *)&a0->padding_4[0]) = v19;
            *((void*)&a0->field_8) = v20;
            *((void*)&a0->field_18) = v21;
            return a0;
        }
        v12 = *((long long *)&v2);
        v13 = *((long long *)&v3);
        v14 = *((long long *)&v4);
        v18 = *((long long *)&v5);
        break;
    case 1114112:
        v9 = v7->field_20;
        ::0x4d4ed0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&a0->field_10, "missing variable name", 21);
        a0->field_0 = 4;
        a0->field_8 = v9;
        return a0;
    default:
        uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::hb6cd479313718b9d(&v0, v7);
        v10 = *((int *)&v0);
        if (v10 != 8)
        {
            v15 = *((int *)&v1);
            v16 = *((int128_t *)&v2);
            *((int128_t *)&a0->field_18) = *((int128_t *)&v4);
            a0->field_0 = v10;
            *((unsigned int *)&a0->padding_4[0]) = v15;
            *((void*)&a0->field_8) = v16;
            return a0;
        }
        v12 = *((long long *)&v2);
        v13 = *((long long *)&v3);
        v14 = 0;
        break;
    }
    a0->field_8 = v12;
    a0->field_10 = v13;
    a0->field_18 = v14;
    *((unsigned long long *)&a0[1].field_0) = v18;
    a0->field_0 = 8;
    return a0;
}
