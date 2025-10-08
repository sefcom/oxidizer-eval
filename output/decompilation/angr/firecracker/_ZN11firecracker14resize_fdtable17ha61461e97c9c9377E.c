long long firecracker::resize_fdtable()
{
    struct rlimit v0[2];  // [bp-0x28]
    unsigned int v2;  // ebp
    unsigned long long v3;  // rbx
    unsigned int v4;  // ebp
    unsigned long long v5;  // rbx

    *((uint128_t *)&v0) = 0;
    if (getrlimit(7, &v0) >= 0)
    {
        v2 = (*((long long *)&v0[0].rlim_cur) <= 2147483647 ? (int)*((long long *)&v0[0].rlim_cur) : 0x800);
        v3 = 3;
        if (v2 >= 4)
        {
            v4 = v2 - 1;
            if (dup2(0, v4) < 0)
            {
                v5 = 1;
            }
            else if (::libc.so.0::close(v4) < 0)
            {
                v5 = 2;
            }
            else
            {
                return 3;
            }
            ::libc.so.0::__errno_location();
            return v5;
        }
    }
    else
    {
        v3 = 0;
    }
    return v3;
}
