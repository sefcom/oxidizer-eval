long long ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style(char a0[61], unsigned int a1, unsigned long long a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long v2;  // rbp
    unsigned long v3;  // cc_dep1
    unsigned long v4;  // cc_ndep
    char v5;  // r12b
    unsigned int v6;  // r14d
    unsigned int v8;  // r14d
    struct_0 *v9;  // r15
    char v10;  // al

    v2 = a1;
    v0 = a2;
    if ((char)v2 != 3)
    {
        v3 = a0[44];
        if (a0[44] == 3)
            goto LABEL_727c6c;
LABEL_727c56:
        v5 = _ccall(3, 5, v3, 3, v4);
        if (a0[42] != 2)
            goto LABEL_727c7a;
    }
    else
    {
        v2 = a0[53];
        v3 = a0[44];
        if (a0[44] != 3)
            goto LABEL_727c56;
LABEL_727c6c:
        v5 = 12 <= a0[45];
        if (a0[42] != 2)
        {
LABEL_727c7a:
            if (!(a0[43] & 2) || ((char)v0.flags() & 2))
                return v6 & 0xffffff00 | 2;
        }
    }
    v8 = v6 & 0xffffff00 | 2;
    if ((char)v2 == 2)
        return v8;
    if (v0 != 3)
    {
        if ((unsigned int)v0 != 2)
            goto LABEL_727d09;
        v9 = a3;
        if (!v5)
        {
            if (ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression(v9, a0))
            {
                return v8;
            }
            else if ((char)ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes(v9->field_8, v9->field_10, a0))
            {
                return v8;
            }
        }
        v10 = v9->field_24.from();
    }
    else
    {
        v9 = a3;
        v10 = v9->field_24.from();
    }
    if (ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug(v9->field_8, v9->field_10, v10, a0))
        return v8;
LABEL_727d09:
    if (!((char)v0.flags() & 2))
        return v2 & 4294967295;
    return (a0[60] != 2 ? a0[60] ^ 1 : 1);
}
