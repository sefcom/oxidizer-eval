long long fish::complete::append_switch_long(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    char v3;  // [bp-0x18]

    v0 = 1;
    v1 = a1;
    v2 = a2;
    fish_printf::printf_impl::sprintf_locale(&v3, a0, " --%lspoisoned mutex", 6, &v0, 1);
    v3.unwrap(&g_14d6368);
    return core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
}
