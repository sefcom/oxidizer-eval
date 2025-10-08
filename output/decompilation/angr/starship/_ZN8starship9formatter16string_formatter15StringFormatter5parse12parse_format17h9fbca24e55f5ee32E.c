long long starship::formatter::string_formatter::StringFormatter::parse::parse_format(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0xb0]
    char v1;  // [bp-0xa8]
    int v2;  // [bp-0xa0]
    unsigned long v3;  // [bp-0x90]
    char v4;  // [bp-0x88]
    void* v5;  // [bp-0x68], Other Possible Types: unsigned long long
    char *v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    void* v9;  // [bp-0x48]
    unsigned long long v11;  // rax

    v0 = a5;
    v4.into_iter(a1);
    v5 = a2;
    v6 = &v0;
    v7 = a3;
    v8 = a4;
    v1.collect(&v4);
    if (*((int *)&v1) == 1)
    {
        *((unsigned long *)((char *)&a0->field_8 + 8)) = v3;
        *((void*)&(&a0->field_0)[1]) = v2;
        v11 = 1;
    }
    else
    {
        v4.into_iter(&(char)v2);
        v5 = 0;
        v9 = 0;
        (&a0->field_0)[1].collect(&v4);
        v11 = 0;
    }
    a0->field_0 = v11;
    return v11;
}
