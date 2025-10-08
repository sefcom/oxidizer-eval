long long uu_env::string_parser::StringParser::peek_chunk(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    v0.get_chunk_with_length_at(a1, a1->field_20);
    if ((v0 & 1))
    {
        v3 = 0;
    }
    else
    {
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        v3 = 1;
    }
    a0->field_0 = v3;
    return a0;
}
