long long fish::fd_readable_set::FdReadableSet::check_readable(unsigned long long a0[3], unsigned int a1, unsigned int a2)
{
    if (!a0[2])
        return 0;
    return (unsigned long long)a0[1].do_poll(a0[2], a1, a2);
}
