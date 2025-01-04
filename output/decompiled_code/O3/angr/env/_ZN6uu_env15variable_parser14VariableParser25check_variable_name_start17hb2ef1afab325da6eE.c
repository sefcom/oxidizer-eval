long long uu_env::variable_parser::VariableParser::check_variable_name_start::hb2ef1afab325da6e(struct_2 *a0, struct_0 *a1)
{
    unsigned int v0;  // [sp-0x54]
    char *v1;  // [sp-0x50]
    unsigned long long v2;  // [sp-0x48]
    unsigned long v3;  // [sp-0x40], Other Possible Types: unsigned long long
    unsigned long long v4;  // [sp-0x38]
    struct struct_1 **v5;  // [sp-0x30]
    unsigned long long v6;  // [sp-0x28]
    void* v7;  // [sp-0x20]
    unsigned long long v9;  // rax
    unsigned long long v10;  // r14

    v9 = uu_env::variable_parser::VariableParser::get_current_char::h68b63febfc4461a0(a1);
    if ((unsigned int)v9 != 0x110000)
    {
        v0 = v9;
        v9 = (unsigned int)v9 - 48;
        if ((unsigned int)v9 < 10)
        {
            v10 = a1->field_20;
            v1 = &v0;
            v2 = _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
            v3 = &g_548e28;
            v4 = 2;
            v7 = 0;
            v5 = &v1;
            v6 = 1;
            v9 = ::0x4d4ea0::core::option::Option$LT$T$GT$::map_or_else::ha7b9eb55e1cbc84d(a0 + 1, &v3);
            a0->field_0 = 4;
            a0->field_8 = v10;
            return v9;
        }
    }
    a0->field_0 = 8;
    return v9;
}
