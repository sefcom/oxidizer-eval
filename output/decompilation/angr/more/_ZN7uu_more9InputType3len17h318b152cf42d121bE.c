long long uu_more::InputType::len(unsigned long long a0[2], unsigned long long *a1)
{
    char v0;  // [bp-0xb8]
    char v1;  // [bp-0xb0]
    char v2;  // [bp-0x68]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx

    if (*(a1))
    {
        v0.metadata(a1 + 5);
        if (*((int *)&v0) == 2)
        {
            v4 = *((long long *)&v1);
            a0[1] = v4;
            a0[0] = 2;
            return v4;
        }
        v5 = *((long long *)&v2);
        v6 = 1;
    }
    else
    {
        v6 = 0;
    }
    a0[0] = v6;
    a0[1] = v5;
    return v5;
}
