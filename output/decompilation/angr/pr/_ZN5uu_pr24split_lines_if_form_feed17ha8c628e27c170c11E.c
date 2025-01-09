double uu_pr::split_lines_if_form_feed::ha8c628e27c170c11(long long a0, long long a1)
{
    int v0;  // [sp-0x38]
    unsigned long long v1;  // [sp-0x28]
    char v2;  // [bp-0x20]
    char v3;  // [bp-0x10]
    unsigned long long v4;  // [sp-0x8]
    unsigned long v6;  // rbx
    int v7;  // xmm0
    int v8;  // ymm0
    int v9;  // xmm0
    unsigned long long v10;  // rax
    int v11;  // ymm0

    if (a1[0] != 0x8000000000000000)
    {
        v4 = v6;
        v1 = a1[2];
        v7 = *((int128_t *)&a1[0]);
        v0 = v7;
        uu_pr::split_lines_if_form_feed::_$u7b$$u7b$closure$u7d$$u7d$::hfab3542512aec1ce(&v2, &v0);
        v9 = *((int128_t *)&v2);
        v10 = *((long long *)&v3);
        *((void*)&a0->field_0) = v9;
        a0->field_10 = v10;
        return (unsigned long long)((v11 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v7) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v9);
    }
    uu_pr::split_lines_if_form_feed::_$u7b$$u7b$closure$u7d$$u7d$::h8a95074bb9280ff2(a0, a1[1]);
    return (unsigned long long)v8;
}
