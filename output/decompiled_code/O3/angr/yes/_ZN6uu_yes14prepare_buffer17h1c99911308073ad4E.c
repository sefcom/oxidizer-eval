long long uu_yes::prepare_buffer::h1c99911308073ad4(struct_0 *a0)
{
    unsigned long long v0;  // [sp-0x18]
    unsigned long v2;  // rax
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // r14
    unsigned long long v7;  // rdx

    v0 = v2;
    v3 = a0->field_10;
    v4 = v3 * 2;
    if (v4 > 0x4000)
    {
        return v4;
    }
    else if (!v3)
    {
        core::panicking::panic::h8c3a660c3523e4a4(); /* do not return */
    }
    else
    {
        v5 = 0x4000;
        if (v3 <= 0x4000)
        {
            v4 = (0 CONCAT 0x4000) /m (unsigned int)v3 & 4294967295;
            v5 = (0 CONCAT 0x4000) /m (unsigned int)v3 >> 32 & 4294967295;
        }
        v6 = 0x4000 - v5;
        if (v3 >= v6)
            return v4;
        do
        {
            v4 = alloc::vec::Vec$LT$T$C$A$GT$::extend_from_within::h54d83f49dcdd1f9d(a0, core::cmp::min_by::hfab9737ec9d0c658(v6 - v3, v3), v7);
            v3 = a0->field_10;
        } while (v3 < v6);
        return v4;
    }
}
