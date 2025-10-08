long long fish::screen::LayoutCache::add_escape_code(unsigned long long a0[3], struct_0 *a1)
{
    int v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v3;  // rdx

    if (!((char)core::slice::<impl [T]>::binary_search_by(a0[1], a0[2], a1) & 1))
        return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a1);
    v1 = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    return a0.insert(v3, &v0, &g_14e1de0);
}
