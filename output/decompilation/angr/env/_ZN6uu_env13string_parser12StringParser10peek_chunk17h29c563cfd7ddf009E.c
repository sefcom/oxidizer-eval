long long uu_env::string_parser::StringParser::peek_chunk::h29c563cfd7ddf009(struct_0 *a0, struct_1 *a1)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax

    uu_env::string_parser::StringParser::get_chunk_with_length_at::h8f36f3de6fe605ad(&v0, a1, a1->field_20);
    if (*((long long *)&v0))
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
