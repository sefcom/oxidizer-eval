long long ruff_python_formatter::string::docstring::CodeExampleRst::new_code_block(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    void* v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    char v7;  // [bp-0x38]
    char v8;  // [bp-0x28]

    g_9c19b8.call_once(&_ZN21ruff_python_formatter6string9docstring14CodeExampleRst14new_code_block15DIRECTIVE_START17h822cadd0e9c18456E);
    v0 = 0;
    v1 = a1;
    v2 = a2;
    v3 = 0;
    v4 = a2;
    v5 = 1;
    v0.set_span(a2);
    memcpy(&v8, &v4, 16);
    memcpy(&v7, &v2, 16);
    memcpy(&v6, &v0, 16);
    v0.search_half(&v6);
    if (!*((long long *)&v0))
    {
        a0->field_0 = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v0.from_str(a1, a2);
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v2;
    *((int128_t *)&(&a0->field_10)[1]) = *((int128_t *)&v0);
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    *((unsigned int *)&a0->field_28) = 5;
    a0->padding_34[12] = 1;
    return v2;
}
