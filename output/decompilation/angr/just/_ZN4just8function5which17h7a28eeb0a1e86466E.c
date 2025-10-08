long long just::function::which(unsigned long long a0[4], unsigned long long *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x28]
    void* v1;  // [bp-0x20]
    char v2;  // [bp-0x10]
    void* v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rsi
    void* v7;  // rdi
    unsigned long long v8;  // cc_ndep
    unsigned long long v9;  // rcx

    just::which::which(&v0, *(a1), a2, a3);
    v4 = v1;
    v5 = *((long long *)&v2);
    v6 = 1;
    if (!(v0 & 1))
    {
        v6 = 0;
        v7 = v4;
        if ((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63))
            v4 = 0;
        if ((char)_ccall(0, 8, 0, v7, v8))
        {
            v9 = 1;
            if (!((char)_ccall(0, 8, 0, v7, v8)))
                goto LABEL_66ca54;
LABEL_66ca53:
            v5 = 0;
        }
        else
        {
            v9 = v9;
            if ((char)_ccall(0, 8, 0, v7, v8))
                goto LABEL_66ca53;
LABEL_66ca54:
        }
    }
    a0[1] = v4;
    a0[2] = v9;
    a0[3] = v5;
    a0[0] = v6;
    return a0;
}
