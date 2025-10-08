long long just::search::Search::search_parent_directory(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long
    char v1;  // [bp-0x38]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax
    int v6;  // xmm0

    v3 = a1.parent(a2);
    if (v3)
    {
        v5 = v3.parent(v4);
        if (v5)
            return a0.find_in_directory(a3, a4, v5, v4);
    }
    <just::module_path::ModulePath as core::convert::TryFrom<&[&str]>>::try_from::{{closure}}(&v0, a1, a2);
    v6 = *((int128_t *)&v1);
    a0->field_8 = 9223372036854775811;
    a0->field_10 = v0;
    *((void*)&(&a0->field_10)[1]) = v6;
    a0->field_0 = 0x8000000000000000;
    return v0;
}
