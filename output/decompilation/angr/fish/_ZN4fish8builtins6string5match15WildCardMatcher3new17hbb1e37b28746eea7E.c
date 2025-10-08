long long fish::builtins::string::match::WildCardMatcher::new(struct_0 *a0, unsigned long long a1, unsigned long long a2, char a3[28])
{
    int v0;  // [bp-0x48], Other Possible Types: char
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x28], Other Possible Types: unsigned int
    char v4;  // [bp-0x18]

    fish::parse_util::parse_util_unescape_wildcards(&v0, a1, a2);
    if (a3[27])
    {
        v3.to_lowercase(v1, v2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        v2 = *((long long *)&v4);
        *((int128_t *)&v0) = *((int128_t *)&v3);
    }
    if (a3[25])
    {
        if (v2)
        {
            if ((int)v1.char_at(v2, 0) != 64993)
            {
                v3 = 64993;
                v0.insert_slice(0, &v3, 1);
            }
            if (!v2)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14d3548); /* do not return */
            if ((int)v1.char_at(v2, v2 - 1) != 64993)
                goto LABEL_1373b7a;
        }
        else
        {
LABEL_1373b7a:
            v0.push(64993);
        }
    }
    a0->field_10 = v2;
    a0->field_0 = (int128_t)v0;
    a0->field_20 = 0;
    a0->field_18 = a3;
    return v2;
}
