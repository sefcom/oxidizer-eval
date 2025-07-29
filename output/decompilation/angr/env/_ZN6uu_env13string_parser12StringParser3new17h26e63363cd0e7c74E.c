long long uu_env::string_parser::StringParser::new(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    void* v4;  // [bp-0x10]
    int v6;  // xmm0

    v0 = a1;
    v1 = a2;
    v4 = 0;
    v2 = a1;
    v3 = a2;
    v0.set_pointer(0);
    a0->field_20 = 0;
    v6 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v2);
    *((void*)&a0->field_0) = v6;
    return a0;
}
