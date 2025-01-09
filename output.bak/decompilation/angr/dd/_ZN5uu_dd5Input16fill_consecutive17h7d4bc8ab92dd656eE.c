long long uu_dd::Input::fill_consecutive::h7d4bc8ab92dd656e(struct_3 *a0, struct_1 *a1, struct_2 *a2)
{
    int v0;  // [bp-0x60], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x58]
    unsigned long long v2;  // [sp-0x50]
    int v3;  // [sp-0x48]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    void* v7;  // rbp
    void* v8;  // r14
    void* v9;  // r12
    unsigned long long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long v12;  // rdx

    v5 = a1->field_8->field_70;
    if (!v2)
    {
        v0 = &g_5610a0;
        v1 = 1;
        v2 = 8;
        *((int128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0, &g_5610b0); /* do not return */
    }
    *((int128_t *)&v0) = *((int128_t *)&(&a2->padding_0)[1]);
    v2 = v5;
    v6 = _$LT$core..slice..iter..ChunksMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0385640c4904d04f(&v0);
    if (!v6)
    {
        v9 = 0;
        v8 = 0;
        v7 = 0;
    }
    else
    {
        v7 = 0;
        v8 = 0;
        v9 = 0;
        do
        {
            v11 = _$LT$uu_dd..Input$u20$as$u20$std..io..Read$GT$::read::h91bb47559be41a26(a1, v6, v10);
            if (v11)
            {
                a0->field_8 = v12;
                a0->field_0 = 1;
                return v11;
            }
            if (a1->field_8->field_70 == v12)
            {
                v7 += 1;
            }
            else
            {
                if (!v12)
                    break;
                v8 += 1;
            }
        } while ((v9 += v12, v6 = _$LT$core..slice..iter..ChunksMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0385640c4904d04f(&v0), v6));
    }
    v11 = alloc::vec::Vec$LT$T$C$A$GT$::truncate::h705e1c902b347a7b(a2, v9);
    a0->field_8 = v7;
    a0->field_10 = v8;
    a0->field_18 = v9;
    a0->field_20 = 0;
    a0->field_0 = 0;
    return v11;
}
