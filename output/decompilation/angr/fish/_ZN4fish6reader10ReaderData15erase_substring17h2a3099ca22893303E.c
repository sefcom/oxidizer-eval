long long fish::reader::ReaderData::erase_substring(unsigned long long a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x88]
    void* v1;  // [bp-0x78]
    void* v2;  // [bp-0x68]
    unsigned long long v3;  // [bp-0x60]
    void* v4;  // [bp-0x58]
    char v5;  // [bp-0x50]
    void* v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]

    v5.to_vec(4, 0);
    v6 = 0;
    v0 = 0;
    v7 = a2;
    v8 = a3;
    v2 = 0;
    v3 = 4;
    v4 = 0;
    v1 = 0;
    return a0.push_edit(a1, &v0);
}
