long long ruff_python_formatter::verbatim::write_suppressed_clause_header(void* a0, unsigned long long a1[2], struct_2 *a2)
{
    unsigned int v0;  // [bp-0x80]
    char v1;  // [bp-0x7c]
    unsigned int v2;  // [bp-0x78]
    unsigned int v3;  // [bp-0x74]
    char *v4;  // [bp-0x70], Other Possible Types: char
    unsigned int v5;  // [bp-0x6c]
    char v6;  // [bp-0x68], Other Possible Types: unsigned long long
    char v7;  // [bp-0x64]
    char *v8;  // [bp-0x60]
    unsigned int v9;  // [bp-0x5c]
    unsigned long long v10;  // [bp-0x58]
    char *v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    int v13;  // [bp-0x40], Other Possible Types: char
    char v14;  // [bp-0x30]
    unsigned int v16[3];  // rax
    unsigned long long v17;  // r15
    unsigned long long v18;  // r12
    unsigned long v19;  // rax
    unsigned int v20;  // ebp
    unsigned int v21;  // edx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax

    v16 = a2->field_8->field_30(a2->field_0);
    v17 = a1[0];
    v18 = a1[1];
    (char)v4.range(v17, v18, *((long long *)&v16[0]), *((long long *)&v16[2]));
    v19 = *((int *)&v4);
    v20 = *((int *)&v6);
    if ((unsigned int)v19 != 4)
    {
        *((unsigned int *)&a0[20]) = v9;
        *((long long *)&a0[12]) = *((long long *)&v7);
        *((unsigned int *)a0) = v19;
        *((unsigned int *)&a0[4]) = v0;
        *((unsigned int *)&a0[8]) = v20;
        return v19;
    }
    v0 = v5;
    v2 = ruff_python_formatter::verbatim::verbatim_text(v0, v20);
    v3 = v21;
    v4 = &v0;
    v6 = &g_97fac8;
    v8 = &v2;
    v10 = &g_97e210;
    v11 = &v1;
    v12 = &g_97fac8;
    v13.write_fmt(a2, &(char)v4, 3);
    if (*((int *)&v13) != 4)
    {
        v23 = *((long long *)&v14);
        *((unsigned long long *)&a0[16]) = v23;
        *(a0) = v13;
        return v23;
    }
    v22 = (unsigned long long)v17.visit(v18, a2->field_8->field_30(a2->field_0) + 16);
    *((unsigned int *)a0) = 4;
    return v22;
}
