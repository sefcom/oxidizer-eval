long long uu_yes::prepare_buffer::h0a69ad01ffb7db57(struct_0 *a0)
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
            v4 = ((unsigned int)((0 CONCAT 0x4000) % (v3 & 4294967295)) CONCAT (unsigned int)((0 CONCAT 0x4000) / (v3 & 4294967295))) & 4294967295;
            v5 = ((unsigned int)((0 CONCAT 0x4000) % (v3 & 4294967295)) CONCAT (unsigned int)((0 CONCAT 0x4000) / (v3 & 4294967295))) >> 32 & 4294967295;
        }
        v6 = 0x4000 - v5;
        if (v3 >= v6)
            return v4;
        do
        {
            v4 = alloc::vec::Vec$LT$T$C$A$GT$::extend_from_within::h41055947fdb33520(a0, core::cmp::min_by::hd689102d52ee7212(v6 - v3, v3), v7);
            v3 = a0->field_10;
        } while (v3 < v6);
        return v4;
    }
}
