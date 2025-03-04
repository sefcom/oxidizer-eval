long long uu_fmt::linebreak::restart_active_breaks::h2b91feff430673ac(struct_1 *a0, struct_2 *a1, unsigned long long a2, unsigned int a3, char a4, unsigned long long a5, struct_0 *a6, unsigned long a7, unsigned long a8)
{
    unsigned long long v0;  // [sp-0x38]
    struct_0 *v1;  // rax
    unsigned int v2;  // ymm0
    char v3;  // bpl
    unsigned long long v4;  // rax

    v1 = a6;
    v2 = 0xbf800000;
    if (a4)
    {
        v3 = 0;
    }
    else
    {
        v0 = a6->field_28;
        v3 = 0;
        v4 = v0;
        if (a7 + a3 + uu_fmt::linebreak::BreakArgs::compute_width::hfc2bd23d7c87d18b(a1, a6, a3, 0) + v4 - a1->field_30 <= a8 - a3)
        {
            v1 = a6;
            v2 = 0xbf800000;
        }
        else
        {
            v3 = 1;
            v2 = 0x3f800000;
            v1 = a6;
        }
    }
    a0->field_0 = a5;
    a0->field_8 = v1;
    a0->field_24 = v3;
    a0->field_10 = 0;
    a0->field_20 = v2;
    a0->field_18 = a2 + v4;
    a0->field_25 = v3 ^ 1;
    return v1;
}
