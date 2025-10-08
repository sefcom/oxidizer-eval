long long fish::redirection::Dup2List::fd_for_target_fd(unsigned long long a0[3], unsigned int a1)
{
    unsigned long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned int v3[2];  // rax
    unsigned int v4;  // ecx

    if (a1 < 0)
        return a1;
    v0 = a0[1];
    v1 = a0[1] + a0[2] * 8;
    if (!v0.next_back())
        return a1;
    while (true)
    {
        v4 = v3[0];
        if (v3[1] == a1)
        {
            a1 = v4;
        }
        else
        {
            a1 = a1;
            if ((v3[0] == a1 & (char)(v3[1] >> 31)))
                return 4294967295;
        }
        v3 = v0.next_back();
        if (!v3)
            return a1;
    }
}
