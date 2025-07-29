long long uu_df::Options::get_intersected_types(struct_0 *a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4)
{
    void* v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    void* v2;  // [bp-0x70]
    int v3;  // [bp-0x68]
    int v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x40]
    unsigned long long v7;  // [bp-0x38]
    unsigned long long v9;  // rax

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v6 = a1;
    v7 = a1 + a2 * 24;
    if (v6.next())
    {
        do
        {
            if (v9.slice_contains(a3, a4))
            {
                v4.clone(v9);
                v0.push(&v4);
            }
            v9 = v6.next();
        } while (v9);
        v5 = v2;
        memcpy(&v4, &v0, 16);
        if (v2)
        {
            a0->field_10 = v2;
            *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
            return v2;
        }
    }
    else
    {
        v5 = v2;
        memcpy(&v4, &v0, 16);
    }
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    return (unsigned long long)::0x4b2b90::core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v3);
}
