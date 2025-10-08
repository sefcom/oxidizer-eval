long long fish::builtins::path::normalize_help(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    char v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x40]
    char v5;  // [bp-0x38]

    fish::wutil::normalize_path(&v0, a1, a2, 0);
    if (v2 && (int)v1.char_at(v2, 0) == 45)
    {
        v5.chain(v1, v1 + v2 * 4);
        v3.collect(&v5);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        v2 = v4;
        memcpy(&v0, &v3, 16);
    }
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    return v2;
}
