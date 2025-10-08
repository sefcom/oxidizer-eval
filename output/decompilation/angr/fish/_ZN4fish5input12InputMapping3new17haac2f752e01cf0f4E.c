long long fish::input::InputMapping::new(struct_1 *a0, struct_2 *a1, struct_3 *a2, struct_0 *a3, void* a4, char a5)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    uint128_t v3;  // [bp-0x40]
    unsigned int v5;  // 4109
    unsigned int v6;  // eax
    unsigned long long v7;  // rax

    v5 = atomic_exchange_add(&_ZN4fish5input12InputMapping3new25LAST_INPUT_MAP_SPEC_ORDER17h4001521818525cf3E, 1);
    v6 = v5;
    if ((char)_ccall(4, 23, (unsigned long long)(v6 + 1), 0, (v5 + 1 <= v5 ? 1 : 0)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14da190); /* do not return */
    if (!((char)(((0 ^ *((long long *)a4)) & (0 ^ -(*((long long *)a4)))) >> 63)) && !a3->field_10)
    {
        v0 = &g_14da180;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14da1a8); /* do not return */
    }
    a0->field_10 = a1->field_10;
    a0->field_0 = a1->field_0;
    *((uint128_t *)&(&a0->field_10)[1]) = a2->field_0;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = a2->field_10;
    *((unsigned int *)&a0->field_48) = v6 + 1;
    *((uint128_t *)&a0->field_28) = a3->field_0;
    *((unsigned long long *)&a0->field_30) = a3->field_10;
    *((int128_t *)((char *)&a0->field_30 + 8)) = *((int128_t *)a4);
    v7 = (long long)a4[16];
    (&a0->field_40)[1] = v7;
    *((char *)&a0->field_48 + 4) = a5;
    return v7;
}
