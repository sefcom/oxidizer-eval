long long uu_cut::cut_fields(unsigned int a0, unsigned long long a1[2], unsigned long long a2, unsigned long a3, struct_0 *a4)
{
    char v0;  // [bp-0x49]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    char v4;  // bl
    unsigned long v5;  // r13
    char *v6;  // rdi
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax
    char *v10;  // rax

    v4 = a4->field_20;
    if (v4 == 2)
        core::option::unwrap_failed(&g_58bd78); /* do not return */
    v5 = a4->field_28;
    v6 = a4->field_10;
    if (v6)
    {
        if (a4->field_18 == 1 && *(v6) == (char)v5)
        {
            v7 = 1;
            if (a4->field_0)
            {
                v7 = a4->field_8;
                v6 = a4->field_0;
            }
            return uu_cut::cut_fields_newline_char_delim(a0, a1[0], a1[1], a2, a3, v5, v6, v7);
        }
        v1 = v6.new(a4->field_18);
        v2 = v8;
        if (a4->field_0)
        {
            v9 = uu_cut::cut_fields_explicit_out_delim(a0, a1, &v1, a2, a3, v4 & 1, (unsigned int)v5 & 255, (unsigned int)a4->field_0);
LABEL_4add64:
        }
        else
        {
            v9 = uu_cut::cut_fields_implicit_out_delim(a0, a1, &v1, a2, a3, v4 & 1, (unsigned int)v5 & 255);
        }
        return v9;
    }
    v10 = a4->field_0;
    v9 = uu_cut::cut_fields_explicit_out_delim(a0, a1, &v0, a2, a3, v4 & 1, (unsigned int)v5 & 255, (v10 ? (unsigned int)v10 : &g_416944));
    goto LABEL_4add64;
}
