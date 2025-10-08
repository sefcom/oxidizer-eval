long long firecracker::seccomp::SeccompConfig::from_args(void* a0, unsigned int a1, unsigned long long a2)
{
    char v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long v5;  // rax
    unsigned long long v6;  // rbx
    unsigned long v7;  // rax

    if (a1)
    {
        *((unsigned int *)&a0[4]) = 0;
        *((char *)a0) = 21;
        return v5;
    }
    else if (a2)
    {
        v3 = v6;
        v0.open(a2);
        if (!(v0 & 1))
        {
            *((unsigned int *)&a0[4]) = 2;
            *((unsigned int *)&a0[8]) = v1;
            *((char *)a0) = 21;
            return v1;
        }
        *((char *)a0) = 20;
        *((unsigned long *)&a0[8]) = v2;
        return v2;
    }
    else
    {
        *((unsigned int *)&a0[4]) = 1;
        *((char *)a0) = 21;
        return v7;
    }
}
