long long fish::builtins::fish_indent::PrettyPrinterState::clean_text(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]

    fish::common::unescape_string(&v0, a1, a2, 0, 5);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v0);
        return a0.to_vec(a1, a2);
    }
    v5 = v2;
    memcpy(&v3, &v0, 16);
    v3.retain();
    v0 = v4;
    v1 = v4 + v5 * 4;
    if (v0.try_fold().eq(0) && v5)
    {
        a0->field_10 = v5;
        a0->field_0 = *((int128_t *)&v3);
        return v5;
    }
    v0.to_vec(a1, a2);
    a0->field_10 = v2;
    a0->field_0 = *((int128_t *)&v0);
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
}
