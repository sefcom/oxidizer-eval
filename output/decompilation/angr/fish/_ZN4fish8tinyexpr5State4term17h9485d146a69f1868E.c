long long fish::tinyexpr::State::term(void* a0)
{
    unsigned int v0;  // [bp-0x168]
    char v1[1];  // [bp-0x39]
    unsigned long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v5;  // rax
    int v6;  // xmm0
    unsigned long long v7;  // xmm0lq
    unsigned long v8;  // rax
    unsigned long v9;  // r12
    unsigned long long v10;  // rax
    int v11;  // ymm1, Other Possible Types: uint256_t

    v5 = a0.factor();
    if (*((int *)a0) != 11)
        return v5;
    while (true)
    {
        v7 = v3;
        v8 = (char)a0[8];
        if ((unsigned int)v8 > 5)
            return v8;
        v0 = 44;
        if (!(*((char *)&v0 + ((v8 & 255 & 31) >> 3)) >> ((char)v8 & 31 & 7) & 1))
            return v8;
        v3 = v7;
        *(v1) = v8;
        v9 = (long long)a0[56];
        if ((long long)a0[56] < 1)
            core::panicking::panic_const::panic_const_sub_overflow(&g_14e3968); /* do not return */
        a0.next_token();
        a0.factor();
        v11 = v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6;
        if (((char)((CmpF(v7, 0) & 69) >> 6) & 1) == 1 && !((char)_ccall(10, 0, (unsigned long long)(CmpF(v7, 0) & 69), 0, 0)))
        {
            v2 = v11;
            v11 = v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v2;
            if (v1.slice_contains())
            {
                *((unsigned long long *)a0) = 4;
                *((unsigned long *)&a0[16]) = v9 - 1;
                *((unsigned long long *)&a0[24]) = 1;
                *((char *)&a0[32]) = 7;
            }
        }
        v10 = (unsigned long long)v1.eval();
        v3 = v3;
        if (*((int *)a0) != 11)
            return v10;
    }
}
