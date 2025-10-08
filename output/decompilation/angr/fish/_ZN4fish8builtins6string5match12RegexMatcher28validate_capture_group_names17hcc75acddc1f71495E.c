long long fish::builtins::string::match::RegexMatcher::validate_capture_group_names(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    char v4;  // [bp-0x28]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // rax

    v0 = a1;
    v1 = a1 + a2 * 24;
    v6 = v0.find_map();
    if (v6)
    {
        do
        {
            v2.from_str(v6[1], v6[2]);
            if (v3.flags_for(*((long long *)&v4)) >= 2)
            {
                v7 = *((long long *)&v4);
                *((unsigned long long *)((char *)&a0->field_8 + 8)) = v7;
                *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
                a0->field_0 = 2;
                return v7;
            }
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v2);
            v6 = v0.find_map();
        } while (v6);
    }
    a0->field_0 = 4;
    return v6;
}
