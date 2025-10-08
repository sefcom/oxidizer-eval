long long ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::visit_string_like_part(struct_0 *a0, unsigned long long a1, struct_1 *a2)
{
    unsigned long long v0;  // [bp-0x50]
    struct_1 *v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v5;  // rax
    unsigned int v6;  // eax
    unsigned int v7;  // eax
    unsigned int v8;  // edx
    unsigned long long v9;  // rax
    unsigned int v10[6];  // rax

    v0 = a1;
    v1 = a2;
    v5 = (unsigned long long)v0.flags();
    if (!((char)v5 & 2))
    {
        return v5;
    }
    else if (!a0->field_8)
    {
        if (a1 <= 1)
        {
            v6 = a1.content_range(a2);
            v7 = (unsigned int)v0.flags();
            v9 = a0->field_0.contains_quote(v6, v8, v7);
            if (!(char)v9)
                return v9;
        }
        else
        {
            v2 = a2->field_8;
            v3 = a2->field_10 * 80 + a2->field_8;
            do
            {
                v10 = v2.find_map();
                if (!v10)
                    return v10;
                v9 = a0->field_0.contains_quote(v10[4], v10[5], a2->field_24.from());
            } while (!(char)v9);
        }
        a0->field_8 = 1;
        return v9;
    }
    else
    {
        return v5;
    }
}
