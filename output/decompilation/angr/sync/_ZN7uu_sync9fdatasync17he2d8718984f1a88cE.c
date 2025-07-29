long long uu_sync::fdatasync(unsigned long long a0)
{
    return uu_sync::platform::do_fdatasync(a0);
}
