long long uu_tee::ensure_stdout_not_broken(void* a0)
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
    if (*((int *)&v1) == 1)
    {
        *((unsigned long long *)&a0[8]) = v2 * 0x100000000 | 2;
        *((char *)a0) = 1;
        return a0;
    }
    else if (!((short)*((int *)&v4) & 0x1000))
    {
        *((unsigned short *)a0) = 0x100;
        return a0;
    }
    else
    {
        v0 = 549755813889;
        if (((char)nix::poll::poll() & 1))
        {
            *((unsigned long long *)&a0[8]) = v6 * 0x100000000 | 2;
            v7 = 1;
        }
        else if (v8 > 0)
        {
            v1 = &v0;
            v3 = &(char)v1;
            *((char *)&a0[1]) = (char)v1.any() ^ 1;
        }
        else
        {
            core::panicking::panic("internal error: entered unreachable codeadvancing io slices beyond their lengthadvancing IoSlice beyond its length/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/sys/io/io_slice/iovec.rs", 40, &g_4ea5b0); /* do not return */
        }
        *((char *)a0) = v7;
        return a0;
    }
}
