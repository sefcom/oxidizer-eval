long long uu_env::string_parser::StringParser::consume_chunk::ha9e5ebcebe2d876c(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x37]
    unsigned int v4;  // [bp-0x34]
    char v5;  // [bp-0x30]
    unsigned long long v7;  // r15
    unsigned long long v8;  // r12
    char v9;  // bpl
    unsigned long long v10;  // rax
    unsigned int v11;  // eax

    v7 = a1->field_20;
    uu_env::string_parser::StringParser::get_chunk_with_length_at::hb38bc0c66d566496(&v0, a1, v7);
    v8 = *((long long *)&v1);
    v9 = v2;
    if (*((long long *)&v0))
    {
        v10 = 1;
    }
    else
    {
        v11 = *((int *)&v3);
        a0->field_11 = v4;
        *((unsigned int *)&(&a0->field_10)[1]) = v11;
        uu_env::string_parser::StringParser::set_pointer::h2a6c0d9a71a1fccc(a1, v7 + *((long long *)&v5));
        v10 = 0;
    }
    a0->field_8 = v8;
    a0->field_10 = v9;
    a0->field_0 = v10;
    return a0;
}
