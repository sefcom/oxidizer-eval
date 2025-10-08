long long fish::key::char_to_symbol(struct_0 *a0, unsigned int a1, char a2)
{
    char v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    char v2;  // [bp-0x38]
    void* v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    void* v5;  // [bp-0x18]
    unsigned int v7;  // edx

    v3 = 0;
    v4 = 4;
    v5 = 0;
    if (!(a1 != 127 & 33 <= a1))
    {
        fish::key::ctrl_to_symbol(&v3, a1);
    }
    else if (a1 < 128)
    {
        fish::key::ascii_printable_to_symbol(&v3, a2, a1);
    }
    else
    {
        if ((fish::wchar::decode_byte_from_char(a1) & 1))
        {
            v0 = 4;
            v1 = v7;
            fish_printf::printf_impl::sprintf_locale(&v2, &v3, "\\x%02x~#\\%c%c", 6, &v0, 1);
            v2.unwrap(&g_14dbe18);
        }
        else if ((char)g_a1bcac.contains(a1))
        {
            v0 = 4;
            v1 = a1;
            fish_printf::printf_impl::sprintf_locale(&v2, &v3, "\\u%04X%lc\\U%06Xsrc/kill.rssrc/locale.rssrc/nix.rs", 6, &v0, 1);
            v2.unwrap(&g_14dbe78);
        }
        else if (fish::fallback::fish_wcwidth(a1) > 0)
        {
            v0 = 4;
            v1 = a1;
            fish_printf::printf_impl::sprintf_locale(&v2, &v3, "%lc\\U%06Xsrc/kill.rssrc/locale.rssrc/nix.rs", 3, &v0, 1);
            v2.unwrap(&g_14dbe60);
        }
        else if (a1 < 0x10000)
        {
            v0 = 4;
            fish_printf::printf_impl::sprintf_locale(&v2, &v3, "\\u%04X%lc\\U%06Xsrc/kill.rssrc/locale.rssrc/nix.rs", 6, &v0, 1);
            v2.unwrap(&g_14dbe48);
        }
        else
        {
            v0 = 4;
            fish_printf::printf_impl::sprintf_locale(&v2, &v3, "\\U%06Xsrc/kill.rssrc/locale.rssrc/nix.rs", 6, &v0, 1);
            v2.unwrap(&g_14dbe30);
        }
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
    }
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v3);
    return a0;
}
