long long bat::preprocessor::try_parse_utf8_char(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x89]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    char *v3;  // [bp-0x78]
    void* v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    char v7;  // [bp-0x58]
    char v8;  // [bp-0x40]
    void* v10;  // rax
    unsigned long long v11;  // rdx

    if (a1)
    {
        v10 = a0.call_once(1);
        if (!v10)
            goto LABEL_83dd3f;
        v4 = v10;
        v5 = v11;
        v6 = 1;
    }
    else
    {
LABEL_83dd3f:
        v4 = 0;
    }
    v1 = a0;
    v2 = a1;
    v3 = &v0;
    v8.or_else(&v4, &v1);
    v1 = a0;
    v2 = a1;
    v3 = &v0;
    v4.or_else(&v8, &v1);
    v1 = a0;
    v2 = a1;
    v3 = &v0;
    v7.or_else(&v4, &v1);
    return (!*((long long *)&v7) ? 0x110000 : bat::preprocessor::try_parse_utf8_char::{{closure}}(&v7));
}
