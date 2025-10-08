long long firecracker::seccomp::get_filters(unsigned long long a0, unsigned int a1, unsigned int a2)
{
    if (!a1)
    {
        return vmm::seccomp::get_empty_filters(a0);
    }
    else if (a1 != 1)
    {
        return firecracker::seccomp::get_custom_filters(a0, a2);
    }
    else
    {
        return firecracker::seccomp::get_default_filters(a0);
    }
}
