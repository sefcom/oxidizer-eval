long long starship::module::Module::ansi_strings_for_width(unsigned long a0, unsigned long long a1[9], unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98]
    struct_0 *v3;  // [bp-0x90]
    void* v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    int v7;  // [bp-0x68]
    char v8;  // [bp-0x50]

    v5 = a1[7];
    v6 = a1[8] * 56 + a1[7];
    v4 = 0;
    v0 = 0;
    v1 = 8;
    v2 = 0;
    if (*((long long *)v4.get_or_insert_with(&(char)v5)))
    {
        do
        {
            starship::module::ansi_line(&v7, &v4, a2, a3);
            v8.into_iter(&v7);
            v0.spec_extend(&v8);
        } while (*((long long *)v4.get_or_insert_with(&v5)));
    }
    v3->field_10 = 0;
    v3->field_0 = *((int128_t *)&v0);
    return v3;
}
