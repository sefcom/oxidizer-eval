long long fish::common::get_ellipsis_char()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v0 = v2;
    v3 = core::sync::atomic::atomic_load(&_ZN4fish6common13ELLIPSIS_CHAR17h536c2ad6c41759f4E, 0);
    if (((unsigned int)v3 ^ 0xd800) - 0x110000 < -0x10f800)
        core::option::unwrap_failed(&g_14c0d10); /* do not return */
    return v3;
}
