long long ruff_python_formatter::expression::expr_slice::leading_comments_spacing(void* a0, struct_2 *a1, struct_3 *a2, unsigned long a3)
{
    char v0;  // [bp-0x41]
    char *v1;  // [bp-0x40], Other Possible Types: unsigned short
    unsigned long long v2;  // [bp-0x38]
    char *v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    int v5;  // [bp-0x20], Other Possible Types: char
    char v6;  // [bp-0x10]
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax

    if (a3)
    {
        if (a2->field_9)
        {
            v1 = 513;
            v8 = a1->field_8->field_18(a1->field_0, &v1);
            *((unsigned int *)a0) = 4;
            return v8;
        }
        v1 = &v0;
        v2 = &g_97cbf0;
        v3 = &v0;
        v4 = &g_97cbf0;
        v9 = v5.write_fmt(a1, &v1, 2);
        if (*((int *)&v5) != 4)
        {
            v10 = *((long long *)&v6);
            *((unsigned long long *)&a0[16]) = v10;
            *(a0) = v5;
            return v10;
        }
    }
    *((unsigned int *)a0) = 4;
    return v9;
}
