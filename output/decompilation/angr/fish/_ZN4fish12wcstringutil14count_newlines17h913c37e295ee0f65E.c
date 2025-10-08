long long fish::wcstringutil::count_newlines(void* a0, unsigned long a1)
{
    unsigned long long v1;  // rdx
    void* v2;  // rax
    void* v3;  // 4096
    unsigned long v4;  // rdx
    unsigned long long v5;  // r8
    void* v6;  // rcx
    uint128_t v7;  // xmm0
    void* v8;  // rax
    uint128_t v9;  // xmm1
    uint256_t v10;  // ymm4
    uint256_t v11;  // ymm5
    uint256_t v12;  // ymm4
    int v13;  // xmm4
    int v14;  // xmm4
    uint128_t v15;  // xmm4
    int v16;  // xmm4
    int v17;  // xmm4
    uint128_t v18;  // xmm4
    void* v19;  // rcx
    void* v20;  // rdi

    if (!a1)
        return 0;
    v1 = 4611686018427387903 & a1 - 1;
    if (v1 < 3)
    {
        v2 = 0;
        v3 = a0;
    }
    else
    {
        v4 = v1 + 1;
        v5 = v4 & 18446744073709551612;
        v6 = a0 + v5 * 4;
        v7 = 0;
        v8 = 0;
        v9 = 0;
        do
        {
            v12 = v10 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)((char *)a0 + 0x4 * v8));
            v11 = v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | *((long long *)(8 + (char *)a0 + 0x4 * v8));
            v13 = (unsigned int)((uint128_t)v12 >> 96) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)((unsigned long long)v12 >> 32) CONCAT (unsigned int)v12;
            v14 = CmpEQV(v13, 184467440780045189130);
            v15 = v14 & 18446744073709551617;
            v7 = AddV(v7, v15);
            v16 = (unsigned int)((uint128_t)v11 >> 96) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)((unsigned long long)v11 >> 32) CONCAT (unsigned int)v11;
            v17 = CmpEQV(v16, 184467440780045189130);
            v18 = v17 & 18446744073709551617;
            v10 = (((((v12 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v15) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v18;
            v9 = AddV(v9, v18);
            v8 += 4;
        } while (v5 != v8);
        v2 = (unsigned long long)(AddV(((unsigned int)(AddV(v9, v7) >> 96) CONCAT (unsigned int)(AddV(v9, v7) >> 64) CONCAT (unsigned int)(AddV(v9, v7) >> 96) CONCAT (unsigned int)(AddV(v9, v7) >> 64)) & 18446744073709551615, AddV(v9, v7)));
        v3 = v6;
        if (v4 == v5)
            return AddV(((unsigned int)(AddV(v9, v7) >> 96) CONCAT (unsigned int)(AddV(v9, v7) >> 64) CONCAT (unsigned int)(AddV(v9, v7) >> 96) CONCAT (unsigned int)(AddV(v9, v7) >> 64)) & 18446744073709551615, AddV(v9, v7));
    }
    v19 = v3;
    do
    {
        v20 = v19 + 4;
        v2 += *((int *)v19) == 10;
        v19 = v20;
    } while (v19 != a0 + a1 * 4);
    return v2;
}
