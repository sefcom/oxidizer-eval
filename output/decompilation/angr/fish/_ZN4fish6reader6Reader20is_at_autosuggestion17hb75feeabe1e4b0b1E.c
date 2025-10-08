long long fish::reader::Reader::is_at_autosuggestion(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v4;  // rax

    if (((a0->field_160 & 1) || a0->field_478) && a0->field_271)
        return 0;
    if (!a0->field_510)
        return 0;
    v2 = a0->field_78;
    v3 = v2;
    if (a0->field_84a)
    {
        v4 = v2 + 1;
        v3 = v4;
        if ((char)_ccall(4, 24, v2 + 1, 0, (unsigned long long)(char)(a0->field_84a < 0)))
        {
            v0 = v4;
            core::panicking::panic_const::panic_const_add_overflow(&g_14e0b18); /* do not return */
        }
    }
    return v3 & 0xffffffffffffff00 | v3 == a0->field_520;
}
