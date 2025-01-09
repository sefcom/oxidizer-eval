long long uu_date::parse_date::h3e04b396edc04cd0(struct_0 *a0, unsigned long long a1[3])
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
    int v12;  // xmm0
    int v13;  // xmm1

    v9 = a1[1];
    v10 = a1[2];
    parse_datetime::parse_datetime::h31f6ee9f0c9ea07f(&v0, ::0x570ce0::_$LT$alloc..string..String$u20$as$u20$core..convert..AsRef$LT$str$GT$$GT$::as_ref::h98391d7b071887d9(v9, v10), v11);
    if (*((long long *)&v0) == 9223372036854775810)
    {
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v1);
        a0->field_0 = 0x8000000000000000;
    }
    else
    {
        v4 = *((long long *)&v2);
        *((int128_t *)&v3) = *((int128_t *)&v0);
        uu_date::parse_date::_$u7b$$u7b$closure$u7d$$u7d$::h67e856eb4e5a9f91(&v5, v9, v10, &v3);
        v12 = *((int128_t *)&v5);
        v13 = *((int128_t *)&v6);
        *((int128_t *)&a0->padding_18) = *((int128_t *)&v7);
        *((void*)&a0->field_8) = v13;
        *((void*)&a0->field_0) = v12;
    }
    return ::0x56e670::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h46caac69925be4b1(a1);
}
