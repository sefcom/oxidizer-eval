long long uu_env::variable_parser::VariableParser::parse_braced_variable_name::h8a99b2b5a6cd2507(struct_1 *a0, struct_0 *a1, unsigned long a2)
{
    char v0;  // [bp-0x78], Other Possible Types: unsigned long long
    char v1;  // [bp-0x74]
    unsigned long long v2;  // [sp-0x70]
    char v3;  // [bp-0x68], Other Possible Types: unsigned long long
    char v4;  // [bp-0x64]
    unsigned long long v5;  // [sp-0x60]
    void* v6;  // [sp-0x58], Other Possible Types: unsigned long
    char v7;  // [bp-0x54]
    unsigned int v8;  // [sp-0x44]
    unsigned long v9;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x38]
    unsigned long long v12;  // r13
    unsigned int v13;  // eax
    unsigned long long v14;  // r14
    unsigned long long v15;  // rdi
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    int v19;  // xmm0
    unsigned long long v20;  // rbp
    unsigned int v21;  // eax
    void* v23;  // r15
    int v24;  // xmm0
    unsigned long v25;  // rdx
    unsigned long long v26;  // r12

    v12 = a1->field_20;
    uu_env::variable_parser::VariableParser::check_variable_name_start::hb52226e508524b8a(&v0, a1);
    if (*((int *)&v0) != 8)
    {
        v18 = v6;
        a0->field_10 = v18;
        v19 = *((int128_t *)&v0);
        a0->field_4 = *((int128_t *)&v3);
        *((void*)&a0->field_0) = v19;
        return v18;
    }
    v13 = uu_env::variable_parser::VariableParser::get_current_char::h48731310c64e6a21(a1);
    if (v13 == 0x110000)
    {
LABEL_4d562f:
        v14 = a1->field_20;
        v15 = &a0->field_4;
        v16 = "Missing closing brace";
        v17 = 21;
    }
    while (true)
    {
        if (v13 <= 127 && v13 - 48 >= 10 && (v13 & 95) - 65 > 25 && v13 != 95)
        {
            if (v13 == 58)
            {
                v20 = a1->field_20;
                while (true)
                {
                    v21 = uu_env::variable_parser::VariableParser::get_current_char::h48731310c64e6a21(a1);
                    if (v21 != 125)
                    {
                        if (v21 == 0x110000)
                        {
                            v14 = a1->field_20;
                            v15 = &a0->field_4;
                            v16 = "Missing closing brace after default value', expected a closing brace ('}') or colon (':')";
                            v17 = 41;
                        }
                        uu_env::variable_parser::VariableParser::skip_one::h9f8204f195a51a8c(&v0, a1);
                        v18 = *((int *)&v0);
                        goto LABEL_4d57be;
                    }
                    else
                    {
                        uu_env::variable_parser::VariableParser::skip_one::h9f8204f195a51a8c(&v0, a1);
                        v18 = *((int *)&v0);
                        if ((unsigned int)v18 == 8)
                        {
                            v0 = v20 + 1;
                            v2 = a1->field_20;
                            v23 = uu_env::string_parser::StringParser::substring::hac18944f4f14e78e(a1, &v0);
LABEL_4d578e:
                            v0 = v12;
                            v2 = v20;
                            v18 = uu_env::string_parser::StringParser::substring::hac18944f4f14e78e(a1, &v0);
                            *((unsigned long long *)&(&a0->field_0)[2]) = v18;
                            *((unsigned long *)&a0->field_4) = v25;
                            *((void* *)((char *)&a0->field_4 + 8)) = v23;
                            a0->field_10 = v26;
                            a0->field_0 = 8;
                            return v18;
                        }
LABEL_4d57be:
                        *((int *)((char *)&a0->field_10 + 4)) = *((int *)&v7);
                        v24 = *((int128_t *)&v1);
                        *((int128_t *)((char *)&a0->field_4 + 4)) = *((int128_t *)&v4);
                        *((void*)&(&a0->field_0)[1]) = v24;
                        a0->field_0 = v18;
                        return v18;
                    }
                }
            }
            else if (v13 != 125)
            {
                v8 = v13;
                v14 = a1->field_20;
                v9 = &v8;
                v10 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                v0 = &g_5495b8;
                v2 = 2;
                v6 = 0;
                v3 = &v9;
                v5 = 1;
                v18 = ::0x4d51d0::core::option::Option$LT$T$GT$::map_or_else::hc0527ddab4d2c9e4(&a0->field_4, &v0);
            }
            else
            {
                v20 = a1->field_20;
                uu_env::variable_parser::VariableParser::skip_one::h9f8204f195a51a8c(&v0, a1);
                v18 = *((int *)&v0);
                if ((unsigned int)v18 == 8)
                {
                    v23 = 0;
                    goto LABEL_4d578e;
                }
            }
        }
        uu_env::variable_parser::VariableParser::skip_one::h9f8204f195a51a8c(&v0, a1);
        if (*((int *)&v0) != 8)
            break;
        v13 = uu_env::variable_parser::VariableParser::get_current_char::h48731310c64e6a21(a1);
        if (v13 == 0x110000)
            goto LABEL_4d562f;
    }
}
