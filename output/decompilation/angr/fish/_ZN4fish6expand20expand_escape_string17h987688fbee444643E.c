long long fish::expand::expand_escape_string(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned int v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    char v5;  // [bp-0x20]

    v0 = 0;
    v1 = 4;
    v2 = 0;
    v3 = 32;
    if (v3.slice_contains(a1, a2) && fish::expand::is_quotable(a1, a2))
    {
        v0.push(39);
        v0.spec_extend(a1, a1 + a2 * 4);
        v0.push(39);
    }
    else
    {
        fish::common::escape(&v3, a1, a2);
        v0.spec_extend(v4, v4 + *((long long *)&v5) * 4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return a0;
}
