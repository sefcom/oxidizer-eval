void bat::vscreen::AnsiStyle::update(unsigned long long *a0, unsigned long long a1)
{
    char v0;  // [bp-0x130]

    if ((char)(((0 ^ *(a0)) & (0 ^ -(*(a0)))) >> 63))
    {
        v0.new();
        core::ptr::drop_in_place<core::option::Option<bat::vscreen::Attributes>>(a0);
        ::libc.so.0::memcpy(a0, &v0, 272);
        if (*(a0) == 0x8000000000000000)
            core::option::unwrap_failed(&g_aced00); /* do not return */
    }
    a0.update(a1);
    return;
}
