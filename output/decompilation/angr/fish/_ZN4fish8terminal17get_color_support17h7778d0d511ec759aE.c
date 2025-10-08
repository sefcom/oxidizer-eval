char fish::terminal::get_color_support()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)core::sync::atomic::atomic_load(&_ZN4fish8terminal13COLOR_SUPPORT17h669c9e56f0047484E, 0) & 3;
}
