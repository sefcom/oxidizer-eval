long long bat::theme::choose_theme_opt(struct_0 *a0, unsigned int a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    char v6;  // [bp-0x30]
    char v7;  // [bp-0x20]
    unsigned long v9;  // rbx

    v9 = a1;
    if ((char)v9 == 2)
    {
        core::ptr::drop_in_place<bat::theme::choose_theme_opt::{{closure}}>(a2);
        v3 = 0x8000000000000000;
LABEL_84439d:
        v2 = v5;
        v0 = 0x8000000000000000;
        v1 = v4;
    }
    else
    {
        bat::theme::choose_theme(&v6, a2, v9 & 4294967295);
        v3 = 0x8000000000000000;
        if (*((long long *)&v6) == 9223372036854775809)
            goto LABEL_84439d;
        v2 = *((long long *)&v7);
        memcpy(&(char)v0, &v6, 16);
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(&v3);
    }
    a0->field_10 = v2;
    a0->field_0 = v0;
    a0->field_8 = v1;
    a0->field_18 = v9;
    return v1;
}
