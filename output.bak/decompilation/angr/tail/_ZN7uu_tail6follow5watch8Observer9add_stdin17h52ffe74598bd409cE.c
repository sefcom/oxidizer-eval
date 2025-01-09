long long uu_tail::follow::watch::Observer::add_stdin::h52ffe74598bd409c(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned int a5)
{
    unsigned long long v0;  // [sp-0x78]
    unsigned long long v1;  // [sp-0x70]
    int v2;  // [sp-0x68]
    unsigned long long v3;  // [sp-0x58]
    char v4;  // [bp-0x48]
    char v5;  // [bp-0x38]
    char v7;  // al

    v7 = a0->field_8e;
    if (v7 != 2 && !(v7 & 1))
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v4, "/dev/stdinToo many open files:  cannot be used, reverting to polling: Too many open files\ninotifysrc/uu/tail/src/follow/watch.rs has become accessible\n has appeared;  following new file\n has been replaced;  following new file\n: file truncated\n has been rep", 10);
        v3 = *((long long *)&v5);
        *((int128_t *)&v2) = *((int128_t *)&v4);
        v1 = a5;
        v0 = a4;
        ::0x503b00::core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b();
        return uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(a0, (long long)(&v2)[8], *((long long *)&v5), a1, a2, a3);
    }
    ::0x5040e0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(a3, a4);
    return 0;
}
