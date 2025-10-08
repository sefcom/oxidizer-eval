long long fish::autoload::Autoload::can_autoload(unsigned long long a0[15], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x60]

    v0.check(a0[14], a0[0], a0[1], a1, a2, 1);
    core::ptr::drop_in_place<core::option::Option<fish::autoload::AutoloadableFileInfo>>(&v0);
    return vvar_5{reg 56} & 0xffffff00 | *((long long *)&v0) != 9223372036854775809;
}
