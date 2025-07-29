long long uu_tsort::Graph::add_node(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    void* v0;  // [bp-0x48], Other Possible Types: char
    char v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v3;  // [bp-0x20], Other Possible Types: unsigned long
    char v4;  // [bp-0x18]
    char v5;  // [bp-0x10]

    v3.rustc_entry(a0 + 24, a1);
    if (!v3)
    {
        memcpy(&v1, &v4, 16);
        v0 = 0;
        return v0.or_default();
    }
    memcpy(&v2, &v5, 16);
    memcpy(&v0, &v3, 16);
    return v0.or_default();
}
