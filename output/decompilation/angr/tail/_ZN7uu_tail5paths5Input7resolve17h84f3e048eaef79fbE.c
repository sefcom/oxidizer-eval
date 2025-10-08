long long uu_tail::paths::Input::resolve(void* a0, unsigned long long a1[6])
{
    char v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    char v4;  // al

    if (!((char)(((0 ^ a1[3]) & (0 ^ -(a1[3]))) >> 63)))
    {
        v0.to_vec("/dev/stdinToo many open files cannot be used, reverting to polling: Too many open files\ninotifysrc/uu/tail/src/follow/watch.rs has become accessible\n has appeared;  following new file\n has been replaced;  following new file\n: file truncated\n has been repla", 10);
        v4 = a1[4].eq(a1[5], v1, *((long long *)&v2));
        core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
        if (!v4)
        {
            std::fs::canonicalize(&v0, a1[4], a1[5]);
            if (v0 != 0x8000000000000000)
            {
                *((long long *)&a0[16]) = *((long long *)&v2);
                *((int128_t *)a0) = *((int128_t *)&v0);
                return a0;
            }
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
            return a0;
        }
    }
    v0.to_vec("/dev/fd/0 <==\n", 9);
    std::fs::canonicalize(&v0, v1, *((long long *)&v2));
    if (v0 == 0x8000000000000000)
    {
        *((long long *)a0) = 0x8000000000000000;
        core::ptr::drop_in_place<core::result::Result<std::path::PathBuf,std::io::error::Error>>(&v0);
    }
    else
    {
        *((long long *)&a0[16]) = *((long long *)&v2);
        *((int128_t *)a0) = *((int128_t *)&v0);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(v0, v1);
    return a0;
}
