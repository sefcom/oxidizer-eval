void fish::wildcard::expander::WildCardExpander::open_dir(unsigned long long a0, struct_0 *a1, unsigned int *a2, unsigned int a3, char a4)
{
    unsigned long long v0[3];  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    int v3;  // [bp-0x48], Other Possible Types: char
    char v4;  // [bp-0x38]

    v0.to_vec(a1->field_70, a1->field_78);
    fish::path::append_path_component(&v0, a2, a3);
    if ((a1->field_89 & 8))
    {
        fish::wutil::normalize_path(&v3, v1, v2, 1);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        v2 = *((long long *)&v4);
        *((void*)v0) = v3;
    }
    if (a4)
        a0.new_with_dots(v1, v2);
    else
        a0.new(v1, v2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return;
}
