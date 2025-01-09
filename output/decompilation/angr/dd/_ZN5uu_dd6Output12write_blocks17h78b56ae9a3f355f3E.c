long long uu_dd::Output::write_blocks::h78b56ae9a3f355f3(unsigned long long a0[6], struct_1 *a1, unsigned long a2, unsigned long a3)
{
    unsigned long v0;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0x58]
    unsigned long long v2;  // [sp-0x50]
    int v3;  // [sp-0x48]
    unsigned long v6;  // rax
    void* v7;  // r12
    void* v8;  // r13
    void* v9;  // rbp
    unsigned long v10;  // rdx
    struct_0 *v11;  // rax
    unsigned long v12;  // rdx

    if (!v2)
    {
        v0 = &g_5610a0;
        v1 = 1;
        v2 = 8;
        *((uint128_t *)&v3) = 0;
        core::panicking::panic_fmt::he12d0d7468628bb4(&v0, &g_561120); /* do not return */
    }
    v0 = a2;
    v1 = a3;
    v2 = a1->field_10->field_78;
    v6 = ::0x4d65a0::_$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45c1de6715574df6(&v0);
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
            if (uu_dd::Output::write_block::h75bb814762c2a847(a1, v6, v10))
            {
                a0[1] = v12;
                a0[0] = 1;
                return a0;
            }
        } while ((v11 = a1->field_10, v8 += (unsigned long long)(char)!(v11->field_78 <= v12), v7 += (unsigned long long)(char)(v11->field_78 <= v12), v9 += v12, v6 = ::0x4d65a0::_$LT$core..slice..iter..Chunks$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h45c1de6715574df6(&v0), v6));
    }
    a0[2] = v9;
    a0[3] = 0;
    a0[4] = v7;
    a0[5] = v8;
    a0[0] = 0;
    return a0;
}
