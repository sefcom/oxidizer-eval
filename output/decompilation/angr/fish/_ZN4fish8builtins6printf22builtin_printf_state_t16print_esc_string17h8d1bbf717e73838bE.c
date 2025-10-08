long long fish::builtins::printf::builtin_printf_state_t::print_esc_string(void* a0, unsigned long a1, unsigned long a2)
{
    unsigned long v1;  // rbx
    unsigned int v2;  // eax
    unsigned long long v3;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rbx
    unsigned long v7;  // rax

    if (!a2)
        return v7;
    while (true)
    {
        v1 = a2;
        v2 = a1.char_at(v1, 0);
        if (v2 != 92)
        {
            v3 = fish::builtins::printf::builtin_printf_state_t::append_output(a0, v2);
            a1 += 4;
            a2 = v1 - 1;
            if (v1 == 1)
                return v3;
        }
        else
        {
            v5 = fish::builtins::printf::builtin_printf_state_t::print_esc(a0, a1, v1, 1);
            v6 = v1 - v5;
            if (v1 < v5)
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb700); /* do not return */
            }
            else if (v1 != v5)
            {
                a1 = a1 + v5 * 4 + 4;
                a2 = v6 - 1;
                if (v6 == 1)
                    return v5;
            }
            else
            {
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14cb718); /* do not return */
            }
        }
    }
}
