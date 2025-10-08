void fish::complete::append_switch_short_arg(unsigned long long a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x80]
    unsigned long v1;  // [bp-0x78]
    int v2;  // [bp-0x70]
    char v3;  // [bp-0x60]
    int v4;  // [bp-0x58]
    char v5;  // [bp-0x48]
    int v6;  // [bp-0x38]
    char v7;  // [bp-0x28]
    int v8;  // [bp-0x20]

    if (!a3)
        return;
    v1 = a1;
    v0 = 4;
    fish::common::escape(&v3, a2, a3);
    memcpy(&v5, &v0, 16);
    v6 = v2;
    v7 = 1;
    v8 = v4;
    fish_printf::printf_impl::sprintf_locale(&v0, a0, " -%lc %ls --%ls %ls -%lc --%lspoisoned mutex", 9, &v5, 2);
    v0.unwrap(&g_14d6320);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v5);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    return;
}
