long long starship::modules::utils::truncate::truncate_text(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char *v0;  // [bp-0x80]
    int v1;  // [bp-0x78], Other Possible Types: char
    unsigned long v2;  // [bp-0x68], Other Possible Types: unsigned long long
    char v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x38]

    if (!a3)
        return a0.to_vec(a1, a2);
    v0 = &v1;
    starship::modules::utils::truncate::get_graphemes(&v1, a1, a2, a3);
    if (a3 >= starship::modules::utils::truncate::graphemes_len(a1, a2))
    {
        a0->field_10 = v2;
        *((void*)&a0->field_0) = v1;
        return v2;
    }
    starship::modules::utils::truncate::get_graphemes(&v3, a4, a5, 1);
    v7 = v2;
    memcpy(&v6, &v1, 16);
    a0.add(&v6, v4, v5);
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&v3);
}
