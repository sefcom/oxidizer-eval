long long fd::exec::CommandTemplate::generate(void* a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6)
{
    unsigned long long v0[2];  // [bp-0x138]
    char v1;  // [bp-0x130]
    char v2;  // [bp-0x118]
    unsigned long long v3;  // r13
    unsigned long v4;  // rbp
    unsigned long v5;  // r13
    unsigned long v6;  // r13
    unsigned long v7;  // r13
    unsigned long v8;  // rdx

    if (!a2)
        core::panicking::panic_bounds_check(0, 0, &g_802288); /* do not return */
    v1.generate(a1, a3, a4, a5, a6);
    v2.new(&v1);
    v3 = a2 * 32;
    if (v3 == 32)
        return ::libc.so.0::memcpy(a0, &v2, 232);
    v4 = a1 + 32;
    v5 = v3 - 32;
    do
    {
        v6 = v5;
        v1.generate(v4, a3, a4, a5, a6);
        if (((char)v2.try_arg(&v1) & 1))
        {
            v0[1] = v8;
            v0[0] = 0x8000000000000000;
            return core::ptr::drop_in_place<argmax::Command>(&v2);
        }
        v4 += 32;
        v7 = v6 - 32;
        v5 = v7;
    } while (v6 != 32);
    return ::libc.so.0::memcpy(a0, &v2, 232);
}
