long long fish::wutil::gettext::gettext_impl::get_language_preferences_from_env::normalize_locale_name(struct_0 *a0, unsigned long long a1, unsigned long a2)
{
    void* v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned int v6;  // edx
    unsigned int v7;  // edx

    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3 = a1;
    v4 = a2 + a1;
    while (((char)core::str::validations::next_code_point(&v3) & 1))
    {
        v7 = v6;
        if ((v7 & 2097119) - 65 >= 26)
        {
            if (v6 < 128)
            {
                v7 = v6;
                if (v7 != 95)
                    break;
            }
            else
            {
                v7 = v6;
                if (!core::unicode::unicode_data::alphabetic::lookup(v7))
                    break;
            }
        }
        v0.push(v7);
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return 0;
}
