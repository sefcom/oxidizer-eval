long long fish::reader::ReaderData::replace_substring(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    void* v0;  // [bp-0x68]
    void* v1;  // [bp-0x58]
    void* v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    void* v4;  // [bp-0x38]
    int v5;  // [bp-0x30]
    unsigned long v6;  // [bp-0x20]
    void* v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]

    v7 = 0;
    v0 = 0;
    v8 = a2;
    v9 = a3;
    v2 = 0;
    v3 = 4;
    v4 = 0;
    *((uint128_t *)&v5) = a4->field_0;
    v6 = a4->field_10;
    v1 = 0;
    return a0.push_edit(a1, &v0);
}
