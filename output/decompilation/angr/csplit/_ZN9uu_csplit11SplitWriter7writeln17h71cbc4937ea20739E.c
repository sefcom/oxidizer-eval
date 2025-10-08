long long uu_csplit::SplitWriter::writeln(struct_0 *a0, void* a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    uint128_t v3;  // [bp-0x30]
    unsigned long long v5;  // r15
    unsigned long long v6;  // rax

    if (a0->field_38)
        return 0;
    if (!((char)(((0 ^ a0->field_0) & (0 ^ -(a0->field_0))) >> 63)))
    {
        v5 = a0->field_10;
        if (a2 < a0->field_0 - v5)
        {
            memcpy(a0->field_8 + v5, a1, a2);
            a0->field_10 = v5 + a2;
        }
        else
        {
            v6 = a0.write_all_cold(a1, a2);
            if (v6)
                return v6;
        }
        a0->field_30 = a0->field_30 + a2;
    }
    else
    {
        v0 = &g_642c60;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_642c70); /* do not return */
    }
    return 0;
}
