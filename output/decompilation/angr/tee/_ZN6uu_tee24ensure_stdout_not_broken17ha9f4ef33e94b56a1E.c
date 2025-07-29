long long uu_tee::ensure_stdout_not_broken(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0xb0]
    char *v1;  // [bp-0xa8], Other Possible Types: char
    unsigned int v2;  // [bp-0xa4]
    char *v3;  // [bp-0xa0]
    char v4;  // [bp-0x88]
    unsigned long v6;  // rdx
    char v7;  // al
    unsigned int v8;  // edx

    std::io::stdio::stdout();
    nix::sys::stat::fstat(&(char)v1, 1);
    if ((v1 & 1))
    {
        a0->field_8 = v2 * 0x100000000 | 2;
        a0->field_0 = 1;
        return a0;
    }
    else if (!((short)*((int *)&v4) & 0x1000))
    {
        *((unsigned short *)&a0->field_0) = 0x100;
        return a0;
    }
    else
    {
        v0 = 549755813889;
        if ((int)nix::poll::poll())
        {
            a0->field_8 = v6 * 0x100000000 | 2;
            v7 = 1;
        }
        else if (v8 > 0)
        {
            v1 = &v0;
            v3 = &(char)v1;
            a0->padding_1[0] = (char)v1.any() ^ 1;
        }
        else
        {
            core::panicking::panic("internal error: entered unreachable codea Display implementation returned an error unexpectedly/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/string.rs/root/.rustup/toolchains/nightly-2025-01-01-", 40, &g_57b0f0); /* do not return */
        }
        a0->field_0 = v7;
        return a0;
    }
}
