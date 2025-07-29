long long uu_yes::prepare_buffer(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rsi
    unsigned long long v4;  // r14
    unsigned long long v5;  // rax

    v0 = v2;
    v3 = a0->field_10;
    if (v3 > 0x2000)
    {
        return v2;
    }
    else if (v3)
    {
        v4 = 0x4000 - (((unsigned int)((0 CONCAT 0x4000) % (v3 & 4294967295)) CONCAT (unsigned int)((0 CONCAT 0x4000) / (v3 & 4294967295))) >> 32 & 65535) & 4294967295;
        do
        {
            v5 = a0.extend_from_within(core::cmp::min_by(v4 - v3, v3));
            v3 = a0->field_10;
        } while (a0->field_10 < v4);
        return v5;
    }
    else
    {
        core::panicking::panic("assertion failed: !buf.is_empty()src/uu/yes/src/yes.rs", 33, &g_563238); /* do not return */
    }
}
