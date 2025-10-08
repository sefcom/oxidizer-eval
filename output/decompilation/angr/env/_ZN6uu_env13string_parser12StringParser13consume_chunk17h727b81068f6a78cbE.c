long long uu_env::string_parser::StringParser::consume_chunk(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x37]
    unsigned int v4;  // [bp-0x34]
    char v5;  // [bp-0x30]
    unsigned long long v7;  // r15
    unsigned long long v8;  // rax
    unsigned int v9;  // eax

    v7 = a1->field_20;
    v0.get_chunk_with_length_at(a1, v7);
    if (*((int *)&v0) == 1)
    {
        v8 = 1;
    }
    else
    {
        v9 = *((int *)&v3);
        a0->field_11 = v4;
        *((unsigned int *)&(&a0->field_10)[1]) = v9;
        a1.set_pointer(v7 + *((long long *)&v5));
        v8 = 0;
    }
    a0->field_8 = v1;
    a0->field_10 = v2;
    a0->field_0 = v8;
    return a0;
}
