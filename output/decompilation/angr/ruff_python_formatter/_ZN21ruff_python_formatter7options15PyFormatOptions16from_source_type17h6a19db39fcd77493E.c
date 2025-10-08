long long ruff_python_formatter::options::PyFormatOptions::from_source_type(struct_0 *a0, char a1)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned short
    unsigned int v1;  // [bp-0x1e]
    char v2;  // [bp-0x1a]
    unsigned int v3;  // [bp-0x18]
    char v4;  // [bp-0x14]
    char v5;  // [bp-0x13]
    char v6;  // [bp-0x12]

    v0.default();
    *((char *)&a0->field_2 + 3) = a1;
    a0->field_0 = v0;
    *((char *)&a0->field_2 + 2) = v2;
    *((unsigned int *)&a0->field_6) = v3;
    *((char *)&a0->field_8) = v4;
    *((char *)&a0->field_8 + 1) = v5;
    *((unsigned int *)&(&a0->field_0)[1]) = v1;
    *((char *)&a0->field_8 + 2) = v6;
    return a0;
}
