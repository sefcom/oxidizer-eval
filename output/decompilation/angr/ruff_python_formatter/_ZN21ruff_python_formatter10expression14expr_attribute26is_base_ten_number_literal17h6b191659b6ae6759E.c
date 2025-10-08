long long ruff_python_formatter::expression::expr_attribute::is_base_ten_number_literal(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    char v3;  // bl
    unsigned int v4;  // ebx
    unsigned int v5;  // ebx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    char v8[2];  // rax
    char v9;  // cl

    v0 = v2;
    if (a0->field_0 == 21)
    {
        v3 = 1;
        v5 = v4 & 0xffffff00 | 1;
        if (!a0->field_8)
        {
            v6 = a0->field_20.from(a0->field_24);
            v8 = v6.get(v7, a1, a2);
            if (!v8)
                core::str::slice_error_fail(a1, a2, v6, v7, &g_97d828); /* do not return */
            if (v7 > 1 && v8[0] == 48)
            {
                v9 = v8[1] - 66;
                if (v8[1] - 66 <= 54)
                    v5 = ((v9 & 63) ? (unsigned int)(17979209838223358 >> (v9 & 63)) : (unsigned int)(17979209838223358 >> (v9 & 63)));
            }
        }
        else if (!((unsigned int)a0->field_8 == 1))
        {
            goto LABEL_7091a0;
        }
    }
    else
    {
LABEL_7091a0:
        v5 = 0;
    }
    return v5 & 0xffffff00 | v3 & 1;
}
