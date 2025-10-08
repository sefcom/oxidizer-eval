long long fish::builtins::set::new_var_values(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3, char a4, unsigned long long a5, unsigned long a6, unsigned long long a7)
{
    int v0;  // [bp-0x98], Other Possible Types: void*
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    char v3;  // [bp-0x78], Other Possible Types: unsigned long
    char v4;  // [bp-0x70]
    int v5;  // [bp-0x60], Other Possible Types: char
    char v6;  // [bp-0x50]

    v0 = 0;
    v1 = 8;
    v2 = 0;
    if ((a4 & 1) || (a3 & 1))
    {
        v3.get(a7, a1, a2);
        if (v3)
        {
            v5.to_vec(v3 + 16, *((long long *)&v4));
            core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v0);
            v2 = *((long long *)&v6);
            v0 = v5;
            core::ptr::drop_in_place<fish::env::var::EnvVar>(&v3);
        }
        if ((a4 & 1))
        {
            v5.splice(&v0, a5, a6 * 16 + a5);
            core::ptr::drop_in_place<alloc::vec::splice::Splice<core::iter::adapters::map::Map<core::iter::adapters::copied::Copied<core::slice::iter::Iter<&widestring::utfstr::Utf32Str>>,fish::builtins::set::new_var_values::{{closure}}>>>(&v5);
        }
        if ((a3 & 1))
            v0.extend_trusted(a5, a6 * 16 + a5);
    }
    else
    {
        v0.extend_trusted(a5, a6 * 16 + a5);
    }
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    return v2;
}
