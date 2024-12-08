long long uu_wc::WcError::zero_len::h6f968c0864651c21(unsigned long long a0[4], unsigned long long a1[3], unsigned long long a2)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    unsigned long long v3;  // [sp-0x10]
    unsigned long long v4;  // [sp-0x8]
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdi
    unsigned long v9;  // r14
    unsigned long v10;  // rbx

    v6 = 0x8000000000000000;
    if (!a1)
    {
        a0[0] = 9223372036854775811;
        return a0;
    }
    if (a1[0] == 9223372036854775809)
    {
        v7 = "-";
        v8 = 1;
    }
    else
    {
        v4 = v9;
        v3 = v10;
        uucore::features::quoting_style::escape_name::h060bd1f56d9653f3(&v0, a1[1], a1[2], &anon.2d62524804cc4b2f7247b138d4e0921f.19.llvm.17271959582280866971);
        v6 = *((long long *)&v0);
        v7 = *((long long *)&v1);
        v8 = *((long long *)&v2);
    }
    a0[0] = v6;
    a0[1] = v7;
    a0[2] = v8;
    a0[3] = a2;
    return a0;
}
