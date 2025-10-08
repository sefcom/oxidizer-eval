long long fish::screen::ScreenData::create_line(struct_0 *a0, unsigned long long a1)
{
    void* v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    uint128_t v2;  // [bp-0x28]
    char v3;  // [bp-0x18]

    if (a1 >= a0->field_20)
    {
        if (!((char)_ccall(4, 24, a1 + 1, 0, (unsigned long long)(char)(a1 < a0->field_20))))
        {
            v0 = 0;
            v1 = 8;
            v2 = 0;
            v3 = 0;
            a0->padding_0[16].resize(a1 + 1, &v0);
        }
        else
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14e1678); /* do not return */
        }
    }
    return a0.line_mut(a1);
}
