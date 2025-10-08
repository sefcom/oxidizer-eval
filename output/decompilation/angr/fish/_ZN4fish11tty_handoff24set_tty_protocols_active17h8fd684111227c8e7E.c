long long fish::tty_handoff::set_tty_protocols_active(unsigned long a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long v2;  // rbp
    struct_0 *v3;  // rax
    unsigned int v4;  // rdx

    v2 = a1;
    fish::threads::assert_is_main_thread();
    v3 = fish::tty_handoff::tty_protocols();
    if (v3)
    {
        if (!(!(char)core::sync::atomic::atomic_load(&_ZN4fish11tty_handoff20TTY_PROTOCOLS_ACTIVE17hb45e16af2989d9ffE, 0) ^ (char)v2))
        {
            if ((char)v2)
                core::sync::atomic::atomic_store(&_ZN4fish11tty_handoff20TTY_PROTOCOLS_ACTIVE17hb45e16af2989d9ffE, 1, 1);
            if (!_ZN4fish11tty_handoff11TTY_INVALID17hcdbd4d9125149825E.load())
            {
                v0 = fish::common::safe_write_loop(1, (unsigned long long)v3.safe_get_commands(v2 & 4294967295), v4);
                core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v0);
                if (!(char)v2)
                    core::sync::atomic::atomic_store(&_ZN4fish11tty_handoff20TTY_PROTOCOLS_ACTIVE17hb45e16af2989d9ffE, 0, 0);
                goto (long long)(g_9f646c[(int)v3->field_80.safe_get_supported_protocol()] + (char *)&g_9f646c[0]);
            }
        }
        else
        {
            return 0;
        }
    }
    return 0;
}
