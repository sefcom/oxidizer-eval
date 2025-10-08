long long just::signals::Signals::new(void* a0)
{
    char v0;  // [bp-0x208], Other Possible Types: unsigned long
    unsigned int v1;  // [bp-0x204]
    unsigned long long v2;  // [bp-0x200]
    unsigned long long v3;  // [bp-0x1f8]
    uint128_t v4;  // [bp-0x1f0]
    int v5;  // [bp-0x168]
    int v6;  // [bp-0x158]
    int v7;  // [bp-0x148]
    int v8;  // [bp-0x138]
    int v9;  // [bp-0x128]
    unsigned long long v10;  // [bp-0x118]
    int v11;  // [bp-0x108]
    int v12;  // [bp-0xf8]
    int v13;  // [bp-0xe8]
    int v14;  // [bp-0xd8]
    int v15;  // [bp-0xc8]
    unsigned long long v16;  // [bp-0xb8]
    char v17;  // [bp-0xb0]
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rax

    v19 = nix::unistd::pipe();
    if ((unsigned int)v19 == -1)
    {
        *((char *)a0) = 45;
        *((unsigned long long *)&a0[4]) = 12884901887;
        *((unsigned int *)&a0[12]) = v19 >> 32;
        return a0;
    }
    else if (!(int)core::sync::atomic::atomic_compare_exchange(v19 >> 32))
    {
        v0.empty();
        v17.new(&v0);
        nix::sys::signal::sigaction(&v0, 1, &v17);
        if (*((int *)&v0) == 1)
        {
            v20 = 4294967342;
        }
        else
        {
            nix::sys::signal::sigaction(&v0, 2, &v17);
            if ((v0 & 1))
            {
                v20 = 8589934638;
            }
            else
            {
                nix::sys::signal::sigaction(&v0, 3, &v17);
                if ((v0 & 1))
                {
                    v20 = 12884901934;
                }
                else
                {
                    nix::sys::signal::sigaction(&v0, 15, &v17);
                    if (!(v0 & 1))
                    {
                        *((unsigned int *)&a0[4]) = v19;
                        *((char *)a0) = 56;
                        return a0;
                    }
                    v20 = 64424509486;
                }
            }
        }
        v5 = v11;
        v6 = v12;
        v7 = v13;
        v8 = v14;
        v9 = v15;
        v10 = v16;
        *((unsigned long long *)&a0[96]) = v16;
        a0[80] = v15;
        a0[64] = v14;
        a0[48] = v13;
        a0[32] = v12;
        a0[16] = v11;
        *((unsigned long long *)a0) = v20;
        *((unsigned long long *)&a0[8]) = v1 * 0x100000000 | 2;
        core::ptr::drop_in_place<std::os::fd::owned::OwnedFd>(v19);
        return a0;
    }
    else
    {
        v0 = &g_830fc8;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::panic_fmt(&(char)v0, &g_830fd8); /* do not return */
    }
}
