long long fish::threads::iothread_service_main_with_timeout(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v1;  // rax

    v1 = fish::fd_readable_set::is_fd_readable((unsigned int)fish::threads::iothread_port(), a1, a2);
    if (!(char)v1)
        return v1;
    return (unsigned long long)fish::threads::iothread_service_main(a0);
}
