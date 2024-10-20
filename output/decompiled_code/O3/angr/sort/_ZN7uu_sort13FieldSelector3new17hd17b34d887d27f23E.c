long long uu_sort::FieldSelector::new::hd17b34d887d27f23(struct_1 *a0, unsigned long long a1[3], struct_0 *a2, unsigned long a3)
{
    int v0;  // [sp-0x38]
    unsigned long long v1;  // [sp-0x28]
    int v2;  // [sp-0x20]
    unsigned long long v3;  // [sp-0x10]
    unsigned long long v6;  // rax
    uint128_t v7[3];  // rax

    if (a1[1])
    {
        v6 = a3 >> 40;
        v3 = a1[2];
        *((int128_t *)&v2) = *((int128_t *)&a1[0]);
        v1 = a2->field_10;
        *((uint128_t *)&v0) = a2->field_0;
        a0->field_20 = (long long)(&v2)[8];
        a0->field_28 = v3;
        *((void*)&a0->field_0) = v0;
        a0->field_10 = v1;
        a0->field_18 = (long long)v2;
        a0->field_34 = a3 >> 32;
        a0->field_30 = a3;
        a0->field_35 = v6;
        a0->field_36 = 1;
        a0->field_37 = (unsigned int)v6 != 2;
        return a0;
    }
    v7 = __rust_alloc(59, 1);
    if (v7)
    {
        *((int128_t *)((char *)&v7[2] + 11)) = 133485624513146996785960933456865752169;
        v7[2] = 146793563363748825717793806262549553253;
        v7[1] = 138842676100815432793774417478815391858;
        v7[0] = 134856349688948118446018713040161500777;
        a0->field_0 = 59;
        *((uint128_t *[3])&a0->padding_8[0]) = v7;
        a0->field_10 = 59;
        a0->field_37 = 2;
        return a0;
    }
    alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
}
