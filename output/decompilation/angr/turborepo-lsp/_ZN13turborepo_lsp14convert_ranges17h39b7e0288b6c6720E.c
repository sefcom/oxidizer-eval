long long turborepo_lsp::convert_ranges(unsigned int a0[4], struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r13
    unsigned long long v4;  // rbp
    unsigned int v5;  // eax
    unsigned int v6;  // eax

    v0 = v2;
    v3 = a1->field_0;
    v4 = v3.line_of_byte(a2, &g_d2f668);
    v0 = v3.line_of_byte(a3, &g_d2f680);
    v5 = v3.byte_of_line(a1->field_8, v4, &g_d2f698);
    v6 = v3.byte_of_line(a1->field_8, v0, &g_d2f6b0);
    a0[0] = v4;
    a0[1] = a2 - v5;
    a0[2] = v0;
    a0[3] = a3 - v6;
    return a0;
}
