long long uu_env::variable_parser::VariableParser::parse_variable::he6234105f7b27747(struct_1 *a0, struct struct_0 **a1, unsigned long a2)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x34]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    struct_0 *v7;  // r14
    unsigned long long v9;  // r14
    unsigned int v10;  // rdx
    unsigned int v11;  // eax
    unsigned int v12;  // rdx
    int v13;  // xmm0
    unsigned long long v14;  // rax
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rdx
    unsigned int v17;  // ecx
    int v18;  // xmm0
    unsigned int v19;  // eax
    unsigned long long v20;  // rsi
    unsigned int v21;  // ecx
    int v22;  // xmm0
    int v23;  // xmm1

    v7 = *(a1);
    uu_env::variable_parser::VariableParser::skip_one::h9f8204f195a51a8c(&v0, v7);
    if (*((int *)&v0) != 8)
    {
        *((long long *)&a0[1].field_0) = *((long long *)&v5);
        v13 = *((int128_t *)&v0);
        *((int128_t *)&a0->field_10) = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v13;
        return a0;
    }
    switch ((int)uu_env::variable_parser::VariableParser::get_current_char::h48731310c64e6a21(v7))
    {
    case 123:
        uu_env::variable_parser::VariableParser::skip_one::h9f8204f195a51a8c(&v0, v7);
        if (*((int *)&v0) != 8)
        {
            *((long long *)&a0[1].field_0) = *((long long *)&v5);
            vvar_148{reg 224} = *((int128_t *)&v0);
            *((int128_t *)&a0->field_10) = *((int128_t *)&v3);
            *((void*)&a0->field_0) = v13;
            return a0;
        }
        uu_env::variable_parser::VariableParser::parse_braced_variable_name::h8a99b2b5a6cd2507(&v0, v7, v12);
        v19 = *((int *)&v0);
        if (v19 != 8)
        {
            v21 = *((int *)&v1);
            v22 = *((int128_t *)&v2);
            v23 = *((int128_t *)&v4);
            a0->field_0 = v19;
            *((unsigned int *)&a0->padding_4[0]) = v21;
            *((void*)&a0->field_8) = v22;
            *((void*)&a0->field_18) = v23;
            return a0;
        }
        v14 = *((long long *)&v2);
        v15 = *((long long *)&v3);
        v16 = *((long long *)&v4);
        v20 = *((long long *)&v5);
        break;
    case 1114112:
        v9 = v7->field_20;
        ::0x4d5200::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h58b87609619f8c5b(&a0->field_10, "missing variable name", 21);
        a0->field_0 = 4;
        a0->field_8 = v9;
        return a0;
    default:
        uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::h1fe1aecd253a2011(&v0, v7, v10);
        v11 = *((int *)&v0);
        if (v11 != 8)
        {
            v17 = *((int *)&v1);
            v18 = *((int128_t *)&v2);
            *((int128_t *)&a0->field_18) = *((int128_t *)&v4);
            a0->field_0 = v11;
            *((unsigned int *)&a0->padding_4[0]) = v17;
            *((void*)&a0->field_8) = v18;
            return a0;
        }
        v14 = *((long long *)&v2);
        v15 = *((long long *)&v3);
        v16 = 0;
        break;
    }
    a0->field_8 = v14;
    a0->field_10 = v15;
    a0->field_18 = v16;
    *((unsigned long long *)&a0[1].field_0) = v20;
    a0->field_0 = 8;
    return a0;
}
