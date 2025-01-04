long long uu_env::variable_parser::VariableParser::parse_unbraced_variable_name::hb6cd479313718b9d(struct_0 *a0, struct_1 *a1, unsigned long a2)
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x28]
    unsigned long long v5;  // r12
    unsigned int v6;  // eax
    unsigned long long v8;  // rax
    int v9;  // xmm0
    unsigned long v10;  // rdx

    v5 = a1->field_20;
    uu_env::variable_parser::VariableParser::check_variable_name_start::hb2ef1afab325da6e(&v0, a1);
    if (*((int *)&v0) != 8)
    {
        v8 = *((long long *)&v3);
        a0->field_20 = v8;
        v9 = *((int128_t *)&v0);
        *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
        *((void*)&a0->field_0) = v9;
        return v8;
    }
    v6 = uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(a1);
    if (v6 != 0x110000)
    {
        while (v6 == 95 || v6 - 48 < 10 || (v6 & 2097119) - 65 <= 25)
        {
            uu_env::variable_parser::VariableParser::skip_one::h6221cbf058689bac(&v0, a1);
            if (*((int *)&v0) != 8)
            {
                a0->field_20 = *((long long *)&v3);
                vvar_161{reg 224} = *((int128_t *)&v0);
                *((int128_t *)&a0->field_10) = *((int128_t *)&v2);
                *((void*)&a0->field_0) = v9;
                return v8;
            }
            v6 = uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(a1);
            if (v6 == 0x110000)
                break;
        }
    }
    if (v1 == v5)
    {
        v8 = ::0x4d4ed0::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&a0->field_10, "Missing variable name", 21);
        a0->field_0 = 4;
        *((unsigned long long *)&a0->padding_4[4]) = v5;
        return v8;
    }
    v0 = v5;
    v1 = a1->field_20;
    v8 = uu_env::string_parser::StringParser::substring::h93033379edd1d12f(a1, &v0);
    *((unsigned long long *)&a0->padding_4[4]) = v8;
    a0->field_10 = v10;
    a0->field_0 = 8;
    return v8;
}
