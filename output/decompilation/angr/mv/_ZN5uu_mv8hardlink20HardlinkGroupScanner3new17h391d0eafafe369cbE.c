double uu_mv::hardlink::HardlinkGroupScanner::new(long long a0)
{
    char v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long v3;  // rdx

    v0.try_with();
    v2 = v0.expect();
    *((uint128_t *)((char *)&a0->field_18 + 8)) = g_5d9f58;
    *((uint128_t *)&(&a0->field_10)[1]) = g_5d9f48;
    *((unsigned long long *)((char *)&a0->field_28 + 8)) = v2;
    a0->field_38 = v3;
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    *((char *)&a0->field_40) = 0;
    return (unsigned long long)g_5d9f48;
}
