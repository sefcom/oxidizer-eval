long long fish::flog::flog_impl(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x20]
    unsigned long long v2;  // rax

    v2 = core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E);
    if ((unsigned int)v2 < 0)
        return v2;
    return fish::wutil::write_to_fd(&v0, a0, a1, v2);
}
