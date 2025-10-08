long long fd::exec::CommandBuilder::new_command(unsigned long long a0[2], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x108]
    unsigned long v2;  // rdx

    if (!a2)
        core::panicking::panic_bounds_check(0, 0, &g_802230); /* do not return */
    v0.new(a1);
    v0.stdin(a1, a2);
    v0.stdout(a1, a2);
    v0.stderr(a1, a2);
    if (!((char)v0.try_args(a1 + 24, a2 - 1) & 1))
        return ::libc.so.0::memcpy(a0, &v0, 232);
    a0[1] = v2;
    a0[0] = 0x8000000000000000;
    return core::ptr::drop_in_place<argmax::Command>(&v0);
}
