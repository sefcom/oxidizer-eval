long long ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line(unsigned long long a0[7], unsigned long long a1[4], unsigned long long a2, struct_1 *a3)
{
    unsigned long long v1;  // 4115
    struct_0 **v2;  // rbx
    void* v3;  // rbp
    unsigned long long v4;  // 4096
    unsigned long long v5;  // rdx
    char v6;  // r13b
    struct_2 *v7;  // rax
    char v8;  // al

    v1 = a0[0];
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
    {
        v2 = a3->field_30;
        v3 = (!(char)ruff_python_formatter::statement::suite::contains_only_an_ellipsis(a0[5], a0[6], *((long long *)(a3->field_30(a2) + 16))) ? 0 : (a1[0] == 0x8000000000000000 ? (unsigned int)ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line::{{closure}}(a2, a3, &a1[1]) : 0));
        v4 = a2;
    }
    else
    {
        v2 = a3->field_30;
        v3 = 0;
        v4 = a2;
    }
    v5 = v4;
    if (*((char *)(v2(v5) + 58)))
    {
        if (a0[0] > 9223372036854775831)
            goto LABEL_721cb5;
    }
    else
    {
        if (a0[0] > 9223372036854775831)
        {
            if (a1[0] == 0x8000000000000000)
                v6 = a1[3];
LABEL_721cb5:
            v7 = v2(a2);
            if (!(char)ruff_python_formatter::statement::suite::contains_only_an_ellipsis(a0[4], a0[5], v7->field_10))
                goto LABEL_721cad;
            v8 = 9223372036854775831 < a1[0];
        }
        else
        {
LABEL_721cad:
        }
    }
    return (unsigned int)v3 & 0xffffff00 | (char)v3 | v6 | v8;
}
