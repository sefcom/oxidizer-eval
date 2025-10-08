long long fish::common::safe_write_loop(unsigned int a0, unsigned long a1, unsigned long a2)
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned long long v2;  // [bp-0x40]
    void* v4;  // r14
    void* v5;  // r14
    unsigned long long v6;  // r12
    unsigned long long v7;  // r13
    unsigned long v8;  // rax
    void* v9;  // r14

    if (!a2)
        return 0;
    if (a0 != -1)
    {
        v4 = 0;
        do
        {
            v5 = v4;
            nix::unistd::write(&v0, a0, a1 + v5, a2 - v5);
            if (v0 == 1)
            {
                do
                {
                    v8 = v1;
                    if (v8 != 11 && (unsigned int)v8 != 4)
                        return v8 * 0x100000000 | 2;
                    nix::unistd::write(&v0, a0, v7, v6);
                } while (((char)v0 & 1));
            }
            v9 = v5 + v2;
            if ((char)__CFADD__(v5, v2))
                core::panicking::panic_const::panic_const_add_overflow(&g_14c0f08); /* do not return */
            v4 = v9;
        } while (v4 < a2);
    }
    else
    {
        core::option::expect_failed("fd != -1\\", 8, &g_14c0ef0); /* do not return */
    }
    return 0;
}
