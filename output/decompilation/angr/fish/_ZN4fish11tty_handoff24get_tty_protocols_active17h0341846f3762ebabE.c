char fish::tty_handoff::get_tty_protocols_active()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return (char)core::sync::atomic::atomic_load(&_ZN4fish11tty_handoff20TTY_PROTOCOLS_ACTIVE17hb45e16af2989d9ffE, 0);
}
