long long uu_env::string_parser::StringParser::peek_chunk::h5d81e0232a3594d3(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x30]
    int v3;  // [sp-0x28]
    unsigned long long v4;  // [sp-0x18]
    unsigned long long v6;  // rax

    uu_env::string_parser::StringParser::get_chunk_with_length_at::hb38bc0c66d566496(&v0, a1, a1->field_20);
    if (*((long long *)&v0))
    {
        v6 = 0;
    }
    else
    {
        v4 = *((long long *)&v2);
        *((int128_t *)&v3) = *((int128_t *)&v1);
        *((void*)&(&a0->field_0)[1]) = v3;
        v6 = 1;
    }
    a0->field_0 = v6;
    return a0;
}
