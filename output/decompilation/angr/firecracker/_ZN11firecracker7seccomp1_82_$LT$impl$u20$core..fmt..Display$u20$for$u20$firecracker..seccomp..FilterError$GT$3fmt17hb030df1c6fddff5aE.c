void firecracker::seccomp::_::<impl core::fmt::Display for firecracker::seccomp::FilterError>::fmt(char *a0, unsigned long a1)
{
    unsigned long v1;  // rcx
    unsigned long v2;  // rcx

    v1 = *(a0);
    v2 = v1 - 17;
    if ((v1 - 18 & 255) >= 3)
        v2 = 0;
    goto (long long)(g_432c1c[v2] + (char *)&g_432c1c[0]);
}
