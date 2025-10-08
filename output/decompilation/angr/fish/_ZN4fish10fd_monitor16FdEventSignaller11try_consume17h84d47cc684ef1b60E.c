char fish::fd_monitor::FdEventSignaller::try_consume(unsigned int *a0)
{
    unsigned int v0;  // [bp-0x34]
    void* v1;  // [bp-0x30]
    unsigned long long v3;  // rax

    v1 = 0;
    while (true)
    {
        if (read(*(a0), &v1, 8) >= 0)
            break;
        if ((int)errno::errno() != 4)
        {
            v0 = errno::errno();
            if (!v0.slice_contains(&g_54a328, 2))
            {
                fish::wutil::perror("readend\nfull", 4);
                break;
            }
        }
    }
    return v3 > 0;
}
