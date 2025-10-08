long long fish::builtins::jobs::cpu_use(unsigned long long a0, unsigned long a1)
{
    void* v0;  // [bp-0x48], Other Possible Types: unsigned long
    unsigned long v1;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    struct_0 *v5;  // rax
    uint256_t v7;  // ymm0
    uint256_t v8;  // ymm1
    unsigned long long v9;  // xmm0lq
    unsigned int *v10;  // rax
    unsigned long long v11;  // rax
    unsigned long v12;  // rcx
    int v13;  // xmm0
    int v14;  // xmm0
    int v15;  // xmm0
    int v16;  // xmm1
    int v17;  // xmm1
    int v18;  // xmm1
    uint256_t v19;  // ymm0
    int v20;  // xmm0
    int v21;  // xmm0

    v2 = a0;
    v3 = a1 * 224 + a0;
    v5 = v2.find();
    if (!v5)
    {
        v0 = 0;
        return v5;
    }
    v0 = 0;
    while (true)
    {
        fish::common::timef();
        v1 = v9;
        v10 = v5->padding_0[144].get();
        if (!v10)
            core::option::unwrap_failed(&g_14ca7b0); /* do not return */
        v11 = fish::proc::proc_get_jiffies(*(v10));
        v12 = v5->field_b8;
        v13 = v12;
        v14 = InterleaveLOV(0x4530000043300000, v13);
        v15 = v14 - 0x45300000000000004330000000000000;
        v7 = ((v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15;
        if (v11 > v12)
        {
            v16 = v15;
            v17 = (unsigned long long)(v15 >> 64) CONCAT (unsigned long long)(v16 >> 64);
            v18 = AddV(v17, v15);
            v8 = ((v8 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v16) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v17) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v18;
            v19 = v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v1;
            v20 = SubV((uint128_t)v19, v18);
            v7 = v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v20;
            if (((CmpF((unsigned long long)v7, 0) & 69 | (char)((CmpF((unsigned long long)v7, 0) & 69) >> 6)) & 1) != 1)
            {
                v1 = v7;
                fish::proc::clock_ticks_to_seconds(v11 - v12);
                v21 = DivV(v20, v1);
                v7 = v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v21;
                v8 = (v8 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v0) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(AddV(v0, v21));
                v0 = v8;
            }
        }
        v5 = v2.find();
        if (!v5)
            return v5;
    }
}
