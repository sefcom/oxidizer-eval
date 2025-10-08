long long fish::fd_readable_set::FdReadableSet::poll_fd_readable(unsigned int a0)
{
    return a0.is_fd_readable(0, 0);
}
