long long fish::complete::append_switch_short(unsigned long long a0)
{
    char v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x18]

    v0 = 4;
    v1 = 107;
    fish_printf::printf_impl::sprintf_locale(&v2, a0, " -%lc --%lspoisoned mutex", 5, &v0, 1);
    v2.unwrap(&g_14d6350);
    return core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
}
