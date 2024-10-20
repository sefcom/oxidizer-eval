long long uu_yes::prepare_buffer::hada7ea4a5253e80a(struct_0 *a0)
{
    unsigned long long v1;  // r14
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // r12
    unsigned long long v5;  // r15
    unsigned long long v6;  // r14
    unsigned long v7;  // r15

    v1 = a0->field_10;
    v2 = v1 * 2;
    if (v2 > 0x4000)
    {
        return v2;
    }
    else if (!v1)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else
    {
        v3 = 0x4000;
        if (v1 <= 0x4000)
        {
            v2 = (0 CONCAT 0x4000) /m (unsigned int)v1 & 4294967295;
            v3 = (0 CONCAT 0x4000) /m (unsigned int)v1 >> 32 & 4294967295;
        }
        v4 = 0x4000 - v3;
        if (v1 >= v4)
            return v2;
        do
        {
            v5 = v4 - v1;
            v7 = v6;
            if (a0->field_0 - v1 < v7)
            {
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::reserve::do_reserve_and_handle::hc181da6efca79882(a0, v1, v7);
                v1 = a0->field_10;
            }
            v2 = memcpy(a0->field_8 + v1, a0->field_8, v7);
            v1 += v7;
            a0->field_10 = v1;
        } while (v1 < v4);
        return v2;
    }
}
