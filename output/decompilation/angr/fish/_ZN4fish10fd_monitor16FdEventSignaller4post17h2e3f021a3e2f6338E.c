long long fish::fd_monitor::FdEventSignaller::post(unsigned int *a0)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned int v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned int v3;  // [bp-0x28]
    char v4;  // [bp-0x24]
    unsigned long v6;  // rcx
    unsigned long v7;  // rax
    unsigned long long v8;  // rax

    v0 = 1;
    nix::unistd::write(&v2, *(a0), &v0, 8);
    v6 = v2;
    v7 = *((int *)&v4);
    if (((unsigned int)v7 == 4 & (char)v6) == 1)
    {
        do
        {
            v0 = 1;
            nix::unistd::write(&v2, *(a0), &v0, 8);
            v6 = v3;
            v7 = *((int *)&v4);
        } while ((unsigned int)v6 == 1 && (unsigned int)v7 == 4);
    }
    if (!((char)v6 & 1))
        return v7;
    v1 = v7;
    v8 = v1.slice_contains();
    if ((char)v8)
        return v8;
    return fish::wutil::perror("writegroupzZq", 5);
}
