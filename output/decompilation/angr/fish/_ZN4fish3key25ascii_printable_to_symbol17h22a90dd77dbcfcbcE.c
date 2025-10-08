long long fish::key::ascii_printable_to_symbol(unsigned long long a0, char a1, unsigned int a2)
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x30]
    unsigned long v3;  // rcx

    v3 = a2;
    if ((char)fish::key::must_escape(a1, a2))
    {
        v1 = 4;
        fish_printf::printf_impl::sprintf_locale(&v0, a0, "\\%c%c", 3, &v1, 1);
        v0.unwrap(&g_14dbe00);
    }
    else
    {
        v1 = 4;
        fish_printf::printf_impl::sprintf_locale(&v0, a0, "%c", 2, &v1, 1);
        v0.unwrap(&g_14dbde8);
    }
    return core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
}
