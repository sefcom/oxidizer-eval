long long fish::tty_handoff::safe_deactivate_tty_protocols()
{
    unsigned long long v0;  // [bp-0x10]
    void* v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned int v5;  // rdx

    v2 = core::sync::atomic::atomic_load();
    if (!v2)
        return v2;
    v3 = (unsigned long long)core::sync::atomic::atomic_load(&_ZN4fish11tty_handoff20TTY_PROTOCOLS_ACTIVE17hb45e16af2989d9ffE, 2);
    if (!(char)v3)
        return v3;
    v4 = _ZN4fish11tty_handoff11TTY_INVALID17hcdbd4d9125149825E.load();
    if (!(char)v4)
    {
        v0 = fish::common::safe_write_loop(1, (unsigned long long)v2.safe_get_commands(0), v5);
        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
        return (unsigned long long)core::sync::atomic::atomic_store(&_ZN4fish11tty_handoff20TTY_PROTOCOLS_ACTIVE17hb45e16af2989d9ffE, 0, 1);
    }
    return v4;
}
