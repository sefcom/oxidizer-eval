long long uu_date::parse_date::h4c996da3363bf8c7(struct_0 *a0, unsigned long long a1[3], unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x78]
    char v2;  // [bp-0x70]
    int v3;  // [sp-0x68]
    unsigned long long v4;  // [sp-0x58]
    char v5;  // [bp-0x50]
    char v6;  // [bp-0x40]
    char v7;  // [bp-0x30]
    unsigned long long v9;  // r15
    unsigned long long v10;  // r12
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rcx
    unsigned long long v13;  // r8
    unsigned long long v14;  // r9
    int v15;  // xmm0
    int v16;  // xmm1

    v9 = a1[1];
    v10 = a1[2];
    parse_datetime::parse_datetime::h1b059e50388dab8a(&v0, ::0x56fe80::_$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h98391d7b071887d9(v9, v10), v11, v12, v13, v14);
    if (*((long long *)&v0) == 9223372036854775810)
    {
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        a0->field_0 = 0x8000000000000000;
    }
    else
    {
        v4 = *((long long *)&v2);
        *((int128_t *)&v3) = *((int128_t *)&v0);
        uu_date::parse_date::_$u7b$$u7b$closure$u7d$$u7d$::h7931b4ec548d82de(&v5, v9, v10, &v3);
        v15 = *((int128_t *)&v5);
        v16 = *((int128_t *)&v6);
        *((int128_t *)&a0->padding_18) = *((int128_t *)&v7);
        *((void*)&a0->field_8) = v16;
        *((void*)&a0->field_0) = v15;
    }
    return ::0x56d810::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8da1b1dd4dbf4c18(a1);
}
