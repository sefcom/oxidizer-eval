long long fish::fds::AutoCloseFd::close(unsigned int *a0)
{
    unsigned long long v1;  // rax
    unsigned long v2;  // rax

    if (*(a0) == -1)
        return v2;
    v1 = nix::unistd::close(*(a0));
    *(a0) = 4294967295;
    return v1;
}
