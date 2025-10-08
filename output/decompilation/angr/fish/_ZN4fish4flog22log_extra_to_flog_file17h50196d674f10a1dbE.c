long long fish::flog::log_extra_to_flog_file(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax

    v0 = v2;
    return fish::wutil::wwrite_to_fd(a0, a1, core::sync::atomic::atomic_load(&_ZN4fish4flog7FLOG_FD17h731139973df88618E));
}
