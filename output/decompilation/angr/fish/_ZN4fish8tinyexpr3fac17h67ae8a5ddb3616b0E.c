long long fish::tinyexpr::fac()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    char v2;  // [bp-0x8]
    int v4;  // ymm1
    uint256_t v5;  // ymm1
    int v6;  // ymm0
    unsigned long v7;  // rax
    unsigned long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long v10;  // cc_ndep
    unsigned long long v11;  // rdx

    v5 = v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    if ((((char)(CmpF(0, (unsigned long long)v6) & 69) | (char)((CmpF(0, (unsigned long long)v6) & 69) >> 6)) & 1) != 1)
    {
        return v7;
    }
    else if ((((char)(CmpF((unsigned long long)v6, 0x43f0000000000000) & 69) | (char)((CmpF((unsigned long long)v6, 0x43f0000000000000) & 69) >> 6)) & 1) != 1)
    {
        return v8;
    }
    else
    {
        v9 = (unsigned long long)(SubV((uint128_t)v6, 0x43e0000000000000)) & (unsigned long long)v6 >> 63 | (unsigned long long)v6;
        if (!((char)_ccall(3, 0, (unsigned long long)(CmpF((unsigned long long)v6, 0) & 69), 0, v10)))
            v9 = 0;
        if (((CmpF((unsigned long long)v6, 4895412794951729151) & 69 | (char)((CmpF((unsigned long long)v6, 4895412794951729151) & 69) >> 6)) & 1) != 1)
            v9 = 18446744073709551615;
        v0 = 1;
        v1 = v9;
        v2 = 0;
        return v0.spec_try_fold().map_or(v11);
    }
}
